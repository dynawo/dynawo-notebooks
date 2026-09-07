"""
Dynamic Model Linker Module (LF Energy Summit 2026).

Maps static IIDM network elements to Modelica dynamic components for Dynawo.
Dynamically resolves supported models directly via the PyPowSyBl API.
"""

import logging
from typing import Tuple, Dict

import pandas as pd
import pypowsybl as pp

logger = logging.getLogger("DynamicModelLinker")


def link_models(
    network: pp.network.Network,
) -> Tuple[pp.dynamic.ModelMapping, Dict[str, pd.DataFrame]]:
    """
    Links static network elements with their dynamic Modelica counterparts.
    Automatically assigns the first supported model from the PyPowSyBl registry.
    """
    mapping = pp.dynamic.ModelMapping()
    linked_dataframes = {}

    # Define categories mapping PyPowSyBl getters to their dynamic injectors and internal category names
    equipment_categories = [
        (
            "Synchronous Generators",
            "SynchronousGenerator",
            network.get_generators,
            mapping.add_synchronous_generator,
        ),
        ("Shunts", "Shunt", network.get_shunt_compensators, mapping.add_shunt),
        ("Loads", "Load", network.get_loads, mapping.add_base_load),
    ]

    for display_name, pp_category, get_elements, map_method in equipment_categories:
        elements_df = get_elements()
        if elements_df.empty:
            continue

        if elements_df.index.name == "id":
            elements_df = elements_df.reset_index()

        # Retrieve supported models for the category from the PyPowSyBl backend
        supported_models = mapping.get_supported_models(pp_category)
        if not supported_models:
            logger.warning(f"No supported models found for {pp_category}.")
            continue

        # Select the first supported model as the default assignment
        default_model = supported_models[0]
        supported_models_str = ", ".join(supported_models)

        payload = []
        for _, row in elements_df.iterrows():
            payload.append(
                {
                    "static_id": str(row["id"]),
                    "parameter_set_id": str(row["id"]),
                    "model_name": default_model,
                    "supported_models": supported_models_str,
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
                    f"Successfully linked {len(payload)} elements in {display_name} using {default_model}."
                )
            except Exception as e:
                logger.error(f"Failed to execute {map_method.__name__}: {e}")

    return mapping, linked_dataframes
