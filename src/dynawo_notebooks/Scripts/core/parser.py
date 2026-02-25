# FILE: src/dynawo_notebooks/Scripts/core/parser.py
"""
Modelica Topology Parser Module.

This module is responsible for extracting the electrical topology and physical
parameters from Modelica network models. It utilizes the OMCConnector to query
the OpenModelica compiler, inspecting flat models and resolving variable mappings
to build a standardized topological dictionary.
"""

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

    def parse_topology(self) -> Dict[str, Dict]:
        """
        Executes the full parsing pipeline. Extracts all components, categorizes them
        based on their types, extracts their parameters, and resolves their connectivity.

        :return: A deeply structured dictionary containing categorized topological elements.
        """
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        all_components_map = self._collect_all_components_recursive()
        logger.info(f"Total unique components found: {len(all_components_map)}")

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
                topo["buses"][bus_id] = {"nominal_v": 225.0, "is_virtual": True}

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
        Extracts the numerical value of a specified parameter directly from the
        flattened model string using regular expressions.

        :param comp_name: The instance name of the component.
        :param param: The parameter name to search for (e.g., 's0Pu.re').
        :return: The extracted numerical float value, or None if not found.
        """
        if not self.flat_model:
            return None

        # OPTIMIZATION: If previously searched, retrieve from cache instantly
        cache_key = f"{comp_name}.{param}"
        if cache_key in self._flat_cache:
            return self._flat_cache[cache_key]

        pattern = re.compile(
            rf"\b{re.escape(comp_name)}\.{re.escape(param)}\b[^=]*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)\s*;"
        )
        match = pattern.search(self.flat_model)

        result = float(match.group(1)) if match else None
        self._flat_cache[cache_key] = result  # Store in memory cache
        return result

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

            var_val = self.conn.get_parameter_value(self.model_name, var)

            # DYNAWO FALLBACK: Search for the variable directly in the LoadFlow.mo source text
            if not var_val:
                match = re.search(
                    rf"\b{var}\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)", self.top_code
                )
                if match:
                    var_val = match.group(1)

            if var_val:
                val_num = self._resolve_val(var_val, depth + 1)
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
        Iterates over a mapping of known physical parameters, extracting their values
        for a specific component using multiple fallback parsing strategies.

        :param declaring_model: The name of the model where the component is defined.
        :param comp_name: The instance name of the component.
        :return: A dictionary of extracted parameter keys and float values.
        """
        param_map = {
            "Sn": "sn_nom",
            "SNom": "sn_nom",
            "Un": "nominal_v",
            "U": "nominal_v",
            "UPu": "u_pu",
            "U0Pu": "u_pu",
            "P": "p",
            "P0Pu": "p_pu",
            "PGen0Pu": "p_pu",  # Added PGen0Pu for PV/BESS models
            "Q": "q",
            "Q0Pu": "q_pu",
            "QGenPu": "q_pu",
            "QGen0Pu": "q_pu",  # Added for PV/BESS models
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
        # ... (resto del código igual) ...
        extracted = {}
        for pm, pj in param_map.items():
            val = self._extract_from_flat(comp_name, pm)

            if val is None:
                raw = self.conn.get_modifier_value(declaring_model, comp_name, pm)
                if raw:
                    val = self._resolve_val(raw)

            if val is None:
                raw = self.conn.get_parameter_value(self.model_name, f"{comp_name}.{pm}")
                if raw:
                    val = self._resolve_val(raw)

            # DYNAWO FALLBACK: Extract assignments like P0Pu_g01 = 6 reading LoadFlow.mo directly
            if val is None:
                match = re.search(
                    rf"\b{pm}_{comp_name}\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)",
                    self.top_code,
                )
                if match:
                    val = float(match.group(1))

            if val is not None:
                if isinstance(val, complex):
                    extracted[pj] = val.real
                else:
                    extracted[pj] = float(val)

        p_val = self._extract_from_flat(comp_name, "s0Pu.re")
        q_val = self._extract_from_flat(comp_name, "s0Pu.im")

        if p_val is None or q_val is None:
            raw_s0 = self.conn.get_modifier_value(declaring_model, comp_name, "s0Pu")
            if not raw_s0:
                raw_s0 = self.conn.get_parameter_value(self.model_name, f"{comp_name}.s0Pu")
            s0_val = self._resolve_val(raw_s0)
            if s0_val is not None and isinstance(s0_val, complex):
                p_val = s0_val.real
                q_val = s0_val.imag

        if p_val is not None:
            extracted["p_pu"] = p_val
        if q_val is not None:
            extracted["q_pu"] = q_val

        # Final safety net for Load parameters (e.g., P0Pu_load_01 = 2)
        if "p_pu" not in extracted:
            match_p = re.search(
                rf"\bP0Pu_{comp_name}\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)", self.top_code
            )
            if match_p:
                extracted["p_pu"] = float(match_p.group(1))

        if "q_pu" not in extracted:
            match_q = re.search(
                rf"\bQ0Pu_{comp_name}\s*=\s*([+-]?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)", self.top_code
            )
            if match_q:
                extracted["q_pu"] = float(match_q.group(1))

        return extracted
