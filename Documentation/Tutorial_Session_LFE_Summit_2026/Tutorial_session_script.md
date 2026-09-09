# Tutorial session script

**Tools for facilitating the usage of Dynawo's library of dynamic models**

Linux Foundation Energy Summit Europe 2026  
Tuesday 15 of September, 2026  
10:30 - 12:10 CEST (100 min)


## [1] GENERAL INTRO (10 MIN)

- Explain the motivation behind the notebooks and their target audience.
- Emphasis on helping new users in working with the *models* in Dynawo's library, not on using Dynawo itself. Specifically, helping them with the problem of *initialization*.
- For those working within OpenModelica, present two notebook families:
    1) Julia notebooks using OMJulia and OM Scripting;
    2) Python notebooks using OMPython and PyPowSyBl.
- Walkthrough of the repo.


## [2] FOR OM USERS: INITIALIZATION USING ONLY OM, THROUGH JULIA  (50 MIN)

### [2.0] Installation (10 min)
- Installation of OpenModelica, Julia, packages, and repo.

### [2.1] First contact with OMJulia (5 min)
- Minimal notebook (yet to be created).
- Load Modelica, Complex, ModelicaServices, Dynawo, and a two-bus .mo file.
- Basic simulation and plotting with OMJulia.
- Change a parameter using setParameterValue, run the simulation again.
- Possible example: DoubleInertialGrid.

### [2.2] Initialization (20 min)
- Show the slide with the schematic workflow.
- Context: a dynamic model requires a coherent starting point. Explain _INIT models from the Dynawo library.
- Diagram of our solution: dynamic -> static auxiliary -> simulate -> extract -> initialized.
- BuildAux_single with MyBESS. Execute and open the generated .mo alongside the original: BESSCurrentSource changes to GeneratorPVFixed, BESS_INIT is added, events and when-blocks are removed.
- Initialization_single. Simulate the auxiliary, extract values, generate MyBESS_initialized.mo.
- Change a parameter and display a plot showing the need to re-initialize the model. Without proper initialization, there is an initial transient.
- Explain what the user must add to the dictionaries when adding a new component/model.

### [2.3] FullWorkflow and packaged models (5 min)
- Show the package notebook and explain the type of models it is aimed at.
- Execute the FullWorkflow notebook, which performs the entire initialization in a single step.
- Example: IEEE14 Notebook.

### [2.4] Parametric studies (5 min)
- Motivation: parameter sweep for a component.
- Show the initialization helper.
- Execute a sample notebook.
- Example: BESS or DoubleInertialGrid.

### [2.5] Linear stability analysis (5 min)
- Motivation for linear stability analysis and a brief theoretical explanation.
- Example: MyBESS sweeping Kpg from 1 to 10: linearize, obtain A, B, C, D, eigenvalues, classify them, and plot the root locus of the mode crossing into the right half-plane. See that some modes become unstable.
- Show the Nordic notebook with pre-calculated results, just to demonstrate that it scales.
- Limitation: linearize() requires ODE mode; it still fails with IEEE14 in --daeMode.


## [3] FOR OM USERS: INITIALIZATION USING PYPOWSYBL-DYNAWO, THROUGH PYTHON (~30 MIN)

- Who it is for: Users who work with small to medium network cases written in OpenModelica, who want to use dynamic models from Dynawo's library, and are fluent in Python. The Notebooks help them initialize their OM case, using PyPowSyBl+Dynawo "under the hood" for this purpose.
- Motivation: take advantage of Dynawo's internal mechanisms to initialize a whole simulation, hiding as much as possible Dynawo's complexity.

### [3.1] Introduction to PyPowSyBl and its integration with Dynawo (10 min)
- Motivation: Brief explanation of how one can use Dynawo from PyPowSybl, without actually using Dynawo, thus hiding the complexity of DYD/PAR files, etc.
- Show the slide with the schematic workflow.
- Steps: manually create a network in Pypowsybl, choose a scenario and run PF, then enrich the case with dynamic models (and provide their params), then run the dynamic simulation, and see the results (plot a few curves).

### [3.2] Initialization notebooks: intro to the overall workflow (10 min)
- Show the slide with the schematic workflow.
- Steps: convert the OM case to Pypowsybl (static), optionally modify the load/gen/V scenario, run PF, then "map" the dynamic models used in the input, then run the dynamic simulation, dump Dynawo's internal initialization values, and output a fully initialized OM case.

### [3.3] Initialization notebooks: an example (?? min)
- Run a notebook containing a simple example using a Dynawo model that is readily available in Dynawo's ddb.
- Conclude by mentioning that using models that are NOT in the ddb is Work-in-Progress (we are working on how to perform on-the-fly compilation of custom models, so that they can be used transparently in this workflow).


## [4] CLOSING AND Q&A (10 MIN)
