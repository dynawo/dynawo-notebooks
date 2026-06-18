# High-level initialization helper for parametric studies of single-file models.

module ModelInitialization

using OMJulia
using CSV
using DataFrames
using ..FullWorkflowHelpers

export
    case_label,
    load_modelica_file!,
    update_component_parameter!,
    initialize_loaded_model,
    initialize_single_file_model,
    run_reinitialized_parameter_sweep

"""
    case_label(value) -> String

Convert a parameter value into a Modelica- and filename-friendly label.
"""
function case_label(value)
    return replace(replace(string(value), "." => "p"), "-" => "m")
end

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

function _modelica_modification(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

"""
    update_component_parameter!(omc, model, component, parameter, value)

Update one component parameter while preserving the component's other
assignment-style and call-style modifiers.
"""
function update_component_parameter!(
    omc,
    model::String,
    component::String,
    parameter::String,
    value,
)
    components = get_all_components(omc, model)
    haskey(components, component) || error("Component $component not found in $model")

    info = components[component]
    component_class = info["class"]::String
    modifiers = Dict{String, String}(info["modifiers"])
    call_modifiers = Dict{String, String}(info["call_modifiers"])

    modifiers[parameter] = string(value)

    assignments = String[]
    for (field, field_value) in sort(collect(modifiers))
        push!(assignments, "$field = $field_value")
    end
    for (field, field_value) in sort(collect(call_modifiers))
        push!(assignments, "$field($field_value)")
    end

    modification = _modelica_modification(assignments)
    omc_call(
        omc,
        "updateComponent($component, $component_class, $model, modification = $modification)",
        parsed = false,
    )

    return nothing
end

function _load_model!(
    omc,
    modelica_package_path::String,
    dynawo_package_path::String,
    model_file_path::String,
)
    omc_call(omc, "loadModel(Complex)")
    omc_call(omc, "loadModel(ModelicaServices)")
    omc_call(omc, "loadFile(\"$modelica_package_path\")")
    omc_call(omc, "loadFile(\"$dynawo_package_path\")")
    omc_call(omc, "loadFile(\"$model_file_path\")")
    return nothing
end

function _quit_safely(omc)
    try
        OMJulia.quit(omc)
    catch err
        @warn "Could not close OpenModelica session cleanly" exception = (err, catch_backtrace())
    end
    return nothing
end

function _prepare_output_directory(output_dir::String; clean::Bool)
    path = abspath(output_dir)
    unsafe_paths = Set([abspath("/"), abspath(homedir()), abspath(pwd())])

    path in unsafe_paths &&
        error("Refusing to clean unsafe output directory: $path")
    basename(path) == "outputs" &&
        error("Use a dedicated subdirectory inside outputs instead of the shared outputs root")

    if clean && ispath(path)
        isdir(path) || error("Output path exists but is not a directory: $path")
        rm(path; recursive = true)
    end

    mkpath(path)
    return path
end

"""
    initialize_loaded_model(dynamic_omc; ...)

Initialize a model that is already loaded in `dynamic_omc`.

The caller is responsible for preparing `source_model` before calling this
function. For example, a parametric-study notebook can copy the base model and
update one component parameter, then pass the modified case model here.
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

    auxiliary_omc = OMJulia.OMCSession()
    _load_model!(
        auxiliary_omc,
        modelica_package_path,
        dynawo_package_path,
        auxiliary_model_file,
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

    sendExpression(dynamic_omc, "deleteClass($initialized_model)")
    omc_call(dynamic_omc, "copyClass($source_model, \"$initialized_model\")")
    apply_initialization_modifiers!(
        dynamic_omc,
        initialized_model,
        initializable_components,
        initialization_values,
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
        initialization_values = initialization_values,
    )
end

"""
    initialize_single_file_model(; ...)

Run the FullWorkflow single-file initialization sequence after applying
`parameter_updates` to the source model.

Each update is a named tuple with `component`, `parameter`, and `value` fields.
The function writes a case-specific auxiliary model and initialized model, then
returns their names, paths, and extracted initialization values.
"""
function initialize_single_file_model(;
    source_model::String,
    source_model_file::String,
    auxiliary_model::String,
    auxiliary_model_file::String,
    initialized_model::String,
    initialized_model_file::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    parameter_updates = NamedTuple[],
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
    slack_component::String = "",
)
    isfile(source_model_file) || error("Source model file not found: $source_model_file")
    isfile(modelica_package_path) || error("Modelica package not found: $modelica_package_path")
    isfile(dynawo_package_path) || error("Dynawo package not found: $dynawo_package_path")

    mkpath(dirname(auxiliary_model_file))
    mkpath(dirname(initialized_model_file))

    dynamic_omc = nothing
    auxiliary_omc = nothing

    try
        println("Loading source model $source_model")
        dynamic_omc = OMJulia.OMCSession()
        _load_model!(
            dynamic_omc,
            modelica_package_path,
            dynawo_package_path,
            source_model_file,
        )

        for update in parameter_updates
            hasproperty(update, :component) ||
                error("Each parameter update must define a component field")
            hasproperty(update, :parameter) ||
                error("Each parameter update must define a parameter field")
            hasproperty(update, :value) ||
                error("Each parameter update must define a value field")

            component = string(update.component)
            parameter = string(update.parameter)
            println("Applying $component.$parameter = $(update.value)")
            update_component_parameter!(
                dynamic_omc,
                source_model,
                component,
                parameter,
                update.value,
            )
        end

        omc_call(dynamic_omc, "checkModel($source_model)", parsed = false)
        source_components = get_all_components(dynamic_omc, source_model)

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

        auxiliary_omc = OMJulia.OMCSession()
        _load_model!(
            auxiliary_omc,
            modelica_package_path,
            dynawo_package_path,
            auxiliary_model_file,
        )
        omc_call(auxiliary_omc, "checkModel($auxiliary_model)", parsed = false)

        ModelicaSystem(
            auxiliary_omc,
            auxiliary_model_file,
            auxiliary_model,
            [modelica_package_path, dynawo_package_path],
        )
        simulate(auxiliary_omc, resultfile = auxiliary_model * "_res.mat")

        initializable_components = get_initializable_components(
            source_components,
            init_model_by_component,
        )
        initialization_values = extract_all_initialization_values(
            auxiliary_omc,
            source_components,
            init_model_by_component,
        )

        sendExpression(dynamic_omc, "deleteClass($initialized_model)")
        omc_call(dynamic_omc, "copyClass($source_model, \"$initialized_model\")")
        apply_initialization_modifiers!(
            dynamic_omc,
            initialized_model,
            initializable_components,
            initialization_values,
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
            initialization_values = initialization_values,
        )
    finally
        auxiliary_omc === nothing || _quit_safely(auxiliary_omc)
        dynamic_omc === nothing || _quit_safely(dynamic_omc)
    end
end

function _simulate_initialized_model(;
    initialized_model::String,
    initialized_model_file::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    result_prefix::String,
    selected_variables::Vector{String},
)
    simulation_omc = nothing

    try
        simulation_omc = OMJulia.OMCSession()
        _load_model!(
            simulation_omc,
            modelica_package_path,
            dynawo_package_path,
            initialized_model_file,
        )

        ModelicaSystem(
            simulation_omc,
            initialized_model_file,
            initialized_model,
            [modelica_package_path, dynawo_package_path],
        )
        omc_call(simulation_omc, "checkModel($initialized_model)", parsed = false)

        simflags = simulation_flags_without_log_stats(
            simulation_omc,
            initialized_model,
        )
        omc_call(
            simulation_omc,
            "simulate($initialized_model, outputFormat=\"csv\", fileNamePrefix=\"$result_prefix\", simflags=\"$simflags\")",
            parsed = false,
        )

        raw_resultfile = joinpath(
            getWorkDirectory(simulation_omc),
            result_prefix * "_res.csv",
        )
        columns = unique(vcat(["time"], selected_variables))
        return DataFrame(CSV.File(raw_resultfile; select = columns))
    finally
        simulation_omc === nothing || _quit_safely(simulation_omc)
    end
end

"""
    run_reinitialized_parameter_sweep(; ...)

For every value in `sweep_values`:

1. Apply the parameter to the original dynamic model.
2. Build and simulate a new auxiliary model.
3. Extract and apply new initialization values.
4. Simulate the newly initialized dynamic model.
5. Store selected time-series results and case metadata.

The returned named tuple contains `results`, `metadata`, and
`initialization_values_by_case`. By default, `output_dir` is deleted and
recreated before the sweep so files from previous parameter sets cannot remain.
"""
function run_reinitialized_parameter_sweep(;
    source_model::String,
    source_model_file::String,
    sweep_component::String,
    sweep_parameter::String,
    sweep_values,
    output_dir::String,
    modelica_package_path::String,
    dynawo_package_path::String,
    selected_variables::Vector{String},
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
    slack_component::String = "",
    clean_output::Bool = true,
)
    output_dir = _prepare_output_directory(output_dir; clean = clean_output)
    modelica_output_dir = joinpath(output_dir, "modelica")
    result_output_dir = joinpath(output_dir, "results")
    mkpath(modelica_output_dir)
    mkpath(result_output_dir)

    result_frames = DataFrame[]
    metadata_rows = NamedTuple[]
    initialization_values_by_case = Dict{String, Any}()

    parameter_token = replace(sweep_parameter, "." => "_")

    for value in sweep_values
        label = case_label(value)
        case_name = join(
            [source_model, sweep_component, parameter_token, label],
            "_",
        )
        auxiliary_model = case_name * "_auxiliary"
        initialized_model = case_name * "_initialized"

        auxiliary_model_file = joinpath(
            modelica_output_dir,
            auxiliary_model * ".mo",
        )
        initialized_model_file = joinpath(
            modelica_output_dir,
            initialized_model * ".mo",
        )
        selected_resultfile = joinpath(
            result_output_dir,
            case_name * "_selected.csv",
        )

        initialized_case = initialize_single_file_model(
            source_model = source_model,
            source_model_file = source_model_file,
            auxiliary_model = auxiliary_model,
            auxiliary_model_file = auxiliary_model_file,
            initialized_model = initialized_model,
            initialized_model_file = initialized_model_file,
            modelica_package_path = modelica_package_path,
            dynawo_package_path = dynawo_package_path,
            parameter_updates = [(
                component = sweep_component,
                parameter = sweep_parameter,
                value = value,
            )],
            init_model_by_component = init_model_by_component,
            slack_component = slack_component,
        )

        result = _simulate_initialized_model(
            initialized_model = initialized_model,
            initialized_model_file = initialized_model_file,
            modelica_package_path = modelica_package_path,
            dynawo_package_path = dynawo_package_path,
            result_prefix = initialized_model,
            selected_variables = selected_variables,
        )
        result[!, :case] .= label
        result[!, :parameter_value] .= value
        CSV.write(selected_resultfile, result)
        push!(result_frames, result)

        initialization_values_by_case[label] =
            initialized_case.initialization_values

        push!(metadata_rows, (
            case = label,
            component = sweep_component,
            parameter = sweep_parameter,
            parameter_value = value,
            auxiliary_model_file = auxiliary_model_file,
            initialized_model_file = initialized_model_file,
            selected_resultfile = selected_resultfile,
        ))

        println(
            "Finished case $label with " *
            "$sweep_component.$sweep_parameter = $value",
        )
    end

    results = vcat(result_frames...)
    metadata = DataFrame(metadata_rows)
    CSV.write(joinpath(result_output_dir, "sweep_metadata.csv"), metadata)

    return (
        results = results,
        metadata = metadata,
        initialization_values_by_case = initialization_values_by_case,
    )
end

end # module
