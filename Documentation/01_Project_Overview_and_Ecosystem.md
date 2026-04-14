# 1. Project Overview: Hybrid Dynamic Simulation Environment

This documentation outlines the simulation environment developed for the AIA project (Artificial Intelligence for Automating Dynamic Security Assessment). It is designed to facilitate the use of **Dynawo** through Python and Julia notebooks, bridging the gap between static network planning and complex time-domain dynamic simulation.

## The Core Problem: Initialization & Stability
As discussed in the kickoff and subsequent meetings, the central challenge is not just running a simulation, but **guaranteeing a valid initialization**.
* A standard Loadflow provides the network state ($P$, $Q$, $V$, $\theta$) at $t=0$.
* However, complex dynamic models (e.g., a 4-winding synchronous generator) have internal state variables (fluxes, rotor currents) that are not explicitly defined by the Loadflow.
* **Solution:** The implementation of **"Init Models"**, a logic recently standardized in Dynawo (see PR #3899), which deduces these internal states from the boundary conditions.

## Architecture Components

### 1. Powsybl (Power System Blocks)
* **Role:** Network Architect & Static Solver.
* **Function:** It parses raw data, defines the topology (Node-Breaker vs. Bus-Breaker), and solves the steady-state **Loadflow**. Without a converged Loadflow, the dynamic simulation has no starting point.
* **Interface:** We use **PyPowsybl** (Python wrapper) to script these actions.

### 2. Dynawo (Dynamic World)
* **Role:** Time-Domain Simulation Engine.
* **Function:** A hybrid C++/Modelica engine that solves the system of Differential Algebraic Equations (DAE):
    $$f(x, \dot{x}, y, t) = 0$$
    Where $x$ are dynamic states and $y$ are algebraic variables.
* **Key Feature:** It uses a "Lagrangian" approach, separating the solver (IDA/SUNDIALS) from the physical modeling (Modelica).

### 3. Modelica & OpenModelica
* **Role:** Physical Modeling Language.
* **Usage:**
    * **Standard:** Dynawo uses compiled Modelica libraries for standard grid components.
    * **Custom:** You use raw `.mo` files (e.g., `TripleInertialGrid.mo`) for fundamental research, such as analyzing low-inertia frequency stability without the noise of a full grid.

### 4. Julia & OMJulia
* **Role:** Mathematical Orchestrator.
* **Usage:** Julia is used to drive OpenModelica directly. It allows for high-performance parameter sweeps (e.g., varying Inertia $H$ across 1000 runs) and advanced analysis of the differential equations, which is harder to do via the standard Dynawo C++ pipeline.