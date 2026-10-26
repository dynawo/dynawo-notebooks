"""
Dynawo CLI Runner Module.

This module provides utilities to copy the input files of a PyPowSyBl dynamic
simulation from its working directory, adapt them (enabling the dump of the initial
values, and applying the compatibility fixes required by the installed Dynawo
version), and replay the simulation directly with the Dynawo command line interface.

When the models of the case were compiled, the replay reads them from the model database
of the case (DYNAWO_DDB_DIR), like the PyPowSyBl run.
"""

import glob
import logging
import os
import shutil
import subprocess
import tempfile
import xml.etree.ElementTree as ET
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

logger = logging.getLogger(__name__)

DYNAWO_NAMESPACE = "http://www.rte-france.com/dynawo"


def _tag(name: str) -> str:
    """Returns the qualified name of a tag of the Dynawo XML namespace."""
    return f"{{{DYNAWO_NAMESPACE}}}{name}"


@dataclass
class CLIRunResult:
    """Outcome of a Dynawo command line execution."""

    success: bool
    return_code: int
    working_directory: str
    jobs_file: str
    stdout: str
    stderr: str

    @property
    def message(self) -> str:
        """Last meaningful line of the Dynawo output, typically the error message."""
        lines = [line for line in (self.stderr + "\n" + self.stdout).splitlines() if line.strip()]
        errors = [line for line in lines if "Error" in line or "error" in line]
        return (errors or lines or [""])[-1].strip()


class DynawoCLIRunner:
    """
    Handles the external execution of Dynawo simulations by copying
    the PyPowSyBl working files, adapting the .jobs and .dyd files,
    and invoking the Dynawo shell executable.
    """

    # ------------------------------------------------------------------ #
    # PyPowSyBl working directories
    # ------------------------------------------------------------------ #

    @staticmethod
    def list_working_directories() -> Set[str]:
        """Lists the Dynawo working directories created by PyPowSyBl in the temp folders."""
        patterns = {os.path.join(tempfile.gettempdir(), "dynawo_*"), "/tmp/dynawo_*"}
        directories = set()
        for pattern in patterns:
            for directory in glob.glob(pattern):
                if os.path.isdir(directory) and glob.glob(os.path.join(directory, "*.jobs")):
                    directories.add(os.path.realpath(directory))
        return directories

    @staticmethod
    def find_new_working_directory(before: Set[str]) -> Optional[str]:
        """
        Returns the most recent working directory that did not exist before a run.

        :param before: Working directories listed before the run.
        :return: The new working directory, or None.
        """
        new = DynawoCLIRunner.list_working_directories() - before
        return max(new, key=os.path.getmtime) if new else None

    @staticmethod
    def _find_latest_temp_dir() -> str:
        """Finds the most recently modified Dynawo working directory (legacy behaviour)."""
        directories = DynawoCLIRunner.list_working_directories()
        return max(directories, key=os.path.getmtime) if directories else ""

    # ------------------------------------------------------------------ #
    # Input preparation
    # ------------------------------------------------------------------ #

    @staticmethod
    def prepare_replay(
        source_dir: str,
        target_dir: str,
        dynawo_sys_path: str,
        model_database: Optional[str] = None,
    ) -> str:
        """
        Copies the inputs of a PyPowSyBl simulation (without its outputs) and adapts them
        for the replay.

        :param source_dir: PyPowSyBl working directory.
        :param target_dir: Directory of the replay (overwritten).
        :param dynawo_sys_path: Root of the Dynawo installation.
        :param model_database: Model database of the case, when its models were compiled.
        :return: The path of the jobs file of the replay.
        """
        if os.path.exists(target_dir):
            shutil.rmtree(target_dir)
        shutil.copytree(
            source_dir,
            target_dir,
            ignore=shutil.ignore_patterns("outputs", "*.out", "*.err"),
        )
        logger.info(f"Simulation files copied from {source_dir} to {target_dir}")

        jobs_files = sorted(Path(target_dir).glob("*.jobs"))
        if not jobs_files:
            raise FileNotFoundError(f".jobs file not found in {target_dir}")
        jobs_file = str(jobs_files[0])

        DynawoCLIRunner._patch_jobs(jobs_file)
        for dyd_file in Path(target_dir).glob("*.dyd"):
            DynawoCLIRunner._patch_dyd(str(dyd_file), dynawo_sys_path, model_database)
        return jobs_file

    @staticmethod
    def _patch_jobs(jobs_file: str) -> None:
        """
        Enables the dump of the local and global initial values, and disables the export
        of the final IIDM state, which is not used and cannot be written when buses are
        modelled by infinite buses.
        """
        ET.register_namespace("dyn", DYNAWO_NAMESPACE)
        tree = ET.parse(jobs_file)
        root = tree.getroot()
        ns = {"dyn": DYNAWO_NAMESPACE}

        outputs = root.find(".//dyn:outputs", ns)
        dump_tags = root.findall(".//dyn:dumpInitValues", ns)
        if not dump_tags and outputs is not None:
            dump_tags = [ET.SubElement(outputs, _tag("dumpInitValues"))]
        for dump_tag in dump_tags:
            dump_tag.set("local", "true")
            dump_tag.set("global", "true")
        for final_state in root.findall(".//dyn:finalState", ns):
            final_state.set("exportIIDMFile", "false")

        tree.write(jobs_file, encoding="utf-8", xml_declaration=True)
        logger.info("Jobs file modified: dumpInitValues enabled, final IIDM export disabled.")

    @staticmethod
    def _model_variables(
        model_database: str, lib: str, cache: Dict[str, Tuple[Set[str], Set[str]]]
    ) -> Tuple[Set[str], Set[str]]:
        """
        Returns the variables declared by a model of a Dynawo model database, and the
        connector names of its external variables (cached).
        """
        if lib not in cache:
            ddb = Path(model_database)
            names: Set[str] = set()
            description = ddb / f"{lib}.desc.xml"
            if description.exists():
                for variable in ET.parse(description).getroot().iter(_tag("variable")):
                    names.add(variable.get("name"))
            external: Set[str] = set()
            extvar = ddb / f"{lib}.extvar"
            if extvar.exists():
                for variable in ET.parse(extvar).getroot().iter(_tag("variable")):
                    connector = variable.get("id").replace(".", "_")
                    external.add(connector)
                    for suffix in ("_value", "_V_re", "_V_im", "_i_re", "_i_im"):
                        if connector.endswith(suffix):
                            external.add(connector[: -len(suffix)])
            cache[lib] = (names, external)
        return cache[lib]

    @staticmethod
    def _fix_variable_name(variable: str, variables: Set[str], external: Set[str]) -> str:
        """
        Fixes a connected variable name that only differs from the variables of the model
        by the ``_value`` suffix of the ImPin/BPin connectors.

        The connectors of the Dynawo 1.7 Modelica models are records accessed through
        ``.value`` (e.g. ``setPoint_setPoint_value``), while PyPowSyBl writes the names of
        Dynawo >= 1.8, where most of them became plain variables (``setPoint_setPoint``).
        Some 1.7 variables are already plain (e.g. ``line_state``) while PyPowSyBl adds the
        suffix. The external variables of the model (.extvar) are resolved by Dynawo from
        their connector name and are left untouched, as well as the names that exist or
        that are the prefix of several variables (connectors such as ``line_terminal1``).
        """
        if not variables or "@" in variable or variable in variables or variable in external:
            return variable
        if variable.endswith("_value") and variable[: -len("_value")] in variables:
            return variable[: -len("_value")]
        extensions = [name for name in variables if name.startswith(variable + "_")]
        if extensions == [f"{variable}_value"]:
            return f"{variable}_value"
        return variable

    @staticmethod
    def _patch_dyd(
        dyd_file: str, dynawo_sys_path: str, model_database: Optional[str] = None
    ) -> None:
        """
        Applies the compatibility fixes needed by the installed Dynawo version to a dynamic
        models file written by PyPowSyBl: every connected variable is checked against the
        description of its model in the Dynawo model database (see _fix_variable_name).
        """
        database = model_database or os.path.join(dynawo_sys_path, "ddb")
        ET.register_namespace("dyn", DYNAWO_NAMESPACE)
        tree = ET.parse(dyd_file)
        root = tree.getroot()

        libs = {model.get("id"): model.get("lib") for model in root.iter(_tag("blackBoxModel"))}
        connector_libs: Dict[str, Tuple[Optional[str], Optional[str]]] = {}
        for macro_connect in root.iter(_tag("macroConnect")):
            connector_libs.setdefault(
                macro_connect.get("connector"),
                (libs.get(macro_connect.get("id1")), libs.get(macro_connect.get("id2"))),
            )

        cache: Dict[str, Tuple[Set[str], Set[str]]] = {}
        renamed: List[str] = []

        def fix(connect: ET.Element, lib1: Optional[str], lib2: Optional[str]) -> None:
            for attribute, lib in (("var1", lib1), ("var2", lib2)):
                if not lib:
                    continue
                variable = connect.get(attribute)
                variables, external = DynawoCLIRunner._model_variables(database, lib, cache)
                fixed = DynawoCLIRunner._fix_variable_name(variable, variables, external)
                if fixed != variable:
                    connect.set(attribute, fixed)
                    renamed.append(f"{variable} -> {fixed}")

        for connector in root.iter(_tag("macroConnector")):
            lib1, lib2 = connector_libs.get(connector.get("id"), (None, None))
            for connect in connector.iter(_tag("connect")):
                fix(connect, lib1, lib2)
        for connect in root.findall(_tag("connect")):
            fix(connect, libs.get(connect.get("id1")), libs.get(connect.get("id2")))

        if renamed:
            tree.write(dyd_file, encoding="utf-8", xml_declaration=True)
            logger.info(
                f"{Path(dyd_file).name}: variables renamed for the installed Dynawo version: "
                f"{', '.join(sorted(set(renamed)))}"
            )

    # ------------------------------------------------------------------ #
    # Execution
    # ------------------------------------------------------------------ #

    @staticmethod
    def run(
        jobs_file: str, dynawo_sys_path: str, model_database: Optional[str] = None
    ) -> CLIRunResult:
        """
        Runs a Dynawo jobs file with the command line interface.

        :param jobs_file: Path of the jobs file.
        :param dynawo_sys_path: Root of the Dynawo installation.
        :param model_database: Model database of the case, when its models were compiled.
        :return: The outcome of the execution.
        """
        working_directory = os.path.dirname(os.path.abspath(jobs_file))
        dynawo_executable = os.path.join(dynawo_sys_path, "dynawo.sh")
        environment = None
        if model_database:
            environment = dict(os.environ, DYNAWO_DDB_DIR=model_database)
            logger.info(f"Dynawo model database: {model_database}")
        logger.info(f"Starting Dynawo execution via command line in {working_directory}...")
        process = subprocess.run(
            [dynawo_executable, "jobs", os.path.basename(jobs_file)],
            capture_output=True,
            text=True,
            cwd=working_directory,
            env=environment,
        )
        success = (
            process.returncode == 0
            and "Dynawo execution failed" not in process.stdout + process.stderr
        )
        return CLIRunResult(
            success=success,
            return_code=process.returncode,
            working_directory=working_directory,
            jobs_file=jobs_file,
            stdout=process.stdout,
            stderr=process.stderr,
        )

    @staticmethod
    def copy_and_run(
        export_folder: str, dynawo_sys_path: str, working_dir: Optional[str] = None
    ) -> Optional[CLIRunResult]:
        """
        Copies the inputs of a PyPowSyBl simulation to ``<export_folder>/dynamic_files``,
        enables the dump of the initial values and replays the simulation via the CLI.

        :param export_folder: Export directory of the case.
        :param dynawo_sys_path: Root of the Dynawo installation.
        :param working_dir: PyPowSyBl working directory of the simulation. When omitted,
            the most recent one is used, which is only safe if no other simulation ran
            in the meantime.
        :return: The outcome of the execution, or None if no working directory was found.
        """
        source = working_dir or DynawoCLIRunner._find_latest_temp_dir()
        if not source:
            logger.critical("Could not find any Dynawo temporary directory.")
            return None

        dynamic_dir = os.path.join(export_folder, "dynamic_files")
        jobs_file = DynawoCLIRunner.prepare_replay(source, dynamic_dir, dynawo_sys_path)
        result = DynawoCLIRunner.run(jobs_file, dynawo_sys_path)
        if result.success:
            logger.info("CLI Simulation completed without errors.")
        else:
            logger.error(f"CLI Simulation failed: {result.message}")
        return result
