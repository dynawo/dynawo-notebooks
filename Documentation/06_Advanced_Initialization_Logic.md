# 6. Advanced Initialization Logic (Init Models)



This section addresses the "Init Model" logic highlighted in Dynawo PR #3899 and discussed in the project meetings. It solves the "Black Box" initialization problem.

## The Challenge
A dynamic model (e.g., a generator) is defined by differential equations $\dot{x} = f(x, y)$.
* To start a simulation at steady state ($t=0$), we must find $x_0$ such that $\dot{x} = 0$.
* However, we only know the boundary variables $y$ (Voltage, Active Power) from the Loadflow.
* Inverting the complex function $f(x, y)$ to find $x_0$ is often numerically unstable or impossible for the standard solver.

## The Solution: The "Init Model"
As detailed in the PR #3899 documentation update, Dynawo uses a dedicated auxiliary model for initialization.

### How it works:
1.  **Input:** The Init Model receives the static values ($P, Q, U, \theta$) and physical parameters ($H, K$, etc.).
2.  **Simplified Physics:** It contains a simplified, invertible set of algebraic equations derived from the differential equations.
    * *Example:* Instead of simulating the full turbine dynamics, it assumes Mechanical Power = Electrical Power and directly calculates the required valve opening.
3.  **Output:** It calculates the precise internal state vector $x_{init}$ (e.g., rotor angle, flux linkages).
4.  **Handshake:** This $x_{init}$ vector is passed to the main Dynamic Model to seed the integrators.

### Practical Implications for Your Scripts
When you run `recollement.py`, you are implicitly setting up this handshake.

**Troubleshooting Initialization Failures:**
If you encounter "Initialization Failed" errors:
1.  **Check the Loadflow:** Ensure `run_ac` converged. The Init Model cannot work with garbage input data.
2.  **Check Limits:** Verify that static values ($P$) are within the dynamic limits ($P_{max}$) defined in the `.par` file. The Init Model will fail if you try to initialize a generator above its maximum capacity.
3.  **Modelica (`.mo`):** For your custom models like `TripleInertialGrid`, you must manually define this logic in an `initial equation` section:
    ```modelica
    initial equation
      der(w) = 0; // Force steady state
      // Explicitly calculate internal states from parameters
    ```