# helpers/initialized_model.py
# Write extracted initialization values into a copy of the dynamic model.

import re

from .auxiliary_replacements import _code_modification_from_assignments
from .openmodelica import omc_call
from .value_extraction import INERTIAL_GRID_CLASS, _resolve_init_params


def build_modifier_assignments(info, param_pairs, values):
    """
    Merge existing component modifiers with extracted initialization values and
    return the Modelica assignment fragments used by `updateComponent`.
    """
    modifiers = dict(info["modifiers"])
    call_modifiers = info["call_modifiers"]

    dynamic_vars = [dynamic_var for _, dynamic_var in param_pairs]
    scalar_vars = [var for var in dynamic_vars if not (var.endswith(".re") or var.endswith(".im"))]
    complex_bases = []
    for var in dynamic_vars:
        if not (var.endswith(".re") or var.endswith(".im")):
            continue
        base = re.sub(r"\.(re|im)$", "", var)
        if base not in complex_bases:
            complex_bases.append(base)

    for field in scalar_vars:
        if field not in values:
            raise RuntimeError(f"Missing extracted value for {field}")
        modifiers[field] = str(values[field])

    for base in complex_bases:
        real_key = base + ".re"
        imag_key = base + ".im"
        if real_key not in values:
            raise RuntimeError(f"Missing extracted value for {real_key}")
        if imag_key not in values:
            raise RuntimeError(f"Missing extracted value for {imag_key}")
        modifiers[base] = f"Complex({values[real_key]}, {values[imag_key]})"

    assignments = []
    for field, value in modifiers.items():
        assignments.append(f"{field} = {value}")
    for field, value in call_modifiers.items():
        assignments.append(f"{field}({value})")

    return assignments


def apply_initialization_modifiers(omc, target_model, initializable_components, values_by_component,
                                   init_model_by_component=None):
    """
    Update each initializable component in `target_model` with values extracted
    from the auxiliary simulation.
    """
    if init_model_by_component is None:
        init_model_by_component = {}

    for component, info in initializable_components.items():
        if component not in values_by_component:
            raise RuntimeError(f"Missing extracted values for {component}")
        current_class = info["class"]
        if current_class == INERTIAL_GRID_CLASS:
            param_pairs = [(field, field) for field in ("P0Pu", "Q0Pu", "U0Pu", "UPhase0")]
        else:
            param_pairs = _resolve_init_params(component, current_class, init_model_by_component)
        assignments = build_modifier_assignments(info, param_pairs, values_by_component[component])
        mod_str = _code_modification_from_assignments(assignments)
        omc_call(
            omc,
            f"updateComponent({component}, {current_class}, {target_model}, modification = {mod_str})",
            parsed=False,
        )


def rewrite_initialized_extends(text, initialized_name_map):
    """
    Rewrite `extends OriginalParent` clauses to refer to initialized parents.
    """
    rewritten = text
    for original_parent, initialized_parent in initialized_name_map.items():
        pattern = re.compile(r"(\bextends\s+)" + re.escape(original_parent) + r"(\s*[;(])", flags=re.MULTILINE)
        rewritten = pattern.sub(lambda m: m.group(1) + initialized_parent + m.group(2), rewritten)
    return rewritten
