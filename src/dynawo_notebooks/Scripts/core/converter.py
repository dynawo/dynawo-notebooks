# FILE: src/dynawo_notebooks/Scripts/core/converter.py
"""
PyPowSybl Converter Module.

This module is responsible for converting the parsed electrical topology dictionary
into a strictly typed PyPowSyBl Network object. It handles the grouping of buses
into substations to satisfy transformer connectivity requirements.
"""

import os
import json
import logging
import pandas as pd
import pypowsybl as pp
from typing import Dict, Set, Any
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
        script_dir = os.path.dirname(os.path.abspath(__file__))
        filepath = os.path.join(script_dir, filename)

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
    def build_network(data: Dict) -> pp.network.Network:
        """
        Constructs a complete PyPowSyBl Network from the raw parsed topology data.

        :param data: A dictionary containing topological elements (buses, lines, etc.).
        :return: A fully instantiated PyPowSybl Network.
        """
        logger.info("Initializing PyPowSybl Network construction...")
        network = pp.network.create_empty()

        # Load external configuration for voltage naming conventions
        voltage_mapping = PowsyblConverter._load_voltage_mapping()

        # 1. Substation Grouping Logic
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

        # 2. Voltage Discovery & Creation
        # Dynawo buses often don't have explicit Un. We discover it from connected equipment.
        bus_nominal_v = {}

        def is_valid_kv(vol: Any) -> bool:
            try:
                return vol is not None and float(vol) > 1.5
            except (ValueError, TypeError):
                return False

        if "buses" in data:
            for bid, info in data["buses"].items():
                # 2.1 Try to get explicit voltage
                v = info.get("nominal_v")

                # 2.2 Discovery from Transformers (rated_u1/u2)
                # Overrides '1.0' pu values to find the true physical base
                if not is_valid_kv(v):
                    for tid, t_info in data.get("transformers", {}).items():
                        if t_info.get("bus1") == bid and is_valid_kv(t_info.get("rated_u1")):
                            v = t_info.get("rated_u1")
                            break
                        if t_info.get("bus2") == bid and is_valid_kv(t_info.get("rated_u2")):
                            v = t_info.get("rated_u2")
                            break

                # 2.3 Discovery from Generators (nominal_v)
                if not is_valid_kv(v):
                    for gid, g_info in data.get("generators", {}).items():
                        if g_info.get("bus") == bid and is_valid_kv(g_info.get("nominal_v")):
                            v = g_info.get("nominal_v")
                            break

                # 2.4 Discovery from Loads
                if not is_valid_kv(v):
                    for lid, l_info in data.get("loads", {}).items():
                        if l_info.get("bus") == bid and is_valid_kv(l_info.get("nominal_v")):
                            v = l_info.get("nominal_v")
                            break

                # 2.5 Discovery from Lines
                if not is_valid_kv(v):
                    for lid, l_info in data.get("lines", {}).items():
                        if (
                            l_info.get("bus1") == bid or l_info.get("bus2") == bid
                        ) and is_valid_kv(l_info.get("nominal_v")):
                            v = l_info.get("nominal_v")
                            break

                # 2.6 Naming convention fallback using external JSON rules
                if not is_valid_kv(v):
                    for prefix, mapped_voltage in voltage_mapping.items():
                        if prefix != "default" and prefix in bid:
                            v = mapped_voltage
                            break
                    # If it still hasn't found a match, apply the default voltage
                    if not is_valid_kv(v):
                        v = voltage_mapping.get("default", 225.0)

                # Force 'v' to be a float. Fallback safely if extraction fails.
                try:
                    v = float(v)
                    # Auto-convert Volts to kV for PyPowSyBl
                    # Ensures that any raw value (e.g., 69000.0) is correctly interpreted as 69.0 kV
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
                    low_voltage_limit=v * 0.8,  # Minimum voltage limit (80%)
                    high_voltage_limit=v * 1.2,  # Maximum voltage limit (120%)
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
        estimated_mismatch = max(total_load_p - total_gen_p, 100.0)  # Garantim un mínim
        # --- FI MODIFICACIÓ ---

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
        sn = info.get("sn_nom", 100.0)
        un = bus_v.get(b1, 225.0)
        z_base = (un**2) / sn

        # Determine if the Modelica component uses per-unit values based on parameter availability
        is_pu = "r_pu" in info or "x_pu" in info

        # Safely extract either the per-unit or physical values
        raw_r = info.get("r_pu", info.get("r", 0.0))
        raw_x = info.get("x_pu", info.get("x", 0.001))
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        raw_r = max(float(raw_r), 1e-6)

        if is_pu:
            r_ohm = raw_r * z_base
            x_ohm = raw_x * z_base
            b_sie = raw_b / z_base
            g_sie = raw_g / z_base
        else:
            r_ohm = raw_r
            x_ohm = raw_x
            b_sie = raw_b
            g_sie = raw_g

        network.create_lines(
            id=str(lid),
            voltage_level1_id=f"VL_{b1}",
            bus1_id=str(b1),
            voltage_level2_id=f"VL_{b2}",
            bus2_id=str(b2),
            r=r_ohm,
            x=x_ohm,
            g1=g_sie / 2,
            b1=b_sie / 2,  # Split Pi-model capacitance
            g2=g_sie / 2,
            b2=b_sie / 2,
        )

    @staticmethod
    def _create_generator(
        network: pp.network.Network,
        gid: str,
        info: Dict,
        bus_v: Dict,
        slack_warm_start_mw: float = 1.0,
    ) -> None:
        """
        Creates a generator in the PyPowSyBl network, properly configuring slack bus behavior.
        Incorporates a Warm Start active power estimation to prevent Newton-Raphson divergence.
        """
        bid = info.get("bus")

        sn = info.get("sn_nom", 100.0)
        if "genpv" in gid.lower() and sn == 100.0:
            sn = 6.0

        p_mw = info.get("p") or (info.get("p_pu", 0.0) * sn)

        # --- INICI MODIFICACIÓ: Detecció de Slack robusta ---
        is_slack = False
        valid_slack_identifiers = PowerFlowRunner.load_slack_mapping()
        gid_str = str(gid).lower()

        # Comprovem directament si aquest ID conté la nomenclatura de Slack
        if any(identifier in gid_str for identifier in valid_slack_identifiers):
            is_slack = True
        # --- FI MODIFICACIÓ ---

        # Injecció del Warm Start per evitar salts inassumibles a la Jacobiana
        if is_slack and p_mw == 0.0:
            p_mw = slack_warm_start_mw

        # GENERATOR TYPE (PQ vs PV)
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

        # Robust voltage extraction
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

        # Garantim que cap màquina quedi ofegada reactivament. En xarxes de transport (Nordic 32),
        # hi ha condensadors síncrons (P=0 MW) que proveeixen suport vital de tensió.
        # Forcem un "sòl" de 800 MVA per evitar oscil·lacions de la Jacobiana durant el Flat Start.
        effective_sn = max(float(sn), abs(p_mw) / 0.85, 800.0)

        # Corba de capabilitat basada en la grandària efectiva
        q_max_default = effective_sn * 0.80
        q_min_default = -effective_sn * 0.50

        if is_slack:
            min_q_val = -9999.0
            max_q_val = 9999.0
        else:
            min_q_val = (
                info.get("q_min", info.get("q_min_pu", -0.50) * effective_sn)
                if "q_min" in info or "q_min_pu" in info
                else q_min_default
            )
            max_q_val = (
                info.get("q_max", info.get("q_max_pu", 0.80) * effective_sn)
                if "q_max" in info or "q_max_pu" in info
                else q_max_default
            )

        q_limits_df = pd.DataFrame(
            {"id": [str(gid)], "min_q": [min_q_val], "max_q": [max_q_val]}
        ).set_index("id")

        network.create_minmax_reactive_limits(q_limits_df)

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

        un = bus_v.get(bid, 225.0)
        sn = info.get("sn_nom", 100.0)

        # Normalize voltage to kV
        if un > 1000.0:
            un = un / 1000.0

        z_base = (un**2) / sn if sn != 0 else 1.0

        is_pu = "b_pu" in info or "g_pu" in info
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        if is_pu:
            # Explicit sign inversion for CIM compliance (-float)
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
        network: pp.network.Network, tid: str, info: Dict, bus_v: Dict, bus_to_sub: Dict = None
    ) -> None:
        """
        Creates a 2-winding transformer in the PyPowSyBl network.
        It calculates the effective voltage ratio and handles tap changer positions.

        :param network: The PyPowSyBl network instance.
        :param tid: The unique identifier for the transformer.
        :param info: Dictionary containing the transformer's parameters.
        :param bus_v: Dictionary mapping bus IDs to their nominal voltages.
        """
        b1, b2 = info.get("bus1"), info.get("bus2")
        if not b1 or not b2:
            return

        un1 = bus_v.get(b1, 225.0)
        un2 = bus_v.get(b2, 225.0)

        # Scale down voltages from Volts to kV if necessary
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

        rated_u1_base = un1 * base_ratio

        # Calculate Z_base strictly using the original primary rated voltage.
        # PyPowSyBl requires ohmic impedances to be referred to the primary ratedU1 side.
        z_base = (rated_u1_base**2) / sn_comp

        is_pu = "r_pu" in info or "x_pu" in info

        raw_r = info.get("r_pu", info.get("r", 0.0))
        raw_x = info.get("x_pu", info.get("x", 0.001))
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        raw_r = max(float(raw_r), 1e-6)

        if is_pu:
            r_ohm = raw_r * z_base
            x_ohm = raw_x * z_base
            b_sie = raw_b / z_base
            g_sie = raw_g / z_base
        else:
            r_ohm = raw_r
            x_ohm = raw_x
            b_sie = raw_b
            g_sie = raw_g

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
                    "transformer_id": [str(tid)],
                    "low_tap_position": [0],
                    "tap_position": [int(tap_pos)],
                    "high_tap_position": [int(n_tap) - 1],
                    "regulating": [False],
                }
            ).set_index("id")

            network.create_ratio_tap_changers(rtc_df)

            steps_data = []
            step_size = (rho_max - rho_min) / (n_tap - 1)

            for i in range(int(n_tap)):
                steps_data.append(
                    {
                        "id": f"{tid}_step_{i}",
                        "tap_changer_id": str(tid),
                        "rho": rho_min + (i * step_size),
                        "r": 0.0,
                        "x": 0.0,
                        "g": 0.0,
                        "b": 0.0,
                    }
                )

            steps_df = pd.DataFrame(steps_data).set_index("id")
            network.create_ratio_tap_changer_steps(steps_df)
