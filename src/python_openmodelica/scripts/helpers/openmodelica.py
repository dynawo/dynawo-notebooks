# helpers/openmodelica.py
# OpenModelica query and inspection helpers

import re

from .modelica_parsing import (
    parse_call_modifier_dict,
    parse_component,
    parse_modifier_dict,
)

# ------------------------------------------------------------
# OpenModelica Command Wrapper
# ------------------------------------------------------------


def send_expression(omc, expression, parsed=True):
    """
    Send an expression to OpenModelica and return its result, without failing
    on the errors OpenModelica reports.

    OMPython raises on `error`-level messages by default. This wrapper is the
    equivalent of a bare OMJulia `sendExpression`, for the calls that are
    allowed to fail, such as deleting a class that is not there.
    """
    return omc.sendExpression(expression, parsed=parsed, raise_on_error=False)


def omc_call(omc, expression, parsed=True):
    """
    Send an expression to OpenModelica and return its result.

    OMPython stops on the errors OpenModelica reports. This adds the case it lets
    through: a call that answers failure without reporting an error, either as a
    boolean or as the raw text "false". Successful calls remain quiet.
    """
    result = omc.sendExpression(expression, parsed=parsed)

    if result is False or result is None or (isinstance(result, str) and result.strip() == "false"):
        raise RuntimeError(
            "OpenModelica call failed without reporting an error.\n\n"
            f"Expression:\n{expression}\n\n"
            f"Result:\n{result}\n"
        )

    return result


# ------------------------------------------------------------
# Component and Value Retrieval
# ------------------------------------------------------------


def resolve_load_ref_value(omc, model, comp, field):
    """
    For loads: get numeric value assigned via plain equations like
    loadPQ1.PRefPu = PrefPu_load_01.setPoint;
    PrefPu_load_01.setPoint = loadPQ1.PRefPu;

    If the right-hand side is `X.setPoint` or `X.step`, this returns `X.Value0`.
    Derivative and `when` equations are ignored.
    Returns `""` when no matching equation is found.
    """
    target = f"{comp}.{field}"
    neq = omc_call(omc, f"getEquationItemsCount({model})")
    for i in range(1, neq + 1):
        eqi = omc_call(omc, f"getNthEquationItem({model}, {i})", parsed=False)
        eqi = eqi.replace('"', "").strip()

        if eqi.startswith("when "):
            continue
        if "der(" in eqi:
            continue

        if "=" not in eqi:
            continue
        parts = eqi.split("=", 1)
        if len(parts) != 2:
            continue

        lhs = parts[0].replace(";", "").strip()
        rhs = parts[1].replace(";", "").strip()

        if lhs == target:
            other = rhs
        elif rhs == target:
            other = lhs
        else:
            continue

        m = re.match(r"^([A-Za-z_]\w*)\.(setPoint|step)$", other)
        if m is not None:
            sp = m.group(1)
            return str(send_expression(omc, f"getComponentModifierValue({model}, {sp}.Value0)"))

        return other

    return ""


def inherited_classes(omc, model):
    """
    Return direct inherited classes for `model`, filtering out icon-only parents.
    """
    raw = omc_call(omc, f"getInheritedClasses({model})", parsed=False).strip()
    for char in ("{", "}", ";", '"'):
        raw = raw.replace(char, "")
    if not raw.strip():
        return []

    parents = []
    for parent in raw.split(","):
        parent = parent.strip()
        if not parent:
            continue
        if parent.startswith("Modelica.Icons") or parent.startswith("Dynawo.Icons"):
            continue
        parents.append(parent)

    return parents


def get_inheritance_chain(omc, root):
    """
    Return the inheritance chain of `root`, ordered from oldest parent to child.
    """
    chain = []
    seen = set()

    def visit(model):
        if model in seen:
            return
        seen.add(model)

        for parent in inherited_classes(omc, model):
            visit(parent)

        chain.append(model)

    visit(root)
    return chain


# ------------------------------------------------------------
# Model Inspection Helpers
# ------------------------------------------------------------


def get_all_components(omc, model):
    """
    Query OpenModelica for all components in `model`.

    Each component entry contains:
    - `name`
    - `class`
    - `modifiers` for top-level `a = b`
    - `call_modifiers` for call-style modifiers like `a(fixed = false)`
    """
    n = omc_call(omc, f"getComponentCount({model})")

    components = {}

    for i in range(1, n + 1):
        raw = omc_call(omc, f"getNthComponent({model}, {i})", parsed=False)
        comp_class, comp_name = parse_component(raw)

        mod_raw = send_expression(omc, f"getNthComponentModification({model}, {i})", parsed=False)
        mod_dict = parse_modifier_dict(mod_raw)
        call_mod_dict = parse_call_modifier_dict(mod_raw)

        components[comp_name] = {
            "name": comp_name,
            "class": comp_class,
            "modifiers": mod_dict,
            "call_modifiers": call_mod_dict,
        }

    return components


def get_comp_param_value(omc, model, components, comp_name, param):
    """
    Return `param` value for `comp_name` in `model`.

    Priority:
    1. explicit parsed modifier from `components`
    2. OpenModelica `getComponentModifierValue` fallback
    """
    if comp_name in components:
        mods = components[comp_name]["modifiers"]
        if isinstance(mods, dict) and param in mods:
            return mods[param]

    return send_expression(omc, f"getComponentModifierValue({model}, {comp_name}.{param})")
