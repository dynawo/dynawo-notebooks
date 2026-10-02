# Dynawo Notebooks

> Notebook tools for facilitating the usage of Dynawo's library of dynamic models.

## Table of Contents
- [Dynawo Notebooks](#dynawo-notebooks)
  - [Table of Contents](#table-of-contents)
  - [1. About The Project](#1-about-the-project)
  - [2. The Core Problem: Initialization](#2-the-core-problem-initialization)
  - [3. Architecture & Workflows (The Two Routes)](#3-architecture--workflows-the-two-routes)
  - [4. Project Files & Code Structure](#4-project-files--code-structure)
  - [5. Prerequisites](#5-prerequisites)
  - [6. Installation](#6-installation)
  - [7. Usage (Entry Points & Workflows)](#7-usage-entry-points--workflows)
  - [8. Automated PDF Export Guide](#8-automated-pdf-export-guide)
  - [9. Contributing](#9-contributing)
  - [10. License](#10-license)

---

## 1. About The Project

This project contains worked examples and notebook workflows for running dynamic simulations with models from the Dynawo Modelica library. It is aimed at users who build small or medium network cases in OpenModelica and want to use Dynawo's dynamic models, solving the critical problem of **steady-state initialization**.

**Built With:**
* [Julia](https://julialang.org/) (v1.10.12) / [OMJulia]
* [Python](https://www.python.org/) (v3.12+) / [PyPowSyBl]
* [OpenModelica Compiler (omc)](https://openmodelica.org/) (v1.27)
* [Dynawo](https://dynawo.github.io/) (v1.7 / v1.8)
* [JupyterLab](https://jupyter.org/)

---

## 2. The Core Problem: Initialization

The central challenge in dynamic security assessment is guaranteeing a valid initialization. 
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
Driven from Python, this route hides the complexity of Dynawo's DYD and PAR files by utilizing PyPowSyBl as the network architect.
* **1. Network Generation:** PyPowSyBl parses raw data, defines the topology, and runs the AC loadflow (`pp.loadflow.run_ac`). If the loadflow diverges, dynamics cannot start.
* **2. Dynamic Mapping:** The script `recollement.py` automates the translation of IIDM static data into dynamic models based on energy sources (e.g., `HYDRO` to `GeneratorSynchronousThreeWindings`).
* **3. Writeout:** It runs the simulation in Dynawo using a debug flag (`--dumpInitOn`) to dump internal initialization values, producing a fully initialized OpenModelica case.

---

## 4. Project Files & Code Structure

### A. Initialization Helpers (Julia)
* **`dictionaries.jl` & `helpers.jl`:** Contain the core logic for Route A, defining `REPLACEMENTS` (how to swap dynamic models for static equivalents) and `INIT_MODELS` (which companion model to inject).
* **`package_model_initialization.jl`:** Orchestrates the complex logic of initializing entire inheritance chains in OpenModelica packages.

### B. Python Grid Topology & Automation
* **`SMIB_nodeBreaker.py` & `SMIB2.py`:** Generate the "Single Machine Infinite Bus" test cases. `SMIB_nodeBreaker` models detailed substation topology (switches, busbars), while `SMIB2` uses a simplified bus-branch model.
* **`gridforming.py`:** Detects generators labeled "GFM", "EOL", or "PV" and assigns power electronics models (`GridFormingConverter`), which is essential for low-inertia studies.

### C. Advanced Analysis Notebooks
* **`StabilityAnalysis_BESS.ipynb`:** Performs a parameter sweep on the `Demo_BESS` model, sweeping the parameter `Kpg` from 1.0 to 10.0. It linearizes the system to obtain A, B, C, D matrices, tracking eigenvalue roots to identify when modes cross into instability (Right Half-Plane).
* **`StabilityAnalysis_Nordic.ipynb`:** A large-scale stability sweep running on a packaged `Demo_Nordic` model (the Nordic-32 test system with 20 detailed synchronous machines). This demonstrates that the initialization and linearization architecture scales to grid-level complexity.

---

## 5. Prerequisites

The following software must be installed globally (requires administrator rights):

* **OpenModelica 1.27** (with the `omc` compiler available on your `PATH`).
* **Java Runtime** (strictly required for the Python family / PyPowSyBl).

You also need standard utilities: `git`, `wget`, `curl`, `tar`, and `xz`. Everything else (Python 3.12+, Julia 1.10.12, Jupyter, Modelica Standard Library 3.2.3) will be configured locally by our installers. The `uv` package manager will be automatically installed by the scripts if missing.

---

## 6. Installation

There is one installer per family of notebooks. Both operate safely within your user directory without root privileges.

1. **Clone the repository:**
   ```sh
   git clone https://github.com/dynawo/dynawo-notebooks.git
   cd dynawo-notebooks
   ```

2. **Run the installer for your preferred family:**
   
   For the Julia environment:
   ```sh
   ./Installation/install_julia.sh
   ```
   
   For the Python environment:
   ```sh
   ./Installation/install_python.sh
   ```

   *Note: The script will ask whether to use existing local files or clone the remote repository. Answer `L` (Local) since you just cloned it*.

---

## 7. Usage (Entry Points & Workflows)

Once the installation is complete, activate your environment and launch JupyterLab.

**For Julia Notebooks:**
```sh
source .venv-julia/bin/activate
jupyter lab
```
*Entry Point:* Start with `src/julia_openmodelica/BuildAux/BuildAux_single.ipynb`. Make sure to select the `Julia (clean) 1.10` kernel.

**For Python Notebooks:**
```sh
source .venv/bin/activate
jupyter lab
```
*Entry Point:* Start with `src/python_pypowsybl/Notebooks/PyPowSyBl_Dynawo_Getting_Started_I.ipynb`.

### Opening Models in OMEdit
If you view models in the OpenModelica graphical interface (OMEdit):
1. Go to **Tools -> Options -> Libraries**.
2. Uncheck **"Load latest Modelica version"**.
3. Ensure you select `Modelica` and `ModelicaServices` version `3.2.3+maint.om`, as the Dynawo library strictly requires it to avoid compilation errors.

---

## 8. Automated PDF Export Guide

This section explains how to automatically generate a PDF version of your documentation (like this README) every time you push changes to your repository. We will use **GitHub Actions** and a Markdown-to-PDF converter.

### How it Works
Whenever a developer pushes changes to the `main` branch, a GitHub Action is triggered. This action reads the `README.md` file, converts it into a formatted PDF document, and uploads it as a downloadable artifact in the GitHub Actions tab.

### Setup Instructions (GitHub Actions)

1. In your repository, create the following directory structure: `.github/workflows/`.
2. Inside the `workflows` folder, create a file named `pdf-export.yml`.
3. Copy and paste the following code into `pdf-export.yml`:

```yaml
name: Generate PDF Documentation

on:
  push:
    branches:
      - main
    paths:
      - 'README.md' # Only trigger if the README is updated
  workflow_dispatch: # Allows manual trigger

jobs:
  build-pdf:
    runs-on: ubuntu-latest
    
    steps:
      - name: Checkout Repository
        uses: actions/checkout@v3

      - name: Setup Node.js
        uses: actions/setup-node@v3
        with:
          node-version: '18'

      - name: Install Markdown to PDF CLI
        run: npm install -g md-to-pdf

      - name: Convert Markdown to PDF
        run: md-to-pdf README.md

      - name: Upload PDF Artifact
        uses: actions/upload-artifact@v3
        with:
          name: Project_Documentation
          path: README.pdf
```

**To download the generated PDF:**
1. Go to the **Actions** tab in your GitHub repository.
2. Click on the latest run of the "Generate PDF Documentation" workflow.
3. Scroll down to the **Artifacts** section at the bottom of the page.
4. Click on **Project_Documentation** to download the ZIP file containing your new PDF.

---

## 9. Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project.
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`).
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the Branch (`git push origin feature/AmazingFeature`).
5. Open a Pull Request.

---

## 10. License

Dynawo Notebooks is licensed under the Mozilla Public License, v. 2.0, the same license as Dynawo. If a copy of the MPL was not distributed with this file, you can obtain one at http://mozilla.org/MPL/2.0.