# scripts/package_model_initialization.py
# High-level initialization helper for parametric studies of package models.

import os
import shutil

from .helpers import (
    auxiliary_name_map,
    collect_package_component_contexts,
    extract_all_initialization_values,
    get_initializable_components,
    initialized_name_map,
    omc_call,
    package_class_names,
    save_auxiliary_package_classes,
    save_initialized_package_classes,
    send_expression,
    write_package_files,
)
from .parametric_study_helpers import (
    _build_initialized_class,
    _simulate_auxiliary_model,
    _transform_auxiliary_class,
)


def _package_case_paths(source_model, case_name, output_dir):
    modelica_output_dir = os.path.join(output_dir, "modelica")
    root_model_name = source_model.split(".")[-1]

    auxiliary_package = case_name + "_auxiliary"
    auxiliary_dir = os.path.join(modelica_output_dir, auxiliary_package)
    auxiliary_model = auxiliary_package + "." + root_model_name + "_auxiliary"

    initialized_package = case_name + "_initialized"
    initialized_dir = os.path.join(modelica_output_dir, initialized_package)
    initialized_model = initialized_package + "." + root_model_name + "_initialized"

    return {
        "modelica_output_dir": modelica_output_dir,
        "auxiliary_package": auxiliary_package,
        "auxiliary_dir": auxiliary_dir,
        "auxiliary_model": auxiliary_model,
        "auxiliary_package_file": os.path.join(auxiliary_dir, "package.mo"),
        "auxiliary_order_file": os.path.join(auxiliary_dir, "package.order"),
        "initialized_package": initialized_package,
        "initialized_dir": initialized_dir,
        "initialized_model": initialized_model,
        "initialized_package_file": os.path.join(initialized_dir, "package.mo"),
        "initialized_order_file": os.path.join(initialized_dir, "package.order"),
    }


def _load_empty_package(omc, package_name):
    send_expression(omc, f"deleteClass({package_name})")
    omc_call(omc, f'loadString("within ; package {package_name} end {package_name};")', parsed=False)


def _build_auxiliary_package(dynamic_omc, model_chain, paths, init_model_by_component,
                             slack_component):
    """
    Create, transform, save, reload, and check the case-specific auxiliary package.
    """
    auxiliary_map = auxiliary_name_map(model_chain, paths["auxiliary_package"])
    package_context = collect_package_component_contexts(dynamic_omc, model_chain)
    components_by_model = package_context["components_by_model"]
    patch_components_by_model = package_context["patch_components_by_model"]
    global_blacklist_names = package_context["global_blacklist_names"]

    _load_empty_package(dynamic_omc, paths["auxiliary_package"])

    for model in model_chain:
        auxiliary_class = auxiliary_map[model]
        auxiliary_class_name = auxiliary_class.split(".")[-1]
        components = components_by_model[model]

        omc_call(dynamic_omc,
                 f'copyClass({model}, "{auxiliary_class_name}", {paths["auxiliary_package"]})')
        _transform_auxiliary_class(
            dynamic_omc,
            source_model=model,
            auxiliary_model=auxiliary_class,
            components=components,
            init_model_by_component=init_model_by_component,
            slack_component=slack_component,
            global_cleanup_targets=global_blacklist_names,
        )

    if os.path.isdir(paths["auxiliary_dir"]):
        shutil.rmtree(paths["auxiliary_dir"])
    os.makedirs(paths["auxiliary_dir"], exist_ok=True)
    write_package_files(
        paths["auxiliary_package_file"],
        paths["auxiliary_order_file"],
        paths["auxiliary_package"],
        package_class_names(model_chain, auxiliary_map),
    )
    save_auxiliary_package_classes(
        dynamic_omc,
        model_chain,
        auxiliary_map,
        paths["auxiliary_dir"],
        patch_components_by_model,
        slack_component,
    )

    send_expression(dynamic_omc, f'deleteClass({paths["auxiliary_package"]})')
    omc_call(dynamic_omc, f'loadFile("{paths["auxiliary_package_file"]}")')
    omc_call(dynamic_omc, f'checkModel({paths["auxiliary_model"]})', parsed=False)

    return components_by_model


def _simulate_auxiliary_package_and_extract_values(paths, model_chain, components_by_model,
                                                   modelica_package_path, dynawo_package_path,
                                                   init_model_by_component):
    """
    Simulate the auxiliary package and extract initialization values per package
    class in the inheritance chain.
    """
    auxiliary_system = _simulate_auxiliary_model(
        auxiliary_model=paths["auxiliary_model"],
        auxiliary_model_file=paths["auxiliary_package_file"],
        modelica_package_path=modelica_package_path,
        dynawo_package_path=dynawo_package_path,
        resultfile=paths["auxiliary_package"] + "_res.mat",
    )

    initializable_by_model = {}
    initialization_values_by_model = {}

    for model in model_chain:
        components = components_by_model[model]
        initializable_by_model[model] = get_initializable_components(
            components, init_model_by_component
        )
        initialization_values_by_model[model] = extract_all_initialization_values(
            auxiliary_system, components, init_model_by_component
        )

    auxiliary_system.get_session().sendExpression("quit()")

    return initializable_by_model, initialization_values_by_model


def _build_initialized_package(dynamic_omc, model_chain, paths, initializable_by_model,
                               initialization_values_by_model, init_model_by_component):
    """
    Create, initialize, save, reload, and check the case-specific initialized
    dynamic package.
    """
    initialized_map = initialized_name_map(model_chain, paths["initialized_package"])

    _load_empty_package(dynamic_omc, paths["initialized_package"])

    for model in model_chain:
        _build_initialized_class(
            dynamic_omc,
            source_model=model,
            initialized_model=initialized_map[model],
            initializable_components=initializable_by_model[model],
            initialization_values=initialization_values_by_model[model],
            init_model_by_component=init_model_by_component,
            target_package=paths["initialized_package"],
        )

    if os.path.isdir(paths["initialized_dir"]):
        shutil.rmtree(paths["initialized_dir"])
    os.makedirs(paths["initialized_dir"], exist_ok=True)
    write_package_files(
        paths["initialized_package_file"],
        paths["initialized_order_file"],
        paths["initialized_package"],
        package_class_names(model_chain, initialized_map),
    )
    save_initialized_package_classes(
        dynamic_omc, model_chain, initialized_map, paths["initialized_dir"]
    )

    send_expression(dynamic_omc, f'deleteClass({paths["initialized_package"]})')
    omc_call(dynamic_omc, f'loadFile("{paths["initialized_package_file"]}")')
    omc_call(dynamic_omc, f'checkModel({paths["initialized_model"]})', parsed=False)

    return initialized_map


def initialize_loaded_package_model(dynamic_omc, source_model, model_chain, case_name, output_dir,
                                    modelica_package_path, dynawo_package_path,
                                    init_model_by_component=None, slack_component=""):
    """
    Initialize a package model that is already loaded in `dynamic_omc`.

    The caller is responsible for applying any parameter change before calling this
    function. The function creates a case-specific auxiliary package, extracts the
    initialization values, and creates a case-specific initialized package.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    paths = _package_case_paths(source_model, case_name, output_dir)
    os.makedirs(paths["modelica_output_dir"], exist_ok=True)

    components_by_model = _build_auxiliary_package(
        dynamic_omc,
        model_chain=model_chain,
        paths=paths,
        init_model_by_component=init_model_by_component,
        slack_component=slack_component,
    )

    initializable_by_model, initialization_values_by_model = (
        _simulate_auxiliary_package_and_extract_values(
            paths=paths,
            model_chain=model_chain,
            components_by_model=components_by_model,
            modelica_package_path=modelica_package_path,
            dynawo_package_path=dynawo_package_path,
            init_model_by_component=init_model_by_component,
        )
    )

    _build_initialized_package(
        dynamic_omc,
        model_chain=model_chain,
        paths=paths,
        initializable_by_model=initializable_by_model,
        initialization_values_by_model=initialization_values_by_model,
        init_model_by_component=init_model_by_component,
    )

    return {
        "auxiliary_package": paths["auxiliary_package"],
        "auxiliary_model": paths["auxiliary_model"],
        "auxiliary_package_file": paths["auxiliary_package_file"],
        "initialized_package": paths["initialized_package"],
        "initialized_model": paths["initialized_model"],
        "initialized_package_file": paths["initialized_package_file"],
        "initialization_values": initialization_values_by_model,
    }
