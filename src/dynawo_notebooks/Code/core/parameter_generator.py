"""
Dynamic Parameter Generator Module.

This module parses Dynawo DDB (desc.xml) files and populates the simulation
parameters using the extracted data from Modelica files.
"""

import os
import xml.etree.ElementTree as ET
import logging
from typing import Dict, Any
import pandas as pd

logger = logging.getLogger("ParameterGenerator")

class DynamicParameterGenerator:
    """
    Handles the creation of Dynawo .par files by merging DDB descriptions
    with Modelica parsed data.
    """

    @staticmethod
    def generate_parameters(
        parsed_data: Dict[str, Any],
        linked_registry: Dict[str, pd.DataFrame],
        dynawo_path: str,
        target_dir: str
    ) -> None:
        """
        Generates Base_Case.par and Network.par based on the parsed topology.
        """
        os.makedirs(target_dir, exist_ok=True)
        basecase_sets = []

        # Mapa para conectar el nombre del registro con las claves del parsed_data
        category_mapping = {
            "Synchronous Generators": "generators",
            "Inertial Grids": "generators",
            "Shunts": "shunts",
            "Loads": "loads"
        }

        # 1. Iterar sobre el registro de modelos vinculados (creado en la celda 7)
        for registry_name, df in linked_registry.items():
            json_key = category_mapping.get(registry_name)
            if not json_key or df.empty:
                continue
            
            for _, row in df.iterrows():
                static_id = row["static_id"]
                model_name = row["model_name"]
                
                # Obtener la información de Modelica para este componente
                comp_data = parsed_data.get(json_key, {}).get(static_id, {})
                
                # Analizar el archivo DDB
                ddb_path = os.path.join(dynawo_path, "ddb", f"{model_name}.desc.xml")
                xml_lines = []
                
                if os.path.exists(ddb_path):
                    tree = ET.parse(ddb_path)
                    ns = {"dyn": "http://www.rte-france.com/dynawo"}
                    
                    for param in tree.getroot().findall(".//dyn:parameter", ns):
                        if param.get("readOnly") == "false":
                            p_name = param.get("name")
                            p_type = param.get("valueType")
                            default_val = param.get("defaultValue", "0.0" if p_type == "DOUBLE" else "0")
                            
                            # Intentar emparejar el parámetro (ej: 'generator_H' -> 'H')
                            clean_name = p_name.split("_")[-1]
                            
                            # Priorizar coincidencia exacta, luego coincidencia limpia, luego valor por defecto
                            val = comp_data.get(p_name, comp_data.get(clean_name, default_val))
                            
                            xml_lines.append(f'        <par type="{p_type}" name="{p_name}" value="{val}"/>')
                else:
                    logger.warning(f"No se encontró el archivo DDB: {ddb_path}")
                
                # Construir el bloque XML para este componente
                set_xml = f'    <set id="{static_id}">\n'
                set_xml += "\n".join(xml_lines) + "\n"
                
                # Añadir referencias estáticas IIDM si es un generador
                if json_key == "generators":
                    prefix = "generator"
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_P0Pu" origData="IIDM" origName="p_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_Q0Pu" origData="IIDM" origName="q_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_U0Pu" origData="IIDM" origName="v_pu"/>\n'
                    set_xml += f'        <reference type="DOUBLE" name="{prefix}_UPhase0" origData="IIDM" origName="angle"/>\n'
                
                set_xml += '    </set>'
                basecase_sets.append(set_xml)

        # 2. Ensamblar y guardar Base_Case.par
        basecase_content = '<?xml version="1.0" encoding="UTF-8"?>\n'
        basecase_content += '<parametersSet xmlns="http://www.rte-france.com/dynawo">\n'
        basecase_content += "\n".join(basecase_sets)
        basecase_content += '\n</parametersSet>\n'

        with open(os.path.join(target_dir, "Base_Case.par"), "w", encoding="utf-8") as f:
            f.write(basecase_content)

        # 3. Ensamblar y guardar Network.par (Constantes macroscópicas)
        network_content = """<?xml version="1.0" encoding="UTF-8"?>
<parametersSet xmlns="http://www.rte-france.com/dynawo">
    <set id="Network">
        <par type="DOUBLE" name="line_currentLimit_maxTimeOperation" value="999.0"/>
        <par type="DOUBLE" name="load_alpha" value="1.0"/>
        <par type="DOUBLE" name="load_beta" value="2.0"/>
        <par type="DOUBLE" name="transformer_tolV" value="0.01"/>
        <par type="BOOL" name="VirtualBus_2_hasShortCircuitCapabilities" value="true"/>
    </set>
</parametersSet>
"""
        with open(os.path.join(target_dir, "Network.par"), "w", encoding="utf-8") as f:
            f.write(network_content)