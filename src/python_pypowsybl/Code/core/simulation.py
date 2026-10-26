"""
Dynamic Simulation Module.

Runs the Dynawo time-domain simulation of a case through PyPowSyBl, then replays it
with the Dynawo command line interface:

- PyPowSyBl writes the Dynawo input files (DYD, PAR, jobs...) from the dynamic model
  mapping, so that none of them has to be written by hand.
- The replay dumps the initial values computed by Dynawo, which PyPowSyBl does not
  expose yet and which are needed to generate the initialized Modelica model. It also
  applies the compatibility fixes required by the installed Dynawo version, so that
  cases that PyPowSyBl cannot run with it (for instance an infinite bus next to a WECC
  model with Dynawo 1.7) are still simulated.

The curves of the replay are the reference results of the simulation.

When the models of the case were compiled (model_compiler module), both runs read them
from the model database of the case, given to Dynawo through DYNAWO_DDB_DIR.
"""

import logging
import os
import re
import shutil
from contextlib import contextmanager
from dataclasses import dataclass
from pathlib import Path
from typing import Iterator, Optional

import pandas as pd
import pypowsybl.dynamic as dyn

from python_pypowsybl.Code.core.cli_runner import CLIRunResult, DynawoCLIRunner
from python_pypowsybl.Code.core.model_linker import DynamicModelSetup, copy_network
from python_pypowsybl.Code.core.parameter_generator import DynawoParameterFiles

logger = logging.getLogger(__name__)

# PyPowSyBl configuration, whose dynawo section gives the installation PyPowSyBl runs
POWSYBL_CONFIG_FILE = Path("~/.itools/config.yml").expanduser()


@contextmanager
def dynawo_model_database(model_database: Optional[str]) -> Iterator[None]:
    """
    Makes the Dynawo processes started in the block read their models from a model
    database (DYNAWO_DDB_DIR), restoring the environment afterwards.

    :param model_database: Model database, or None to keep the one of the installation.
    """
    if not model_database:
        yield
        return
    previous = os.environ.get("DYNAWO_DDB_DIR")
    os.environ["DYNAWO_DDB_DIR"] = model_database
    try:
        yield
    finally:
        if previous is None:
            os.environ.pop("DYNAWO_DDB_DIR", None)
        else:
            os.environ["DYNAWO_DDB_DIR"] = previous


def configured_dynawo_home() -> Optional[str]:
    """Returns the Dynawo installation of the PyPowSyBl configuration (homeDir), if any."""
    if not POWSYBL_CONFIG_FILE.exists():
        return None
    match = re.search(
        r"^\s*homeDir:\s*[\"']?([^\"'\n]+?)[\"']?\s*$",
        POWSYBL_CONFIG_FILE.read_text(encoding="utf-8"),
        re.MULTILINE,
    )
    return match.group(1) if match else None


@dataclass
class DynawoSimulationResult:
    """
    Results of a dynamic simulation.

    :param pypowsybl_status: Status of the PyPowSyBl run ("SUCCESS" or "FAILURE").
    :param pypowsybl_message: Status text of the PyPowSyBl run.
    :param replay: Outcome of the Dynawo command line replay, if it could be run.
    :param curves: Curves of the replay, indexed by time in s.
    :param working_directory: Directory of the replay (inputs and outputs).
    """

    pypowsybl_status: str
    pypowsybl_message: str
    replay: Optional[CLIRunResult]
    curves: pd.DataFrame
    working_directory: Optional[str]

    @property
    def succeeded(self) -> bool:
        """Whether the simulation, and the dump of its initial values, succeeded."""
        return self.replay is not None and self.replay.success

    @property
    def init_values_directory(self) -> Optional[str]:
        """Directory of the initial values dumped after the global initialization."""
        if not self.working_directory:
            return None
        return os.path.join(self.working_directory, "outputs", "initValues", "globalInit")

    def summary(self) -> str:
        """Human readable summary of both runs."""
        lines = [f"PyPowSyBl run: {self.pypowsybl_status}"]
        if self.pypowsybl_status != "SUCCESS" and self.pypowsybl_message:
            lines[-1] += f" ({self.pypowsybl_message})"
        if self.replay is None:
            lines.append("Dynawo CLI replay: not run (no input files were produced)")
        else:
            status = "SUCCESS" if self.replay.success else f"FAILURE ({self.replay.message})"
            lines.append(f"Dynawo CLI replay with initial values dump: {status}")
        return "\n".join(lines)


class DynawoSimulationRunner:
    """
    Runs the dynamic simulation of a case and its replay with the Dynawo CLI.

    :param dynawo_path: Root of the Dynawo installation.
    :param export_directory: Export directory of the case; the replay is written to
        its ``dynamic_files`` sub-directory.
    """

    def __init__(self, dynawo_path: str, export_directory: str) -> None:
        self.dynawo_path = dynawo_path
        self.export_directory = export_directory

    def run(
        self,
        setup: DynamicModelSetup,
        parameter_files: DynawoParameterFiles,
        events: dyn.EventMapping,
        outputs: dyn.OutputVariableMapping,
        start_time: float = 0.0,
        stop_time: float = 10.0,
    ) -> DynawoSimulationResult:
        """
        Runs the simulation through PyPowSyBl and replays it with the Dynawo CLI.

        :param setup: Dynamic model setup returned by link_models.
        :param parameter_files: Parameter files returned by the parameter generator.
        :param events: Events of the simulation.
        :param outputs: Curves to record.
        :param start_time: Start time in s.
        :param stop_time: Stop time in s.
        :return: The results of the simulation.
        """
        self._check_compiled_models(setup)
        parameters = dyn.Parameters(
            start_time=start_time,
            stop_time=stop_time,
            provider_parameters=parameter_files.provider_parameters(),
        )

        # PyPowSyBl writes the final state of the simulation back into the network: a copy
        # is simulated so that the load flow results, used by the initialization, are kept
        network = copy_network(setup.network)

        # The replay of a previous run is removed first: if this run fails, its initial
        # values dump must not be taken for the one of this run
        replay_dir = os.path.join(self.export_directory, "dynamic_files")
        shutil.rmtree(replay_dir, ignore_errors=True)

        before = DynawoCLIRunner.list_working_directories()
        status, message = "FAILURE", ""
        try:
            with dynawo_model_database(setup.model_database):
                result = dyn.Simulation().run(
                    network,
                    model_mapping=setup.mapping,
                    event_mapping=events,
                    timeseries_mapping=outputs,
                    parameters=parameters,
                )
            status = result.status().name
            message = result.status_text()
        except Exception as e:
            message = str(e)
        logger.info(f"PyPowSyBl dynamic simulation: {status} {message}")

        working_dir = DynawoCLIRunner.find_new_working_directory(before)
        if working_dir is None:
            logger.error(
                "The Dynawo input files written by PyPowSyBl were not found. PyPowSyBl only "
                "keeps them when 'debug: true' is set in the 'dynawo' section of "
                "~/.itools/config.yml (the first cell of the notebooks writes it)."
            )
            return DynawoSimulationResult(status, message, None, pd.DataFrame(), None)

        jobs_file = DynawoCLIRunner.prepare_replay(
            working_dir, replay_dir, self.dynawo_path, setup.model_database
        )
        replay = DynawoCLIRunner.run(jobs_file, self.dynawo_path, setup.model_database)
        if not replay.success:
            logger.error(f"Dynawo CLI replay failed: {replay.message}")

        return DynawoSimulationResult(
            pypowsybl_status=status,
            pypowsybl_message=message,
            replay=replay,
            curves=self._read_curves(replay_dir),
            working_directory=replay_dir,
        )

    def _check_compiled_models(self, setup: DynamicModelSetup) -> None:
        """
        Checks that the compiled models of the case are simulated by the Dynawo installation
        that compiled them, both in the replay and in the PyPowSyBl run: a library compiled
        for another installation may not be binary compatible.
        """
        if setup.compiled_models is None:
            return
        compiled_with = Path(setup.compiled_models.dynawo_path).resolve()
        installations = {"Dynawo of the replay": self.dynawo_path}
        powsybl_home = configured_dynawo_home()
        if powsybl_home:
            installations["Dynawo of the PyPowSyBl configuration"] = powsybl_home
        for role, path in installations.items():
            if Path(path).expanduser().resolve() != compiled_with:
                raise ValueError(
                    f"The models of the case were compiled with the Dynawo installation "
                    f"{compiled_with}, but the {role} is {path}: they must be the same."
                )

    @staticmethod
    def _read_curves(replay_dir: str) -> pd.DataFrame:
        """Reads the curves of the replay, indexed by time in s."""
        curves_file = Path(replay_dir) / "outputs" / "curves" / "curves.csv"
        if not curves_file.exists():
            return pd.DataFrame()
        curves = pd.read_csv(curves_file, sep=";")
        curves = curves.loc[:, ~curves.columns.str.startswith("Unnamed")]
        return curves.set_index("time")
