# scripts/initialization_build.jl
# Initialization extraction and model update helpers

module InitializationBuild
using OMJulia

using ..InitializationOmc: om_send

export
    get_initializable_components,
    extract_load_values,
    extract_all_initialization_values,
    apply_initialization_modifiers!,
    rewrite_initialized_extends

"""
    _resolve_init_params(component, class, init_params, init_model_by_component)

Resolve the initialization parameter mapping for one component.

If a class has multiple profiles, this validates and applies the profile
selected in `init_model_by_component`.
"""
function _resolve_init_params(component::AbstractString, class::AbstractString, init_params, init_model_by_component)
    haskey(init_params, class) || return nothing

    spec = init_params[class]
    if isa(spec, Dict) && haskey(spec, "profiles")
        haskey(init_model_by_component, component) || error("Missing INIT model selection for component $component of class $class")
        profile_name = init_model_by_component[component]
        profiles = spec["profiles"]
        haskey(profiles, profile_name) || error("Unknown INIT profile $profile_name for component $component of class $class")
        return profiles[profile_name]
    end

    if haskey(init_model_by_component, component)
        profile_name = init_model_by_component[component]
        error("Component $component selects INIT profile $profile_name, but class $class has no profiles")
    end

    return spec
end

"""
    get_initializable_components(components, init_params, init_model_by_component = Dict{String, String}())

Filter `components` down to the subset whose classes appear in `init_params`
with a valid initialization mapping.
"""
function get_initializable_components(components, init_params, init_model_by_component = Dict{String, String}())
    initializable = Dict{String, Dict{String, Any}}()

    for (component, info) in components
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        isnothing(param_pairs) && continue
        initializable[component] = info
    end

    return initializable
end

"""
    _read_result_value(aux_session, full_name::AbstractString) -> Float64

Read the final simulated value of `full_name` from the auxiliary result file.
"""
function _read_result_value(aux_session, full_name::AbstractString)
    isempty(aux_session.resultfile) && error("Auxiliary session has no result file. Run simulate(...) before extracting initialization values.")
    values = getSolutions(aux_session, String(full_name))
    series = values[1]
    isempty(series) && error("No values found in $(aux_session.resultfile) for $(full_name)")
    return Float64(series[end])
end

"""
    extract_component_initialization_values(aux_session, component, param_pairs) -> Dict{String, Float64}

Extract all initialization values for one component from its companion
`<component>_INIT` block in the auxiliary simulation results.
"""
function extract_component_initialization_values(aux_session, component, param_pairs)
    init_component = component * "_INIT"
    values = Dict{String, Float64}()

    for (init_var, dynamic_var) in param_pairs
        full_name = init_component * "." * init_var
        values[dynamic_var] = _read_result_value(aux_session, full_name)
    end

    return values
end

"""
    extract_load_values(aux_session, components) -> Dict{String, Dict{String, Float64}}

Extract load initialization values directly from the auxiliary simulation
results for every component whose class belongs to `Dynawo.Electrical.Loads.*`.
The returned dictionary uses the same dynamic variable keys as `INIT_PARAMS`,
so the standard modifier injection path can reuse it unchanged.
"""
function extract_load_values(aux_session, components)
    values_by_component = Dict{String, Dict{String, Float64}}()

    for (component, info) in components
        class_name = info["class"]
        startswith(class_name, "Dynawo.Electrical.Loads.") || continue

        vre = _read_result_value(aux_session, component * ".terminal.V.re")
        vim = _read_result_value(aux_session, component * ".terminal.V.im")
        ire = _read_result_value(aux_session, component * ".terminal.i.re")
        iim = _read_result_value(aux_session, component * ".terminal.i.im")

        v = complex(vre, vim)
        i = complex(ire, iim)
        s = v * conj(i)

        values_by_component[component] = Dict(
            "u0Pu.re" => real(v),
            "u0Pu.im" => imag(v),
            "i0Pu.re" => real(i),
            "i0Pu.im" => imag(i),
            "s0Pu.re" => real(s),
            "s0Pu.im" => imag(s),
        )
    end

    return values_by_component
end

"""
    extract_all_initialization_values(aux_session, components, init_params, init_model_by_component = Dict{String, String}())

Extract initialization values for every component that needs to be initialized.
Load classes under `Dynawo.Electrical.Loads.*` are extracted directly from the
auxiliary terminal voltage/current results; all other classes keep using the
companion `<component>_INIT` blocks.
"""
function extract_all_initialization_values(aux_session, components, init_params, init_model_by_component = Dict{String, String}())
    values_by_component = Dict{String, Dict{String, Float64}}()

    merge!(values_by_component, extract_load_values(aux_session, components))

    for (component, info) in components
        startswith(info["class"], "Dynawo.Electrical.Loads.") && continue
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        isnothing(param_pairs) && continue
        values_by_component[component] = extract_component_initialization_values(aux_session, component, param_pairs)
    end

    return values_by_component
end

"""
    _code_modification_from_assignments(assignments::Vector{String}) -> String

Build an OpenModelica modification string of the form `\$Code((...))`.
"""
function _code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

"""
    build_modifier_assignments(info, param_pairs, values) -> Vector{String}

Merge existing component modifiers with extracted initialization values and
return the resulting list of Modelica assignment fragments.
"""
function build_modifier_assignments(info, param_pairs, values)
    modifiers = Dict{String, String}(info["modifiers"])
    call_modifiers = Dict{String, String}(info["call_modifiers"])

    dynamic_vars = [dynamic_var for (_, dynamic_var) in param_pairs]
    scalar_vars = [v for v in dynamic_vars if !(endswith(v, ".re") || endswith(v, ".im"))]
    complex_bases = unique(replace(v, r"\.(re|im)$" => "") for v in dynamic_vars if endswith(v, ".re") || endswith(v, ".im"))

    for field in scalar_vars
        haskey(values, field) || error("Missing extracted value for $field")
        modifiers[field] = string(values[field])
    end

    for base in complex_bases
        real_key = base * ".re"
        imag_key = base * ".im"
        haskey(values, real_key) || error("Missing extracted value for $real_key")
        haskey(values, imag_key) || error("Missing extracted value for $imag_key")
        modifiers[base] = "Complex($(values[real_key]), $(values[imag_key]))"
    end

    assignments = String[]
    for (field, value) in modifiers
        push!(assignments, "$(field) = $(value)")
    end
    for (field, value) in call_modifiers
        push!(assignments, "$(field)($(value))")
    end

    return assignments
end

"""
    apply_initialization_modifiers!(omc, target_model, initializable_components, init_params, values_by_component, init_model_by_component = Dict{String, String}())

Update each initializable component in `target_model` with the extracted
initialization values.
"""
function apply_initialization_modifiers!(omc, target_model, initializable_components, init_params, values_by_component, init_model_by_component = Dict{String, String}())
    for (component, info) in initializable_components
        haskey(values_by_component, component) || error("Missing extracted values for $component")
        current_class = info["class"]
        param_pairs = _resolve_init_params(component, current_class, init_params, init_model_by_component)
        assignments = build_modifier_assignments(info, param_pairs, values_by_component[component])
        mod_str = _code_modification_from_assignments(assignments)
        om_send(omc, "updateComponent($component, $current_class, $target_model, modification = $mod_str)", parsed = false)
    end
end

"""
    rewrite_initialized_extends(txt::String, initialized_name_map::Dict{String, String}) -> String

Rewrite `extends OriginalParent` clauses so that copied initialized classes
inherit from their initialized parents instead of the original package.
"""
function rewrite_initialized_extends(txt::String, initialized_name_map::Dict{String, String})
    rewritten = txt
    for (original_parent, initialized_parent) in initialized_name_map
        escaped_parent = replace(original_parent, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        pattern = Regex("(?m)(\\bextends\\s+)" * escaped_parent * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * initialized_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end

end # module
