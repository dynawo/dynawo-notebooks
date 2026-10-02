# 5. Analysis of Project Files

## A. Initialization Helpers (Julia)
* **`dictionaries.jl` & `helpers.jl`:** These contain the core logic for Route A. They define `REPLACEMENTS` (how to swap dynamic models for static equivalents) and `INIT_MODELS` (which companion model to inject).
* **`package_model_initialization.jl`:** Handles the complex logic of initializing entire inheritance chains in OpenModelica packages.

## B. Physics, Stability Studies & Examples
* **`OMJulia_Dynawo_Getting_Started.ipynb` (DoubleInertialGrid):**
    * A fundamental example of a 2-grid system joined by lines. 
    * **Purpose:** Demonstrates how changing a parameter (like line length) without proper re-initialization leads to pre-fault numerical transients.
* **`StabilityAnalysis_BESS.ipynb`:**
    * Parametric sweep for a Battery Energy Storage System (Demo_BESS).
    * **Feature:** Sweeps the parameter `Kpg` from 1.0 to 10.0, linearizes the system to obtain A, B, C, D matrices, and tracks eigenvalue roots to identify when modes cross into instability (Right Half-Plane).
* **`StabilityAnalysis_Nordic.ipynb`:**
    * A large-scale stability sweep running on a packaged Demo_Nordic model (Nordic-32 test system with 20 detailed synchronous machines). Demonstrates that the initialization and linearization architecture scales to grid-level complexity.