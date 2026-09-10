#!/bin/bash

# ==============================================================================
# PYTHON & DYNAWO ENVIRONMENT SETUP
# ==============================================================================

set -e

# --- Configuration ---
VERSION_TAG="v0.1"
VENV_NAME=".venv"
DEFAULT_DYNAWO_PATHS=("/opt/dynawo" "/usr/local/dynawo" "$HOME/dynawo")

# Resolve project root (assumes script is inside dynawo-notebooks/Installation/)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

# Colors
BOLD='\033[1m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${BLUE}${BOLD}>>> Starting Python & Dynawo Setup...${NC}"

# Ensure we are in the project root
cd "$PROJECT_ROOT"

# ==============================================================================
# 0. INSTALLATION MODE SELECTION
# ==============================================================================
echo -e "\n${BLUE}[0/4] Installation Mode Selection...${NC}"
read -p "Use existing local files (L) or clone the remote repository (R)? [L/R]: " INSTALL_CHOICE

if [[ "$INSTALL_CHOICE" == "R" || "$INSTALL_CHOICE" == "r" ]]; then
    echo -e "  > Cloning remote repository (tag ${VERSION_TAG}) into project root..."
    git clone --branch "$VERSION_TAG" --depth 1 https://github.com/dynawo/dynawo-notebooks.git _tmp_clone
    cp -r _tmp_clone/* . 2>/dev/null || true
    cp -r _tmp_clone/.[!.]* . 2>/dev/null || true
    rm -rf _tmp_clone
    echo -e "${GREEN}  [OK] Repository extracted.${NC}"
else
    echo -e "  > Proceeding with existing local files."
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
        if [ "$cmd" == "java" ]; then ver=$(java -version 2>&1 | head -n 1 | awk -F '"' '{print $2}'); fi
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
check_tool "java" "Java Runtime" || EXIT_FLAG=1
check_tool "uv" "uv" || EXIT_FLAG=1
check_tool "git" "Git" || EXIT_FLAG=1
check_tool "wget" "Wget" || EXIT_FLAG=1
check_tool "curl" "Curl" || EXIT_FLAG=1
check_tool "tar" "Tar" || EXIT_FLAG=1
check_tool "xz" "XZ Utils" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing dependencies. Install them and retry.${NC}"
    exit 1
fi
set -e

# ==============================================================================
# 2. PYTHON VENV & PROJECT INSTALL
# ==============================================================================
echo -e "\n${BLUE}[2/4] Setting up Python Environment...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    uv venv "$VENV_NAME" --seed
fi
source "$VENV_NAME/bin/activate"

if [ ! -f "uv.lock" ] || [ ! -f "pyproject.toml" ]; then
    echo -e "${RED}  [ERROR] uv.lock or pyproject.toml not found in $PROJECT_ROOT.${NC}"
    exit 1
fi

uv sync --all-extras
echo -e "  Fetching requirements..."
REQ_URL="https://github.com/dynawo/dynawo-notebooks/releases/download/$VERSION_TAG/requirements.txt"

if curl -f -s -L "$REQ_URL" -o req_frozen.txt; then
    sed -i 's/-e git+/git+/g' req_frozen.txt
    uv pip install -r req_frozen.txt --quiet
    rm req_frozen.txt
else
    echo -e "${YELLOW}  [!] Falling back to latest packages...${NC}"
    uv pip install pypowsybl pyyaml jupyter jupyterlab scipy ipywidgets OMPython --quiet
fi

echo -e "  Installing local project in editable mode..."
uv pip install --upgrade -e . 
echo -e "${GREEN}  [OK] Python project installed.${NC}"

# ==============================================================================
# 3. DYNAWO DETECTION OR DOWNLOAD
# ==============================================================================
echo -e "\n${BLUE}[3/4] Installing Full Dynawo Package...${NC}"

DYNAWO_HOME=""
for path in "${DEFAULT_DYNAWO_PATHS[@]}"; do
    if [ -f "$path/bin/dynawo.sh" ] || [ -f "$path/dynawo.sh" ]; then
        DYNAWO_HOME="$path"
        echo -e "${GREEN}  [OK] Local Dynawo found at $DYNAWO_HOME${NC}"
        break
    fi
done

if [ -z "$DYNAWO_HOME" ]; then
    DYNAWO_URL="https://github.com/dynawo/dynawo-notebooks/releases/download/$VERSION_TAG/Dynawo_Linux_1_7.tar.xz"
    DYNAWO_HOME="$HOME/dynawo"
    
    echo -e "  > Downloading Dynawo from: $DYNAWO_URL"
    curl -f -s -L -o Dynawo_Linux.tar.xz "$DYNAWO_URL" || { echo -e "${RED}  [ERROR] Download failed.${NC}"; exit 1; }
    
    echo -e "  > Extracting Dynawo to $DYNAWO_HOME..."
    mkdir -p "$DYNAWO_HOME"
    tar -xf Dynawo_Linux.tar.xz -C "$DYNAWO_HOME" --strip-components=1 2>/dev/null || tar -xf Dynawo_Linux.tar.xz -C "$DYNAWO_HOME"
    rm Dynawo_Linux.tar.xz
    
    if [ -f "$DYNAWO_HOME/dynawo.sh" ] || [ -f "$DYNAWO_HOME/bin/dynawo.sh" ]; then
        echo -e "${GREEN}  [OK] Dynawo installed at $DYNAWO_HOME${NC}"
    else
        echo -e "${YELLOW}  [!] Extracted, but dynawo.sh not found where expected.${NC}"
    fi
fi

# ==============================================================================
# 4. CONFIGURE DYNAWO LINK
# ==============================================================================
echo -e "\n${BLUE}[4/4] Configuring Dynawo-Powsybl Link...${NC}"
mkdir -p "$HOME/.itools"
cat <<EOF > "$HOME/.itools/config.yml"
dynawo:
  homeDir: ${DYNAWO_HOME}
  debug: false
EOF
echo -e "${GREEN}  [OK] Link established in ~/.itools/config.yml${NC}"

# ==============================================================================
# FINISH
# ==============================================================================
echo -e "\n${GREEN}${BOLD}=== PYTHON SETUP COMPLETED SUCCESSFULLY ===${NC}"