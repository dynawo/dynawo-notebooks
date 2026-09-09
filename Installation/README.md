# Installation

There is one installer per family of notebooks, and each one only sets up what its own
notebooks need. Both live in this directory and both work within the user account,
without administrator rights.

## What the installers do

`install_python.sh` prepares the notebooks under `src/dynawo_notebooks/Notebooks/`:

- Checks that `omc`, `python3`, a Java runtime, `git`, `curl`, `wget`, `tar` and
  `unzip` are available, and installs `uv` if it is missing.
- Creates the `.venv` environment on Python 3.12, installs the pinned Python packages
  from this repository's release, and installs the project itself in editable mode.
- Downloads Dynawo 1.7.0 from its official release into `~/dynawo-1.7.0`.
- Writes `~/.itools/config.yml` pointing at it, which is how PyPowSyBl finds Dynawo.

`install_julia.sh` prepares the notebooks under `OpenModelica_only_users/`:

- Checks that `omc`, `python3`, `git`, `curl`, `wget` and `tar` are available, and
  installs `uv` if it is missing.
- Creates the `.venv-julia` environment and installs JupyterLab in it.
- Installs Julia 1.10.12 under `~/.local/julia-1.10.12` and links it into that
  environment, so activating the environment gives you both Jupyter and Julia.
- Installs the Modelica Standard Library 3.2.3 through the OpenModelica package
  manager, which also brings Complex and ModelicaServices along with it.
- Installs OMJulia, DataFrames, CSV, Plots and IJulia, and registers the
  `Julia (clean) 1.10` Jupyter kernel that the notebooks declare.

Both scripts start by asking whether to use the files already in the current directory
or to clone the repository.

## Opening the models in OMEdit

The notebooks tell OpenModelica which libraries to load, so nothing has to be set up for
them. If you open the models in OMEdit instead, it loads the newest Modelica Standard
Library it finds, and the Dynawo library needs 3.2.3. To change that, go to
Tools -> Options -> Libraries, uncheck "Load latest Modelica version", and select
`Modelica 3.2.3+maint.om`.
