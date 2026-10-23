# helpers/auxiliary_cleanup.py
# Remove components and connections that are not needed in the auxiliary model.

import re

from .modelica_parsing import component_of_connector, parse_nth_connection
from .openmodelica import omc_call, send_expression

CLEANUP_CLASS_PREFIXES = (
    "Modelica.Blocks.Sources.",
    "Modelica.ComplexBlocks.Sources.",
    "Dynawo.Electrical.Events.",
    "Dynawo.Electrical.Loads.LoadConnect_INIT",
    "Dynawo.Electrical.Controls.Machines.",
    "Dynawo.Electrical.Controls.Frequency.SignalN",
)


def collect_cleanup_component_names(components):
    """
    Collect component names whose classes match the cleanup prefixes.
    """
    names = set()
    for name, c in components.items():
        cls = c["class"]
        if any(cls.startswith(prefix) for prefix in CLEANUP_CLASS_PREFIXES):
            names.add(name)
    return names


def _has_switch_off_signal_equation(omc, aux_model, switch_signal):
    """
    Return `True` if `switch_signal.value` already appears on either side of an
    equation in `aux_model`.
    """
    target = switch_signal
    count = omc_call(omc, f"getEquationItemsCount({aux_model})")

    for i in range(1, count + 1):
        equation = omc_call(omc, f"getNthEquationItem({aux_model}, {i})", parsed=False)
        equation = equation.replace('"', "").strip()
        if "=" not in equation:
            continue

        parts = equation.split("=", 1)
        if len(parts) != 2:
            continue

        lhs = parts[0].replace(";", "").strip()
        rhs = parts[1].replace(";", "").strip()
        if lhs == target or rhs == target:
            return True

    return False


def delete_connections(omc, aux_model, components, global_targets=None):
    """
    Delete connections that touch a cleanup-target component and add static false
    equations for switch-off signals left disconnected by that cleanup.
    """
    local_targets = collect_cleanup_component_names(components)
    cleanup_targets = local_targets if global_targets is None else local_targets | global_targets
    deleted_switch_signals = set()

    count = omc_call(omc, f"getConnectionCount({aux_model})")

    for i in range(count, 0, -1):
        raw = omc_call(omc, f"getNthConnection({aux_model}, {i})", parsed=False)
        conn_from, conn_to = parse_nth_connection(raw)

        from_comp = component_of_connector(conn_from)
        to_comp = component_of_connector(conn_to)

        if (from_comp in cleanup_targets) or (to_comp in cleanup_targets):
            if (from_comp in cleanup_targets) and (to_comp not in cleanup_targets):
                if re.search(r"\.switchOffSignal\d+$", conn_to):
                    deleted_switch_signals.add(conn_to)
            if (to_comp in cleanup_targets) and (from_comp not in cleanup_targets):
                if re.search(r"\.switchOffSignal\d+$", conn_from):
                    deleted_switch_signals.add(conn_from)
            send_expression(omc, f"deleteConnection({conn_from}, {conn_to}, {aux_model})")

    for switch_signal in sorted(deleted_switch_signals):
        if _has_switch_off_signal_equation(omc, aux_model, switch_signal):
            continue
        omc_call(omc, f'addEquation({aux_model}, "{switch_signal} = false", false)', parsed=False)

    return cleanup_targets


def delete_components(omc, aux_model, components):
    """
    Delete all cleanup-target components in `aux_model`.
    """
    for name in collect_cleanup_component_names(components):
        send_expression(omc, f"deleteComponent({name}, {aux_model})")
