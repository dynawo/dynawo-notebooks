# FILE: src/dynawo_notebooks/Scripts/core/converter.py
"""
PyPowSybl Converter Module.

This module is responsible for converting the parsed electrical topology dictionary
into a strictly typed PyPowSyBl Network object. It handles the grouping of buses
into substations to satisfy transformer connectivity requirements.
"""

import logging
import pandas as pd
import pypowsybl as pp
from typing import Dict, Set

logger = logging.getLogger(__name__)


class PowsyblConverter:
    """
    Utility class that handles the instantiation and population of a PyPowSyBl network
    using extracted topological and parametric data.
    """

    @staticmethod
    def build_network(data: Dict) -> pp.network.Network:
        """
        Constructs a complete PyPowSyBl Network from the raw parsed topology data.

        :param data: A dictionary containing topological elements (buses, lines, etc.).
        :return: A fully instantiated PyPowSybl Network.
        """
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

        # 2. VOLTAGE DISCOVERY & CREATION
        # Dynawo buses often don't have explicit Un. We discover it from connected equipment.
        bus_nominal_v = {}
        if "buses" in data:
            for bid, info in data["buses"].items():
                # 2.1 Try to get explicit voltage
                v = info.get("nominal_v")

                # 2.2 Discovery from Transformers (rated_u1/u2)
                if not v or v == 0.0:
                    for tid, t_info in data.get("transformers", {}).items():
                        if t_info.get("bus1") == bid and t_info.get("rated_u1"):
                            v = t_info.get("rated_u1")
                            break
                        if t_info.get("bus2") == bid and t_info.get("rated_u2"):
                            v = t_info.get("rated_u2")
                            break

                # 2.3 Discovery from Generators (nominal_v)
                if not v or v == 0.0:
                    for gid, g_info in data.get("generators", {}).items():
                        if g_info.get("bus") == bid and g_info.get("nominal_v"):
                            v = g_info.get("nominal_v")
                            break

                # 2.4 Last resort: Nordic naming convention or generic default
                if not v or v == 0.0:
                    if bid.startswith("bus_4"):
                        v = 400.0
                    elif bid.startswith("bus_2"):
                        v = 220.0
                    elif bid.startswith("bus_1"):
                        v = 130.0
                    elif "BG" in bid:
                        v = 20.0
                    else:
                        v = 225.0

                bus_nominal_v[bid] = v
                sub_assigned = bus_to_sub[bid]

                network.create_voltage_levels(
                    id=f"VL_{bid}",
                    substation_id=f"Sub_{sub_assigned}",
                    nominal_v=v,
                    low_voltage_limit=v * 0.8,  # Minimum voltage limit (80%)
                    high_voltage_limit=v * 1.2,  # Maximum voltage limit (120%)
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
    def _create_line(network: pp.network.Network, lid: str, info: Dict, bus_v: Dict) -> None:
        """
        Creates an AC line in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param lid: The unique identifier for the line.
        :param info: Dictionary containing the line's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
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
    def _create_generator(network: pp.network.Network, gid: str, info: Dict, bus_v: Dict) -> None:
        """
        Creates a generator in the PyPowSyBl network, properly configuring slack bus behavior.

        :param network: The PyPowSyBl network instance.
        :param gid: The unique identifier for the generator.
        :param info: Dictionary containing the generator's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
        bid = info.get("bus")
        sn = info.get("sn_nom", 100.0)
        p_mw = info.get("p") or (info.get("p_pu", 0.0) * sn)
        is_slack = "infinite" in gid.lower() or "slack" in gid.lower()

        # If it is a Slack Bus and its active power is 0 MW, we assign a dummy initial value (1.0 MW).
        # This provides a "participation factor" > 0% so that OpenLoadFlow
        # accepts sending power mismatch to it. The value will be overwritten upon convergence.

        if is_slack and p_mw == 0.0:
            p_mw = 1.0

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
    def _create_load(network: pp.network.Network, lid: str, info: Dict, bus_v: Dict) -> None:
        """
        Creates a load in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param lid: The unique identifier for the load.
        :param info: Dictionary containing the load's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
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
    def _create_shunt(network: pp.network.Network, sid: str, info: Dict, bus_v: Dict) -> None:
        """
        Creates a linear shunt compensator in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param sid: The unique identifier for the shunt.
        :param info: Dictionary containing the shunt's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
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
    def _create_transformer(
        network: pp.network.Network, tid: str, info: Dict, bus_v: Dict, bus_to_sub: Dict
    ) -> None:
        """
        Creates a two-windings transformer in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param tid: The unique identifier for the transformer.
        :param info: Dictionary containing the transformer's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        :param bus_to_sub: Dictionary mapping bus IDs to their assigned substations.
        """
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            return

        # Priority for Transformer Voltages:
        # 1. rated_u1/u2 from JSON (if Parser extracted it)
        # 2. Discovered nominal voltage of the connected bus
        un1 = info.get("rated_u1") or bus_v.get(b1, 225.0)
        un2 = info.get("rated_u2") or bus_v.get(b2, 225.0)
        sn = info.get("sn_nom", 100.0)

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
            rated_u2=un2,
            rated_s=sn,
        )
