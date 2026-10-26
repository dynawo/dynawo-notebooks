# 5. About Dynawo's initialization strategy ("INIT" companion models)

This section explains briefly the strategy that Dynawo follows for model
initialization, and how this is reflected in the design of its Modelica Model
Library.

## The Challenge

A dynamic model (e.g., a generator) is defined by differential equations
$\\dot{x} = f(x, y)$.

- To start a network simulation such that all complex dynamic models are at
  steady state at $t=0$, we must find the values of all internal variables $x_0$
  such that $\\dot{x} = 0$.
- However, we only know the "boundary" variables $y$ (voltages, angles, flows)
  at all the devices' terminals, which can be obtained from a loadflow
  calculation.
- Inverting the complex function $f(x, y)$ to find the internal state $x_0$ for
  each device is often numerically unstable or impossible for the standard
  solver.

## Dynawo's strategy: The "INIT Model" Companion

Dynawo uses dedicated auxiliary models (e.g., `GeneratorSynchronousExt3W_INIT`)
for initialization, one for each dynamic model in the library. But this is
designed in such a way that the initialization equations are only used at $t=0$
and do not "pollute" the dynamic equations for the rest of the Modelica
simulation.

### How it works:

1. **Input:** The INIT Model receives the static values ($P, Q, U, \\theta$) at
   the terminals, and all the necessary internal physical parameters.

2. **Simplified Physics:** The INIT Model is a special Modelica model that
   contains a simplified, invertible set of algebraic equations derived from the
   differential equations of the corresponding dynamic model.

3. **Local INIT solving:** OpenModelica solves these equations, thus calculating
   the precise internal state vector $x\_{init}$ (e.g., rotor angle, flux
   linkages) at a steady state consistent with the external values at the device
   terminals.

4. **Write back (global initialization):** This $x\_{init}$ vector is written
   back into the main Dynamic Model as parameter modifiers (e.g.,
   `s0Pu = Complex(..., ...)`), for the global simulation.

### Practical Implementation in the Notebooks

When you run the Julia or Python OpenModelica initialization notebooks, the code
automates this entire
process for network cases that are wholly built in pure Modelica (using models
from Dynawo's library). OpenModelica does not know anything about Dynawo's
initialization strategy or INIT models, so the notebooks perform all this work
in a fashion quite similar to Dynawo.

1. It creates an `_auxiliary.mo` file
2. It strips out dynamic events (`when` blocks, controls).
3. It injects the specific `_INIT` companion model.
4. It simulates this static network, which solves two things in one shot: the
   network loadflow, and the INIT equations.
5. It extracts the results, and writes out an `_initialized.mo`.

**Troubleshooting Initialization Failures:** If you encounter "Initialization
Failed" errors:

1. **Check the Loadflow:** The Init Model cannot work with garbage input data.
   If the static network loadflow didn't converge, initialization will fail.

2. **Check Limits:** Verify that static values (e.g., $P$) are within the limits
   defined in the dynamic model. Some INIT models will fail if you try to
   initialize a generator above its maximum physical capacity.
