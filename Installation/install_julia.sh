#!/bin/bash

# ==============================================================================
# JULIA & DYNAWO LIBRARY SETUP
# ==============================================================================

set -e

# --- Configuration ---
VERSION_TAG="v0.1"
JULIA_VER_MAJOR="1.10"
JULIA_VER_FULL="1.10.0"

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
echo -e "\n${BLUE}[0/4] Installation Mode Selection...${NC}"
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
echo -e "\n${BLUE}[1/4] Validating Dependencies...${NC}"

check_tool() {
    local cmd=$1
    local name=$2
    if ! command -v "$cmd" &> /dev/null; then
        echo -e "${RED}  [X] $name is MISSING.${NC}"
        return 1
    else
        local ver="Detected"
        if [ "$cmd" == "omc" ]; then ver=$(omc --version | head -n 1); fi
        echo -e "${GREEN}  [OK] $name found ($ver)${NC}"
        return 0
    fi
}

set +e
EXIT_FLAG=0
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
# 2. JULIA DETECTION OR INSTALLATION
# ==============================================================================
echo -e "\n${BLUE}[2/4] Checking Julia Environment...${NC}"

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
    
    # Expose Julia to the user's local bin
    mkdir -p "$HOME/.local/bin"
    ln -sf "$JULIA_INSTALL_DIR/bin/julia" "$HOME/.local/bin/julia"
    JULIA_CMD="$HOME/.local/bin/julia"
    echo -e "${GREEN}  [OK] Julia installed. Ensure ~/.local/bin is in your PATH.${NC}"
fi

# ==============================================================================
# 3. DOWNLOAD & EXTRACT DYNAWO LIBRARY
# ==============================================================================
echo -e "\n${BLUE}[3/4] Fetching Dynawo Library...${NC}"

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
# 4. JULIA PACKAGES SETUP
# ==============================================================================
echo -e "\n${BLUE}[4/4] Setting up Julia Packages...${NC}"

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
    println("  > Julia setup successful.")
catch e
    println("  > Error in Julia setup: ", e)
    exit(1)
end
'

# ==============================================================================
# FINISH & WARNINGS
# ==============================================================================
echo -e "\n${GREEN}${BOLD}=== JULIA SETUP COMPLETED SUCCESSFULLY ===${NC}"

echo -e "\n${RED}${BOLD}[IMPORTANT] OpenModelica Configuration Required:${NC}"
echo -e "${YELLOW}Dynawo requires Modelica Standard Library (MSL) version 3.2.3.${NC}"
echo -e "Please ensure MSL 3.2.3 and ModelicaServices 3.2.3 are loaded in OMEdit."
echo -e ""