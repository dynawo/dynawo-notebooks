# 5. Analysis of Project Files

## A. Infrastructure & Topology
* **`SMIB_nodeBreaker.py` & `SMIB2.py`:**
    * These generate the "Single Machine Infinite Bus" test case.
    * **Key difference:** `SMIB_nodeBreaker` models the detailed substation topology (switches, busbars), allowing for complex fault scenarios inside the substation, whereas `SMIB2` uses a simplified bus-branch model.
* **`fiche.py` series:**
    * Incremental complexity tests. `fiche3.py` introduces parallel lines and complex disconnections, testing the robustness of the Loadflow solver.

## B. Control Logic & Automation
* **`recollement.py`:** The core mapping script. It automates the translation of IIDM static data into Dynawo dynamic models, implementing the logic defined in the CPES24 paper. It handles specific fixes, like correcting the `voltageRegulatorOn` flag.
* **`gridforming.py`:** Addresses the integration of renewables. It detects generators labeled "GFM", "EOL", or "PV" and assigns them power electronics models (`GridFormingConverter...`), essential for low-inertia studies.

## C. Physics & Stability Studies
* **`TripleInertialGrid` (.mo & .ipynb):**
    * A custom Modelica model of a 3-node system.
    * **Purpose:** To study fundamental frequency dynamics and ROCOF (Rate of Change of Frequency) in a clean environment, decoupled from the noise of a large grid. This is likely run via Julia.
* **`Nordic32.ipynb`:**
    * A long-term voltage stability study.
    * **Feature:** Implements a `TapChangerBlocking` (TCB) automaton. This demonstrates how to model emergency control logic that freezes transformer taps to prevent voltage collapse.