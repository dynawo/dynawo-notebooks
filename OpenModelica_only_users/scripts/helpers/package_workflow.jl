# helpers/package_workflow.jl
# Package-level orchestration helpers for the full initialization workflow.

"""
    package_workflow_paths(model, model_dir, output_dir) -> NamedTuple

Build the derived package names and file paths used by the package workflow.
"""
function package_workflow_paths(model::String, model_dir::String, output_dir::String)
    model_parts = split(model, ".")
    length(model_parts) >= 2 ||
        error("Package workflow expects a qualified model name, for example MyNordic.TestCase")

    source_package = String(model_parts[1])
    root_model_name = String(model_parts[end])

    aux_package = source_package * "_auxiliary"
    aux_dir = joinpath(output_dir, aux_package)
    aux_root_model = aux_package * "." * root_model_name * "_auxiliary"

    initialized_package = source_package * "_initialized"
    initialized_dir = joinpath(output_dir, initialized_package)
    initialized_root_model = initialized_package * "." * root_model_name * "_initialized"

    return (
        source_package = source_package,
        root_model_name = root_model_name,
        source_package_file = joinpath(model_dir, "package.mo"),
        aux_package = aux_package,
        aux_dir = aux_dir,
        aux_root_model = aux_root_model,
        aux_package_file = joinpath(aux_dir, "package.mo"),
        aux_order_file = joinpath(aux_dir, "package.order"),
        initialized_package = initialized_package,
        initialized_dir = initialized_dir,
        initialized_root_model = initialized_root_model,
        initialized_package_file = joinpath(initialized_dir, "package.mo"),
        initialized_order_file = joinpath(initialized_dir, "package.order"),
    )
end

"""
    package_name_map(chain, package_name, suffix) -> Dict{String,String}

Map each source class in an inheritance chain to a generated package class.
"""
function package_name_map(chain, package_name::String, suffix::String)
    return Dict(
        String(model) => package_name * "." * String(split(String(model), ".")[end]) * suffix
        for model in chain
    )
end

auxiliary_name_map(chain, aux_package::String) =
    package_name_map(chain, aux_package, "_auxiliary")

initialized_name_map(chain, initialized_package::String) =
    package_name_map(chain, initialized_package, "_initialized")

package_class_names(chain, name_map::Dict{String, String}) =
    [String(split(name_map[String(model)], ".")[end]) for model in chain]

"""
    write_package_files!(package_file, order_file, package_name, class_names)

Write `package.mo` and `package.order` for a generated package.
"""
function write_package_files!(
    package_file::String,
    order_file::String,
    package_name::String,
    class_names::Vector{String},
)
    mkpath(dirname(package_file))

    open(package_file, "w") do io
        print(io, "within ;\npackage $package_name\nend $package_name;\n")
    end

    open(order_file, "w") do io
        for class_name in class_names
            println(io, class_name)
        end
    end

    return nothing
end

"""
    collect_package_component_contexts(omc, chain) -> NamedTuple

Collect per-class component dictionaries and cumulative patch contexts for an
inheritance-chain package transformation.
"""
function collect_package_component_contexts(omc, chain)
    components_by_model = Dict{String, Dict{String, Dict{String, Any}}}()
    patch_components_by_model = Dict{String, Dict{String, Dict{String, Any}}}()
    cumulative_components = Dict{String, Dict{String, Any}}()
    global_blacklist_names = Set{String}()

    for model in chain
        model_name = String(model)
        model_components = get_all_components(omc, model_name)

        components_by_model[model_name] = model_components
        union!(global_blacklist_names, collect_cleanup_component_names(model_components))

        merge!(cumulative_components, model_components)
        patch_components_by_model[model_name] = copy(cumulative_components)
    end

    return (
        components_by_model = components_by_model,
        patch_components_by_model = patch_components_by_model,
        global_blacklist_names = global_blacklist_names,
    )
end

"""
    save_auxiliary_package_classes!(omc, chain, aux_name_map, aux_dir, patch_components_by_model, slack_component)

Save generated auxiliary classes, rewrite inherited parents to auxiliary
parents, and clean the auxiliary equations.
"""
function save_auxiliary_package_classes!(
    omc,
    chain,
    aux_name_map::Dict{String, String},
    aux_dir::String,
    patch_components_by_model::Dict{String, Dict{String, Dict{String, Any}}},
    slack_component::String,
)
    mkpath(aux_dir)

    for model in chain
        model_name = String(model)
        aux_model = aux_name_map[model_name]
        aux_name = String(split(aux_model, ".")[end])
        aux_file = joinpath(aux_dir, aux_name * ".mo")

        clean_aux_equations!(omc, aux_model, patch_components_by_model[model_name], slack_component)

        text = String(omc_call(omc, "listFile($aux_model)"))
        text = rewrite_aux_extends(text, aux_name_map)

        open(aux_file, "w") do io
            print(io, text)
            endswith(text, "\n") || print(io, "\n")
        end
    end

    return nothing
end

"""
    save_initialized_package_classes!(omc, chain, initialized_name_map, initialized_dir)

Save generated initialized classes and rewrite inherited parents to initialized
parents.
"""
function save_initialized_package_classes!(
    omc,
    chain,
    initialized_name_map::Dict{String, String},
    initialized_dir::String,
)
    mkpath(initialized_dir)

    for model in chain
        model_name = String(model)
        initialized_model = initialized_name_map[model_name]
        initialized_name = String(split(initialized_model, ".")[end])
        initialized_file = joinpath(initialized_dir, initialized_name * ".mo")

        text = String(omc_call(omc, "listFile($initialized_model)"))
        text = rewrite_initialized_extends(text, initialized_name_map)

        open(initialized_file, "w") do io
            print(io, text)
            endswith(text, "\n") || print(io, "\n")
        end
    end

    return nothing
end

"""
    simulation_flags_without_log_stats(omc, model::String) -> String

Return the model's `__OpenModelica_simulationFlags` annotation as a runtime
`simflags` string, excluding `lv`.
"""
function simulation_flags_without_log_stats(omc, model::String)
    flag_names = sendExpression(
        omc,
        "getAnnotationNamedModifiers($model, \"__OpenModelica_simulationFlags\")",
    )

    isnothing(flag_names) && return ""

    simflag_parts = String[]
    for flag_name in flag_names
        flag_name == "lv" && continue

        flag_value = sendExpression(
            omc,
            "getAnnotationModifierValue($model, \"__OpenModelica_simulationFlags\", \"$flag_name\")",
        )

        if flag_value == "()"
            push!(simflag_parts, "-$flag_name")
        else
            push!(simflag_parts, "-$flag_name=$flag_value")
        end
    end

    return join(simflag_parts, " ")
end

"""
    print_omc_errors(omc, label::String)

Print OpenModelica messages with a readable label.
"""
function print_omc_errors(omc, label::String)
    raw = String(sendExpression(omc, "getErrorString()", parsed = false))
    text = strip(replace(raw, "\"" => ""))
    println("\n[$label] getErrorString()")
    println(isempty(text) ? "<no messages>" : raw)
    return nothing
end

"""
    run_omc_diagnostic(omc, label::String, expr::String)

Run one diagnostic OpenModelica expression and print its messages.
"""
function run_omc_diagnostic(omc, label::String, expr::String)
    sendExpression(omc, "clearMessages()")
    println("\n=== $label ===")
    println("OMC -> ", expr)
    try
        result = sendExpression(omc, expr, parsed = false)
        println(result)
    catch err
        println("Julia/OMJulia error while running: ", expr)
        showerror(stdout, err)
        println()
    end
    print_omc_errors(omc, label)
    return nothing
end
