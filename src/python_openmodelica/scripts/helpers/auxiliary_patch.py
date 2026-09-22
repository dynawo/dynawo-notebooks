# helpers/auxiliary_patch.py
# Text rewrite and post-save patch helpers

import re

from ..dictionaries import AUX_ALLOWED_REFS, REPLACEMENTS
from .openmodelica import omc_call

# ------------------------------------------------------------
# Regex Helper
# ------------------------------------------------------------


def rewrite_aux_extends(text, aux_name_map):
    """
    Rewrite `extends OriginalParent` clauses so they point to auxiliary parents.
    """
    rewritten = text
    for original_parent, aux_parent in aux_name_map.items():
        # Escape the parent name so regex metacharacters stay literal.
        pattern = re.compile(r"(\bextends\s+)" + re.escape(original_parent) + r"(\s*[;(])", flags=re.MULTILINE)
        rewritten = pattern.sub(lambda m: m.group(1) + aux_parent + m.group(2), rewritten)
    return rewritten


# ------------------------------------------------------------
# Dead-Reference Detection Helpers
# ------------------------------------------------------------


def _collect_deleted_component_names(components):
    if components is None:
        return set()

    # Collect components that are deleted earlier in the build workflow.
    deleted_names = set()
    for comp_name, c in components.items():
        cls = c.get("class", "")
        if (
            cls.startswith("Modelica.Blocks.Sources.")
            or cls.startswith("Dynawo.Electrical.Events.")
            or cls.startswith("Dynawo.Electrical.Loads.LoadConnect_INIT")
            or cls.startswith("Dynawo.Electrical.Controls.Machines.")
            or cls.startswith("Dynawo.Electrical.Controls.Frequency.SignalN")
        ):
            deleted_names.add(comp_name)
    return deleted_names


def _collect_allowed_component_refs(components, slack_component):
    if components is None:
        return {}

    # Deleted components keep an empty allowed interface.
    allowed_refs_by_component = {}
    deleted_names = _collect_deleted_component_names(components)
    for comp_name in deleted_names:
        allowed_refs_by_component[comp_name] = set()

    for comp_name, c in components.items():
        if comp_name in deleted_names:
            continue

        # Slack replacements always end up as InfiniteBus.
        if comp_name == slack_component:
            allowed_refs_by_component[comp_name] = set(AUX_ALLOWED_REFS["Dynawo.Electrical.Buses.InfiniteBus"])
            continue

        old_class = c.get("class", "")
        if old_class not in REPLACEMENTS:
            continue

        # Regular replacements use the allowed interface of their new class.
        new_class = REPLACEMENTS[old_class]["new_class"]
        if new_class not in AUX_ALLOWED_REFS:
            continue

        allowed_refs_by_component[comp_name] = set(AUX_ALLOWED_REFS[new_class])

    return allowed_refs_by_component


def _statement_uses_disallowed_ref(statement, allowed_refs_by_component):
    stripped_statement = statement.strip()
    if not stripped_statement:
        return False

    # Connections are already cleaned up earlier in the notebook workflow.
    if stripped_statement.startswith("connect("):
        return False

    # Delete the full statement if any tracked component is referenced through a dead path.
    for comp_name, allowed_refs in allowed_refs_by_component.items():
        ref_pattern = re.compile(
            r"\b" + re.escape(comp_name) + r"\.([A-Za-z_][A-Za-z0-9_]*(?:\.[A-Za-z_][A-Za-z0-9_]*)*)"
        )

        for m in ref_pattern.finditer(statement):
            suffix = "." + m.group(1)
            if not allowed_refs:
                return True

            is_allowed = any(
                suffix == allowed_ref or suffix.startswith(allowed_ref + ".")
                for allowed_ref in allowed_refs
            )
            if not is_allowed:
                return True

    return False


def _simple_local_refs(statement):
    refs = set()
    parts = statement.split("=", 1)
    if len(parts) != 2:
        return refs

    lhs = parts[0].strip()
    rhs = parts[1].replace(";", "").strip()

    if re.match(r"^[A-Za-z_]\w*$", lhs):
        refs.add(lhs)
    if re.match(r"^[A-Za-z_]\w*$", rhs):
        refs.add(rhs)

    return refs


# ------------------------------------------------------------
# Equation Readers
# ------------------------------------------------------------


def _equation_items(omc, aux_model):
    items = []
    n = omc_call(omc, f"getEquationItemsCount({aux_model})")
    for i in range(1, n + 1):
        eq = omc_call(omc, f"getNthEquationItem({aux_model}, {i})", parsed=False)
        items.append(eq.replace('"', "").strip())
    return items


def _all_equation_items(omc, aux_model):
    items = _equation_items(omc, aux_model)
    n = omc_call(omc, f"getInitialEquationItemsCount({aux_model})")
    for i in range(1, n + 1):
        eq = omc_call(omc, f"getNthInitialEquationItem({aux_model}, {i})", parsed=False)
        items.append(eq.replace('"', "").strip())
    return items


# ------------------------------------------------------------
# Equation Cleanup Steps
# ------------------------------------------------------------


def _patch_switch_off_signals(omc, aux_model, slack_component):
    for eq in _equation_items(omc, aux_model):
        m = re.match(
            r"^([A-Za-z_]\w*)\.(injector|injectorURI|wT4Injector)\.(switchOffSignal[123])\s*=\s*false\s*;?$",
            eq,
        )
        if m is None:
            continue

        if m.group(1) == slack_component:
            # Slack becomes an InfiniteBus, which has no switch-off signal
            omc_call(omc, f'deleteEquation({aux_model}, "{eq}")')
        else:
            # Replacement class exposes the signal directly, so drop the injector level
            omc_call(
                omc,
                f'updateEquation({aux_model}, "{eq}", "{m.group(1)}.{m.group(3)} = false")',
            )


def _patch_time_switch_events(omc, aux_model):
    for eq in _equation_items(omc, aux_model):
        m = re.match(
            r"^([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\.(switchOffSignal[123])\s*=\s*[^;]*\btime\b[^;]*;?$",
            eq,
        )
        if m is None:
            continue

        omc_call(
            omc,
            f'updateEquation({aux_model}, "{eq}", "{m.group(1)}.{m.group(2)} = false")',
        )


def _remove_when_blocks(omc, aux_model):
    for eq in _equation_items(omc, aux_model):
        if not re.match(r"^when\b", eq):
            continue

        escaped_eq = eq.replace("\n", "\\n")
        omc_call(omc, f'deleteEquation({aux_model}, "{escaped_eq}")')


def _patch_step_setpoint(omc, aux_model, components):
    if components is None:
        return None

    # Collect original Step component names.
    step_names = set()
    for comp_name, c in components.items():
        if c.get("class", "") != "Dynawo.Electrical.Controls.Basics.Step":
            continue
        step_names.add(comp_name)

    # Collect original Dynawo load component names.
    load_names = set()
    for comp_name, c in components.items():
        if not c.get("class", "").startswith("Dynawo.Electrical.Loads."):
            continue
        load_names.add(comp_name)

    eqs = _equation_items(omc, aux_model)

    # Detect Step-driven load reference equations.
    targets = set()
    for eq in eqs:
        m = re.match(r"^([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*=\s*([A-Za-z_]\w*)\.step\s*;?$", eq)
        if m is None:
            m = re.match(r"^([A-Za-z_]\w*)\.step\s*=\s*([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*;?$", eq)
            if m is None:
                continue
            step_name = m.group(1)
            load_name = m.group(2)
            ref_field = m.group(3)
        else:
            load_name = m.group(1)
            ref_field = m.group(2)
            step_name = m.group(3)
        if load_name not in load_names:
            continue
        if step_name not in step_names:
            continue
        delta_field = "deltaP" if ref_field == "PRefPu" else "deltaQ"
        targets.add((load_name, ref_field, delta_field, step_name))

    # Replace Step output references with SetPoint outputs.
    used_step_names = sorted({step_name for (_, _, _, step_name) in targets})
    for eq in eqs:
        new_eq = eq
        for step_name in used_step_names:
            new_eq = re.sub(
                r"\b" + re.escape(step_name) + r"\.step\b",
                step_name + ".setPoint",
                new_eq,
            )
        if new_eq == eq:
            continue
        omc_call(omc, f'updateEquation({aux_model}, "{eq}", "{new_eq}")')

    # Insert missing static load variation equations.
    for load_name, ref_field, delta_field, _ in sorted(targets):
        pattern = re.compile(r"^" + re.escape(load_name) + r"\." + delta_field + r"\s*=\s*0\s*;?$")
        if any(pattern.search(e) for e in eqs):
            continue
        omc_call(omc, f'addEquation({aux_model}, "{load_name}.{delta_field} = 0", false)')


def _delete_dead_equations(omc, aux_model, components, slack_component):
    if components is None:
        return set()

    # Track the interfaces that are allowed to remain after replacements and deletions.
    allowed_refs_by_component = _collect_allowed_component_refs(components, slack_component)
    deleted_local_refs = set()
    if not allowed_refs_by_component:
        return deleted_local_refs

    for eq in _all_equation_items(omc, aux_model):
        if not _statement_uses_disallowed_ref(eq, allowed_refs_by_component):
            continue

        deleted_local_refs |= _simple_local_refs(eq)
        escaped_eq = eq.replace("\n", "\\n")
        omc_call(omc, f'deleteEquation({aux_model}, "{escaped_eq}")')

    return deleted_local_refs


def _remove_deleted_local_ref_equations(omc, aux_model, deleted_local_refs):
    if not deleted_local_refs:
        return None

    for eq in _all_equation_items(omc, aux_model):
        m = re.match(r"^([A-Za-z_]\w*)\s*=\s*[^;]+;?$", eq)
        if m is None:
            continue
        if m.group(1) not in deleted_local_refs:
            continue

        omc_call(omc, f'deleteEquation({aux_model}, "{eq}")')


def _remove_unused_deleted_ref_declarations(omc, aux_model, deleted_local_refs):
    if not deleted_local_refs:
        return None

    used_text = "\n".join(_all_equation_items(omc, aux_model))

    for ref in deleted_local_refs:
        if re.search(r"\b" + re.escape(ref) + r"\b", used_text):
            continue
        omc_call(omc, f"deleteComponent({ref}, {aux_model})")


# ------------------------------------------------------------
# Cleanup Orchestrator
# ------------------------------------------------------------


def clean_aux_equations(omc, aux_model, components, slack_component=""):
    """
    Clean up the auxiliary model's equations in place with the OpenModelica
    equation API, after the structural build steps.
    """
    _patch_switch_off_signals(omc, aux_model, slack_component)
    _patch_time_switch_events(omc, aux_model)
    _remove_when_blocks(omc, aux_model)
    _patch_step_setpoint(omc, aux_model, components)

    deleted_local_refs = _delete_dead_equations(omc, aux_model, components, slack_component)
    _remove_deleted_local_ref_equations(omc, aux_model, deleted_local_refs)
    _remove_unused_deleted_ref_declarations(omc, aux_model, deleted_local_refs)

    return None
