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
        Main pipeline: Extracts components, resolves params, and fixes connectivity.
        """
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        # 1. Component Extraction
        all_components_map = self._collect_all_components_recursive()
        logger.info(f"Total unique components found: {len(all_components_map)}")

        # 2. Dictionary Initialization
        topo = {
            "buses": {},
            "lines": {},
            "generators": {},
            "loads": {},
            "shunts": {},
            "transformers": {},
        }

        # 3. Process Components and Extract Parameters
        for comp_name, comp_type in all_components_map.items():
            params = self._extract_parameters(self.model_name, comp_name)

            type_lower = comp_type.lower()

            # Categorize components based on their Modelica type
            if "bus" in type_lower and "infinite" not in type_lower:
                topo["buses"][comp_name] = params
            elif "line" in type_lower:
                topo["lines"][comp_name] = params
            elif "generator" in type_lower or "infinitebus" in type_lower or "pv" in type_lower:
                topo["generators"][comp_name] = params
            elif "load" in type_lower:
                topo["loads"][comp_name] = params
            elif "shunt" in type_lower or "capacitor" in type_lower or "reactor" in type_lower:
                topo["shunts"][comp_name] = params
            elif "transformer" in type_lower:
                topo["transformers"][comp_name] = params

        # 4. Fetch raw connections from the OpenModelica connector
        raw_connections = self.conn.get_connections(self.model_name)

        # 5. Apply generic graph resolution to map all pins to PyPowSyBl buses
        if raw_connections:
            self._build_topological_nodes(topo, raw_connections)
        else:
            logger.warning("No connections were retrieved from the model.")

        return topo

    # --------------------------------------------------------------------------
    # TOPOLOGICAL GRAPH RESOLUTION (NEW ALGORITHM)
    # --------------------------------------------------------------------------

    def _build_topological_nodes(
        self, topo: Dict[str, Dict], connections: List[List[str]]
    ) -> None:
        """
        Generic graph-based approach to resolve Modelica connections into PyPowSyBl buses.
        Finds connected components of terminals and generates Virtual Buses if an explicit
        bus is not present in the graph node. This guarantees that all equipment
        (Generators, Lines, etc.) has a valid Bus ID attached to it.
        """
        logger.info("Resolving electrical connections into topological buses...")

        # 1. Build adjacency list for terminals
        adj = {}
        for c in connections:
            if len(c) >= 2:
                term1, term2 = c[0], c[1]
                adj.setdefault(term1, []).append(term2)
                adj.setdefault(term2, []).append(term1)

        # 2. Find connected components (electrical nodes using BFS)
        visited = set()
        node_groups = []

        for terminal in adj.keys():
            if terminal not in visited:
                queue = [terminal]
                group = {terminal}
                visited.add(terminal)
                while queue:
                    curr = queue.pop(0)
                    for neighbor in adj.get(curr, []):
                        if neighbor not in visited:
                            visited.add(neighbor)
                            group.add(neighbor)
                            queue.append(neighbor)
                node_groups.append(group)

        # 3. Assign explicit or virtual buses to equipment
        virtual_bus_idx = 1

        for group in node_groups:
            bus_id = None

            # First pass: check if there's an explicit Modelica bus in this connected group
            for term in group:
                parts = term.split(".")
                comp_name = ".".join(parts[:-1])
                if comp_name in topo.get("buses", {}):
                    bus_id = comp_name
                    break

            # Second pass: if no explicit bus is found, generate a Virtual Bus
            if not bus_id:
                bus_id = f"VirtualBus_{virtual_bus_idx}"
                virtual_bus_idx += 1
                if "buses" not in topo:
                    topo["buses"] = {}
                # Default voltage, it can be updated later based on loadflow or base voltages
                topo["buses"][bus_id] = {"nominal_v": 225.0, "is_virtual": True}
                logger.debug(f"Created {bus_id} for direct connections.")

            # Third pass: map the equipment to the assigned bus_id
            for term in group:
                parts = term.split(".")
                if len(parts) < 2:
                    continue

                comp_name = ".".join(parts[:-1])
                pin_name = parts[-1].lower()

                # Map to Lines
                if comp_name in topo.get("lines", {}):
                    # Robust pin mapping to avoid substring collision (like 'a' in 'terminal')
                    if pin_name.endswith("1") or pin_name in ["p", "pin1", "terminal1", "a", "t1"]:
                        topo["lines"][comp_name]["bus1"] = bus_id
                    elif pin_name.endswith("2") or pin_name in [
                        "n",
                        "pin2",
                        "terminal2",
                        "b",
                        "t2",
                    ]:
                        topo["lines"][comp_name]["bus2"] = bus_id
                    else:
                        # Fallback if pin names are completely non-standard
                        if "bus1" not in topo["lines"][comp_name]:
                            topo["lines"][comp_name]["bus1"] = bus_id
                        else:
                            topo["lines"][comp_name]["bus2"] = bus_id

                # Map to Generators, Loads, and Shunts
                elif comp_name in topo.get("generators", {}):
                    topo["generators"][comp_name]["bus_id"] = bus_id  # Some versions use bus_id
                    topo["generators"][comp_name]["bus"] = bus_id  # Keep for compatibility
                elif comp_name in topo.get("loads", {}):
                    topo["loads"][comp_name]["bus_id"] = bus_id
                    topo["loads"][comp_name]["bus"] = bus_id
                elif comp_name in topo.get("shunts", {}):
                    topo["shunts"][comp_name]["bus_id"] = bus_id
                    topo["shunts"][comp_name]["bus"] = bus_id

                # Map to Transformers
                elif comp_name in topo.get("transformers", {}):
                    if pin_name.endswith("1") or pin_name in ["p", "pin1", "terminal1", "a", "t1"]:
                        topo["transformers"][comp_name]["bus1"] = bus_id
                    elif pin_name.endswith("2") or pin_name in [
                        "n",
                        "pin2",
                        "terminal2",
                        "b",
                        "t2",
                    ]:
                        topo["transformers"][comp_name]["bus2"] = bus_id
                    else:
                        if "bus1" not in topo["transformers"][comp_name]:
                            topo["transformers"][comp_name]["bus1"] = bus_id
                        else:
                            topo["transformers"][comp_name]["bus2"] = bus_id

    # --------------------------------------------------------------------------
    # COMPONENT & PARAMETER EXTRACTION HELPERS
    # --------------------------------------------------------------------------

    def _collect_all_components_recursive(
        self, current_model: Optional[str] = None, visited: Optional[set] = None
    ) -> Dict[str, str]:
        """
        Recursively retrieves all components defined in the model and its inherited classes using the OMC API.
        Returns a dictionary mapping component names to their Modelica types.
        """
        if current_model is None:
            current_model = self.model_name

        if visited is None:
            visited = set()

        # Evitar bucles infinitos en herencias circulares
        if current_model in visited:
            return {}
        visited.add(current_model)

        components = {}

        # 1. Obtener componentes del modelo actual
        cmd = f"getComponents({current_model})"
        raw_components = self.conn._omc.sendExpression(cmd)

        # OMPython puede devolver 'list' o 'tuple', debemos chequear ambos
        if isinstance(raw_components, (list, tuple)):
            for comp in raw_components:
                # OpenModelica devuelve una lista/tupla de atributos para cada componente.
                # Index 0: Tipo, Index 1: Nombre
                if isinstance(comp, (list, tuple)) and len(comp) >= 2:
                    comp_type = str(comp[0])
                    comp_name = str(comp[1])
                    components[comp_name] = comp_type

        # 2. Navegar recursivamente por las clases heredadas (necesario para la red Nordic)
        try:
            extends_list = self.conn.get_extends(current_model)
            if extends_list:
                for base_model in extends_list:
                    base_components = self._collect_all_components_recursive(base_model, visited)
                    # Añadir componentes heredados (sin sobrescribir los definidos localmente)
                    for k, v in base_components.items():
                        if k not in components:
                            components[k] = v
        except Exception as e:
            logger.debug(f"Could not fetch extends for {current_model}: {e}")

        return components

    def _resolve_val(self, val_str: Optional[str]) -> Optional[float]:
        """Safely parses a string value into a float, stripping quotes."""
        if not val_str:
            return None
        try:
            return float(val_str.strip().replace("'", "").replace('"', ""))
        except ValueError:
            return None

    def _extract_parameters(self, model_context: str, comp_name: str) -> Dict[str, float]:
        """
        Extracts key electrical parameters from a given component via OMC.
        """
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
            val_str = self.conn.get_parameter_value(model_context, f"{comp_name}.{param_modelica}")
            val = self._resolve_val(val_str)
            if val is not None:
                extracted[param_json] = val
        return extracted
