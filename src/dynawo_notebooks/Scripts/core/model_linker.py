# FILE: src/dynawo_notebooks/Scripts/core/dynamic_model_linker.py
"""
Dynamic Model Linker Module.

This module is responsible for linking static power system network elements
(e.g., generators, shunts, loads) from a PyPowSyBl network to their corresponding
dynamic simulation models (e.g., Modelica models). It utilizes a pre-compiled
JSON registry to resolve the correct model mappings and handles API variations
across different PyPowSyBl versions.
"""

import pypowsybl as pp
import pandas as pd
import json
import logging

# Configure module-level logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger("DynamicModelLinker")


def link_models(network, parsed_models_json_path):
    """
    Links static network elements with their dynamic counterparts.

    This function dynamically discovers the correct PyPowSyBl mapping methods
    based on the installed library version. It prioritizes specific model types
    found in the elements' metadata and applies a robust fallback strategy if
    the specific models are missing from the registry.

    :param network: The PyPowSyBl network object containing the static elements.
    :param parsed_models_json_path: Path to the JSON file containing the dynamic model registry.
    :return: A populated PyPowSyBl ModelMapping object, or None if the registry cannot be loaded.
    """
    try:
        with open(parsed_models_json_path, "r") as f:
            registry_data = json.load(f)
            model_registry = registry_data.get("models_with_init_name", registry_data)
    except Exception as e:
        logger.error(f"Failed to load the dynamic model registry: {e}")
        return None

    mapping = pp.dynamic.ModelMapping()

    # Strategy Definition
    # Dictionary structure:
    # Keys: Category name representing the equipment type.
    # Values: Tuple containing (Network Getter Function, List of Candidate API Methods, Default Fallback Modelica Type)
    equipment_categories = {
        "generators": (
            network.get_generators,
            # Candidate names to support different versions of the PyPowSyBl API
            ["add_synchronous_generator", "add_synchronous_generator_model"],
            "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous",
        ),
        "shunts": (
            network.get_shunt_compensators,
            # Exhaustive list of likely method variations for shunt compensators
            [
                "add_shunt_compensator",
                "add_linear_shunt_compensator",
                "add_shunt",
                "add_shunt_model",
            ],
            "Dynawo.Electrical.Shunts.Shunt",
        ),
        "loads": (
            network.get_loads,
            # 'add_base_load' is the optimal method for generic loads without embedded transformers
            ["add_base_load", "add_load", "add_load_model", "set_load_model"],
            "Dynawo.Electrical.Loads.LoadAlphaBeta",
        ),
    }

    for category, (
        get_elements_func,
        method_candidates,
        default_fallback_type,
    ) in equipment_categories.items():
        # 1. Resolve Mapping Method (Dynamic API Lookup)
        mapping_method = None
        used_method_name = ""

        # Identify which mapping method is supported by the currently installed PyPowSyBl version
        for name in method_candidates:
            if hasattr(mapping, name):
                mapping_method = getattr(mapping, name)
                used_method_name = name
                break

        if not mapping_method:
            # If no method is found, log a warning and skip to the next category
            logger.warning(
                f"SKIP: Category '{category}' - No valid mapping method found in this PyPowSybl version. "
                f"Tried: {method_candidates}"
            )
            continue

        # 2. Retrieve Static Elements
        try:
            elements_df = get_elements_func()

            # Normalize the DataFrame to ensure iteration over rows with the 'id' column is possible
            if elements_df.index.name == "id":
                elements_df = elements_df.reset_index()

            if "id" not in elements_df.columns:
                logger.warning(f"SKIP: '{category}' dataframe retrieved but missing 'id' column.")
                continue

        except Exception as e:
            logger.warning(f"SKIP: Could not retrieve elements for '{category}'. Error: {e}")
            continue

        if elements_df.empty:
            continue

        # 3. Build the Mapping List
        mapping_list = []

        for index, row in elements_df.iterrows():
            current_id = row["id"]
            # Extract the 'modelica_type' property previously injected by the topology Parser
            specific_type = row.get("modelica_type", "")

            selected_model = None

            # A. Exact Registry Lookup
            if specific_type and specific_type in model_registry:
                options = model_registry[specific_type]
                if options:
                    selected_model = options[0]

            # B. Fallback Strategy Execution
            if not selected_model:
                if category != "loads":
                    logger.warning(
                        f"DISCLAIMER: Element '{current_id}' type '{specific_type}' not in registry. "
                        f"Using fallback: '{default_fallback_type}'."
                    )
                if default_fallback_type in model_registry:
                    options = model_registry[default_fallback_type]
                    if options:
                        selected_model = options[0]

            if selected_model:
                # Append mapping utilizing 'static_id', as strictly required by the PyPowSyBl API documentation
                mapping_list.append({"static_id": current_id, "model_name": selected_model})

        # 4. Apply Mappings to the PyPowSyBl ModelMapping Instance
        if mapping_list:
            df_map = pd.DataFrame(mapping_list)

            # Enforce strict string typing to prevent internal C++ casting errors in PyPowSyBl
            df_map["static_id"] = df_map["static_id"].astype(str)
            df_map["model_name"] = df_map["model_name"].astype(str)

            # PyPowSyBl architectural requirement: 'static_id' must serve as the DataFrame index
            # while remaining accessible as a standard column for keyword arguments
            df_map.set_index("static_id", inplace=True, drop=False)
            df_map.index.name = "static_id"

            try:
                mapping_method(df_map)
                logger.info(
                    f"Linked {len(mapping_list)} elements in '{category}' using '{used_method_name}'."
                )
            except Exception as e:
                logger.error(f"FAILED to link '{category}' using {used_method_name}. Error: {e}")
                logger.debug(f"DataFrame payload dump:\n{df_map.head()}")

    return mapping
