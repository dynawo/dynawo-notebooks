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

- Checks that `omc` (OpenModelica Compiler), `wget`, `curl`, `tar`, `xz`, and `git` 
  are available.
- Installs Julia 1.10.0 under `~/.local/julia-1.10.0` (if not found on the system) 
  and links it into `~/.local/bin/julia`.
- Downloads the standalone Dynawo Library (`dynawo_library_1_8.tar.xz`) and extracts 
  it directly into `src/julia_openmodelica/dynawo_library`, so it is exactly where the 
  notebooks expect it to be.
- Uses Julia's package manager to install `OMJulia`, `DataFrames`, `CSV`, `Plots`, and 
  `IJulia` (which registers the Julia kernel for Jupyter).

## Opening the models in OMEdit

The notebooks tell OpenModelica which libraries to load dynamically, so nothing has to 
be set up for them to run in the browser. 

However, if you open the models in the OMEdit graphical interface instead, it loads the 
newest Modelica Standard Library it finds by default, and the Dynawo library strictly 
requires version **3.2.3**. 

To fix this and avoid compilation errors, go to:
**Tools -> Options -> Libraries**, uncheck "Load latest Modelica version", and ensure 
you add/select both `Modelica` and `ModelicaServices` version `3.2.3+maint.om`.