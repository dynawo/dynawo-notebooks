# 2. Python Environment Setup for PowSyBl & Dynawo

## Prerequisites

1. **Python 3:** The environment itself is created with Python 3.12, which `uv`
   downloads if the system one is older.
2. **Java (JDK 17+):** The backend of PyPowSyBl is Java-based.
3. **OpenModelica 1.27:** The `omc` compiler on your `PATH`, which the
   `PyPowSyBl_approach` notebooks use to parse their Modelica cases and to
   validate their initialization.
4. **Standard Utilities:** `git`, `curl`, `wget`, `tar`, `xz`.

## Step 1: Automated Environment Setup

Instead of manually creating environments and installing packages, use the
provided automated script. This script utilizes `uv` for lightning-fast
installations.

```bash
./Installation/install_python_pypowsybl.sh
```

This script will:

- Check for Java and OpenModelica.
- Install `uv` if missing.
- Create a `.venv` environment with Python 3.12 and install all pinned
  dependencies (including `pypowsybl`, `scipy`, `OMPython`).
- Use an existing Dynawo installation, or download Dynawo (v1.7) into
  `~/dynawo`.
- Install the Modelica Standard Library 3.2.3.
- Configure `~/.itools/config.yml`.

## Step 2: Activation and Validation

Activate the environment and launch JupyterLab to start working with the
PyPowSyBl notebooks.

```bash
source .venv/bin/activate
jupyter lab
```
