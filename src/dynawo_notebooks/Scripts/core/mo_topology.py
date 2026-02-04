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
        """
        logger.info(">>> STEP 1: PARSING TOPOLOGY")
        return self.parser.parse_topology()

    def build_powsybl_network(self, data: Dict[str, Any]):
        """
        Converts the parsed dictionary into a PyPowSybl Network object.
        """
        logger.info(">>> STEP 2: CONVERTING TO POWSYBL")
        return PowsyblConverter.build_network(data)

    def export_to_standard_json(self, data: Dict, filename: str = "topology.json") -> None:
        """
        Utility to export the parsed topology to a JSON file.
        """
        try:
            with open(filename, "w") as f:
                json.dump(data, f, indent=4)
            logger.info(f"Data exported successfully to: {filename}")
        except IOError as e:
            logger.error(f"Failed to export JSON to {filename}: {e}")
