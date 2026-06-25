# OpenModelica Workflows

This folder contains notebook workflows for OpenModelica cases using the Dynawo Modelica library.

## Contents

- [`BuildAux/`](BuildAux/): builds an auxiliary steady-state model or package.
- [`Initialization/`](Initialization/): creates an initialized dynamic model or package from an existing auxiliary case.
- [`FullWorkflow/`](FullWorkflow/): builds the auxiliary case and creates the initialized dynamic case in one workflow.
- [`ParametricStudies/`](ParametricStudies/): runs parameter sweeps for single-file and package models, with optional reinitialization.
- `Compare_*.ipynb`: notebooks for comparing generated OpenModelica cases with Dynawo reference models.
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
