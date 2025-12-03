#!/bin/bash

# ==============================================================================
# AIA Project Setup Script: Dynawo-Notebooks Environment
# ==============================================================================
# This script sets up a complete environment for hybrid Python/Julia simulation.
# It performs the following actions:
# 1. Installs system dependencies (Java, Python dev tools, curl).
# 2. Installs Julia (LTS version).
# 3. Creates a Python Virtual Environment (venv) and installs pypowsybl stack.
# 4. Configures the link between Pypowsybl and Dynawo.
# 5. Installs required Julia packages for Modelica interaction.
# ==============================================================================

# --- Configuration Variables ---
# Update this path to your actual Dynawo installation folder!
DYNAWO_HOME="/opt/dynawo" 
PROJECT_DIR=$(pwd)
VENV_NAME="venv_powsybl"
JULIA_VERSION="1.10.0" # LTS or Stable version recommended for compatibility

# Colors for output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}>>> Starting AIA Project Environment Setup...${NC}"

# ------------------------------------------------------------------------------
# 1. System Dependencies
# ------------------------------------------------------------------------------
echo -e "${GREEN}[1/5] Installing System Dependencies (Java JDK 17, Python tools)...${NC}"
sudo apt-get update
# JDK 17 is required for Powsybl backend. wget/curl for downloading Julia.
sudo apt-get install -y openjdk-17-jdk python3-pip python3-venv curl wget build-essential

# Verify Java installation
java -version
if [ $? -ne 0 ]; then
    echo -e "${RED}Error: Java installation failed.${NC}"
    exit 1
fi

# ------------------------------------------------------------------------------
# 2. Install Julia
# ------------------------------------------------------------------------------
echo -e "${GREEN}[2/5] Installing Julia ${JULIA_VERSION}...${NC}"

# Check if Julia is already installed
if ! command -v julia &> /dev/null; then
    cd /tmp
    wget https://julialang-s3.julialang.org/bin/linux/x64/1.10/julia-${JULIA_VERSION}-linux-x86_64.tar.gz
    tar zxvf julia-${JULIA_VERSION}-linux-x86_64.tar.gz
    
    # Move to global location (optional, you can keep it local)
    sudo mv julia-${JULIA_VERSION} /opt/julia
    sudo ln -s /opt/julia/bin/julia /usr/local/bin/julia
    
    rm julia-${JULIA_VERSION}-linux-x86_64.tar.gz
else
    echo "Julia is already installed."
fi

julia --version

# ------------------------------------------------------------------------------
# 3. Python Environment Setup
# ------------------------------------------------------------------------------
echo -e "${GREEN}[3/5] Setting up Python Virtual Environment...${NC}"

cd "$PROJECT_DIR"

# Create clean venv
if [ -d "$VENV_NAME" ]; then
    echo "Removing existing virtual environment..."
    rm -rf "$VENV_NAME"
fi

python3 -m venv "$VENV_NAME"
source "$VENV_NAME"/bin/activate

# Upgrade pip
pip install --upgrade pip

# Install project libraries
echo "Installing Python libraries..."
# Note: Using public PyPI. If using RTE internal repo, add --index-url here.
pip install pypowsybl pandas lxml pyyaml matplotlib jupyter jupyterlab ipykernel

# Register this venv as a kernel for Jupyter
python -m ipykernel install --user --name="$VENV_NAME" --display-name "Python (Powsybl)"

# ------------------------------------------------------------------------------
# 4. Configure Pypowsybl -> Dynawo Link
# ------------------------------------------------------------------------------
echo -e "${GREEN}[4/5] Configuring Pypowsybl connection to Dynawo...${NC}"

if [ ! -d "$DYNAWO_HOME" ]; then
    echo -e "${RED}WARNING: Dynawo directory $DYNAWO_HOME not found!${NC}"
    echo -e "${RED}Please edit ~/.itools/config.yml manually after installation.${NC}"
fi

# Create config directory
mkdir -p ~/.itools

# Create config.yml
cat <<EOF > ~/.itools/config.yml
dynawo:
  homeDir: ${DYNAWO_HOME}
  debug: true
EOF

echo "Configuration written to ~/.itools/config.yml"

# ------------------------------------------------------------------------------
# 5. Julia Packages Installation
# ------------------------------------------------------------------------------
echo -e "${GREEN}[5/5] Installing Julia Packages (OMJulia, Plots, DataFrames)...${NC}"

# We use a small Julia script to install packages non-interactively
julia -e '
using Pkg
Pkg.add("OMJulia")
Pkg.add("Plots")
Pkg.add("DataFrames")
Pkg.add("CSV")
Pkg.add("DifferentialEquations")
Pkg.add("IJulia") # For Jupyter integration
'

echo -e "${BLUE}>>> Setup Complete!${NC}"
echo -e "To start working:"
echo -e "1. Activate Python env:  ${GREEN}source $VENV_NAME/bin/activate${NC}"
echo -e "2. Launch Jupyter:       ${GREEN}jupyter lab${NC}"
echo -e "3. Verify Dynawo path in ~/.itools/config.yml matches your installation."