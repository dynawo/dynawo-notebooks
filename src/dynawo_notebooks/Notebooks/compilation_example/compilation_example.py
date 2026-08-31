import os
import subprocess
from pathlib import Path
from typing import Optional
from lxml import etree

# =============================================================================
# LAYER 3: Compilation Engine (Adapted from dynawo_precompile.py)
# =============================================================================

def _compile_model_name(models_path: Path, model_name: str) -> Optional[str]:
    """
    Extracts the compiled model name (Modelica model ID) from a Dynawo model XML file[cite: 3].
    """
    try:
        model_tree = etree.parse(str(models_path / model_name), etree.XMLParser(remove_blank_text=True))
        model_root = model_tree.getroot()
        dyn_namespace = etree.QName(model_root).namespace
        # Find the modelicaModel tag to extract its ID[cite: 3]
        modelica_model = model_root.find(f"{{{dyn_namespace}}}modelicaModel")
        return modelica_model.get("id") if modelica_model is not None else None
    except Exception as e:
        print(f"[ERROR] Failed to parse XML {model_name}: {e}")
        return None

def _precompile_model(launcher_dwo: Path, models_path: Path, model_name: str, output_path: Path) -> None:
    """
    Precompiles a Dynawo model using the Dynawo launcher[cite: 3].
    """
    compiled_model = _compile_model_name(models_path, model_name)
    extension = ".dll" if os.name == "nt" else ".so"

    if not compiled_model:
        print(f"[WARNING] No valid model ID found in {model_name}. Skipping compilation.")
        return

    # Check if it is already compiled[cite: 3]
    if (output_path / (compiled_model + extension)).is_file():
        print(f"[INFO] {compiled_model} was already compiled. Skipping precompilation.")
        return

    print(f"[INFO] Precompiling {model_name}...")
    output_path.mkdir(parents=True, exist_ok=True)

    # 1. Main command to generate the preassembled model[cite: 3]
    cmd = [
        str(launcher_dwo),
        "jobs",
        "--generate-preassembled",
        "--model-list", model_name,
        "--non-recursive-modelica-models-dir", ".",
        "--output-dir", str(output_path),
    ]
    
    print(f"[COMMAND] {' '.join(cmd)}")
    subprocess.run(cmd, cwd=models_path, check=False)

    # 2. Additional step for Linux: dump the model description[cite: 3]
    if os.name != "nt" and (output_path / (compiled_model + extension)).is_file():
        dump_cmd = [
            str(launcher_dwo),
            "jobs",
            "--dump-model",
            "--model-file", compiled_model + extension,
            "--output-file", compiled_model + ".desc.xml",
        ]
        print(f"[COMMAND DUMP] {' '.join(dump_cmd)}")
        subprocess.run(dump_cmd, cwd=output_path, check=False)

    # Final validation[cite: 3]
    if (output_path / (compiled_model + extension)).is_file():
        print(f"[SUCCESS] Compilation of {compiled_model} succeeded.\n")
    else:
        print(f"[ERROR] Compilation of {compiled_model} failed.\n")

def precompile_models(launcher_dwo: Path, models_path: Path, user_dir: Path, model_name: Optional[str], output_path: Path) -> None:
    """
    Decides which models to compile (all or a specific one)[cite: 3].
    """
    output_path.mkdir(parents=True, exist_ok=True)

    models_to_compile = []
    if model_name is None:
        models_to_compile += [(models_path, p.name) for p in models_path.glob("*.[xX][mM][lL]")]
        models_to_compile += [(user_dir, p.name) for p in user_dir.glob("*.[xX][mM][lL]")]
    else:
        if (models_path / model_name).is_file():
            models_to_compile.append((models_path, model_name))
        if (user_dir / model_name).is_file():
            models_to_compile.append((user_dir, model_name))

    extension = ".dll" if os.name == "nt" else ".so"

    for current_models_path, current_model_name in models_to_compile:
        compiled_model = _compile_model_name(current_models_path, current_model_name)
        
        # Remove existing binary if a specific model was requested (forcing recompile)[cite: 3]
        if compiled_model and (output_path / (compiled_model + extension)).is_file():
            if model_name:
                print(f"[INFO] Removing existing compiled model: {compiled_model}{extension}")
                (output_path / (compiled_model + extension)).unlink()

        _precompile_model(launcher_dwo, current_models_path, current_model_name, output_path)

# =============================================================================
# LAYER 2: Preparation Layer (Adapted from prepare_tool.py)
# =============================================================================

def precompile(launcher_dwo: Path, model: Optional[str] = None, force: bool = False) -> bool:
    """
    Sets up the directory structure and initiates model precompilation[cite: 4].
    """
    print("[INFO] Starting environment preparation...")
    
    # Define local test paths simulating the real architecture[cite: 4]
    base_dir = Path("./dynawo_test_env").resolve()
    modelica_path = base_dir / "model_lib" / "modelica_models"
    user_models = base_dir / "user_models"
    ddb_dir = base_dir / "ddb"
    
    # Ensure required directories exist[cite: 4]
    modelica_path.mkdir(parents=True, exist_ok=True)
    user_models.mkdir(parents=True, exist_ok=True)
    ddb_dir.mkdir(parents=True, exist_ok=True)

    def has_xml_files(path: Path) -> bool:
        """Helper to check XML files[cite: 4]."""
        return any(path.glob("*.[xX][mM][lL]"))

    # Skip precompilation if directories have no XML files[cite: 4]
    if not has_xml_files(modelica_path) and not has_xml_files(user_models):
        print("[WARNING] No XML files found in modelica_path or user_models. Skipping precompile.")
        return False

    # Execute precompilation[cite: 4]
    precompile_models(launcher_dwo, modelica_path, user_models, model, ddb_dir)
    return False

# =============================================================================
# LAYER 1: Command Handler (Adapted from command_handlers.py)
# =============================================================================

def handle_compile_command(dwo_launcher: Path, model_name: Optional[str] = None, force_recompile: bool = False) -> int:
    """
    Handles the 'compile' command[cite: 5].
    """
    print("\n======================================================")
    print(f"Executing handle_compile_command for model: {model_name or 'ALL'}")
    print("======================================================\n")
    try:
        aborted = precompile(dwo_launcher, model_name, force_recompile)
        if aborted:
            print("[INFO] Model compilation aborted by user.")
            return 1
        else:
            print("[INFO] Model(s) compiled successfully.")
            return 0
    except Exception as e:
        print(f"[ERROR] Error compiling models: {e}")
        return 1

# =============================================================================
# MOCK SETUP & EXECUTION
# =============================================================================

if __name__ == "__main__":
    # 1. Path to your local Dynawo launcher (UPDATE THIS PATH to your real system path)
    dynawo_launcher_path = Path("/home/guiu/Projects/Notebooks/dynawo-notebooks/src/dynawo_notebooks/Notebook_examples/dynawo/dynawo.sh")
    
    # 2. Setup a minimal Modelica model and XML descriptor inspired by the simplified models[cite: 6]
    test_env_dir = Path("./dynawo_test_env/user_models")
    test_env_dir.mkdir(parents=True, exist_ok=True)
    
    modelica_file = test_env_dir / "SimpleGenerator.mo"
    xml_file = test_env_dir / "simple_generator_model.xml"
    
    # Minimal Modelica code mimicking a simplified continuous model[cite: 6]
    modelica_content = """model SimpleGenerator
      Real power_output(start=1.0);
    equation
      der(power_output) = -power_output;
    end SimpleGenerator;
    """
    with open(modelica_file, "w", encoding="utf-8") as f:
        f.write(modelica_content)
        
    # XML file pointing to the Modelica file (Required by dynawo_precompile.py[cite: 3])
    xml_content = """<?xml version="1.0" encoding="UTF-8"?>
    <dyn:modelicaModels xmlns:dyn="http://www.rte-france.com/dynawo">
        <dyn:modelicaModel id="SimpleGenerator" file="SimpleGenerator.mo" />
    </dyn:modelicaModels>
    """
    with open(xml_file, "w", encoding="utf-8") as f:
        f.write(xml_content)
        
    # 3. Trigger the compilation command[cite: 5]
    handle_compile_command(
        dwo_launcher=dynawo_launcher_path,
        model_name="simple_generator_model.xml",
        force_recompile=True
    )