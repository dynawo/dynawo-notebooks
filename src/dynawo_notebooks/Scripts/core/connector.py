"""
OpenModelica Connector Module.

This module provides the OMCConnector class, which manages the communication
and interaction with the OpenModelica Compiler (OMC) via the OMPython API.
"""

import logging
import re
import shutil
from pathlib import Path
from typing import Optional, List, Any, Dict

from OMPython import OMCSessionZMQ

logger = logging.getLogger(__name__)


class OMCConnector:
    """
    Manages the session with the OpenModelica Compiler (OMC).
    Provides methods to load libraries, check models, and extract parameters,
    components, and topology definitions from Modelica code.
    """

    def __init__(self) -> None:
        """
        Initializes the connection to the OpenModelica Compiler (OMC).
        Sets up the ZeroMQ session and initializes cache dictionaries for performance.
        Raises an exception if the connection fails.
        """
        logger.info("Connecting to OpenModelica Compiler (OMC)...")
        try:
            self._omc = OMCSessionZMQ()
            logger.info("OMC Session established successfully.")
        except Exception as e:
            logger.critical(f"Failed to connect to OMC: {e}")
            raise e

        # Caching mechanisms to improve query performance
        self._list_cache: Dict[str, str] = {}
        self._param_cache: Dict[str, Optional[str]] = {}

    def load_libraries(self, dynawo_pkg_path: str) -> None:
        """
        Loads the standard Modelica libraries and the specified Dynawo package.

        :param dynawo_pkg_path: Path to the local Dynawo package directory.
        """
        logger.info("Loading Standard Modelica Libraries...")
        self._omc.sendExpression("loadModel(Modelica)")
        self._omc.sendExpression("loadModel(Complex)")
        self._omc.sendExpression("loadModel(ModelicaServices)")

        pkg_path = Path(dynawo_pkg_path).resolve()
        if not pkg_path.name == "package.mo":
            pkg_path = pkg_path / "package.mo"

        load_path_str = str(pkg_path).replace("\\", "/")
        logger.info(f"Loading Dynawo Package from: {load_path_str}")

        if not self._omc.sendExpression(f'loadFile("{load_path_str}")'):
            logger.error("Failed to load Dynawo package. Please check the path.")

    def load_local_files(self, source_dir: str, file_list: List[str]) -> None:
        """
        Loads user-specified local Modelica files into the OMC session.

        :param source_dir: The root directory containing the source files.
        :param file_list: List of file names to load.
        """
        src_path = Path(source_dir).resolve()
        logger.info(f"Loading {len(file_list)} local files from {src_path}...")

        for file_name in file_list:
            full_path = str(src_path / file_name).replace("\\", "/")
            if not self._omc.sendExpression(f'loadFile("{full_path}")'):
                logger.warning(f"Failed to load local file: {file_name}")

    def check_model(self, model_name: str) -> bool:
        """
        Checks the target model for syntactic and semantic errors.

        :param model_name: Name of the Modelica model to check.
        :return: True if no errors are found, False otherwise.
        """
        logger.info(f"Checking model: {model_name}")
        res = self._omc.sendExpression(f"checkModel({model_name})")
        return "Error" not in str(res)

    def instantiate_model(self, model_name: str) -> Optional[str]:
        """
        Attempts to force OMC to compile and flatten the model safely.

        :param model_name: Name of the Modelica model.
        :return: Flattened model string if successful, None otherwise.
        """
        logger.info(f"Attempting to instantiate (flatten) model {model_name}...")
        try:
            res = self._omc.sendExpression(f"instantiateModel({model_name})")
            if res and "Error" not in str(res):
                return str(res)
        except Exception:
            logger.warning("OMC could not flatten the model. Falling back to AST parsing.")
        return None

    def get_components(self, model_name: str) -> List[Any]:
        """
        Retrieves a list of component declarations inside the specified model.

        :param model_name: Name of the Modelica model.
        :return: List of components.
        """
        return self._omc.sendExpression(f"getComponents({model_name})")

    def get_component_modification(self, model_name: str, index: int) -> str:
        """
        Retrieves the modifier string used during component instantiation.

        :param model_name: Name of the Modelica model.
        :param index: Component index.
        :return: Modifier string.
        """
        try:
            res = self._omc.sendExpression(
                f"getNthComponentModification({model_name}, {index})", parsed=False
            )
            return str(res) if res else ""
        except Exception:
            return ""

    def get_connections(self, model_name: str) -> List[List[str]]:
        """
        Retrieves the electrical or mathematical connections defined in the model.

        :param model_name: Name of the Modelica model.
        :return: List of connection pairs.
        """
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
        Retrieves the static value assigned to a specific parameter using cache.

        :param model_name: Name of the Modelica model.
        :param parameter_path: Parameter path.
        :return: Parameter value as string.
        """
        cache_key = f"{model_name}::{parameter_path}"
        if cache_key in self._param_cache:
            return self._param_cache[cache_key]

        try:
            val = self._omc.sendExpression(f'getParameterValue({model_name}, "{parameter_path}")')
            if val and "Error" not in str(val) and val != "":
                res = str(val).strip().replace('"', "")
                self._param_cache[cache_key] = res
                return res
        except Exception:
            pass

        self._param_cache[cache_key] = None
        return None

    def get_modifier_value(
        self, model_name: str, component_name: str, parameter_name: str
    ) -> Optional[str]:
        """
        Fallback method: Parses the raw source code definition to extract a modifier's value.

        :param model_name: Name of the Modelica model.
        :param component_name: Component name.
        :param parameter_name: Parameter name.
        :return: Parameter value.
        """
        try:
            if model_name not in self._list_cache:
                raw_list = self._omc.sendExpression(f"list({model_name})")
                if not raw_list or "Error" in str(raw_list):
                    self._list_cache[model_name] = ""
                else:
                    self._list_cache[model_name] = str(raw_list)

            definition_str = self._list_cache[model_name]
            if not definition_str:
                return None

            comp_pattern = re.compile(rf"\b{component_name}\s*\(", re.IGNORECASE)
            comp_match = comp_pattern.search(definition_str)
            if not comp_match:
                return None

            start_comp_idx = comp_match.end()
            depth = 1
            comp_modifiers_str = ""
            for char in str(definition_str)[start_comp_idx:]:
                if char == "(":
                    depth += 1
                elif char == ")":
                    depth -= 1
                if depth == 0:
                    break
                comp_modifiers_str += char

            param_pattern = re.compile(rf"\b{parameter_name}\s*=", re.IGNORECASE)
            param_match = param_pattern.search(comp_modifiers_str)
            if not param_match:
                return None

            start_param_idx = param_match.end()
            value_str = ""
            depth_param = 0

            for char in comp_modifiers_str[start_param_idx:]:
                if char == "(":
                    depth_param += 1
                elif char == ")":
                    depth_param -= 1
                if depth_param < 0:
                    break
                if depth_param == 0 and char == ",":
                    break
                value_str += char

            val = value_str.strip()
            val = val.split('"')[0].split("/*")[0].split("//")[0].strip()
            return val if val else None
        except Exception:
            return None

    def get_extends(self, model_name: str) -> List[str]:
        """
        Fetches the classes that the given model inherits from.

        :param model_name: Name of the Modelica model.
        :return: List of inherited classes.
        """
        try:
            cmd = f"getInheritedClasses({model_name})"
            result = self._omc.sendExpression(cmd)
            if isinstance(result, (list, tuple)):
                return [str(c) for c in result]
            elif isinstance(result, str) and result:
                return [result]
        except Exception:
            pass
        return []

    def simulate_model(
        self, model_name: str, stop_time: float = 0.0, om_file: Optional[str] = None
    ) -> bool:
        """
        Runs a Modelica simulation to evaluate initialization and steady-state values.

        :param model_name: Name of the Modelica model.
        :param stop_time: Stop time.
        :param om_file: Output CSV file.
        :return: True if successful, False otherwise.
        """
        logger.info(f"Starting OMC simulation for '{model_name}' (stopTime={stop_time}).")

        if om_file:
            res = self._omc.sendExpression(
                f'simulate({model_name}, stopTime={stop_time}, outputFormat="csv")'
            )
            if isinstance(res, dict) and "resultFile" in res:
                shutil.copy2(res["resultFile"], om_file)

        res = self._omc.sendExpression(f"simulate({model_name}, stopTime={stop_time})")

        if res and "timeCompile" in str(res) and "Error" not in str(res):
            logger.info("OMC Simulation completed successfully.")
            return True

        logger.error(f"OMC Simulation failed: {res}")
        return False

    def get_simulation_value(self, variable_name: str, time: float = 0.0) -> Optional[float]:
        """
        Extracts the numerical value of a variable at a specific time.

        :param variable_name: Variable name.
        :param time: Simulation time.
        :return: Float value or None.
        """
        try:
            val = self._omc.sendExpression(f"val({variable_name}, {time})")
            if val is not None and not isinstance(val, str):
                return float(val)
            elif isinstance(val, str) and "Error" not in val:
                return float(val)
            return None
        except Exception:
            return None

    def get_working_directory(self) -> str:
        """Gets the current working directory of the OMC session."""
        res = self._omc.sendExpression("cd()")
        return str(res).strip('"') if res else ""

    def set_working_directory(self, path: str) -> bool:
        """
        Sets the working directory for the OMC session.

        :param path: Directory path.
        :return: True if successful, False otherwise.
        """
        clean_path = str(Path(path).resolve()).replace("\\", "/")
        res = self._omc.sendExpression(f'cd("{clean_path}")')
        return "Error" not in str(res)
