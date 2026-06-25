# Full Initialization Workflow

This folder contains notebooks that build the auxiliary case and create the initialized dynamic case in one workflow.

## Contents

- `FullWorkflow_single.ipynb`: runs the complete workflow for a single `.mo` file.
- `FullWorkflow_package.ipynb`: runs the complete workflow for a package model.
- `models/`: input models and packages.
- `outputs/`: generated auxiliary and initialized models or packages.
- `scripts/`: shared dictionaries and helper functions.

## Configuration

For a single-file model, configure `MODEL`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, `INIT_MODEL_BY_COMPONENT`, and `SLACK_COMPONENT`.

For a package model, configure `MODEL`, `DYNAWO_PKG_PATH`, `MODELICA_PKG_PATH`, `INIT_MODEL_BY_COMPONENT`, and `SLACK_COMPONENT`.

Run the cells in order. The notebooks build and simulate the auxiliary case, extract the initialization values, create the initialized dynamic case, and validate it with a final simulation.
