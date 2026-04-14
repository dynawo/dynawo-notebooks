# BuildAux and Initialization

This folder contains two notebook workflows for OpenModelica cases using the Dynawo Modelica library:

- `BuildAux/`: builds an auxiliary steady-state version of a single file or package, written as `*_auxiliary`.
- `Initialization/`: simulates that auxiliary case, extracts initialization values, and writes them back into a dynamic case as `*_initialized`.

## Contents

- `BuildAux/BuildAux_single.ipynb`: build an auxiliary case from a single `.mo` file.
- `BuildAux/BuildAux_package.ipynb`: build an auxiliary package from a package-based case.
- `BuildAux/scripts/`: helper code and replacement dictionaries used by the BuildAux notebooks.
- `Initialization/Initialization_single.ipynb`: create an initialized dynamic case from an existing auxiliary case.
- `Initialization/helpers/`: helper code and parameter dictionaries used by the initialization notebook.

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
Pkg.add(["IJulia", "OMJulia", "Plots", "DataFrames", "CSV"])
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

## First Steps

### BuildAux

Open one of the notebooks in `BuildAux/`, depending on your case.

#### `BuildAux_single.ipynb`

Use this notebook for a single `.mo` file. By default, it looks in the local `models/` folder.

In the configuration cells, set:

- `MODEL_DIR`: the folder that contains the `.mo` file
- `MODEL`: the model you want to transform into an auxiliary file
- `MODEL_FILE_PATH`: the path to the selected `.mo` file, usually built from `MODEL_DIR` and `MODEL`
- `INIT_MODEL_BY_COMPONENT`: a dictionary that assigns a specific INIT model to each component that needs one
- `SLACK_COMPONENT`: the component that should be treated as the slack reference in the auxiliary build

#### `BuildAux_package.ipynb`

Use this notebook for a package-based case. By default, it looks in the local `MyNordic/` folder.

In the configuration cells, set:

- `MODEL_DIR`: the folder that contains the package
- `MODELS_PKG_PATH`: the path to the package `package.mo`
- `MODEL`: the full model name inside the package, for example `MyNordic.TestCase`
- `INIT_MODEL_BY_COMPONENT`: a dictionary that assigns a specific INIT model to each component that needs one
- `SLACK_COMPONENT`: the component that should be treated as the slack reference in the auxiliary build

You can change `MODEL_DIR` and the derived paths if your files are stored somewhere else. Run the notebook cells in order to generate the auxiliary model or package, which is named `*_auxiliary`.

### Initialization

Open `Initialization/Initialization_single.ipynb`.

By default, this notebook looks for cases in the local `models/` folder. You can change `MODEL_DIR` and the derived paths if your files are stored somewhere else.

In the configuration cells, set:

- `MODEL_DIR`: the folder that contains the model files
- `MODEL`: the dynamic case you want to initialize
- `MODEL_FILE_PATH`: the path to the original dynamic case
- `INITIALIZED_MODEL` and `INITIALIZED_FILE_PATH`: the name and path for the output initialized case
- `AUX_MODEL` and `AUX_FILE_PATH`: the auxiliary case generated previously with BuildAux
- `PLOT_VARIABLE`: the variable you want to plot after the final simulation

Run the cells in order. The notebook simulates the auxiliary case, transfers the initialization values, and writes the initialized model, which is named `*_initialized`.
