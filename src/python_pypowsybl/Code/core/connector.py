"""
OpenModelica Connector Module.

This module provides the OMCConnector class, which manages the communication
and interaction with the OpenModelica Compiler (OMC) via the OMPython API.
"""

import logging
import math
import shutil
from pathlib import Path
from typing import Optional, List, Any, Dict, Tuple

from OMPython import OMCSessionZMQ

from python_pypowsybl.Code.core.compatibility import DynawoLibraryCompatibility

logger = logging.getLogger(__name__)

# The Dynawo Modelica library requires this exact version of the Modelica Standard Library
MSL_VERSION = "3.2.3"

# OMPython reports every OMC message (e.g. unbalanced connectors in the Dynawo library, or
# the expected errors of a probe instantiation) through its own loggers. The connector
# captures the errors itself and reports the relevant ones, so OMPython is silenced.
logging.getLogger("OMPython").setLevel(logging.CRITICAL)


def _quote(text: str) -> str:
    """Escapes a Python string so that it can be embedded in an OMC string literal."""
    return text.replace("\\", "\\\\").replace('"', '\\"')


class OMCConnector:
    """
    Manages the session with the OpenModelica Compiler (OMC).
    Provides methods to load libraries, check models, and extract parameters,
    components, and topology definitions from Modelica code.
    """

    def __init__(self) -> None:
        """
        Initializes the connection to the OpenModelica Compiler (OMC).
        Sets up the ZeroMQ session and the cache of class definitions.
        Raises an exception if the connection fails.
        """
        logger.info("Connecting to OpenModelica Compiler (OMC)...")
        try:
            self._omc = OMCSessionZMQ()
            logger.info("OMC Session established successfully.")
        except Exception as e:
            logger.critical(f"Failed to connect to OMC: {e}")
            raise

        # Textual class definitions, cached to improve query performance
        self._list_cache: Dict[str, str] = {}

        self.compatibility: Optional[DynawoLibraryCompatibility] = None
        # Directory of the loaded Dynawo Modelica library (package Dynawo)
        self.dynawo_library: Optional[Path] = None
        self.last_error: str = ""

    # ------------------------------------------------------------------ #
    # Low level helpers
    # ------------------------------------------------------------------ #

    def send(self, expression: str, parsed: bool = True) -> Any:
        """
        Sends an expression to OMC, returning None instead of raising when OMC reports
        an error. The error text is kept in ``last_error``.

        :param expression: OMC scripting expression.
        :param parsed: Whether OMPython should parse the result.
        :return: The OMC result, or None if OMC reported an error.
        """
        self.last_error = ""
        try:
            return self._omc.sendExpression(expression, parsed=parsed)
        except Exception as e:
            self.last_error = str(e)
            return None

    def is_class(self, class_name: str) -> bool:
        """Tells whether a class (model, package, record, type...) is loaded in OMC."""
        return bool(self.send(f"getClassRestriction({class_name})"))

    def load_file(self, file_path: str) -> bool:
        """
        Loads a Modelica file in the OMC session as it is on disk.

        :param file_path: Path to the Modelica file.
        :return: True if OMC loaded the file successfully.
        """
        path_str = str(Path(file_path).resolve()).replace("\\", "/")
        return bool(self.send(f'loadFile("{_quote(path_str)}")'))

    def load_string(self, source: str, file_name: str) -> bool:
        """
        Loads Modelica source code in the OMC session, attributing it to a file name.

        :param source: Modelica source code.
        :param file_name: File the classes are attributed to (used by getSourceFile).
        :return: True if OMC parsed and loaded the code successfully.
        """
        return bool(self.send(f'loadString("{_quote(source)}", "{_quote(file_name)}")'))

    # ------------------------------------------------------------------ #
    # Loading
    # ------------------------------------------------------------------ #

    def load_libraries(self, dynawo_pkg_path: str) -> None:
        """
        Loads the standard Modelica libraries and the specified Dynawo package, then
        installs the compatibility layer required by the loaded library version.

        :param dynawo_pkg_path: Path to the local Dynawo package directory.
        """
        logger.info("Loading Standard Modelica Libraries...")
        for library in ("Modelica", "Complex", "ModelicaServices"):
            if not self.send(f'loadModel({library}, {{"{MSL_VERSION}"}})'):
                logger.warning(
                    f"{library} {MSL_VERSION} not found, loading the default version instead."
                )
                self.send(f"loadModel({library})")

        pkg_path = Path(dynawo_pkg_path).resolve()
        if not pkg_path.name == "package.mo":
            pkg_path = pkg_path / "package.mo"

        load_path_str = str(pkg_path).replace("\\", "/")
        logger.info(f"Loading Dynawo Package from: {load_path_str}")

        if not self.load_file(load_path_str):
            logger.error("Failed to load Dynawo package. Please check the path.")
            return
        self.dynawo_library = pkg_path.parent

        self.compatibility = DynawoLibraryCompatibility(self)
        self.compatibility.install()

    def load_local_files(self, source_dir: str, file_list: List[str]) -> None:
        """
        Loads user-specified local Modelica files into the OMC session. The files are
        read and adapted in memory by the compatibility layer, so that they are never
        modified on disk.

        :param source_dir: The root directory containing the source files.
        :param file_list: List of file names to load.
        """
        src_path = Path(source_dir).resolve()
        logger.info(f"Loading {len(file_list)} local files from {src_path}...")

        for file_name in file_list:
            file_path = src_path / file_name
            try:
                source = file_path.read_text(encoding="utf-8")
            except OSError as e:
                logger.warning(f"Failed to read local file {file_path}: {e}")
                continue

            if self.compatibility is not None:
                source = self.compatibility.adapt_source(source, file_name)

            if not self.load_string(source, str(file_path).replace("\\", "/")):
                logger.warning(f"Failed to load local file: {file_name} ({self.last_error})")

        # Classes may have been redefined: cached textual definitions are now stale
        self._list_cache.clear()

    # ------------------------------------------------------------------ #
    # Model queries
    # ------------------------------------------------------------------ #

    def check_model(self, model_name: str) -> bool:
        """
        Checks the target model for syntactic and semantic errors.

        :param model_name: Name of the Modelica model to check.
        :return: True if no errors are found, False otherwise.
        """
        logger.info(f"Checking model: {model_name}")
        res = self.send(f"checkModel({model_name})")
        if res is None:
            logger.warning(f"checkModel({model_name}) reported errors: {self.last_error}")
            return False
        return "Error" not in str(res)

    def instantiate(self, model_name: str) -> Tuple[Optional[str], str]:
        """
        Flattens a model.

        :param model_name: Name of the Modelica model.
        :return: The flattened model (None on failure) and the OMC error message.
        """
        # OMC errors are raised by OMPython (and captured by send), so any non-empty
        # result is a flattened model. Its text may legitimately contain the word
        # "Error" in descriptions, so the result itself is not inspected.
        res = self.send(f"instantiateModel({model_name})")
        if isinstance(res, str) and res.strip():
            return res, ""
        return None, self.last_error

    def get_source_file(self, class_name: str) -> Optional[str]:
        """
        Returns the file in which a class is defined.

        :param class_name: Fully qualified class name.
        :return: The path of the file, or None if unknown.
        """
        res = self.send(f"getSourceFile({class_name})")
        return str(res) if res else None

    def list_class(self, class_name: str) -> str:
        """
        Returns the Modelica source code of a class as stored by OMC (cached).

        :param class_name: Fully qualified class name.
        :return: The source code, or an empty string if the class is unknown.
        """
        if class_name not in self._list_cache:
            # OMC returns an empty string for an unknown class. The source code itself is not
            # inspected, since its descriptions may legitimately contain the word "Error".
            res = self.send(f"list({class_name})")
            self._list_cache[class_name] = str(res) if res else ""
        return self._list_cache[class_name]

    def get_components(self, model_name: str) -> List[Any]:
        """
        Retrieves a list of component declarations inside the specified model.

        :param model_name: Name of the Modelica model.
        :return: List of components.
        """
        return self.send(f"getComponents({model_name})") or []

    def get_component_modification(self, model_name: str, index: int) -> str:
        """
        Retrieves the modifier string used during component instantiation.

        :param model_name: Name of the Modelica model.
        :param index: Component index.
        :return: Modifier string.
        """
        res = self.send(f"getNthComponentModification({model_name}, {index})", parsed=False)
        return str(res) if res else ""

    def get_connections(self, model_name: str) -> List[List[str]]:
        """
        Retrieves the electrical or mathematical connections defined in the model.

        :param model_name: Name of the Modelica model.
        :return: List of connection pairs.
        """
        count_str = self.send(f"getConnectionCount({model_name})")
        connections = []
        if count_str:
            try:
                count = int(count_str)
                for i in range(1, count + 1):
                    conn = self.send(f"getNthConnection({model_name}, {i})")
                    if conn and len(conn) >= 2:
                        connections.append([conn[0], conn[1]])
            except ValueError:
                pass
        return connections

    def get_extends(self, model_name: str) -> List[str]:
        """
        Fetches the classes that the given model inherits from.

        :param model_name: Name of the Modelica model.
        :return: List of inherited classes.
        """
        result = self.send(f"getInheritedClasses({model_name})")
        if isinstance(result, (list, tuple)):
            return [str(c) for c in result]
        if isinstance(result, str) and result:
            return [result]
        return []

    # ------------------------------------------------------------------ #
    # Simulation
    # ------------------------------------------------------------------ #

    def simulate_model(
        self, model_name: str, stop_time: float = 0.0, om_file: Optional[str] = None
    ) -> bool:
        """
        Runs a Modelica simulation to evaluate initialization and steady-state values.

        :param model_name: Name of the Modelica model.
        :param stop_time: Stop time.
        :param om_file: Optional path where the results are also exported in CSV format.
        :return: True if successful, False otherwise.
        """
        logger.info(f"Starting OMC simulation for '{model_name}' (stopTime={stop_time}).")

        if om_file:
            res = self.send(f'simulate({model_name}, stopTime={stop_time}, outputFormat="csv")')
            if isinstance(res, dict) and res.get("resultFile"):
                shutil.copy2(res["resultFile"], om_file)

        res = self.send(f"simulate({model_name}, stopTime={stop_time})")

        if isinstance(res, dict) and res.get("resultFile"):
            logger.info("OMC Simulation completed successfully.")
            return True

        messages = res.get("messages", "") if isinstance(res, dict) else self.last_error
        # Only the error lines are reported (OMC also lists every warning of the library)
        errors = [line.strip() for line in str(messages).splitlines() if "error" in line.lower()]
        logger.error(f"OMC Simulation of {model_name} failed: {' | '.join(errors) or messages}")
        return False

    def get_simulation_value(self, variable_name: str, time: float = 0.0) -> Optional[float]:
        """
        Extracts the numerical value of a variable at a specific time.

        :param variable_name: Variable name.
        :param time: Simulation time.
        :return: Float value or None.
        """
        val = self.send(f"val({variable_name}, {time})")
        try:
            value = float(val)
        except (TypeError, ValueError):
            # No result (None) or an OMC message instead of a number
            return None
        # OMC returns NaN for the variables missing from the result file
        return value if math.isfinite(value) else None

    def get_working_directory(self) -> str:
        """Gets the current working directory of the OMC session."""
        res = self.send("cd()")
        return str(res).strip('"') if res else ""

    def set_working_directory(self, path: str) -> bool:
        """
        Sets the working directory for the OMC session.

        :param path: Directory path.
        :return: True if successful, False otherwise.
        """
        clean_path = str(Path(path).resolve()).replace("\\", "/")
        res = self.send(f'cd("{_quote(clean_path)}")')
        return res is not None and "Error" not in str(res)
