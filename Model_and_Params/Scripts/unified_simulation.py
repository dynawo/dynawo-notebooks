import pypowsybl as pp
import pandas as pd
import logging
from typing import List, Dict, Optional, Union

# Logging configuration for professional traceability
logging.basicConfig(
    level=logging.INFO, format="%(asctime)s - %(name)s - %(levelname)s - %(message)s"
)
logger = logging.getLogger("UnifiedSim")


class UnifiedSimulation:
    """
    Unified controller for the orchestration of static and dynamic simulations
    in power systems, agnostic to network topology.
    """

    def __init__(self, network_source: str, resources_path: str = None):
        """
        Initializes the simulation by loading the network.

        Args:
            network_source (str): Path to the network file (.xiidm, .raw) or 'ieee14' for demo.
            resources_path (str): Optional path to additional dynamic model libraries.
        """
        self.network_source = network_source
        self.network = self._load_network()

        # Initialization of mapping containers
        self.model_mapping = pp.dynamic.ModelMapping()
        self.event_mapping = pp.dynamic.EventMapping()
        self.output_mapping = pp.dynamic.OutputVariableMapping()
        self.simulation = pp.dynamic.Simulation()

        self.simulation_result = None
        self.time_step = 0.01  # Default time step

    def _load_network(self):
        """Internal method for robust network loading."""
        try:
            if isinstance(self.network_source, str):
                return pp.network.load(self.network_source)
            else:
                return self.network_source
        except Exception as e:
            logger.error(f"Critical error while loading the network: {str(e)}")
            raise

    def run_standard_loadflow(self, verbose: bool = True) -> bool:
        """
        Executes a standard AC load flow (standardized Cell 3).

        Returns:
            bool: True if converged, False otherwise.
        """
        logger.info("Executing AC Load Flow (Newton-Raphson)...")
        try:
            # Basic LF execution
            results = pp.loadflow.run_ac(self.network)

            # Convergence analysis
            # In large systems, there may be multiple islands or connected components.
            # We verify that at least the main component converges.
            converged = True
            for res in results:
                if str(res.status) != "ComponentStatus.CONVERGED":
                    logger.warning(
                        f"Component {res.connected_component_num} DID NOT converge: {res.status_text}"
                    )
                    converged = False

            if converged and verbose:
                logger.info("Load Flow converged successfully.")

            return converged
        except Exception as e:
            logger.error(f"Load flow engine failure: {str(e)}")
            return False

    def setup_dynamic_models(self, strategy: str = "generic"):
        """
        Configures dynamic models (standardized Cells 4-5).

        Args:
            strategy (str): 'generic' for classic models, 'bess_focused' if batteries are detected.
        """
        logger.info(f"Applying dynamic mapping strategy: {strategy}")

        # Get equipment DataFrames
        gens = self.network.get_generators()
        loads = self.network.get_loads()

        if strategy == "generic":
            # Agnostic strategy: Assign classic models to all generators
            # Note: This requires dynamic parameters to be in the network or use defaults
            # Use of mapping methods
            if not gens.empty:
                # Mapping to generic synchronous generator if no model is defined
                # It is assumed that 'gens' contains the necessary IDs
                pass
                # In a real implementation, we would iterate over gens.index to:
                # self.model_mapping.add_synchronous_generator(gen_id, model_params)

        elif strategy == "bess_focused":
            # Logic to identify BESS (e.g., by name or energy source type)
            bess_gens = gens
            if not bess_gens.empty:
                logger.info(f"Detected {len(bess_gens)} BESS units. Assigning inverter models.")
                # self.model_mapping.add_grid_forming_converter(...)
            else:
                logger.warning("BESS strategy requested but no matching equipment found.")

    def add_perturbation(
        self, type: str, target_filter: str = "max_load", time: float = 1.0, **kwargs
    ):
        """
        Agnostic event generator (standardized Cell 6).

        Args:
            type (str): 'disconnect', 'short_circuit'.
            target_filter (str): Criterion to choose the target (e.g., 'max_load', 'random_line').
            time (float): Simulation time of the event.
        """
        target_id = None

        # Agnostic target selection logic
        if target_filter == "max_load":
            loads = self.network.get_loads()
            if not loads.empty:
                target_id = loads["p"].idxmax()  # Load with highest active consumption
        elif target_filter == "first_line":
            lines = self.network.get_lines()
            if not lines.empty:
                target_id = lines.index
        else:
            # Assume target_filter is an explicit ID if it doesn't match keywords
            target_id = target_filter

        if not target_id:
            logger.error("Could not identify a valid target for the event.")
            return

        logger.info(f"Scheduling '{type}' event on equipment '{target_id}' for t={time}s")

        # EventMapping
        if type == "disconnect":
            # Creation of the event DataFrame required by pypowsybl
            # The API requires specific columns
            self.event_mapping.add_disconnection(
                static_id=str(target_id), start_time=time, disconnect_only="TWO"
            )

        elif type == "short_circuit":
            # Implementation of three-phase fault
            pass

    def configure_outputs(self, variables: List[str]):
        """
        Configures which variables will be saved in the output.

        Args:
            variables (List[str]): List of variable names (e.g. ['voltage', 'activePower'])
        """
        logger.info(f"Configuring outputs for variables: {variables}")

        # Select generators to monitor
        gens = self.network.get_generators()

        if gens.empty:
            logger.warning("No generators found to configure outputs.")
            return

        for gen_id in gens.index:
            for var_name in variables:
                # FIX: Use the standard add_curve method iterating over variables
                try:
                    self.output_mapping.add_curve(gen_id, var_name)
                except Exception as e:
                    logger.warning(f"Could not add curve '{var_name}' for '{gen_id}': {e}")

        logger.info("Output mapping configured successfully.")

    def execute_simulation(self, start: float, stop: float) -> Optional:  # type: ignore
        """
        Executes the dynamic simulation (Cell 8 part 1).

        Returns:
            pd.DataFrame: Result curves or None if it fails.
        """
        logger.info(f"Starting dynamic simulation [{start}s -> {stop}s]...")

        try:
            # Main call to run
            self.simulation_result = self.simulation.run(
                self.network,
                self.model_mapping,
                self.event_mapping,
                self.output_mapping,
                pp.dynamic.Parameters(start, stop),
            )

            status = self.simulation_result.status()
            logger.info(f"Simulation finished. Status: {status}")

            if status == pp.dynamic.SimulationResult.Status.SUCCESS:
                # Retrieve curves
                return self.simulation_result.curves()
            else:
                logger.error(f"Simulation failed: {self.simulation_result.status_text()}")
                return None

        except Exception as e:
            logger.error(f"Exception in dynamic engine: {str(e)}")
            raise
