# Shared helpers for parametric-study initialization workflows.

module ParametricStudyHelpers

using OMJulia
using ..WorkflowHelpers

export
    case_label,
    load_modelica_file!

"""
    case_label(value) -> String

Convert a parameter value into a Modelica- and filename-friendly label.
"""
function case_label(value)
    return replace(replace(string(value), "." => "p"), "-" => "m")
end

"""
    load_modelica_file!(omc, model_file_path, modelica_package_path, dynawo_package_path)

Load Modelica, Dynawo, and one model/package file into an OpenModelica session.
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
    _transform_auxiliary_class!(omc; ...)

Apply the shared dynamic-to-auxiliary transformation to one copied class.

Single-file workflows call this once. Package workflows call it once per class
in the inheritance chain.
"""
function _transform_auxiliary_class!(
    omc;
    source_model::String,
    auxiliary_model::String,
    components,
    init_model_by_component::Dict{String, String},
    slack_component::String,
    global_cleanup_targets = nothing,
)
    apply_replacements!(
        omc,
        source_model,
        auxiliary_model,
        components,
        slack_component,
    )

    if isnothing(global_cleanup_targets)
        delete_connections!(omc, auxiliary_model, components)
    else
        delete_connections!(
            omc,
            auxiliary_model,
            components;
            global_targets = global_cleanup_targets,
        )
    end

    delete_components!(omc, auxiliary_model, components)
    add_init_models!(
        omc,
        source_model,
        auxiliary_model,
        components,
        init_model_by_component,
        slack_component,
    )
    apply_LF_modifiers!(omc, source_model, auxiliary_model, components)
    add_init_equations!(
        omc,
        source_model,
        auxiliary_model,
        components,
        init_model_by_component,
        slack_component,
    )

    return nothing
end

"""
    _simulate_auxiliary_model!(; ...)

Open an OpenModelica session, load and simulate an auxiliary model/package, and
return the session so the caller can extract values and close it explicitly.
"""
function _simulate_auxiliary_model!(;
    auxiliary_model::String,
    auxiliary_model_file::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    resultfile::String = auxiliary_model * "_res.mat",
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
    simulate(auxiliary_omc, resultfile = resultfile)

    return auxiliary_omc
end

"""
    _build_initialized_class!(omc; ...)

Copy one source class/model into an initialized class and apply extracted
initialization modifiers. File/package saving stays in the caller.
"""
function _build_initialized_class!(
    omc;
    source_model::String,
    initialized_model::String,
    initializable_components,
    initialization_values,
    init_model_by_component::Dict{String, String},
    target_package::Union{Nothing, String} = nothing,
)
    if isnothing(target_package)
        omc_call(omc, "copyClass($source_model, \"$initialized_model\")")
    else
        initialized_class_name = String(split(initialized_model, ".")[end])
        omc_call(
            omc,
            "copyClass($source_model, \"$initialized_class_name\", $target_package)",
        )
    end

    apply_initialization_modifiers!(
        omc,
        initialized_model,
        initializable_components,
        initialization_values,
        init_model_by_component,
    )

    return nothing
end

end # module
