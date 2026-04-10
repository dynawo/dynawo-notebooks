# FILE: src/dynawo_notebooks/Scripts/core/comparison.py
"""
Load Flow Comparison Module.

This module provides utilities to cross-validate AC Load Flow results
between OpenModelica dynamic simulations and PyPowSyBl steady-state calculations.
"""

import os
import tempfile
import logging
import json
import pandas as pd
import numpy as np
import pypowsybl as pp
from typing import Dict, Any

from .connector import OMCConnector
from .mo_topology import MoTopologyToolkit

logger = logging.getLogger(__name__)


class LoadFlowComparator:
    """
    Utility class responsible for comparing steady-state power flow results
    (voltage magnitudes and phase angles) between OpenModelica and PyPowSyBl.
    """

    @staticmethod
    def compare_voltages(
        network: pp.network.Network,
        connector: OMCConnector,
        model_name: str,
        parsed_data: Dict[str, Any],
    ) -> pd.DataFrame:
        """
        Executes an OpenModelica simulation (t=0) and compares the resulting bus
        voltages against the steady-state results stored in a PyPowSyBl network.

        :param network: The solved PyPowSyBl network containing Load Flow results.
        :param connector: Active OMCConnector instance for OpenModelica simulation.
        :param model_name: The target Modelica model to simulate.
        :param parsed_data: The extracted topological dictionary containing bus references.
        :return: A pandas DataFrame containing the comparative metrics and absolute errors.
        """
        logger.info("Initiating cross-platform Load Flow comparison...")
        comparison_data = []
        original_dir = connector.get_working_directory()

        with tempfile.TemporaryDirectory(ignore_cleanup_errors=True) as tmpdir:
            connector.set_working_directory(tmpdir)

            # 1. Execute OpenModelica Simulation
            if not connector.simulate_model(model_name, stop_time=0.0):
                logger.error("Cannot compare: OM Simulation failed.")
                connector.set_working_directory(original_dir)
                return pd.DataFrame()

            # 2. Retrieve PyPowSyBl DataFrames
            buses_df = network.get_buses()
            vl_df = network.get_voltage_levels()

            # 3. Iterate and Cross-Reference Data
            for bus_id in parsed_data.get("buses", {}).keys():
                # --- OpenModelica Data Extraction ---
                v_pu_om = connector.get_simulation_value(f"{bus_id}.UPu", 0.0)
                theta_rad_om = connector.get_simulation_value(f"{bus_id}.UPhase", 0.0)

                if v_pu_om is None:
                    v_pu_om = connector.get_simulation_value(f"{bus_id}.V", 0.0)
                if theta_rad_om is None:
                    theta_rad_om = connector.get_simulation_value(f"{bus_id}.theta", 0.0)

                # Process virtual buses by extracting complex voltage components
                bus_info = parsed_data.get("buses", {}).get(bus_id, {})
                if v_pu_om is None and bus_info.get("is_virtual"):
                    om_ref = bus_info.get("om_reference")
                    if om_ref:
                        v_re = connector.get_simulation_value(f"{om_ref}.V.re", 0.0)
                        v_im = connector.get_simulation_value(f"{om_ref}.V.im", 0.0)

                        if v_re is not None and v_im is not None:
                            v_mag = np.sqrt(v_re**2 + v_im**2)
                            theta_rad_om = np.arctan2(v_im, v_re)
                            v_nom = float(bus_info.get("nominal_v", 225.0))

                            # Normalize magnitude to p.u. if the base voltage is > 0
                            if v_mag > 2.0 and v_nom > 0:
                                v_pu_om = v_mag / v_nom
                            else:
                                v_pu_om = v_mag

                theta_deg_om = np.degrees(theta_rad_om) if theta_rad_om is not None else np.nan
                if v_pu_om is None:
                    v_pu_om = np.nan

                # --- PyPowSyBl Data Extraction ---
                v_pu_pps = np.nan
                theta_deg_pps = np.nan

                vl_id = f"VL_{bus_id}"

                try:
                    # Filter by voltage_level_id to bypass PyPowSyBl internal auto-renaming conventions
                    matched_buses = buses_df[buses_df["voltage_level_id"] == vl_id]

                    if not matched_buses.empty:
                        b_row = matched_buses.iloc[0]
                        v_mag_kv = b_row.get("v_mag", np.nan)
                        v_ang_deg = b_row.get("v_angle", np.nan)

                        actual_vl_id = b_row.get("voltage_level_id")
                        if pd.notna(actual_vl_id) and actual_vl_id in vl_df.index:
                            v_nom = float(vl_df.at[actual_vl_id, "nominal_v"])
                        else:
                            v_nom = float(bus_info.get("nominal_v", 225.0))

                        if pd.notna(v_mag_kv):
                            v_pu_pps = float(v_mag_kv) / v_nom if v_nom != 0 else np.nan
                            theta_deg_pps = float(v_ang_deg)
                except Exception as e:
                    logger.error(f"Error extracting data for bus '{bus_id}': {e}")

                # --- Error Metric Calculation ---
                error_v = (
                    abs(v_pu_om - v_pu_pps) if pd.notna(v_pu_om) and pd.notna(v_pu_pps) else np.nan
                )

                # Initial theta error (refined subsequently during slack alignment)
                error_theta = (
                    abs(theta_deg_om - theta_deg_pps)
                    if pd.notna(theta_deg_om) and pd.notna(theta_deg_pps)
                    else np.nan
                )
                if pd.notna(error_theta) and error_theta > 180:
                    error_theta = 360 - error_theta

                comparison_data.append(
                    {
                        "Bus": bus_id,
                        "V_OM (pu)": round(v_pu_om, 5) if pd.notna(v_pu_om) else None,
                        "V_PPS (pu)": round(v_pu_pps, 5) if pd.notna(v_pu_pps) else None,
                        "Δ V (pu)": round(error_v, 6) if pd.notna(error_v) else None,
                        "Theta_OM (deg)": round(theta_deg_om, 4)
                        if pd.notna(theta_deg_om)
                        else None,
                        "Theta_PPS (deg)": round(theta_deg_pps, 4)
                        if pd.notna(theta_deg_pps)
                        else None,
                        "Δ Theta (deg)": round(error_theta, 4) if pd.notna(error_theta) else None,
                    }
                )

            connector.set_working_directory(original_dir)

        # --- Slack Angle Alignment ---
        # Shift OpenModelica angles to match the PyPowSyBl reference frame at the slack bus
        slack_bus_record = next(
            (row for row in comparison_data if row["Theta_PPS (deg)"] == 0.0), None
        )
        if slack_bus_record and pd.notna(slack_bus_record["Theta_OM (deg)"]):
            theta_shift = slack_bus_record["Theta_OM (deg)"]

            for row in comparison_data:
                if pd.notna(row["Theta_OM (deg)"]):
                    # Apply shift and normalize to [-180, 180]
                    shifted = (row["Theta_OM (deg)"] - theta_shift + 180) % 360 - 180
                    row["Theta_OM (deg)"] = round(shifted, 4)

                    if pd.notna(row["Theta_PPS (deg)"]):
                        diff = abs(shifted - row["Theta_PPS (deg)"])
                        diff = diff if diff <= 180 else 360 - diff
                        row["Δ Theta (deg)"] = round(diff, 4)

        df = pd.DataFrame(comparison_data).set_index("Bus")
        return df.sort_values(by="Δ V (pu)", ascending=False)


class NetworkParameterComparator:
    """
    Utility class for auditing and comparing network parameters (R, X, G, B, P, Q, V)
    between OpenModelica, an exported JSON structure, and a PyPowSyBl XIIDM file.
    Exports the comparative results into component-specific CSV files.
    """

    @staticmethod
    def generate_comparison_csv(
        om_data: Dict[str, Any],
        json_path: str,
        xiidm_path: str,
        export_path: str = ".",
        output_prefix: str = "audit_",
    ):
        """
        Extracts parameters from the three pipeline stages, converts physical XIIDM
        values back to per-unit (p.u.), and exports the results to CSV files.
        """
        logger.info("Initiating parameter audit across multiple CSV files...")

        # 1. Load the intermediate JSON topology
        try:
            with open(json_path, "r", encoding="utf-8") as f:
                json_data = json.load(f)
        except Exception as e:
            logger.error(f"Error loading JSON: {e}")
            json_data = {}

        # 2. Load the PyPowSyBl physical network (XIIDM)
        try:
            net = pp.network.load(xiidm_path)
        except Exception as e:
            logger.error(f"Error loading XIIDM: {e}")
            return

        lines_df = net.get_lines()
        tfos_df = net.get_2_windings_transformers()
        loads_df = net.get_loads()
        gens_df = net.get_generators()
        shunts_df = net.get_shunt_compensators()
        vl_df = net.get_voltage_levels()

        lines_rows = []
        tfos_rows = []
        loads_rows = []
        gens_rows = []
        shunts_rows = []

        # --- Helper Functions ---
        def get_vl_vnom(vl_id):
            if vl_id in vl_df.index:
                return float(vl_df.at[vl_id, "nominal_v"])
            return 225.0

        def get_vl_base(vl_id, sn=100.0):
            vnom = get_vl_vnom(vl_id)
            return (vnom**2) / sn

        def safe_get(d, keys, default=np.nan):
            if not isinstance(d, dict):
                return default
            for k in keys:
                if k in d and d[k] is not None:
                    return float(d[k])
            return default

        # ==========================================
        # 1. LINES (X, R, G, B)
        # ==========================================
        for lid, om_info in om_data.get("lines", {}).items():
            j_info = json_data.get("lines", {}).get(lid, {})
            x_r, x_x, x_g, x_b = np.nan, np.nan, np.nan, np.nan

            if lid in lines_df.index:
                l_row = lines_df.loc[lid]
                z_base = get_vl_base(l_row["voltage_level1_id"])
                # Revert from physical Ohms/Siemens to per-unit
                x_r = l_row["r"] / z_base
                x_x = l_row["x"] / z_base
                x_b = (l_row["b1"] + l_row["b2"]) * z_base
                x_g = (l_row["g1"] + l_row["g2"]) * z_base

            lines_rows.append(
                {
                    "ID": lid,
                    "OM_R": safe_get(om_info, ["r_pu", "r"]),
                    "JSON_R": safe_get(j_info, ["r_pu", "r"]),
                    "XIIDM_R": x_r,
                    "OM_X": safe_get(om_info, ["x_pu", "x"]),
                    "JSON_X": safe_get(j_info, ["x_pu", "x"]),
                    "XIIDM_X": x_x,
                    "OM_B": safe_get(om_info, ["b_pu", "b"]),
                    "JSON_B": safe_get(j_info, ["b_pu", "b"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu", "g"]),
                    "JSON_G": safe_get(j_info, ["g_pu", "g"]),
                    "XIIDM_G": x_g,
                }
            )

        # ==========================================
        # 2. TRANSFORMERS (X, R, G, B, Ratio)
        # ==========================================
        for tid, om_info in om_data.get("transformers", {}).items():
            j_info = json_data.get("transformers", {}).get(tid, {})
            x_r, x_x, x_g, x_b, x_ratio = np.nan, np.nan, np.nan, np.nan, np.nan

            if tid in tfos_df.index:
                t_row = tfos_df.loc[tid]
                # XIIDM transformer bases refer to the primary side with the tap ratio applied
                z_base = (t_row["rated_u1"] ** 2) / t_row["rated_s"]
                x_r = t_row["r"] / z_base
                x_x = t_row["x"] / z_base
                x_b = t_row["b"] * z_base
                x_g = t_row["g"] * z_base

                # Calculate the applied tap ratio
                un1 = get_vl_vnom(t_row["voltage_level1_id"])
                x_ratio = t_row["rated_u1"] / un1 if un1 != 0 else np.nan

            tfos_rows.append(
                {
                    "ID": tid,
                    "OM_R": safe_get(om_info, ["r_pu", "r"]),
                    "JSON_R": safe_get(j_info, ["r_pu", "r"]),
                    "XIIDM_R": x_r,
                    "OM_X": safe_get(om_info, ["x_pu", "x"]),
                    "JSON_X": safe_get(j_info, ["x_pu", "x"]),
                    "XIIDM_X": x_x,
                    "OM_B": safe_get(om_info, ["b_pu", "b"]),
                    "JSON_B": safe_get(j_info, ["b_pu", "b"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu", "g"]),
                    "JSON_G": safe_get(j_info, ["g_pu", "g"]),
                    "XIIDM_G": x_g,
                    "OM_Ratio": safe_get(om_info, ["ratio"]),
                    "JSON_Ratio": safe_get(j_info, ["ratio"]),
                    "XIIDM_Ratio": x_ratio,
                }
            )

        # ==========================================
        # 3. LOADS (P, Q)
        # ==========================================
        for lid, om_info in om_data.get("loads", {}).items():
            j_info = json_data.get("loads", {}).get(lid, {})
            x_p, x_q = np.nan, np.nan

            if lid in loads_df.index:
                l_row = loads_df.loc[lid]
                # PyPowSyBl stores power in MW/MVar. Convert to p.u. (100 MVA Base)
                x_p = l_row["p0"] / 100.0
                x_q = l_row["q0"] / 100.0

            loads_rows.append(
                {
                    "ID": lid,
                    "OM_P": safe_get(om_info, ["p_pu"]),
                    "JSON_P": safe_get(j_info, ["p_pu"]),
                    "XIIDM_P": x_p,
                    "OM_Q": safe_get(om_info, ["q_pu"]),
                    "JSON_Q": safe_get(j_info, ["q_pu"]),
                    "XIIDM_Q": x_q,
                }
            )

        # ==========================================
        # 4. GENERATORS (P, Q, V)
        # ==========================================
        for gid, om_info in om_data.get("generators", {}).items():
            j_info = json_data.get("generators", {}).get(gid, {})
            x_p, x_q, x_v = np.nan, np.nan, np.nan

            if gid in gens_df.index:
                g_row = gens_df.loc[gid]
                x_p = g_row["target_p"] / 100.0
                x_q = g_row["target_q"] / 100.0
                un_g = get_vl_vnom(g_row["voltage_level_id"])
                x_v = g_row["target_v"] / un_g if un_g != 0 else np.nan

            gens_rows.append(
                {
                    "ID": gid,
                    "OM_P": safe_get(om_info, ["p_pu"]),
                    "JSON_P": safe_get(j_info, ["p_pu"]),
                    "XIIDM_P": x_p,
                    "OM_Q": safe_get(om_info, ["q_pu"]),
                    "JSON_Q": safe_get(j_info, ["q_pu"]),
                    "XIIDM_Q": x_q,
                    "OM_V": safe_get(om_info, ["u_pu", "v_pu"]),
                    "JSON_V": safe_get(j_info, ["u_pu", "v_pu"]),
                    "XIIDM_V": x_v,
                }
            )

        # ==========================================
        # 5. SHUNTS (B, G)
        # ==========================================
        for sid, om_info in om_data.get("shunts", {}).items():
            j_info = json_data.get("shunts", {}).get(sid, {})
            x_b, x_g = np.nan, np.nan

            if sid in shunts_df.index:
                s_row = shunts_df.loc[sid]
                z_base = get_vl_base(s_row.get("voltage_level_id"))

                b_val = s_row.get("b_per_section", s_row.get("b", np.nan))
                g_val = s_row.get("g_per_section", s_row.get("g", np.nan))

                x_b = float(b_val) * z_base if pd.notna(b_val) else np.nan
                x_g = float(g_val) * z_base if pd.notna(g_val) else np.nan

            shunts_rows.append(
                {
                    "ID": sid,
                    # Note: Modelica uses negative B for capacitors, while XIIDM is positive.
                    "OM_B": safe_get(om_info, ["b_pu"]),
                    "JSON_B": safe_get(j_info, ["b_pu"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu"]),
                    "JSON_G": safe_get(j_info, ["g_pu"]),
                    "XIIDM_G": x_g,
                }
            )

        # --- Report Generation ---
        def save_df(rows, name):
            if rows:
                df = pd.DataFrame(rows)
                # Round to 6 decimal places to mitigate floating-point artifacts
                cols_to_round = [c for c in df.columns if c != "ID"]
                df[cols_to_round] = df[cols_to_round].round(6)

                filename = f"{output_prefix}{name}.csv"
                filepath = os.path.join(export_path, filename)
                df.to_csv(filepath, index=False)
                logger.info(f"Audit report saved: {filepath}")

        # Export all component types
        save_df(lines_rows, "lines")
        save_df(tfos_rows, "transformers")
        save_df(loads_rows, "loads")
        save_df(gens_rows, "generators")
        save_df(shunts_rows, "shunts")

        logger.info("Cross-component parameter audit completed successfully.")
