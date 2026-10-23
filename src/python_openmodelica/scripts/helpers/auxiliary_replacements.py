# helpers/auxiliary_replacements.py
# Replace dynamic components with auxiliary-model equivalents.

from ..dictionaries import REPLACEMENTS
from .openmodelica import get_comp_param_value, omc_call


def _code_modification_from_assignments(assignments):
    """
    Build a Modelica modification string: `$Code((a = 1, b = 2, ...))`.

    Entries may be standard assignments or raw call-style modifier fragments.
    """
    return "$Code((" + ", ".join(assignments) + "))"


def _existing_modifier_assignments(c):
    """
    Serialize parsed modifier dictionaries back into Modelica modification fragments.
    """
    assignments = []

    raw_mods = c["modifiers"]
    if isinstance(raw_mods, dict):
        for k, v in raw_mods.items():
            assignments.append(f"{k} = {v}")

    raw_calls = c["call_modifiers"]
    if isinstance(raw_calls, dict):
        for k, v in raw_calls.items():
            assignments.append(f"{k}({v})")

    return assignments


def _get_slack_voltage_expressions(omc, model, components, comp_name, mods):
    """
    Resolve the slack voltage magnitude and phase expressions.

    For each quantity, prefer the explicit scalar modifier/value (`U0Pu`, `UPhase0`).
    If it is missing, fall back to deriving it from `u0Pu = Complex(re, im)`.
    Returns `(upu, uphase)`.
    """

    def get_value(param):
        if param in mods:
            return mods[param].strip()
        return str(get_comp_param_value(omc, model, components, comp_name, param)).strip()

    u0pu = get_value("u0Pu")
    has_complex_u0pu = u0pu.startswith("Complex(") and u0pu.endswith(")")

    ure = ""
    uim = ""
    if has_complex_u0pu:
        inner = u0pu[8:-1].strip()
        parts = inner.split(",", 1)

        if len(parts) == 2:
            ure = parts[0].strip()
            uim = parts[1].strip()

    upu = get_value("U0Pu")
    if not upu:
        if ure and uim:
            upu = f"sqrt(({ure})^2 + ({uim})^2)"
        else:
            raise RuntimeError(
                f"Could not determine slack voltage magnitude for {model}.{comp_name}. "
                "Expected U0Pu or u0Pu = Complex(re, im)."
            )

    uphase = get_value("UPhase0")
    if not uphase:
        if ure and uim:
            uphase = f"atan2({uim}, {ure})"
        else:
            raise RuntimeError(
                f"Could not determine slack voltage phase for {model}.{comp_name}. "
                "Expected UPhase0 or u0Pu = Complex(re, im)."
            )

    return upu, uphase


def _build_slack_replacement_assignments(omc, model, components, comp_name, mods):
    """
    Build the modifier list for the slack replacement to `InfiniteBus`.
    """
    upu, uphase = _get_slack_voltage_expressions(omc, model, components, comp_name, mods)

    return [
        f"UPu = {upu}",
        f"UPhase = {uphase}",
    ]


def apply_replacements(omc, model, aux_model, components, slack_component):
    """
    Apply the configured class replacements to `aux_model`.

    For each mapped `new_param => old_param`, this reuses call-style modifiers
    first, then assignment modifiers, then falls back to OpenModelica value lookup.
    """
    for comp_name, c in components.items():
        old_class = c["class"]

        mods = c["modifiers"]
        call_mods = c["call_modifiers"]

        if comp_name == slack_component:
            assignments = _build_slack_replacement_assignments(omc, model, components, comp_name, mods)
            mod_str = _code_modification_from_assignments(assignments)
            omc_call(
                omc,
                f"updateComponent({comp_name}, Dynawo.Electrical.Buses.InfiniteBus, {aux_model}, modification = {mod_str})",
                parsed=False,
            )
            continue

        if old_class not in REPLACEMENTS:
            continue

        spec = REPLACEMENTS[old_class]
        new_class = spec["new_class"]

        write_map = spec.get("write_modifiers", {})

        extra_raw = spec["extra_modifiers_raw"] if "extra_modifiers_raw" in spec else []

        assignments = []
        for new_param, old_param in write_map.items():
            should_flip_sign = old_param.startswith("-")
            source_param = old_param[1:] if should_flip_sign else old_param

            if source_param in call_mods:
                if should_flip_sign:
                    raise RuntimeError(
                        f"Signed call-style replacements are not supported for {comp_name}.{source_param}"
                    )
                assignments.append(f"{new_param}({call_mods[source_param]})")
                continue

            if source_param in mods:
                rhs = mods[source_param]
            else:
                rhs = str(get_comp_param_value(omc, model, components, comp_name, source_param))

            if should_flip_sign:
                rhs = "-(" + rhs + ")"
            assignments.append(f"{new_param} = {rhs}")

        assignments.extend(raw.replace("{component}", comp_name) for raw in extra_raw)
        mod_str = _code_modification_from_assignments(assignments)

        omc_call(
            omc,
            f"updateComponent({comp_name}, {new_class}, {aux_model}, modification = {mod_str})",
            parsed=False,
        )
