"""
MoTopologyToolkit Facade.

This is the main entry point for the toolkit. It orchestrates the Connector,
Parser, and Converter modules to provide a seamless experience for the user.
"""

import logging
import json
from typing import List, Dict, Any

from dynawo_notebooks.Scripts.core.connector import OMCConnector
from dynawo_notebooks.Scripts.core.parser import ModelicaParser
from dynawo_notebooks.Scripts.core.converter import PowsyblConverter

logger = logging.getLogger("MoTopologyToolkit")


class MoTopologyToolkit:
    """
    Expert-level toolkit for extracting electrical topology from Modelica files
    and converting it to PyPowSybl networks.
    """

    def __init__(
        self, source_dir: str, model_name: str, dynawo_pkg_path: str, local_files_list: List[str]
    ):
        """
        Initializes the toolkit, establishing a connection to OpenModelica and loading
        the necessary libraries and local files.

        :param source_dir: Directory containing the local Modelica files.
        :param model_name: The name of the root Modelica model to be parsed.
        :param dynawo_pkg_path: Path to the base Dynawo package.
        :param local_files_list: List of local Modelica files to load.
        """
        logger.info("=" * 60)
        logger.info(f"Initializing MoTopologyToolkit for model: {model_name}")
        logger.info("=" * 60)

        self.connector = OMCConnector()
        try:
            self.connector.load_libraries(dynawo_pkg_path)
            self.connector.load_local_files(source_dir, local_files_list)
            if not self.connector.check_model(model_name):
                logger.warning(
                    "Model integrity check failed or returned warnings. Proceeding with caution."
                )
        except Exception as e:
            logger.critical(f"Initialization CRITICAL FAILURE: {e}")
            raise e

        self.parser = ModelicaParser(self.connector, model_name)

    def parse_electrical_data(self) -> Dict[str, Any]:
        """
        Executes the parsing pipeline to retrieve electrical topology.

        :return: A dictionary containing the parsed topological elements.
        """
        logger.info(">>> STEP 1: PARSING TOPOLOGY")
        return self.parser.parse_topology()

    def build_powsybl_network(self, data: Dict[str, Any]):
        """
        Converts the parsed dictionary into a PyPowSybl Network object.

        :param data: The dictionary containing the parsed electrical topology.
        :return: A PyPowSybl Network instance representing the extracted topology.
        """
        logger.info(">>> STEP 2: CONVERTING TO POWSYBL")
        return PowsyblConverter.build_network(data)

    def export_to_standard_json(self, data: Dict, filename: str = "topology.json") -> None:
        """
        Utility to export the parsed topology to a JSON file.

        :param data: The parsed topology dictionary.
        :param filename: The target filename for the JSON export.
        """
        try:
            with open(filename, "w") as f:
                json.dump(data, f, indent=4)
            logger.info(f"Data exported successfully to: {filename}")
        except IOError as e:
            logger.error(f"Failed to export data: {e}")

    def import_from_standard_json(self, filepath: str) -> dict:
        """
        Utility method to import previously parsed topology data from a JSON file.

        :param filepath: The file path to the JSON document to be read.
        :return: A dictionary containing the parsed topological elements.
        :raises Exception: Propagates any IO or JSON decoding errors encountered.
        """
        logger.info(f"Importing topology data from JSON file: {filepath}")

        try:
            # Open and parse the JSON file utilizing standard UTF-8 encoding
            with open(filepath, "r", encoding="utf-8") as f:
                data = json.load(f)

            logger.info(f"Successfully loaded data from {filepath}")

            # Log the quantity of loaded items per category for enhanced observability
            for category, items in data.items():
                logger.info(f" - Loaded {len(items)} {category}")

            return data

        except Exception as e:
            logger.error(f"Error reading {filepath}: {e}")
            raise
