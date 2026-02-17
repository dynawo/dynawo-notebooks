# FILE: src/dynawo_notebooks/Scripts/core/powerflow.py
"""
Power Flow Execution Module.

This module handles the execution of the AC Load Flow on PyPowSyBl networks
using the default OpenLoadFlow engine.
"""

import logging
import pypowsybl as pp

logger = logging.getLogger(__name__)


class PowerFlowRunner:
    """
    Utility class to run Power Flow and extract convergence status.
    """

    @staticmethod
    def run_ac_loadflow(network: pp.network.Network) -> bool:
        """
        Executes the AC Load Flow on the provided PyPowSyBl network.
        The network object is updated in-place with the mathematical results.

        Returns:
            bool: True if the load flow converged successfully, False otherwise.
        """
        logger.info("Starting AC Load Flow calculation (OpenLoadFlow)...")

        try:
            # Load flow parameters can be customized here if needed
            parameters = pp.loadflow.Parameters()

            # Execute the Load Flow
            results = pp.loadflow.run_ac(network, parameters=parameters)

            if not results:
                logger.error("No results returned from the load flow simulator.")
                return False

            # results is a list of ComponentResult (one for each synchronous area)
            main_result = results[0]
            status = main_result.status

            status_name = (
                results[0].status.name
                if hasattr(results[0].status, "name")
                else str(results[0].status)
            )
            if status_name == "CONVERGED":
                logger.info("SUCCESS: Load flow CONVERGED.")
                return True
            else:
                logger.warning(f"WARNING: Load flow DID NOT CONVERGE. Status: {status}")

                # Safely extract details using the correct ComponentResult attributes
                if hasattr(main_result, "status_text") and main_result.status_text:
                    logger.warning(f"Status Details: {main_result.status_text}")

                if hasattr(main_result, "iteration_count"):
                    logger.warning(f"Iterations performed: {main_result.iteration_count}")

                if hasattr(main_result, "reference_bus_id") and main_result.reference_bus_id:
                    logger.warning(f"Reference Bus (Slack) used: {main_result.reference_bus_id}")
                else:
                    logger.warning(
                        "No Reference Bus (Slack) was detected. Calculation cannot start."
                    )

                return False

        except Exception as e:
            logger.error(f"Critical exception during load flow execution: {e}")
            return False
