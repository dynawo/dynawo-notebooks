# Installation

There is one installer per family of notebooks, and each one only sets up what its own
notebooks need. Both live in this directory and both work within the user account,
without administrator rights.

## What the installers do

Both scripts start by asking whether to use the files already in the current directory
or to clone the remote repository.

`install_python.sh` prepares the notebooks under `src/python_pypowsybl/Notebooks/`:

- Checks that `python3`, a Java runtime, `git`, `wget`, `curl`, `tar`, and `xz` are 
  available, and installs the `uv` package manager if it is missing.
- Creates the `.venv` Python environment using `uv`, installs the pinned Python packages
  from this repository's release, and installs the project itself in editable mode.
- Downloads the full Dynawo package (`Dynawo_Linux_1_7.tar.xz`) into `~/dynawo`.
- Writes `~/.itools/config.yml` pointing at it, which is how PyPowSyBl finds the 
  Dynawo simulator.

`install_julia.sh` prepares the notebooks under `src/julia_openmodelica/`:

- Checks that `python3`, `omc` (OpenModelica Compiler), `wget`, `curl`, `tar`, `xz`, and 
  `git` are available, and installs the `uv` package manager if it is missing.
- Creates the `.venv-julia` Python environment using `uv` and installs JupyterLab in it.
- Installs Julia 1.10.12 under `~/.local/julia-1.10.12` (if not found on the system) and 
  links it into `~/.local/bin/julia` and into the environment.
- Downloads the standalone Dynawo Library (`dynawo_library_1_8.tar.xz`) and extracts 
  it directly into `src/julia_openmodelica/dynawo_library`, so it is exactly where the 
  notebooks expect it to be.
- Installs the Modelica Standard Library 3.2.3 with the OpenModelica package manager.
- Uses Julia's package manager to install `OMJulia`, `DataFrames`, `CSV`, `Plots`, and 
  `IJulia`, and registers the `Julia (clean)` Jupyter kernel.

## Running the notebooks

Open them with whichever viewer you prefer. The Julia notebooks use the `Julia (clean)` 
kernel and the Python ones the `.venv` interpreter.

For JupyterLab, activate the environment first.

```bash
source .venv-julia/bin/activate    # .venv for the Python notebooks
jupyter lab
```

## Opening the models in OMEdit

The notebooks tell OpenModelica which libraries to load dynamically, so nothing has to 
be set up for them to run in the browser. 

However, if you open the models in the OMEdit graphical interface instead, it loads the 
newest Modelica Standard Library it finds by default, and the Dynawo library strictly 
requires version **3.2.3**. 

To fix this and avoid compilation errors, go to:
**Tools -> Options -> Libraries**, uncheck "Load latest Modelica version", and ensure 
you add/select both `Modelica` and `ModelicaServices` version `3.2.3+maint.om`.