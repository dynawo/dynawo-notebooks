# static_check.py
import pypowsybl as pp


def run_pre_simulation_check(network):
    """
    Runs LF and returns network health metrics.
    Not only runs LF, but reports margins.
    """
    results = pp.loadflow.run_ac(network)

    is_converged = all(r.status == pp.loadflow.ComponentResult.Status.CONVERGED for r in results)

    metrics = {
        "converged": is_converged,
        "iterations": [r.iteration_count for r in results],
        "active_power_mismatch": [
            r.active_power_mismatch for r in results if hasattr(r, "active_power_mismatch")
        ],
    }

    return is_converged, metrics
