"""
Dynawo XML Parser Utility.

This module provides functionality to parse XML files within a directory structure
to identify specific Dynawo dynamic models and their initialization attributes.
It is designed to be robust and verbose regarding file discovery.
"""

import os
import glob
import json
import argparse
import logging
import xml.etree.ElementTree as ET
from typing import Dict, List

# Configure module-level logger
logger = logging.getLogger(__name__)

if __name__ == "__main__":
    logging.basicConfig(level=logging.INFO, format="[%(levelname)s] %(message)s")


def parse_dynawo_xmls(folder_path: str, output_folder: str) -> None:
    """
    Recursively scans a folder for XML files and extracts 'dyn:unitDynamicModel' attributes.
    Compiles these attributes into a JSON dictionary mapping Modelica models.

    :param folder_path: The root directory to search for .xml files.
    :param output_folder: The destination directory where the resulting JSON will be saved.
    """
    namespaces = {"dyn": "http://www.rte-france.com/dynawo"}
    output_filename = "parsed_models_data.json"
    models_data: Dict[str, List[str]] = {}

    logger.info(f"Scanning directory: '{folder_path}' for XML definitions...")

    search_pattern = os.path.join(folder_path, "**", "*.xml")
    xml_files = glob.glob(search_pattern, recursive=True)

    if not xml_files:
        logger.warning(f"No XML files found in directory: {folder_path}")
        return

    parse_count = 0
    for file_path in xml_files:
        try:
            tree = ET.parse(file_path)
            root = tree.getroot()
            parse_count += 1

            # Search dynamically for unit models across the XML structure
            for elem in root.iter():
                model_name = elem.get(f"{{{namespaces['dyn']}}}unitDynamicModel")
                if model_name:
                    if model_name not in models_data:
                        models_data[model_name] = []

        except ET.ParseError:
            logger.error(f"Malformed XML file skipped: {file_path}")
        except Exception as e:
            logger.debug(f"Error processing {file_path}: {e}")

    logger.info(f"Extracted {len(models_data)} unique dynamic models from {parse_count} files.")

    # Export dictionary to standard JSON format
    output_path = os.path.join(output_folder, output_filename)
    try:
        os.makedirs(output_folder, exist_ok=True)
        with open(output_path, "w", encoding="utf-8") as f:
            json.dump(models_data, f, indent=4)
        logger.info(f"Successfully exported parsed data to: {output_path}")
    except IOError as e:
        logger.error(f"Failed to write output file: {e}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Extract initialization data from Dynawo XML files."
    )
    parser.add_argument(
        "--path", type=str, required=True, help="Local path to the Dynawo repository/folder."
    )
    parser.add_argument(
        "--output", type=str, default=".", help="Output directory path (default: current)."
    )

    args = parser.parse_args()

    if os.path.exists(args.path):
        parse_dynawo_xmls(args.path, args.output)
    else:
        logger.error(f"Provided path does not exist: {args.path}")
