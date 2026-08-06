# helpers/user_configuration.jl
# Validate the user configuration against the loaded OpenModelica session.

"""
    _all_parameter_names(omc, cls) -> Set{String}

Return the parameter names of `cls`, including those inherited from its parent
classes, by walking the inheritance chain.
"""
function _all_parameter_names(omc, cls)
    names = Set{String}()
    for parent_class in get_inheritance_chain(omc, String(cls))
        parameter_names = sendExpression(omc, "getParameterNames($parent_class)")
        parameter_names === nothing && continue
        union!(names, String.(parameter_names))
    end
    return names
end

"""
    check_user_configuration_single(omc; model, sweep_component = "", slack_component = "")

Validate the configuration of a single-file model in an already-loaded session.
Errors with a clear message when the model or a configured component is missing.
"""
function check_user_configuration_single(
    omc;
    model::String,
    sweep_component::String = "",
    sweep_parameter::String = "",
    slack_component::String = "",
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
)
    isempty(sweep_component) && !isempty(sweep_parameter) &&
        error("A sweep parameter was set without a sweep component")

    omc_call(omc, "checkModel($model)", parsed = false)

    components = get_all_components(omc, model)

    for configured_component in keys(init_model_by_component)
        haskey(components, configured_component) ||
            error("INIT_MODEL_BY_COMPONENT entry \"$configured_component\" is not a component of $model")
    end

    if !isempty(sweep_component)
        haskey(components, sweep_component) ||
            error("Component $sweep_component was not found in $model")
    end

    if !isempty(slack_component)
        haskey(components, slack_component) ||
            error("Component $slack_component was not found in $model")
    end

    if !isempty(sweep_component) && !isempty(sweep_parameter)
        component_class = components[sweep_component]["class"]
        sweep_parameter in _all_parameter_names(omc, component_class) ||
            error("Component $sweep_component has no parameter $sweep_parameter")
    end

    println("Configuration checked successfully")

    return nothing
end

"""
    check_user_configuration_package(omc; model, sweep_component = "", slack_component = "")

Validate the configuration of a package model in an already-loaded session.
Errors with a clear message when the model or a configured component is missing,
and returns the inheritance chain and the class that carries the swept component.
"""
function check_user_configuration_package(
    omc;
    model::String,
    sweep_component::String = "",
    sweep_parameter::String = "",
    slack_component::String = "",
    init_model_by_component::Dict{String, String} = Dict{String, String}(),
)
    isempty(sweep_component) && !isempty(sweep_parameter) &&
        error("A sweep parameter was set without a sweep component")

    omc_call(omc, "checkModel($model)", parsed = false)

    model_chain = get_inheritance_chain(omc, model)

    parameter_models = String[]
    slack_found = isempty(slack_component)
    all_component_names = Set{String}()
    for chain_model in model_chain
        model_name = String(chain_model)
        components = get_all_components(omc, model_name)
        union!(all_component_names, keys(components))
        if !isempty(sweep_component) && haskey(components, sweep_component)
            push!(parameter_models, model_name)
        end
        if !isempty(slack_component) && haskey(components, slack_component)
            slack_found = true
        end
    end

    for configured_component in keys(init_model_by_component)
        configured_component in all_component_names ||
            error("INIT_MODEL_BY_COMPONENT entry \"$configured_component\" is not a component of $model")
    end

    parameter_model = ""
    if !isempty(sweep_component)
        isempty(parameter_models) &&
            error("Component $sweep_component was not found in the inheritance chain for $model")
        parameter_model = first(parameter_models)
    end

    slack_found ||
        error("Component $slack_component was not found in the inheritance chain for $model")

    if !isempty(sweep_component) && !isempty(sweep_parameter)
        component_class = get_all_components(omc, parameter_model)[sweep_component]["class"]
        sweep_parameter in _all_parameter_names(omc, component_class) ||
            error("Component $sweep_component has no parameter $sweep_parameter")
    end

    println("Configuration checked successfully")

    return (model_chain = model_chain, parameter_model = parameter_model)
end
