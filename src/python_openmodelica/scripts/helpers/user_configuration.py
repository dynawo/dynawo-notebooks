# helpers/user_configuration.py
# Validate the user configuration against the loaded OpenModelica session.

from .openmodelica import (
    get_all_components,
    get_inheritance_chain,
    omc_call,
    send_expression,
)


def _all_parameter_names(omc, cls):
    """
    Return the parameter names of `cls`, including those inherited from its parent
    classes, by walking the inheritance chain.
    """
    names = set()
    for parent_class in get_inheritance_chain(omc, cls):
        parameter_names = send_expression(omc, f"getParameterNames({parent_class})")
        if parameter_names is None:
            continue
        names.update(parameter_names)
    return names


def check_user_configuration_single(
    omc,
    model,
    sweep_component="",
    sweep_parameter="",
    slack_component="",
    init_model_by_component=None,
):
    """
    Validate the configuration of a single-file model in an already-loaded session.
    Errors with a clear message when the model or a configured component is missing.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    if not sweep_component and sweep_parameter:
        raise RuntimeError("A sweep parameter was set without a sweep component")

    omc_call(omc, f"checkModel({model})", parsed=False)

    components = get_all_components(omc, model)

    for configured_component in init_model_by_component:
        if configured_component not in components:
            raise RuntimeError(
                f'INIT_MODEL_BY_COMPONENT entry "{configured_component}" is not a component of {model}'
            )

    if sweep_component:
        if sweep_component not in components:
            raise RuntimeError(f"Component {sweep_component} was not found in {model}")

    if slack_component:
        if slack_component not in components:
            raise RuntimeError(f"Component {slack_component} was not found in {model}")

    if sweep_component and sweep_parameter:
        component_class = components[sweep_component]["class"]
        if sweep_parameter not in _all_parameter_names(omc, component_class):
            raise RuntimeError(f"Component {sweep_component} has no parameter {sweep_parameter}")

    print("Configuration checked successfully")

    return None


def check_user_configuration_package(
    omc,
    model,
    sweep_component="",
    sweep_parameter="",
    slack_component="",
    init_model_by_component=None,
):
    """
    Validate the configuration of a package model in an already-loaded session.
    Errors with a clear message when the model or a configured component is missing,
    and returns the inheritance chain and the class that carries the swept component.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    if not sweep_component and sweep_parameter:
        raise RuntimeError("A sweep parameter was set without a sweep component")

    omc_call(omc, f"checkModel({model})", parsed=False)

    model_chain = get_inheritance_chain(omc, model)

    parameter_models = []
    slack_found = not slack_component
    all_component_names = set()
    for chain_model in model_chain:
        model_name = chain_model
        components = get_all_components(omc, model_name)
        all_component_names.update(components)
        if sweep_component and sweep_component in components:
            parameter_models.append(model_name)
        if slack_component and slack_component in components:
            slack_found = True

    for configured_component in init_model_by_component:
        if configured_component not in all_component_names:
            raise RuntimeError(
                f'INIT_MODEL_BY_COMPONENT entry "{configured_component}" is not a component of {model}'
            )

    parameter_model = ""
    if sweep_component:
        if not parameter_models:
            raise RuntimeError(
                f"Component {sweep_component} was not found in the inheritance chain for {model}"
            )
        parameter_model = parameter_models[0]

    if not slack_found:
        raise RuntimeError(
            f"Component {slack_component} was not found in the inheritance chain for {model}"
        )

    if sweep_component and sweep_parameter:
        component_class = get_all_components(omc, parameter_model)[sweep_component]["class"]
        if sweep_parameter not in _all_parameter_names(omc, component_class):
            raise RuntimeError(f"Component {sweep_component} has no parameter {sweep_parameter}")

    print("Configuration checked successfully")

    return {"model_chain": model_chain, "parameter_model": parameter_model}
