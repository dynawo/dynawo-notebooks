# OpenModelica Workflows in Python

This folder contains notebook workflows for OpenModelica cases using the Dynawo Modelica
library, driven from Python through OMPython. It mirrors
[`src/julia_openmodelica/`](../julia_openmodelica/), which does the same through OMJulia.

## Contents

- [`BuildAux/`](BuildAux/): builds an auxiliary steady-state model or package.
- [`Initialization/`](Initialization/): creates an initialized dynamic model or package from an existing auxiliary case.
- [`FullWorkflow/`](FullWorkflow/): builds the auxiliary case and creates the initialized dynamic case in one workflow.
- [`ParametricStudies/`](ParametricStudies/): runs parameter sweeps for single-file and package models, with optional reinitialization.
- [`StabilityAnalysis/`](StabilityAnalysis/): retrieves linearized OpenModelica models and performs small-signal stability analysis, using its own model variants without events and in ODE mode.
- [`scripts/`](scripts/): shared helper library (dictionaries, workflow helpers, and sweep/initialization helpers) reused across the notebooks.
- `dynawo_library/`: the Dynawo Modelica library the notebooks use, version 1.8.0. The
  installer downloads it from this repository's release, where it was taken from the
  Dynawo `nightly` GitHub release on 2026-09-08, built from `dynawo/dynawo` commit
  `62d451ac`.
- [`docs/`](docs/): rendered HTML exports of the notebooks, with their outputs, to view the results without running them.

## Prerequisites

OpenModelica 1.27 has to be installed beforehand, with the `omc` compiler available on
the PATH. Everything else is set up by `Installation/install_python_openmodelica.sh`:
the `.venv-python-om` environment with Python 3.12, OMPython and the other packages the
notebooks use, JupyterLab, and the Modelica Standard Library 3.2.3.

Dynawo itself is not needed. Its Modelica library, version 1.8.0 from a nightly build,
is in `dynawo_library/`, and the notebooks read it from there.

## Configuration

Each notebook starts with a configuration cell. It points at the Modelica Standard
Library installed under `~/.openmodelica/libraries` and at the Dynawo library in
`dynawo_library/`, and either can be pointed somewhere else by editing that cell. The
rest of it selects the model to work on and the options for that workflow.
