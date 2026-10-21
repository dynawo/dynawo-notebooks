"""
Power Flow Execution Module.

This module handles the execution of the AC Load Flow on PyPowSyBl networks
using the default OpenLoadFlow engine.
"""

import json
import logging
from pathlib import Path
from typing import List, Optional

import pypowsybl as pp

logger = logging.getLogger(__name__)


class PowerFlowRunner:
    """
    Utility class responsible for executing AC Power Flow calculations
    and extracting their convergence status and details.
    """

    @staticmethod
    def load_slack_mapping(filename: str = "slack_bus_mapping.json") -> List[str]:
        """
        Loads the valid slack bus identifiers from an external JSON file.
        Provides fallback identifiers if the file cannot be loaded or is missing.

        :param filename: The name of the JSON file containing the slack bus rules.
        :return: A list of strings representing valid slack bus name fragments.
        """
        script_dir = Path(__file__).resolve().parent
        filepath = script_dir / filename

        try:
            with open(filepath, "r", encoding="utf-8") as f:
                mapping = json.load(f)
            logger.debug(f"Loaded {len(mapping)} slack bus identifiers from {filename}")
            return mapping
        except Exception as e:
            logger.warning(
                f"Failed to load slack bus mapping from {filepath}. Using defaults. Error: {e}"
            )
            return ["infinite", "slack", "gen1", "g20"]

    @staticmethod
    def find_slack_bus(network: pp.network.Network) -> Optional[str]:
        """
        Finds the bus of the slack generator: the one designated by the slackTerminal
        extension written by the converter, or else the first generator whose identifier
        matches slack_bus_mapping.json.

        :param network: The PyPowSyBl network.
        :return: The identifier of the slack bus (bus view), or None.
        """
        gens_df = network.get_generators()
        try:
            slack_terminals = network.get_extensions("slackTerminal")
            for element_id in slack_terminals.get("element_id", []):
                if element_id in gens_df.index:
                    return gens_df.at[element_id, "bus_id"]
        except Exception as e:
            logger.debug(f"No slackTerminal extension available: {e}")

        identifiers = PowerFlowRunner.load_slack_mapping()
        for gid, row in gens_df.iterrows():
            if any(identifier in str(gid).lower() for identifier in identifiers):
                return row["bus_id"]
        return None

    @staticmethod
    def has_participation_factors(network: pp.network.Network) -> bool:
        """Tells whether some generators share the balancing through participation factors."""
        try:
            control = network.get_extensions("activePowerControl")
            return bool(not control.empty and control["participate"].any())
        except Exception:
            return False

    @staticmethod
    def run_ac_loadflow(network: pp.network.Network, export_path: str = ".") -> bool:
        """
        Executes the AC Load Flow on the provided PyPowSyBl network.
        The network object is updated in-place with the mathematical results.

        The active power balance is distributed in proportion to the participation
        factors written by the converter: those of the model when it shares the balance
        (frequency regulation through SignalN), or else a single participation of the
        slack generator, as with the infinite buses and slack sources of the Modelica
        models. Distributing the balance, rather than leaving it at the slack bus, writes
        it back to the active power of the generators.

        :param network: The PyPowSyBl network object to be analyzed.
        :param export_path: Target directory to save the divergence log if the load flow fails.
        :return: True if the load flow converged successfully, False otherwise.
        """
        logger.info("Starting AC Load Flow calculation (OpenLoadFlow)...")

        try:
            slack_bus_id = PowerFlowRunner.find_slack_bus(network)
            if slack_bus_id:
                logger.info(f"Slack Bus: {slack_bus_id}")

            provider_params = {
                "maxNewtonRaphsonIterations": "100",
                "lowImpedanceThreshold": "1e-8",
                # The generators built from the Modelica models have unbounded active power
                # limits: they must not be excluded from the balance as implausible
                "plausibleActivePowerLimit": "1e9",
            }
            if slack_bus_id:
                provider_params.update(
                    {
                        "slackBusSelectionMode": "NAME",
                        "slackBusesIds": str(slack_bus_id),
                    }
                )

            distributed = PowerFlowRunner.has_participation_factors(network)
            if not distributed:
                logger.warning(
                    "No generator participates in the balance: it stays at the slack bus."
                )
            lf_params = pp.loadflow.Parameters(
                provider_parameters=provider_params,
                voltage_init_mode=pp.loadflow.VoltageInitMode.UNIFORM_VALUES,
                distributed_slack=distributed,
                balance_type=pp.loadflow.BalanceType.PROPORTIONAL_TO_GENERATION_PARTICIPATION_FACTOR,
                use_reactive_limits=True,
            )

            results = pp.loadflow.run_ac(network, parameters=lf_params)

            main_result = results[0]
            status = main_result.status
            status_name = (
                main_result.status.name
                if hasattr(main_result.status, "name")
                else str(main_result.status)
            )

            if status_name == "CONVERGED":
                logger.info("SUCCESS: Load flow CONVERGED.")
                return True
            else:
                logger.warning(f"WARNING: Load flow DID NOT CONVERGE. Status: {status}")

                status_text = (
                    main_result.status_text if getattr(main_result, "status_text", None) else "None"
                )
                iterations = getattr(main_result, "iteration_count", "Unknown")
                ref_bus = getattr(main_result, "reference_bus_id", "None")

                if status_text != "None":
                    logger.warning(f"Status Details: {status_text}")
                if iterations != "Unknown":
                    logger.warning(f"Iterations performed: {iterations}")
                if ref_bus != "None":
                    logger.warning(f"Reference Bus (Slack) used: {ref_bus}")
                else:
                    logger.warning("No Reference Bus (Slack) was detected.")

                try:
                    export_dir = Path(export_path)
                    export_dir.mkdir(parents=True, exist_ok=True)
                    log_filepath = export_dir / "powerflow.log"

                    with open(log_filepath, "w", encoding="utf-8") as log_file:
                        log_file.write("=== OPENLOADFLOW DIVERGENCE REPORT ===\n")
                        log_file.write(f"Status: {status}\n")
                        log_file.write(f"Status Details: {status_text}\n")
                        log_file.write(f"Iterations: {iterations}\n")
                        log_file.write(f"Slack Bus: {ref_bus}\n\n")

                        log_file.write("--- SOLVER METRICS ---\n")
                        for i, res in enumerate(results):
                            log_file.write(f"Synchronous Component {i}:\n")
                            for attr in dir(res):
                                if not attr.startswith("_") and not callable(getattr(res, attr)):
                                    log_file.write(f"  {attr}: {getattr(res, attr)}\n")
                        log_file.write("\n")

                        log_file.write("--- GENERATORS STATE ---\n")
                        log_file.write(network.get_generators().to_string() + "\n\n")

                        log_file.write("--- BUSES VOLTAGE STATE ---\n")
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
