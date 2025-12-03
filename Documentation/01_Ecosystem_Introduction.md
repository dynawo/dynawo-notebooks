# 1. Introduction to the Simulation Ecosystem

This documentation covers an advanced power system simulation environment used by major Transmission System Operators (TSOs) like RTE (France). This ecosystem bridges the gap between static network planning and time-domain dynamic simulation.

## The Architecture: Who does what?

### 1. Powsybl (Power System Blocks) & PyPowsybl
* **Core Concept:** An open-source Java framework for modeling electrical grids. It acts as the "architect" that defines the structure.
* **PyPowsybl:** This is the Python wrapper. It allows leveraging the heavy lifting of the Java core using simple Python scripts.
* **Key Functions in this project:**
    * **Topology Definition:** Defining buses, lines, transformers, and switches (Node-Breaker vs. Bus-Breaker models).
    * **Steady State Analysis (Loadflow):** Before any dynamic simulation, the grid must be mathematically balanced (P=U*I). Powsybl calculates the initial `U` (voltage) and `theta` (angle) for every node.
    * **IIDM (Impedance & Injection Data Model):** The standardized XML format used to exchange static grid data.

### 2. Dynawo (Dynamic World)
* **Core Concept:** A hybrid dynamic simulation engine (C++ & Modelica). While Powsybl takes a "photo" of the grid, Dynawo plays the "movie" of what happens after a disturbance.
* **How it works:** It uses a "Lagrangian" approach where the network equations are solved by a variable-step solver (IDA/SUNDIALS), while component physics are described in Modelica.
* **Key Files:**
    * `.iidm`: The static network.
    * `.dyd`: The dynamic mapping file (links a specific generator to a specific control logic).
    * `.par`: The parameters file (contains the physics constants like Inertia `H`, Gains `K`, Time Constants `T`).

### 3. Modelica & OpenModelica
* **Core Concept:** An acausal, equation-based modeling language. Unlike imperative programming (Python/C++), in Modelica you write `V = I * R`, and the solver decides how to calculate it based on what is known.
* **Role in this project:**
    * **Standard Library:** Dynawo uses compiled Modelica models for standard components (generators, loads).
    * **Custom Physics:** Custom files (like `.mo` scripts) are used for fundamental physics research (e.g., frequency dynamics) that require custom equations not found in standard libraries.

### 4. Julia & OMJulia
* **Julia:** A high-performance language designed for numerical computing. It is often faster than Python for heavy mathematical loops.
* **OMJulia:** An interface to control the OpenModelica Compiler (OMC) via Julia.
* **Usage:** Used to compile custom `.mo` files, run simulations, and perform high-speed sensitivity analysis (e.g., running the same grid 1000 times with different inertias).

### 5. Jupyter Notebooks (.ipynb)
* **The Lab Bench:** An interactive environment used to orchestrate the workflow: [Build Network] -> [Map Dynamics] -> [Simulate] -> [Plot Results].