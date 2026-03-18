# FILE: src/dynawo_notebooks/Scripts/core/comparison.py
"""
Load Flow Comparison Module.

This module provides utilities to cross-validate AC Load Flow results
between OpenModelica dynamic simulations and PyPowSyBl steady-state calculations.
"""

import tempfile
import logging
import pandas as pd
import numpy as np
import pypowsybl as pp
from typing import Dict, Any

from .connector import OMCConnector

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

            # 1. EXECUTE OPENMODELICA SIMULATION
            if not connector.simulate_model(model_name, stop_time=0.0):
                logger.error("Cannot compare: OM Simulation failed.")
                connector.set_working_directory(original_dir)
                return pd.DataFrame()

            # 2. RETRIEVE PYPOWSYBL DATAFRAMES
            buses_df = network.get_buses()
            vl_df = network.get_voltage_levels()

            # 3. ITERATE AND CROSS-REFERENCE DATA
            for bus_id in parsed_data.get("buses", {}).keys():
                # --- OPENMODELICA DATA EXTRACTION ---
                v_pu_om = connector.get_simulation_value(f"{bus_id}.UPu", 0.0)
                theta_rad_om = connector.get_simulation_value(f"{bus_id}.UPhase", 0.0)

                if v_pu_om is None:
                    v_pu_om = connector.get_simulation_value(f"{bus_id}.V", 0.0)
                if theta_rad_om is None:
                    theta_rad_om = connector.get_simulation_value(f"{bus_id}.theta", 0.0)

                theta_deg_om = np.degrees(theta_rad_om) if theta_rad_om is not None else np.nan
                if v_pu_om is None:
                    v_pu_om = np.nan

                # --- ROBUST PYPOWSYBL DATA EXTRACTION ---
                v_pu_pps = np.nan
                theta_deg_pps = np.nan

                vl_id = f"VL_{bus_id}"

                try:
                    # CRITICAL FIX: Filter by the 'voltage_level_id' column rather than the DataFrame index.
                    # This robustly bypasses PyPowSyBl's internal auto-renaming convention (e.g., 'VL_Bus10_0').
                    matched_buses = buses_df[buses_df["voltage_level_id"] == vl_id]

                    if not matched_buses.empty:
                        # Extract the first matching bus record
                        b_row = matched_buses.iloc[0]
                        v_mag_kv = b_row.get("v_mag", np.nan)
                        v_ang_deg = b_row.get("v_angle", np.nan)

                        # Retrieve the base nominal voltage from the voltage levels DataFrame
                        v_nom = (
                            float(vl_df.at[vl_id, "nominal_v"]) if vl_id in vl_df.index else 225.0
                        )

                        if pd.notna(v_mag_kv):
                            v_pu_pps = float(v_mag_kv) / v_nom if v_nom != 0 else np.nan
                            theta_deg_pps = float(v_ang_deg)
                    else:
                        logger.warning(
                            f"No PyPowSyBl bus found matching voltage_level_id: {vl_id}"
                        )
                except Exception as e:
                    logger.error(f"Error extracting data for bus '{bus_id}': {e}")

                # --- CALCULATE ERROR METRICS ---
                error_v = (
                    abs(v_pu_om - v_pu_pps) if pd.notna(v_pu_om) and pd.notna(v_pu_pps) else np.nan
                )
                error_theta = (
                    abs(theta_deg_om - theta_deg_pps)
                    if pd.notna(theta_deg_om) and pd.notna(theta_deg_pps)
                    else np.nan
                )

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
            logger.info("Cleaning up temporary simulation files...")

        # Construct and sort the final comparison DataFrame
        df = pd.DataFrame(comparison_data).set_index("Bus")
        df = df.sort_values(by="Δ V (pu)", ascending=False)
        return df
