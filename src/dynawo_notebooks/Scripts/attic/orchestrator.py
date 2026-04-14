# AutoSimLib/core/orchestrator.py
import re
import logging
from ..utils.units import UnitConverter as UC

logger = logging.getLogger(__name__)


class Orchestrator:
    """
    Coordinates data transfer between the static grid and the dynamic model.
    """

    def __init__(self, grid_manager, modelica_wrapper):
        self.grid = grid_manager
        self.model = modelica_wrapper
        self.manual_mapping = {}

    def register_mapping(self, mapping_dict):
        """
        Allows defining manual mappings for non-standard cases.
        Ex: {'Bus1': {'v_target': 'my_weird_variable.V'}}
        """
        self.manual_mapping = mapping_dict

    def sync_models(self):
        """
        Executes the full synchronization and initialization process.
        """
        # 1. Get steady state
        grid_data = self.grid.run_initialization_flow()

        # 2. Get model variables
        model_vars = self.model.inspect_variables()

        # 3. Build update list
        updates = {}

        # Mapping Strategy for Buses
        for bus_id, val in grid_data["buses"].items():
            v_mag_volts = UC.kv_to_volts(val["v_mag_kv"])
            v_angle_rad = UC.deg_to_rad(val["v_angle_deg"])

            # Look for corresponding variables in Modelica
            targets = self._find_modelica_targets(bus_id, model_vars)

            if targets["v_mag"]:
                updates[targets["v_mag"]] = v_mag_volts
                logger.info(
                    f"Mapping: {bus_id} V_mag ({val['v_mag_kv']} kV) -> {targets['v_mag']}"
                )

            if targets["v_angle"]:
                updates[targets["v_angle"]] = v_angle_rad
                logger.info(
                    f"Mapping: {bus_id} V_angle ({val['v_angle_deg']} deg) -> {targets['v_angle']}"
                )

        # 4. Apply changes
        if updates:
            self.model.apply_initialization(updates)
        else:
            logger.warning("No automatic matches found for initialization.")

    def _find_modelica_targets(self, element_id, model_vars):
        """
        Heuristic Mapping Algorithm.
        Attempts to find variables in Modelica that match the element ID.
        """
        # First verify manual mapping
        if element_id in self.manual_mapping:
            return self.manual_mapping[element_id]

        targets = {"v_mag": None, "v_angle": None}

        # Common search patterns in libraries like OpenIPSL or MSL
        # We look for variables containing the ID and ending in initialization suffixes
        # Example: "grid.Bus1.v_start", "Bus1.V", "Bus1_V_init"

        # Iterating over all model variables (can be optimized with Trie or precompiled Regex)
        for var_name in model_vars:
            # If the variable name contains the bus ID (case insensitive)
            if element_id.lower() in var_name.lower():
                # Heuristic for Voltage Magnitude
                if any(x in var_name for x in [".v_start", ".V_start", ".v_0", ".V_0"]):
                    # Verify it's not an alias to avoid redundancy
                    if model_vars[var_name]["alias"] == "noAlias":
                        targets["v_mag"] = var_name

                # Heuristic for Voltage Angle
                if any(x in var_name for x in [".angle_start", ".theta_start", ".angle_0"]):
                    if model_vars[var_name]["alias"] == "noAlias":
                        targets["v_angle"] = var_name

        return targets
