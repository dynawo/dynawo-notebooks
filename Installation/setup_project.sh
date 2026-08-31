#!/bin/bash

# ==============================================================================
# HYBRID SIMULATION ENVIRONMENT SETUP
# ==============================================================================
# Description: Industrialized setup script for Python + Julia + Dynawo using 'uv'.
# ==============================================================================

# Exit immediately if a command exits with a non-zero status
set -e

# Navigate to the project root directory (one level up from 'Installation')
cd "$(dirname "$0")/.."

# --- Configuration ---
VENV_NAME=".venv"
JULIA_VER_MAJOR="1.10"
JULIA_VER_FULL="1.10.0" # Current LTS recommended
DEFAULT_DYNAWO_PATHS=("/opt/dynawo" "/usr/local/dynawo" "$HOME/dynawo")

# Colors
BOLD='\033[1m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}${BOLD}>>> Starting Hybrid Simulation Project Setup...${NC}"

# ==============================================================================
# 1. PRE-FLIGHT CHECKS
# ==============================================================================
echo -e "\n${BLUE}[1/5] Validating Core System Dependencies...${NC}"

check_tool() {
    local cmd=$1
    local name=$2

    if ! command -v "$cmd" &> /dev/null; then
        echo -e "${RED}  [X] $name is MISSING.${NC}"
        return 1
    else
        local ver=""
        if [ "$cmd" == "java" ]; then
             ver=$(java -version 2>&1 | head -n 1 | awk -F '"' '{print $2}')
        elif [ "$cmd" == "python3" ]; then
             ver=$(python3 --version | awk '{print $2}')
        elif [ "$cmd" == "omc" ]; then
             ver=$(omc --version | head -n 1)
        elif [ "$cmd" == "uv" ]; then
             ver=$(uv --version | awk '{print $2}')
        else
             ver="Detected"
        fi
        echo -e "${GREEN}  [OK] $name found ($ver)${NC}"
        return 0
    fi
}

# Auto-install uv if missing
if ! command -v uv &> /dev/null; then
    echo -e "${YELLOW}  [!] 'uv' not found. Installing automatically...${NC}"
    curl -LsSf https://astral.sh/uv/install.sh | sh
    if [ -f "$HOME/.cargo/env" ]; then
        source "$HOME/.cargo/env"
    elif [ -f "$HOME/.local/bin/env" ]; then
        source "$HOME/.local/bin/env"
    fi
fi

# Temporarily disable 'set -e' so missing tools don't crash the script immediately
set +e
EXIT_FLAG=0

check_tool "python3" "Python 3" || EXIT_FLAG=1
check_tool "java" "Java Runtime (Required for Powsybl)" || EXIT_FLAG=1
check_tool "omc" "OpenModelica Compiler" || EXIT_FLAG=1
check_tool "wget" "Wget (Downloader)" || EXIT_FLAG=1
check_tool "tar" "Tar (Extractor)" || EXIT_FLAG=1
check_tool "uv" "uv (Package Manager)" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing core dependencies. Please install them (apt/yum) and retry.${NC}"
    exit 1
fi
# Re-enable 'set -e'
set -e

# ==============================================================================
# 2. JULIA DETECTION OR INSTALLATION
# ==============================================================================
echo -e "\n${BLUE}[2/5] Checking Julia Environment...${NC}"

INSTALL_JULIA=false

if command -v julia &> /dev/null; then
    echo -e "${GREEN}  [OK] System Julia found: $(julia -v)${NC}"
else
    echo -e "${YELLOW}  [!] Julia not found on system.${NC}"
    echo -e "  > Initiating automatic local installation..."
    INSTALL_JULIA=true
fi

# ==============================================================================
# 3. PYTHON VENV & PROJECT INSTALL
# ==============================================================================
echo -e "\n${BLUE}[3/5] Setting up Python Virtual Environment with uv...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    uv venv "$VENV_NAME" --seed
else
    echo -e "  Using existing venv: $VENV_NAME"
fi

# Activate
source "$VENV_NAME/bin/activate"

# SMART JULIA INSTALLATION LOGIC
if [ "$INSTALL_JULIA" = true ]; then
    JULIA_INSTALL_DIR="$HOME/.local/julia-${JULIA_VER_FULL}"

    if [ -d "$JULIA_INSTALL_DIR" ]; then
        echo -e "  (Found existing local install at $JULIA_INSTALL_DIR)"
    else
        echo -e "  Downloading Julia ${JULIA_VER_FULL}..."
        JULIA_URL="https://julialang-s3.julialang.org/bin/linux/x64/${JULIA_VER_MAJOR}/julia-${JULIA_VER_FULL}-linux-x86_64.tar.gz"
        wget -q --show-progress -O julia_tmp.tar.gz "$JULIA_URL"

        echo -e "  Extracting..."
        mkdir -p "$JULIA_INSTALL_DIR"
        tar -xzf julia_tmp.tar.gz -C "$JULIA_INSTALL_DIR" --strip-components=1
        rm julia_tmp.tar.gz
    fi

    echo -e "  Linking local Julia to Virtual Environment..."
    ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$VENV_NAME/bin/julia"
else
    echo -e "  Linking system Julia to Virtual Environment..."
    ln -sf "$(command -v julia)" "$VENV_NAME/bin/julia"
fi

echo -e "${GREEN}  [OK] Julia linked into venv.${NC}"

# Python Dependencies
echo -e "  Syncing base project dependencies (from uv.lock)..."
uv sync --all-extras

echo -e "  Ensuring specific external scientific libraries are installed..."
uv pip install \
    pypowsybl \
    pyyaml \
    jupyter \
    jupyterlab \
    scipy \
    ipywidgets \
    OMPython \
    --quiet

# EXPLICIT LOCAL PACKAGE INSTALLATION
echo -e "  Checking and installing local project package (src)..."
if [ -f "pyproject.toml" ] || [ -f "setup.py" ]; then
    echo -e "  > Installing current directory as editable package..."
    # We use '.' because we already navigated to the root directory at the start of the script
    uv pip install --upgrade -e .
    
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}  [OK] Local project installed successfully.${NC}"
    else
        echo -e "${RED}  [ERROR] Failed to install local project.${NC}"
        exit 1
    fi
else
    echo -e "${YELLOW}  [!] No 'pyproject.toml' or 'setup.py' found. Skipping local project install.${NC}"
fi

# ==============================================================================
# 4. CONFIGURE DYNAWO LINK
# ==============================================================================
echo -e "\n${BLUE}[4/5] Configuring Dynawo-Powsybl Link...${NC}"

DYNAWO_HOME=""
# Auto-detection
for path in "${DEFAULT_DYNAWO_PATHS[@]}"; do
    if [ -f "$path/bin/dynawo.sh" ] || [ -f "$path/myDynawo/bin/dynawo.sh" ] || [ -f "$path/bin/dynawo" ] || [ -f "$path/myDynawo/bin/dynawo" ]; then
        DYNAWO_HOME="$path"
        break
    fi
done

# Interactive Fallback
if [ -z "$DYNAWO_HOME" ]; then
    echo -e "${YELLOW}  Could not auto-detect Dynawo.${NC}"
    # Read user input (temporarily disable exit on error if user makes a typo)
    set +e
    read -p "  Enter absolute path to Dynawo installation: " USER_INPUT
    set -e

    if [ -f "$USER_INPUT/bin/dynawo.sh" ] || [ -f "$USER_INPUT/myDynawo/bin/dynawo.sh" ] || [ -f "$USER_INPUT/bin/dynawo" ] || [ -f "$USER_INPUT/myDynawo/bin/dynawo" ]; then
        DYNAWO_HOME="$USER_INPUT"
    else
        echo -e "${RED}  [ERROR] Invalid path. Neither 'bin/dynawo.sh' nor 'bin/dynawo' found.${NC}"
        exit 1
    fi
fi

# Write Configuration
mkdir -p "$HOME/.itools"
cat <<EOF > "$HOME/.itools/config.yml"
dynawo:
  homeDir: ${DYNAWO_HOME}
  debug: false
EOF
echo -e "${GREEN}  [OK] Link established in ~/.itools/config.yml${NC}"

# ==============================================================================
# 5. JULIA PACKAGES SETUP
# ==============================================================================
echo -e "\n${BLUE}[5/5] Setting up Julia Packages...${NC}"
echo -e "  (Using: $(which julia))"

# Use the 'julia' command available in the VENV
julia -e '
using Pkg
packages = ["OMJulia", "DataFrames", "CSV", "Plots", "DifferentialEquations", "IJulia"]
println("  > Updating Registry...")
try
    Pkg.update()
    for pkg in packages
        println("  > Checking package: ", pkg)
        Pkg.add(pkg)
    end
    println("  > Julia setup successful.")
catch e
    println("  > Error in Julia setup: ", e)
    exit(1)
end
'

# ==============================================================================
# FINISH & IMPORTANT WARNINGS
# ==============================================================================
echo -e "\n${GREEN}${BOLD}======================================================${NC}"
echo -e "${GREEN}${BOLD}        SETUP COMPLETED SUCCESSFULLY                  ${NC}"
echo -e "${GREEN}${BOLD}======================================================${NC}"
echo -e "Next steps:"
echo -e "1. Activate environment:  ${YELLOW}source $VENV_NAME/bin/activate${NC}"
echo -e "2. Run Jupyter Lab:       ${YELLOW}jupyter lab${NC}"

# --- DISCLAIMER ---
echo -e "\n${RED}${BOLD}[IMPORTANT] OpenModelica Configuration Required:${NC}"
echo -e "${YELLOW}Dynawo requires Modelica Standard Library (MSL) version 3.2.3.${NC}"
echo -e "Recent OpenModelica versions default to MSL 4.0.0."
echo -e "Please do the following manually if you use OMEdit:"
echo -e "  1. Open OMEdit."
echo -e "  2. Go to ${BOLD}Tools -> Options -> Libraries${NC}."
echo -e "  3. Uncheck 'Load latest Modelica version'."
echo -e "  4. Add/Select 'Modelica' version ${BOLD}3.2.3+maint.om${NC}."
echo -e "  5. Add/Select 'ModelicaServices' version ${BOLD}3.2.3+maint.om${NC}."
echo -e ""