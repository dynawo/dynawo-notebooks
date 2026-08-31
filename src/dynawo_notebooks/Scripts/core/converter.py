"""
PyPowSyBl Converter Module.

This module is responsible for converting the parsed electrical topology dictionary
into a strictly typed PyPowSyBl Network object. It handles the grouping of buses
into substations to satisfy transformer connectivity requirements.
"""

import json
import logging
from pathlib import Path
from typing import Dict, Set, Any

import pandas as pd
import pypowsybl as pp
from dynawo_notebooks.Scripts.core.powerflow import PowerFlowRunner

logger = logging.getLogger(__name__)


class PowsyblConverter:
    """
    Utility class that handles the instantiation and population of a PyPowSyBl network
    using extracted topological and parametric data.
    """

    @staticmethod
    def _load_voltage_mapping(filename: str = "voltage_mapping.json") -> Dict[str, float]:
        """
        Loads the voltage mapping dictionary from an external JSON configuration file.
        Provides a safe fallback to default values if the configuration file is missing.

        :param filename: The name of the JSON file containing the voltage mapping rules.
        :return: A dictionary mapping string prefixes to nominal voltage values (float).
        """
        filepath = Path(__file__).resolve().parent / filename

        try:
            with open(filepath, "r", encoding="utf-8") as f:
                mapping = json.load(f)
            logger.debug(f"Loaded {len(mapping)} voltage rules from {filename}")
            return mapping
        except Exception as e:
            logger.warning(
                f"Failed to load voltage mapping from {filepath}. Using defaults. Error: {e}"
            )
            return {"bus_4": 400.0, "bus_2": 220.0, "bus_1": 130.0, "BG": 20.0, "default": 225.0}

    @staticmethod
    def build_network(data: Dict[str, Any]) -> pp.network.Network:
        """
        Constructs a complete PyPowSyBl Network from the raw parsed topology data.

        :param data: A dictionary containing topological elements (buses, lines, etc.).
        :return: A fully instantiated PyPowSybl Network.
        """
        logger.info("Initializing PyPowSyBl Network construction...")
        network = pp.network.create_empty()

        # Load external configuration for voltage naming conventions
        voltage_mapping = PowsyblConverter._load_voltage_mapping()

        # 1. Substation Grouping Logic
        bus_to_sub: Dict[str, str] = {bid: bid for bid in data.get("buses", {})}

        if "transformers" in data:
            for tid, info in data["transformers"].items():
                b1, b2 = info.get("bus1"), info.get("bus2")
                if b1 in bus_to_sub and b2 in bus_to_sub:
                    old_sub = bus_to_sub[b2]
                    new_sub = bus_to_sub[b1]
                    for b, s in bus_to_sub.items():
                        if s == old_sub:
                            bus_to_sub[b] = new_sub

        # Unique substations to create
        unique_subs: Set[str] = set(bus_to_sub.values())
        for sub_id in unique_subs:
            network.create_substations(id=f"Sub_{sub_id}")

        # 2. Voltage Discovery & Creation
        bus_nominal_v: Dict[str, float] = {}

        def is_valid_kv(vol: Any) -> bool:
            try:
                return vol is not None and float(vol) > 1.5
            except (ValueError, TypeError):
                return False

        if "buses" in data:
            for bid, info in data["buses"].items():
                v = info.get("nominal_v")

                if not is_valid_kv(v):
                    for tid, t_info in data.get("transformers", {}).items():
                        if t_info.get("bus1") == bid and is_valid_kv(t_info.get("rated_u1")):
                            v = t_info.get("rated_u1")
                            break
                        if t_info.get("bus2") == bid and is_valid_kv(t_info.get("rated_u2")):
                            v = t_info.get("rated_u2")
                            break

                if not is_valid_kv(v):
                    for gid, g_info in data.get("generators", {}).items():
                        if g_info.get("bus") == bid and is_valid_kv(g_info.get("nominal_v")):
                            v = g_info.get("nominal_v")
                            break

                if not is_valid_kv(v):
                    for lid, l_info in data.get("loads", {}).items():
                        if l_info.get("bus") == bid and is_valid_kv(l_info.get("nominal_v")):
                            v = l_info.get("nominal_v")
                            break

                if not is_valid_kv(v):
                    for lid, l_info in data.get("lines", {}).items():
                        if (
                            l_info.get("bus1") == bid or l_info.get("bus2") == bid
                        ) and is_valid_kv(l_info.get("nominal_v")):
                            v = l_info.get("nominal_v")
                            break

                if not is_valid_kv(v):
                    for prefix, mapped_voltage in voltage_mapping.items():
                        if prefix != "default" and prefix in bid:
                            v = mapped_voltage
                            break
                    if not is_valid_kv(v):
                        v = voltage_mapping.get("default", 225.0)

                try:
                    v = float(v)
                    if v > 1000.0:
                        v = v / 1000.0
                except (ValueError, TypeError):
                    logger.warning(
                        f"Could not cast voltage '{v}' to float for bus {bid}. Using default."
                    )
                    v = float(voltage_mapping.get("default", 225.0))

                bus_nominal_v[bid] = v
                sub_assigned = bus_to_sub[bid]

                network.create_voltage_levels(
                    id=f"VL_{bid}",
                    substation_id=f"Sub_{sub_assigned}",
                    nominal_v=v,
                    low_voltage_limit=v * 0.8,
                    high_voltage_limit=v * 1.2,
                    topology_kind="BUS_BREAKER",
                )

                network.create_buses(id=bid, voltage_level_id=f"VL_{bid}")

        # 3. Lines
        for lid, info in data.get("lines", {}).items():
            PowsyblConverter._create_line(network, lid, info, bus_nominal_v)

        total_load_p = sum(
            abs(info.get("p_pu", 0.0) * info.get("sn_nom", 100.0))
            for info in data.get("loads", {}).values()
        )
        total_gen_p = sum(
            abs(info.get("p", info.get("p_pu", 0.0) * info.get("sn_nom", 100.0)))
            for info in data.get("generators", {}).values()
        )
        estimated_mismatch = max(total_load_p - total_gen_p, 100.0)

        # 4. Generators
        for gid, info in data.get("generators", {}).items():
            PowsyblConverter._create_generator(
                network, gid, info, bus_nominal_v, estimated_mismatch
            )

        # 5. Loads
        for lid, info in data.get("loads", {}).items():
            PowsyblConverter._create_load(network, lid, info, bus_nominal_v)

        # 6. Shunts
        for sid, info in data.get("shunts", {}).items():
            PowsyblConverter._create_shunt(network, sid, info, bus_nominal_v)

        # 7. Transformers
        for tid, info in data.get("transformers", {}).items():
            PowsyblConverter._create_transformer(network, tid, info, bus_nominal_v, bus_to_sub)

        return network

    @staticmethod
    def _create_line(
        network: pp.network.Network, lid: str, info: Dict[str, Any], bus_v: Dict[str, float]
    ) -> None:
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
        sn = info.get("sn_nom", 100.0)
        un = bus_v.get(b1, 225.0)
        z_base = (un**2) / sn

        is_pu = "r_pu" in info or "x_pu" in info

        raw_r = info.get("r_pu", info.get("r", 0.0))
        raw_x = info.get("x_pu", info.get("x", 0.001))
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        raw_r = max(float(raw_r), 1e-6)

        if is_pu:
            r_ohm = raw_r * z_base
            x_ohm = raw_x * z_base
            b_sie = -float(raw_b) / z_base
            g_sie = float(raw_g) / z_base
        else:
            r_ohm = raw_r
            x_ohm = raw_x
            b_sie = -float(raw_b)
            g_sie = float(raw_g)

        network.create_lines(
            id=str(lid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            r=r_ohm,
            x=x_ohm,
            g1=g_sie / 2,
            b1=b_sie / 2,
            g2=g_sie / 2,
            b2=b_sie / 2,
        )

    @staticmethod
    def _create_generator(
        network: pp.network.Network,
        gid: str,
        info: Dict[str, Any],
        bus_v: Dict[str, float],
        slack_warm_start_mw: float = 1.0,
    ) -> None:
        """
        Creates a generator in the PyPowSyBl network, properly configuring slack bus behavior.
        Incorporates a Warm Start active power estimation to prevent Newton-Raphson divergence.

        :param network: The PyPowSyBl network instance.
        :param gid: The unique identifier for the generator.
        :param info: Dictionary containing the generator's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        :param slack_warm_start_mw: Initial active power injected by the slack bus (MW) to prevent divergence.
        """
        bid = info.get("bus")

        sn = info.get("sn_nom", 100.0)
        if "genpv" in gid.lower() and sn == 100.0:
            sn = 6.0

        p_mw = info.get("p") or (info.get("p_pu", 0.0) * sn)

        is_slack = False
        valid_slack_identifiers = PowerFlowRunner.load_slack_mapping()
        gid_str = str(gid).lower()

        if any(identifier in gid_str for identifier in valid_slack_identifiers):
            is_slack = True

        if is_slack and p_mw == 0.0:
            p_mw = slack_warm_start_mw

        modelica_type = info.get("modelica_type", "").lower()
        is_pq = "pq" in modelica_type

        is_regulator_on = True
        if is_pq and not is_slack:
            is_regulator_on = False

        target_q = 0.0
        if is_pq:
            target_q = info.get("q_mvar") or info.get("q", 0.0)
            if "q_pu" in info:
                target_q = info["q_pu"] * sn

        base_v = bus_v.get(bid)
        if not base_v or base_v == 0.0:
            base_v = 130.0

        network.create_generators(
            id=str(gid),
            voltage_level_id=f"VL_{bid}",
            bus_id=str(bid),
            target_p=abs(p_mw),
            target_q=target_q,
            target_v=info.get("u_pu", 1.0) * base_v,
            voltage_regulator_on=is_regulator_on,
            min_p=-9999.0 if is_slack else abs(p_mw),
            max_p=9999.0 if is_slack else abs(p_mw),
        )

        min_q_val = -99999.0
        max_q_val = 99999.0

        q_limits_df = pd.DataFrame(
            {"id": [str(gid)], "min_q": [min_q_val], "max_q": [max_q_val]}
        ).set_index("id")

        network.create_minmax_reactive_limits(q_limits_df)

    @staticmethod
    def _create_load(
        network: pp.network.Network, lid: str, info: Dict[str, Any], bus_v: Dict[str, float]
    ) -> None:
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
    def _create_shunt(
        network: pp.network.Network, sid: str, info: Dict[str, Any], bus_v: Dict[str, float]
    ) -> None:
        """
        Creates a linear shunt compensator in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param sid: The unique identifier for the shunt.
        :param info: Dictionary containing the shunt's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
        bid = info.get("bus")

        un = bus_v.get(bid, 225.0)
        sn = info.get("sn_nom", 100.0)

        if un > 1000.0:
            un = un / 1000.0

        z_base = (un**2) / sn if sn != 0 else 1.0

        is_pu = "b_pu" in info or "g_pu" in info
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        if is_pu:
            b_sie = -float(raw_b) / z_base
            g_sie = float(raw_g) / z_base
        else:
            b_sie = -float(raw_b)
            g_sie = float(raw_g)

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
                "g_per_section": [g_sie],
                "b_per_section": [b_sie],
                "max_section_count": [1],
            }
        ).set_index("id")

        network.create_shunt_compensators(shunt_df, linear_model_df)

    @staticmethod
    def _create_transformer(
        network: pp.network.Network,
        tid: str,
        info: Dict[str, Any],
        bus_v: Dict[str, float],
        bus_to_sub: Dict[str, str] = None,
    ) -> None:
        """
        Creates a 2-winding transformer in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param tid: The unique identifier for the transformer.
        :param info: Dictionary containing the transformer's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        :param bus_to_sub: Dictionary mapping bus IDs to substation IDs.
        """
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            return

        un1 = bus_v.get(b1, 225.0)
        un2 = bus_v.get(b2, 225.0)

        if un1 > 1000.0:
            un1 = un1 / 1000.0
        if un2 > 1000.0:
            un2 = un2 / 1000.0

        sn_comp = info.get("sn_nom", 100.0)

        base_ratio = info.get("ratio", 1.0)
        tap_pos = info.get("tap0", 6.0)
        n_tap = info.get("n_tap", 13.0)

        rho_max = info.get("rho_max")
        rho_min = info.get("rho_min")

        rated_u1_base = un1 / base_ratio if base_ratio != 0.0 else un1

        is_pu = "r_pu" in info or "x_pu" in info

        raw_r = info.get("r_pu", info.get("r", 0.0))
        raw_x = info.get("x_pu", info.get("x", 0.001))
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        raw_r = max(float(raw_r), 1e-6)

        z_base = ((un1 * base_ratio) ** 2) / sn_comp if base_ratio != 0.0 else (un1**2) / sn_comp

        if is_pu:
            r_ohm = raw_r * z_base
            x_ohm = raw_x * z_base
            b_sie = -float(raw_b) / z_base
            g_sie = float(raw_g) / z_base
        else:
            r_ohm = raw_r
            x_ohm = raw_x
            b_sie = -float(raw_b)
            g_sie = float(raw_g)

        network.create_2_windings_transformers(
            id=str(tid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            rated_s=sn_comp,
            rated_u1=rated_u1_base,
            rated_u2=un2,
            r=r_ohm,
            x=x_ohm,
            g=g_sie,
            b=b_sie,
        )

        if rho_max is not None and rho_min is not None and n_tap > 1:
            rtc_df = pd.DataFrame(
                {
                    "id": [str(tid)],
                    "low_tap": [0],
                    "tap": [int(tap_pos)],
                    "regulating": [False],
                }
            ).set_index("id")

            network.create_ratio_tap_changers(rtc_df)

            steps_data = []
            step_size = (rho_max - rho_min) / (n_tap - 1)

            for i in range(int(n_tap)):
                steps_data.append(
                    {
                        "id": str(tid),
                        "rho": rho_min + (i * step_size),
                        "r": r_ohm,
                        "x": x_ohm,
                        "g": g_sie,
                        "b": b_sie,
                    }
                )

            steps_df = pd.DataFrame(steps_data).set_index("id")
            network.update_ratio_tap_changer_steps(steps_df)
