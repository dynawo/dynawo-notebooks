# Stability Analysis

This folder contains notebooks for small-signal stability analysis of OpenModelica models. Each notebook runs a parameter sweep, linearizes every case, and analyzes the resulting eigenvalues to track how the modes and their stability evolve across the sweep.

## Contents

- `StabilityAnalysis_BESS.ipynb`: stability sweep for a single-file MyBESS model.
- `StabilityAnalysis_Nordic.ipynb`: stability sweep for a MyNordic package model.
- `scripts/`: linearization helper used by both notebooks.
- `models/`: input single-file model and example package.

## Configuration

Set `SWEEP_COMPONENT`, `SWEEP_PARAMETER`, and `SWEEP_VALUES` to define the parameter sweep. Set `LINEARIZATION_TIME` for the linearization time and `MODE_TOL` for the tolerance used to classify each mode as stable, marginal, or unstable.

Set `REINITIALIZE_EACH_CASE = true` to recalculate initialization values after every parameter update. Set it to `false` to initialize the base case once and reuse those initialization values for the complete sweep.

Both notebooks support `INIT_MODEL_BY_COMPONENT` and `SLACK_COMPONENT` for models that require component-specific INIT profiles or slack handling. The Nordic notebook also sets `LINEARIZATION_SIMFLAGS` and `LINEARIZATION_MAXSIZE` to help the linearization succeed on larger models.

Run the cells in order. Each case is initialized and linearized, its eigenvalues are analyzed, and the modes that become unstable across the sweep are tracked in the complex plane. Generated Modelica cases and per-case linearization builds are stored under `outputs/<study>`.
