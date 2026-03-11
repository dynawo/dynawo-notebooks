# FILE: src/dynawo_notebooks/Scripts/core/parser.py
"""
Modelica Topology Parser Module.

This module is responsible for extracting the electrical topology and physical
parameters from Modelica network models. It utilizes the OMCConnector to query
the OpenModelica compiler, inspecting flat models and resolving variable mappings
to build a standardized topological dictionary.
"""

import os
import json
import logging
import re
from typing import Dict, Any, Optional, List
from .connector import OMCConnector

logger = logging.getLogger(__name__)


class ModelicaParser:
    """
    Parses Modelica models to extract hierarchical components, parameter assignments,
    and topological connectivity (nodes and edges).
    """

    def __init__(self, connector: OMCConnector, model_name: str):
        """
        Initializes the ModelicaParser instance.

        It attempts to flatten the model to resolve variables and stores
        the raw code of the top-level model to be used as a fallback for regex parsing.

        :param connector: Active OMCConnector instance for Modelica queries.
        :param model_name: The name of the root Modelica model to parse.
        """
        self.conn = connector
        self.model_name = model_name
        self.flat_model = self.conn.instantiate_model(model_name) or ""

        # Store the source code of the main model (e.g., LoadFlow.mo) for Fallback regex parsing
        raw_code = self.conn._omc.sendExpression(f"list({self.model_name})")
        self.top_code = str(raw_code) if raw_code else ""

        self._flat_cache = {}

        # --- LOAD PARAMETER MAPPING ---
        self.param_map = self._load_param_mapping()

        # --- OPTIMIZATION: BULK PARSING ---
        # Instead of thousands of individual ZMQ calls, we pre-parse the data into
        # lookup dictionaries once during initialization.
        self._flat_assignments = self._prebuild_assignment_map(self.flat_model)
        self._source_assignments = self._prebuild_source_map(self.top_code)

    def _load_param_mapping(self, filename: str = "param_mapping.json") -> Dict[str, str]:
        """
        Loads the parameter mapping dictionary from an external JSON configuration file.
        """
        script_dir = os.path.dirname(os.path.abspath(__file__))
        filepath = os.path.join(script_dir, filename)

        try:
            with open(filepath, "r", encoding="utf-8") as f:
                mapping = json.load(f)
            logger.info(f"Loaded {len(mapping)} parameter mappings from {filename}")
            return mapping
        except Exception as e:
            logger.error(
                f"Failed to load parameter mapping from {filepath}. Using empty map. Error: {e}"
            )
            return {}

    def _prebuild_assignment_map(self, flat_str: str) -> Dict[str, float]:
        """
        Scans the flattened model string once to map all parameter assignments to their values.

        Note: We only capture literals here; Complex types are handled via fallback.

        :param flat_str: The flattened model string containing variable assignments.
        :return: A dictionary mapping 'path.to.component.parameter' to numerical values.
        """
        # Pattern to capture 'path.to.component.parameter = value;'
        pattern = re.compile(r"([\w\.]+)\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)\s*;")
        return {match.group(1): float(match.group(2)) for match in pattern.finditer(flat_str)}

    def _prebuild_source_map(self, source_str: str) -> Dict[str, float]:
        """
        Scans the raw source code string once to map all parameter assignments to their values.

        :param source_str: The raw source code of the Modelica model.
        :return: A dictionary mapping 'param_component' to numerical values.
        """
        pattern = re.compile(r"\b([\w\.]+)\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)\b")
        return {match.group(1): float(match.group(2)) for match in pattern.finditer(source_str)}

    def parse_topology(self) -> Dict[str, Dict]:
        """
        Executes the full parsing pipeline. Extracts all components, categorizes them
        based on their types, extracts their parameters, and resolves their connectivity.

        :return: A deeply structured dictionary containing categorized topological elements.
        """
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        all_components_map = self._collect_all_components_recursive()
        logger.info(f"Total unique components found: {len(all_components_map)}")

        if self.flat_model and len(self.flat_model) > 100:
            logger.info(
                f"SUCCESS: Flattened model generated correctly ({len(self.flat_model)} characters)."
            )
        else:
            logger.info(
                f"WARNING: Flattened model is empty or too short. "
                f"OpenModelica could not resolve equations for {self.model_name}. "
            )

        topo = {
            "buses": {},
            "lines": {},
            "generators": {},
            "loads": {},
            "shunts": {},
            "transformers": {},
        }

        for comp_name, comp_info in all_components_map.items():
            if isinstance(comp_info, dict):
                comp_type = comp_info["type"]
                declaring_model = comp_info["declared_in"]
            else:
                comp_type = comp_info
                declaring_model = self.model_name

            params = self._extract_parameters(declaring_model, comp_name)

            # Store the Modelica type to allow the Converter to infer equipment behavior (e.g., PQ vs PV nodes)
            params["modelica_type"] = comp_type
            type_lower = comp_type.lower()

            if "bus" in type_lower and "infinite" not in type_lower:
                topo["buses"][comp_name] = params
            elif "line" in type_lower:
                topo["lines"][comp_name] = params
            elif "generator" in type_lower or "infinitebus" in type_lower or "pv" in type_lower:
                topo["generators"][comp_name] = params
            elif "load" in type_lower:
                topo["loads"][comp_name] = params
            elif "shunt" in type_lower or "capacitor" in type_lower:
                topo["shunts"][comp_name] = params
            elif "transformer" in type_lower:
                topo["transformers"][comp_name] = params

        raw_connections = self._collect_all_connections_recursive()
        if raw_connections:
            self._build_topological_nodes(topo, raw_connections)

        return topo

    def _collect_all_components_recursive(
        self, current_model: Optional[str] = None, visited: Optional[set] = None
    ) -> Dict[str, Any]:
        """
        Recursively queries the OMC to retrieve all declared components
        in the current model and its inherited base classes.

        :param current_model: The name of the Modelica model to inspect.
        :param visited: A set tracking already visited models to prevent infinite loops.
        :return: A mapping of component instance names to their structural types and origins.
        """
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return {}
        visited.add(current_model)

        components = {}
        raw = self.conn.get_components(current_model)
        if isinstance(raw, (list, tuple)):
            for comp in raw:
                if isinstance(comp, (list, tuple)) and len(comp) >= 2:
                    components[str(comp[1])] = {"type": str(comp[0]), "declared_in": current_model}

        for base in self.conn.get_extends(current_model):
            components.update(self._collect_all_components_recursive(base, visited))
        return components

    def _collect_all_connections_recursive(
        self, current_model: Optional[str] = None, visited: Optional[set] = None
    ) -> List[List[str]]:
        """
        Recursively retrieves explicit electrical connection statements (connect())
        declared within the model and its inherited base classes.

        :param current_model: The name of the Modelica model to inspect.
        :param visited: A set tracking already visited models.
        :return: A list containing pairs of connected terminals.
        """
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return []
        visited.add(current_model)

        connections = self.conn.get_connections(current_model)
        for base in self.conn.get_extends(current_model):
            connections.extend(self._collect_all_connections_recursive(base, visited))
        return connections

    def _build_topological_nodes(
        self, topo: Dict[str, Dict], connections: List[List[str]]
    ) -> None:
        """
        Processes connection statements to deduce physical topological nodes.
        Groups interconnected pins/terminals into logical buses, creating Virtual
        Buses when implicit junctions are detected without an explicit Bus component.

        :param topo: The topological dictionary containing extracted components.
        :param connections: List of connection terminal pairs.
        """
        adj = {}
        for c in connections:
            if len(c) >= 2:
                term1, term2 = str(c[0]), str(c[1])
                adj.setdefault(term1, []).append(term2)
                adj.setdefault(term2, []).append(term1)

        visited = set()
        node_groups = []
        for terminal in adj.keys():
            if terminal not in visited:
                queue, group = [terminal], {terminal}
                visited.add(terminal)
                while queue:
                    curr = queue.pop(0)
                    for neighbor in adj.get(curr, []):
                        if neighbor not in visited:
                            visited.add(neighbor)
                            group.add(neighbor)
                            queue.append(neighbor)
                node_groups.append(group)

        virtual_bus_idx = 1
        for group in node_groups:
            bus_id = next(
                (
                    ".".join(t.split(".")[:-1])
                    for t in group
                    if ".".join(t.split(".")[:-1]) in topo["buses"]
                ),
                None,
            )

            if not bus_id:
                bus_id = f"VirtualBus_{virtual_bus_idx}"
                virtual_bus_idx += 1

                # Capture the first pin in the topological group as a reference point.
                # This allows the comparator to query the complex voltage (V.re, V.im) directly.
                om_ref = list(group)[0] if group else None
                topo["buses"][bus_id] = {
                    "nominal_v": 225.0,
                    "is_virtual": True,
                    "om_reference": om_ref,
                }

            for term in group:
                parts = term.split(".")
                if len(parts) < 2:
                    continue
                comp_name, pin_name = ".".join(parts[:-1]), parts[-1].lower()

                for cat in ["lines", "transformers"]:
                    if comp_name in topo[cat]:
                        side = (
                            "bus1"
                            if (pin_name.endswith("1") or pin_name in ["p", "terminal1", "a"])
                            else "bus2"
                        )
                        topo[cat][comp_name][side] = bus_id
                for cat in ["generators", "loads", "shunts"]:
                    if comp_name in topo[cat]:
                        topo[cat][comp_name]["bus"] = bus_id

    def _extract_from_flat(self, comp_name: str, param: str) -> Optional[float]:
        """
        Extracts parameters utilizing the pre-built memory map to bypass ZMQ latency.

        :param comp_name: The instance name of the component.
        :param param: The parameter name to search for (e.g., 's0Pu.re').
        :return: The extracted numerical float value, or None if not found.
        """
        return self._flat_assignments.get(f"{comp_name}.{param}")

    def _resolve_val(self, val_str: Optional[str], depth: int = 0) -> Any:
        """
        Safely casts a raw Modelica string value into a Python float or complex number.
        Can resolve mathematical expressions and recursively fetch variable definitions.

        :param val_str: The raw string expression assigned to a parameter.
        :param depth: Current recursion depth to prevent infinite loops.
        :return: A numerical value (float or complex), or None if unresolved.
        """
        if not val_str or depth > 5:
            return None
        clean = val_str.strip().replace("'", "").replace('"', "")
        try:
            return float(clean)
        except ValueError:
            pass

        identifiers = set(re.findall(r"[a-zA-Z_][a-zA-Z0-9_]*", clean))
        resolved_expr = clean
        for var in identifiers:
            if var in ["Complex", "sin", "cos", "tan", "sqrt", "j"]:
                continue

            # Optimized variable lookup using the source map
            var_val = self._source_assignments.get(var)
            if var_val is None:
                var_val = self.conn.get_parameter_value(self.model_name, var)

            if var_val is not None:
                val_num = self._resolve_val(str(var_val), depth + 1)
                if val_num is not None:
                    if isinstance(val_num, complex):
                        resolved_expr = re.sub(
                            rf"\b{var}\b",
                            f"Complex({val_num.real}, {val_num.imag})",
                            resolved_expr,
                        )
                    else:
                        resolved_expr = re.sub(r"\b" + var + r"\b", str(val_num), resolved_expr)

        py_expr = resolved_expr.replace("^", "**")

        def Complex_func(r, i):
            return complex(r, i)

        try:
            return eval(py_expr, {"__builtins__": None}, {"Complex": Complex_func})
        except:
            return None

    def _extract_parameters(self, declaring_model: str, comp_name: str) -> Dict[str, float]:
        """
        Extracts physical parameters for a specific component using multi-strategy lookups.

        This method prioritizes pre-built memory maps (Flattened and Source) to bypass
        OMC communication latency. It includes logic for sign correction (generation),
        complex number resolution, and hierarchical modifier support (IEEE 57).

        :param declaring_model: The name of the Modelica model where the component is declared.
        :param comp_name: The instance name of the component.
        :return: A dictionary of extracted parameter keys and their float values.
        """
        extracted = {}

        # Iterate over the mapping loaded from JSON
        for pm, pj in self.param_map.items():
            # Strategy 1: Flattened Memory Map (Resolved numerical literals)
            val = self._flat_assignments.get(f"{comp_name}.{pm}")

            # Strategy 2: Source Code Memory Map (TestCase Modifiers)
            if val is None:
                # Pattern A: Nordic style (param_comp)
                val = self._source_assignments.get(f"{pm}_{comp_name}")
                # Pattern B: IEEE 57 / Hierarchical style (comp.param)
                if val is None:
                    val = self._source_assignments.get(f"{comp_name}.{pm}")

            # Strategy 3: Individual API calls (Fallback for complex math or global variables)
            if val is None or isinstance(val, str):
                raw = self.conn.get_modifier_value(declaring_model, comp_name, pm)
                if not raw:
                    raw = self.conn.get_parameter_value(self.model_name, f"{comp_name}.{pm}")
                if raw:
                    val = self._resolve_val(raw)

            if val is not None:
                # Handle complex numbers by extracting the real part
                numeric_val = val.real if isinstance(val, complex) else float(val)

                # Sign correction: Dynawo TestCases often use negative values for injection.
                # PyPowSyBl (IIDM) expects positive values for generator target power.
                if pj == "p_pu" or pj == "p":
                    extracted[pj] = abs(numeric_val)
                else:
                    extracted[pj] = numeric_val

        # --- SPECIAL HANDLING: COMPLEX POWER (s0Pu, s10Pu, s20Pu) ---
        # Used extensively in Loads, BESS, and HVDC links.
        for s_param in ["s0Pu", "s10Pu", "s20Pu"]:
            # Try to get real and imaginary parts from the flattened model map
            p_val = self._flat_assignments.get(f"{comp_name}.{s_param}.re")
            q_val = self._flat_assignments.get(f"{comp_name}.{s_param}.im")

            # Fallback for scalar assignments in the source map
            if p_val is None:
                p_val = self._source_assignments.get(f"{comp_name}.{s_param}")

            if p_val is not None:
                extracted["p_pu"] = abs(float(p_val))
            if q_val is not None:
                extracted["q_pu"] = float(q_val) if q_val is not None else 0.0

        return extracted
