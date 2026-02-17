# FILE: src/dynawo_notebooks/Scripts/core/parser.py
import logging
from typing import Dict, Any, Optional, List
from .connector import OMCConnector

logger = logging.getLogger(__name__)


class ModelicaParser:
    def __init__(self, connector: OMCConnector, model_name: str):
        self.conn = connector
        self.model_name = model_name

    def parse_topology(self) -> Dict[str, Dict]:
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        # 1. Recursive Component Extraction
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

        # 2. Process Components and Extract Parameters
        for comp_name, comp_type in all_components_map.items():
            params = self._extract_parameters(self.model_name, comp_name)
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

        # 3. Recursive Connection Extraction (Crucial for Nordic)
        raw_connections = self._collect_all_connections_recursive()

        # 4. Apply generic graph resolution
        if raw_connections:
            self._build_topological_nodes(topo, raw_connections)
        else:
            logger.warning("No connections were retrieved from the model hierarchy.")

        return topo

    def _collect_all_components_recursive(
        self, current_model: Optional[str] = None, visited: Optional[set] = None
    ) -> Dict[str, str]:
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return {}
        visited.add(current_model)

        components = {}
        raw_components = self.conn._omc.sendExpression(f"getComponents({current_model})")
        if isinstance(raw_components, (list, tuple)):
            for comp in raw_components:
                if isinstance(comp, (list, tuple)) and len(comp) >= 2:
                    components[str(comp[1])] = str(comp[0])

        extends_list = self.conn.get_extends(current_model)
        for base in extends_list:
            components.update(self._collect_all_components_recursive(base, visited))
        return components

    def _collect_all_connections_recursive(
        self, current_model: Optional[str] = None, visited: Optional[set] = None
    ) -> List[List[str]]:
        """Collects connections from the current model and all its parents."""
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return []
        visited.add(current_model)

        connections = self.conn.get_connections(current_model)

        extends_list = self.conn.get_extends(current_model)
        for base in extends_list:
            connections.extend(self._collect_all_connections_recursive(base, visited))
        return connections

    def _build_topological_nodes(
        self, topo: Dict[str, Dict], connections: List[List[str]]
    ) -> None:
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

    def _resolve_val(self, val_str: Optional[str]) -> Optional[float]:
        if not val_str:
            return None
        try:
            return float(val_str.strip().replace("'", "").replace('"', ""))
        except:
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
            "P0Pu": "p_pu",
            "Q": "q",
            "Q0Pu": "q_pu",
            "R": "r",
            "RPu": "r_pu",
            "X": "x",
            "XPu": "x_pu",
            "B": "b",
            "BPu": "b_pu",
            "G": "g",
            "GPu": "g_pu",
        }
        extracted = {}
        for pm, pj in param_map.items():
            val = self._resolve_val(
                self.conn.get_parameter_value(model_context, f"{comp_name}.{pm}")
            )
            if val is not None:
                extracted[pj] = val
        return extracted
