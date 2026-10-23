# scripts/single_model_initialization.py
# High-level initialization helper for parametric studies of single-file models.

import os

from .helpers import (
    clean_aux_equations,
    extract_all_initialization_values,
    get_all_components,
    get_initializable_components,
    omc_call,
    send_expression,
)
from .parametric_study_helpers import (
    _build_initialized_class,
    _simulate_auxiliary_model,
    _transform_auxiliary_class,
)


def _build_auxiliary_model(dynamic_omc, source_model, auxiliary_model, auxiliary_model_file,
                           source_components, init_model_by_component, slack_component):
    """
    Create and save the auxiliary static model used for initialization.
    """
    send_expression(dynamic_omc, f"deleteClass({auxiliary_model})")
    omc_call(dynamic_omc, f'copyClass({source_model}, "{auxiliary_model}")')

    _transform_auxiliary_class(
        dynamic_omc,
        source_model=source_model,
        auxiliary_model=auxiliary_model,
        components=source_components,
        init_model_by_component=init_model_by_component,
        slack_component=slack_component,
    )

    clean_aux_equations(dynamic_omc, auxiliary_model, source_components, slack_component)

    omc_call(dynamic_omc, f'saveModel("{auxiliary_model_file}", {auxiliary_model})')


def _simulate_auxiliary_model_and_extract_values(auxiliary_model, auxiliary_model_file,
                                                 source_components, modelica_package_path,
                                                 dynawo_package_path, init_model_by_component):
    """
    Simulate the auxiliary model and return values for the initialized dynamic model.
    """
    auxiliary_system = _simulate_auxiliary_model(
        auxiliary_model=auxiliary_model,
        auxiliary_model_file=auxiliary_model_file,
        modelica_package_path=modelica_package_path,
        dynawo_package_path=dynawo_package_path,
        resultfile=auxiliary_model + "_res.mat",
    )

    initialization_values = extract_all_initialization_values(
        auxiliary_system, source_components, init_model_by_component
    )
    auxiliary_system.get_session().sendExpression("quit()")

    initializable_components = get_initializable_components(
        source_components, init_model_by_component
    )

    return initializable_components, initialization_values


def _build_initialized_model(dynamic_omc, source_model, initialized_model, initialized_model_file,
                             initializable_components, initialization_values,
                             init_model_by_component):
    """
    Create and save the initialized dynamic model from extracted initialization
    values.
    """
    send_expression(dynamic_omc, f"deleteClass({initialized_model})")
    _build_initialized_class(
        dynamic_omc,
        source_model=source_model,
        initialized_model=initialized_model,
        initializable_components=initializable_components,
        initialization_values=initialization_values,
        init_model_by_component=init_model_by_component,
    )
    omc_call(dynamic_omc, f'saveModel("{initialized_model_file}", {initialized_model})')


def initialize_loaded_model(dynamic_omc, source_model, case_name, output_dir,
                            modelica_package_path, dynawo_package_path,
                            init_model_by_component=None, slack_component=""):
    """
    Build the auxiliary initialization model, simulate it, and save the initialized
    dynamic model.

    Returns the generated model names, file paths, and extracted initialization
    values.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    modelica_output_dir = os.path.join(output_dir, "modelica")
    os.makedirs(modelica_output_dir, exist_ok=True)

    auxiliary_model = case_name + "_auxiliary"
    initialized_model = case_name + "_initialized"
    auxiliary_model_file = os.path.join(modelica_output_dir, auxiliary_model + ".mo")
    initialized_model_file = os.path.join(modelica_output_dir, initialized_model + ".mo")

    omc_call(dynamic_omc, f"checkModel({source_model})", parsed=False)
    source_components = get_all_components(dynamic_omc, source_model)

    _build_auxiliary_model(
        dynamic_omc,
        source_model=source_model,
        auxiliary_model=auxiliary_model,
        auxiliary_model_file=auxiliary_model_file,
        source_components=source_components,
        init_model_by_component=init_model_by_component,
        slack_component=slack_component,
    )

    initializable_components, initialization_values = _simulate_auxiliary_model_and_extract_values(
        auxiliary_model=auxiliary_model,
        auxiliary_model_file=auxiliary_model_file,
        source_components=source_components,
        modelica_package_path=modelica_package_path,
        dynawo_package_path=dynawo_package_path,
        init_model_by_component=init_model_by_component,
    )

    _build_initialized_model(
        dynamic_omc,
        source_model=source_model,
        initialized_model=initialized_model,
        initialized_model_file=initialized_model_file,
        initializable_components=initializable_components,
        initialization_values=initialization_values,
        init_model_by_component=init_model_by_component,
    )

    return {
        "auxiliary_model": auxiliary_model,
        "auxiliary_model_file": auxiliary_model_file,
        "initialized_model": initialized_model,
        "initialized_model_file": initialized_model_file,
        "initialization_values": initialization_values,
    }
