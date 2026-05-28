# helpers/value_extraction.jl
# Extract initialization values computed by the auxiliary simulation.

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
function _read_result_value(aux_session, full_name::AbstractString)
    isempty(aux_session.resultfile) &&
        error("Auxiliary session has no result file. Run simulate(...) before extracting initialization values.")
    values = getSolutions(aux_session, String(full_name))
    series = values[1]
    isempty(series) && error("No values found in $(aux_session.resultfile) for $(full_name)")
    return Float64(series[end])
end

"""
    extract_component_initialization_values(aux_session, component, param_pairs) -> Dict{String, Float64}

Extract values for one dynamic component from its `<component>_INIT` block in
the auxiliary simulation results.
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
    extract_all_initialization_values(aux_session, components, init_model_by_component = Dict{String, String}())

Extract initialization values for every component that has an initialization
mapping.
"""
function extract_all_initialization_values(aux_session, components, init_model_by_component = Dict{String, String}())
    values_by_component = Dict{String, Dict{String, Float64}}()

    for (component, info) in components
        param_pairs = _resolve_init_params(component, info["class"], init_model_by_component)
        isnothing(param_pairs) && continue
        values_by_component[component] = extract_component_initialization_values(aux_session, component, param_pairs)
    end

    return values_by_component
end
