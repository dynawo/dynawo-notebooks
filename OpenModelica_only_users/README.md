# OpenModelica Workflows

This folder contains notebook workflows for OpenModelica cases using the Dynawo Modelica library:

- `BuildAux/`: builds an auxiliary steady-state version of a single model or package.
- `Initialization/`: uses an existing auxiliary model or package to create an initialized dynamic case.
- `FullWorkflow/`: builds the auxiliary case, extracts initialization values, and creates the initialized dynamic case in one notebook.
- `ParametricStudies/`: runs parameter sweeps on single-file and package models.

## Contents

- [`BuildAux/`](BuildAux/): auxiliary model and package generation.
- [`Initialization/`](Initialization/): initialization from an existing auxiliary case.
- [`FullWorkflow/`](FullWorkflow/): complete auxiliary-build and initialization workflow.
- [`ParametricStudies/`](ParametricStudies/): parameter sweeps with optional reinitialization for each parameter value.
- `Compare_*.ipynb`: notebooks for comparing selected simulation results.
- `Older notebooks/`: previous examples and workflows kept for reference.

## Prerequisites

Before running the notebooks, install:

- Julia
- OpenModelica
- Jupyter Notebook or JupyterLab
- the Dynawo Modelica package on your machine
- the Modelica Standard Library on your machine
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

The notebooks also expect local library paths for:

- `DYNAWO_PKG_PATH`: path to the Dynawo `package.mo`
- `MODELICA_PKG_PATH`: path to the Modelica `package.mo`

Update those paths in the notebook configuration cells before running anything.

## Workflow Documentation

Each workflow folder contains its own README with its notebooks, configuration options, and generated outputs.
