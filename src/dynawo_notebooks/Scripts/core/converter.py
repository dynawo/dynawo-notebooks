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
from typing import Dict, Set
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

                # 2.4 Discovery from Loads
                if not v or v == 0.0:
                    for lid, l_info in data.get("loads", {}).items():
                        if l_info.get("bus") == bid and l_info.get("nominal_v"):
                            v = l_info.get("nominal_v")
                            break

                # 2.5 Discovery from Lines
                if not v or v == 0.0:
                    for lid, l_info in data.get("lines", {}).items():
                        if (l_info.get("bus1") == bid or l_info.get("bus2") == bid) and l_info.get(
                            "nominal_v"
                        ):
                            v = l_info.get("nominal_v")
                            break

                # 2.6 Naming convention fallback using external JSON rules
                if not v or v == 0.0:
                    for prefix, mapped_voltage in voltage_mapping.items():
                        if prefix != "default" and prefix in bid:
                            v = mapped_voltage
                            break
                    # If it still hasn't found a match, apply the default voltage
                    if not v or v == 0.0:
                        v = voltage_mapping.get("default", 225.0)

                # Force 'v' to be a float. If the parser extracted a weird string, fallback safely.
                try:
                    v = float(v)
                    # --- CRITICAL FIX: Auto-convert Volts to kV for PyPowSyBl ---
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

        if is_pu:
            # IEEE 57 style: Convert per-unit to Ohms/Siemens
            r_ohm = raw_r * z_base
            x_ohm = raw_x * z_base
            b_sie = raw_b / z_base
            g_sie = raw_g / z_base
        else:
            # Nordic style: Values are already in physical Ohms/Siemens
            r_ohm = raw_r
            x_ohm = raw_x
            b_sie = raw_b
            g_sie = raw_g

        print(str(lid), r_ohm, x_ohm)  # Debug print to verify line parameters

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
        if "genpv" in gid.lower() and sn == 100.0:
            sn = 6.0

        p_mw = info.get("p") or (info.get("p_pu", 0.0) * sn)

        is_slack = True
        valid_slack_identifiers = PowerFlowRunner.load_slack_mapping()
        try:
            gens_df = network.get_generators()
            for gid_temp, row in gens_df.iterrows():
                gid_str = str(gid_temp).lower()

                # Check if any of the dynamic identifiers match the generator ID
                if any(identifier in gid_str for identifier in valid_slack_identifiers):
                    is_slack = False
                    break
        except Exception as e:
            logger.warning(f"Could not read generators for slack detection: {e}")

        # If it is a Slack Bus and its active power is 0 MW, we assign a dummy initial value (1.0 MW).
        # This provides a "participation factor" > 0% so that OpenLoadFlow accepts mismatch injection.
        if is_slack and p_mw == 0.0:
            p_mw = 1.0

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

        # Robust voltage extraction: prevent 0.0 propagation which crashes PyPowSyBl
        # If the bus_v map returned 0.0, we override it with a safe default base voltage
        base_v = bus_v.get(bid)
        if not base_v or base_v == 0.0:
            base_v = 130.0  # Typical safe fallback for IEEE 57

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
        b_pu = info.get("b_pu", 0.0)
        q_pu = info.get("q_pu", b_pu)
        q_mvar = q_pu * sn
        b_s = q_mvar / (un**2) if un != 0 else 0.0

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

        effective_ratio = base_ratio
        if rho_max is not None and rho_min is not None and n_tap > 1:
            step_size = (rho_max - rho_min) / (n_tap - 1)
            effective_ratio = base_ratio * (rho_min + tap_pos * step_size)

        rated_u1_effective = un1 * effective_ratio

        # --- CRITICAL FIX: Transformer Z_base MUST use rated_u1_effective, not un1 ---
        # PyPowSyBl expects ohmic impedances to be referred strictly to the primary ratedU1 side.
        z_base = (rated_u1_effective**2) / sn_comp

        is_pu = "r_pu" in info or "x_pu" in info

        raw_r = info.get("r_pu", info.get("r", 0.0))
        raw_x = info.get("x_pu", info.get("x", 0.001))
        raw_b = info.get("b_pu", info.get("b", 0.0))
        raw_g = info.get("g_pu", info.get("g", 0.0))

        if is_pu:
            # Convert per-unit to Ohms and Siemens based on the transformer's specific base
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
            rated_u1=rated_u1_effective,
            rated_u2=un2,
            r=r_ohm,
            x=x_ohm,
            g=g_sie,
            b=b_sie,
        )
