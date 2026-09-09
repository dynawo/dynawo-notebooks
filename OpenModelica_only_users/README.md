# OpenModelica Workflows

This folder contains notebook workflows for OpenModelica cases using the Dynawo Modelica library.

## Contents

- [`BuildAux/`](BuildAux/): builds an auxiliary steady-state model or package.
- [`Initialization/`](Initialization/): creates an initialized dynamic model or package from an existing auxiliary case.
- [`FullWorkflow/`](FullWorkflow/): builds the auxiliary case and creates the initialized dynamic case in one workflow.
- [`ParametricStudies/`](ParametricStudies/): runs parameter sweeps for single-file and package models, with optional reinitialization.
- [`StabilityAnalysis/`](StabilityAnalysis/): retrieves linearized OpenModelica models and performs small-signal stability analysis, using its own model variants without events and in ODE mode.
- [`scripts/`](scripts/): shared helper library (dictionaries, workflow helpers, and sweep/initialization helpers) reused across the notebooks.
- [`dynawo_library/`](dynawo_library/): the Dynawo Modelica library the notebooks use, version 1.8.0.
- [`docs/`](docs/): rendered HTML exports of the notebooks, with their outputs, to view the results without running them.
- `Older notebooks/`: previous examples and workflows kept for reference.

## Prerequisites

OpenModelica 1.27 has to be installed beforehand, with the `omc` compiler available on
the PATH. Everything else is set up by `Installation/install_julia.sh`: Julia and its
packages, JupyterLab, the `Julia (clean) 1.10` kernel these notebooks declare, and the
Modelica Standard Library 3.2.3.

Dynawo itself is not needed. Its Modelica library, version 1.8.0 from a nightly build,
is in [`dynawo_library/`](dynawo_library/), and the notebooks read it from there.

## Configuration

Each notebook starts with a configuration cell. It points at the Modelica Standard
Library installed under `~/.openmodelica/libraries` and at the Dynawo library in
[`dynawo_library/`](dynawo_library/), and either can be pointed somewhere else by
editing that cell. The rest of it selects the model to work on and the options for that
workflow.
