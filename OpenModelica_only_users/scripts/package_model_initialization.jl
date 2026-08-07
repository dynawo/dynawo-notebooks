# High-level initialization helper for parametric studies of package models.

module PackageModelInitialization

using OMJulia
using ..WorkflowHelpers
using ..ParametricStudyHelpers:
    _transform_auxiliary_class!,
    _simulate_auxiliary_model!,
    _build_initialized_class!

export initialize_loaded_package_model

function _package_case_paths(source_model::String, case_name::String, output_dir::String)
    modelica_output_dir = joinpath(output_dir, "modelica")
    root_model_name = String(split(source_model, ".")[end])

    auxiliary_package = case_name * "_auxiliary"
    auxiliary_dir = joinpath(modelica_output_dir, auxiliary_package)
    auxiliary_model = auxiliary_package * "." * root_model_name * "_auxiliary"

    initialized_package = case_name * "_initialized"
    initialized_dir = joinpath(modelica_output_dir, initialized_package)
    initialized_model = initialized_package * "." * root_model_name * "_initialized"

    return (
        modelica_output_dir = modelica_output_dir,
        auxiliary_package = auxiliary_package,
        auxiliary_dir = auxiliary_dir,
        auxiliary_model = auxiliary_model,
        auxiliary_package_file = joinpath(auxiliary_dir, "package.mo"),
        auxiliary_order_file = joinpath(auxiliary_dir, "package.order"),
        initialized_package = initialized_package,
        initialized_dir = initialized_dir,
        initialized_model = initialized_model,
        initialized_package_file = joinpath(initialized_dir, "package.mo"),
        initialized_order_file = joinpath(initialized_dir, "package.order"),
    )
end

function _load_empty_package!(omc, package_name::String)
    sendExpression(omc, "deleteClass($package_name)")
    omc_call(
        omc,
        "loadString(\"within ; package $package_name end $package_name;\")",
        parsed = false,
    )
    return nothing
end

"""
    _build_auxiliary_package!(dynamic_omc; ...)

Create, transform, save, reload, and check the case-specific auxiliary package.
"""
function _build_auxiliary_package!(
    dynamic_omc;
    model_chain,
    paths,
    init_model_by_component::Dict{String, String},
    slack_component::String,
)
    auxiliary_map = auxiliary_name_map(model_chain, paths.auxiliary_package)
    package_context = collect_package_component_contexts(dynamic_omc, model_chain)
    components_by_model = package_context.components_by_model
    patch_components_by_model = package_context.patch_components_by_model
    global_blacklist_names = package_context.global_blacklist_names

    _load_empty_package!(dynamic_omc, paths.auxiliary_package)

    for model in model_chain
        model_name = String(model)
        auxiliary_class = auxiliary_map[model_name]
        auxiliary_class_name = String(split(auxiliary_class, ".")[end])
        components = components_by_model[model_name]

        omc_call(
            dynamic_omc,
            "copyClass($model_name, \"$auxiliary_class_name\", $(paths.auxiliary_package))",
        )
        _transform_auxiliary_class!(
            dynamic_omc;
            source_model = model_name,
            auxiliary_model = auxiliary_class,
            components = components,
            init_model_by_component = init_model_by_component,
            slack_component = slack_component,
            global_cleanup_targets = global_blacklist_names,
        )
    end

    isdir(paths.auxiliary_dir) && rm(paths.auxiliary_dir; recursive = true, force = true)
    mkpath(paths.auxiliary_dir)
    write_package_files!(
        paths.auxiliary_package_file,
        paths.auxiliary_order_file,
        paths.auxiliary_package,
        package_class_names(model_chain, auxiliary_map),
    )
    save_auxiliary_package_classes!(
        dynamic_omc,
        model_chain,
        auxiliary_map,
        paths.auxiliary_dir,
        patch_components_by_model,
        slack_component,
    )

    sendExpression(dynamic_omc, "deleteClass($(paths.auxiliary_package))")
    omc_call(dynamic_omc, "loadFile(\"$(paths.auxiliary_package_file)\")")
    omc_call(dynamic_omc, "checkModel($(paths.auxiliary_model))", parsed = false)

    return components_by_model
end

"""
    _simulate_auxiliary_package_and_extract_values(; ...)

Simulate the auxiliary package and extract initialization values per package
class in the inheritance chain.
"""
function _simulate_auxiliary_package_and_extract_values(;
    paths,
    model_chain,
    components_by_model,
    modelica_package_path::String,
    dynawo_package_path::String,
    init_model_by_component::Dict{String, String},
)
    auxiliary_omc = _simulate_auxiliary_model!(
        auxiliary_model = paths.auxiliary_model,
        auxiliary_model_file = paths.auxiliary_package_file,
        modelica_package_path = modelica_package_path,
        dynawo_package_path = dynawo_package_path,
        resultfile = paths.auxiliary_package * "_res.mat",
    )

    initializable_by_model = Dict{String, Dict{String, Dict{String, Any}}}()
    initialization_values_by_model = Dict{
        String,
        Dict{String, Dict{String, Float64}},
    }()

    for model in model_chain
        model_name = String(model)
        components = components_by_model[model_name]
        initializable_by_model[model_name] = get_initializable_components(
            components,
            init_model_by_component,
        )
        initialization_values_by_model[model_name] =
            extract_all_initialization_values(
                auxiliary_omc,
                components,
                init_model_by_component,
            )
    end

    OMJulia.quit(auxiliary_omc)

    return (
        initializable_by_model = initializable_by_model,
        initialization_values_by_model = initialization_values_by_model,
    )
end

"""
    _build_initialized_package!(dynamic_omc; ...)

Create, initialize, save, reload, and check the case-specific initialized
dynamic package.
"""
function _build_initialized_package!(
    dynamic_omc;
    model_chain,
    paths,
    initializable_by_model,
    initialization_values_by_model,
    init_model_by_component::Dict{String, String},
)
    initialized_map = initialized_name_map(model_chain, paths.initialized_package)

    _load_empty_package!(dynamic_omc, paths.initialized_package)

    for model in model_chain
        model_name = String(model)
        initialized_class = initialized_map[model_name]

        _build_initialized_class!(
            dynamic_omc;
            source_model = model_name,
            initialized_model = initialized_class,
            initializable_components = initializable_by_model[model_name],
            initialization_values = initialization_values_by_model[model_name],
            init_model_by_component = init_model_by_component,
            target_package = paths.initialized_package,
        )
    end

    isdir(paths.initialized_dir) && rm(paths.initialized_dir; recursive = true, force = true)
    mkpath(paths.initialized_dir)
    write_package_files!(
        paths.initialized_package_file,
        paths.initialized_order_file,
        paths.initialized_package,
        package_class_names(model_chain, initialized_map),
    )
    save_initialized_package_classes!(
        dynamic_omc,
        model_chain,
        initialized_map,
        paths.initialized_dir,
    )

    sendExpression(dynamic_omc, "deleteClass($(paths.initialized_package))")
    omc_call(dynamic_omc, "loadFile(\"$(paths.initialized_package_file)\")")
    omc_call(dynamic_omc, "checkModel($(paths.initialized_model))", parsed = false)

    return initialized_map
end

"""
    initialize_loaded_package_model(dynamic_omc; ...)

Initialize a package model that is already loaded in `dynamic_omc`.

The caller is responsible for applying any parameter change before calling this
function. The function creates a case-specific auxiliary package, extracts the
initialization values, and creates a case-specific initialized package.
"""
function initialize_loaded_package_model(
    dynamic_omc;
    source_model::String,
    model_chain,
    case_name::String,
    output_dir::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
    slack_component::String = "",
)
    paths = _package_case_paths(source_model, case_name, output_dir)
    mkpath(paths.modelica_output_dir)

    components_by_model = _build_auxiliary_package!(
        dynamic_omc;
        model_chain = model_chain,
        paths = paths,
        init_model_by_component = init_model_by_component,
        slack_component = slack_component,
    )

    simulation_result = _simulate_auxiliary_package_and_extract_values(
        paths = paths,
        model_chain = model_chain,
        components_by_model = components_by_model,
        modelica_package_path = modelica_package_path,
        dynawo_package_path = dynawo_package_path,
        init_model_by_component = init_model_by_component,
    )

    _build_initialized_package!(
        dynamic_omc;
        model_chain = model_chain,
        paths = paths,
        initializable_by_model = simulation_result.initializable_by_model,
        initialization_values_by_model = simulation_result.initialization_values_by_model,
        init_model_by_component = init_model_by_component,
    )

    return (
        auxiliary_package = paths.auxiliary_package,
        auxiliary_model = paths.auxiliary_model,
        auxiliary_package_file = paths.auxiliary_package_file,
        initialized_package = paths.initialized_package,
        initialized_model = paths.initialized_model,
        initialized_package_file = paths.initialized_package_file,
        initialization_values = simulation_result.initialization_values_by_model,
    )
end

end # module
