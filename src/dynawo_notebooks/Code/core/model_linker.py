"""
Dynamic Model Linker Module (LF Energy Summit 2026).

Maps static IIDM network elements to Modelica dynamic components for Dynawo.
Dynamically resolves supported models directly from the parsed Modelica topology.
"""

import logging
from typing import Tuple, Dict, Any

import pandas as pd
import pypowsybl as pp

logger = logging.getLogger("DynamicModelLinker")


def link_models(
    network: pp.network.Network,
    parsed_data: Dict[str, Any]
) -> Tuple[pp.dynamic.ModelMapping, Dict[str, pd.DataFrame]]:
    """
    Links static network elements with their dynamic Modelica counterparts.
    Uses the exact modelica_type from the parsed JSON data to map models,
    and warns if the requested model is not officially supported.
    """
    mapping = pp.dynamic.ModelMapping()
    linked_dataframes = {}

    # Tuples: Display Name, PyPowSyBl Category, Getter, Map Method, JSON Key
    equipment_categories = [
        (
            "Synchronous Generators",
            "SynchronousGenerator",
            network.get_generators,
            mapping.add_synchronous_generator,
            "generators"
        ),
        ("Shunts", "Shunt", network.get_shunt_compensators, mapping.add_shunt, "shunts"),
        ("Loads", "Load", network.get_loads, mapping.add_base_load, "loads"),
    ]

    for display_name, pp_category, get_elements, map_method, json_key in equipment_categories:
        elements_df = get_elements()
        if elements_df.empty:
            continue

        if elements_df.index.name == "id":
            elements_df = elements_df.reset_index()

        supported_models = mapping.get_supported_models(pp_category)
        supported_models_str = ", ".join(supported_models) if supported_models else ""

        payload = []
        for _, row in elements_df.iterrows():
            static_id = str(row["id"])
            
            # Extract the original type from the parsed Modelica code
            comp_info = parsed_data.get(json_key, {}).get(static_id, {})
            full_modelica_type = comp_info.get("modelica_type", "")
            
            # Extract the base class name (e.g., "InertialGrid" from "x.y.z.InertialGrid")
            model_name = full_modelica_type.split('.')[-1] if full_modelica_type else ""
            
            # Validation and Fallback logic
            if not model_name and supported_models:
                model_name = supported_models[0]
                logger.warning(f"No Modelica type found for {static_id}. Using fallback: {model_name}")
            elif model_name and supported_models and model_name not in supported_models:
                logger.warning(
                    f"Model '{model_name}' mapped to '{static_id}' is not in the supported models list "
                    f"for {pp_category} ({supported_models_str}). Simulation may fail if the model is not compiled."
                )

            payload.append(
                {
                    "static_id": static_id,
                    "parameter_set_id": static_id,
                    "model_name": model_name,
                    "supported_models": supported_models_str,
                    "original_type": full_modelica_type
                }
            )

        if payload:
            df_map = pd.DataFrame(payload).set_index("static_id", drop=False)

            try:
                # Strictly filter columns for the PyPowSyBl C++ API injection
                api_columns = ["static_id", "parameter_set_id", "model_name"]
                map_method(df_map[api_columns])

                # Store the fully enriched DataFrame for the Jupyter Notebook audit
                linked_dataframes[display_name] = df_map
                logger.info(
                    f"Successfully linked {len(payload)} elements in {display_name}."
                )
            except Exception as e:
                logger.error(f"Failed to execute {map_method.__name__}: {e}")

    return mapping, linked_dataframes