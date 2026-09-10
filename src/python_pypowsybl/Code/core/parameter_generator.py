"""
Dynamic Parameter Generator Module.

This module parses Dynawo DDB (desc.xml) files and populates the simulation
parameters using the extracted data from Modelica files. It incorporates direct
text parsing and OpenModelica queries to resolve dynamic parameters safely.
"""

import os
import re
import xml.etree.ElementTree as ET
import logging
from typing import Dict, Any, Optional
import pandas as pd

# Import OMCConnector strictly for static typing purposes.
from python_pypowsybl.Code.core.connector import OMCConnector

logger = logging.getLogger("ParameterGenerator")


class DynamicParameterGenerator:
    """
    Handles the creation of Dynawo .par files by merging DDB descriptions
    with Modelica parsed data, raw code text parsing, and OMC queries.
    """

    @staticmethod
    def _resolve_numeric_value(
        val_str: str, connector: Optional[OMCConnector], root_model_name: str, model_code: str = ""
    ) -> str:
        """
        Attempts to cast a string to float. If it fails (e.g., it's a variable like 'SNom'),
        it asks OpenModelica for the resolved numerical value or parses the code directly.
        """
        if not val_str:
            return val_str

        val_str = val_str.strip()
        try:
            float(val_str)
            return val_str  # It is already a valid numeric string
        except ValueError:
            # It's a variable reference. Let's resolve it using OMC.
            if connector and root_model_name:
                omc_val = connector.get_parameter_value(root_model_name, val_str)
                if omc_val:
                    return str(omc_val).strip('"').strip()

            # Parameterized Text Fallback: Search for the variable declaration in the model code
            if model_code:
                var_pattern = re.compile(
                    rf"\bparameter\b.*?\b{re.escape(val_str)}\s*=\s*([\d\.]+)"
                )
                match = var_pattern.search(model_code)
                if match:
                    return match.group(1).strip()

        return val_str

    @staticmethod
    def generate_parameters(
        parsed_data: Dict[str, Any],
        linked_registry: Dict[str, pd.DataFrame],
        dynawo_path: str,
        target_dir: str,
        connector: Optional[OMCConnector] = None,
        root_model_name: str = "",
        model_code: str = "",
        base_case_file: str = "Base_Case.par",
        network_file: str = "Network.par",
    ) -> None:
        """
        Generates parameterized .par files based on the parsed topology
        and live OpenModelica parameters. Includes exhaustive network parameters.
        """
        os.makedirs(target_dir, exist_ok=True)
        basecase_sets = []

        # Map to connect the registry name with the keys from parsed_data
        category_mapping = {
            "Synchronous Generators": "generators",
            "Inertial Grids": "generators",
            "Shunts": "shunts",
            "Loads": "loads",
        }

        # 1. Iterate over the linked models registry (Dynamic Models)
        for registry_name, df in linked_registry.items():
            json_key = category_mapping.get(registry_name)
            if not json_key or df.empty:
                continue

            for _, row in df.iterrows():
                static_id = row["static_id"]
                model_name = row["model_name"]

                comp_data = parsed_data.get(json_key, {}).get(static_id, {})
                ddb_path = os.path.join(dynawo_path, "ddb", f"{model_name}.desc.xml")
                xml_lines = []

                if os.path.exists(ddb_path):
                    tree = ET.parse(ddb_path)
                    ns = {"dyn": "http://www.rte-france.com/dynawo"}

                    for param in tree.getroot().findall(".//dyn:parameter", ns):
                        if param.get("readOnly") == "false":
                            p_name = param.get("name")
                            p_type = param.get("valueType")
                            default_val = param.get(
                                "defaultValue", "0.0" if p_type == "DOUBLE" else "0"
                            )
                            clean_name = p_name.split("_")[-1]

                            val = None

                            # Step A: Attempt to match the parameter from parsed_data
                            val = comp_data.get(p_name, comp_data.get(clean_name))

                            # Step B: Direct Text Parsing (Bulletproof fallback)
                            if val is None and model_code:
                                comp_pattern = re.compile(rf"\b{static_id}\s*\((.*?)\)", re.DOTALL)
                                match = comp_pattern.search(model_code)
                                if match:
                                    modifiers = match.group(1)
                                    param_pattern = re.compile(rf"\b{clean_name}\s*=\s*([^,)]+)")
                                    p_match = param_pattern.search(modifiers)
                                    if p_match:
                                        val = p_match.group(1).strip()

                            # Step C: Query OpenModelica (Secondary fallback)
                            if val is None and connector and root_model_name:
                                omc_val = connector.get_parameter_value(
                                    root_model_name, f"{static_id}.{clean_name}"
                                )
                                if omc_val is not None:
                                    val = omc_val

                            # Step D: Fallback to the default value
                            if val is None:
                                val = default_val

                            # Step E: Format and resolve the final value
                            if p_type == "DOUBLE":
                                val = DynamicParameterGenerator._resolve_numeric_value(
                                    str(val), connector, root_model_name, model_code
                                )
                            elif p_type == "BOOL":
                                val = "true" if str(val).lower() in ["true", "1"] else "false"

                            xml_lines.append(
                                f'        <par type="{p_type}" name="{p_name}" value="{val}"/>'
                            )
                else:
                    logger.warning(f"DDB file not found at path: {ddb_path}")

                # Build the XML block for the base case components
                set_xml = f'    <set id="{static_id}">\n'
                set_xml += "\n".join(xml_lines) + "\n"

                # Add static IIDM references
                if json_key == "generators":
                    prefix = "generator"
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_P0Pu" origData="IIDM" origName="p_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_Q0Pu" origData="IIDM" origName="q_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_U0Pu" origData="IIDM" origName="v_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_UPhase0" origData="IIDM" origName="angle"/>\n'

                set_xml += "    </set>"
                basecase_sets.append(set_xml)

        # 2. Assemble and save Base Case parameters
        basecase_content = '<?xml version="1.0" encoding="UTF-8"?>\n'
        basecase_content += '<parametersSet xmlns="http://www.rte-france.com/dynawo">\n'
        basecase_content += "\n".join(basecase_sets)
        basecase_content += "\n</parametersSet>\n"

        basecase_path = os.path.join(target_dir, base_case_file)
        with open(basecase_path, "w", encoding="utf-8") as f:
            f.write(basecase_content)

        logger.info(f"Dynamic parameters successfully generated at {basecase_path}")

        # 3. Assemble and save Network parameters (Static Models)
        network_sets = []

        # Add the comprehensive Network configurations
        network_sets.append("""    <set id="Network">
        <par type="DOUBLE" name="capacitor_no_reclosing_delay" value="300.0"/>
        <par type="DOUBLE" name="dangling_line_currentLimit_maxTimeOperation" value="90.0"/>
        <par type="DOUBLE" name="line_currentLimit_maxTimeOperation" value="90.0"/>
        <par type="DOUBLE" name="load_Tp" value="90.0"/>
        <par type="DOUBLE" name="load_Tq" value="90.0"/>
        <par type="DOUBLE" name="load_alpha" value="1.0"/>
        <par type="DOUBLE" name="load_alphaLong" value="0.0"/>
        <par type="DOUBLE" name="load_beta" value="2.0"/>
        <par type="DOUBLE" name="load_betaLong" value="0.0"/>
        <par type="BOOL" name="load_isControllable" value="false"/>
        <par type="BOOL" name="load_isRestorative" value="false"/>
        <par type="DOUBLE" name="load_zPMax" value="100.0"/>
        <par type="DOUBLE" name="load_zQMax" value="100.0"/>
        <par type="DOUBLE" name="reactance_no_reclosing_delay" value="0.0"/>
        <par type="DOUBLE" name="transformer_currentLimit_maxTimeOperation" value="90.0"/>
        <par type="DOUBLE" name="transformer_t1st_HT" value="30.0"/>
        <par type="DOUBLE" name="transformer_t1st_THT" value="30.0"/>
        <par type="DOUBLE" name="transformer_tNext_HT" value="10.0"/>
        <par type="DOUBLE" name="transformer_tNext_THT" value="10.0"/>
        <par type="DOUBLE" name="transformer_tolV" value="0.015"/>
        <par type="BOOL" name="VirtualBus_2_hasShortCircuitCapabilities" value="true"/>
        <par type="BOOL" name="busL_hasShortCircuitCapabilities" value="true"/>
    </set>""")

        # Dynamically append comprehensive parameter sets for ALL loads in the topology
        for load_id in parsed_data.get("loads", {}).keys():
            network_sets.append(f"""    <set id="{load_id}">
        <par type="DOUBLE" name="load_Tp" value="90.0"/>
        <par type="DOUBLE" name="load_Tq" value="90.0"/>
        <par type="DOUBLE" name="load_alpha" value="1.0"/>
        <par type="DOUBLE" name="load_alphaLong" value="0.0"/>
        <par type="DOUBLE" name="load_beta" value="2.0"/>
        <par type="DOUBLE" name="load_betaLong" value="0.0"/>
        <par type="BOOL" name="load_isControllable" value="false"/>
        <par type="BOOL" name="load_isRestorative" value="false"/>
        <par type="DOUBLE" name="load_zPMax" value="100.0"/>
        <par type="DOUBLE" name="load_zQMax" value="100.0"/>
    </set>""")

        network_content = '<?xml version="1.0" encoding="UTF-8"?>\n'
        network_content += '<parametersSet xmlns="http://www.rte-france.com/dynawo">\n'
        network_content += "\n".join(network_sets)
        network_content += "\n</parametersSet>\n"

        network_path = os.path.join(target_dir, network_file)
        with open(network_path, "w", encoding="utf-8") as f:
            f.write(network_content)

        logger.info(f"Network parameters successfully generated at {network_path}")
