# 3. OpenModelica Setup (Julia and Python)

This setup supports Route A, enabling agile interaction with `.mo` physical
models directly through OpenModelica. The route can be driven from Julia with
`OMJulia` or from Python with `OMPython`; install whichever you prefer.

## Prerequisites

1. **OpenModelica Compiler (omc) 1.27:** Must be available on your system
   `PATH`.
   - *Linux:* Follow instructions at
     [openmodelica.org](https://openmodelica.org/).

## Step 1: Automated Installation

Use the provided Bash script for the language you want.

### Julia

```bash
./Installation/install_julia_openmodelica.sh
```

This script will:

- Create a `.venv-julia` Python environment and install JupyterLab.
- Download and install Julia 1.10.12 locally if not found.
- Download the Dynawo standalone library (v1.8.0) directly into the workspace.
- Install the required Modelica Standard Library (MSL 3.2.3).
- Install `OMJulia`, `DataFrames`, `CSV`, `Plots` and `IJulia`, and register the
  `Julia (clean) 1.10` kernel.

### Python

```bash
./Installation/install_python_openmodelica.sh
```

This script will:

- Create a `.venv-python-om` environment with Python 3.12 and install
  JupyterLab, downloading the interpreter if the system one is older.
- Download the Dynawo standalone library (v1.8.0) directly into the workspace.
- Install the required Modelica Standard Library (MSL 3.2.3).
- Install `OMPython`, `pandas`, `numpy` and `matplotlib`.

## Step 2: OMEdit Configuration

If you open models in the OMEdit graphical interface:

1. Go to **Tools -> Options -> Libraries**.
2. Uncheck **"Load latest Modelica version"**.
3. Ensure you select `Modelica` and `ModelicaServices` version `3.2.3+maint.om`.

## Step 3: Verifying the Connection

Launch JupyterLab and open a notebook to test the connection: for Julia,
`OMJulia_Dynawo_Getting_Started.ipynb`; for Python,
`BuildAux/BuildAux_single.ipynb`.

```bash
source .venv-julia/bin/activate    # .venv-python-om for the Python notebooks
jupyter lab
```
