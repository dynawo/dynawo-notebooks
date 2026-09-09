#!/bin/bash

# ==============================================================================
# HYBRID SIMULATION ENVIRONMENT SETUP
# ==============================================================================
# Description: Industrialized setup script for Python + Dynawo using 'uv'.
# ==============================================================================

# Exit immediately if a command exits with a non-zero status
set -e

# --- Configuration ---
VERSION_TAG="v0.1"
VENV_NAME=".venv"
PYTHON_VER="3.12"
DYNAWO_VER="1.7.0"
DYNAWO_HOME="$HOME/dynawo-${DYNAWO_VER}"

# Colors
BOLD='\033[1m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}${BOLD}>>> Starting Hybrid Simulation Project Setup...${NC}"

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
    
    # Move all files (including hidden ones like .gitignore, pyproject.toml, uv.lock) to current directory
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
check_tool "curl" "Curl (API requests/Downloader)" || EXIT_FLAG=1
check_tool "unzip" "Unzip (Extractor for Dynawo)" || EXIT_FLAG=1
check_tool "uv" "uv (Package Manager)" || EXIT_FLAG=1
check_tool "git" "Git (Version Control)" || EXIT_FLAG=1

if [ $EXIT_FLAG -eq 1 ]; then
    echo -e "\n${RED}[CRITICAL] Missing core dependencies. Please install them (apt/yum) and retry.${NC}"
    exit 1
fi
# Re-enable 'set -e'
set -e

# ==============================================================================
# 2. PYTHON VENV & PROJECT INSTALL
# ==============================================================================
echo -e "\n${BLUE}[2/4] Setting up Python Virtual Environment with uv...${NC}"

if [ ! -d "$VENV_NAME" ]; then
    echo -e "  Creating venv: $VENV_NAME..."
    uv venv "$VENV_NAME" --seed --python "$PYTHON_VER"
else
    echo -e "  Using existing venv: $VENV_NAME"
fi

# Activate
source "$VENV_NAME/bin/activate"

# Python Dependencies
echo -e "  Syncing base project dependencies from local files..."
if [ ! -f "uv.lock" ] || [ ! -f "pyproject.toml" ]; then
    echo -e "${RED}  [ERROR] Required configuration files (uv.lock, pyproject.toml) not found in current directory.${NC}"
    exit 1
fi

uv sync --all-extras

# Download and install requirements (with fallback)
echo -e "  Fetching and installing Python requirements..."
REQUIREMENTS_URL="https://github.com/dynawo/dynawo-notebooks/releases/download/$VERSION_TAG/requirements.txt"

set +e
curl -f -s -L "$REQUIREMENTS_URL" -o requirements_frozen.txt
REQ_DOWNLOAD_STATUS=$?
set -e

if [ $REQ_DOWNLOAD_STATUS -eq 0 ]; then
    echo -e "  > Primary requirements file downloaded successfully."
    echo -e "  > Fixing editable remote dependencies for 'uv' compatibility..."
    sed -i 's/-e git+/git+/g' requirements_frozen.txt

    set +e
    uv pip install -r requirements_frozen.txt --quiet
    REQ_INSTALL_STATUS=$?
    set -e
    rm -f requirements_frozen.txt

    if [ $REQ_INSTALL_STATUS -ne 0 ]; then
        echo -e "${YELLOW}  [!] The pinned versions cannot be installed with Python $(python3 -c 'import sys; print("%d.%d" % sys.version_info[:2])').${NC}"
        REQ_DOWNLOAD_STATUS=1
    fi
fi

if [ $REQ_DOWNLOAD_STATUS -ne 0 ]; then
    echo -e "${YELLOW}  [!] Falling back to the latest versions available for this Python...${NC}"
    uv pip install \
        pypowsybl \
        pyyaml \
        jupyter \
        jupyterlab \
        scipy \
        ipywidgets \
        OMPython \
        --quiet
fi

echo -e "  Installing project package from local directory in editable mode..."
uv pip install --upgrade -e .
if [ $? -eq 0 ]; then
    echo -e "${GREEN}  [OK] Project installed successfully in editable mode.${NC}"
else
    echo -e "${RED}  [ERROR] Failed to install local project.${NC}"
    exit 1
fi

# ==============================================================================
# 3. DYNAWO DOWNLOAD
# ==============================================================================
echo -e "\n${BLUE}[3/4] Checking and Installing Dynawo ${DYNAWO_VER}...${NC}"

if [ -f "$DYNAWO_HOME/dynawo.sh" ]; then
    echo -e "${GREEN}  [OK] Local Dynawo found at $DYNAWO_HOME${NC}"
else
    echo -e "${YELLOW}  [!] Dynawo ${DYNAWO_VER} not found at $DYNAWO_HOME.${NC}"
    echo -e "  > Downloading it from the official Dynawo release..."

    DYNAWO_URL="https://github.com/dynawo/dynawo/releases/download/v${DYNAWO_VER}/Dynawo_Linux_v${DYNAWO_VER}.zip"

    # Temporarily disable set -e to handle download failure gracefully
    set +e
    curl -f -s -L "$DYNAWO_URL" -o Dynawo_Linux.zip
    CURL_STATUS=$?
    set -e

    if [ $CURL_STATUS -eq 0 ]; then
        echo -e "  > Download successful."
    else
        echo -e "${RED}  [ERROR] Could not retrieve Dynawo from: $DYNAWO_URL${NC}"
        exit 1
    fi

    # The archive holds a single 'dynawo' directory, so extract it aside and move it
    echo -e "  > Unzipping Dynawo..."
    TMP_DIR=$(mktemp -d)
    unzip -q Dynawo_Linux.zip -d "$TMP_DIR"
    mv "$TMP_DIR/dynawo" "$DYNAWO_HOME"
    rm -rf Dynawo_Linux.zip "$TMP_DIR"

    # Execution tests to confirm the download
    if [ -f "$DYNAWO_HOME/dynawo.sh" ]; then
        echo -e "  > Testing Dynawo execution..."
        "$DYNAWO_HOME/dynawo.sh" help > /dev/null 2>&1
        echo -e "${GREEN}  [OK] Dynawo has been successfully installed and executed at $DYNAWO_HOME${NC}"
    else
        echo -e "${YELLOW}  [!] Dynawo was downloaded, but 'dynawo.sh' was not found to test its execution.${NC}"
    fi
fi

# ==============================================================================
# 4. CONFIGURE DYNAWO LINK
# ==============================================================================
echo -e "\n${BLUE}[4/4] Configuring Dynawo-Powsybl Link...${NC}"

# Write Configuration
mkdir -p "$HOME/.itools"
cat <<EOF > "$HOME/.itools/config.yml"
dynawo:
  homeDir: ${DYNAWO_HOME}
  debug: false
EOF
echo -e "${GREEN}  [OK] Link established in ~/.itools/config.yml${NC}"

# ==============================================================================
# FINISH & IMPORTANT WARNINGS
# ==============================================================================
echo -e "\n${GREEN}${BOLD}======================================================${NC}"
echo -e "${GREEN}${BOLD}        SETUP COMPLETED SUCCESSFULLY                  ${NC}"
echo -e "${GREEN}${BOLD}======================================================${NC}"
echo -e "Next steps:"
echo -e "1. Activate environment:  ${YELLOW}source $VENV_NAME/bin/activate${NC}"
echo -e "2. Run Jupyter Lab:       ${YELLOW}jupyter lab${NC}"

