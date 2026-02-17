# FILE: src/dynawo_notebooks/Scripts/core/dynamic_model_linker.py

import pypowsybl as pp
import pandas as pd
import json
import logging

# Configure logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger("DynamicModelLinker")


def link_models(network, parsed_models_json_path):
    """
    Links static network elements with their dynamic counterparts.

    Updates:
    - LOADS: Uses 'add_base_load' as priority (correct for generic loads).
    - SHUNTS: Tries multiple variations (linear/generic) to find a match.
    - STATIC_ID: Ensures 'static_id' is used as the key for the mapping.
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
    # Keys: Category name
    # Values: (Network Getter, List of Candidate Methods, Default Modelica Type)
    equipment_categories = {
        "generators": (
            network.get_generators,
            # Common names in different versions
            ["add_synchronous_generator", "add_synchronous_generator_model"],
            "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous",
        ),
        "shunts": (
            network.get_shunt_compensators,
            # Trying all likely variations for shunts
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
            # 'add_base_load' is the correct one for generic loads without embedded transformers
            ["add_base_load", "add_load", "add_load_model", "set_load_model"],
            "Dynawo.Electrical.Loads.LoadAlphaBeta",
        ),
    }

    for category, (
        get_elements_func,
        method_candidates,
        default_fallback_type,
    ) in equipment_categories.items():
        # 1. Resolve Mapping Method (Dynamic Lookup)
        mapping_method = None
        used_method_name = ""

        # Check which method actually exists in this installed version of PyPowSybl
        for name in method_candidates:
            if hasattr(mapping, name):
                mapping_method = getattr(mapping, name)
                used_method_name = name
                break

        if not mapping_method:
            # If we reach here for shunts, it means this PyPowSybl version truly doesn't support them yet.
            logger.warning(
                f"SKIP: Category '{category}' - No valid mapping method found in this PyPowSybl version. "
                f"Tried: {method_candidates}"
            )
            continue

        # 2. Retrieve Static Elements
        try:
            elements_df = get_elements_func()

            # Normalize DataFrame to ensure we can iterate over rows with 'id'
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

        # 3. Build Mapping List
        mapping_list = []

        for index, row in elements_df.iterrows():
            current_id = row["id"]
            # Look for the 'modelica_type' injected by the Parser
            specific_type = row.get("modelica_type", "")

            selected_model = None

            # A. Registry Lookup
            if specific_type and specific_type in model_registry:
                options = model_registry[specific_type]
                if options:
                    selected_model = options[0]

            # B. Fallback Strategy
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
                # Use 'static_id' as required by documentation
                mapping_list.append({"static_id": current_id, "model_name": selected_model})

        # 4. Apply to PyPowSybl
        if mapping_list:
            df_map = pd.DataFrame(mapping_list)

            # Ensure strict string types
            df_map["static_id"] = df_map["static_id"].astype(str)
            df_map["model_name"] = df_map["model_name"].astype(str)

            # Set 'static_id' as index (Library requirement) AND keep as column (Kwargs requirement)
            df_map.set_index("static_id", inplace=True, drop=False)
            df_map.index.name = "static_id"

            try:
                mapping_method(df_map)
                logger.info(
                    f"Linked {len(mapping_list)} elements in '{category}' using '{used_method_name}'."
                )
            except Exception as e:
                logger.error(f"FAILED to link '{category}' using {used_method_name}. Error: {e}")
                logger.debug(f"DataFrame dump:\n{df_map.head()}")

    return mapping
