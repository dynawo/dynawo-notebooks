# Model Initialization

This folder contains notebooks for creating initialized dynamic models from auxiliary models generated with `BuildAux`.

## Contents

- `Initialization_single.ipynb`: initializes a single `.mo` model.
- `Initialization_package.ipynb`: initializes a package model across its inheritance chain.
- `scripts/`: helper code and initialization parameter dictionaries.
- `models/`: input single-file models.
- `MyIEEE14/` and `MyNordic/`: example dynamic packages.

## Configuration

For a single-file model, configure the original model, auxiliary model, initialized model output, library paths, and `PLOT_VARIABLE`.

For a package model, configure the original package, auxiliary package, root model, library paths, `INIT_MODEL_BY_COMPONENT`, and `PLOT_VARIABLE`.

Run the cells in order. The auxiliary model is simulated, its initialization values are extracted, and the initialized dynamic model or package is written as `*_initialized`.
