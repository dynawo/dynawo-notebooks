import os
import json
import logging
import re
from OMPython import OMCSessionZMQ
import pypowsybl as pp

# Logging configuration
logging.basicConfig(level=logging.INFO, format="%(message)s")
logger = logging.getLogger("MoTopologyToolkit")


class MoTopologyToolkit:
    """
    Expert-level toolkit for extracting electrical topology and component
    characteristics from Modelica (.mo) files.
    """

    def __init__(self, source_dir, model_name, dynawo_pkg_path, local_files_list):
        self.model_name = model_name
        self.omc = OMCSessionZMQ()

        logger.info(f"[INFO] Initializing MoTopologyToolkit for model: {self.model_name}")

        # 1. Load Libraries
        logger.info("[INFO] 1. Loading Libraries...")
        self.omc.sendExpression("loadModel(Modelica)")
        self.omc.sendExpression("loadModel(Complex)")
        self.omc.sendExpression("loadModel(ModelicaServices)")

        # 2. Load Dynawo
        if not self.omc.sendExpression(f'loadFile("{dynawo_pkg_path}")'):
            err = self.omc.sendExpression("getErrorString()")
            logger.error(f"   [ERROR] Failed to load Dynawo: {err}")
            raise Exception(f"Dynawo Load Failed: {err}")

        # 3. Load Local Models
        self.omc.sendExpression(f'cd("{source_dir}")')
        for f in local_files_list:
            path = os.path.join(source_dir, f).replace("\\", "/")
            if not self.omc.sendExpression(f'loadFile("{path}")'):
                logger.error(f"   [ERROR] Failed to load {f}")

        # 4. Check Model
        logger.info("[INFO] 4. Verifying Model Integrity...")
        check = self.omc.sendExpression(f"checkModel({self.model_name})")
        if "Error" in str(check):
            logger.warning(f"   [WARN] checkModel reported issues: {check}")
        else:
            logger.info(f"   [OK] Model '{self.model_name}' check passed.")

    def get_raw_topology(self):
        """
        Retrieves raw component list. Uses parsed=False to avoid crashes.
        """
        logger.info("[INFO] Extracting Raw Topology...")
        components_raw = self.omc.sendExpression(f"getComponents({self.model_name})")
        components_dict = {}

        if components_raw:
            for i, comp in enumerate(components_raw):
                omc_index = i + 1
                try:
                    c_type = comp[0]
                    c_name = comp[1]
                    mods_str = self.omc.sendExpression(
                        f"getNthComponentModification({self.model_name}, {omc_index})",
                        parsed=False,
                    )
                    components_dict[c_name] = {"type": c_type, "modifiers": mods_str}
                except IndexError:
                    continue

        connections = []
        try:
            conn_count_str = self.omc.sendExpression(f"getConnectionCount({self.model_name})")
            if conn_count_str:
                conn_count = int(conn_count_str)
                for i in range(1, conn_count + 1):
                    conn_tuple = self.omc.sendExpression(
                        f"getNthConnection({self.model_name}, {i})"
                    )
                    if conn_tuple and len(conn_tuple) >= 2:
                        connections.append([conn_tuple[0], conn_tuple[1]])
        except Exception:
            pass

        return {"components": components_dict, "connections": connections}

    def _recursive_search(self, data, target):
        if isinstance(data, dict):
            for k, v in data.items():
                k_clean = k.replace("(", "").replace(")", "").replace("'", "").strip()
                if k_clean == target:
                    if isinstance(v, str):
                        return v.replace("(", "").replace(")", "").replace("'", "")
                    return v
                if isinstance(v, dict):
                    res = self._recursive_search(v, target)
                    if res is not None:
                        return res
        return None

    def _extract_val_from_modifiers(self, modifiers_obj, parameter):
        """
        Extracts the raw string value from modifiers.
        Regex allows alphanumeric characters to capture references like 'GenPV.PGen0Pu'.
        """
        if not modifiers_obj:
            return None
        if isinstance(modifiers_obj, dict):
            return self._recursive_search(modifiers_obj, parameter)

        modifiers_str = str(modifiers_obj).strip().strip('"').strip("'")

        pattern = re.compile(rf"['\"\(]*{parameter}['\"\)]*\s*[:=]\s*['\"]?([a-zA-Z0-9_\.\-]+)")
        match = pattern.search(modifiers_str)
        if match:
            return match.group(1)
        return None

    def _get_omc_param(self, component, parameter, modifiers_obj=None):
        """
        Gets parameter value. Prioritizes OMC evaluation for numbers, but falls back to modifiers.
        """
        full_param = f"{component}.{parameter}" if component else parameter

        # 1. Try OMC evaluation (good for calculated numbers)
        val = self.omc.sendExpression(f'getParameterValue({self.model_name}, "{full_param}")')
        if val and "Error" not in str(val) and val != "":
            if isinstance(val, str):
                val = val.strip().replace('"', "")
            return val

        # 2. Try raw modifiers extraction
        if modifiers_obj:
            val_mod = self._extract_val_from_modifiers(modifiers_obj, parameter)
            if val_mod:
                return val_mod
        return None

    def _resolve_if_reference(self, value_str):
        if value_str is None:
            return 0.0
        try:
            return float(value_str)
        except (ValueError, TypeError):
            pass
        if isinstance(value_str, str) and len(value_str) > 0:
            ref_name = value_str.strip().replace("'", "")
            resolved_val = self.omc.sendExpression(
                f'getParameterValue({self.model_name}, "{ref_name}")'
            )
            try:
                if resolved_val and "Error" not in str(resolved_val):
                    return float(resolved_val)
            except:
                return 0.0
        return 0.0

    def _extract_reference_target(self, value_str):
        """Helper to identify the host component (e.g., 'GenPV.PGen0Pu' -> 'GenPV')"""
        if isinstance(value_str, str) and "." in value_str:
            return value_str.split(".")[0]
        return None

    def parse_electrical_data(self):
        logger.info("[INFO] Parsing Electrical Data...")

        raw_data = self.get_raw_topology()
        comps_dict = raw_data["components"]

        topology_data = {"buses": {}, "lines": {}, "generators": {}, "loads": {}, "shunts": {}}

        # Global Defaults
        global_sn_ref = self._resolve_if_reference(self._get_omc_param("", "SnRef"))
        if global_sn_ref <= 0:
            global_sn_ref = 100.0

        global_u_nom = self._resolve_if_reference(self._get_omc_param("", "UNom"))
        if global_u_nom <= 0:
            global_u_nom = self._resolve_if_reference(self._get_omc_param("", "UBase"))

        processed_count = 0

        for c_name, c_info in comps_dict.items():
            c_type = c_info["type"]
            c_mods = c_info["modifiers"]

            # --- BUS Parsing ---
            if "Electrical.Buses" in c_type or "Bus" in c_type:
                potential_params = ["UNom", "Unom", "UBase", "nominalVoltage", "VNom"]
                u_nom_val = None
                for param in potential_params:
                    val = self._get_omc_param(c_name, param, c_mods)
                    if val is not None:
                        u_nom_val = val
                        break

                u_nom = self._resolve_if_reference(u_nom_val)
                if u_nom <= 0.0 and global_u_nom > 0.0:
                    u_nom = global_u_nom

                topology_data["buses"][c_name] = {
                    "nominal_v": u_nom,
                    "is_slack": "InfiniteBus" in c_type,
                }
                processed_count += 1

            # --- LINE Parsing ---
            elif "Electrical.Lines" in c_type or "Line" in c_type:
                r_pu = self._resolve_if_reference(self._get_omc_param(c_name, "RPu", c_mods))
                x_pu = self._resolve_if_reference(self._get_omc_param(c_name, "XPu", c_mods))
                b_pu = self._resolve_if_reference(self._get_omc_param(c_name, "BPu", c_mods))
                topology_data["lines"][c_name] = {
                    "r_pu": r_pu,
                    "x_pu": x_pu,
                    "b_pu": b_pu,
                    "sn_ref": global_sn_ref,
                    "bus1": None,
                    "bus2": None,
                }
                processed_count += 1

            # --- GENERATOR Parsing ---
            elif "Electrical.Machines" in c_type or "Generator" in c_type:
                p_pu = self._resolve_if_reference(self._get_omc_param(c_name, "PGen0Pu", c_mods))
                q_pu = self._resolve_if_reference(self._get_omc_param(c_name, "QGen0Pu", c_mods))

                topology_data["generators"][c_name] = {
                    "p_mw": p_pu * global_sn_ref,
                    "q_mvar": q_pu * global_sn_ref,
                    "s_nom": global_sn_ref,
                    "type": "Generator",
                }
                processed_count += 1

            # --- LOAD Parsing ---
            elif "Electrical.Loads" in c_type or "Load" in c_type:
                p_pu = self._resolve_if_reference(self._get_omc_param(c_name, "P0Pu", c_mods))
                q_pu = self._resolve_if_reference(self._get_omc_param(c_name, "Q0Pu", c_mods))
                topology_data["loads"][c_name] = {
                    "p_mw": p_pu * global_sn_ref,
                    "q_mvar": q_pu * global_sn_ref,
                }
                processed_count += 1

            # --- SHUNT Parsing ---
            elif (
                "Electrical.Shunts" in c_type
                or "Shunt" in c_type
                or "Reactor" in c_type
                or "Capacitor" in c_type
            ):
                q_pu = self._resolve_if_reference(self._get_omc_param(c_name, "Q0Pu", c_mods))
                b_pu = self._resolve_if_reference(self._get_omc_param(c_name, "BPu", c_mods))
                g_pu = self._resolve_if_reference(self._get_omc_param(c_name, "GPu", c_mods))

                topology_data["shunts"][c_name] = {
                    "q_mvar": q_pu * global_sn_ref,
                    "b_pu": b_pu,
                    "g_pu": g_pu,
                    "sn_ref": global_sn_ref,
                }
                processed_count += 1

            # --- GENERIC INIT Parsing ---
            elif c_type.endswith("_INIT") or "_INIT" in c_type:
                try:
                    short_type = c_type.split(".")[-1].replace("_INIT", "")
                except:
                    short_type = "Unknown_INIT"

                s_nom_val = self._get_omc_param(c_name, "SNom", c_mods)
                s_nom = self._resolve_if_reference(s_nom_val)
                if s_nom <= 0:
                    s_nom = global_sn_ref

                # EXTRACT RAW string to catch "GenPV.PGen0Pu"
                p_pu_raw_str = self._extract_val_from_modifiers(c_mods, "P0Pu")
                host_ref = self._extract_reference_target(p_pu_raw_str)

                topology_data["generators"][c_name] = {
                    "s_nom": s_nom,
                    "type": short_type,
                    "host_ref": host_ref,
                    "is_init_block": True,
                }
                processed_count += 1

        logger.info(f"   [OK] Processed {processed_count} components.")

        # 1. Resolve basic connectivity
        data = self._resolve_connectivity(topology_data, raw_data["connections"])

        # 2. MERGE INIT blocks
        data = self._merge_init_blocks(data)

        return data

    def _resolve_connectivity(self, data, connections):
        logger.info("[INFO] Resolving Node/Bus Connectivity...")

        def ensure_bus_exists(comp_id, default_v=225.0):
            if comp_id in data["buses"]:
                return comp_id
            virtual_bus_id = f"Bus_{comp_id}"
            if virtual_bus_id not in data["buses"]:
                data["buses"][virtual_bus_id] = {
                    "nominal_v": default_v,
                    "is_slack": False,
                    "is_virtual": True,
                }
            return virtual_bus_id

        for conn in connections:
            term1, term2 = conn[0], conn[1]
            try:
                c1 = term1.split(".", 1)[0] if "." in term1 else term1
                c2 = term2.split(".", 1)[0] if "." in term2 else term2
            except ValueError:
                continue

            line_id = None
            other_id = None
            if c1 in data["lines"]:
                line_id, other_id = c1, c2
            elif c2 in data["lines"]:
                line_id, other_id = c2, c1

            if line_id:
                target_bus_id = ensure_bus_exists(other_id)
                # Check all categories that can connect to a line
                if other_id not in data["buses"] and other_id != target_bus_id:
                    for cat in ["generators", "loads", "shunts"]:
                        if other_id in data[cat]:
                            data[cat][other_id]["connected_to"] = target_bus_id

                l_info = data["lines"][line_id]
                if l_info["bus1"] is None:
                    l_info["bus1"] = target_bus_id
                elif l_info["bus2"] is None and l_info["bus1"] != target_bus_id:
                    l_info["bus2"] = target_bus_id
                continue

            if c1 in data["buses"]:
                for cat in ["generators", "loads", "shunts"]:
                    if c2 in data[cat]:
                        data[cat][c2]["connected_to"] = c1
            elif c2 in data["buses"]:
                for cat in ["generators", "loads", "shunts"]:
                    if c1 in data[cat]:
                        data[cat][c1]["connected_to"] = c2
            else:
                shared_bus = ensure_bus_exists(c1)
                for cat in ["generators", "loads", "shunts"]:
                    if c1 in data[cat]:
                        data[cat][c1]["connected_to"] = shared_bus
                    if c2 in data[cat]:
                        data[cat][c2]["connected_to"] = shared_bus
        return data

    def _merge_init_blocks(self, data):
        gens = data["generators"]
        to_remove = []
        for init_id, init_info in gens.items():
            if init_info.get("is_init_block"):
                host_id = init_info.get("host_ref")
                if host_id and host_id in gens:
                    host_info = gens[host_id]
                    if "s_nom" in init_info:
                        host_info["s_nom"] = init_info["s_nom"]
                    if "type" in init_info:
                        host_info["type"] = init_info["type"]
                    logger.info(
                        f"   [INFO] Merged INIT block '{init_id}' into Physical Generator '{host_id}'."
                    )
                    to_remove.append(init_id)
                else:
                    logger.warning(
                        f"   [WARN] INIT block '{init_id}' skipped (Host '{host_id}' not found)."
                    )
        for rid in to_remove:
            del gens[rid]
        return data

    def export_to_standard_json(self, data, filename="topology.json"):
        with open(filename, "w") as f:
            json.dump(data, f, indent=4)
        logger.info(f"[INFO] Exported to {filename}")

    def build_powsybl_network(self, data):
        logger.info("[INFO] Building PyPowSybl Network Object...")
        try:
            network = pp.network.create_empty()
            bus_nominal_v = {}

            # 1. Buses
            for b_id, b_info in data["buses"].items():
                sub_id = f"Sub_{b_id}"
                vl_id = f"VL_{b_id}"
                nom_v = b_info.get("nominal_v")
                if nom_v is None or nom_v <= 0.0:
                    nom_v = 225.0
                bus_nominal_v[b_id] = nom_v
                network.create_substations(id=sub_id)
                network.create_voltage_levels(
                    id=vl_id, substation_id=sub_id, nominal_v=nom_v, topology_kind="BUS_BREAKER"
                )
                network.create_buses(id=b_id, voltage_level_id=vl_id)

            # 2. Lines
            for l_id, l_info in data["lines"].items():
                b1 = l_info.get("bus1")
                b2 = l_info.get("bus2")
                if b1 and b2 and b1 in bus_nominal_v and b2 in bus_nominal_v:
                    un_kv = bus_nominal_v[b1]
                    sn_mva = l_info.get("sn_ref", 100.0)
                    z_base = (un_kv**2) / sn_mva
                    r_ohm = l_info.get("r_pu", 0.0) * z_base
                    x_ohm = l_info.get("x_pu", 1e-6) * z_base
                    b_s = l_info.get("b_pu", 0.0) / z_base
                    network.create_lines(
                        id=l_id,
                        voltage_level1_id=f"VL_{b1}",
                        bus1_id=b1,
                        voltage_level2_id=f"VL_{b2}",
                        bus2_id=b2,
                        r=r_ohm,
                        x=x_ohm,
                        g1=0.0,
                        b1=b_s / 2,
                        g2=0.0,
                        b2=b_s / 2,
                    )

            # 3. Generators
            for g_id, g_info in data["generators"].items():
                if g_info.get("is_init_block"):
                    continue
                bus_id = g_info.get("connected_to")
                if not bus_id or bus_id not in bus_nominal_v:
                    logger.warning(f"   [WARN] Generator '{g_id}' not connected. Skipped.")
                    continue

                p_mw = g_info.get("p_mw", 0.0)
                q_mvar = g_info.get("q_mvar", 0.0)
                s_nom = g_info.get("s_nom", 100.0)
                target_v_pu = g_info.get("target_v")

                regulator_on = False
                target_v_kv = None
                if target_v_pu and target_v_pu > 0:
                    regulator_on = True
                    target_v_kv = target_v_pu * bus_nominal_v[bus_id]

                network.create_generators(
                    id=g_id,
                    voltage_level_id=f"VL_{bus_id}",
                    bus_id=bus_id,
                    target_p=p_mw,
                    target_q=q_mvar,
                    voltage_regulator_on=regulator_on,
                    target_v=target_v_kv if regulator_on else None,
                    min_p=-s_nom,
                    max_p=s_nom,
                )

            # 4. Loads
            for l_id, l_info in data["loads"].items():
                bus_id = l_info.get("connected_to")
                if not bus_id or bus_id not in bus_nominal_v:
                    logger.warning(f"   [WARN] Load '{l_id}' not connected. Skipped.")
                    continue

                p_mw = l_info.get("p_mw", 0.0)
                q_mvar = l_info.get("q_mvar", 0.0)

                network.create_loads(
                    id=l_id, voltage_level_id=f"VL_{bus_id}", bus_id=bus_id, p0=p_mw, q0=q_mvar
                )

            # 5. Shunts
            for s_id, s_info in data["shunts"].items():
                bus_id = s_info.get("connected_to")
                if not bus_id or bus_id not in bus_nominal_v:
                    logger.warning(f"   [WARN] Shunt '{s_id}' not connected. Skipped.")
                    continue

                un_kv = bus_nominal_v[bus_id]
                sn_mva = s_info.get("sn_ref", 100.0)

                g_siemens = 0.0
                b_siemens = 0.0

                q_mvar = s_info.get("q_mvar", 0.0)
                b_pu = s_info.get("b_pu", 0.0)
                g_pu = s_info.get("g_pu", 0.0)

                if abs(q_mvar) > 1e-9:
                    b_siemens = q_mvar / (un_kv**2)
                elif abs(b_pu) > 1e-9:
                    b_siemens = b_pu * sn_mva / (un_kv**2)

                if abs(g_pu) > 1e-9:
                    g_siemens = g_pu * sn_mva / (un_kv**2)

                network.create_shunt_compensators(
                    id=s_id,
                    voltage_level_id=f"VL_{bus_id}",
                    bus_id=bus_id,
                    model_type="CONSTANT_IMPEDANCE",
                    maximum_section_count=1,
                    sections_in_service=1,
                    g_per_section=g_siemens,
                    b_per_section=b_siemens,
                )
                logger.info(
                    f"   [INFO] Created Shunt '{s_id}' (B={b_siemens:.2e} S) at Bus '{bus_id}'."
                )

            logger.info("   [OK] Network build complete.")
            return network
        except Exception as e:
            logger.error(f"   [ERROR] Failed to build PyPowSybl network: {e}")
            raise e
