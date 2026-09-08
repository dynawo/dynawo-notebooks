# Installation Guide: Hybrid Simulation Environment

This document outlines the structure and functionality of the `setup_project.sh` script. This script automates the creation of a scientific development environment that bridges **Python (Powsybl)** and **Julia (OpenModelica)** with the **Dynawo** simulation engine.

## 1. Installation Flow Summary

The script follows an "all-in-one" approach. The goal is that, after running it, the user only needs to activate a single virtual environment to access all tools.

```text
[START]
   |
   v
[CHECKS] --> Verify Java (JRE), Python 3, OpenModelica, and Build Tools.
   |
   v
[JULIA] ---> Check for System Julia.
   |         IF MISSING: Download Official LTS -> Install locally.
   |
   v
[VENV] ----> Create Python Virtual Env (venv_powsybl).
   |         *MAGIC STEP*: Symlink Julia binary -> venv/bin/julia.
   |         Install Python Libs: pypowsybl, pandas, lxml.
   |
   v
[LINK] ----> Locate Dynawo Binary (C++ Engine).
   |         Generate ~/.itools/config.yml.
   |
   v
[PKGS] ----> Install Julia Libraries (OMJulia, DataFrames, Plots).
   |
[END]
```

## 2. The "Unified Environment" Strategy

The key feature of this installer is how it handles **Julia**.

* **Smart Detection:** It checks if `julia` is already in your system PATH.
* **Automatic Installation:** If Julia is missing, the script downloads the official Linux x64 binary (LTS version), extracts it to `~/.local/`, and installs it **without requiring root/sudo permissions**.
* **Seamless Integration:** The script creates a **symbolic link** of the Julia executable inside the Python virtual environment (`venv_powsybl/bin/julia`).
    * **Benefit:** When you run `source venv_powsybl/bin/activate`, your terminal automatically gains access to both the project-specific Python and the project-specific Julia. You do not need to mess with system PATH variables.

## 3. Step-by-Step Script Logic

### Step 1: Pre-flight Checks (Defensive Programming)
The script verifies the existence of external tools that it cannot install itself:
* **Python 3.9+:** The base scripting language.
* **Java (JRE):** Strictly required for the Powsybl backend (which runs on the JVM).
* **OpenModelica (`omc`):** The compiler required for Julia to execute physical models (`.mo`). *See important note in Section 5.*
* **Wget/Tar:** Tools needed to download Julia if it's missing.

### Step 2: Python Virtual Environment (`venv_powsybl`)
It creates an isolated environment and installs critical libraries:
* `pypowsybl`: For power grid manipulation (Loadflow, IIDM parsing).
* `lxml`: For XML generation (`.dyd`, `.par`) during the "Recollement" process.
* `pandas` & `matplotlib`: For data analysis and plotting.

### Step 3: The Dynawo-Python Bridge (`config.yml`)
Pypowsybl needs to know where the C++ Dynawo engine resides.
1.  The script searches for Dynawo in standard locations (`/opt/dynawo`, `/usr/local`).
2.  If not found, it **asks the user** for the installation path.
3.  It generates the `~/.itools/config.yml` file, which links the Python wrapper to the C++ solver.

### Step 4: Julia Packages
It uses the available Julia executable (system or auto-installed) to setup the scientific stack:
* `OMJulia`: The interface to control OpenModelica.
* `DataFrames`, `CSV`, `Plots`: For handling simulation results.

---

## 4. Usage Instructions

1.  **Grant execution permissions:**
    ```bash
    chmod +x setup_project.sh
    ```

2.  **Run the script:**
    ```bash
    ./setup_project.sh
    ```

3.  **Start working:**
    Once finished, you only need one command to activate the entire ecosystem:
    ```bash
    source venv_powsybl/bin/activate
    ```
    *Now you can run `jupyter lab`, `python script.py`, or `julia script.jl` seamlessly.*

---

## 5. Important: OpenModelica Configuration

**Compatibility Warning:**
Dynawo relies on the **Modelica Standard Library (MSL) version 3.2.3**. However, recent versions of OpenModelica (OMEdit) often default to MSL version 4.0.0, which causes compatibility issues.

**Required Action:**
Upon first launch of OMEdit (the OpenModelica GUI), you must manually configure the libraries:

1.  Open **OMEdit**.
2.  Navigate to **Tools -> Options -> Libraries**.
3.  **Uncheck** the option *"Load latest Modelica version"* at the bottom.
4.  In the list of libraries, find `Modelica` and `ModelicaServices`.
5.  Change their versions to **3.2.3+maint.om** (and `Complex` if available).
6.  Click OK and restart OMEdit if prompted.