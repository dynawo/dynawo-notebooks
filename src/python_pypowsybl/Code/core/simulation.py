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
"""

import logging
import os
from dataclasses import dataclass
from pathlib import Path
from typing import Optional

import pandas as pd
import pypowsybl as pp
import pypowsybl.dynamic as dyn

from python_pypowsybl.Code.core.cli_runner import CLIRunResult, DynawoCLIRunner
from python_pypowsybl.Code.core.model_linker import DynamicModelSetup
from python_pypowsybl.Code.core.parameter_generator import DynawoParameterFiles

logger = logging.getLogger(__name__)


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
        parameters = dyn.Parameters(
            start_time=start_time,
            stop_time=stop_time,
            provider_parameters=parameter_files.provider_parameters(),
        )

        # PyPowSyBl writes the final state of the simulation back into the network: a copy
        # is simulated so that the load flow results, used by the initialization, are kept
        network = pp.network.load_from_binary_buffer(
            setup.network.save_to_binary_buffer(format="XIIDM")
        )

        before = DynawoCLIRunner.list_working_directories()
        status, message = "FAILURE", ""
        try:
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

        replay_dir = os.path.join(self.export_directory, "dynamic_files")
        jobs_file = DynawoCLIRunner.prepare_replay(working_dir, replay_dir, self.dynawo_path)
        replay = DynawoCLIRunner.run(jobs_file, self.dynawo_path)
        if not replay.success:
            logger.error(f"Dynawo CLI replay failed: {replay.message}")

        return DynawoSimulationResult(
            pypowsybl_status=status,
            pypowsybl_message=message,
            replay=replay,
            curves=self._read_curves(replay_dir),
            working_directory=replay_dir,
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
