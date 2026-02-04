# FILE: src/dynawo_notebooks/Scripts/core/parser.py
"""
Modelica Parsing Logic.

This module handles the extraction of topology data from raw OMC outputs,
resolves parameter references, and manages graph connectivity.
It supports inheritance traversal and strictly matches pin names (terminal1/2, p/n)
to ensure Lines and Transformers are connected correctly.
"""

import logging
from typing import Dict, Any, Optional, List
from .connector import OMCConnector

logger = logging.getLogger(__name__)


class ModelicaParser:
    """
    Parses raw Modelica data into a structured dictionary suitable for Network creation.
    """

    def __init__(self, connector: OMCConnector, model_name: str):
        self.conn = connector
        self.model_name = model_name

    def parse_topology(self) -> Dict[str, Dict]:
        """
        Main pipeline: Extracts components (recursively), resolves params, and fixes connectivity (recursively).
        """
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        # 1. Recursive Component Extraction (Handles Inheritance)
        all_components_map = self._collect_all_components_recursive()
        logger.info(f"Total unique components found: {len(all_components_map)}")

        # 2. Dictionary Initialization
        # Added 'transformers' category
        topo = {
            "buses": {},
            "lines": {},
            "generators": {},
            "loads": {},
            "shunts": {},
            "transformers": {},
        }

        # 3. Process Components based on their Type/Name
        for comp_name, comp_data in all_components_map.items():
            c_type = comp_data["type"]
            params = self._extract_parameters(self.model_name, comp_name)

            # Build the common data structure
            element_data = {"id": comp_name, "modelica_type": c_type, **params}

            # --- Generators ---
            if "Generator" in c_type or "Source" in c_type:
                topo["generators"][comp_name] = element_data

            # --- Loads ---
            elif "Load" in c_type:
                topo["loads"][comp_name] = element_data

            # --- Shunts ---
            elif "Shunt" in c_type or "Capacitor" in c_type or "Reactance" in c_type:
                topo["shunts"][comp_name] = element_data

            # --- Lines ---
            elif "Line" in c_type:
                topo["lines"][comp_name] = element_data

            # --- Transformers ---
            # Explicit support for Transformers
            elif "Transformer" in c_type:
                topo["transformers"][comp_name] = element_data

            # --- Buses ---
            elif "Bus" in c_type:
                topo["buses"][comp_name] = element_data

        # 4. Recursive Connection Extraction
        all_connections = self._collect_all_connections_recursive()
        logger.info(f"Total connections equations found: {len(all_connections)}")

        # 5. Apply Connections (Map components to buses)
        self._apply_connections(topo, all_connections)

        return topo

    # --------------------------------------------------------------------------
    # RECURSIVE COLLECTION METHODS
    # --------------------------------------------------------------------------

    def _collect_all_components_recursive(
        self, model_name: str = None, visited: set = None
    ) -> Dict[str, Any]:
        """
        Recursively collects all components from the model and its inherited classes.
        """
        if model_name is None:
            model_name = self.model_name
        if visited is None:
            visited = set()

        components_map = {}
        if model_name in visited:
            return components_map
        visited.add(model_name)

        # 1. Get components of the current class
        raw_comps = self.conn.get_components(model_name)
        for c in raw_comps:
            components_map[c[1]] = {"type": c[0], "origin": model_name}

        # 2. Handle Inheritance
        parents = self.conn.get_extends(model_name)
        for parent in parents:
            parent_comps = self._collect_all_components_recursive(parent, visited)
            for name, data in parent_comps.items():
                if name not in components_map:
                    components_map[name] = data

        return components_map

    def _collect_all_connections_recursive(
        self, model_name: str = None, visited: set = None
    ) -> List[List[str]]:
        """
        Recursively collects all connection equations.
        """
        if model_name is None:
            model_name = self.model_name
        if visited is None:
            visited = set()

        connections = []
        if model_name in visited:
            return connections
        visited.add(model_name)

        local_conns = self.conn.get_connections(model_name)
        connections.extend(local_conns)

        parents = self.conn.get_extends(model_name)
        for parent in parents:
            parent_conns = self._collect_all_connections_recursive(parent, visited)
            connections.extend(parent_conns)

        return connections

    # --------------------------------------------------------------------------
    # CONNECTION PROCESSING (IMPROVED)
    # --------------------------------------------------------------------------

    def _apply_connections(self, topo: Dict, connections: List[List[str]]):
        """
        Iterates over raw connections and assigns buses to components.
        Handles 'terminal1'/'p' vs 'terminal2'/'n' logic for 2-port devices.
        """
        bus_names = set(topo["buses"].keys())

        for c1_full, c2_full in connections:
            # Parse full strings: "line.terminal1" -> comp="line", pin="terminal1"
            c1_comp, c1_pin = self._split_comp_pin(c1_full)
            c2_comp, c2_pin = self._split_comp_pin(c2_full)

            # Determine which one is the bus
            bus_id = None
            target_comp = None
            target_pin = None

            if c1_comp in bus_names and c2_comp not in bus_names:
                bus_id = c1_comp
                target_comp = c2_comp
                target_pin = c2_pin
            elif c2_comp in bus_names and c1_comp not in bus_names:
                bus_id = c2_comp
                target_comp = c1_comp
                target_pin = c1_pin

            # If we found a Component <-> Bus connection
            if bus_id and target_comp:
                self._assign_bus_to_component(topo, target_comp, target_pin, bus_id)

    def _split_comp_pin(self, full_str: str):
        """Helper to safely split 'obj.pin'."""
        parts = full_str.split(".")
        if len(parts) > 1:
            return parts[0], parts[1]
        return parts[0], ""

    def _assign_bus_to_component(self, topo: Dict, comp_id: str, pin_name: str, bus_id: str):
        """
        Smartly assigns the bus based on the component category and pin name.
        """
        # 1. Transformers and Lines (2-Port Devices)
        # We check specific pin names to decide if it is side 1 or side 2
        for cat in ["lines", "transformers"]:
            if comp_id in topo[cat]:
                # Heuristics for Side 1 (Primary/Left)
                if pin_name in ["terminal1", "p", "p1", "primary"]:
                    topo[cat][comp_id]["bus1"] = bus_id
                # Heuristics for Side 2 (Secondary/Right)
                elif pin_name in ["terminal2", "n", "p2", "secondary"]:
                    topo[cat][comp_id]["bus2"] = bus_id
                else:
                    # Fallback: fill empty slots if pin name is weird
                    if "bus1" not in topo[cat][comp_id]:
                        topo[cat][comp_id]["bus1"] = bus_id
                    elif "bus2" not in topo[cat][comp_id]:
                        topo[cat][comp_id]["bus2"] = bus_id
                return

        # 2. One-Port Devices (Generators, Loads, Shunts)
        for cat in ["generators", "loads", "shunts"]:
            if comp_id in topo[cat]:
                topo[cat][comp_id]["connected_to"] = bus_id
                return

    # --------------------------------------------------------------------------
    # PARAMETER EXTRACTION HELPERS
    # --------------------------------------------------------------------------

    def _resolve_val(self, val_str: Optional[str]) -> Optional[float]:
        if not val_str:
            return None
        try:
            return float(val_str.strip().replace("'", ""))
        except ValueError:
            return None

    def _extract_parameters(self, model_context: str, comp_name: str) -> Dict[str, float]:
        param_map = {
            "Sn": "sn_nom",
            "SNom": "sn_nom",
            "Un": "nominal_v",
            "U": "nominal_v",
            "UPu": "u_pu",
            "U0Pu": "u_pu",
            "P": "p",
            "PGen": "p",
            "P0Pu": "p_pu",
            "PGen0Pu": "p_pu",
            "Q": "q",
            "QGen": "q",
            "Q0Pu": "q_pu",
            "QGen0Pu": "q_pu",
            "R": "r",
            "RPu": "r_pu",
            "X": "x",
            "XPu": "x_pu",
            "B": "b",
            "BPu": "b_pu",
            "G": "g",
            "GPu": "g_pu",
            "tapRatio": "ratio",
        }
        extracted = {}
        for param_modelica, param_json in param_map.items():
            full_path = f"{comp_name}.{param_modelica}"
            val_str = self.conn.get_parameter_value(model_context, full_path)
            val = self._resolve_val(val_str)
            if val is not None:
                extracted[param_json] = val
        return extracted
