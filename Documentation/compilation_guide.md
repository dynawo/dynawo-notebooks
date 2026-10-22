# Comprehensive Guide: Compiling and Precompiling Dynawo Models (DDB)

This document provides a detailed, step-by-step guide on how to compile and precompile Modelica models into Dynamic Database (DDB) libraries (`.so` or `.dll`) for the Dynawo simulation ecosystem.

> **Verified with** Dynawo 1.7.0 (Linux distribution built with GCC 11, `Dynawo_Linux_gcc11_v1.7.0.zip`) on Ubuntu 26.04 (GCC 15, CMake 4.2). The Linux statements and commands of this guide were checked by running them; the Windows notes were not. The PyPowSyBl toolkit of this repository implements this pipeline in [`model_compiler.py`](../src/python_pypowsybl/Code/core/model_compiler.py) (see its [README](../src/python_pypowsybl/README.md#model-compilation)), and [`compile_example`](../compile_example/) is a complete example with a user model.

---

## 1. The Automated Compilation Pipeline Logic

When building an automated compilation wrapper or script, the execution flow must follow a strict set of rules to prevent binary incompatibility and ensure all necessary metadata is generated.

A robust automated compilation handler should execute the following sequence:

1. **Launcher Resolution:** Resolve the exact absolute path to the `dynawo.sh` executable.
2. **Environment & Directory Setup:** Ensure the output directory and user model directories exist, and that the compiler environment matches the Dynawo distribution (see section 2).
3. **Version Control (Critical):** Before compiling, read a version tracking file (e.g., `dynawo.version`) inside the output directory. Compare this with the current Dynawo launcher version.
- *Conflict Resolution:* If a mismatch is detected, the pipeline must prompt the user or force-wipe the existing compiled models to prevent ABI/binary crashes. Two distributions of the same version (for instance the GCC 4.8.5 and GCC 11 builds of Dynawo 1.7.0) are not binary compatible either: record the installation path as well.
- *Important Note on Origin:* The `--generate-preassembled` command does **not** generate a `dynawo.version` file in the `--output-dir`. Therefore, your wrapper script must explicitly create or update this file after compilation by capturing the output of `./dynawo.sh version` (for instance `1.7.0 (rev:-)`).
4. **Target Parsing:** Parse the target `.xml` configuration files to extract the `id` of the `<dyn:modelicaModel>`, which dictates the output filename.
5. **Preassembly Execution:** Invoke the Dynawo launcher to generate the preassembled library.
6. **Metadata Extraction:** Automatically follow up the compilation by dumping the model description (generating a `.desc.xml` file) so that external tools can introspect the model's parameters and variables. The dump instantiates the model, so it also checks that Dynawo can load the library: a crash at this step reveals a binary incompatibility (see section 2).

*Generic Function Example for the Wrapper Logic:*
```python
def execute_safe_compilation(launcher_path, xml_file, output_dir):
    # 1. Version check and cleanup
    if not check_version_match(launcher_path, output_dir):
        clean_output_directory(output_dir)
    
    # 2. Extract model name
    model_name = extract_model_id(xml_file)
    
    # 3. Generate .so/.dll
    run_generate_preassembled(launcher_path, xml_file, output_dir)
    
    # 4. Generate .desc.xml (Metadata)
    run_dump_model(launcher_path, model_name, output_dir)
```

---

## 2. Environment Setup (ABI Compatibility)

The Modelica model is translated to C++ by the OpenModelica compiler shipped with Dynawo (`omcDynawo`), and the C++ code is compiled with the C++ compiler of the system and CMake, against the headers and libraries of the Dynawo distribution. Only the *full* distributions (with headers and on-the-fly model compilation) can compile models; the *light* ones cannot.

### Selecting the compiler and its flags: use `CXX`

The compilation script of Dynawo (`sbin/compileCppModelicaModelInDynamicLib.cmake`) overwrites `CMAKE_CXX_FLAGS` (`-std=c++11`): the **`CXXFLAGS` environment variable does not reach the compilation of the model** (it only affects the initial compiler check of CMake). Flags must be given with the compiler, in `CXX`, which reaches every compiled file:

```bash
export CXX="g++ -D_GLIBCXX_USE_CXX11_ABI=0"
```

### Matching the C++ ABI

The value assigned to `_GLIBCXX_USE_CXX11_ABI` (`0` or `1`) **must match the exact ABI used to compile the Dynawo binary itself**. Check it on Linux by counting the C++11 ABI symbols of `libdynawo_Common.so`:

```bash
nm -DC <dynawo>/lib/libdynawo_Common.so | grep -c __cxx11   # 0: pre-C++11 ABI (=0), otherwise C++11 ABI (=1)
```

* **Legacy Pre-built Distributions (Pre-C++11 ABI):** distributions built on CentOS 7 with GCC 4.8.5 use the pre-C++11 ABI (`_GLIBCXX_USE_CXX11_ABI=0`).
* **Modern Source Builds / Recent Distributions (C++11 ABI):** If Dynawo was compiled from source on a modern Linux distribution (e.g., Ubuntu 20.04+, Fedora, Debian) or uses a recent binary built with the modern C++11 ABI (`_GLIBCXX_USE_CXX11_ABI=1`), forcing `=0` will trigger the exact linker error (`undefined symbol: ... __cxx11::basic_string`) you are trying to avoid. In these environments, omit the flag or explicitly set `-D_GLIBCXX_USE_CXX11_ABI=1`.
* **Windows Environments (`.dll`):** `g++` is not used on Windows. Instead, run the compilation from the **x64 Native Tools Command Prompt for VS** (using MSVC + CMake).

### Distributions built with GCC 4: a recent compiler cannot be used

The ABI flag is not enough for a distribution built with GCC 4 (for instance the Dynawo 1.7.0 build compiled with GCC 4.8.5, see `DYNAWO_COMPILER_VERSION` in `dynawoEnv.txt`). The C++11 support of GCC 4 was experimental, and the standard C++11 containers of the Dynawo headers (such as the `std::unordered_map` members of the base class `SubModel`) do not have the same layout as with GCC >= 5: in a model compiled with GCC 15 against that distribution, the members of the model class are shifted by 32 bytes with respect to the Dynawo libraries. The model compiles and is validated by the generator, but crashes when Dynawo instantiates it (segmentation fault in `--dump-model`). No flag fixes it: use a distribution built with a recent compiler, such as `Dynawo_Linux_gcc11_v1.7.0.zip` of the [Dynawo releases](https://github.com/dynawo/dynawo/releases/tag/v1.7.0), for the compilation **and** the simulations.

### Recent Linux systems

* **Boost of the system:** the GCC 11 build of Dynawo 1.7.0 ships Boost 1.74 without its CMake configuration files and lets CMake search the system first. On a system with another Boost version (Boost 1.90 on Ubuntu 26.04), CMake picks the configuration of the system and fails (`Could not find a package configuration file provided by "boost_system"`). Declining the configuration package makes CMake search the Boost of the distribution (the compilation script sets `BOOST_ROOT` from `DYNAWO_BOOST_HOME`, which the launcher points to the installation):
  ```bash
  mkdir -p boost_shim
  echo 'set(Boost_FOUND FALSE)' > boost_shim/BoostConfig.cmake
  printf 'set(PACKAGE_VERSION "0")\nset(PACKAGE_VERSION_COMPATIBLE TRUE)\n' > boost_shim/BoostConfigVersion.cmake
  export Boost_DIR=$PWD/boost_shim
  ```
* **System libraries of the distribution:** the GCC 11 build of Dynawo 1.7.0 targets Ubuntu 22.04 and needs `libicuuc.so.70`, `libicui18n.so.70` (and `libicudata.so.70`) and `libhwloc.so.15`, which newer systems may not provide. They can be extracted from the Ubuntu packages `libicu70` and `libhwloc15` (`dpkg-deb -x`) into the `lib/` directory of the distribution, which the launcher puts in `LD_LIBRARY_PATH`. Check with `ldd` that `bin/dynawo` and `OpenModelica/bin/omcDynawo` find all their libraries.
* **Paths without whitespace:** the launcher passes its arguments on through `$*`, which splits them on whitespace. A path with a space is truncated silently (the library is written elsewhere and the command still succeeds): keep model lists, model directories and output directories in paths without whitespace.

---

## 3. Preparing the XML Architecture File

To compile a Modelica model (or an assembly of models) into a single black-box library, you must define an XML architecture file. This file instructs the compiler which Modelica models to load, how they connect, and whether they require initialization models. The models of the Dynawo model database are built from such files (`dynawo/sources/Models/Modelica/PreassembledModels/` in the Dynawo sources); the examples below are definitions of Dynawo 1.7.0, compiled successfully, whose descriptions match the ones of the model database.

### Scenario A: Compiling WITH an Initialization Model (`_INIT`)

Most advanced power system components (like generators, complex loads, or HVDC lines) require a steady-state calculation to define their initial dynamic conditions based on load-flow results. You link the dynamic model and the initialization model using the `initName` attribute.

**Example: `GeneratorPVSignalN.xml`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="http://www.rte-france.com/dynawo">
  <!-- The 'id' determines the output binary name: GeneratorPVSignalN.so -->
  <dyn:modelicaModel id="GeneratorPVSignalN">
    <!-- The unit dynamic model 'id' is the prefix of the parameters and variables: generator_PNom, ... -->
    <dyn:unitDynamicModel
        id="generator"
        name="Dynawo.Electrical.Machines.SignalN.GeneratorPV"
        initName="Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT"/>
  </dyn:modelicaModel>
</dyn:dynamicModelsArchitecture>
```

### Scenario B: Compiling WITHOUT an Initialization Model

For simpler models, pure mathematical controllers, or logic blocks that start from zero or predefined constants (without needing power-flow initialization), omit the `initName` attribute.

**Example: `Bus.xml`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="http://www.rte-france.com/dynawo">
  <dyn:modelicaModel id="Bus">
    <dyn:unitDynamicModel
        id="bus"
        name="Dynawo.Electrical.Buses.Bus"/>
  </dyn:modelicaModel>
</dyn:dynamicModelsArchitecture>
```

> **Note 1 — Compiling Custom Local `.mo` Files:**
> The Modelica files of your own models are found through the Modelica model directories given to the generator (`--non-recursive-modelica-models-dir` or `--recursive-modelica-models-dir`, see section 4): their `.mo` files (the `package.mo` of a package directory) are loaded with the Dynawo library. The `moFile` and `initFile` attributes of the `dyd.xsd` schema are **optional**: when given, the generator only checks that a file with that name exists in the model directories (and fails with `modelica file(s) ... not found` otherwise).
> ```xml
> <dyn:unitDynamicModel
>     id="load"
>     name="MyLoad"
>     moFile="MyLoad.mo"
>     initName="Dynawo.Electrical.Loads.Load_INIT"/>
> ```
> A user model can reuse the initialization model of the standard model it extends (here `Load_INIT` for a model extending `Dynawo.Electrical.Loads.LoadPQ`). Its external variables follow the rules of Scenario C.

> **Note 2 — Preassembling Multiple Models (`PAM` = PreAssembled Model):**
> While the examples above wrap a single `<dyn:unitDynamicModel>`, the core purpose of `--generate-preassembled` is to combine **multiple** `<dyn:unitDynamicModel>` blocks (e.g., Synchronous Machine + AVR + Governor + Transformer) into a single `<dyn:modelicaModel>`, connecting them internally with `<dyn:connect>` (or `<dyn:macroConnect>`) and their initialization models with `<dyn:initConnect>`. Example of the Dynawo 1.7.0 model database (`GeneratorSynchronousFourWindingsProportionalRegulations.xml`):
> ```xml
> <dyn:modelicaModel id="GeneratorSynchronousFourWindingsProportionalRegulations">
>   <dyn:unitDynamicModel id="generator" name="Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous" initName="Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT"/>
>   <dyn:unitDynamicModel id="voltageRegulator" name="Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRProportional" initName="Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRProportional_INIT"/>
>   <dyn:unitDynamicModel id="governor" name="Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverProportional" initName="Dynawo.Electrical.Controls.Machines.Governors.Governor_INIT"/>
>   <dyn:initConnect id1="voltageRegulator" var1="Efd0PuLF" id2="generator" var2="Efd0Pu"/>
>   <dyn:initConnect id1="voltageRegulator" var1="Us0Pu" id2="generator" var2="UStator0Pu"/>
>   <dyn:initConnect id1="governor" var1="Pm0Pu" id2="generator" var2="Pm0Pu"/>
>   <dyn:connect id1="voltageRegulator" var1="EfdPu" id2="generator" var2="efdPu.value"/>
>   <dyn:connect id1="voltageRegulator" var1="UsPu" id2="generator" var2="UStatorPu.value"/>
>   <dyn:connect id1="governor" var1="omegaPu" id2="generator" var2="omegaPu.value"/>
>   <dyn:connect id1="governor" var1="PmPu" id2="generator" var2="PmPu.value"/>
> </dyn:modelicaModel>
> ```
> The variable names are those of the Modelica classes of the Dynawo library version used (for instance `efdPu.value` for an `ImPin` connector of the library 1.7).

### Scenario C: Handling External Variables (`.extvar`)

If a model requires connections to the wider network at runtime (i.e., it has unresolved boundary variables), it requires an `.extvar` file. Without it, the boundary variables of the model have no equation and the compilation fails (`Too few equations, under-determined system`).

The generator looks the `.extvar` file of a unit dynamic model up **by the full name of its Modelica class**, which it derives from the location of the files in the model directories: a file `X.extvar` at the root of a model directory stands for the top-level class `X`, and a file inside a package directory (with its `package.mo`) stands for a class of that package. Therefore:

* a **top-level model** `MyLoad` defined in `MyLoad.mo` gets its variables from `MyLoad.extvar` placed next to it (with `--non-recursive-modelica-models-dir <dir>`);
* a **class of a package** (`MyPkg.MyLoad`) needs a package tree: `MyPkg/package.mo`, `MyPkg/MyLoad.mo` (`within MyPkg;`) and `MyPkg/MyLoad.extvar`, given with `--recursive-modelica-models-dir <parent of MyPkg>`;
* a class nested in a package written as **a single file** (`package MyPkg model MyLoad ... end MyLoad; end MyPkg;` in `MyPkg.mo`) cannot get its `.extvar` file: compile it through a top-level wrapper class (`model MyLoadModel extends MyPkg.MyLoad; end MyLoadModel;`, with `MyLoadModel.extvar`), as the toolkit of this repository does.

Supported variable types include `continuous`, `discrete`, and `boolean`. Additionally, you can declare variables with the `optional="true"` attribute (commonly used for secondary signals or optional continuous external variables) so that the model can be used in simulation scenarios where that external variable is left unconnected in the `.dyd` file without causing Dynawo to abort due to an unconnected variable.

**Example: `LoadPQ.extvar`** (Dynawo 1.7.0 library)
```xml
<?xml version='1.0' encoding='UTF-8'?>
<external_variables xmlns="http://www.rte-france.com/dynawo">
  <variable type="continuous" id="terminal.V.re"/>
  <variable type="continuous" id="terminal.V.im"/>
  <variable type="continuous" id="PRefPu" optional="true"/>
  <variable type="continuous" id="QRefPu" optional="true"/>
  <variable type="continuous" id="deltaP" optional="true"/>
  <variable type="continuous" id="deltaQ" optional="true"/>
  <variable type="discrete" id="switchOffSignal1.value" defaultValue="false"/>
  <variable type="discrete" id="switchOffSignal2.value" defaultValue="false"/>
</external_variables>
```

### Writing Modelica models for Dynawo

Two behaviours of the code generated by Dynawo differ from OpenModelica and can make a model that simulates in OpenModelica fail in Dynawo:

* **Boolean parameters** are stored as reals, `+1` for true and `-1` for false. An assertion on a Boolean parameter, such as `assert(not myFlag, "...")`, misreads false and stops the simulation. Check configuration switches outside the model, or avoid assertions on Boolean parameters (the Dynawo library has none).
* **Real comparisons** use a tolerance (a fraction of the simulation precision): `abs(x) < 1e-12` is never true, even for `x = 0`. Write tolerant conditions such as `abs(x) <= 1e-12`.

---

## 4. Manual / Under-the-Hood Compilation Commands

If your automated wrapper delegates to shell commands, or if you are debugging the pipeline manually, the following two steps must be executed in order. The mode option (`--generate-preassembled`, `--dump-model`) must be the first argument after `jobs`.

### Step 1: Generate the Preassembled Library

This command parses the XML architecture and builds the `.so` (Linux) or `.dll` (Windows) file. The `--non-recursive-modelica-models-dir .` flag makes the Modelica files of the current folder available to the compiler (alternatively, use `--recursive-modelica-models-dir <dir>` when your Modelica models are organized across subfolders or structured inside packages with `package.mo`, see Scenario C). For the models of the Dynawo library alone, no model directory is needed.

```bash
./dynawo.sh jobs \
  --generate-preassembled \
  --model-list GeneratorPVSignalN.xml \
  --non-recursive-modelica-models-dir . \
  --output-dir ./output_ddb
```

The compiler output is printed on the standard output and error streams: redirect them to a log file (`> compile.log 2>&1`) to keep it. On success, the command ends with `model validated: .../GeneratorPVSignalN.so` and `preassembled model generated`.

### Step 2: Dump the Model Description (Metadata)

To allow automation tools to introspect the compiled model's parameters and variables, explicitly dump the model data to an XML format (`-m` and `-o` are the short forms of the options).

```bash
./dynawo.sh jobs \
  --dump-model \
  --model-file ./output_ddb/GeneratorPVSignalN.so \
  --output-file ./output_ddb/GeneratorPVSignalN.desc.xml
```

---

## 5. Output Artifacts and Runtime Usage

A successful run of the compilation pipeline yields the following files in your output directory:

1. **`[Model_ID].so` / `[Model_ID].dll`**: The compiled binary executable.
2. **`[Model_ID].extvar`**: The aggregated external variables file (variable ids prefixed by the unit dynamic model ids, e.g. `generator.terminal.V.re`).
3. **`[Model_ID].mo`** and, with an initialization model, **`[Model_ID]_INIT.mo`**: the assembled Modelica models; **`[Model_ID]/`**: the build directory (the generated sources are removed after the build).
4. **`[Model_ID].desc.xml`**: The introspection file documenting all parameters and variables (written by Step 2).
5. **`compile.log`** and **`dynawo.version`** are **not** written by the generator: capture the output of Step 1 and the output of `./dynawo.sh version` yourself (see section 1).

Keep the `.so`, `.extvar` and `.desc.xml` files of a model next to each other, as in the official `ddb/` directory.

### Using the Compiled Model in a `.dyd` File

Once compiled, the model operates as a high-performance "Black-Box". Reference it in your Dynamic Data (`.dyd`) file by its id, **without the library extension** (`lib="GeneratorPVSignalN.so"` fails with `unable to find lib GeneratorPVSignalN.so`). Example of a load model connected to the node of its static load in the IIDM network, as written by PyPowSyBl:

**Example: `simulation_scenario.dyd`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="http://www.rte-france.com/dynawo">

  <!-- Instantiating the precompiled model, attached to the static load "loadPQ" -->
  <dyn:blackBoxModel id="loadPQ" lib="LoadPQCustom" parFile="models.par" parId="loadPQ" staticId="loadPQ"/>

  <!-- Connecting its external variables to the node of the static load in the network -->
  <dyn:macroConnector id="MC_Load-Network">
    <dyn:connect var1="load_terminal" var2="@STATIC_ID@@NODE@_ACPIN"/>
    <dyn:connect var1="load_switchOffSignal1" var2="@STATIC_ID@@NODE@_switchOff"/>
  </dyn:macroConnector>
  <dyn:macroConnect connector="MC_Load-Network" id1="loadPQ" id2="NETWORK"/>

</dyn:dynamicModelsArchitecture>
```

### Registering the Custom Output Directory at Runtime (`.jobs` File)

If you compile the model into a custom directory like `./output_ddb` and run the simulation with your `.dyd` file, Dynawo will fail to locate the binary library (`unable to find lib ...`) unless `./output_ddb` is registered in the `<dyn:precompiledModels>` section of your `.jobs` file. A relative path is resolved from the directory of the `.jobs` file:

**Example snippet in `simulation.jobs`**
```xml
<dyn:modeler compileDir="outputs/compilation">
  <dyn:network iidmFile="network.iidm" parFile="network.par" parId="1"/>
  <dyn:dynModels dydFile="simulation_scenario.dyd"/>
  <dyn:precompiledModels useStandardModels="true">
    <dyn:directory path="./output_ddb" recursive="false"/>
  </dyn:precompiledModels>
  <dyn:modelicaModels useStandardModels="true"/>
</dyn:modeler>
```

* The library names must be unique: a library of a custom directory with the same name as a model of the standard database (for instance a recompiled `LoadPQ.so`) stops the simulation with `duplicate LoadPQ.so`. Give recompiled models their own id, or use a complete model database of your own (next point).
* The standard model database is the directory given by the `DYNAWO_DDB_DIR` environment variable (by default the `ddb/` directory of the installation). Setting it **replaces** the standard database instead of adding a directory: it must then contain every model of the simulation. A copy of the standard database made of symbolic links, where recompiled models replace the standard ones of the same name, works; this is how the toolkit of this repository gives the compiled models to PyPowSyBl, which cannot add directories to the jobs files it writes.
* There is no `DYNAWO_USER_MODEL_LIBDIR` variable: Dynawo ignores it.
