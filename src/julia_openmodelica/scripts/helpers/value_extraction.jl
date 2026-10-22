# helpers/value_extraction.jl
# Extract initialization values computed by the auxiliary simulation.

const INERTIAL_GRID_CLASS = "Dynawo.Electrical.Sources.InertialGrid.InertialGrid"

"""
    _resolve_init_params(component, class, init_model_by_component)

Resolve the initialization parameter mapping for one component, including its
selected profile when the class supports several INIT models.
"""
function _resolve_init_params(component::AbstractString, class::AbstractString, init_model_by_component)
    haskey(INIT_PARAMS, class) || return nothing

    spec = INIT_PARAMS[class]
    if isa(spec, Dict) && haskey(spec, "profiles")
        haskey(init_model_by_component, component) ||
            error("Missing INIT model selection for component $component of class $class")
        profile_name = init_model_by_component[component]
        profiles = spec["profiles"]
        haskey(profiles, profile_name) ||
            error("Unknown INIT profile $profile_name for component $component of class $class")
        return profiles[profile_name]
    end

    if haskey(init_model_by_component, component)
        profile_name = init_model_by_component[component]
        error("Component $component selects INIT profile $profile_name, but class $class has no profiles")
    end

    return spec
end

"""
    get_initializable_components(components, init_model_by_component = Dict{String, String}())

Return the subset of dynamic components whose initialization values are
available through the auxiliary model.
"""
function get_initializable_components(components, init_model_by_component = Dict{String, String}())
    initializable = Dict{String, Dict{String, Any}}()

    for (component, info) in components
        info["class"] == INERTIAL_GRID_CLASS && begin
            initializable[component] = info
            continue
        end

        param_pairs = _resolve_init_params(component, info["class"], init_model_by_component)
        isnothing(param_pairs) && continue
        initializable[component] = info
    end

    return initializable
end

"""
    _read_result_value(aux_session, full_name::AbstractString) -> Float64

Read the final simulated value of `full_name` from the auxiliary result file.
"""
function _read_result_value(session, result_file, stop_time, full_name::AbstractString)
    value = sendExpression(session, "val($full_name, $stop_time, \"$result_file\")")
    value isa Real || error("No value found in $(result_file) for $(full_name)")
    return Float64(value)
end

function _extract_inertial_grid_values(session, result_file, stop_time, component::AbstractString)
    vre = _read_result_value(session, result_file, stop_time, component * ".terminal.V.re")
    vim = _read_result_value(session, result_file, stop_time, component * ".terminal.V.im")
    ire = _read_result_value(session, result_file, stop_time, component * ".terminal.i.re")
    iim = _read_result_value(session, result_file, stop_time, component * ".terminal.i.im")

    return Dict{String, Float64}(
        "P0Pu" => -(vre * ire + vim * iim),
        "Q0Pu" => vre * iim - vim * ire,
        "U0Pu" => sqrt(vre^2 + vim^2),
        "UPhase0" => atan(vim, vre),
    )
end

"""
    extract_all_initialization_values(aux_session, components, init_model_by_component = Dict{String, String}())

Extract initialization values for every component that has an initialization
mapping.
"""
function extract_all_initialization_values(aux_session, components, init_model_by_component = Dict{String, String}())
    result_file = aux_session.resultfile
    isempty(result_file) &&
        error("Auxiliary session has no result file. Run simulate(...) before extracting initialization values.")
    stop_time = parse(Float64, string(aux_session.simulateOptions["stopTime"]))

    values_by_component = Dict{String, Dict{String, Float64}}()

    for (component, info) in components
        info["class"] == INERTIAL_GRID_CLASS && begin
            values_by_component[component] = _extract_inertial_grid_values(
                aux_session, result_file, stop_time, component
            )
            continue
        end

        param_pairs = _resolve_init_params(component, info["class"], init_model_by_component)
        isnothing(param_pairs) && continue

        values = Dict{String, Float64}()
        for (init_var, dynamic_var) in param_pairs
            full_name = component * "_INIT." * init_var
            values[dynamic_var] = _read_result_value(aux_session, result_file, stop_time, full_name)
        end
        values_by_component[component] = values
    end

    return values_by_component
end
