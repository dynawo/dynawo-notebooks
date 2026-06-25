# Build Auxiliary Models

This folder contains notebooks for generating auxiliary steady-state models and packages used by the initialization workflow.

## Contents

- `BuildAux_single.ipynb`: builds an auxiliary model from a single `.mo` file.
- `BuildAux_package.ipynb`: builds an auxiliary package from a package-based model.
- `scripts/`: helper code and replacement dictionaries used by both notebooks.
- `models/`: input single-file models.
- `MyIEEE14/` and `MyNordic/`: example input packages.

## Configuration

For a single-file model, configure `MODEL_DIR`, `MODEL`, `MODEL_FILE_PATH`, `DYNAWO_PKG_PATH`, and `MODELICA_PKG_PATH`.

For a package model, configure `MODEL_DIR`, `MODELS_PKG_PATH`, `MODEL`, `DYNAWO_PKG_PATH`, and `MODELICA_PKG_PATH`.

Both notebooks also provide `INIT_MODEL_BY_COMPONENT` and `SLACK_COMPONENT` for component-specific initialization settings.

Run the notebook cells in order. The generated model or package is named `*_auxiliary`.
