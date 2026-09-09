#!/bin/bash

# ==============================================================================
# OPENMODELICA + JULIA NOTEBOOKS SETUP
# ==============================================================================
# Description: Setup script for the Julia notebooks under src/julia_openmodelica.
# ==============================================================================

# Exit immediately if a command exits with a non-zero status
set -e

# --- Configuration ---
VERSION_TAG="v0.1"
VENV_NAME=".venv-julia"
JULIA_VER_FULL="1.10.12"
JULIA_VER_MAJOR="${JULIA_VER_FULL%.*}"    # 1.10, the directory used by the download URL
MSL_VER="3.2.3"                           # The Modelica Standard Library the models use

# Colors
BOLD='\033[1m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}${BOLD}>>> Starting OpenModelica + Julia Notebooks Setup...${NC}"

# ==============================================================================
# 0. INSTALLATION MODE SELECTION
# ==============================================================================
echo -e "\n${BLUE}[0/4] Installation Mode Selection...${NC}"
read -p "Do you want to use existing local files in '.' (L) or clone the remote repository (R)? [L/R]: " INSTALL_CHOICE

if [[ "$INSTALL_CHOICE" == "R" || "$INSTALL_CHOICE" == "r" ]]; then
    cd "$(dirname "$0")"
    echo -e "  > Cloning remote repository (tag ${VERSION_TAG}) into current directory..."
    # Clone into a temporary directory to avoid conflicts with existing non-empty directories
    git clone --branch "$VERSION_TAG" --depth 1 https://github.com/dynawo/dynawo-notebooks.git _tmp_clone

    # Move all files (including hidden ones like .gitignore) to current directory
    cp -r _tmp_clone/* . 2>/dev/null || true
    cp -r _tmp_clone/.[!.]* . 2>/dev/null || true
    rm -rf _tmp_clone

    echo -e "${GREEN}  [OK] Repository successfully cloned and extracted.${NC}"
else
    echo -e "  > Proceeding with existing local files."

fi

# ==============================================================================
# 1. PRE-FLIGHT CHECKS
# ==============================================================================
echo -e "\n${BLUE}[1/4] Validating Core System Dependencies...${NC}"

check_tool() {
    local cmd=$1
    local name=$2

    if ! command -v "$cmd" &> /dev/null; then
        echo -e "${RED}  [X] $name is MISSING.${NC}"
        return 1
    else
        local ver=""
        if [ "$cmd" == "python3" ]; then
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

check_tool "python3" "Python 3 (Required for Jupyter)" || EXIT_FLAG=1
check_tool "omc" "OpenModelica Compiler" || EXIT_FLAG=1
check_tool "wget" "Wget (Downloader)" || EXIT_FLAG=1
check_tool "tar" "Tar (Extractor)" || EXIT_FLAG=1
check_tool "curl" "Curl (Downloader)" || EXIT_FLAG=1
check_tool "uv" "uv (Package Manager)" || EXIT_FLAG=1
check_tool "git" "Git (Version Control)" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing core dependencies. Please install them (apt/yum) and retry.${NC}"
    exit 1
fi
# Re-enable 'set -e'
set -e

# ==============================================================================
# 2. JULIA INSTALLATION & JUPYTER ENVIRONMENT
# ==============================================================================
echo -e "\n${BLUE}[2/4] Setting up Julia ${JULIA_VER_FULL} and Jupyter...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    uv venv "$VENV_NAME" --seed
else
    echo -e "  Using existing venv: $VENV_NAME"
fi

# Activate
source "$VENV_NAME/bin/activate"

echo -e "  Installing JupyterLab..."
uv pip install jupyterlab --quiet

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

echo -e "  Linking Julia ${JULIA_VER_FULL} to Virtual Environment..."
ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$VENV_NAME/bin/julia"

echo -e "${GREEN}  [OK] Julia linked into venv.${NC}"

# ==============================================================================
# 3. MODELICA STANDARD LIBRARY
# ==============================================================================
echo -e "\n${BLUE}[3/4] Installing the Modelica Standard Library ${MSL_VER}...${NC}"

MSL_DIR="$HOME/.openmodelica/libraries/Modelica ${MSL_VER}+maint.om"

if [ -d "$MSL_DIR" ]; then
    echo -e "${GREEN}  [OK] Found existing install at $MSL_DIR${NC}"
else
    echo -e "  > Fetching it with the OpenModelica package manager..."
    echo -e "  > Complex and ModelicaServices come along with it as dependencies."
    MOS_FILE=$(mktemp --suffix=.mos)
    cat > "$MOS_FILE" <<EOF
updatePackageIndex();
installPackage(Modelica, "${MSL_VER}", exactMatch=false);
getErrorString();
EOF
    omc "$MOS_FILE" > /dev/null
    rm -f "$MOS_FILE"

    # installPackage reports success even when it installs nothing, so check the directory
    if [ -d "$MSL_DIR" ]; then
        echo -e "${GREEN}  [OK] Modelica ${MSL_VER} installed.${NC}"
    else
        echo -e "${RED}  [ERROR] Modelica ${MSL_VER} was not installed. The notebooks look for it${NC}"
        echo -e "${RED}          at '$MSL_DIR'.${NC}"
        exit 1
    fi
fi

# ==============================================================================
# 4. JULIA PACKAGES SETUP
# ==============================================================================
echo -e "\n${BLUE}[4/4] Setting up Julia Packages...${NC}"
echo -e "  (Using: $(which julia))"

# Use the 'julia' command available in the VENV
julia -e '
using Pkg
packages = ["OMJulia", "DataFrames", "CSV", "Plots", "IJulia"]
println("  > Updating Registry...")
try
    Pkg.update()
    for pkg in packages
        println("  > Checking package: ", pkg)
        Pkg.add(pkg)
    end
catch e
    println("  > Error in Julia setup: ", e)
    exit(1)
end
using IJulia
println("  > Registering Jupyter kernel: Julia (clean)")
IJulia.installkernel("Julia (clean)", env=Dict("LD_LIBRARY_PATH" => ""))
println("  > Julia setup successful.")
'

# ==============================================================================
# FINISH
# ==============================================================================
echo -e "\n${GREEN}${BOLD}======================================================${NC}"
echo -e "${GREEN}${BOLD}        SETUP COMPLETED SUCCESSFULLY                  ${NC}"
echo -e "${GREEN}${BOLD}======================================================${NC}"
echo -e "Next steps:"
echo -e "1. Activate environment:  ${YELLOW}source $VENV_NAME/bin/activate${NC}"
echo -e "2. Run Jupyter Lab:       ${YELLOW}jupyter lab${NC}"
