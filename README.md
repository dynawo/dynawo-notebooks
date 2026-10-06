# Dynawo Notebooks

> Notebook tools for facilitating the usage of Dynawo's library of dynamic models.

## Table of Contents
- [Dynawo Notebooks](#dynawo-notebooks)
  - [Table of Contents](#table-of-contents)
  - [1. About The Project](#1-about-the-project)
  - [2. The Core Problem: Initialization](#2-the-core-problem-initialization)
  - [3. Architecture & Workflows (The Two Routes)](#3-architecture--workflows-the-two-routes)
  - [4. Repository Layout](#4-repository-layout)
  - [5. Prerequisites](#5-prerequisites)
  - [6. Installation](#6-installation)
  - [7. Usage (Entry Points & Workflows)](#7-usage-entry-points--workflows)
  - [8. Contributing](#8-contributing)
  - [9. License](#9-license)

---

## 1. About The Project

This project contains worked examples and notebook workflows for running dynamic simulations with models from the Dynawo Modelica library. It is aimed at users who build small or medium network cases in OpenModelica and want to use Dynawo's dynamic models, solving the critical problem of **steady-state initialization**.

**Built With:**
* [Julia](https://julialang.org/) (v1.10.12) / [OMJulia](https://github.com/OpenModelica/OMJulia.jl)
* [Python](https://www.python.org/) (v3.12+) / [PyPowSyBl](https://pypowsybl.readthedocs.io/)
* [OpenModelica Compiler (omc)](https://openmodelica.org/) (v1.27)
* [Dynawo](https://dynawo.github.io/) (v1.7 / v1.8)
* [JupyterLab](https://jupyter.org/)

---

## 2. The Core Problem: Initialization

The central challenge in dynamic simulation assessment is guaranteeing a valid initialization.
* A dynamic model (e.g., a generator) is defined by differential equations dx/dt = f(x, y).
* To start a simulation at steady state (t=0), we must find x0 such that dx/dt = 0.
* A standard Loadflow provides only the boundary network variables y (P, Q, V, theta) at t=0.
* Complex dynamic models have internal state variables (fluxes, rotor currents) that are not explicitly defined by the Loadflow.
* Inverting the complex function f(x, y) to find x0 is often numerically unstable.

### The Solution: "Init Models"
Dynawo addresses this by implementing **"Init Models"** (e.g., `_INIT` companions in the library).
* The Init Model receives the static values and physical parameters, using a simplified, invertible set of algebraic equations to calculate the internal state vector x_init.
* Each `_INIT` model is solved independently from the load flow values at its terminal.
* Its results become parameters of the dynamic model, not additional equations, allowing Dynawo to solve the whole connected system at t=0.

---

## 3. Architecture & Workflows (The Two Routes)

The project provides two distinct routes to achieve steady-state initialization, depending on your preferred language and tools.

### ROUTE A: Julia & OpenModelica
Driven from Julia through `OMJulia`, this route performs initialization using only OpenModelica.
* **1. Rewrite:** The code automatically builds a static auxiliary twin of your dynamic model, stripping out events and controls.
* **2. Stand-ins:** It applies replacements from `dictionaries.jl` (e.g., swapping `BESSCurrentSource` for `GeneratorPVFixed`) and adds the `_INIT` companions.
* **3. Solve & Read:** It simulates the auxiliary model to settle the network, extracting the values of each initialization variable.
* **4. Write:** It copies the original model and writes the extracted values back as pinned modifiers, generating a fully `_initialized.mo` case.

### ROUTE B: Python, PyPowSyBl & Dynawo
Driven from Python, this route abstracts the complexity of the simulation.
* **1. Network Generation:** PyPowSyBl parses raw data, defines the topology, and runs the AC loadflow (`pp.loadflow.run_ac`). If the loadflow diverges, dynamics cannot start.
* **2. Dynamic Mapping:** The software automates the translation of IIDM static data into dynamic models based on energy sources (e.g., `HYDRO` to `GeneratorSynchronousThreeWindings`).
* **3. Writeout:** It runs the simulation in Dynawo to dump internal initialization values, producing a fully initialized OpenModelica case.

This route currently works with models that are already available in Dynawo's model database (ddb).

---

## 4. Repository Layout

* **`src/julia_openmodelica/`** — Route A. The `OMJulia_Dynawo_Getting_Started` notebook is the entry point. From there, `BuildAux` and `Initialization` cover the two halves of the initialization, `FullWorkflow` runs them end to end, and `ParametricStudies` and `StabilityAnalysis` build on top of it with parameter sweeps and small-signal analysis. Every folder has a single-file and a package version.
* **`src/python_pypowsybl/Notebooks/`** — Route B. The three `PyPowSyBl_Dynawo_Getting_Started` notebooks are the entry point, building up from a two-bus network to a meshed twelve-bus one. The `PyPowSyBl_approach_*` notebooks then apply the workflow to four existing cases: BESS, DIGrid, IEEE57 and Nordic.
* **`Installation/`** — the setup script for each route, `install_julia.sh` and `install_python.sh`.
* **`Documentation/`** — background on the environment and the initialization logic.

---

## 5. Prerequisites

The following software must be installed globally (requires administrator rights):

* **OpenModelica 1.27** (with the `omc` compiler available on your `PATH`).
* **Python 3.12+** (the installers check for it, they do not install it).
* **Java Runtime** (strictly required for Route B / PyPowSyBl).

You also need standard utilities: `git`, `wget`, `curl`, `tar`, and `xz`. The `uv` package manager will be automatically installed by the scripts if missing.

Everything else is set up locally by the installers, inside your user account:

* **Route A:** Julia 1.10.12, a `.venv-julia` environment with JupyterLab, the `OMJulia`, `DataFrames`, `CSV`, `Plots` and `IJulia` packages, the `Julia (clean) 1.10` kernel, the Modelica Standard Library 3.2.3 and the Dynawo Modelica library 1.8.0.
* **Route B:** a `.venv` environment with `pypowsybl`, JupyterLab and the other pinned dependencies, plus Dynawo 1.7 downloaded into `~/dynawo` and linked through `~/.itools/config.yml`.

---

## 6. Installation

There is one installer per route. Both operate safely within your user directory without root privileges.

1. **Clone the repository:**
   ```sh
   git clone https://github.com/dynawo/dynawo-notebooks.git
   cd dynawo-notebooks
   ```

2. **Run the installer for your preferred route:**

   For Route A:
   ```sh
   ./Installation/install_julia.sh
   ```

   For Route B:
   ```sh
   ./Installation/install_python.sh
   ```

   *Note: The script will ask whether to use existing local files or clone the remote repository. Answer `L` (Local) since you just cloned it.*

   Each installer creates its own environment: `.venv-julia` for Route A and `.venv` for Route B.

---

## 7. Usage (Entry Points & Workflows)

Once the installation is complete, activate your environment and launch JupyterLab.

**For Route A:**
```sh
source .venv-julia/bin/activate
jupyter lab
```
*Entry Point:* Start with the notebooks in `src/julia_openmodelica/`. Make sure to select the `Julia (clean) 1.10` kernel.

**For Route B:**
```sh
source .venv/bin/activate
jupyter lab
```
*Entry Point:* Start with notebooks located in `src/python_pypowsybl/Notebooks/`.

### Opening Models in OMEdit
If you view models in the OpenModelica graphical interface (OMEdit):
1. Go to **Tools -> Options -> Libraries**.
2. Uncheck **"Load latest Modelica version"**.
3. Ensure you select `Modelica` and `ModelicaServices` version `3.2.3+maint.om`, as the Dynawo library strictly requires it to avoid compilation errors.

---

## 8. Contributing

Questions, bug reports and feature requests go to [GitHub Issues](https://github.com/dynawo/dynawo-notebooks/issues).

For contributing guidelines, please refer to the [contributing documentation](https://github.com/dynawo/.github/blob/master/CONTRIBUTING.md) of the Dynawo organisation.

---

## 9. License

Dynawo Notebooks is licensed under the Mozilla Public License, v. 2.0, the same license as Dynawo. If a copy of the MPL was not distributed with this file, you can obtain one at http://mozilla.org/MPL/2.0. The full text is available in [LICENSE](LICENSE).
