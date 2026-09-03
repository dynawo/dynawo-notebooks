# OpenModelica Workflows

This folder contains notebook workflows for OpenModelica cases using the Dynawo Modelica library.

## Contents

- [`BuildAux/`](BuildAux/): builds an auxiliary steady-state model or package.
- [`Initialization/`](Initialization/): creates an initialized dynamic model or package from an existing auxiliary case.
- [`FullWorkflow/`](FullWorkflow/): builds the auxiliary case and creates the initialized dynamic case in one workflow.
- [`ParametricStudies/`](ParametricStudies/): runs parameter sweeps for single-file and package models, with optional reinitialization.
- [`StabilityAnalysis/`](StabilityAnalysis/): retrieves linearized OpenModelica models and performs small-signal stability analysis, using its own model variants without events and in ODE mode.
- [`scripts/`](scripts/): shared helper library (dictionaries, workflow helpers, and sweep/initialization helpers) reused across the notebooks.
- [`dynawo_library/`](dynawo_library/): the Dynawo Modelica library, downloaded from the `nightly` GitHub release on 2026-09-02 (Dynawo 1.8.0 development version).
- [`docs/`](docs/): rendered HTML exports of the notebooks, with their outputs, to view the results without running them.
- `Older notebooks/`: previous examples and workflows kept for reference.

## Prerequisites

Before running the notebooks, install:

- Julia
- OpenModelica
- Jupyter Notebook or JupyterLab
- a Dynawo installation (its Modelica Standard Library is used by the notebooks)
- the OpenModelica packages `Complex` and `ModelicaServices`

Then install the Julia packages used by the notebooks:

```julia
using Pkg
Pkg.add(["IJulia", "OMJulia", "Plots", "PlotlyJS", "DataFrames", "CSV"])
```

You can install the OpenModelica packages `Complex` and `ModelicaServices` with:

```bash
cat > /tmp/openmodelica_setup.mos <<'EOF'
updatePackageIndex();
installPackage(Complex, "4.1.0+maint.om", exactMatch=true);
installPackage(ModelicaServices, "4.1.0+maint.om", exactMatch=true);
EOF

omc /tmp/openmodelica_setup.mos
```

The Dynawo Modelica library is pinned in this repo under `dynawo_library/`, so the notebooks load it directly — no download needed (`DYNAWO_PKG_PATH` points there).

The Modelica Standard Library comes from your Dynawo installation. Set `DYNAWO_DIR` in the notebook configuration cells to your Dynawo install path; `MODELICA_PKG_PATH` is derived from it.
