# High-level initialization helper for parametric studies of single-file models.

module ModelInitialization

using OMJulia
using ..FullWorkflowHelpers

export
    case_label,
    load_modelica_file!,
    initialize_loaded_model

"""
    case_label(value) -> String

Convert a parameter value into a Modelica- and filename-friendly label.
"""
function case_label(value)
    return replace(replace(string(value), "." => "p"), "-" => "m")
end

"""
    load_modelica_file!(omc, model_file_path, modelica_package_path, dynawo_package_path)

Load Modelica, Dynawo, and one model file into an OpenModelica session.
"""
function load_modelica_file!(
    omc,
    model_file_path::String,
    modelica_package_path::String,
    dynawo_package_path::String,
)
    omc_call(omc, "loadModel(Complex)")
    omc_call(omc, "loadModel(ModelicaServices)")
    omc_call(omc, "loadFile(\"$modelica_package_path\")")
    omc_call(omc, "loadFile(\"$dynawo_package_path\")")
    omc_call(omc, "loadFile(\"$model_file_path\")")
    return nothing
end

"""
    _build_auxiliary_model!(dynamic_omc; ...)

Create and save the auxiliary static model used for initialization.
"""
function _build_auxiliary_model!(
    dynamic_omc;
    source_model::String,
    auxiliary_model::String,
    auxiliary_model_file::String,
    source_components,
    init_model_by_component::Dict{String, String},
    slack_component::String,
)
    sendExpression(dynamic_omc, "deleteClass($auxiliary_model)")
    omc_call(dynamic_omc, "copyClass($source_model, \"$auxiliary_model\")")

    apply_replacements!(
        dynamic_omc,
        source_model,
        auxiliary_model,
        source_components,
        slack_component,
    )
    delete_connections!(dynamic_omc, auxiliary_model, source_components)
    delete_components!(dynamic_omc, auxiliary_model, source_components)
    add_init_models!(
        dynamic_omc,
        source_model,
        auxiliary_model,
        source_components,
        init_model_by_component,
        slack_component,
    )
    apply_LF_modifiers!(
        dynamic_omc,
        source_model,
        auxiliary_model,
        source_components,
    )
    add_init_equations!(
        dynamic_omc,
        source_model,
        auxiliary_model,
        source_components,
        init_model_by_component,
        slack_component,
    )

    omc_call(
        dynamic_omc,
        "saveModel(\"$auxiliary_model_file\", $auxiliary_model)",
    )
    patch_aux_equations!(
        auxiliary_model_file,
        source_components,
        slack_component,
    )

    return nothing
end

"""
    _simulate_auxiliary_model_and_extract_values(; ...)

Simulate the auxiliary model and return values for the initialized dynamic model.
"""
function _simulate_auxiliary_model_and_extract_values(;
    auxiliary_model::String,
    auxiliary_model_file::String,
    source_components,
    modelica_package_path::String,
    dynawo_package_path::String,
    init_model_by_component::Dict{String, String},
)
    auxiliary_omc = OMJulia.OMCSession()
    load_modelica_file!(
        auxiliary_omc,
        auxiliary_model_file,
        modelica_package_path,
        dynawo_package_path,
    )
    omc_call(auxiliary_omc, "checkModel($auxiliary_model)", parsed = false)

    ModelicaSystem(
        auxiliary_omc,
        auxiliary_model_file,
        auxiliary_model,
        [modelica_package_path, dynawo_package_path],
    )
    simulate(auxiliary_omc, resultfile = auxiliary_model * "_res.mat")

    initialization_values = extract_all_initialization_values(
        auxiliary_omc,
        source_components,
        init_model_by_component,
    )
    OMJulia.quit(auxiliary_omc)

    initializable_components = get_initializable_components(
        source_components,
        init_model_by_component,
    )

    return (
        initializable_components = initializable_components,
        initialization_values = initialization_values,
    )
end

"""
    initialize_loaded_model(dynamic_omc; source_model, case_name, output_dir, ...)

Build the auxiliary initialization model, simulate it, and save the initialized
dynamic model.

Returns the generated model names, file paths, and extracted initialization
values.
"""
function initialize_loaded_model(
    dynamic_omc;
    source_model::String,
    case_name::String,
    output_dir::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
    slack_component::String = "",
)
    modelica_output_dir = joinpath(output_dir, "modelica")
    mkpath(modelica_output_dir)

    auxiliary_model = case_name * "_auxiliary"
    initialized_model = case_name * "_initialized"
    auxiliary_model_file = joinpath(modelica_output_dir, auxiliary_model * ".mo")
    initialized_model_file = joinpath(modelica_output_dir, initialized_model * ".mo")

    omc_call(dynamic_omc, "checkModel($source_model)", parsed = false)
    source_components = get_all_components(dynamic_omc, source_model)

    _build_auxiliary_model!(
        dynamic_omc;
        source_model = source_model,
        auxiliary_model = auxiliary_model,
        auxiliary_model_file = auxiliary_model_file,
        source_components = source_components,
        init_model_by_component = init_model_by_component,
        slack_component = slack_component,
    )

    auxiliary_result = _simulate_auxiliary_model_and_extract_values(
        auxiliary_model = auxiliary_model,
        auxiliary_model_file = auxiliary_model_file,
        source_components = source_components,
        modelica_package_path = modelica_package_path,
        dynawo_package_path = dynawo_package_path,
        init_model_by_component = init_model_by_component,
    )

    sendExpression(dynamic_omc, "deleteClass($initialized_model)")
    omc_call(dynamic_omc, "copyClass($source_model, \"$initialized_model\")")
    apply_initialization_modifiers!(
        dynamic_omc,
        initialized_model,
        auxiliary_result.initializable_components,
        auxiliary_result.initialization_values,
        init_model_by_component,
    )
    omc_call(
        dynamic_omc,
        "saveModel(\"$initialized_model_file\", $initialized_model)",
    )

    return (
        auxiliary_model = auxiliary_model,
        auxiliary_model_file = auxiliary_model_file,
        initialized_model = initialized_model,
        initialized_model_file = initialized_model_file,
        initialization_values = auxiliary_result.initialization_values,
    )
end

end # module
