"""
Modelica Initialization Generator Module.

This module creates a new initialized Modelica model wrapper to warm-start
simulations by extracting the exact solved steady-state directly from
Dynawo's NETWORK initialization dump.
"""

import os
import re
import logging
import math
from typing import Optional, Any

logger = logging.getLogger(__name__)


class ModelicaInitGenerator:
    """
    Utility class to generate an initialized Modelica model (.mo) as a standalone file.
    It strictly injects steady-state parameters from Dynawo's NETWORK dump into
    component modifiers, calculating Complex variables mathematically.
    """

    @staticmethod
    def generate_initialized_model(
        export_folder: str,
        source_dir: str,
        model_name: str,
        network: Any = None,  # Retained for compatibility with notebook cell calls
    ) -> Optional[str]:
        logger.info(
            "Generating standalone initialized Modelica model from NETWORK dump results..."
        )

        init_dir = os.path.join(
            export_folder, "dynamic_files", "outputs", "initValues", "localInit"
        )
        network_dump = os.path.join(init_dir, "dumpInitValues-NETWORK.txt")
        original_mo = os.path.join(source_dir, f"{model_name}.mo")
        target_mo = os.path.join(source_dir, f"{model_name}_initialized.mo")

        if not os.path.exists(original_mo):
            logger.error(f"CRITICAL ERROR: Original Modelica file not found at {original_mo}")
            return None

        if not os.path.exists(network_dump):
            logger.error(f"CRITICAL ERROR: NETWORK dump file not found at {network_dump}")
            return None

        try:
            with open(original_mo, "r", encoding="utf-8") as f:
                original_code = f.read()
        except IOError as e:
            logger.error(f"Failed to read original Modelica file: {e}")
            return None

        # 1. Map components to their connected buses using the original .mo file
        comp_to_bus = {}
        connect_pattern = (
            r"connect\s*\(\s*([a-zA-Z0-9_]+)\.terminal\s*,\s*([a-zA-Z0-9_]+)\.terminal\s*\)"
        )
        for m in re.finditer(connect_pattern, original_code):
            c1, c2 = m.group(1), m.group(2)
            if c1.startswith("bus"):
                comp_to_bus[c2] = c1
            elif c2.startswith("bus"):
                comp_to_bus[c1] = c2

        # 2. Parse exact solved values from NETWORK.txt
        bus_v = {}
        bus_i = {}
        comp_pq = {}

        try:
            with open(network_dump, "r", encoding="utf-8") as f:
                for line in f:
                    clean_line = line.strip()

                    # Extract Voltages
                    m_v = re.search(
                        r"^([a-zA-Z0-9_]+)_ACPIN_V_(re|im)\s*:\s*y\s*=\s*([-\+\d\.eE]+)",
                        clean_line,
                    )
                    if m_v:
                        b = m_v.group(1)
                        if b not in bus_v:
                            bus_v[b] = {"re": 0.0, "im": 0.0}
                        bus_v[b][m_v.group(2)] = float(m_v.group(3))

                    # Extract Currents
                    m_i = re.search(
                        r"^([a-zA-Z0-9_]+)_ACPIN_i_(re|im)\s*:\s*y\s*=\s*([-\+\d\.eE]+)",
                        clean_line,
                    )
                    if m_i:
                        b = m_i.group(1)
                        if b not in bus_i:
                            bus_i[b] = {"re": 0.0, "im": 0.0}
                        bus_i[b][m_i.group(2)] = float(m_i.group(3))

                    # Extract Powers (Loads)
                    m_pq = re.search(
                        r"^([a-zA-Z0-9_]+)_(P|Q)_value\s*:\s*y\s*=\s*([-\+\d\.eE]+)", clean_line
                    )
                    if m_pq:
                        c = m_pq.group(1)
                        if c not in comp_pq:
                            comp_pq[c] = {"P": 0.0, "Q": 0.0}
                        comp_pq[c][m_pq.group(2)] = float(m_pq.group(3))
        except Exception as e:
            logger.error(f"Failed to read NETWORK dump file: {e}")
            return None

        # 3. Calculate mathematically precise injection parameters
        comp_params = {}
        all_components = set(list(comp_to_bus.keys()) + list(comp_pq.keys()))

        for c_name in all_components:
            bus_name = comp_to_bus.get(c_name)
            if not bus_name or bus_name not in bus_v:
                continue

            v_re = bus_v[bus_name]["re"]
            v_im = bus_v[bus_name]["im"]
            v_mag = math.sqrt(v_re**2 + v_im**2)
            v_ang = math.atan2(v_im, v_re)

            comp_params[c_name] = {}

            if c_name in comp_pq:
                p = comp_pq[c_name]["P"]
                q = comp_pq[c_name]["Q"]

                v_mag_sq = v_re**2 + v_im**2
                if v_mag_sq > 1e-6:
                    i_re = (p * v_re + q * v_im) / v_mag_sq
                    i_im = (p * v_im - q * v_re) / v_mag_sq
                else:
                    i_re, i_im = 0.0, 0.0

                comp_params[c_name]["u0Pu"] = f"Complex({v_re:.15f}, {v_im:.15f})"
                comp_params[c_name]["s0Pu"] = f"Complex({p:.15f}, {q:.15f})"
                comp_params[c_name]["i0Pu"] = f"Complex({i_re:.15f}, {i_im:.15f})"

            elif bus_name in bus_i:
                i_re = bus_i[bus_name]["re"]
                i_im = bus_i[bus_name]["im"]
                p = v_re * i_re + v_im * i_im
                q = v_im * i_re - v_re * i_im

                comp_params[c_name]["U0Pu"] = f"{v_mag:.15f}"
                comp_params[c_name]["UPhase0"] = f"{v_ang:.15f}"
                comp_params[c_name]["P0Pu"] = f"{p:.15f}"
                comp_params[c_name]["Q0Pu"] = f"{q:.15f}"

        # 4. Inject Parameters into Original Code
        new_code = re.sub(
            rf"\bmodel\s+{model_name}\b", f"model {model_name}_initialized", original_code, count=1
        )
        new_code = re.sub(rf"\bend\s+{model_name}\s*;", f"end {model_name}_initialized;", new_code)

        for c_name, params in comp_params.items():
            if not params:
                continue

            decl_pattern = rf"(?m)^(\s*[a-zA-Z0-9_\.]+)\s+({c_name})\b(.*?)(annotation\s*\(|;)"

            def inject_decl(match):
                comp_type = match.group(1)
                name = match.group(2)
                mods = match.group(3).strip()
                suffix = match.group(4)

                to_inject = []
                for p_name, p_val in params.items():
                    if not re.search(rf"\b{p_name}\b\s*=", mods):
                        to_inject.append(f"{p_name} = {p_val}")

                if not to_inject:
                    return match.group(0)

                new_mods_str = ", ".join(to_inject)

                if mods.startswith("(") and mods.endswith(")"):
                    inner = mods[1:-1].strip()
                    mods = f"({inner}, {new_mods_str})" if inner else f"({new_mods_str})"
                else:
                    mods = f"({new_mods_str}) "

                return f"{comp_type} {name}{mods} {suffix}"

            new_code = re.sub(decl_pattern, inject_decl, new_code, count=1, flags=re.DOTALL)

        try:
            with open(target_mo, "w", encoding="utf-8") as f:
                f.write(new_code)
            logger.info(f"SUCCESS: Initialized Modelica model generated at: {target_mo}")
            return target_mo
        except IOError as e:
            logger.error(f"Failed to write Modelica file: {e}")
            return None
