# 3. Julia & OpenModelica Setup

This setup supports the "Notebooks facilitating Dynawo" aspect of the proposal, enabling agile interaction with `.mo` physical models.

## Step 1: Base Installation
1.  **Julia:** Download the Long-Term Support (LTS) version from [julialang.org](https://julialang.org/downloads/).
2.  **OpenModelica:** Install the OpenModelica Compiler (`omc`). This is the engine that Julia will control.
    * *Linux:* Follow instructions at [openmodelica.org](https://openmodelica.org/).

## Step 2: Julia Package Management
Open the Julia REPL (type `julia` in terminal) and enter Pkg mode by pressing `]`.

```julia
# Core interface
add OMJulia

# Data analysis & plotting
add DataFrames
add CSV
add Plots

# For advanced mathematical validation (optional but recommended)
add DifferentialEquations
```

## Step 3: Verifying the Connection
Use the provided `TripleInertialGrid.mo` to test the setup.

```julia
using OMJulia
# This attempts to start the OMC server in the background
omc = OMJulia.OMCSession()
println("Connection to OpenModelica successful.")

# Load your model
omc.sendExpression("loadFile(\"TripleInertialGrid.mo\")")
```