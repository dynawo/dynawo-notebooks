# AutoSimLib/core/modelica_wrapper.py
from OMPython import ModelicaSystem
import logging
import os

logger = logging.getLogger(__name__)


class ModelicaWrapper:
    """
    Controller for the OpenModelica session.
    Handles loading, compilation, introspection, and simulation.
    """

    def __init__(self, model_path, model_name, libraries=None):
        self.model_name = model_name
        self._quantities_cache = {}

        # Load standard libraries if none specified
        if libraries is None:
            libraries = ["Modelica"]

        if not os.path.exists(model_path):
            raise FileNotFoundError(f"File not found: {model_path}")

        logger.info(f"Starting compilation of {model_name}...")
        # Instantiating ModelicaSystem (this launches the OMC compiler)
        self.mod = ModelicaSystem(model_path, model_name, libraries)
        logger.info("Model compiled successfully.")

    def inspect_variables(self):
        """
        Executes getQuantities and builds a quick lookup index.
        Returns a dictionary indexed by variable name.
        """
        if self._quantities_cache:
            return self._quantities_cache

        logger.debug("Starting variable introspection (this may take time)...")
        # getQuantities returns list of dicts
        all_vars = self.mod.getQuantities()

        # Index and filter only relevant variables (Continuous and Parameters)
        # This reduces search space for the orchestrator
        for var in all_vars:
            if var["Variability"] in ["parameter", "continuous", "discrete"]:
                self._quantities_cache[var["Name"]] = var

        logger.info(f"Introspection completed: {len(self._quantities_cache)} variables indexed.")
        return self._quantities_cache

    def apply_initialization(self, params_dict):
        """
        Applies initialization values using bulk update for performance.
        """
        if not params_dict:
            logger.warning("Initialization dictionary empty. No changes applied.")
            return

        # Pre-validation: ensure variables exist and are modifiable
        # (Deep validation code omitted for brevity, but checking against
        # _quantities_cache if 'Changeable' is 'true' is recommended)

        # Convert to list of strings ["var=val",...]
        param_list = [f"{k}={v}" for k, v in params_dict.items()]

        logger.info(f"Applying {len(param_list)} initialization parameters...")
        try:
            result = self.mod.setParameters(param_list)
            # setParameters may return None or info string depending on version
            logger.debug(f"setParameters result: {result}")
        except Exception as e:
            logger.error(f"Failed to apply parameters: {str(e)}")
            raise

    def simulate(self, stop_time=5.0, step_size=0.01):
        """Executes the simulation."""
        logger.info(f"Simulating {self.model_name} (0 -> {stop_time}s)...")
        self.mod.setSimulationOptions()
        self.mod.simulate()
        logger.info("Simulation finished.")

    def get_trajectory(self, var_names):
        """Retrieves simulation results."""
        # getSolutions returns numpy arrays
        results = self.mod.getSolutions(["time"] + var_names)
        time = results
        data = {name: res for name, res in zip(var_names, results[1:])}
        return time, data
