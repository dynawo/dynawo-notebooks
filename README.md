# Dynawo Notebooks

This repository contains worked examples of how to run dynamic simulations with models
from the Dynawo Modelica library, driven from a notebook.

Project page: https://github.com/dynawo/dynawo-notebooks

## Scope

The notebooks are aimed at users who build small or medium network cases in
OpenModelica and want to use dynamic models from the Dynawo library in them. The
laborious part of that work is initialization: a dynamic model has to start from a
consistent operating point, and determining one by hand is slow and error-prone.

Two families of notebooks address it, by different routes. Both take an OpenModelica
case and return the same case initialized, so the choice between them comes down to
which language and which tools you would rather work with.

Beyond initialization, the notebooks also serve as examples of the operations that
follow: simulating a case and plotting its results, modifying a parameter and comparing
runs, sweeping a parameter across a range of values with re-initialization at each
point, and retrieving the linearized model for small-signal stability analysis.

## Initialization using only OpenModelica, through Julia

[`OpenModelica_only_users/`](OpenModelica_only_users/)

Everything happens inside OpenModelica, driven from Julia through OMJulia. Dynawo does
not have to be installed at all: the Dynawo Modelica library comes with this repository,
and the Modelica Standard Library these models need, version 3.2.3, comes from
OpenModelica.

Initialization works by building a static auxiliary version of the dynamic model,
simulating that version until it settles, reading the resulting values, and writing
them back into the original model.

[`OpenModelica_only_users/README.md`](OpenModelica_only_users/README.md) describes each
of these workflows and the configuration they expect.

## Initialization using PyPowSyBl-Dynawo, through Python

[`src/dynawo_notebooks/Notebooks/`](src/dynawo_notebooks/Notebooks/)

These notebooks use PyPowSyBl with Dynawo underneath, which means the DYD and PAR files
Dynawo normally expects never have to be written by hand.

Initialization works by converting the OpenModelica case into a PyPowSyBl network,
running a power flow on it, mapping the dynamic models it uses, running the Dynawo
simulation, and reading out the initialization values Dynawo computes internally. The
result is a fully initialized OpenModelica case.

This family currently works with models that are already available in Dynawo's model
database. Support for models outside it is still in progress.

## Prerequisites

Two things have to be installed beforehand, and they are the only ones that need
administrator rights:

- OpenModelica 1.27, with the `omc` compiler available on the PATH. Both families need
  it. See https://openmodelica.org/download/download-linux/ for how to install it.
- A Java runtime. Only the Python family needs it, for PyPowSyBl.

Everything else is set up by the installers in `Installation/`, one per family, within
the user account and without administrator rights.

The Python notebooks run on:

- Python 3.12, in a `.venv` environment.
- PyPowSyBl, OMPython, JupyterLab and the other Python packages, pinned to the versions
  in this repository's release.
- Dynawo 1.7.0, from its official release.

The Julia notebooks run on:

- Julia 1.10.12, in a `.venv-julia` environment together with JupyterLab.
- OMJulia, DataFrames, CSV, Plots and IJulia.
- The `Julia (clean) 1.10` Jupyter kernel.
- The Modelica Standard Library 3.2.3, from the OpenModelica package manager.
- The Dynawo Modelica library 1.8.0, which comes with this repository.

## Installation

```bash
git clone https://github.com/dynawo/dynawo-notebooks.git
cd dynawo-notebooks
```

Then run the installer for the family you want, `./Installation/install_julia.sh` or
`./Installation/install_python.sh`. Each one creates its own environment, `.venv-julia`
and `.venv` respectively. Activate it and start JupyterLab:

```bash
source .venv-julia/bin/activate
jupyter lab
```

JupyterLab is included in the environment, and any editor that supports notebooks may
be used instead. The Julia notebooks require the `Julia (clean) 1.10` kernel, which the
installer registers.

`OpenModelica_only_users/BuildAux/BuildAux_single.ipynb` is a suitable entry point for
the Julia family, and
`src/dynawo_notebooks/Notebooks/PyPowSyBl_Dynawo_Getting_Started_I.ipynb` for the Python
one.

## Support

If something does not work as described, or you have a question about the notebooks,
open an issue at https://github.com/dynawo/dynawo-notebooks/issues.

## License

Dynawo Notebooks is licensed under the Mozilla Public License, v. 2.0, the same license
as Dynawo. If a copy of the MPL was not distributed with this file, you can obtain one
at http://mozilla.org/MPL/2.0. The full text is available in [LICENSE](LICENSE).
