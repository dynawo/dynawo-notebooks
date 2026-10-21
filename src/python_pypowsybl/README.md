# Initialization using PyPowSyBl-Dynawo

The notebooks in [`Notebooks/`](Notebooks/) take an OpenModelica case built with the
Dynawo Modelica library and return the same case initialized. They rely on the library
in [`Code/core/`](Code/core/), which runs the same pipeline for every case:

1. **Parsing** (`parser.py`, `flat_model.py`): the case is flattened by OpenModelica and
   the value of every parameter is evaluated. A case that is not initialized yet cannot
   be flattened as is, because some of its initial parameters have no value: it is then
   flattened through a probe that gives them a placeholder, and they are listed as the
   initial parameters the initialization must provide.
2. **Static network** (`converter.py`, `powerflow.py`): the components are converted to a
   PyPowSyBl network with the per-unit conventions of the Dynawo models, and the load
   flow is solved with OpenLoadFlow. What the Modelica model specifies is the load flow
   input: a source without active power set point, or an infinite bus, is the slack, and
   the generators regulated through SignalN share the balance with their participation.
3. **Cross-validation** (`comparison.py`): the load flow is compared with an OpenModelica
   simulation of the reference of the case at t = 0, which is either an initialized
   version provided next to it (`<Model>_initialized.mo`) or the model itself.
4. **Dynamic models** (`model_linker.py`, `parameter_generator.py`): every component is
   mapped to the model of the Dynawo model database given by the registry, and the
   Dynawo parameter files are written to the export directory of the case.
5. **Simulation** (`simulation.py`, `cli_runner.py`): the simulation runs through
   PyPowSyBl and is replayed with the Dynawo command line, which dumps the initial
   values computed by Dynawo.
6. **Initialization** (`init_generator.py`): the initial values are written into a copy
   of the root model, `<Model>_initialized.mo`, which is finally simulated in
   OpenModelica and compared with the load flow.

## Supported models

[`Code/core/dynamic_models.json`](Code/core/dynamic_models.json) lists the Modelica
classes the pipeline supports, how each one enters the load flow and which model of the
Dynawo model database represents it. Supporting a new model of the database usually
amounts to adding an entry there.

| Modelica class | Dynawo model |
|---|---|
| `Buses.Bus`, `Buses.InfiniteBus`, `Buses.InfiniteBusWithVariations` | `Bus`, `InfiniteBus`, `InfiniteBusWithVariations` |
| `Lines.Line`, `Transformers.TransformerFixedRatio` | `Line`, `TransformerFixedRatio` |
| `Sources.InertialGrid.InertialGrid` | `InertialGrid` |
| `Machines.SignalN.GeneratorPV`, `Machines.Simplified.GeneratorPVFixed` | `GeneratorPVSignalN`, `GeneratorPVFixed` |
| `BESS.WECC.BESSCurrentSource`, `BESS.WECC.BESScbCurrentSource` | `BESScbWeccCurrentSource` |
| `Loads.LoadPQ`, `Loads.LoadZIP`, `Loads.LoadAlphaBetaRestorative` | `LoadPQ`, `LoadZIP`, `LoadAlphaBetaRestorative` |
| `Shunts.ShuntB` | `ShuntB` |

When a case contains an infinite bus, PyPowSyBl maps it on a bus and forbids the default
Dynawo network model: the case is then simulated as a fully dynamic network, where the
buses, lines and transformers also get their own dynamic model.

## Dynawo versions

The pipeline runs with the Dynawo 1.7 simulator and the Modelica library of its model
database. Some example cases are written against class paths and connectors of the
Dynawo library 1.8; [`compatibility.py`](Code/core/compatibility.py) bridges them without
modifying the files on disk:

- class shims ([`Code/core/modelica_compat/`](Code/core/modelica_compat/)) provide the
  missing classes on top of equivalent 1.7 models, such as the 1.8 `BESSCurrentSource`
  interface on top of the 1.7 `BESScbCurrentSource`;
- source adapters rewrite in memory the statements whose syntax changed, such as the
  access to the output of a `SetPoint` block.

PyPowSyBl 1.16 writes some Dynawo input files for Dynawo 1.8, and the PyPowSyBl run then
fails with Dynawo 1.7 for some cases: the frequency reference of a WECC model next to an
infinite bus is connected with a 1.8 variable name, and the final state of the shunts
cannot be exported. The command line replay checks every connected variable against the
model database and fixes its name, and disables the export of the final state, which is
not used. Its results are therefore the reference results of the simulation.

One limitation remains with Dynawo 1.7: in a fully dynamic network, the disconnection
event of a line has no effect, because the state of the 1.7 `Line` model is not an input.
The notebooks of such cases use other events (load variations).
