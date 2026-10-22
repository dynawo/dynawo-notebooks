# 1. Project Overview

This documentation outlines the tools developed for helping with dynamic
simulation assessment and steady-state initialization. It is designed to
facilitate the use of **Dynawo** dynamic models through Python and Julia
notebooks, bridging the gap between static network planning and complex
time-domain dynamic simulation.

## The Core Problem: Model Initialization

One central challenge in dynamic simulation is guaranteeing a valid
initialization:

- A dynamic model (e.g., a generator) is defined by differential equations dx/dt
  = f(x, y).
- To start a simulation at steady state (t=0), we must find x0 such that dx/dt =
  0\.
- A standard Loadflow provides only the "boundary" network variables y (P, Q, V,
  Theta) at t=0.
- But complex dynamic models have many other internal state variables (fluxes,
  rotor currents) that are not explicitly defined by the Loadflow.
- Inverting the complex function f(x, y) to find x0 is often numerically
  unstable.

### Dynawo's initialization strategy: "Init Models"

Dynawo addresses this by implementing **"Init Models"** (e.g., `_INIT`
companions in the library). This is how it works inside Dynawo, simplified:

- Dynawo first performs a load flow calculation, and then each model's `_INIT`
  companion receives the static values and the model's physical parameters,
  using a simplified, invertible set of algebraic equations to calculate the
  internal state vector x_init.
- Each `_INIT` model is solved independently, using the load flow values at its
  terminal.
- Its results become parameters of the dynamic model, *not additional
  equations*, allowing Dynawo to solve the whole connected system at t=0.

This of course works transparently *for Dynawo users*. However, how do you do
all this if you want to use *Dynawo models* from a pure Modelica environment?
(Remember, Dynawo's model library is all Modelica.) **The tools in this
repository address exactly this problem.** In addition, they also address the
conversion of Modelica network cases into Dynawo cases (using PowSyBl), which is
another route to solve the same problem.

## Tools and their workflows (Two Routes)

The project provides two distinct routes to achieve steady-state initialization,
depending on your preferred language and tools.

### ROUTE A: Julia & OpenModelica

Using Julia and `OMJulia`, this route performs initialization using only
OpenModelica:

- **1. Aux case:** The code automatically builds a loadflow-oriented auxiliary
  twin of the Modelica network case, stripping out events and controls, plus
  applying loadflow-equivalent replacements from `dictionaries.jl` (e.g.,
  swapping `BESSCurrentSource` for `GeneratorPVFixed`, etc.).

- **2. INIT injection:** It adds the `_INIT` companions that correspond to the
  original dynamic models in the input case.

- **3. Solve & Read:** By simulating this auxiliary model in Modelica, both the
  loadflow and the initialization equations get solved in one single shot. The
  values of each initialization variable are then extracted.

- **4. Write:** It copies the original model and writes the extracted values
  back as pinned modifiers, thus generating a fully `_initialized.mo` case.

### ROUTE B: Python, PyPowSyBl & Dynawo

Using Python, this route performs initialization by converting to
PyPowSyBl+Dynawo under the hood, and then leveraging Dynawo's own initialization
mechanism:

- **1. Case conversion from Modelica to PyPowSyBl:** The user case is first
  converted to a PyPowSyBl network having the same characteristics, as far as
  static power flow goes.
- **2. PyPowSyBl load flow:** Using also the operating condition values coming
  from the previous conversion, PyPowSyBl runs the AC load flow
  (`pp.loadflow.run_ac`).
- **3. Dynamic Model Mapping:** The software automates the enrichment of the
  PowSyBl case with Dynawo dynamic models, using the information about the
  dynamic models present in the original Modelica input case.
- **4. Simulation and init values extraction:** Finally, the case is simulated
  with Dynawo, using an option that makes Dynawo dump the results of its
  internal initialization. The code recovers all these initialization values and
  writes them back to the user's Modelica case.

This route B ended up being considerably more involved than route A, but we
wanted to explore how far we could go in exploiting PowSyBl+Dynawo for this
purpose. Note that route B currently works only with Dynawo models that are
available under Dynawo's internal folder (ddb) -- the ones that are precompiled
and ready to use from Dynawo. Note that Dynawo's model library contains many
more Modelica models in a sort of "raw" form, which need compiling (also
referred to as "pre-assembling") for Dynawo to use them.
