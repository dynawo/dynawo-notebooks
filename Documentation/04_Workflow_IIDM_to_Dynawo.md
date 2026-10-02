# 4. Simulation Workflow: From Static IIDM to Dynamic Results

This workflow integrates the "Route B" (PyPowSyBl) process.

## Phase 1: Network Generation (Python)
1.  **Topology Creation:** Use PyPowSyBl to build the grid structure (Substations, Voltage Levels, Buses).
2.  **The Loadflow (Critical Step):**
    * Run `pp.loadflow.run_ac(...)`.
    * **Rule:** If Loadflow diverges, dynamics cannot start.
3.  **Export:** Save the converged state as `.iidm`.

## Phase 2: Dynamic Mapping & Initialization
The Python notebooks automate the translation of IIDM static data into Dynawo dynamic models.

* **Selection Logic:** Assign Dynawo models based on component types.
* **Initialization Extraction:** The script runs Dynawo in debug mode (`--dumpInitOn`), extracting the complex internal states and generating a fully initialized `.mo` file.

## Phase 3: Simulation & Analysis
1.  **Define Events:** Create perturbations (e.g., short circuits, trips) via `dyn.EventMapping()`.
2.  **Run:** Execute `dyn.Simulation().run(...)`.
3.  **Visualize:** Use `matplotlib` or `Plots` to visualize the returned curves (Time vs Variable).