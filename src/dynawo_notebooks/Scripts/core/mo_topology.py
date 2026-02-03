import os
import json
import logging
import re
from OMPython import OMCSessionZMQ
import pypowsybl as pp
from IPython.display import SVG, display

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
        Retrieves raw component list and connection equations.
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

                    # CRITICAL FIX: Use parsed=False to prevent OMPython crash on complex modifiers
                    mods_str = self.omc.sendExpression(
                        f"getNthComponentModification({self.model_name}, {omc_index})",
                        parsed=False,
                    )

                    components_dict[c_name] = {"type": c_type, "modifiers": mods_str}
                except IndexError:
                    continue
            logger.info(f"   [OK] Found {len(components_dict)} components.")
        else:
            logger.warning(f"   [WARN] No components found.")

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
        """Helper for dictionary traversal (if OMPython returns dicts in future)"""
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
        Extracts parameter value. Handles raw strings (from parsed=False) and dicts.
        """
        if not modifiers_obj:
            return None

        # If it happens to be a dict (backward compatibility)
        if isinstance(modifiers_obj, dict):
            return self._recursive_search(modifiers_obj, parameter)

        # Regex on string representation
        # Clean up the raw string first (OMC raw strings might have outer quotes)
        modifiers_str = str(modifiers_obj).strip().strip('"').strip("'")

        # Regex looks for: Param = Value OR Param: Value
        pattern = re.compile(rf"['\"\(]*{parameter}['\"\)]*\s*[:=]\s*['\"]?([0-9\.\-]+)")
        match = pattern.search(modifiers_str)
        if match:
            return match.group(1)
        return None

    def _get_omc_param(self, component, parameter, modifiers_obj=None):
        full_param = f"{component}.{parameter}" if component else parameter
        val = self.omc.sendExpression(f'getParameterValue({self.model_name}, "{full_param}")')

        if val and "Error" not in str(val) and val != "":
            if isinstance(val, str):
                val = val.strip().replace('"', "")
            return val

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
        if isinstance(value_str, str) and "." in value_str:
            return value_str.split(".")[0]
        return None

    def parse_electrical_data(self):
        logger.info("[INFO] Parsing Electrical Data...")

        raw_data = self.get_raw_topology()
        comps_dict = raw_data["components"]

        topology_data = {"buses": {}, "lines": {}, "generators": {}, "loads": {}}

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
                }
                processed_count += 1

            # --- GENERATOR Parsing ---
            elif "Electrical.Machines" in c_type or "Generator" in c_type:
                p_pu = self._resolve_if_reference(self._get_omc_param(c_name, "PGen0Pu", c_mods))
                topology_data["generators"][c_name] = {"p_mw": p_pu * global_sn_ref}
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

                # Fetch raw values
                p_pu_raw = self._get_omc_param(c_name, "P0Pu", c_mods)
                p_pu = self._resolve_if_reference(p_pu_raw)
                host_ref = self._extract_reference_target(p_pu_raw)

                u_pu = self._resolve_if_reference(self._get_omc_param(c_name, "U0Pu", c_mods))

                topology_data["generators"][c_name] = {
                    "p_mw": p_pu * s_nom,
                    "target_v": u_pu,
                    "s_nom": s_nom,
                    "type": short_type,
                    "host_ref": host_ref,
                }
                processed_count += 1
            else:
                logger.info(f"   [ERROR] Component '{c_name}' of type '{c_type}' not processed")

        logger.info(f"   [OK] Processed {processed_count} components.")
        data_connected = self._resolve_connectivity(topology_data, raw_data["connections"])
        return self._finalize_connectivity_for_init(data_connected)

    def _resolve_connectivity(self, data, connections):
        for conn in connections:
            term1, term2 = conn[0], conn[1]
            try:
                if "." in term1:
                    c1 = term1.split(".", 1)[0]
                else:
                    c1 = term1
                if "." in term2:
                    c2 = term2.split(".", 1)[0]
                else:
                    c2 = term2
            except ValueError:
                continue

            for cat in ["lines", "generators", "loads"]:
                if c1 in data[cat]:
                    data[cat][c1]["connected_to"] = c2
                elif c2 in data[cat]:
                    data[cat][c2]["connected_to"] = c1
        return data

    def _finalize_connectivity_for_init(self, data):
        comp_to_bus = {}
        for cat in ["generators", "loads", "lines"]:
            for c_id, c_info in data[cat].items():
                if "connected_to" in c_info:
                    comp_to_bus[c_id] = c_info["connected_to"]

        for g_id, g_info in data["generators"].items():
            if "connected_to" not in g_info and "host_ref" in g_info:
                host = g_info["host_ref"]
                if host and host in comp_to_bus:
                    g_info["connected_to"] = comp_to_bus[host]
                    logger.info(
                        f"   [INFO] Linked orphan '{g_id}' to bus '{comp_to_bus[host]}' (via {host})"
                    )
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

            for g_id, g_info in data["generators"].items():
                bus_id = g_info.get("connected_to")
                if not bus_id or bus_id not in bus_nominal_v:
                    logger.warning(f"   [WARN] Generator '{g_id}' not connected. Skipped.")
                    continue

                p_mw = g_info.get("p_mw", 0.0)
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
                    voltage_regulator_on=regulator_on,
                    target_v=target_v_kv if regulator_on else None,
                )

            logger.info("   [OK] Network build complete.")
            return network
        except Exception as e:
            logger.error(f"   [ERROR] Failed to build PyPowSybl network: {e}")
            raise e
