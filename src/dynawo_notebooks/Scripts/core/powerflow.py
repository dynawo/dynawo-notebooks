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
    def load_slack_mapping(filename: str = "slack_bus_mapping.json") -> list:
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
    def run_ac_loadflow(network: pp.network.Network, export_path: str = ".") -> bool:
        """
        Executes the AC Load Flow on the provided PyPowSyBl network.
        The network object is updated in-place with the mathematical results.

        :param network: The PyPowSyBl network object to be analyzed.
        :param export_path: Target directory to save the divergence log if the load flow fails.
        :return: True if the load flow converged successfully, False otherwise.
        """
        logger.info("Starting AC Load Flow calculation (OpenLoadFlow)...")

        # Load dynamic identifiers for the slack bus
        valid_slack_identifiers = PowerFlowRunner.load_slack_mapping()

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
            # Introduce specific OpenLoadFlow provider parameters to prevent solver
            # failure upon large initial power mismatches and to disable distributed slack.
            provider_params = {
                "maxNewtonRaphsonIterations": "100",
                "lowImpedanceThreshold": "1e-8",  # Prevents PyPowSyBl from merging buses due to the small physical Ohms derived from 1.0kV bases
            }

            if slack_bus_id:
                provider_params.update(
                    {
                        "slackBusSelectionMode": "NAME",
                        "slackBusesIds": str(slack_bus_id),
                    }
                )

            # 3. CONFIGURE GLOBAL LOAD FLOW PARAMETERS
            # Utilizing the specific pp.loadflow.VoltageInitMode enumeration for accurate initialization
            lf_params = pp.loadflow.Parameters(
                provider_parameters=provider_params,
                voltage_init_mode=pp.loadflow.VoltageInitMode.UNIFORM_VALUES,
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
                status_text = (
                    main_result.status_text
                    if hasattr(main_result, "status_text") and main_result.status_text
                    else "None"
                )
                iterations = (
                    main_result.iteration_count
                    if hasattr(main_result, "iteration_count")
                    else "Unknown"
                )
                ref_bus = (
                    main_result.reference_bus_id
                    if hasattr(main_result, "reference_bus_id") and main_result.reference_bus_id
                    else "None"
                )

                if status_text != "None":
                    logger.warning(f"Status Details: {status_text}")

                if iterations != "Unknown":
                    logger.warning(f"Iterations performed: {iterations}")

                if ref_bus != "None":
                    logger.warning(f"Reference Bus (Slack) used: {ref_bus}")
                else:
                    logger.warning(
                        "No Reference Bus (Slack) was detected. Calculation cannot start."
                    )

                # --- DETAILED DIVERGENCE LOGGING ---
                # Generate a comprehensive diagnostic file 'powerflow.log' capturing the network state
                # and solver metrics when the AC Load Flow fails to converge.
                try:
                    if not os.path.exists(export_path):
                        os.makedirs(export_path)

                    log_filepath = os.path.join(export_path, "powerflow.log")

                    with open(log_filepath, "w", encoding="utf-8") as log_file:
                        log_file.write("=== OPENLOADFLOW DIVERGENCE REPORT ===\n")
                        log_file.write(f"Status: {status}\n")
                        log_file.write(f"Status Details: {status_text}\n")
                        log_file.write(f"Iterations: {iterations}\n")
                        log_file.write(f"Slack Bus: {ref_bus}\n\n")

                        # Extract PyPowSyBl solver metrics (Iterative errors, mismatches, etc.)
                        log_file.write("--- SOLVER METRICS ---\n")
                        for i, res in enumerate(results):
                            log_file.write(f"Synchronous Component {i}:\n")
                            for attr in dir(res):
                                # Filter out private methods and built-ins to safely dump attributes
                                if not attr.startswith("_") and not callable(getattr(res, attr)):
                                    log_file.write(f"  {attr}: {getattr(res, attr)}\n")
                        log_file.write("\n")

                        # Dump the network state to observe voltage collapses or limit violations
                        log_file.write("--- GENERATORS STATE ---\n")
                        log_file.write(network.get_generators().to_string() + "\n\n")

                        log_file.write("--- BUSES VOLTAGE STATE ---\n")
                        # Using pandas to_string() ensures all columns are written to the text file
                        log_file.write(network.get_buses().to_string() + "\n\n")

                    logger.info(
                        f"Detailed divergence report saved successfully to '{log_filepath}'."
                    )
                except Exception as log_err:
                    logger.error(f"Failed to generate divergence report: {log_err}")

                return False

        except Exception as e:
            logger.error(f"Critical exception during load flow execution: {e}")
            return False
