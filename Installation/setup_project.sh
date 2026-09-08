#!/bin/bash

# ==============================================================================
# HYBRID SIMULATION ENVIRONMENT SETUP
# ==============================================================================
# Description: Industrialized setup script for Python + Julia + Dynawo using 'uv'.
# ==============================================================================

# Exit immediately if a command exits with a non-zero status
set -e

# --- Configuration ---
VERSION_TAG="v0.1"
VENV_NAME=".venv"
JULIA_VER_FULL="1.10.12"                  # Latest patch of the Julia LTS series
JULIA_VER_MAJOR="${JULIA_VER_FULL%.*}"    # 1.10, the directory used by the download URL
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
# 0. INSTALLATION MODE SELECTION
# ==============================================================================
echo -e "\n${BLUE}[0/6] Installation Mode Selection...${NC}"
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
echo -e "\n${BLUE}[1/6] Validating Core System Dependencies...${NC}"

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
# 2. JULIA DETECTION OR INSTALLATION
# ==============================================================================
echo -e "\n${BLUE}[2/6] Checking Julia Environment...${NC}"

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
echo -e "\n${BLUE}[3/6] Setting up Python Virtual Environment with uv...${NC}"

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
# 4. DYNAWO DETECTION OR DOWNLOAD
# ==============================================================================
echo -e "\n${BLUE}[4/6] Checking and Installing Dynawo...${NC}"

DYNAWO_HOME=""
# Auto-detection
for path in "${DEFAULT_DYNAWO_PATHS[@]}"; do
    if [ -f "$path/bin/dynawo.sh" ] || [ -f "$path/myDynawo/bin/dynawo.sh" ] || [ -f "$path/bin/dynawo" ] || [ -f "$path/myDynawo/bin/dynawo" ] || [ -f "$path/dynawo.sh" ]; then
        DYNAWO_HOME="$path"
        echo -e "${GREEN}  [OK] Local Dynawo found at $DYNAWO_HOME${NC}"
        break
    fi
done

# Download logic if not found
if [ -z "$DYNAWO_HOME" ]; then
    echo -e "${YELLOW}  [!] Dynawo not detected in default paths.${NC}"
    echo -e "  > Attempting to download Dynawo from the primary release link..."
    
    PRIMARY_DYNAWO_URL="https://github.com/dynawo/dynawo-notebooks/releases/download/$VERSION_TAG/Dynawo_Linux.zip"
    
    # Temporarily disable set -e to handle download failure gracefully
    set +e
    curl -f -s -L "$PRIMARY_DYNAWO_URL" -o Dynawo_Linux.zip
    CURL_STATUS=$?
    set -e

    if [ $CURL_STATUS -eq 0 ]; then
        echo -e "  > Primary download successful."
    else
        echo -e "${RED}  [ERROR] Primary link failed. Could not retrieve Dynawo from: $PRIMARY_DYNAWO_URL${NC}"
        exit 1
    fi

    echo -e "  > Unzipping Dynawo..."
    unzip -o Dynawo_Linux.zip -d "$HOME" > /dev/null 2>&1
    rm Dynawo_Linux.zip
    DYNAWO_HOME="$HOME/dynawo"
    
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
# 5. CONFIGURE DYNAWO LINK
# ==============================================================================
echo -e "\n${BLUE}[5/6] Configuring Dynawo-Powsybl Link...${NC}"

# Write Configuration
mkdir -p "$HOME/.itools"
cat <<EOF > "$HOME/.itools/config.yml"
dynawo:
  homeDir: ${DYNAWO_HOME}
  debug: false
EOF
echo -e "${GREEN}  [OK] Link established in ~/.itools/config.yml${NC}"

# ==============================================================================
# 6. JULIA PACKAGES SETUP
# ==============================================================================
echo -e "\n${BLUE}[6/6] Setting up Julia Packages...${NC}"
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
# FINISH & IMPORTANT WARNINGS
# ==============================================================================
echo -e "\n${GREEN}${BOLD}======================================================${NC}"
echo -e "${GREEN}${BOLD}        SETUP COMPLETED SUCCESSFULLY                  ${NC}"
echo -e "${GREEN}${BOLD}======================================================${NC}"
echo -e "Next steps:"
echo -e "1. Activate environment:  ${YELLOW}source $VENV_NAME/bin/activate${NC}"
echo -e "2. Run Jupyter Lab:       ${YELLOW}jupyter lab${NC}"

