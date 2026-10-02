# 3. Julia & OpenModelica Setup

This setup supports Route A, enabling agile interaction with `.mo` physical models directly through OpenModelica.

## Prerequisites
1.  **OpenModelica Compiler (omc) 1.27:** Must be available on your system `PATH`.
    * *Linux:* Follow instructions at [openmodelica.org](https://openmodelica.org/).

## Step 1: Automated Installation
Use the provided Bash script to automatically download Julia and set up the Jupyter kernel.

```bash
./Installation/install_julia.sh
```

This script will:
* Create a `.venv-julia` Python environment and install JupyterLab.
* Download and install Julia 1.10.12 locally if not found.
* Download the Dynawo standalone library (v1.8.0) directly into the workspace.
* Install the required Modelica Standard Library (MSL 3.2.3).
* Install `OMJulia`, `DataFrames`, `Plots`, and register the `Julia (clean) 1.10` kernel.

## Step 2: OMEdit Configuration
If you open models in the OMEdit graphical interface:
1. Go to **Tools -> Options -> Libraries**.
2. Uncheck **"Load latest Modelica version"**.
3. Ensure you select `Modelica` and `ModelicaServices` version `3.2.3+maint.om`.

## Step 3: Verifying the Connection
Launch JupyterLab and open the `OMJulia_Dynawo_Getting_Started.ipynb` notebook to test the connection.

```bash
source .venv-julia/bin/activate
jupyter lab
```