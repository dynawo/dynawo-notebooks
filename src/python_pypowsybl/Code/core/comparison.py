"""
Load Flow Comparison Module.

This module provides utilities to cross-validate AC Load Flow results
between OpenModelica dynamic simulations and PyPowSyBl steady-state calculations.
"""

import tempfile
import logging
import json
import os
import re
from pathlib import Path
from typing import Dict, Any, Optional, List, Sequence, Tuple

import pandas as pd
import numpy as np
import pypowsybl as pp

from .connector import OMCConnector

logger = logging.getLogger(__name__)


class LoadFlowComparator:
    """
    Utility class responsible for comparing steady-state power flow results
    (voltage magnitudes and phase angles) between OpenModelica and PyPowSyBl.
    """

    @staticmethod
    def open_case(
        dynawo_package_path: str,
        source_dir: str,
        local_files: Sequence[str],
        extra_files: Sequence[str] = (),
    ) -> OMCConnector:
        """
        Opens a new OpenModelica session with the Dynawo library and the files of a case.

        :param dynawo_package_path: Path of the Dynawo package.mo.
        :param source_dir: Directory of the local Modelica files.
        :param local_files: Local Modelica files of the case.
        :param extra_files: Additional files given by their path (e.g. a generated model).
        :return: The connector of the session.
        """
        connector = OMCConnector()
        connector.load_libraries(dynawo_package_path)
        connector.load_local_files(source_dir, list(local_files))
        for extra_file in extra_files:
            connector.load_local_files(
                os.path.dirname(os.path.abspath(extra_file)), [os.path.basename(extra_file)]
            )
        return connector

    @staticmethod
    def find_reference_model(source_dir: str, model_name: str) -> Tuple[str, Optional[str]]:
        """
        Finds the OpenModelica reference of a case: an initialized version provided next
        to the case (``<Model>_initialized.mo``), or else the model itself, which is a
        valid reference when it is already initialized.

        :param source_dir: Directory of the local Modelica files.
        :param model_name: Fully qualified name of the root model.
        :return: The reference model name and the file defining it (None for the model itself).
        """
        short_name = model_name.split(".")[-1]
        reference_file = os.path.join(source_dir, f"{short_name}_initialized.mo")
        if not os.path.exists(reference_file):
            return model_name, None
        with open(reference_file, "r", encoding="utf-8") as f:
            source = f.read()
        within = re.search(r"^\s*within\s+([\w\.]+)\s*;", source, re.MULTILINE)
        name = f"{short_name}_initialized"
        return (f"{within.group(1)}.{name}" if within else name), reference_file

    @staticmethod
    def compare_with_reference(
        network: pp.network.Network,
        parsed_data: Dict[str, Any],
        dynawo_package_path: str,
        source_dir: str,
        local_files: Sequence[str],
        model_name: str,
    ) -> Tuple[pd.DataFrame, str]:
        """
        Compares the load flow with the OpenModelica reference of the case at t = 0.

        :param network: The solved PyPowSyBl network.
        :param parsed_data: The parsed topology of the case.
        :param dynawo_package_path: Path of the Dynawo package.mo.
        :param source_dir: Directory of the local Modelica files.
        :param local_files: Local Modelica files of the case.
        :param model_name: Fully qualified name of the root model.
        :return: The comparison (empty if the reference cannot be simulated) and the name
            of the reference model.
        """
        reference_model, reference_file = LoadFlowComparator.find_reference_model(
            source_dir, model_name
        )
        files = list(local_files)
        if reference_file and os.path.basename(reference_file) not in files:
            files.append(os.path.basename(reference_file))
        connector = LoadFlowComparator.open_case(dynawo_package_path, source_dir, files)
        comparison = LoadFlowComparator.compare_voltages(
            network, connector, reference_model, parsed_data
        )
        return comparison, reference_model

    @staticmethod
    def validate_initialized_model(
        network: pp.network.Network,
        parsed_data: Dict[str, Any],
        initialized_model: Any,
        dynawo_package_path: str,
        source_dir: str,
        local_files: Sequence[str],
    ) -> pd.DataFrame:
        """
        Simulates the generated initialized model in OpenModelica and compares its initial
        point with the load flow.

        :param network: The solved PyPowSyBl network.
        :param parsed_data: The parsed topology of the case.
        :param initialized_model: The InitializedModel returned by the init generator.
        :param dynawo_package_path: Path of the Dynawo package.mo.
        :param source_dir: Directory of the local Modelica files.
        :param local_files: Local Modelica files of the case.
        :return: The comparison (empty if the initialized model cannot be simulated).
        """
        connector = LoadFlowComparator.open_case(
            dynawo_package_path, source_dir, local_files, [initialized_model.path]
        )
        return LoadFlowComparator.compare_voltages(
            network, connector, initialized_model.class_name, parsed_data
        )

    @staticmethod
    def compare_voltages(
        network: pp.network.Network,
        connector: OMCConnector,
        model_name: str,
        parsed_data: Dict[str, Any],
        export_path: Optional[str] = None,
        export_prefix: str = "grid_export",
    ) -> pd.DataFrame:
        """
        Executes an OpenModelica simulation (t=0) and compares the resulting bus
        voltages against the steady-state results stored in a PyPowSyBl network.

        :param network: The solved PyPowSyBl network containing Load Flow results.
        :param connector: Active OMCConnector instance for OpenModelica simulation.
        :param model_name: The target Modelica model to simulate.
        :param parsed_data: The extracted topological dictionary containing bus references.
        :param export_path: Target directory to export the result files.
        :param export_prefix: Prefix for the exported files.
        :return: A pandas DataFrame containing the comparative metrics and absolute errors.
        """
        logger.info("Initiating cross-platform Load Flow comparison...")

        if export_path:
            export_dir = Path(export_path)
            export_dir.mkdir(parents=True, exist_ok=True)
            pps_file = export_dir / f"{export_prefix}_PyPowSyBl.xiidm"
            network.save(str(pps_file))
            logger.info(f"PyPowSyBl Load Flow saved to: {pps_file}")

        comparison_data = []
        original_dir = connector.get_working_directory()

        with tempfile.TemporaryDirectory(ignore_cleanup_errors=True) as tmpdir:
            connector.set_working_directory(tmpdir)

            om_file = None
            if export_path:
                om_file = str(Path(export_path) / f"{export_prefix}_Modelica.csv")

            if not connector.simulate_model(model_name, stop_time=0.0, om_file=om_file):
                logger.error("Cannot compare: OM Simulation failed.")
                connector.set_working_directory(original_dir)
                return pd.DataFrame()

            buses_df = network.get_buses()
            vl_df = network.get_voltage_levels()

            for bus_id, bus_info in parsed_data.get("buses", {}).items():
                v_pu_om = connector.get_simulation_value(f"{bus_id}.UPu", 0.0)
                theta_rad_om = connector.get_simulation_value(f"{bus_id}.UPhase", 0.0)

                if v_pu_om is None and bus_info.get("om_reference"):
                    # Node without Bus component: read the voltage of a connected terminal
                    om_ref = bus_info["om_reference"]
                    v_re = connector.get_simulation_value(f"{om_ref}.V.re", 0.0)
                    v_im = connector.get_simulation_value(f"{om_ref}.V.im", 0.0)
                    if v_re is not None and v_im is not None:
                        v_pu_om = float(np.hypot(v_re, v_im))
                        theta_rad_om = float(np.arctan2(v_im, v_re))

                theta_deg_om = np.degrees(theta_rad_om) if theta_rad_om is not None else np.nan
                if v_pu_om is None:
                    v_pu_om = np.nan

                v_pu_pps = np.nan
                theta_deg_pps = np.nan
                vl_id = f"VL_{bus_id}"

                try:
                    matched_buses = buses_df[buses_df["voltage_level_id"] == vl_id]
                    if not matched_buses.empty:
                        b_row = matched_buses.iloc[0]
                        v_nom = float(vl_df.at[vl_id, "nominal_v"])
                        if pd.notna(b_row.get("v_mag")):
                            v_pu_pps = float(b_row["v_mag"]) / v_nom if v_nom != 0 else np.nan
                            theta_deg_pps = float(b_row["v_angle"])
                except Exception as e:
                    logger.error(f"Error extracting data for bus '{bus_id}': {e}")

                error_v = (
                    abs(v_pu_om - v_pu_pps) if pd.notna(v_pu_om) and pd.notna(v_pu_pps) else np.nan
                )
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

        # Slack Angle Alignment: both angle references are moved to the slack bus
        slack_bus_record = next(
            (row for row in comparison_data if row["Theta_PPS (deg)"] == 0.0), None
        )
        if slack_bus_record and pd.notna(slack_bus_record["Theta_OM (deg)"]):
            theta_shift = slack_bus_record["Theta_OM (deg)"]

            for row in comparison_data:
                if pd.notna(row["Theta_OM (deg)"]):
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
    Utility class for auditing and comparing network parameters.
    """

    @staticmethod
    def generate_comparison_csv(
        om_data: Dict[str, Any],
        json_path: str,
        xiidm_path: str,
        export_path: str = ".",
        output_prefix: str = "audit_",
    ) -> None:
        """
        Extracts parameters from the pipeline stages and exports the results to CSV files.
        Every value is expressed with the per-unit conventions of the Dynawo models (see
        the converter module).

        :param om_data: Dictionary with the OpenModelica parsed data.
        :param json_path: Path to the exported JSON topology file.
        :param xiidm_path: Path to the exported PyPowSyBl XIIDM file.
        :param export_path: Target directory to export the CSV reports.
        :param output_prefix: Prefix string for the generated CSV files.
        """
        logger.info("Initiating parameter audit across multiple CSV files...")

        try:
            with open(json_path, "r", encoding="utf-8") as f:
                json_data = json.load(f)
        except Exception as e:
            logger.error(f"Error loading JSON: {e}")
            json_data = {}

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

        lines_rows, tfos_rows, loads_rows, gens_rows, shunts_rows = [], [], [], [], []

        def get_vl_vnom(vl_id: str) -> float:
            if vl_id in vl_df.index:
                return float(vl_df.at[vl_id, "nominal_v"])
            return 225.0

        def get_vl_base(vl_id: str, sn: float = 100.0) -> float:
            vnom = get_vl_vnom(vl_id)
            return (vnom**2) / sn

        def safe_get(d: Dict, keys: List[str], default: float = np.nan) -> float:
            if not isinstance(d, dict):
                return default
            for k in keys:
                if k in d and d[k] is not None:
                    return float(d[k])
            return default

        # 1. LINES (half-admittances per side)
        for lid, om_info in om_data.get("lines", {}).items():
            j_info = json_data.get("lines", {}).get(lid, {})
            x_r, x_x, x_g, x_b = np.nan, np.nan, np.nan, np.nan

            if lid in lines_df.index:
                l_row = lines_df.loc[lid]
                z_base = get_vl_base(l_row.get("voltage_level1_id"))
                x_r = l_row.get("r", np.nan) / z_base
                x_x = l_row.get("x", np.nan) / z_base
                x_b = l_row.get("b1", 0.0) * z_base
                x_g = l_row.get("g1", 0.0) * z_base

            lines_rows.append(
                {
                    "ID": lid,
                    "OM_R": safe_get(om_info, ["r_pu"]),
                    "JSON_R": safe_get(j_info, ["r_pu"]),
                    "XIIDM_R": x_r,
                    "OM_X": safe_get(om_info, ["x_pu"]),
                    "JSON_X": safe_get(j_info, ["x_pu"]),
                    "XIIDM_X": x_x,
                    "OM_B": safe_get(om_info, ["b_pu"]),
                    "JSON_B": safe_get(j_info, ["b_pu"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu"]),
                    "JSON_G": safe_get(j_info, ["g_pu"]),
                    "XIIDM_G": x_g,
                }
            )

        # 2. TRANSFORMERS (impedance in base of the side 2 nominal voltage)
        for tid, om_info in om_data.get("transformers", {}).items():
            j_info = json_data.get("transformers", {}).get(tid, {})
            x_r, x_x, x_g, x_b, x_ratio = np.nan, np.nan, np.nan, np.nan, np.nan

            if tid in tfos_df.index:
                t_row = tfos_df.loc[tid]
                un1 = get_vl_vnom(t_row.get("voltage_level1_id"))
                un2 = get_vl_vnom(t_row.get("voltage_level2_id"))
                z_base = un2**2 / 100.0
                x_r = t_row.get("r", np.nan) / z_base
                x_x = t_row.get("x", np.nan) / z_base
                x_b = t_row.get("b", 0.0) * z_base
                x_g = t_row.get("g", 0.0) * z_base
                x_ratio = (t_row.get("rated_u2") / t_row.get("rated_u1")) * (un1 / un2)

            tfos_rows.append(
                {
                    "ID": tid,
                    "OM_R": safe_get(om_info, ["r_pu"]),
                    "JSON_R": safe_get(j_info, ["r_pu"]),
                    "XIIDM_R": x_r,
                    "OM_X": safe_get(om_info, ["x_pu"]),
                    "JSON_X": safe_get(j_info, ["x_pu"]),
                    "XIIDM_X": x_x,
                    "OM_B": safe_get(om_info, ["b_pu"]),
                    "JSON_B": safe_get(j_info, ["b_pu"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu"]),
                    "JSON_G": safe_get(j_info, ["g_pu"]),
                    "XIIDM_G": x_g,
                    "OM_Ratio": safe_get(om_info, ["ratio"]),
                    "JSON_Ratio": safe_get(j_info, ["ratio"]),
                    "XIIDM_Ratio": x_ratio,
                }
            )

        # 3. LOADS (receptor convention)
        for lid, om_info in om_data.get("loads", {}).items():
            j_info = json_data.get("loads", {}).get(lid, {})
            x_p, x_q = np.nan, np.nan

            if lid in loads_df.index:
                l_row = loads_df.loc[lid]
                x_p = l_row.get("p0", np.nan) / 100.0
                x_q = l_row.get("q0", np.nan) / 100.0

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

        # 4. GENERATORS (generator convention)
        for gid, om_info in om_data.get("generators", {}).items():
            j_info = json_data.get("generators", {}).get(gid, {})
            x_p, x_q, x_v = np.nan, np.nan, np.nan

            if gid in gens_df.index:
                g_row = gens_df.loc[gid]
                x_p = g_row.get("target_p", np.nan) / 100.0
                x_q = g_row.get("target_q", np.nan) / 100.0
                un_g = get_vl_vnom(g_row.get("voltage_level_id"))
                x_v = g_row.get("target_v", np.nan) / un_g

            gens_rows.append(
                {
                    "ID": gid,
                    "OM_P": safe_get(om_info, ["p_pu"]),
                    "JSON_P": safe_get(j_info, ["p_pu"]),
                    "XIIDM_P": x_p,
                    "OM_Q": safe_get(om_info, ["q_pu"]),
                    "JSON_Q": safe_get(j_info, ["q_pu"]),
                    "XIIDM_Q": x_q,
                    "OM_V": safe_get(om_info, ["u_pu"]),
                    "JSON_V": safe_get(j_info, ["u_pu"]),
                    "XIIDM_V": x_v,
                }
            )

        # 5. SHUNTS (receptor convention of the Dynawo susceptance)
        for sid, om_info in om_data.get("shunts", {}).items():
            j_info = json_data.get("shunts", {}).get(sid, {})
            x_b, x_g = np.nan, np.nan

            if sid in shunts_df.index:
                s_row = shunts_df.loc[sid]
                z_base = get_vl_base(s_row.get("voltage_level_id"))
                b_val = s_row.get("b_per_section", s_row.get("b", np.nan))
                g_val = s_row.get("g_per_section", s_row.get("g", np.nan))
                x_b = -float(b_val) * z_base if pd.notna(b_val) else np.nan
                x_g = float(g_val) * z_base if pd.notna(g_val) else np.nan

            shunts_rows.append(
                {
                    "ID": sid,
                    "OM_B": safe_get(om_info, ["b_pu"]),
                    "JSON_B": safe_get(j_info, ["b_pu"]),
                    "XIIDM_B": x_b,
                    "OM_G": safe_get(om_info, ["g_pu"]),
                    "JSON_G": safe_get(j_info, ["g_pu"]),
                    "XIIDM_G": x_g,
                }
            )

        def save_df(rows: List[Dict], name: str) -> None:
            if rows:
                df = pd.DataFrame(rows)
                cols_to_round = [c for c in df.columns if c != "ID"]
                df[cols_to_round] = df[cols_to_round].round(6)

                export_dir = Path(export_path)
                export_dir.mkdir(parents=True, exist_ok=True)
                filepath = export_dir / f"{output_prefix}{name}.csv"

                df.to_csv(filepath, index=False)
                logger.info(f"Audit report saved: {filepath}")

        save_df(lines_rows, "lines")
        save_df(tfos_rows, "transformers")
        save_df(loads_rows, "loads")
        save_df(gens_rows, "generators")
        save_df(shunts_rows, "shunts")

        logger.info("Cross-component parameter audit completed successfully.")
