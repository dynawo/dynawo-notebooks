# FILE: src/dynawo_notebooks/Scripts/core/powerflow.py
"""
Power Flow Execution Module.

This module handles the execution of the AC Load Flow on PyPowSyBl networks
using the default OpenLoadFlow engine.
"""

import os
import json
import logging
import pypowsybl as pp

logger = logging.getLogger(__name__)


class PowerFlowRunner:
    """
    Utility class responsible for executing AC Power Flow calculations
    and extracting their convergence status and details.
    """

    @staticmethod
    def _load_slack_mapping(filename: str = "slack_bus_mapping.json") -> list:
        """
        Loads the valid slack bus identifiers from an external JSON file.
        Provides fallback identifiers if the file cannot be loaded or is missing.

        :param filename: The name of the JSON file containing the slack bus rules.
        :return: A list of strings representing valid slack bus name fragments.
        """
        script_dir = os.path.dirname(os.path.abspath(__file__))
        filepath = os.path.join(script_dir, filename)

        try:
            with open(filepath, "r", encoding="utf-8") as f:
                mapping = json.load(f)
            logger.debug(f"Loaded {len(mapping)} slack bus identifiers from {filename}")
            return mapping
        except Exception as e:
            logger.warning(
                f"Failed to load slack bus mapping from {filepath}. Using defaults. Error: {e}"
            )
            # Fallback default identifiers for known standard test systems
            return ["infinite", "slack", "gen1", "g20"]

    @staticmethod
    def run_ac_loadflow(network: pp.network.Network) -> bool:
        """
        Executes the AC Load Flow on the provided PyPowSyBl network.
        The network object is updated in-place with the mathematical results.

        :param network: The PyPowSyBl network object to be analyzed.
        :return: True if the load flow converged successfully, False otherwise.
        """
        logger.info("Starting AC Load Flow calculation (OpenLoadFlow)...")

        # Load dynamic identifiers for the slack bus
        valid_slack_identifiers = PowerFlowRunner._load_slack_mapping()

        try:
            # 1. AUTO-DETECT THE SLACK BUS (IMPLEMENTED VIA JSON MAPPING)
            slack_bus_id = None
            try:
                gens_df = network.get_generators()
                for gid, row in gens_df.iterrows():
                    gid_str = str(gid).lower()

                    # Check if any of the dynamic identifiers match the generator ID
                    if any(identifier in gid_str for identifier in valid_slack_identifiers):
                        slack_bus_id = row["bus_id"]
                        logger.info(
                            f"Auto-detected Slack Bus: {slack_bus_id} (from generator {gid})"
                        )
                        break
            except Exception as e:
                logger.warning(f"Could not read generators for slack detection: {e}")

            # 2. CONFIGURE PROVIDER PARAMETERS (OpenLoadFlow)
            provider_params = {}
            if slack_bus_id:
                provider_params = {"slackBusSelectionMode": "NAME", "slackBusesIds": slack_bus_id}

            # 3. CONFIGURE GLOBAL LOAD FLOW PARAMETERS
            # NOTE: Utilizing the specific pp.loadflow.VoltageInitMode enumeration for accurate initialization
            lf_params = pp.loadflow.Parameters(
                provider_parameters=provider_params,
                voltage_init_mode=pp.loadflow.VoltageInitMode.DC_VALUES,
            )

            # 4. EXECUTE THE LOAD FLOW CALCULATION WITH SPECIFIED PARAMETERS
            results = pp.loadflow.run_ac(network, parameters=lf_params)

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
