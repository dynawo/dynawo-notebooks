# Model Initialization

This folder contains notebooks for creating initialized dynamic models and packages from auxiliary cases generated with `BuildAux`.

## Contents

- `Initialization_single.ipynb`: initializes a single `.mo` model.
- `Initialization_package.ipynb`: initializes a package model across its inheritance chain.
- `models/`: input models and packages, together with the `*_auxiliary` cases they are initialized from.
- `outputs/`: generated initialized models and packages.

Both notebooks reuse the shared helper modules in `../scripts/`.

## Configuration

For a single-file model, configure `MODEL`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, `INIT_MODEL_BY_COMPONENT`, and `PLOT_VARIABLE`.

For a package model, configure `MODEL`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, `INIT_MODEL_BY_COMPONENT`, and `PLOT_VARIABLE`. The package, auxiliary, and initialized paths are derived from `MODEL`.

Each notebook reads a pre-built auxiliary from `models/` (`<MODEL>_auxiliary.mo` for single models, or the `<PACKAGE>_auxiliary/` package). Generate it first with the matching `BuildAux` notebook (which writes to `BuildAux/outputs/`) and copy it into this folder's `models/`.

Run the cells in order. The auxiliary model is simulated, its initialization values are extracted, and the initialized dynamic model or package is written to `outputs/` as `*_initialized`.
