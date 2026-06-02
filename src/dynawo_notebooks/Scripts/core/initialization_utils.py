# FILE: src/dynawo_notebooks/Scripts/core/initialization_utils.py
"""
Initialization Utilities Module.

Handles the parsing of Dynawo initialization dumps and the subsequent
AST reinjection into Modelica models using OpenModelica Scripting.
Includes mock generation capabilities for development and testing.
"""

import os
import re
import glob
import logging

logger = logging.getLogger("InitializationUtils")
logger.setLevel(logging.INFO)


def generate_generic_mock_dump(network, dump_dir: str) -> None:
    """
    Generates mock dumpInit text files dynamically based on the elements
    present in the PyPowSyBl network (e.g., generators).

    Args:
        network: The PyPowSyBl static network object.
        dump_dir (str): Directory where the mock files will be saved.
    """
    os.makedirs(dump_dir, exist_ok=True)

    # Extract generators to generate a file per generator
    try:
        gens = network.get_generators()
        if not gens.empty:
            for current_id in gens.index:
                # Generic mock content structured like Dynawo C++ output
                mock_content = f""" ====== VARIABLES VALUES ======
{current_id}_Id0Pu                                        : y =       0.500000 yp =       0.000000
{current_id}_Iq0Pu                                        : y =       0.000000 yp =       0.000000
{current_id}_UPhase0                                      : y =       0.000000 yp =       0.000000
{current_id}_U0Pu                                         : y =       1.000000 yp =       0.000000
 ====== PARAMETERS VALUES ======
{current_id}_SNom                                          =       100.000000
"""
                filepath = os.path.join(dump_dir, f"dumpInitValues-{current_id}.txt")
                with open(filepath, "w") as f:
                    f.write(mock_content)

            logger.info(
                f"Generated mock initialization dumps for {len(gens)} generators at: {dump_dir}"
            )
    except Exception as e:
        logger.error(f"Failed to generate mock dumps: {e}")


def parse_all_dumps(dump_dir: str) -> dict:
    """
    Reads all Dynawo dump .txt files recursively in a directory and compiles a 
    flat dictionary of initialization parameters. Prepends the component name
    derived from the filename to prevent variable overwriting in local dumps.
    
    Args:
        dump_dir (str): Root directory containing globalInit/localInit folders.
        
    Returns:
        dict: Parsed key-value pairs of the initialization state.
    """
    extracted_data = {}
    # Use recursive globbing to enter globalInit and localInit subdirectories
    file_pattern = os.path.join(dump_dir, "**", "*.txt")
    
    for filepath in glob.glob(file_pattern, recursive=True):
        filename = os.path.basename(filepath)
        
        # Extract component name from filename (e.g., "dumpInitValues-GEN____3_SM.txt" -> "GEN____3_SM")
        component_prefix = ""
        match = re.match(r"dumpInitValues-(.+)\.txt", filename)
        
        # Global files like NETWORK or OMEGA_REF usually already contain fully qualified names inside
        if match and not any(global_name in filename for global_name in ["NETWORK", "OMEGA_REF", "NodeFault"]):
            # Normalize prefix to Modelica dot-notation standard early on
            component_prefix = match.group(1) + "."

        with open(filepath, "r") as f:
            for line in f:
                line = line.strip()
                
                # Match parameters
                param_match = re.match(r"^([\w_]+)\s*=\s*([-\d\.eE\+]+)", line)
                if param_match:
                    key = component_prefix + param_match.group(1)
                    extracted_data[key] = float(param_match.group(2))

                # Match dynamic variables
                var_match = re.match(r"^([\w_]+)\s*:\s*[yz]\s*=\s*([-\d\.eE\+]+)", line)
                if var_match:
                    key = component_prefix + var_match.group(1)
                    extracted_data[key] = float(var_match.group(2))

    logger.info(f"Parsed {len(extracted_data)} total variables from {dump_dir}.")
    return extracted_data


def reinject_into_modelica(omc_connector, model_name: str, parsed_data: dict, output_filename: str) -> None:
    """
    Injects the parsed hierarchical Modelica paths directly into the Modelica AST.
    """
    logger.info("Starting Modelica AST parameter injection...")
    
    injection_count = 0
    for dynawo_key, value in parsed_data.items():
        # The key is now fully constructed (e.g., "GEN____3_SM.generator_lambdaDPu")
        # We replace the remaining internal C++ underscores with Modelica dots for the sub-components
        
        if "." in dynawo_key:
            prefix, suffix = dynawo_key.split(".", 1)
            # Convert C++ internal structuring (generator_lambda) to Modelica (generator.lambda)
            modelica_path = f"{prefix}.{suffix.replace('_', '.')}"
        else:
            modelica_path = dynawo_key.replace('_', '.')

        cmd = f"setComponentModifierValue({model_name}, {modelica_path}, $Code(= {value}))"
        omc_connector._omc.sendExpression(cmd)
        injection_count += 1

    logger.info(f"Successfully injected {injection_count} parameters into the AST.")
    
    save_cmd = f'saveTotalModel("{output_filename}", {model_name})'
    omc_connector._omc.sendExpression(save_cmd)
    
    logger.info(f"Initialized model saved to disk as: {output_filename}")
