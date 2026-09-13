#!/bin/bash

# ==============================================================================
# JULIA & DYNAWO LIBRARY SETUP
# ==============================================================================

set -e

# --- Configuration ---
VERSION_TAG="v0.3"
VENV_NAME=".venv-julia"
JULIA_VER_FULL="1.10.12"
JULIA_VER_MAJOR="${JULIA_VER_FULL%.*}"
MSL_VER="3.2.3"                           # The Modelica Standard Library the models use

# Colors
BOLD='\033[1m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${BLUE}${BOLD}>>> Starting Julia & Dynawo Library Setup...${NC}"

# ==============================================================================
# 0. INSTALLATION MODE & ROOT RESOLUTION
# ==============================================================================
echo -e "\n${BLUE}[0/5] Installation Mode Selection...${NC}"
read -p "Use existing local files (L) or clone the remote repository (R)? [L/R]: " INSTALL_CHOICE

if [[ "$INSTALL_CHOICE" == "R" || "$INSTALL_CHOICE" == "r" ]]; then
    PROJECT_ROOT="$(pwd)"
    echo -e "  > Cloning remote repository (tag ${VERSION_TAG}) into current directory..."
    git clone --branch "$VERSION_TAG" --depth 1 https://github.com/dynawo/dynawo-notebooks.git _tmp_clone
    cp -r _tmp_clone/* . 2>/dev/null || true
    cp -r _tmp_clone/.[!.]* . 2>/dev/null || true
    rm -rf _tmp_clone
    echo -e "${GREEN}  [OK] Repository extracted into $PROJECT_ROOT.${NC}"
else
    # Auto-detect root based on pyproject.toml
    if [ -f "pyproject.toml" ]; then
        PROJECT_ROOT="$(pwd)"
    elif [ -f "../pyproject.toml" ]; then
        PROJECT_ROOT="$(cd .. && pwd)"
    else
        echo -e "${RED}  [ERROR] pyproject.toml not found. Run this inside the project folder.${NC}"
        exit 1
    fi
    cd "$PROJECT_ROOT"
    echo -e "  > Proceeding with existing local files in $PROJECT_ROOT."
fi

# ==============================================================================
# 1. PRE-FLIGHT CHECKS
# ==============================================================================
echo -e "\n${BLUE}[1/5] Validating Dependencies...${NC}"

check_tool() {
    local cmd=$1
    local name=$2
    if ! command -v "$cmd" &> /dev/null; then
        echo -e "${RED}  [X] $name is MISSING.${NC}"
        return 1
    else
        local ver="Detected"
        if [ "$cmd" == "omc" ]; then ver=$(omc --version | head -n 1); fi
        if [ "$cmd" == "python3" ]; then ver=$(python3 --version | awk '{print $2}'); fi
        if [ "$cmd" == "uv" ]; then ver=$(uv --version | awk '{print $2}'); fi
        echo -e "${GREEN}  [OK] $name found ($ver)${NC}"
        return 0
    fi
}

# Auto-install uv
if ! command -v uv &> /dev/null; then
    echo -e "${YELLOW}  [!] 'uv' not found. Installing...${NC}"
    curl -LsSf https://astral.sh/uv/install.sh | sh
    source "$HOME/.cargo/env" 2>/dev/null || source "$HOME/.local/bin/env" 2>/dev/null || true
fi

set +e
EXIT_FLAG=0
check_tool "python3" "Python 3" || EXIT_FLAG=1
check_tool "uv" "uv" || EXIT_FLAG=1
check_tool "omc" "OpenModelica Compiler" || EXIT_FLAG=1
check_tool "wget" "Wget" || EXIT_FLAG=1
check_tool "curl" "Curl" || EXIT_FLAG=1
check_tool "tar" "Tar" || EXIT_FLAG=1
check_tool "xz" "XZ Utils" || EXIT_FLAG=1
check_tool "git" "Git" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing dependencies. Install them and retry.${NC}"
    exit 1
fi
set -e

# ==============================================================================
# 2. JUPYTER ENVIRONMENT & JULIA
# ==============================================================================
echo -e "\n${BLUE}[2/5] Setting up the Jupyter Environment and Julia...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    uv venv "$VENV_NAME" --seed
fi
source "$VENV_NAME/bin/activate"

echo -e "  Installing JupyterLab..."
uv pip install jupyterlab --quiet

JULIA_CMD="julia"
if command -v julia &> /dev/null; then
    echo -e "${GREEN}  [OK] System Julia found: $(julia -v)${NC}"
else
    echo -e "${YELLOW}  [!] Julia not found on system. Installing locally...${NC}"
    JULIA_INSTALL_DIR="$HOME/.local/julia-${JULIA_VER_FULL}"
    
    if [ ! -d "$JULIA_INSTALL_DIR" ]; then
        JULIA_URL="https://julialang-s3.julialang.org/bin/linux/x64/${JULIA_VER_MAJOR}/julia-${JULIA_VER_FULL}-linux-x86_64.tar.gz"
        wget -q --show-progress -O julia_tmp.tar.gz "$JULIA_URL"
        
        echo -e "  Extracting Julia..."
        mkdir -p "$JULIA_INSTALL_DIR"
        tar -xzf julia_tmp.tar.gz -C "$JULIA_INSTALL_DIR" --strip-components=1
        rm julia_tmp.tar.gz
    fi
    
    # Expose Julia to the user's local bin and to the virtual environment
    mkdir -p "$HOME/.local/bin"
    ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$HOME/.local/bin/julia"
    ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$VENV_NAME/bin/julia"
    JULIA_CMD="$VENV_NAME/bin/julia"
    echo -e "${GREEN}  [OK] Julia installed and linked into the venv.${NC}"
fi

# ==============================================================================
# 3. DOWNLOAD & EXTRACT DYNAWO LIBRARY
# ==============================================================================
echo -e "\n${BLUE}[3/5] Fetching Dynawo Library...${NC}"

DYNAWO_LIB_URL="https://github.com/dynawo/dynawo-notebooks/releases/download/$VERSION_TAG/dynawo_library_1_8.tar.xz"
LIB_DEST="$PROJECT_ROOT/src/julia_openmodelica/dynawo_library"

echo -e "  > Downloading Dynawo Library..."
curl -f -s -L -o dynawo_lib.tar.xz "$DYNAWO_LIB_URL" || { echo -e "${RED}  [ERROR] Download failed.${NC}"; exit 1; }

echo -e "  > Extracting Library to: src/julia_openmodelica/dynawo_library"
mkdir -p "$LIB_DEST"

tar -xf dynawo_lib.tar.xz -C "$LIB_DEST" --strip-components=1 2>/dev/null || tar -xf dynawo_lib.tar.xz -C "$LIB_DEST"
rm dynawo_lib.tar.xz

echo -e "${GREEN}  [OK] Dynawo Library extracted successfully.${NC}"

# ==============================================================================
# 4. MODELICA STANDARD LIBRARY
# ==============================================================================
echo -e "\n${BLUE}[4/5] Installing the Modelica Standard Library ${MSL_VER}...${NC}"

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
# 5. JULIA PACKAGES SETUP
# ==============================================================================
echo -e "\n${BLUE}[5/5] Setting up Julia Packages...${NC}"
echo -e "  (Using: $JULIA_CMD)"

$JULIA_CMD -e '
using Pkg
packages = ["OMJulia", "DataFrames", "CSV", "Plots", "IJulia"]
println("  > Updating Registry...")
try
    Pkg.update()
    for pkg in packages
        println("  > Checking/Adding package: ", pkg)
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
# FINISH & WARNINGS
# ==============================================================================
echo -e "\n${GREEN}${BOLD}=== JULIA SETUP COMPLETED SUCCESSFULLY ===${NC}"

echo -e "\n${RED}${BOLD}[IMPORTANT] OpenModelica Configuration Required:${NC}"
echo -e "${YELLOW}Dynawo requires Modelica Standard Library (MSL) version 3.2.3.${NC}"
echo -e "Please ensure MSL 3.2.3 and ModelicaServices 3.2.3 are loaded in OMEdit."
echo -e ""