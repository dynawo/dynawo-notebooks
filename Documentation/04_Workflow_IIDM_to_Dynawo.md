# 4. Simulation Workflow: From Static IIDM to Dynamic Results

This workflow integrates the best practices discussed in the project meetings, specifically the "Recollement" process.

## Phase 1: Network Generation (Python)
**Scripts:** `SMIB_nodeBreaker.py`, `fiche.py`

1.  **Topology Creation:** Use `pn.create_empty()` and helper functions to build the grid structure (Substations, Voltage Levels, Buses).
2.  **Physical Parameters:** Calculate impedances ($R, X$) in per-unit ($pu$) values.
3.  **The Loadflow (Critical Step):**
    * Run `pp.loadflow.run_ac(...)`.
    * **Rule:** If Loadflow diverges, dynamics cannot start.
    * *Kickoff Tip:* Use a temporary "Infinite Bus" (slack generator) to force initial convergence, then disconnect it or fix its setpoints for the dynamic run.
4.  **Export:** Save the converged state as `.iidm`.

## Phase 2: Dynamic Mapping ("Recollement")
**Script:** `recollement.py`

The IIDM file contains static data ($P$, $U$). This step maps that data to dynamic physics models, as described in the CPES24 paper.

* **Selection Logic:** Iterate through generators and assign models based on `energy_source`:
    * `NUCLEAR/THERMAL` -> `GeneratorSynchronousFourWindings...`
    * `HYDRO` -> `GeneratorSynchronousThreeWindings...`
* **Parameterization:** Read static values (like `rated_S`) and calculate dynamic parameters (Inertia $H$, Governor Droop).
* **Output:** Generates the `.dyd` (mapping) and `.par` (parameters) XML files.

## Phase 3: Simulation & Analysis
**Notebooks:** `SMIB.ipynb`, `Nordic32.ipynb`

1.  **Define Events:** Create perturbations (e.g., `add_node_fault` for short circuits, `add_disconnection` for trips).
2.  **Configure Outputs:** Use `OutputVariableMapping` to select specific variables (e.g., `generator_PGen`) to avoid massive log files.
3.  **Run:** Execute `dyn.Simulation().run(...)`.
4.  **Visualize:** Use `matplotlib` to plot the returned curves (Time vs Variable).