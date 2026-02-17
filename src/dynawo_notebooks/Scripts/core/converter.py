# FILE: src/dynawo_notebooks/Scripts/core/converter.py
"""
PyPowSybl Converter Module.

This module converts the dictionary-based electrical topology provided by the Parser
into a formal PyPowSybl Network object.
"""

import logging
import pandas as pd
import pypowsybl as pp
from typing import Dict

logger = logging.getLogger(__name__)


class PowsyblConverter:
    """
    Builder class for PyPowSybl Networks.
    """

    @staticmethod
    def build_network(data: Dict) -> pp.network.Network:
        """
        Creates a PyPowSybl network from the topology dictionary.
        """
        logger.info("Initializing PyPowSybl Network construction...")
        network = pp.network.create_empty()

        # Dictionary to store nominal voltage for Z_base calculation
        bus_nominal_v = {}

        # ----------------------------------------------------------------------
        # 1. BUSES
        # ----------------------------------------------------------------------
        for bid, info in data["buses"].items():
            # Get nominal voltage (default to 225.0 kV if missing)
            v = info.get("nominal_v") or 225.0
            bus_nominal_v[bid] = v

            sub_id = f"Sub_{bid}"
            vl_id = f"VL_{bid}"

            # Create Substation and Voltage Level
            network.create_substations(id=sub_id)

            # We use BUS_BREAKER topology as requested.
            # Crucial: To avoid "floating" nodes, lines must be connected
            # explicitly to the Bus ID created in the next step.
            network.create_voltage_levels(
                id=vl_id, substation_id=sub_id, nominal_v=v, topology_kind="BUS_BREAKER"
            )

            # Create the Bus Node explicitly
            network.create_buses(id=bid, voltage_level_id=vl_id)

        # ----------------------------------------------------------------------
        # 2. LINES (With Hybrid PU/Physical Conversion)
        # ----------------------------------------------------------------------
        for lid, info in data["lines"].items():
            b1, b2 = info.get("bus1"), info.get("bus2")

            # Validate connection
            if b1 and b2 and b1 in bus_nominal_v and b2 in bus_nominal_v:
                un = bus_nominal_v[b1]
                sn = info.get("sn_ref", 100.0)  # Base MVA (usually 100)

                # Calculate Base Impedance: Z_base = U^2 / S
                z_base = (un**2) / sn
                # Calculate Base Admittance: Y_base = S / U^2
                y_base = sn / (un**2)

                # --- Hybrid Logic: Physical vs Per Unit ---
                # 1. Resistance (R)
                r = info.get("r")
                if r is None:
                    # Convert from PU if physical value is missing
                    r = info.get("r_pu", 0.0) * z_base

                # 2. Reactance (X)
                x = info.get("x")
                if x is None:
                    val_x_pu = info.get("x_pu", 0.0001)
                    # Avoid exactly 0 reactance to prevent solver singularities
                    if val_x_pu == 0:
                        val_x_pu = 0.0001
                    x = val_x_pu * z_base

                # 3. Susceptance (B) - shunt
                b = info.get("b")
                if b is None:
                    # Convert PU (Admittance) to Siemens
                    b = info.get("b_pu", 0.0) * y_base

                # 4. Conductance (G) - shunt
                g = info.get("g")
                if g is None:
                    g = info.get("g_pu", 0.0) * y_base

                network.create_lines(
                    id=lid,
                    voltage_level1_id=f"VL_{b1}",
                    bus1_id=b1,  # Explicit connection to the Node ID fixes "floating" visual
                    voltage_level2_id=f"VL_{b2}",
                    bus2_id=b2,  # Explicit connection to the Node ID
                    r=r,
                    x=x,
                    g1=g / 2,
                    b1=b / 2,
                    g2=g / 2,
                    b2=b / 2,
                )
            else:
                logger.warning(
                    f"Line '{lid}' incomplete or buses not found (Bus1:{b1}, Bus2:{b2}). Skipped."
                )

        # ----------------------------------------------------------------------
        # 3. GENERATORS
        # ----------------------------------------------------------------------
        for gid, info in data["generators"].items():
            if info.get("is_init_block"):
                continue
            PowsyblConverter._create_generator(network, gid, info, bus_nominal_v)

        # ----------------------------------------------------------------------
        # 4. LOADS
        # ----------------------------------------------------------------------
        for lid, info in data["loads"].items():
            PowsyblConverter._create_load(network, lid, info)

        # ----------------------------------------------------------------------
        # 5. SHUNTS
        # ----------------------------------------------------------------------
        for sid, info in data["shunts"].items():
            PowsyblConverter._create_shunt(network, sid, info, bus_nominal_v)

        logger.info("PyPowSybl Network object created successfully.")
        return network

    @staticmethod
    def _create_generator(net, gid: str, info: Dict, v_map: Dict):
        # Support both naming conventions for connectivity
        bid = info.get("bus_id") or info.get("connected_to")

        if not bid or bid not in v_map:
            logger.warning(f"Generator '{gid}' disconnected. Skipped.")
            return

        reg_on = False
        tv_kv = None
        # Handle Voltage Target (PU -> kV)
        tv_pu = info.get("target_v") or info.get("u_pu")

        if tv_pu and tv_pu > 0:
            reg_on = True
            tv_kv = tv_pu * v_map[bid]

        # SLACK BUS FIX: If it's an InfiniteBus, give it massive power limits so it can balance the grid
        # CRITICAL FIX: The key created by the parser is 'modelica_type', not 'type'
        is_infinite_bus = "InfiniteBus" in info.get("modelica_type", "")
        s_nom = 99999.0 if is_infinite_bus else (info.get("s_nom") or info.get("sn_nom", 100.0))

        p_mw = info.get("p_mw") or info.get("p", 0.0)
        q_mvar = info.get("q_mvar") or info.get("q", 0.0)

        net.create_generators(
            id=gid,
            voltage_level_id=f"VL_{bid}",
            bus_id=bid,
            target_p=p_mw,
            target_q=q_mvar,
            voltage_regulator_on=reg_on,
            target_v=tv_kv,
            min_p=-s_nom,
            max_p=s_nom,
        )

    @staticmethod
    def _create_load(net, lid: str, info: Dict):
        bid = info.get("bus_id") or info.get("connected_to")
        if not bid:
            logger.warning(f"Load '{lid}' disconnected. Skipped.")
            return

        p_mw = info.get("p_mw") or info.get("p", 0.0)
        q_mvar = info.get("q_mvar") or info.get("q", 0.0)

        net.create_loads(
            id=lid,
            voltage_level_id=f"VL_{bid}",
            bus_id=bid,
            p0=p_mw,
            q0=q_mvar,
        )

    @staticmethod
    def _create_shunt(net, sid: str, info: Dict, v_map: Dict):
        bid = info.get("bus_id") or info.get("connected_to")
        if not bid or bid not in v_map:
            logger.warning(f"Shunt '{sid}' disconnected. Skipped.")
            return

        un = v_map[bid]
        sn = info.get("sn_ref", 100.0)

        # Priority: Reactive Power Q (MVar) -> Susceptance B (Siemens)
        q_mvar = info.get("q_mvar") or info.get("q", 0.0)
        b_pu = info.get("b_pu", 0.0)

        b_siemens = 0.0

        # If Q is defined (MVar), calculate the equivalent B required at Nominal Voltage
        if abs(q_mvar) > 1e-9:
            b_siemens = q_mvar / (un**2)
            logger.debug(
                f"Shunt '{sid}': Calculated B={b_siemens:.2e} S from Q={q_mvar} MVar (Un={un} kV)"
            )
        else:
            # Fallback to B_pu conversion
            # B_siemens = B_pu * Y_base = B_pu * (S_base / U^2)
            b_siemens = b_pu * sn / (un**2)
            logger.debug(
                f"Shunt '{sid}': Calculated B={b_siemens:.2e} S from B_pu={b_pu} (Sn={sn} MVA)"
            )

        g_siemens = info.get("g_pu", 0.0) * sn / (un**2)

        # Using the DataFrame method as requested in the original structure
        df_shunt = pd.DataFrame(
            index=["id"],
            columns=["id", "voltage_level_id", "bus_id", "model_type", "section_count"],
            data=[(str(sid), f"VL_{bid}", str(bid), "LINEAR", 1)],
        )

        df_linear_model = pd.DataFrame(
            index=["id"],
            columns=["id", "max_section_count", "g_per_section", "b_per_section"],
            data=[(str(sid), 1, g_siemens, b_siemens)],
        )

        # Ensure explicit string types to avoid Java bridge errors
        df_shunt["id"] = df_shunt["id"].astype(str)
        df_shunt["voltage_level_id"] = df_shunt["voltage_level_id"].astype(str)
        df_shunt["bus_id"] = df_shunt["bus_id"].astype(str)
        df_linear_model["id"] = df_linear_model["id"].astype(str)

        net.create_shunt_compensators(shunt_df=df_shunt, linear_model_df=df_linear_model)
