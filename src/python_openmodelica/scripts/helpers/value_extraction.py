# helpers/value_extraction.py
# Extract initialization values computed by the auxiliary simulation.

import math

from ..dictionaries import INIT_PARAMS

INERTIAL_GRID_CLASS = "Dynawo.Electrical.Sources.InertialGrid.InertialGrid"


def _resolve_init_params(component, cls, init_model_by_component):
    """
    Resolve the initialization parameter mapping for one component, including its
    selected profile when the class supports several INIT models.
    """
    if cls not in INIT_PARAMS:
        return None

    spec = INIT_PARAMS[cls]
    if isinstance(spec, dict) and "profiles" in spec:
        if component not in init_model_by_component:
            raise RuntimeError(f"Missing INIT model selection for component {component} of class {cls}")
        profile_name = init_model_by_component[component]
        profiles = spec["profiles"]
        if profile_name not in profiles:
            raise RuntimeError(f"Unknown INIT profile {profile_name} for component {component} of class {cls}")
        return profiles[profile_name]

    if component in init_model_by_component:
        profile_name = init_model_by_component[component]
        raise RuntimeError(
            f"Component {component} selects INIT profile {profile_name}, but class {cls} has no profiles"
        )

    return spec


def get_initializable_components(components, init_model_by_component=None):
    """
    Return the subset of dynamic components whose initialization values are
    available through the auxiliary model.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    initializable = {}

    for component, info in components.items():
        if info["class"] == INERTIAL_GRID_CLASS:
            initializable[component] = info
            continue

        param_pairs = _resolve_init_params(component, info["class"], init_model_by_component)
        if param_pairs is None:
            continue
        initializable[component] = info

    return initializable


def _read_result_value(aux_system, full_name):
    """
    Read the final simulated value of `full_name` from the auxiliary result file.
    """
    values = aux_system.getSolutions(full_name)
    series = values[0]
    if len(series) == 0:
        raise RuntimeError(f"No values found in the auxiliary simulation result for {full_name}")
    return float(series[-1])


def _extract_inertial_grid_values(aux_system, component):
    vre = _read_result_value(aux_system, component + ".terminal.V.re")
    vim = _read_result_value(aux_system, component + ".terminal.V.im")
    ire = _read_result_value(aux_system, component + ".terminal.i.re")
    iim = _read_result_value(aux_system, component + ".terminal.i.im")

    return {
        "P0Pu": -(vre * ire + vim * iim),
        "Q0Pu": vre * iim - vim * ire,
        "U0Pu": math.sqrt(vre ** 2 + vim ** 2),
        "UPhase0": math.atan2(vim, vre),
    }


def extract_component_initialization_values(aux_system, component, param_pairs):
    """
    Extract values for one dynamic component from its `<component>_INIT` block in
    the auxiliary simulation results.
    """
    init_component = component + "_INIT"
    values = {}

    for init_var, dynamic_var in param_pairs:
        full_name = init_component + "." + init_var
        values[dynamic_var] = _read_result_value(aux_system, full_name)

    return values


def extract_all_initialization_values(aux_system, components, init_model_by_component=None):
    """
    Extract initialization values for every component that has an initialization
    mapping.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    values_by_component = {}

    for component, info in components.items():
        if info["class"] == INERTIAL_GRID_CLASS:
            values_by_component[component] = _extract_inertial_grid_values(aux_system, component)
            continue

        param_pairs = _resolve_init_params(component, info["class"], init_model_by_component)
        if param_pairs is None:
            continue
        values_by_component[component] = extract_component_initialization_values(
            aux_system, component, param_pairs
        )

    return values_by_component
