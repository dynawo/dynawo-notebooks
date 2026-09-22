# helpers/auxiliary_init_model.py
# Add INIT components, load-flow modifiers, and initial equations to the auxiliary model.

import re

from ..dictionaries import INIT_MODELS
from .auxiliary_replacements import (
    _code_modification_from_assignments,
    _existing_modifier_assignments,
    _get_slack_voltage_expressions,
)
from .openmodelica import (
    get_all_components,
    get_comp_param_value,
    omc_call,
    resolve_load_ref_value,
)


def _resolve_init_spec(base_comp, base_class, init_model_by_component):
    """
    Resolve the INIT specification for a component, including an explicitly
    selected profile when the class supports several INIT models.
    """
    if base_class not in INIT_MODELS:
        return None
    class_spec = INIT_MODELS[base_class]

    if "profiles" in class_spec:
        if base_comp not in init_model_by_component:
            raise RuntimeError(f"Missing INIT model selection for component {base_comp} of class {base_class}")

        profile_name = init_model_by_component[base_comp]
        profiles = class_spec["profiles"]
        if profile_name not in profiles:
            raise RuntimeError(
                f"Unknown INIT profile {profile_name} for component {base_comp} of class {base_class}"
            )

        return profiles[profile_name]

    if base_comp in init_model_by_component:
        profile_name = init_model_by_component[base_comp]
        raise RuntimeError(
            f"Component {base_comp} selects INIT profile {profile_name}, "
            f"but class {base_class} has no profiles"
        )

    return class_spec


def _load_init_mode(omc, model, components, comp_name, base_class):
    """
    For load components, decide whether to use P/Q reference initialization or
    already-present complex initial values. Non-load components return `"not_load"`.
    """
    if not base_class.startswith("Dynawo.Electrical.Loads."):
        return "not_load"

    raw_mods = components[comp_name]["modifiers"]
    has_direct_complex = (
        isinstance(raw_mods, dict)
        and "s0Pu" in raw_mods
        and "u0Pu" in raw_mods
        and "i0Pu" in raw_mods
    )

    p_ref = resolve_load_ref_value(omc, model, comp_name, "PRefPu").strip()
    q_ref = resolve_load_ref_value(omc, model, comp_name, "QRefPu").strip()
    has_pq_init = bool(p_ref) and bool(q_ref)

    if has_pq_init:
        return "pq_init"
    elif has_direct_complex:
        return "direct_complex"

    raise RuntimeError(
        f"Load {model}.{comp_name} has neither resolvable PRefPu/QRefPu initialization "
        "nor explicit s0Pu/u0Pu/i0Pu"
    )


def _apply_component_modifiers(omc, aux_model, aux_components, base_comp, replace_keys, extra_raw):
    """
    Replace selected modifiers of one auxiliary component while preserving its
    other existing modifiers.
    """
    if not extra_raw:
        return None
    if base_comp not in aux_components:
        raise RuntimeError(f"Component {base_comp} not found in {aux_model} while applying modifiers")

    aux_component = aux_components[base_comp]
    current_aux_class = aux_component["class"]
    existing_assignments = _existing_modifier_assignments(aux_component)

    kept_assignments = []
    for raw in existing_assignments:
        match_result = re.match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
        if match_result is None:
            raise RuntimeError(f"Could not extract existing modifier name from: {raw}")
        if match_result.group(1) in replace_keys:
            continue
        kept_assignments.append(raw)

    mod_assignments = kept_assignments + list(extra_raw)
    mod_str = _code_modification_from_assignments(mod_assignments)

    omc_call(
        omc,
        f"updateComponent({base_comp}, {current_aux_class}, {aux_model}, modification = {mod_str})",
        parsed=False,
    )


def apply_load_LF_modifiers(omc, model, aux_model, aux_components, base_comp):
    """
    Set free complex load initialization variables using the P/Q references of a
    load component.
    """
    p_ref = resolve_load_ref_value(omc, model, base_comp, "PRefPu").strip()
    q_ref = resolve_load_ref_value(omc, model, base_comp, "QRefPu").strip()

    if not p_ref:
        raise RuntimeError(f"Could not resolve PRefPu for load {model}.{base_comp}")
    if not q_ref:
        raise RuntimeError(f"Could not resolve QRefPu for load {model}.{base_comp}")

    extra_raw = [
        f"i0Pu(re(start = {p_ref}, fixed = false), im(start = -({q_ref}), fixed = false))",
        f"s0Pu(re(start = {p_ref}, fixed = false), im(start = {q_ref}, fixed = false))",
        "u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))",
    ]

    _apply_component_modifiers(
        omc,
        aux_model,
        aux_components,
        base_comp,
        {"i0Pu", "s0Pu", "u0Pu"},
        extra_raw,
    )


def add_init_models(omc, model, aux_model, components, init_model_by_component, slack_component):
    """
    Add the INIT companion components required to simulate `aux_model`.
    """
    for base_comp, component in components.items():
        base_class = component["class"]
        spec = _resolve_init_spec(base_comp, base_class, init_model_by_component)
        if spec is None:
            continue

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        if load_mode == "direct_complex":
            continue

        suffix = spec["init_component_suffix"]
        init_name = base_comp + suffix
        init_class = spec["init_class"]
        write_map = spec["write_modifiers"]
        extra_raw = spec["extra_modifiers_raw"] if "extra_modifiers_raw" in spec else []
        write_from_model = spec["write_modifiers_from_model"] if "write_modifiers_from_model" in spec else []
        is_slack = base_comp == slack_component

        assignments = []
        for init_param, base_param in write_map.items():
            if base_param.startswith("@aux."):
                aux_field = base_param[5:]
                assignments.append(f"{init_param} = {base_comp}.{aux_field}")
                continue

            if is_slack and (init_param == "P0Pu" or init_param == "Q0Pu"):
                continue

            if load_mode == "pq_init" and (base_param == "PRefPu" or base_param == "QRefPu"):
                value = resolve_load_ref_value(omc, model, base_comp, base_param)
            else:
                value = str(get_comp_param_value(omc, model, components, base_comp, base_param))

            if not value.strip():
                raise RuntimeError(
                    f"Empty value for {model}.{base_comp}.{base_param} while building {init_name}.{init_param}"
                )
            assignments.append(f"{init_param} = {value}")

        for init_param in write_from_model:
            assignments.append(f"{init_param} = {base_comp}_INITparams.{init_param}")

        if is_slack:
            _, uphase = _get_slack_voltage_expressions(omc, model, components, base_comp, {})
            assignments.append(f"UPhase0 = {uphase}")
            assignments.extend([
                "P0Pu(fixed = false)",
                "Q0Pu(fixed = false)",
            ])
        else:
            assignments.extend(extra_raw)

        mod_str = _code_modification_from_assignments(assignments)
        omc_call(
            omc,
            f"addComponent({init_name}, {init_class}, {aux_model}, modification = {mod_str})",
            parsed=False,
        )


def apply_LF_modifiers(omc, model, aux_model, components):
    """
    Apply optional load-flow modifiers to components in the auxiliary model,
    preserving changes already made during replacement.
    """
    aux_components = get_all_components(omc, aux_model)

    for base_comp, component in components.items():
        base_class = component["class"]
        if base_class.startswith("Dynawo.Electrical.Loads."):
            apply_load_LF_modifiers(omc, model, aux_model, aux_components, base_comp)
            aux_components = get_all_components(omc, aux_model)
            continue

        if base_class not in INIT_MODELS:
            continue
        spec = INIT_MODELS[base_class]
        if "LF_modifiers_raw" not in spec:
            continue

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        if load_mode == "direct_complex":
            continue

        extra_raw = spec["LF_modifiers_raw"]
        lf_keys = set()
        for raw in extra_raw:
            match_result = re.match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
            if match_result is None:
                raise RuntimeError(f"Could not extract LF modifier name from: {raw}")
            lf_keys.add(match_result.group(1))

        _apply_component_modifiers(omc, aux_model, aux_components, base_comp, lf_keys, extra_raw)
        aux_components = get_all_components(omc, aux_model)


def add_init_equations(omc, model, aux_model, components, init_model_by_component, slack_component):
    """
    Build and inject the initial equations that connect each INIT companion
    component to its dynamic component.
    """
    eqs = []

    for base_name, component in components.items():
        base_class = component["class"]
        spec = _resolve_init_spec(base_name, base_class, init_model_by_component)
        if spec is None:
            continue

        load_mode = _load_init_mode(omc, model, components, base_name, base_class)
        if load_mode == "direct_complex":
            continue

        suffix = spec["init_component_suffix"]
        init_name = base_name + suffix

        if base_name == slack_component:
            eqs.append(
                f"{init_name}.P0Pu = Modelica.ComplexMath.real("
                f"{base_name}.terminal.V * Modelica.ComplexMath.conj({base_name}.terminal.i))"
            )
            eqs.append(
                f"{init_name}.Q0Pu = Modelica.ComplexMath.imag("
                f"{base_name}.terminal.V * Modelica.ComplexMath.conj({base_name}.terminal.i))"
            )
            continue

        if "init_equations" in spec:
            equation_map = spec["init_equations"]
            for init_var, base_var in equation_map.items():
                should_flip_sign = base_var.startswith("-")
                source_var = base_var[1:] if should_flip_sign else base_var
                rhs = f"-({base_name}.{source_var})" if should_flip_sign else f"{base_name}.{source_var}"
                eqs.append(f"{init_name}.{init_var} = {rhs}")

        if "init_equations_raw" in spec:
            for raw in spec["init_equations_raw"]:
                eqs.append(raw.replace("{init}", init_name).replace("{base}", base_name))

    for eq in eqs:
        omc_call(omc, f'addEquation({aux_model}, "{eq.strip().rstrip(";")}", true)', parsed=False)
