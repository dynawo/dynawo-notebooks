# Comprehensive Guide: Compiling and Precompiling Dynawo Models (DDB)

This document provides a detailed, step-by-step guide on how to compile and precompile Modelica models into Dynamic Database (DDB) libraries (`.so` or `.dll`) for the Dynawo simulation ecosystem. 

---

## 1. The Automated Compilation Pipeline Logic

When building an automated compilation wrapper or script, the execution flow must follow a strict set of rules to prevent binary incompatibility and ensure all necessary metadata is generated.

A robust automated compilation handler should execute the following sequence:

1. **Launcher Resolution:** Resolve the exact absolute path to the `dynawo.sh` executable.
2. **Environment & Directory Setup:** Ensure the output directory and user model directories exist.
3. **Version Control (Critical):** Before compiling, read a version tracking file (e.g., `dynawo.version`) inside the output directory. Compare this with the current Dynawo launcher version.
- *Conflict Resolution:* If a mismatch is detected, the pipeline must prompt the user or force-wipe the existing compiled models to prevent ABI/binary crashes.
- *Important Note on Origin:* The `--generate-preassembled` command does **not** automatically generate a `dynawo.version` file when compiling into a custom `--output-dir` (this file only exists by default in the official `ddb/` installation directory). Therefore, your wrapper script must explicitly create or update this file after compilation by capturing the output of `./dynawo.sh version`.
4. **Target Parsing:** Parse the target `.xml` configuration files to extract the `id` of the `<dyn:modelicaModel>`, which dictates the output filename.
5. **Preassembly Execution:** Invoke the Dynawo launcher to generate the preassembled library.
6. **Metadata Extraction:** Automatically follow up the compilation by dumping the model description (generating a `.desc.xml` file) so that external tools can introspect the model's parameters and variables.

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

Before initiating compilation via bash scripts, ensure your compiler environment is correctly configured to match Dynawo's Application Binary Interface (ABI). The value assigned to `_GLIBCXX_USE_CXX11_ABI` (`0` or `1`) **must match the exact ABI used to compile the Dynawo binary itself** (which you can verify on Linux by inspecting `libdynawo_Common.so` using `nm -D` or `readelf`):

* **Legacy Pre-built Distributions (Pre-C++11 ABI):** Exporting `-D_GLIBCXX_USE_CXX11_ABI=0` was required in older pre-compiled Dynawo distributions (built on CentOS 7 or linked against legacy GCC pre-C++11 ABI libraries):
  ```bash
  export CXX="g++ -D_GLIBCXX_USE_CXX11_ABI=0"
  export CXXFLAGS="-D_GLIBCXX_USE_CXX11_ABI=0"
  ```
* **Modern Source Builds / Recent Distributions (C++11 ABI):** If Dynawo was compiled from source on a modern Linux distribution (e.g., Ubuntu 20.04+, Fedora, Debian) or uses a recent binary built with the modern C++11 ABI (`_GLIBCXX_USE_CXX11_ABI=1`), forcing `=0` will trigger the exact linker error (`undefined symbol: ... __cxx11::basic_string`) you are trying to avoid. In these environments, omit the flag or explicitly set `-D_GLIBCXX_USE_CXX11_ABI=1`.
* **Windows Environments (`.dll`):** `g++` is not used on Windows. Instead, run the compilation from the **x64 Native Tools Command Prompt for VS** (using MSVC + CMake).

---

## 3. Preparing the XML Architecture File

To compile a Modelica model (or an assembly of models) into a single black-box library, you must define an XML architecture file. This file instructs the compiler which Modelica models to load, how they connect, and whether they require initialization models.

### Scenario A: Compiling WITH an Initialization Model (`_INIT`)

Most advanced power system components (like generators, complex loads, or HVDC lines) require a steady-state calculation to define their initial dynamic conditions based on load-flow results. You link the dynamic model and the initialization model using the `initName` attribute.

**Example: `GeneratorTESTPVPAM.xml`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="[http://www.rte-france.com/dynawo](http://www.rte-france.com/dynawo)">
  <!-- The 'id' determines the output binary name: GeneratorTESTPV_Macro.so -->
  <dyn:modelicaModel id="GeneratorTESTPV_Macro">
    <dyn:unitDynamicModel 
        id="GEN" 
        name="Dynawo.Electrical.Machines.OmegaRef.GeneratorTESTPV" 
        initName="Dynawo.Electrical.Machines.OmegaRef.GeneratorTESTPV_INIT"/>
  </dyn:modelicaModel>
</dyn:dynamicModelsArchitecture>
```

### Scenario B: Compiling WITHOUT an Initialization Model

For simpler models, pure mathematical controllers, or logic blocks that start from zero or predefined constants (without needing power-flow initialization), omit the `initName` attribute.

**Example: `SimpleControllerPAM.xml`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="[http://www.rte-france.com/dynawo](http://www.rte-france.com/dynawo)">
  <dyn:modelicaModel id="SimpleController_Macro">
    <dyn:unitDynamicModel 
        id="CTRL" 
        name="Dynawo.Controls.SimpleController"/>
  </dyn:modelicaModel>
</dyn:dynamicModelsArchitecture>
```

> **Note 1 — Compiling Custom Local `.mo` Files (`moFile` and `initFile`):**
> In Scenarios A and B above, `name="Dynawo.Electrical..."` works without additional file attributes because the `Dynawo` package is already loaded in the standard DDB. However, when compiling your own local `.mo` file (outside the `Dynawo/package.mo` tree), the `dyd.xsd` schema requires specifying the source files explicitly via `moFile` (and `initFile` if an initialization model is used):
> ```xml
> <dyn:unitDynamicModel 
>     id="GEN" 
>     name="MyCustomGenerator" 
>     moFile="MyCustomGenerator.mo"
>     initName="MyCustomGenerator_INIT"
>     initFile="MyCustomGenerator_INIT.mo"/>
> ```

> **Note 2 — Preassembling Multiple Models (`PAM` = PreAssembled Model):**
> While the examples above wrap a single `<dyn:unitDynamicModel>`, the core purpose of `--generate-preassembled` is to combine **multiple** `<dyn:unitDynamicModel>` blocks (e.g., Synchronous Machine + AVR + Governor + Transformer) into a single `<dyn:modelicaModel>`, connecting them internally with `<dyn:connect>` (or `<dyn:macroConnect>`) and `<dyn:initConnect>`:
> ```xml
> <dyn:modelicaModel id="GeneratorWithAVR_Macro">
>   <dyn:unitDynamicModel id="GEN" name="Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous" initName="Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous_INIT"/>
>   <dyn:unitDynamicModel id="AVR" name="Dynawo.Electrical.Controls.Machines.VoltageRegulators.Standard.VRProportional" initName="Dynawo.Electrical.Controls.Machines.VoltageRegulators.Standard.VRProportional_INIT"/>
>   <dyn:initConnect id1="GEN" var1="efd0Pu" id2="AVR" var2="Efd0Pu"/>
>   <dyn:initConnect id1="GEN" var1="uStator0Pu" id2="AVR" var2="Us0Pu"/>
>   <dyn:connect id1="GEN" var1="efdPu.value" id2="AVR" var2="EfdPu"/>
>   <dyn:connect id1="GEN" var1="uStatorPu.value" id2="AVR" var2="UsPu"/>
> </dyn:modelicaModel>
> ```

### Scenario C: Handling External Variables (`.extvar`)

If a model requires connections to the wider network at runtime (i.e., it has unresolved boundary variables), it requires an `.extvar` file. Place this file next to your `.mo` file with the exact same base name. The compiler automatically processes it.

Supported variable types include `continuous`, `discrete`, and `boolean`. Additionally, you can declare variables with the `optional="true"` attribute (commonly used for secondary signals or optional continuous external variables) so that the model can be used in simulation scenarios where that external variable is left unconnected in the `.dyd` file without causing Dynawo to abort due to an unconnected variable.

**Example: `GeneratorTESTPV.extvar`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<external_variables xmlns="[http://www.rte-france.com/dynawo](http://www.rte-france.com/dynawo)">
  <variable type="continuous" id="terminal.V.re"/>
  <variable type="continuous" id="terminal.V.im"/>
  <variable type="continuous" id="omegaRefPu.value" optional="true"/>
  <variable type="discrete" id="switchOffSignal1.value" defaultValue="false"/>
</external_variables>
```

---

## 4. Manual / Under-the-Hood Compilation Commands

If your automated wrapper delegates to shell commands, or if you are debugging the pipeline manually, the following two steps must be executed in order.

### Step 1: Generate the Preassembled Library

This command parses the XML architecture and builds the `.so` (Linux) or `.dll` (Windows) file. The `--non-recursive-modelica-models-dir .` flag ensures local dependencies in the current folder are resolved (alternatively, use `--recursive-modelica-models-dir <dir>` when your Modelica models are organized across subfolders or structured inside packages with `package.mo`).

```bash
./dynawo.sh jobs \
  --generate-preassembled \
  --model-list GeneratorTESTPVPAM.xml \
  --non-recursive-modelica-models-dir . \
  --output-dir ./output_ddb
```

### Step 2: Dump the Model Description (Metadata)

To allow automation tools to introspect the compiled model's parameters and variables, explicitly dump the model data to an XML format.

```bash
./dynawo.sh jobs \
  --dump-model \
  --model-file ./output_ddb/GeneratorTESTPV_Macro.so \
  --output-file ./output_ddb/GeneratorTESTPV_Macro.desc.xml
```

---

## 5. Output Artifacts and Runtime Usage

A successful run of the compilation pipeline yields the following files in your output directory:

1. **`compile.log`**: Standard output and error traces from the OpenModelica/Dynawo compiler.
2. **`[Model_ID].so` / `[Model_ID].dll`**: The compiled binary executable.
3. **`[Model_ID].extvar`**: (Optional) The aggregated external variables file.
4. **`[Model_ID].desc.xml`**: The introspection file documenting all parameters and variables.
5. **`dynawo.version`**: A text file locking the compiler version to prevent future ABI conflicts (note that `--generate-preassembled` does not generate this file automatically in a custom `--output-dir`; it exists in the official `ddb/` directory or must be explicitly written by your wrapper script using the output of `./dynawo.sh version`).

### Using the Compiled Model in a `.dyd` File

Once compiled, the model operates as a high-performance "Black-Box". Reference it in your Dynamic Data (`.dyd`) file like this:

**Example: `simulation_scenario.dyd`**
```xml
<?xml version='1.0' encoding='UTF-8'?>
<dyn:dynamicModelsArchitecture xmlns:dyn="[http://www.rte-france.com/dynawo](http://www.rte-france.com/dynawo)">
  
  <!-- Instantiating the precompiled model -->
  <dyn:blackBoxModel 
      id="Generator_Node_1" 
      lib="GeneratorTESTPV_Macro.so" 
      parFile="scenario_parameters.par" 
      parId="1"/>
      
  <!-- Connecting external variables to the AC network -->
  <dyn:connect 
      id1="Generator_Node_1" var1="GEN_terminal" 
      id2="NETWORK" var2="_BUS___1_TN_ACPIN"/>
      
</dyn:dynamicModelsArchitecture>
```

### Registering the Custom Output Directory at Runtime (`.jobs` File)

If you compile the model into a custom directory like `./output_ddb` and run the simulation with your `.dyd` file, Dynawo will fail to locate the binary library unless `./output_ddb` is registered in the `<dyn:modeler>` section of your `.jobs` file (or exposed via the `DYNAWO_USER_MODEL_LIBDIR` environment variable):

**Example snippet in `simulation.jobs`**
```xml
<dyn:modeler compileDir="outputs/compilation">
  <dyn:network iidmFile="network.iidm" parFile="network.par" parId="1"/>
  <dyn:dynModels dydFile="simulation_scenario.dyd"/>
  <dyn:preCompiledModelsDir useStandardModels="true">
    <dyn:directory path="./output_ddb" recursive="false"/>
  </dyn:preCompiledModelsDir>
  <dyn:modelicaModels useStandardModels="true"/>
</dyn:modeler>
```