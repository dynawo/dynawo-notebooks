# 1. Project Overview: Hybrid Dynamic Simulation Environment

This documentation outlines the simulation environment developed for helping with dynamic simulation assessment and steady-state initialization. It is designed to facilitate the use of **Dynawo** dynamic models through Python and Julia notebooks, bridging the gap between static network planning and complex time-domain dynamic simulation.

## The Core Problem: Initialization & Stability
The central challenge is not just running a simulation, but **guaranteeing a valid initialization**.
* A standard Loadflow provides the network state ($P$, $Q$, $V$, $\theta$) at $t=0$.
* However, complex dynamic models (e.g., a 4-winding synchronous generator) have internal state variables (fluxes, rotor currents) that are not explicitly defined by the Loadflow.
* **Solution:** The implementation of **"Init Models"** (e.g., `_INIT` companions in the Dynawo library), which deduce these internal states from the boundary conditions.

## Architecture Components (The Two Routes)

### ROUTE A: Julia & OpenModelica
* **Role:** Mathematical Orchestrator and Physical Modeling.
* **Function:** Julia drives OpenModelica directly via `OMJulia`. It automates the creation of a "static twin" of the dynamic model to solve the `_INIT` companions, extracts the initialization values, and injects them back into the dynamic model. It is also used for high-performance parameter sweeps and linear stability analysis.

### ROUTE B: Python, PyPowSyBl & Dynawo
* **Role:** Network Architect & Time-Domain Simulation Engine.
* **Function:** PyPowSyBl parses raw static data, creates the network topology, and solves the steady-state Loadflow. It then maps the dynamic models and hands the case to the Dynawo C++ engine. Dynawo calculates the initialization internally and dumps the valid initial states, producing a fully initialized OpenModelica case without the user ever writing a DYD/PAR file manually.
