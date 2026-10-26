"""
PyPowSyBl Converter Module.

This module is responsible for converting the parsed electrical topology dictionary
into a strictly typed PyPowSyBl Network object. It handles the grouping of buses
into substations to satisfy transformer connectivity requirements.

Per-unit conventions of the Dynawo models (base SnRef = 100 MVA):

- Lines: R + jX in series, and the half-admittance G + jB on each side (positive B is
  capacitive).
- Transformers (fixed ratio): ideal ratio rTfoPu = U2/U1 on side 1, then R + jX and
  the admittance G + jB, both in base of the side 2 nominal voltage.
- Shunts: receptor convention, Q = B U^2 (negative B is capacitive).
- Injections: active and reactive powers already converted by the parser to the
  generator convention for generators and to the receptor convention for loads.
"""

import json
import logging
from collections import Counter
from pathlib import Path
from typing import Dict, Any, List, Optional

import pandas as pd
import pypowsybl as pp
from python_pypowsybl.Code.core.powerflow import PowerFlowRunner

logger = logging.getLogger(__name__)

S_REF_MVA = 100.0
# Generous limits used when the Modelica model does not define them
UNBOUNDED_POWER = 99999.0


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
        :return: A dictionary mapping bus name fragments to nominal voltage values (float).
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
        :return: A fully instantiated PyPowSyBl Network.
        """
        logger.info("Initializing PyPowSyBl Network construction...")

        if "source_xiidm" in data:
            network = pp.network.load(str(data["source_xiidm"]))
        else:
            network = pp.network.create_empty()

        buses = data.get("buses", {})
        bus_nominal_v = PowsyblConverter._assign_nominal_voltages(data)

        # 1. Substation grouping: the two sides of a transformer must share a substation
        bus_to_sub: Dict[str, str] = {bid: bid for bid in buses}
        for info in data.get("transformers", {}).values():
            b1, b2 = info.get("bus1"), info.get("bus2")
            if b1 in bus_to_sub and b2 in bus_to_sub:
                old_sub, new_sub = bus_to_sub[b2], bus_to_sub[b1]
                for bus, sub in bus_to_sub.items():
                    if sub == old_sub:
                        bus_to_sub[bus] = new_sub

        for sub_id in sorted(set(bus_to_sub.values())):
            network.create_substations(id=f"Sub_{sub_id}")

        # 2. Voltage levels and buses
        for bid in buses:
            v = bus_nominal_v[bid]
            network.create_voltage_levels(
                id=f"VL_{bid}",
                substation_id=f"Sub_{bus_to_sub[bid]}",
                nominal_v=v,
                low_voltage_limit=v * 0.8,
                high_voltage_limit=v * 1.2,
                topology_kind="BUS_BREAKER",
            )
            network.create_buses(id=bid, voltage_level_id=f"VL_{bid}")

        # 3. Branches and shunts
        for lid, info in data.get("lines", {}).items():
            PowsyblConverter._create_line(network, lid, info, bus_nominal_v)
        for tid, info in data.get("transformers", {}).items():
            PowsyblConverter._create_transformer(network, tid, info, bus_nominal_v)
        for sid, info in data.get("shunts", {}).items():
            PowsyblConverter._create_shunt(network, sid, info, bus_nominal_v)

        # 4. Injections
        for lid, info in data.get("loads", {}).items():
            PowsyblConverter._create_load(network, lid, info)

        generators = data.get("generators", {})
        slack_id = PowsyblConverter._select_slack(generators)
        slack_takes_balance = not any(
            info.get("participation_factor") for info in generators.values()
        )
        for gid, info in generators.items():
            if gid == slack_id and info.get("p_pu") is None:
                # OpenLoadFlow discards the generators whose target is exactly zero from the
                # balance distribution: the slack starts from an estimate of the balance
                info = dict(info, p_pu=PowsyblConverter._estimate_balance(data, slack_id))
            PowsyblConverter._create_generator(
                network, gid, info, bus_nominal_v, gid == slack_id, slack_takes_balance
            )

        if slack_id:
            slack_bus = generators[slack_id]["bus"]
            network.create_extensions(
                "slackTerminal", voltage_level_id=f"VL_{slack_bus}", element_id=slack_id
            )
            logger.info(f"Slack generator: {slack_id} (bus {slack_bus}).")

        return network

    # ------------------------------------------------------------------ #
    # Voltage levels
    # ------------------------------------------------------------------ #

    @staticmethod
    def _assign_nominal_voltages(data: Dict[str, Any]) -> Dict[str, float]:
        """
        Assigns a nominal voltage to every bus.

        Buses connected by lines form a voltage zone, which must share a single nominal
        voltage. The zone voltage is taken, in order of preference, from the voltages
        declared by the buses, from the impedance bases used by the parameters of its
        lines, shunts and transformers (side 2), and finally from the bus name rules of
        voltage_mapping.json. The per-unit results of the load flow do not depend on
        this choice, since every conversion uses the same voltages.

        :param data: The parsed topology.
        :return: A dictionary mapping each bus to its nominal voltage in kV.
        """
        buses = list(data.get("buses", {}))
        parent = {bus: bus for bus in buses}

        def find(bus: str) -> str:
            while parent[bus] != bus:
                parent[bus] = parent[parent[bus]]
                bus = parent[bus]
            return bus

        for info in data.get("lines", {}).values():
            b1, b2 = info.get("bus1"), info.get("bus2")
            if b1 in parent and b2 in parent:
                parent[find(b1)] = find(b2)

        hints: Dict[str, List[float]] = {}

        def add_hint(bus: Optional[str], value: Optional[float]) -> None:
            if bus in parent and value is not None and value > 1.5:
                hints.setdefault(find(bus), []).append(float(value))

        for bid, info in data.get("buses", {}).items():
            add_hint(bid, info.get("nominal_v"))
        for info in data.get("lines", {}).values():
            add_hint(info.get("bus1"), info.get("base_kv"))
        for info in data.get("shunts", {}).values():
            add_hint(info.get("bus"), info.get("base_kv"))
        for info in data.get("transformers", {}).values():
            add_hint(info.get("bus2"), info.get("base_kv"))

        voltage_mapping = PowsyblConverter._load_voltage_mapping()
        default_v = float(voltage_mapping.get("default", 225.0))

        def mapped_voltage(bus: str) -> Optional[float]:
            for prefix, value in voltage_mapping.items():
                if prefix != "default" and prefix in bus:
                    return float(value)
            return None

        zones: Dict[str, List[str]] = {}
        for bus in buses:
            zones.setdefault(find(bus), []).append(bus)

        nominal: Dict[str, float] = {}
        for root, members in zones.items():
            zone_hints = hints.get(root, [])
            if zone_hints:
                counts = Counter(zone_hints)
                value = counts.most_common(1)[0][0]
                if len(counts) > 1:
                    logger.warning(
                        f"Inconsistent voltage bases {sorted(counts)} kV in the zone of bus "
                        f"{members[0]}: {value} kV is used."
                    )
            else:
                mapped = (mapped_voltage(bus) for bus in members)
                value = next((voltage for voltage in mapped if voltage), default_v)
            for bus in members:
                nominal[bus] = value
        return nominal

    # ------------------------------------------------------------------ #
    # Branches and shunts
    # ------------------------------------------------------------------ #

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
            logger.warning(f"Line {lid} is not connected on both sides and is skipped.")
            return
        z_base = bus_v[b1] ** 2 / S_REF_MVA

        network.create_lines(
            id=str(lid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            r=float(info.get("r_pu", 0.0)) * z_base,
            x=float(info.get("x_pu", 0.0)) * z_base,
            g1=float(info.get("g_pu", 0.0)) / z_base,
            b1=float(info.get("b_pu", 0.0)) / z_base,
            g2=float(info.get("g_pu", 0.0)) / z_base,
            b2=float(info.get("b_pu", 0.0)) / z_base,
        )

    @staticmethod
    def _create_transformer(
        network: pp.network.Network, tid: str, info: Dict[str, Any], bus_v: Dict[str, float]
    ) -> None:
        """
        Creates a 2-winding transformer in the PyPowSyBl network. The rated voltages
        reproduce the per-unit ratio (rated_u2 / rated_u1 = ratio * U2Nom / U1Nom) and
        the impedance is converted with the side 2 nominal voltage.

        :param network: The PyPowSyBl network instance.
        :param tid: The unique identifier for the transformer.
        :param info: Dictionary containing the transformer's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            logger.warning(f"Transformer {tid} is not connected on both sides and is skipped.")
            return
        u1, u2 = bus_v[b1], bus_v[b2]
        z_base = u2**2 / S_REF_MVA

        network.create_2_windings_transformers(
            id=str(tid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            rated_s=S_REF_MVA,
            rated_u1=u1,
            rated_u2=float(info.get("ratio", 1.0)) * u2,
            r=float(info.get("r_pu", 0.0)) * z_base,
            x=float(info.get("x_pu", 0.0)) * z_base,
            g=float(info.get("g_pu", 0.0)) / z_base,
            b=float(info.get("b_pu", 0.0)) / z_base,
        )

    @staticmethod
    def _create_shunt(
        network: pp.network.Network, sid: str, info: Dict[str, Any], bus_v: Dict[str, float]
    ) -> None:
        """
        Creates a linear shunt compensator in the PyPowSyBl network. The Dynawo
        susceptance follows the receptor convention (Q = B U^2), the IIDM one the
        generator convention, hence the change of sign.

        :param network: The PyPowSyBl network instance.
        :param sid: The unique identifier for the shunt.
        :param info: Dictionary containing the shunt's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
        bid = info.get("bus")
        if not bid:
            logger.warning(f"Shunt {sid} is not connected and is skipped.")
            return
        z_base = bus_v[bid] ** 2 / S_REF_MVA

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
                "g_per_section": [float(info.get("g_pu", 0.0)) / z_base],
                "b_per_section": [-float(info.get("b_pu", 0.0)) / z_base],
                "max_section_count": [1],
            }
        ).set_index("id")

        network.create_shunt_compensators(shunt_df, linear_model_df)

    # ------------------------------------------------------------------ #
    # Injections
    # ------------------------------------------------------------------ #

    @staticmethod
    def _create_load(network: pp.network.Network, lid: str, info: Dict[str, Any]) -> None:
        """
        Creates a load in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param lid: The unique identifier for the load.
        :param info: Dictionary containing the load's parameters (receptor convention).
        """
        bid = info.get("bus")
        if not bid:
            logger.warning(f"Load {lid} is not connected and is skipped.")
            return
        network.create_loads(
            id=str(lid),
            voltage_level_id=f"VL_{bid}",
            bus_id=str(bid),
            p0=float(info.get("p_pu", 0.0)) * S_REF_MVA,
            q0=float(info.get("q_pu", 0.0)) * S_REF_MVA,
        )

    @staticmethod
    def _select_slack(generators: Dict[str, Dict[str, Any]]) -> Optional[str]:
        """
        Selects the generator holding the slack bus: an infinite bus or a source without
        active power set point first, then the generators matching the identifiers of
        slack_bus_mapping.json, and finally the largest participating generator.

        :param generators: Parsed generators.
        :return: The identifier of the slack generator, or None if there is no generator.
        """
        connected = {gid: info for gid, info in generators.items() if info.get("bus")}
        if not connected:
            return None

        candidates = [gid for gid, info in connected.items() if info.get("slack")]
        if candidates:
            if len(candidates) > 1:
                logger.warning(
                    f"Several sources could hold the slack bus {candidates}: "
                    f"{candidates[0]} is used."
                )
            return candidates[0]

        identifiers = PowerFlowRunner.load_slack_mapping()
        for gid in connected:
            if any(identifier in gid.lower() for identifier in identifiers):
                return gid

        return max(
            connected,
            key=lambda gid: (
                connected[gid].get("participation_factor") or 0.0,
                abs(connected[gid].get("p_pu") or 0.0),
            ),
        )

    @staticmethod
    def _estimate_balance(data: Dict[str, Any], slack_id: str) -> float:
        """
        Estimates the active power of the slack generator (pu, generator convention) as
        the difference between the loads and the other generators, losses excluded.
        The estimate is never zero, so that the slack takes part in the balance.

        :param data: The parsed topology.
        :param slack_id: The identifier of the slack generator.
        :return: The estimated active power in pu (base SnRef).
        """
        loads = sum(info.get("p_pu", 0.0) for info in data.get("loads", {}).values())
        generation = sum(
            info.get("p_pu") or 0.0
            for gid, info in data.get("generators", {}).items()
            if gid != slack_id
        )
        estimate = loads - generation
        return estimate if abs(estimate) * S_REF_MVA >= 1.0 else 1.0 / S_REF_MVA

    @staticmethod
    def _create_generator(
        network: pp.network.Network,
        gid: str,
        info: Dict[str, Any],
        bus_v: Dict[str, float],
        is_slack: bool,
        slack_takes_balance: bool,
    ) -> None:
        """
        Creates a generator in the PyPowSyBl network.

        :param network: The PyPowSyBl network instance.
        :param gid: The unique identifier for the generator.
        :param info: Dictionary containing the generator's parameters (generator convention).
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        :param is_slack: Whether the generator holds the slack bus.
        :param slack_takes_balance: Whether the slack generator takes the whole balance
            (no participation factors in the model).
        """
        bid = info.get("bus")
        if not bid:
            logger.warning(f"Generator {gid} is not connected and is skipped.")
            return

        p_pu = info.get("p_pu")
        if p_pu is None and not is_slack:
            logger.warning(f"Generator {gid}: no active power set point, 0 MW is used.")
        q_pu = info.get("q_pu")
        voltage_control = bool(info.get("voltage_control")) or is_slack
        u_pu = info.get("u_pu") if info.get("u_pu") is not None else 1.0

        network.create_generators(
            id=str(gid),
            voltage_level_id=f"VL_{bid}",
            bus_id=str(bid),
            target_p=(p_pu or 0.0) * S_REF_MVA,
            target_q=(q_pu or 0.0) * S_REF_MVA,
            target_v=u_pu * bus_v[bid],
            voltage_regulator_on=voltage_control,
            min_p=-UNBOUNDED_POWER,
            max_p=UNBOUNDED_POWER,
        )

        q_min = info.get("q_min_pu")
        q_max = info.get("q_max_pu")
        q_limits_df = pd.DataFrame(
            {
                "id": [str(gid)],
                "min_q": [q_min * S_REF_MVA if q_min is not None else -UNBOUNDED_POWER],
                "max_q": [q_max * S_REF_MVA if q_max is not None else UNBOUNDED_POWER],
            }
        ).set_index("id")
        network.create_minmax_reactive_limits(q_limits_df)

        # The load flow balance is shared in proportion to the participation factors of
        # the model (frequency regulation through SignalN). Without them, the slack
        # generator takes the whole balance, so that its active power is written back
        # to the network and can initialize its dynamic model.
        participation = info.get("participation_factor") or 0.0
        if is_slack and slack_takes_balance:
            participation = 1.0
        network.create_extensions(
            "activePowerControl",
            id=str(gid),
            participate=participation > 0.0,
            droop=4.0,
            participation_factor=float(participation),
        )
