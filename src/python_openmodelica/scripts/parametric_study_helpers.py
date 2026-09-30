# scripts/parametric_study_helpers.py
# Shared helpers for parametric-study initialization workflows.

from OMPython import ModelicaSystemOMC, OMCSessionLocal

from .helpers import (
    add_init_equations,
    add_init_models,
    apply_LF_modifiers,
    apply_initialization_modifiers,
    apply_replacements,
    delete_components,
    delete_connections,
    omc_call,
)


def case_label(value):
    """
    Convert a parameter value into a Modelica- and filename-friendly label.
    """
    return str(value).replace(".", "p").replace("-", "m")


def load_modelica_file(omc, model_file_path, modelica_package_path, dynawo_package_path):
    """
    Load Modelica, Dynawo, and one model/package file into an OpenModelica session.
    """
    omc_call(omc, "loadModel(Complex)")
    omc_call(omc, "loadModel(ModelicaServices)")
    omc_call(omc, f'loadFile("{modelica_package_path}")')
    omc_call(omc, f'loadFile("{dynawo_package_path}")')
    omc_call(omc, f'loadFile("{model_file_path}")')


def _transform_auxiliary_class(omc, source_model, auxiliary_model, components,
                               init_model_by_component, slack_component,
                               global_cleanup_targets=None):
    """
    Apply the shared dynamic-to-auxiliary transformation to one copied class.

    Single-file workflows call this once. Package workflows call it once per class
    in the inheritance chain.
    """
    apply_replacements(omc, source_model, auxiliary_model, components, slack_component)

    if global_cleanup_targets is None:
        delete_connections(omc, auxiliary_model, components)
    else:
        delete_connections(omc, auxiliary_model, components, global_targets=global_cleanup_targets)

    delete_components(omc, auxiliary_model, components)
    add_init_models(omc, source_model, auxiliary_model, components,
                    init_model_by_component, slack_component)
    apply_LF_modifiers(omc, source_model, auxiliary_model, components)
    add_init_equations(omc, source_model, auxiliary_model, components,
                       init_model_by_component, slack_component)


def _simulate_auxiliary_model(auxiliary_model, auxiliary_model_file, modelica_package_path,
                              dynawo_package_path, resultfile=None):
    """
    Open an OpenModelica session, load and simulate an auxiliary model/package, and
    return the built model so the caller can extract values and close it explicitly.

    The model is built from what the session has loaded: passing the file would copy
    only package.mo for a package model.
    """
    if resultfile is None:
        resultfile = auxiliary_model + "_res.mat"

    auxiliary_omc = OMCSessionLocal()
    load_modelica_file(auxiliary_omc, auxiliary_model_file, modelica_package_path,
                       dynawo_package_path)
    omc_call(auxiliary_omc, f"checkModel({auxiliary_model})", parsed=False)

    auxiliary_system = ModelicaSystemOMC(session=auxiliary_omc)
    auxiliary_system.model(model_name=auxiliary_model)
    auxiliary_system.simulate(resultfile=resultfile)

    return auxiliary_system


def _build_initialized_class(omc, source_model, initialized_model, initializable_components,
                             initialization_values, init_model_by_component,
                             target_package=None):
    """
    Copy one source class/model into an initialized class and apply extracted
    initialization modifiers. File/package saving stays in the caller.
    """
    if target_package is None:
        omc_call(omc, f'copyClass({source_model}, "{initialized_model}")')
    else:
        initialized_class_name = initialized_model.split(".")[-1]
        omc_call(omc, f'copyClass({source_model}, "{initialized_class_name}", {target_package})')

    apply_initialization_modifiers(omc, initialized_model, initializable_components,
                                   initialization_values, init_model_by_component)
