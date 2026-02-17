# FILE: src/dynawo_notebooks/Scripts/core/converter.py
"""
PyPowSybl Converter Module.
Groups buses into substations to satisfy transformer connectivity requirements.
"""

import logging
import pandas as pd
import pypowsybl as pp
from typing import Dict, Set

logger = logging.getLogger(__name__)


class PowsyblConverter:
    @staticmethod
    def build_network(data: Dict) -> pp.network.Network:
        logger.info("Initializing PyPowSybl Network construction...")
        network = pp.network.create_empty()

        # 1. SUBSTATION GROUPING LOGIC
        # PyPowSyBl requires both sides of a transformer to be in the same Substation.
        # We use a mapping to group buses that are connected via transformers.
        bus_to_sub = {bid: bid for bid in data.get("buses", {})}

        if "transformers" in data:
            for tid, info in data["transformers"].items():
                b1, b2 = info.get("bus1"), info.get("bus2")
                if b1 in bus_to_sub and b2 in bus_to_sub:
                    # Union operation: assign b2 and all its peers to b1's substation
                    old_sub = bus_to_sub[b2]
                    new_sub = bus_to_sub[b1]
                    for b, s in bus_to_sub.items():
                        if s == old_sub:
                            bus_to_sub[b] = new_sub

        # Unique substations to create
        unique_subs = set(bus_to_sub.values())
        for sub_id in unique_subs:
            network.create_substations(id=f"Sub_{sub_id}")

        # 2. VOLTAGE LEVELS & BUSES
        bus_nominal_v = {}
        if "buses" in data:
            for bid, info in data["buses"].items():
                v = info.get("nominal_v") or 225.0
                bus_nominal_v[bid] = v
                sub_assigned = bus_to_sub[bid]

                network.create_voltage_levels(
                    id=f"VL_{bid}",
                    substation_id=f"Sub_{sub_assigned}",
                    nominal_v=v,
                    topology_kind="BUS_BREAKER",
                )
                network.create_buses(id=bid, voltage_level_id=f"VL_{bid}")

        # 3. LINES
        for lid, info in data.get("lines", {}).items():
            PowsyblConverter._create_line(network, lid, info, bus_nominal_v)

        # 4. GENERATORS
        for gid, info in data.get("generators", {}).items():
            PowsyblConverter._create_generator(network, gid, info, bus_nominal_v)

        # 5. LOADS
        for lid, info in data.get("loads", {}).items():
            PowsyblConverter._create_load(network, lid, info, bus_nominal_v)

        # 6. SHUNTS
        for sid, info in data.get("shunts", {}).items():
            PowsyblConverter._create_shunt(network, sid, info, bus_nominal_v)

        # 7. TRANSFORMERS
        for tid, info in data.get("transformers", {}).items():
            PowsyblConverter._create_transformer(network, tid, info, bus_nominal_v, bus_to_sub)

        return network

    @staticmethod
    def _create_line(network, lid, info, bus_v):
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            return
        sn, un = info.get("sn_nom", 100.0), bus_v.get(b1, 225.0)
        z_base = (un**2) / sn
        network.create_lines(
            id=str(lid),
            bus1_id=str(b1),
            bus2_id=str(b2),
            r=info.get("r_pu", 0.0) * z_base,
            x=info.get("x_pu", 0.001) * z_base,
            g1=0,
            b1=(info.get("b_pu", 0.0) / z_base) / 2,
            g2=0,
            b2=(info.get("b_pu", 0.0) / z_base) / 2,
        )

    @staticmethod
    def _create_generator(network, gid, info, bus_v):
        bid = info.get("bus")
        sn = info.get("sn_nom", 100.0)
        p_mw = info.get("p") or (info.get("p_pu", 0.0) * sn)
        is_slack = "infinite" in gid.lower() or "slack" in gid.lower()
        network.create_generators(
            id=str(gid),
            voltage_level_id=f"VL_{bid}",
            bus_id=str(bid),
            target_p=p_mw,
            target_v=info.get("u_pu", 1.0) * bus_v.get(bid, 225.0),
            voltage_regulator_on=is_slack,
            target_q=0.0,
            min_p=-9999 if is_slack else p_mw,
            max_p=9999 if is_slack else p_mw,
        )

    @staticmethod
    def _create_load(network, lid, info, bus_v):
        bid = info.get("bus")
        sn = info.get("sn_nom", 100.0)
        network.create_loads(
            id=str(lid),
            voltage_level_id=f"VL_{bid}",
            bus_id=str(bid),
            p0=info.get("p_pu", 0.0) * sn,
            q0=info.get("q_pu", 0.0) * sn,
        )

    @staticmethod
    def _create_shunt(network, sid, info, bus_v):
        bid = info.get("bus")
        un, sn = bus_v.get(bid, 225.0), info.get("sn_nom", 100.0)
        q_mvar = info.get("q_pu", 0.0) * sn
        b_s = q_mvar / (un**2) if q_mvar != 0 else 0.0

        shunt_df = pd.DataFrame(
            {
                "id": [str(sid)],
                "voltage_level_id": [f"VL_{bid}"],
                "bus_id": [str(bid)],
                "model_type": ["LINEAR"],
                "section_count": [1],
            }
        ).set_index("id")

        linear_model_df = pd.DataFrame(
            {
                "id": [str(sid)],
                "g_per_section": [0.0],
                "b_per_section": [b_s],
                "max_section_count": [1],
            }
        ).set_index("id")

        network.create_shunt_compensators(shunt_df, linear_model_df)

    @staticmethod
    def _create_transformer(network, tid, info, bus_v, bus_to_sub):
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            return
        sn, un1 = info.get("sn_nom", 100.0), bus_v.get(b1, 225.0)
        z_base = (un1**2) / sn

        network.create_2_windings_transformers(
            id=str(tid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            r=info.get("r_pu", 0.0) * z_base,
            x=info.get("x_pu", 0.1) * z_base,
            g=0,
            b=0,
            rated_u1=un1,
            rated_u2=bus_v.get(b2, 225.0),
            rated_s=sn,
        )
