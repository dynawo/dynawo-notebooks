"""
OpenModelica Connector Module.

This module handles the low-level communication with the OpenModelica Compiler (OMC)
via ZMQ. It abstracts the session management and ensures the environment is ready.
"""

import os
import logging
from typing import Optional, List, Any
from OMPython import OMCSessionZMQ

logger = logging.getLogger(__name__)


class OMCConnector:
    """
    Wrapper around OMCSessionZMQ to provide a cleaner API for Modelica operations.
    """

    def __init__(self):
        """Initializes the ZMQ session with OpenModelica."""
        logger.info("Connecting to OpenModelica Compiler (OMC)...")
        try:
            self._omc = OMCSessionZMQ()
            logger.info("OMC Session established successfully.")
        except Exception as e:
            logger.critical(f"Failed to connect to OMC: {e}")
            raise e

    def load_libraries(self, dynawo_pkg_path: str) -> None:
        """
        Loads standard Modelica libraries and the Dynawo package.
        """
        logger.info("Loading Standard Modelica Libraries...")
        self._omc.sendExpression("loadModel(Modelica)")
        self._omc.sendExpression("loadModel(Complex)")
        self._omc.sendExpression("loadModel(ModelicaServices)")

        # Convert to absolute path to avoid ambiguity
        abs_pkg_path = os.path.abspath(dynawo_pkg_path).replace("\\", "/")

        logger.info(f"Loading Dynawo Package from: {abs_pkg_path}")
        if not self._omc.sendExpression(f'loadFile("{abs_pkg_path}")'):
            err = self._omc.sendExpression("getErrorString()")
            logger.error(f"OMC Error loading Dynawo: {err}")
            raise RuntimeError(f"Failed to load Dynawo package: {err}")

    def load_local_files(self, source_dir: str, files: List[str]) -> None:
        """
        Loads user-defined Modelica files from a specific directory using Absolute Paths.
        """
        abs_source_dir = os.path.abspath(source_dir).replace("\\", "/")

        if not os.path.exists(abs_source_dir):
            logger.error(f"Source directory does not exist: {abs_source_dir}")
            raise FileNotFoundError(f"Directory not found: {abs_source_dir}")

        logger.info(f"Loading local models from: {abs_source_dir}")
        self._omc.sendExpression(f'cd("{abs_source_dir}")')

        for filename in files:
            full_path = os.path.join(abs_source_dir, filename).replace("\\", "/")
            if not os.path.exists(full_path):
                logger.error(f"File not found on disk: {full_path}")
                continue

            logger.debug(f"Loading file: {filename}")
            if not self._omc.sendExpression(f'loadFile("{full_path}")'):
                err_msg = self._omc.sendExpression("getErrorString()")
                logger.error(f"Failed to load '{filename}'. OMC Error: {err_msg}")

    def check_model(self, model_name: str) -> bool:
        """
        Runs checkModel() on the specified model.
        """
        logger.info(f"Verifying integrity of model '{model_name}'...")
        result = self._omc.sendExpression(f"checkModel({model_name})")

        result_str = str(result)
        if "Error" in result_str:
            if "Class" in result_str and "not found in scope" in result_str:
                logger.critical(f"Model not found: {result_str}")
                return False
            logger.warning(f"checkModel reported issues:\n{result_str}")
            return False

        logger.info(f"Model '{model_name}' check passed successfully.")
        return True

    def get_components(self, model_name: str) -> list:
        """Wraps getComponents(). Returns list of [Type, Name, Comment]."""
        return self._omc.sendExpression(f"getComponents({model_name})")

    def get_inherited_classes(self, model_name: str) -> List[str]:
        """
        Retrieves the list of classes that 'model_name' extends (inherits from).
        Corrected to use the standard API 'getInheritedClasses'.
        """
        # API returns a tuple or list of strings directly: ('Parent1', 'Parent2')
        result = self._omc.sendExpression(f"getInheritedClasses({model_name})")

        if not result:
            return []

        # Ensure we return a clean python list of strings
        if isinstance(result, (list, tuple)):
            return [str(c) for c in result]
        elif isinstance(result, str):
            return [result]

        return []

    def get_component_modification(self, model_name: str, index: int) -> str:
        """
        Wraps getNthComponentModification() with parsed=False.
        """
        return self._omc.sendExpression(
            f"getNthComponentModification({model_name}, {index})", parsed=False
        )

    def get_connections(self, model_name: str) -> list:
        """Retrieves all connections in the model."""
        count_str = self._omc.sendExpression(f"getConnectionCount({model_name})")
        connections = []
        if count_str:
            try:
                count = int(count_str)
                for i in range(1, count + 1):
                    conn = self._omc.sendExpression(f"getNthConnection({model_name}, {i})")
                    if conn and len(conn) >= 2:
                        connections.append([conn[0], conn[1]])
            except ValueError:
                pass
        return connections

    def get_parameter_value(self, model_name: str, parameter_path: str) -> Optional[str]:
        """
        Retrieves the evaluated value of a parameter.
        """
        val = self._omc.sendExpression(f'getParameterValue({model_name}, "{parameter_path}")')
        if val and "Error" not in str(val) and val != "":
            return str(val).strip().replace('"', "")
        return None
