# Initialization using PyPowSyBl-Dynawo

The notebooks in [`Notebooks/`](Notebooks/) take an OpenModelica case built with the
Dynawo Modelica library and return the same case initialized. Each case has two versions:
`PyPowSyBl_approach_<case>.ipynb` simulates with the models precompiled in the Dynawo model
database, and `PyPowSyBl_approach_<case>_compilation.ipynb` adds the optional compilation of
the Dynawo models of the case (step 8, see [Model compilation](#model-compilation)). Both
write to the same export directory, `grid_export_<case>`. They rely on the library in
[`Code/core/`](Code/core/), which runs the same pipeline for every case:

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
4. **Model compilation** (`model_compiler.py`, optional): the Dynawo models of the case
   are compiled with the model generator of the Dynawo distribution, instead of using the
   models precompiled in its model database (see [Model compilation](#model-compilation)).
5. **Dynamic models** (`model_linker.py`, `parameter_generator.py`): every component is
   mapped to the model of the Dynawo model database given by the registry (or to the
   model compiled for it), and the Dynawo parameter files are written to the export
   directory of the case.
6. **Simulation** (`simulation.py`, `cli_runner.py`): the simulation runs through
   PyPowSyBl and is replayed with the Dynawo command line, which dumps the initial
   values computed by Dynawo.
7. **Initialization** (`init_generator.py`): the initial values are written into a copy
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

A user class, defined in the files of a case outside the Dynawo library, is supported
when it extends one of these classes: it enters the load flow and the dynamic linking as
the class it extends. Its own equations are only simulated by Dynawo when the models of
the case are compiled (mode `"case"` below); otherwise the linking warns that it is
simulated with the model of its base class.

## Model compilation

By default, the dynamic simulation uses the models precompiled in the model database
(`ddb`) of the Dynawo installation. With `MODEL_COMPILATION` (step 8 of the `_compilation`
notebooks) or `DynawoModelCompiler.compile_case`, the Dynawo models of the case are compiled
before the dynamic linking:

- `"library"`: every Dynawo model used by the case is compiled from its standard definition
  in the Dynawo Modelica library (the Modelica class and initialization model given by the
  registry, as in the model database);
- `"case"`: every model is compiled from the Modelica class the case actually uses. A class
  that is the standard one keeps the name of its Dynawo model; any other class (a user class,
  or a class of the compatibility layer) is compiled into a model of its own, named after
  its qualified name, and registered in PyPowSyBl as an additional model of the same
  category. Its external variables are read from a `<Class>.extvar` file next to its
  Modelica file, or else from the standard model it extends.

The compilation follows the [compilation guide](../../Documentation/compilation_guide.md)
and writes everything to `<export directory>/compiled_models/`: the architecture files
(`model_lists/`), the libraries with their external variables and descriptions
(`<model>.so`, `.extvar`, `.desc.xml`), one log per model (`logs/`), the Dynawo version
(`dynawo.version`, the models of another version or installation are removed) and a
manifest, so that up-to-date models are reused by the next runs. The models are compiled
in parallel.

The compiled models are gathered in a model database of the case (`model_database/`):
symbolic links to the model database of the installation, where the compiled models
replace the standard ones of the same name. Both the PyPowSyBl run and the command line
replay read it through `DYNAWO_DDB_DIR`: PyPowSyBl cannot add model directories to the
jobs file, and Dynawo refuses two libraries with the same name. The compiled models must
therefore be simulated by the installation that compiled them, which the simulation checks.

Requirements:

- A full Dynawo distribution, with headers and on-the-fly model compilation (OpenModelica
  `omcDynawo`, `generate-preassembled`, `dumpModel`), CMake and a C++ compiler.
- A distribution built with a compiler compatible with the C++ compiler of the system
  (`DYNAWO_COMPILER_VERSION` in its `dynawoEnv.txt`). A distribution built with GCC 4 (such
  as the Dynawo 1.7 build with GCC 4.8.5) cannot be used with GCC >= 5: the experimental
  C++11 support of GCC 4 gives the standard containers another layout, the models it would
  compile crash when Dynawo loads them, and the compiler refuses this combination. The
  `Dynawo_Linux_gcc11_v1.7.0.zip` distribution of the
  [Dynawo releases](https://github.com/dynawo/dynawo/releases/tag/v1.7.0) works with recent
  compilers; it is built for Ubuntu 22.04, and newer systems must provide its ICU 70 and
  hwloc 15 libraries (for instance extracted from the Ubuntu packages `libicu70` and
  `libhwloc15` into its `lib/` directory). It must then be the `homeDir` of the PyPowSyBl
  configuration as well.

The toolchain (`DynawoToolchain`) adapts the compilation to recent Linux systems without
modifying the distribution: the compiler runs without the libraries of the distribution
(which replace system libraries needed by the assembler), with the C++ ABI of the Dynawo
libraries, with the `PTHREAD_STACK_MIN` constant that glibc >= 2.34 no longer provides to
old Boost headers, and with the Boost libraries of the distribution rather than those of
the system.

The [`compile_example`](../../compile_example/) directory at the root of the repository
contains a simple case with a user model to compile.

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
