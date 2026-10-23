# helpers/package_workflow.py
# Package-level orchestration helpers for the auxiliary-model workflow.

import os
import re

from .auxiliary_cleanup import collect_cleanup_component_names
from .auxiliary_patch import clean_aux_equations, rewrite_aux_extends
from .initialized_model import rewrite_initialized_extends
from .openmodelica import get_all_components, omc_call, send_expression


_STRING_ESCAPES = {"\\": "\\", '"': '"', "n": "\n", "t": "\t", "r": "\r", "'": "'"}


def _list_file_text(omc, model):
    """
    Return the Modelica text of `model`.

    `listFile` answers with an OpenModelica string literal. Letting OMPython parse
    it drops one level of escaping, which unquotes the quotes inside documentation
    annotations and leaves the saved file unparseable, so the raw answer is
    decoded here instead.
    """
    raw = omc_call(omc, f"listFile({model})", parsed=False).strip()
    if raw.startswith('"') and raw.endswith('"'):
        raw = raw[1:-1]
    return re.sub(r"\\(.)", lambda m: _STRING_ESCAPES.get(m.group(1), "\\" + m.group(1)), raw)


def package_workflow_paths(model, model_dir, output_dir):
    """
    Build the derived package names and file paths used by the package workflow.
    """
    model_parts = model.split(".")
    if len(model_parts) < 2:
        raise RuntimeError(
            "Package workflow expects a qualified model name, for example Demo_Nordic.TestCase"
        )

    source_package = model_parts[0]
    root_model_name = model_parts[-1]

    aux_package = source_package + "_auxiliary"
    aux_dir = os.path.join(output_dir, aux_package)
    aux_root_model = aux_package + "." + root_model_name + "_auxiliary"

    initialized_package = source_package + "_initialized"
    initialized_dir = os.path.join(output_dir, initialized_package)
    initialized_root_model = initialized_package + "." + root_model_name + "_initialized"

    return {
        "source_package": source_package,
        "root_model_name": root_model_name,
        "source_package_file": os.path.join(model_dir, "package.mo"),
        "aux_package": aux_package,
        "aux_dir": aux_dir,
        "aux_root_model": aux_root_model,
        "aux_package_file": os.path.join(aux_dir, "package.mo"),
        "aux_order_file": os.path.join(aux_dir, "package.order"),
        "initialized_package": initialized_package,
        "initialized_dir": initialized_dir,
        "initialized_root_model": initialized_root_model,
        "initialized_package_file": os.path.join(initialized_dir, "package.mo"),
        "initialized_order_file": os.path.join(initialized_dir, "package.order"),
    }


def package_name_map(chain, package_name, suffix):
    """
    Map each source class in an inheritance chain to a generated package class.
    """
    return {
        model: package_name + "." + model.split(".")[-1] + suffix
        for model in chain
    }


def auxiliary_name_map(chain, aux_package):
    return package_name_map(chain, aux_package, "_auxiliary")


def initialized_name_map(chain, initialized_package):
    return package_name_map(chain, initialized_package, "_initialized")


def package_class_names(chain, name_map):
    return [name_map[model].split(".")[-1] for model in chain]


def write_package_files(package_file, order_file, package_name, class_names):
    """
    Write `package.mo` and `package.order` for a generated package.
    """
    os.makedirs(os.path.dirname(package_file), exist_ok=True)

    with open(package_file, "w") as f:
        f.write(f"within ;\npackage {package_name}\nend {package_name};\n")

    with open(order_file, "w") as f:
        for class_name in class_names:
            f.write(class_name + "\n")


def collect_package_component_contexts(omc, chain):
    """
    Collect per-class component dictionaries and cumulative patch contexts for an
    inheritance-chain package transformation.
    """
    components_by_model = {}
    patch_components_by_model = {}
    cumulative_components = {}
    global_blacklist_names = set()

    for model in chain:
        model_components = get_all_components(omc, model)

        components_by_model[model] = model_components
        global_blacklist_names |= collect_cleanup_component_names(model_components)

        cumulative_components.update(model_components)
        patch_components_by_model[model] = dict(cumulative_components)

    return {
        "components_by_model": components_by_model,
        "patch_components_by_model": patch_components_by_model,
        "global_blacklist_names": global_blacklist_names,
    }


def save_auxiliary_package_classes(omc, chain, aux_name_map, aux_dir, patch_components_by_model, slack_component):
    """
    Save generated auxiliary classes, rewrite inherited parents to auxiliary
    parents, and clean the auxiliary equations.
    """
    os.makedirs(aux_dir, exist_ok=True)

    for model in chain:
        aux_model = aux_name_map[model]
        aux_name = aux_model.split(".")[-1]
        aux_file = os.path.join(aux_dir, aux_name + ".mo")

        clean_aux_equations(omc, aux_model, patch_components_by_model[model], slack_component)

        text = _list_file_text(omc, aux_model)
        text = rewrite_aux_extends(text, aux_name_map)

        with open(aux_file, "w") as f:
            f.write(text)
            if not text.endswith("\n"):
                f.write("\n")


def save_initialized_package_classes(omc, chain, initialized_name_map, initialized_dir):
    """
    Save generated initialized classes and rewrite inherited parents to initialized
    parents.
    """
    os.makedirs(initialized_dir, exist_ok=True)

    for model in chain:
        initialized_model = initialized_name_map[model]
        initialized_name = initialized_model.split(".")[-1]
        initialized_file = os.path.join(initialized_dir, initialized_name + ".mo")

        text = _list_file_text(omc, initialized_model)
        text = rewrite_initialized_extends(text, initialized_name_map)

        with open(initialized_file, "w") as f:
            f.write(text)
            if not text.endswith("\n"):
                f.write("\n")


def simulation_flags_without_log_stats(omc, model):
    """
    Return the model's `__OpenModelica_simulationFlags` annotation as a runtime
    `simflags` string, excluding `lv`.
    """
    flag_names = send_expression(
        omc, f'getAnnotationNamedModifiers({model}, "__OpenModelica_simulationFlags")'
    )

    if flag_names is None:
        return ""

    simflag_parts = []
    for flag_name in flag_names:
        if flag_name == "lv":
            continue

        flag_value = send_expression(
            omc,
            f'getAnnotationModifierValue({model}, "__OpenModelica_simulationFlags", "{flag_name}")',
        )

        if flag_value == "()":
            simflag_parts.append(f"-{flag_name}")
        else:
            simflag_parts.append(f"-{flag_name}={flag_value}")

    return " ".join(simflag_parts)
