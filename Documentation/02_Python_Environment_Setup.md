# 2. Python Environment Setup for Powsybl & Dynawo

*Ensure compatibility with RTE's infrastructure versions if deploying in their environment.*

## Prerequisites
1.  **Python 3.12+:** Required by the updated ecosystem.
2.  **Java (JDK 17+):** The backend of PyPowSyBl is Java-based.
3.  **Standard Utilities:** `git`, `curl`, `wget`, `tar`, `xz`.

## Step 1: Automated Environment Setup
Instead of manually creating environments and installing packages, use the provided automated script. This script utilizes `uv` for lightning-fast installations.

```bash
./Installation/install_python.sh
```

This script will:
* Check for Python 3.12+ and Java.
* Install `uv` if missing.
* Create a `.venv` environment and install all pinned dependencies (including `pypowsybl`, `scipy`, `OMPython`).
* Automatically download Dynawo (v1.7) into `~/dynawo` and configure `~/.itools/config.yml`.

## Step 2: Activation and Validation
Activate the environment and launch JupyterLab to start working with the PyPowSyBl notebooks.

```bash
source .venv/bin/activate
jupyter lab
```