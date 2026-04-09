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

        # Recursively fetch the source code of the model AND its inherited base classes.
        # This ensures constants like ZBASE69_0 are found during expression resolution.
        def _get_full_code(model: str, visited: set = None) -> str:
            if visited is None:
                visited = set()
            if model in visited:
                return ""
            visited.add(model)
            code = str(self.conn._omc.sendExpression(f"list({model})") or "")
            for base in self.conn.get_extends(model):
                code += "\n" + _get_full_code(base, visited)
            return code

        self.top_code = _get_full_code(self.model_name)

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

    def _prebuild_assignment_map(self, flat_str: str) -> Dict[str, str]:
        """
        Scans the flattened model string once to map all parameter assignments to their expressions.
        """
        # Captures the parameter name and the full expression up to the semicolon,
        # aggressively stripping out Modelica documentation strings and inline comments.
        pattern = re.compile(r"([\w\.]+)(?:\([^)]*\))?\s*=\s*([^;]+);")
        return {
            match.group(1).strip(): match.group(2)
            .split('"')[0]
            .split("//")[0]
            .split("/*")[0]
            .strip()
            for match in pattern.finditer(flat_str)
        }

    def _prebuild_source_map(self, source_str: str) -> Dict[str, str]:
        """
        Scans the raw source code string once to map all parameter assignments to their expressions.
        """
        pattern = re.compile(r"\b([\w\.]+)\s*=\s*([^;]+);")
        return {
            match.group(1).strip(): match.group(2)
            .split('"')[0]
            .split("//")[0]
            .split("/*")[0]
            .strip()
            for match in pattern.finditer(source_str)
        }

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
                modifiers_str = comp_info.get("modifiers", "")
            else:
                comp_type = comp_info
                declaring_model = self.model_name
                modifiers_str = ""

            params = self._extract_parameters(declaring_model, comp_name, modifiers_str)

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

        # Assign the deduced voltages to the buses to prevent PyPowSyBl from defaulting to 130kV
        # which destroys transformer ratios and absolute impedances.
        for cat in ["lines", "shunts"]:
            for comp_name, params in topo.get(cat, {}).items():
                if "_deduced_v" in params:
                    v = params.pop("_deduced_v")
                    bus1 = params.get("bus1") or params.get("bus")
                    bus2 = params.get("bus2")
                    if bus1 and bus1 in topo["buses"]:
                        topo["buses"][bus1]["nominal_v"] = v
                    if bus2 and bus2 in topo["buses"]:
                        topo["buses"][bus2]["nominal_v"] = v

        # Clean up deduced voltages from other components to avoid JSON pollution
        for cat in topo.keys():
            for params in topo[cat].values():
                params.pop("_deduced_v", None)

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
            for i, comp in enumerate(raw):
                if isinstance(comp, (list, tuple)) and len(comp) >= 2:
                    c_mods = self.conn.get_component_modification(current_model, i + 1)
                    components[str(comp[1])] = {
                        "type": str(comp[0]),
                        "declared_in": current_model,
                        "modifiers": c_mods,
                    }

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
        """
        raw_val = self._flat_assignments.get(f"{comp_name}.{param}")
        if raw_val is not None:
            resolved = self._resolve_val(raw_val)
            if isinstance(resolved, (float, int)):
                return float(resolved)
        return None

    def _extract_raw_value_from_modifiers(self, mods_str: str, param: str) -> Optional[str]:
        """
        Extracts a parameter's assigned value from a raw Modelica modifier string.
        """
        if not mods_str:
            return None
        s = str(mods_str).strip().strip("\"'")
        pattern = re.compile(rf"\b{param}\b\s*=\s*([^,)]+)")
        match = pattern.search(s)
        if match:
            raw_val = match.group(1).strip()
            # CLEANUP: Remove trailing comments or descriptions
            clean_val = raw_val.split('"')[0].split("/*")[0].split("//")[0].strip()
            return clean_val if clean_val else None
        return None

    def _resolve_val(
        self,
        val_str: Optional[str],
        pj: Optional[str] = "",
        model_name: Optional[str] = "",
        depth: int = 0,
    ) -> Any:
        """
        Safely casts a raw Modelica string value into a Python float or complex number.
        Can resolve mathematical expressions and recursively fetch variable definitions.

        :param val_str: The raw string expression assigned to a parameter.
        :param pj: Parameter JSON key (for debugging/context).
        :param model_name: The name of the model component being parsed.
        :param depth: Current recursion depth to prevent infinite loops.
        :return: A numerical value (float or complex), or None if unresolved.
        """
        if not val_str or depth > 5:
            return None

        # CRITICAL FIX: Truncate Modelica docstrings and inline comments BEFORE processing.
        # This completely strips out text like '"Resistance in pu (base SnRef)"'
        # so they don't break the Python eval() function.
        clean = val_str.split('"')[0].split("//")[0].split("/*")[0].strip()
        clean = clean.replace("'", "")

        # Resolve the system base explicitly to avoid syntax errors with dot-notation
        clean = clean.replace("SystemBase.SnRef", "100.0")

        try:
            return float(clean)
        except ValueError:
            pass

        identifiers = set(re.findall(r"[a-zA-Z_][a-zA-Z0-9_\.]*", clean))
        resolved_expr = clean
        for var in identifiers:
            if var in ["Complex", "sin", "cos", "tan", "sqrt", "j"]:
                continue

            # Optimized variable lookup using both source and flat maps.
            # No need for SnRef checks here anymore due to the explicit replace above.
            var_val = self._source_assignments.get(var)
            if var_val is None:
                var_val = self._flat_assignments.get(var)

            if isinstance(var_val, (float, int)):
                resolved_expr = re.sub(r"\b" + var + r"\b", str(var_val), resolved_expr)
                continue

            if var_val is None:
                var_val = self.conn.get_parameter_value(self.model_name, var)

            if var_val is not None:
                val_num = self._resolve_val(str(var_val), pj, model_name, depth + 1)
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

    def _extract_parameters(
        self, declaring_model: str, comp_name: str, modifiers: str = ""
    ) -> Dict[str, float]:
        """
        Extracts physical parameters for a specific component using multi-strategy lookups.

        This method prioritizes pre-built memory maps (Flattened and Source) to bypass
        OMC communication latency. It implements a priority-based heuristic for
        variable extraction to balance speed with absolute precision.

        :param declaring_model: The name of the Modelica model where the component is declared.
        :param comp_name: The instance name of the component.
        :param modifiers: The raw string of modifiers attached to the component instance.
        :return: A dictionary of extracted parameter keys and their float values.
        """
        extracted = {}
        extraction_priority = {}  # Tracks priority of extracted variables (1 is highest)
        critical_params = {"r_pu", "x_pu", "b_pu", "g_pu"}
        positive_only_params = {"u_pu", "nominal_v", "sn_nom", "ratio", "rated_u1", "rated_u2"}

        for pm, pj in self.param_map.items():
            val = None
            current_priority = 99

            raw_flat = self._flat_assignments.get(f"{comp_name}.{pm}")
            raw_src = self._source_assignments.get(f"{comp_name}.{pm}")
            if raw_src is None:
                raw_src = self._source_assignments.get(f"{pm}_{comp_name}")

            for raw_text in [raw_src, raw_flat]:
                if raw_text and isinstance(raw_text, str) and "ZBASE" in raw_text:
                    match = re.search(r"ZBASE(\d+)_(\d+)", raw_text)
                    if match:
                        extracted["_deduced_v"] = float(f"{match.group(1)}.{match.group(2)}")
                        break

            # --- PRIORITY SYSTEM ---
            # PRIORITY 1: EXPLICIT SOURCE CODE OVERRIDES (e.g., equations in test cases)
            raw_src = self._source_assignments.get(f"{comp_name}.{pm}")
            if raw_src is None:
                raw_src = self._source_assignments.get(f"{pm}_{comp_name}")
            if raw_src is not None:
                resolved = self._resolve_val(raw_src, pj, comp_name)
                if resolved is not None:
                    val = resolved
                    current_priority = 1

            # PRIORITY 2: SIMULATION VALUES (Evaluated by OMC)
            if val is None:
                try:
                    sim_val = self.conn.get_simulation_value(f"{comp_name}.{pm}")
                    if sim_val is not None:
                        val = float(sim_val)
                        current_priority = 2
                except Exception:
                    pass

            # PRIORITY 3: FLAT MEMORY MAP (Ultra-fast memory scan with full math expressions)
            if val is None:
                raw_flat = self._flat_assignments.get(f"{comp_name}.{pm}")
                if raw_flat is not None:
                    resolved = self._resolve_val(raw_flat, pj, comp_name)
                    if resolved is not None:
                        val = resolved
                        current_priority = 3

            # PRIORITY 4: OMC KERNEL EVALUATION (The Golden Standard from the Old Code)
            if val is None:
                raw_api = self.conn.get_parameter_value(self.model_name, f"{comp_name}.{pm}")
                if raw_api:
                    resolved = self._resolve_val(raw_api, pj, comp_name)
                    if resolved is not None:
                        val = resolved
                        current_priority = 4

            # PRIORITY 5: EXPLICIT MODIFIERS
            if val is None:
                raw_mod = self._extract_raw_value_from_modifiers(modifiers, pm)
                if raw_mod:
                    resolved = self._resolve_val(raw_mod, pj, comp_name)
                    if resolved is not None:
                        val = resolved
                        current_priority = 5

            # PRIORITY 6: AST MODIFIER FALLBACK
            if val is None:
                raw_ast = self.conn.get_modifier_value(declaring_model, comp_name, pm)
                if raw_ast:
                    resolved = self._resolve_val(raw_ast, pj, comp_name)
                    if resolved is not None:
                        val = resolved
                        current_priority = 6

            # --- ASSIGNMENT & ALIAS OVERWRITE PROTECTION ---
            if val is not None:
                numeric_val = val.real if isinstance(val, complex) else float(val)
                final_val = abs(numeric_val) if pj in ["p_pu", "p"] else numeric_val

                # 🛑 THE SHIELD: Prevent 0.0 from destroying voltage/base values! 🛑
                if final_val == 0.0 and pj in positive_only_params:
                    continue

                # --- SHUNT SUSCEPTANCE CORRECTION ---
                # Modelica uses negative B for capacitors (Q injected = -B * V^2)
                # PyPowSyBl expects positive B for capacitors (Q injected = B * V^2)
                # if pj == "b_pu" and "shunt" in comp_name.lower():
                #     final_val = -final_val

                if pj in extracted and pj in critical_params:
                    if final_val == 0.0 and extracted[pj] != 0.0:
                        continue

                if pj == "nominal_v" and final_val <= 1.1:
                    continue

                # Only assign if this extraction method is MORE or EQUALLY reliable than the previous one
                best_prio = extraction_priority.get(pj, 99)
                if current_priority < best_prio:
                    extracted[pj] = final_val
                    extraction_priority[pj] = current_priority
                elif current_priority == best_prio:
                    # Prevent later aliases of the same priority from overriding the first match
                    if pj not in extracted:
                        extracted[pj] = final_val
                        extraction_priority[pj] = current_priority

        # --- SPECIAL HANDLING: COMPLEX POWER (s0Pu, s10Pu, s20Pu) ---
        for s_param in ["s0Pu", "s10Pu", "s20Pu"]:
            p_val = None
            q_val = None

            complex_str = self._extract_raw_value_from_modifiers(modifiers, s_param)
            if complex_str:
                res_cplx = self._resolve_val(complex_str)
                if isinstance(res_cplx, complex):
                    p_val = abs(res_cplx.real)
                    q_val = res_cplx.imag

            if p_val is None:
                raw_p_flat = self._flat_assignments.get(f"{comp_name}.{s_param}.re")
                if raw_p_flat is not None:
                    p_val = self._resolve_val(raw_p_flat, "p_pu", comp_name)
            if q_val is None:
                raw_q_flat = self._flat_assignments.get(f"{comp_name}.{s_param}.im")
                if raw_q_flat is not None:
                    q_val = self._resolve_val(raw_q_flat, "q_pu", comp_name)

            if p_val is None:
                raw_p_src = self._source_assignments.get(f"{comp_name}.{s_param}")
                if raw_p_src is not None:
                    p_val = self._resolve_val(raw_p_src, "p_pu", comp_name)

            # Prevent overriding if higher priority scalar parameters (like PRefPu) already set it
            if p_val is not None and "p_pu" not in extracted:
                extracted["p_pu"] = abs(float(p_val))
            if q_val is not None and "q_pu" not in extracted:
                extracted["q_pu"] = float(q_val)

        return extracted
