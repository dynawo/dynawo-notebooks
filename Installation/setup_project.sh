#!/bin/bash

# ==============================================================================
# HYBRID SIMULATION ENVIRONMENT SETUP
# ==============================================================================
#
# SCHEMATIC SUMMARY:
#
#   [START]
#      |
#      v
#   [1. CHECKS] --> Verify Python, Java, OpenModelica, wget.
#      |            (Julia is optional here)
#      v
#   [2. JULIA] ---> Check for System Julia.
#      |            IF MISSING: Download & Install to local folder.
#      v
#   [3. VENV] ----> Create Python Virtual Env (venv_powsybl).
#      |            *Magic Step*: Link Julia binary into this venv.
#      |            Install: pypowsybl, pandas, lxml, jupyter.
#      v
#   [4. LINK] ----> Locate Dynawo Binary (C++ Engine).
#      |            Create ~/.itools/config.yml.
#      v
#   [5. PKGS] ----> Install Julia Libraries (OMJulia, Plots...).
#      |
#   [END]
#
# ==============================================================================

# --- Configuration ---
VENV_NAME="venv_powsybl"
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

# Function to check version and existence
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
        else
             ver="Detected"
        fi
        echo -e "${GREEN}  [OK] $name found ($ver)${NC}"
        return 0
    fi
}

EXIT_FLAG=0

check_tool "python3" "Python 3" || EXIT_FLAG=1
check_tool "java" "Java Runtime (Required for Powsybl)" || EXIT_FLAG=1
check_tool "omc" "OpenModelica Compiler" || EXIT_FLAG=1
check_tool "wget" "Wget (Downloader)" || EXIT_FLAG=1
check_tool "tar" "Tar (Extractor)" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing core dependencies. Please install them (apt/yum) and retry.${NC}"
    exit 1
fi

# ==============================================================================
# 2. JULIA DETECTION OR INSTALLATION
# ==============================================================================
echo -e "\n${BLUE}[2/5] Checking Julia Environment...${NC}"

JULIA_CMD="julia"
INSTALL_JULIA=false

if command -v julia &> /dev/null; then
    echo -e "${GREEN}  [OK] System Julia found.$(julia -v)${NC}"
else
    echo -e "${YELLOW}  [!] Julia not found on system.${NC}"
    echo -e "  > Initiating automatic installation (Local user only, no sudo needed)..."
    INSTALL_JULIA=true
fi

# ==============================================================================
# 3. PYTHON VENV (And Julia Integration)
# ==============================================================================
echo -e "\n${BLUE}[3/5] Setting up Python Virtual Environment...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    python3 -m venv "$VENV_NAME"
fi

# Activate
source "$VENV_NAME/bin/activate"

# --- SMART JULIA INSTALLATION LOGIC ---
if [ "$INSTALL_JULIA" = true ]; then
    # Define install path inside user home
    JULIA_INSTALL_DIR="$HOME/.local/julia-${JULIA_VER_FULL}"
    
    if [ -d "$JULIA_INSTALL_DIR" ]; then
        echo -e "  (Found existing local install at $JULIA_INSTALL_DIR)"
    else
        echo -e "  Downloading Julia ${JULIA_VER_FULL}..."
        # URL for Linux x64
        JULIA_URL="https://julialang-s3.julialang.org/bin/linux/x64/${JULIA_VER_MAJOR}/julia-${JULIA_VER_FULL}-linux-x86_64.tar.gz"
        
        wget -q --show-progress -O julia_tmp.tar.gz "$JULIA_URL"
        
        echo -e "  Extracting..."
        mkdir -p "$JULIA_INSTALL_DIR"
        tar -xzf julia_tmp.tar.gz -C "$JULIA_INSTALL_DIR" --strip-components=1
        rm julia_tmp.tar.gz
    fi
    
    # MAGIC STEP: Symlink Julia into the VENV bin directory
    # This means when user does 'source activate', they get 'julia' too.
    echo -e "  Linking Julia to Virtual Environment..."
    ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$VENV_NAME/bin/julia"
    
    JULIA_CMD="$VENV_NAME/bin/julia"
    echo -e "${GREEN}  [OK] Julia installed and linked into venv.${NC}"
fi

# Check Python Deps
echo -e "  Installing Project Libraries (Python)..."
pip install --upgrade pip --quiet
pip install pypowsybl pandas lxml pyyaml matplotlib jupyter jupyterlab --quiet

if [ $? -ne 0 ]; then
    echo -e "${RED}  [ERROR] Pip install failed.${NC}"
    exit 1
fi

# ==============================================================================
# 4. CONFIGURE DYNAWO LINK
# ==============================================================================
echo -e "\n${BLUE}[4/5] Configuring Dynawo-Powsybl Link...${NC}"

DYNAWO_HOME=""
# A. Auto-detection
for path in "${DEFAULT_DYNAWO_PATHS[@]}"; do
    # Check for shell wrapper (.sh) OR raw binary (dynawo)
    if [ -f "$path/bin/dynawo.sh" ] || [ -f "$path/myDynawo/bin/dynawo.sh" ] || [ -f "$path/bin/dynawo" ] || [ -f "$path/myDynawo/bin/dynawo" ]; then
        DYNAWO_HOME="$path"
        break
    fi
done

# B. Interactive Fallback
if [ -z "$DYNAWO_HOME" ]; then
    echo -e "${YELLOW}  Could not auto-detect Dynawo.${NC}"
    read -p "  Enter absolute path to Dynawo installation: " USER_INPUT
    
    # Updated validation logic
    if [ -f "$USER_INPUT/bin/dynawo.sh" ] || [ -f "$USER_INPUT/myDynawo/bin/dynawo.sh" ] || [ -f "$USER_INPUT/bin/dynawo" ] || [ -f "$USER_INPUT/myDynawo/bin/dynawo" ]; then
        DYNAWO_HOME="$USER_INPUT"
    else
        echo -e "${RED}  [ERROR] Invalid path. Neither 'bin/dynawo.sh' nor 'bin/dynawo' found.${NC}"
        exit 1
    fi
fi

# C. Write Configuration
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

# Use the 'julia' command available in path (system or venv linked)
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
# FINISH
# ==============================================================================
echo -e "\n${GREEN}${BOLD}======================================================${NC}"
echo -e "${GREEN}${BOLD}       SETUP COMPLETED SUCCESSFULLY                   ${NC}"
echo -e "${GREEN}${BOLD}======================================================${NC}"
echo -e "Final Instructions:"
echo -e "1. Activate environment:  ${YELLOW}source $VENV_NAME/bin/activate${NC}"
echo -e "   (This activates both Python and the local Julia installation)"
echo -e "2. Run Jupyter Lab:       ${YELLOW}jupyter lab${NC}"
echo -e ""