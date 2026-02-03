"""
Modelica Parsing Logic.

This module handles the extraction of topology data from raw OMC outputs,
resolves parameter references (regex), and manages graph connectivity.
It supports inheritance traversal to find components AND connections in parent classes.
"""

import logging
import re
from typing import Dict, Any, Optional, List, Tuple, Set
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
        logger.info(
            f"Total unique components found (including inherited): {len(all_components_map)}"
        )

        # 2. Dictionary Initialization
        topo = {"buses": {}, "lines": {}, "generators": {}, "loads": {}, "shunts": {}}

        # 3. Global Parameters
        global_sn = (
            self._resolve_val(self.conn.get_parameter_value(self.model_name, "SnRef")) or 100.0
        )
        global_un = self._resolve_val(
            self.conn.get_parameter_value(self.model_name, "UNom")
        ) or self._resolve_val(self.conn.get_parameter_value(self.model_name, "UBase"))

        logger.info(f"Global Bases: Sn={global_sn} MVA, Un={global_un} kV")

        # 4. Process collected components
        for c_name, (c_type, c_mods) in all_components_map.items():
            self._process_component(c_name, c_type, c_mods, topo, global_sn, global_un)

        # 5. Recursive Connection Extraction (NEW FIX)
        # We must gather connections from all parent classes too.
        all_connections = self._collect_all_connections_recursive()
        logger.info(f"Total connections found (including inherited): {len(all_connections)}")

        data = self._resolve_connectivity(topo, all_connections)

        # 6. Post-Processing (Merge INIT blocks)
        data = self._merge_init_blocks(data)

        # Summary Log
        logger.info("Parsing Summary:")
        logger.info(f" > Buses: {len(data['buses'])}")
        logger.info(f" > Lines: {len(data['lines'])}")
        logger.info(f" > Generators: {len(data['generators'])}")
        logger.info(f" > Loads: {len(data['loads'])}")
        logger.info(f" > Shunts: {len(data['shunts'])}")

        return data

    def _collect_all_components_recursive(self) -> Dict[str, Tuple[str, str]]:
        """
        Traverses the inheritance tree (BFS) to gather all components.
        """
        components_map = {}
        classes_to_visit = [self.model_name]
        visited_classes = set()

        while classes_to_visit:
            current_class = classes_to_visit.pop(0)
            if current_class in visited_classes:
                continue
            visited_classes.add(current_class)

            raw_comps = self.conn.get_components(current_class)

            if raw_comps:
                for i, comp in enumerate(raw_comps):
                    c_name = comp[1]
                    c_type = comp[0]
                    # Child definition wins over parent
                    if c_name not in components_map:
                        c_mods = self.conn.get_component_modification(current_class, i + 1)
                        components_map[c_name] = (c_type, c_mods)

            parents = self.conn.get_inherited_classes(current_class)
            classes_to_visit.extend(parents)

        return components_map

    def _collect_all_connections_recursive(self) -> List[List[str]]:
        """
        Traverses the inheritance tree to gather ALL 'connect(a,b)' statements.
        This is critical for models where connectivity is defined in parent classes (e.g. Network.mo).
        """
        all_conns = []
        seen_conns = set()  # To avoid duplicates if needed, though typically distinct

        classes_to_visit = [self.model_name]
        visited_classes = set()

        while classes_to_visit:
            current_class = classes_to_visit.pop(0)
            if current_class in visited_classes:
                continue
            visited_classes.add(current_class)

            # Get connections for this specific class level
            current_conns = self.conn.get_connections(current_class)

            for conn in current_conns:
                # conn is [term1, term2]
                # Sort tuple to ensure connect(a,b) is same as connect(b,a) for deduplication
                c_tuple = tuple(sorted((conn[0], conn[1])))
                if c_tuple not in seen_conns:
                    seen_conns.add(c_tuple)
                    all_conns.append(conn)

            # Add parents
            parents = self.conn.get_inherited_classes(current_class)
            classes_to_visit.extend(parents)

        return all_conns

    def _process_component(
        self, name: str, c_type: str, mods: str, topo: Dict, sn_ref: float, un_ref: float
    ):
        """Classifies and extracts data for a single component."""

        # --- BUSES ---
        if "Electrical.Buses" in c_type or "Bus" in c_type:
            u_nom = None
            for p in ["UNom", "Unom", "UBase", "nominalVoltage", "VNom"]:
                val = self._get_param(name, p, mods)
                if val is not None:
                    u_nom = self._resolve_val(val)
                    break

            if (u_nom is None or u_nom <= 0.0) and un_ref > 0.0:
                u_nom = un_ref

            topo["buses"][name] = {"nominal_v": u_nom, "is_slack": "InfiniteBus" in c_type}

        # --- LINES ---
        elif "Electrical.Lines" in c_type or "Line" in c_type:
            topo["lines"][name] = {
                "r_pu": self._resolve_val(self._get_param(name, "RPu", mods)),
                "x_pu": self._resolve_val(self._get_param(name, "XPu", mods)),
                "b_pu": self._resolve_val(self._get_param(name, "BPu", mods)),
                "sn_ref": sn_ref,
                "bus1": None,
                "bus2": None,
            }

        # --- GENERATORS ---
        elif "Electrical.Machines" in c_type or "Generator" in c_type:
            topo["generators"][name] = {
                "p_mw": self._resolve_val(self._get_param(name, "PGen0Pu", mods)) * sn_ref,
                "q_mvar": self._resolve_val(self._get_param(name, "QGen0Pu", mods)) * sn_ref,
                "s_nom": sn_ref,
                "type": "Generator",
            }

        # --- LOADS ---
        elif "Electrical.Loads" in c_type or "Load" in c_type:
            topo["loads"][name] = {
                "p_mw": self._resolve_val(self._get_param(name, "P0Pu", mods)) * sn_ref,
                "q_mvar": self._resolve_val(self._get_param(name, "Q0Pu", mods)) * sn_ref,
            }

        # --- SHUNTS ---
        elif any(k in c_type for k in ["Electrical.Shunts", "Shunt", "Reactor", "Capacitor"]):
            topo["shunts"][name] = {
                "q_mvar": self._resolve_val(self._get_param(name, "Q0Pu", mods)) * sn_ref,
                "b_pu": self._resolve_val(self._get_param(name, "BPu", mods)),
                "g_pu": self._resolve_val(self._get_param(name, "GPu", mods)),
                "sn_ref": sn_ref,
            }

        # --- INIT BLOCKS ---
        elif c_type.endswith("_INIT") or "_INIT" in c_type:
            short_type = c_type.split(".")[-1].replace("_INIT", "") if "." in c_type else "Unknown"
            s_nom = self._resolve_val(self._get_param(name, "SNom", mods))
            if s_nom <= 0:
                s_nom = sn_ref

            p_pu_raw = self._extract_raw_value_from_string(mods, "P0Pu")
            host_ref = self._extract_reference_target(p_pu_raw)

            topo["generators"][name] = {
                "s_nom": s_nom,
                "type": short_type,
                "host_ref": host_ref,
                "is_init_block": True,
            }

    def _get_param(self, comp: str, param: str, mods: str) -> Optional[str]:
        val = self.conn.get_parameter_value(self.model_name, f"{comp}.{param}")
        if val:
            return val
        return self._extract_raw_value_from_string(mods, param)

    def _extract_raw_value_from_string(self, mods_str: str, param: str) -> Optional[str]:
        if not mods_str:
            return None
        s = str(mods_str).strip().strip("\"'")
        pattern = re.compile(rf"['\"\(]*{param}['\"\)]*\s*[:=]\s*['\"]?([a-zA-Z0-9_\.\-]+)")
        match = pattern.search(s)
        return match.group(1) if match else None

    def _resolve_val(self, val: Any) -> float:
        if val is None:
            return 0.0
        try:
            return float(val)
        except (ValueError, TypeError):
            if isinstance(val, str) and val:
                clean_ref = val.strip().replace("'", "")
                return self._resolve_val(self.conn.get_parameter_value(self.model_name, clean_ref))
            return 0.0

    def _extract_reference_target(self, val_str: Optional[str]) -> Optional[str]:
        if val_str and "." in val_str:
            return val_str.split(".")[0]
        return None

    def _resolve_connectivity(self, data: Dict, connections: List) -> Dict:
        """Resolves topology connections, creating virtual buses if needed."""
        logger.info("Resolving connectivity map...")

        def ensure_bus(comp_id: str) -> str:
            if comp_id in data["buses"]:
                return comp_id
            vbus = f"Bus_{comp_id}"
            if vbus not in data["buses"]:
                # Default virtual bus
                data["buses"][vbus] = {"nominal_v": 225.0, "is_slack": False, "is_virtual": True}
            return vbus

        for c1_raw, c2_raw in connections:
            try:
                # Remove '.terminal', '.p', '.n', etc.
                c1 = c1_raw.split(".", 1)[0]
                c2 = c2_raw.split(".", 1)[0]
            except ValueError:
                continue

            # Skip self-loops or bad parsing
            if c1 == c2:
                continue

            # Determine if connection involves a line
            line_id, other_id = None, None
            if c1 in data["lines"]:
                line_id, other_id = c1, c2
            elif c2 in data["lines"]:
                line_id, other_id = c2, c1

            if line_id:
                target_bus = ensure_bus(other_id)

                # Link Component -> Bus
                self._connect_to_bus(data, other_id, target_bus)

                # Link Line -> Bus
                l_info = data["lines"][line_id]
                if l_info["bus1"] is None:
                    l_info["bus1"] = target_bus
                elif l_info["bus2"] is None and l_info["bus1"] != target_bus:
                    l_info["bus2"] = target_bus
            else:
                # Direct component connection -> Shared virtual bus
                # Check if one of them is already connected to a bus?
                # For simplicity, create/ensure a bus for c1 and connect c2 to it.

                bus_id = ensure_bus(c1)
                self._connect_to_bus(data, c1, bus_id)
                self._connect_to_bus(data, c2, bus_id)

        return data

    def _connect_to_bus(self, data: Dict, comp_id: str, bus_id: str):
        for cat in ["generators", "loads", "shunts"]:
            if comp_id in data[cat]:
                # Avoid overwriting if already connected (unless it's a virtual bus update)
                if "connected_to" not in data[cat][comp_id]:
                    data[cat][comp_id]["connected_to"] = bus_id

    def _merge_init_blocks(self, data: Dict) -> Dict:
        """Merges attributes from INIT blocks to their host generators."""
        gens = data["generators"]
        to_remove = []

        for gid, info in gens.items():
            if info.get("is_init_block"):
                host = info.get("host_ref")
                if host and host in gens:
                    if "s_nom" in info:
                        gens[host]["s_nom"] = info["s_nom"]
                    if "type" in info:
                        gens[host]["type"] = info["type"]
                    to_remove.append(gid)

        for r in to_remove:
            del gens[r]
        return data
