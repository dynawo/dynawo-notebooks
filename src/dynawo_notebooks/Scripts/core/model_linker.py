# FILE: src/dynawo_notebooks/Scripts/core/model_linker.py
"""
Dynamic Model Linker Module.

This module links static power system network elements from a PyPowSyBl
network to their corresponding dynamic Modelica models. It utilizes a JSON
registry to resolve the mappings, dynamically selects the correct PyPowSyBl
API method based on the physical model type, and enforces strict C++/Java
data payload structures to prevent backend exceptions.
"""

import json
import logging
from typing import Tuple, Optional

import pandas as pd
import pypowsybl as pp

# Configure module-level logging
logger = logging.getLogger("DynamicModelLinker")
logger.setLevel(logging.INFO)


def _determine_mapping_method(mapping_instance: pp.dynamic.ModelMapping, model_name: str):
    """
    Dynamically determines the correct PyPowSyBl API method to call
    based on the physical Modelica model name string.
    """
    if not model_name:
        return None

    if (
        "BESS.WECC" in model_name
        or "Wind.WECC" in model_name
        or "Photovoltaics.WECC" in model_name
    ):
        return getattr(mapping_instance, "add_wecc", None)
    elif "InfiniteBus" in model_name:
        return getattr(mapping_instance, "add_infinite_bus", None)
    elif "GeneratorSynchronous" in model_name:
        return getattr(
            mapping_instance,
            "add_synchronous_generator",
            getattr(mapping_instance, "add_synchronous_generator_model", None),
        )
    elif "Load" in model_name:
        return getattr(
            mapping_instance, "add_base_load", getattr(mapping_instance, "add_load", None)
        )
    elif "Shunt" in model_name or "SVarC" in model_name or "StaticVarCompensator" in model_name:
        return getattr(
            mapping_instance,
            "add_base_static_var_compensator",
            getattr(mapping_instance, "add_shunt", None),
        )
    elif "Line" in model_name:
        return getattr(mapping_instance, "add_base_line", None)

    # Default fallback for standard generators
    return getattr(mapping_instance, "add_base_generator", None)


def link_models(
    network: pp.network.Network, parsed_models_json_path: str
) -> Tuple[Optional[pp.dynamic.ModelMapping], pd.DataFrame]:
    """
    Links static network elements with their dynamic counterparts.

    Args:
        network: The PyPowSyBl static network object.
        parsed_models_json_path: Path to the JSON registry file.

    Returns:
        A tuple containing the populated PyPowSyBl ModelMapping object and
        a Pandas DataFrame summarizing the applied mappings.
    """
    try:
        with open(parsed_models_json_path, "r") as f:
            registry_data = json.load(f)
            model_registry = registry_data.get("models_with_init_name", registry_data)
    except Exception as e:
        logger.error(f"Failed to load the dynamic model registry: {e}")
        return None, pd.DataFrame()

    mapping = pp.dynamic.ModelMapping()
    all_mapped_elements = []

    # Safely extract the 'modelica_type' properties injected by the parser
    types_dict = {}
    try:
        props_df = network.get_elements_properties()
        if not props_df.empty and "name" in props_df.columns:
            types_df = props_df[props_df["name"] == "modelica_type"][["id", "value"]]
            types_dict = dict(zip(types_df["id"], types_df["value"]))
    except Exception as e:
        logger.warning(f"Could not retrieve elements properties: {e}")

    # Map static elements from the PyPowSyBl network
    equipment_categories = {
        "generators": network.get_generators,
        "loads": network.get_loads,
        "shunts": network.get_shunt_compensators,
        "lines": network.get_lines,
    }

    for category, get_elements_func in equipment_categories.items():
        try:
            elements_df = get_elements_func()
            if elements_df.index.name == "id":
                elements_df = elements_df.reset_index()

            if "id" not in elements_df.columns or elements_df.empty:
                continue
        except Exception:
            continue

        # Group mappings by the PyPowSyBl method they require to dispatch in batches
        method_payloads = {}

        for _, row in elements_df.iterrows():
            current_id = str(row["id"])
            specific_type = types_dict.get(current_id, "")
            selected_model = None

            # Determine the correct physical model
            if specific_type and specific_type in model_registry:
                selected_model = specific_type
            else:
                # Topo-fallbacks for missing metadata
                if category == "generators" and not specific_type:
                    selected_model = "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous"
                elif category == "loads" and not specific_type:
                    selected_model = "Dynawo.Electrical.Loads.LoadAlphaBeta"

            if selected_model:
                mapping_method = _determine_mapping_method(mapping, selected_model)

                if not mapping_method:
                    logger.warning(f"No API mapping method found for '{selected_model}'.")
                    continue

                # Enforce payload structure required by PyPowSyBl
                mapping_record = {
                    "static_id": current_id,
                    "parameter_set_id": current_id,
                    "model_name": selected_model,
                }

                method_name = mapping_method.__name__
                if method_name not in method_payloads:
                    method_payloads[method_name] = {"method": mapping_method, "data": []}

                method_payloads[method_name]["data"].append(mapping_record)

        # Apply mapped payloads to the PyPowSyBl C++ instance
        for method_name, payload in method_payloads.items():
            mapping_list = payload["data"]
            mapping_method = payload["method"]

            if mapping_list:
                df_map = pd.DataFrame(mapping_list)
                df_map["static_id"] = df_map["static_id"].astype(str)
                df_map["parameter_set_id"] = df_map["parameter_set_id"].astype(str)
                df_map["model_name"] = df_map["model_name"].astype(str)

                df_map.set_index("static_id", inplace=True, drop=False)
                df_map.index.name = "static_id"

                try:
                    mapping_method(df_map)
                    all_mapped_elements.extend(mapping_list)
                    logger.info(
                        f"Successfully linked {len(mapping_list)} elements using '{method_name}'."
                    )
                except Exception as e:
                    logger.error(f"Failed to link batch using {method_name}. Error: {e}")

    # Build the final summary DataFrame
    summary_df = pd.DataFrame(all_mapped_elements)
    if not summary_df.empty:
        # Ensure the columns are in the exact requested order
        summary_df = summary_df[["static_id", "parameter_set_id", "model_name"]]
        summary_df.set_index("static_id", inplace=True, drop=False)
        summary_df.index.name = "static_id"

    return mapping, summary_df
