# Parametric Studies

This folder contains notebooks for running parameter sweeps on OpenModelica models.

## Contents

- `ParametricStudies_MyBESS_Generalized.ipynb`: parameter sweep for a single-file MyBESS model.
- `ParametricStudies_MyIEEE14_Package.ipynb`: parameter sweep for a MyIEEE14 package model.
- `outputs/`: generated Modelica cases and selected simulation results.

The notebooks reuse the shared helper modules in `../scripts/`.

## Configuration

Set `SWEEP_COMPONENT`, `SWEEP_PARAMETER`, and `SWEEP_VALUES` to define the parameter sweep. Set `PLOT_VARIABLE` to select the simulation variable stored and compared across cases.

Set `REINITIALIZE_EACH_CASE = true` to recalculate initialization values after every parameter update. Set it to `false` to initialize the base case once and reuse those initialization values for the complete sweep.

Both notebooks support `INIT_MODEL_BY_COMPONENT` and `SLACK_COMPONENT` for models that require component-specific INIT profiles or slack handling.

Run the cells in order. Generated auxiliary and initialized Modelica cases are stored under `outputs/<study>/modelica`, while selected CSV results are stored under `outputs/<study>/results`.
