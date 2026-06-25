# Model Initialization

This folder contains notebooks for creating initialized dynamic models and packages from auxiliary cases generated with `BuildAux`.

## Contents

- `Initialization_single.ipynb`: initializes a single `.mo` model.
- `Initialization_package.ipynb`: initializes a package model across its inheritance chain.
- `scripts/`: helper code and initialization parameter dictionaries.
- `models/`: input single-file models.
- `MyIEEE14/` and `MyNordic/`: example dynamic packages.

## Configuration

For a single-file model, configure `MODEL_DIR`, `MODEL`, `MODEL_FILE_PATH`, `INITIALIZED_MODEL`, `INITIALIZED_FILE_PATH`, `AUX_MODEL`, `AUX_FILE_PATH`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, and `PLOT_VARIABLE`.

For a package model, configure `MODEL_DIR`, `MODELS_PKG_PATH`, `AUX_DIR`, `AUX_PACKAGE_FILE`, `MODEL`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, `INIT_MODEL_BY_COMPONENT`, and `PLOT_VARIABLE`.

Run the cells in order. The auxiliary model is simulated, its initialization values are extracted, and the initialized dynamic model or package is written as `*_initialized`.
