# Build Auxiliary Models

This folder contains notebooks for generating auxiliary steady-state models and packages used by the initialization workflow.

## Contents

- `BuildAux_single.ipynb`: builds an auxiliary model from a single `.mo` file.
- `BuildAux_package.ipynb`: builds an auxiliary package from a package-based model.
- `models/`: input models — single `.mo` files and source packages (`MyIEEE14/`, `MyNordic/`).
- `outputs/`: generated auxiliary models and packages.

Both notebooks reuse the shared helper modules in `../FullWorkflow/scripts/`.

## Configuration

For a single-file model, configure `MODEL`, `DYNAWO_PKG_PATH`, and `MODELICA_PKG_PATH`.

For a package model, configure `MODEL`, `DYNAWO_PKG_PATH`, and `MODELICA_PKG_PATH`. The package directory is derived from `MODEL`.

Both notebooks also provide `INIT_MODEL_BY_COMPONENT` and `SLACK_COMPONENT` for component-specific initialization settings.

Run the notebook cells in order. The generated model or package is written to `outputs/` as `*_auxiliary`.
