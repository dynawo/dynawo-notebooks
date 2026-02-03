"""
PyPowSybl Converter Module.

This module converts the dictionary-based electrical topology provided by the Parser
into a formal PyPowSybl Network object.
"""

import logging
import pandas as pd  # Added import
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
        bus_nominal_v = {}

        # 1. Buses
        for bid, info in data["buses"].items():
            v = info.get("nominal_v") or 225.0
            bus_nominal_v[bid] = v
            sub_id = f"Sub_{bid}"
            vl_id = f"VL_{bid}"
            network.create_substations(id=sub_id)
            network.create_voltage_levels(
                id=vl_id, substation_id=sub_id, nominal_v=v, topology_kind="BUS_BREAKER"
            )
            network.create_buses(id=bid, voltage_level_id=vl_id)

        # 2. Lines
        for lid, info in data["lines"].items():
            b1, b2 = info.get("bus1"), info.get("bus2")
            if b1 and b2 and b1 in bus_nominal_v and b2 in bus_nominal_v:
                un = bus_nominal_v[b1]
                sn = info.get("sn_ref", 100.0)
                z_base = (un**2) / sn

                network.create_lines(
                    id=lid,
                    voltage_level1_id=f"VL_{b1}",
                    bus1_id=b1,
                    voltage_level2_id=f"VL_{b2}",
                    bus2_id=b2,
                    r=info.get("r_pu", 0.0) * z_base,
                    x=info.get("x_pu", 1e-6) * z_base,
                    g1=0.0,
                    g2=0.0,
                    b1=(info.get("b_pu", 0.0) / z_base) / 2,
                    b2=(info.get("b_pu", 0.0) / z_base) / 2,
                )
            else:
                logger.warning(f"Line '{lid}' incomplete (Bus1:{b1}, Bus2:{b2}). Skipped.")

        # 3. Generators
        for gid, info in data["generators"].items():
            if info.get("is_init_block"):
                continue
            PowsyblConverter._create_generator(network, gid, info, bus_nominal_v)

        # 4. Loads
        for lid, info in data["loads"].items():
            PowsyblConverter._create_load(network, lid, info)

        # 5. Shunts
        for sid, info in data["shunts"].items():
            PowsyblConverter._create_shunt(network, sid, info, bus_nominal_v)

        logger.info("PyPowSybl Network object created successfully.")
        return network

    @staticmethod
    def _create_generator(net, gid: str, info: Dict, v_map: Dict):
        bid = info.get("connected_to")
        if not bid or bid not in v_map:
            logger.warning(f"Generator '{gid}' disconnected. Skipped.")
            return

        reg_on = False
        tv_kv = None
        tv_pu = info.get("target_v")
        if tv_pu and tv_pu > 0:
            reg_on = True
            tv_kv = tv_pu * v_map[bid]

        s_nom = info.get("s_nom", 100.0)
        p_mw = info.get("p_mw", 0.0)

        net.create_generators(
            id=gid,
            voltage_level_id=f"VL_{bid}",
            bus_id=bid,
            target_p=p_mw,
            target_q=info.get("q_mvar", 0.0),
            voltage_regulator_on=reg_on,
            target_v=tv_kv,
            min_p=-s_nom,
            max_p=s_nom,
        )

    @staticmethod
    def _create_load(net, lid: str, info: Dict):
        bid = info.get("connected_to")
        if not bid:
            logger.warning(f"Load '{lid}' disconnected. Skipped.")
            return

        net.create_loads(
            id=lid,
            voltage_level_id=f"VL_{bid}",
            bus_id=bid,
            p0=info.get("p_mw", 0.0),
            q0=info.get("q_mvar", 0.0),
        )

    @staticmethod
    def _create_shunt(net, sid: str, info: Dict, v_map: Dict):
        bid = info.get("connected_to")
        if not bid or bid not in v_map:
            logger.warning(f"Shunt '{sid}' disconnected. Skipped.")
            return

        un = v_map[bid]
        sn = info.get("sn_ref", 100.0)
        q_mvar = info.get("q_mvar", 0.0)

        # Calculate B (Siemens) - Detailed log for physical validation
        b_siemens = 0.0
        if abs(q_mvar) > 1e-9:
            b_siemens = q_mvar / (un**2)
            logger.debug(
                f"Shunt '{sid}': Calculated B={b_siemens:.2e} S from Q={q_mvar} MVar (Un={un} kV)"
            )
        else:
            b_pu = info.get("b_pu", 0.0)
            b_siemens = b_pu * sn / (un**2)
            logger.debug(
                f"Shunt '{sid}': Calculated B={b_siemens:.2e} S from B_pu={b_pu} (Sn={sn} MVA)"
            )

        g_siemens = info.get("g_pu", 0.0) * sn / (un**2)

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

        df_shunt["id"] = df_shunt["id"].astype(str)
        df_shunt["voltage_level_id"] = df_shunt["voltage_level_id"].astype(str)
        df_shunt["bus_id"] = df_shunt["bus_id"].astype(str)
        df_linear_model["id"] = df_linear_model["id"].astype(str)

        net.create_shunt_compensators(shunt_df=df_shunt, linear_model_df=df_linear_model)
