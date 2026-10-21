"""
Modelica Initialization Generator Module.

This module creates the initialized version of a Modelica case from the initial
values computed by Dynawo (dumped after its global initialization).

For every component simulated with a Dynawo model, the generated model sets:

- the initial parameters that have no value in the original model (for instance the
  start values of an uninitialized load), which are required to simulate it;
- the start values computed by the initialization (read-only parameters of the Dynawo
  model, and those derived from the load flow), whenever they differ from the values
  of the original model, so that the model starts exactly from the steady state.

User parameters are never changed: they reach Dynawo unchanged, so their initial
value is the same as in the original model. Final parameters cannot be modified and
are skipped.

OpenModelica solves the initialization of the whole network from the start values of
its variables, and mixing exact and default start values hampers its convergence. The
start values of the bus voltages, and of the terminals whose start values are computed
by the initial equations of their model (fixed = false), are therefore also set from
the load flow.

The initialized model is a copy of the root model renamed ``<Model>_initialized``.
The values of the components declared in the root model are written in their
declarations; those of the components declared in base classes are written as
modifiers of the corresponding ``extends`` clause.
"""

import cmath
import logging
import math
import os
import re
from dataclasses import dataclass, field
from typing import Dict, Any, List, Optional, Tuple

import pandas as pd

from python_pypowsybl.Code.core.connector import OMCConnector
from python_pypowsybl.Code.core.model_linker import DynamicLink, DynamicModelSetup
from python_pypowsybl.Code.core.model_registry import ModelRegistry
from python_pypowsybl.Code.core.parameter_generator import DynamicParameterGenerator

logger = logging.getLogger(__name__)

# Relative tolerance below which a start value is considered unchanged
UNCHANGED_TOLERANCE = 1e-9

# Standard terminal start values of the Dynawo models, and the load flow quantities they
# correspond to (complex values in receptor convention, powers PGen0Pu/QGen0Pu in
# generator convention)
PRECISE_START_VALUES = {
    "u0Pu": ("u0.re", "u0.im"),
    "s0Pu": ("s0.re", "s0.im"),
    "i0Pu": ("i0.re", "i0.im"),
    "PGen0Pu": "p_gen_pu",
    "QGen0Pu": "q_gen_pu",
    "U0Pu": "u_pu",
    "UPhase0": "angle_rad",
}


@dataclass
class InitializedModel:
    """
    The generated initialized Modelica model.

    :param path: Path of the generated file.
    :param class_name: Fully qualified name of the initialized model.
    :param values: Modifiers set per component: Modelica literals by parameter name, or
        nested dictionaries for the start values of sub-components (e.g. the terminal).
    """

    path: str
    class_name: str
    values: Dict[str, Dict[str, Any]] = field(default_factory=dict)

    def __str__(self) -> str:
        return self.path

    def __fspath__(self) -> str:
        return self.path


# ---------------------------------------------------------------------- #
# Dynawo dumps
# ---------------------------------------------------------------------- #


def read_dump_parameters(dump_file: str) -> Dict[str, float]:
    """
    Reads the PARAMETERS section of a Dynawo initial values dump.

    :param dump_file: Path of a dumpInitValues-<model>.txt file.
    :return: The finite parameter values, by Dynawo parameter name.
    """
    values: Dict[str, float] = {}
    in_parameters = False
    with open(dump_file, "r", encoding="utf-8", errors="ignore") as f:
        for line in f:
            if line.strip().startswith("======"):
                in_parameters = "PARAMETERS" in line
                continue
            if not in_parameters:
                continue
            match = re.match(r"^\s*(\S+)\s*=\s*(\S+)\s*$", line)
            if not match:
                continue
            try:
                value = float(match.group(2))
            except ValueError:
                continue
            if math.isfinite(value):
                values[match.group(1)] = value
    return values


# ---------------------------------------------------------------------- #
# Modelica source editing
# ---------------------------------------------------------------------- #


def _matching_parenthesis(text: str, start: int) -> int:
    """Returns the index of the parenthesis closing the one at ``start``, ignoring strings."""
    depth, in_string, escape = 0, False, False
    for index in range(start, len(text)):
        char = text[index]
        if in_string:
            if escape:
                escape = False
            elif char == "\\":
                escape = True
            elif char == '"':
                in_string = False
            continue
        if char == '"':
            in_string = True
        elif char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
            if depth == 0:
                return index
    raise ValueError("Unbalanced parentheses in the Modelica source")


def _split_top_level(text: str) -> List[str]:
    """Splits a modifier list at its top level commas."""
    items, depth, current, in_string = [], 0, "", False
    for char in text:
        if char == '"':
            in_string = not in_string
        if not in_string:
            if char in "([{":
                depth += 1
            elif char in ")]}":
                depth -= 1
            elif char == "," and depth == 0:
                items.append(current)
                current = ""
                continue
        current += char
    if current.strip():
        items.append(current)
    return items


def _item_name(item: str) -> str:
    """Returns the name modified by a modifier item (``a = 1`` or ``a(b = 2)``)."""
    match = re.match(r"^\s*(?:final\s+|each\s+|redeclare\s+)*([\w\.]+)", item)
    return match.group(1) if match else ""


def _render_item(name: str, value: Any, existing: str = "") -> str:
    """Renders a modifier item, merging nested values into an existing item if given."""
    if not isinstance(value, dict):
        return f"{name} = {value}"
    inner = ""
    open_index = existing.find("(")
    if open_index >= 0:
        inner = existing[open_index + 1 : _matching_parenthesis(existing, open_index)]
    return f"{name}({merge_modifiers(inner, value)})"


def merge_modifiers(content: str, values: Dict[str, Any], separator: str = " ") -> str:
    """
    Merges values into the content of a modifier list (without the parentheses). The
    layout of the existing items is preserved, and the new items follow the layout of
    the last existing one.

    :param content: Existing modifier list, e.g. ``a = 1, b(c = 2)``.
    :param values: Values to set: a Modelica literal for a parameter, or a nested
        dictionary for the modifiers of a sub-component.
    :param separator: Whitespace written before each new item of an empty list.
    :return: The merged modifier list.
    """
    items = _split_top_level(content) if content.strip() else []
    remaining = dict(values)
    merged = []
    for item in items:
        name = _item_name(item)
        if name not in remaining:
            merged.append(item)
            continue
        leading = item[: len(item) - len(item.lstrip())]
        trailing = item[len(item.rstrip()) :]
        merged.append(leading + _render_item(name, remaining.pop(name), item) + trailing)

    if remaining:
        if merged:
            last = merged[-1]
            leading = last[: len(last) - len(last.lstrip())] or " "
            trailing = last[len(last.rstrip()) :]
            merged[-1] = last.rstrip()
        else:
            leading, trailing = separator, ""
        new_items = [leading + _render_item(name, value) for name, value in remaining.items()]
        if not items and separator == " ":
            new_items[0] = new_items[0].lstrip()
        merged.extend(new_items)
        merged[-1] += trailing
    return ",".join(merged)


def inject_in_declaration(source: str, component: str, values: Dict[str, str]) -> Tuple[str, bool]:
    """
    Sets parameter values in the declaration of a component.

    :param source: Modelica source code.
    :param component: Name of the component.
    :param values: Modelica literals by parameter name.
    :return: The modified source, and whether the declaration was found.
    """
    pattern = re.compile(
        rf"^[ \t]*(?:(?:replaceable|parameter|final|inner|outer|protected|public|discrete)\s+)*"
        rf"[A-Za-z_][\w\.]*\s+({re.escape(component)})\b",
        re.MULTILINE,
    )
    match = pattern.search(source)
    if not match:
        return source, False
    position = match.end()
    following = source[position:]
    stripped = following.lstrip()
    if stripped.startswith("("):
        open_index = position + (len(following) - len(stripped))
        close_index = _matching_parenthesis(source, open_index)
        content = source[open_index + 1 : close_index]
        return source[: open_index + 1] + merge_modifiers(content, values) + source[
            close_index:
        ], True
    return source[:position] + f"({merge_modifiers('', values)})" + source[position:], True


def inject_in_extends(
    source: str, base_class: str, values: Dict[str, Dict[str, str]]
) -> Tuple[str, bool]:
    """
    Sets the parameters of inherited components as modifiers of an extends clause.

    :param source: Modelica source code.
    :param base_class: Fully qualified name of the base class of the extends clause.
    :param values: Modelica literals by parameter name, by component.
    :return: The modified source, and whether the extends clause was found.
    """
    for match in re.finditer(r"^([ \t]*)extends\s+([\w\.]+)", source, re.MULTILINE):
        written = match.group(2)
        if not (base_class == written or base_class.endswith("." + written)):
            continue
        position = match.end()
        following = source[position:]
        stripped = following.lstrip()
        if stripped.startswith("("):
            open_index = position + (len(following) - len(stripped))
            close_index = _matching_parenthesis(source, open_index)
            content = source[open_index + 1 : close_index]
            merged = merge_modifiers(content, values)
            return source[: open_index + 1] + merged + source[close_index:], True
        # New modifier list: one component per line, indented under the extends clause
        separator = "\n" + match.group(1) + "    "
        return source[:position] + f"({merge_modifiers('', values, separator)})" + source[
            position:
        ], True
    return source, False


def _format_real(value: float) -> str:
    """Formats a real value as a Modelica literal."""
    return repr(float(value))


class ModelicaInitGenerator:
    """
    Utility class to generate an initialized Modelica model (.mo) as a standalone file.
    It injects the steady state computed by Dynawo into the component modifiers.
    """

    @staticmethod
    def collect_initial_values(
        link: DynamicLink,
        component: Dict[str, Any],
        dump: Dict[str, float],
        read_only: List[str],
        quantities: Dict[str, float],
    ) -> Dict[str, str]:
        """
        Selects the initial values of a component from the Dynawo dump of its model.

        :param link: The dynamic model link of the component.
        :param component: The parsed data of the component.
        :param dump: The parameters dumped by Dynawo for its model.
        :param read_only: The read-only parameters of the Dynawo model (computed by its
            initialization).
        :param quantities: The load flow quantities of its static element.
        :return: Modelica literals by parameter name.
        """
        dynawo = link.spec.dynawo
        prefix = f"{dynawo.prefix}_"
        parameters = component.get("parameters", {})
        missing = set(component.get("missing_initial_parameters", []))
        finals = set(component.get("final_parameters", []))
        enumerations = component.get("enumerations", {})
        read_only_names = {name[len(prefix) :] for name in read_only if name.startswith(prefix)}

        # Values by Modelica parameter name; complex parameters gather their two parts
        selected: Dict[str, Dict[str, float]] = {}
        for dynawo_name, value in dump.items():
            if not dynawo_name.startswith(prefix):
                continue
            name = dynawo_name[len(prefix) :]
            suffix = name  # Name in the Dynawo model, e.g. "u0Pu_re"
            part = None
            match = re.fullmatch(r"(.+)_(re|im)", name)
            if match and (f"{match.group(1)}.re" in parameters or match.group(1) in missing):
                # Real or imaginary part of a complex parameter (u0Pu_re -> u0Pu.re)
                name, part = match.group(1), match.group(2)

            exists = (
                name in parameters
                or f"{name}.re" in parameters
                or name in missing
                or name in enumerations
            )
            # OpenModelica also flattens as final the parameters it evaluates structurally,
            # but a parameter without value cannot be final: it must always be set
            if not exists or (name in finals and name not in missing):
                continue
            # Values computed by the initialization: those missing from the model, those
            # computed by the Dynawo model itself (read-only), and the standard start values
            # derived from the load flow (other load flow values, such as a nominal voltage,
            # are user parameters and are kept)
            computed = (
                name in missing
                or suffix in read_only_names
                or (suffix in dynawo.initial_values and name in PRECISE_START_VALUES)
            )
            if not computed:
                continue

            # The load flow values are used at full precision rather than as dumped
            if suffix in dynawo.initial_values and dynawo.initial_values[suffix] in quantities:
                value = quantities[dynawo.initial_values[suffix]]
            selected.setdefault(name, {})[part or "value"] = value

        # Dynawo prints its dumps with 6 decimals. The standard terminal start values of the
        # Dynawo models are recomputed at full precision from the load flow whenever they
        # agree with the dump.
        for name, keys in PRECISE_START_VALUES.items():
            parts = selected.get(name, {})
            if isinstance(keys, tuple):
                if {"re", "im"} <= set(parts) and all(key in quantities for key in keys):
                    exact = (quantities[keys[0]], quantities[keys[1]])
                    if abs(exact[0] - parts["re"]) < 1e-5 and abs(exact[1] - parts["im"]) < 1e-5:
                        parts["re"], parts["im"] = exact
            elif "value" in parts and keys in quantities:
                if abs(quantities[keys] - parts["value"]) < 1e-5:
                    parts["value"] = quantities[keys]

        literals: Dict[str, str] = {}
        for name, parts in selected.items():
            if "value" in parts:
                current = parameters.get(name)
                new = parts["value"]
                if name in enumerations:
                    # Dynawo dumps enumerations by their (1-based) index
                    enumeration = enumerations[name]
                    index = int(round(new)) - 1
                    if enumeration.get("type") and 0 <= index < len(enumeration["literals"]):
                        literal = enumeration["literals"][index]
                        if name in missing or literal != enumeration.get("value"):
                            literals[name] = f"{enumeration['type']}.{literal}"
                    continue
                if isinstance(current, bool):
                    # Dynawo dumps booleans as 1 (true) and -1 (false)
                    flag = new > 0
                    if name in missing or flag != current:
                        literals[name] = "true" if flag else "false"
                    continue
                if name not in missing and current is not None and _close(current, new):
                    continue
                literals[name] = _format_real(new)
            elif "re" in parts and "im" in parts:
                current = (parameters.get(f"{name}.re"), parameters.get(f"{name}.im"))
                new = (parts["re"], parts["im"])
                if name not in missing and None not in current and all(map(_close, current, new)):
                    continue
                literals[name] = f"Complex({_format_real(new[0])}, {_format_real(new[1])})"
        return literals

    @staticmethod
    def generate_initialized_model(
        export_folder: str,
        source_dir: str,
        model_name: str,
        network: Any = None,
        setup: Optional[DynamicModelSetup] = None,
        parsed_data: Optional[Dict[str, Any]] = None,
        connector: Optional[OMCConnector] = None,
        dynawo_path: Optional[str] = None,
        dump_dir: Optional[str] = None,
    ) -> Optional[InitializedModel]:
        """
        Generates the initialized version of a Modelica case.

        :param export_folder: Export directory of the case, where the file is written.
        :param source_dir: Directory of the Modelica files of the case.
        :param model_name: Fully qualified name of the root model.
        :param network: Unused, kept for compatibility with former versions.
        :param setup: Dynamic model setup returned by link_models.
        :param parsed_data: Parsed topology of the case.
        :param connector: OMC connector on which the case is loaded.
        :param dynawo_path: Root of the Dynawo installation.
        :param dump_dir: Directory of the global initial values dump (defaults to the
            replay directory of the export folder).
        :return: The initialized model, or None on failure.
        """
        if setup is None or parsed_data is None or connector is None or dynawo_path is None:
            logger.error(
                "The dynamic setup, the parsed data, the connector and the Dynawo path "
                "are required."
            )
            return None

        logger.info("Generating the initialized Modelica model from the Dynawo initialization...")
        dump_dir = dump_dir or os.path.join(
            export_folder, "dynamic_files", "outputs", "initValues", "globalInit"
        )
        if not os.path.isdir(dump_dir):
            logger.error(f"Initial values dump not found at {dump_dir}")
            return None

        # 1. Initial values of every component simulated with a Dynawo model
        values: Dict[str, Dict[str, str]] = {}
        read_only_cache: Dict[str, List[str]] = {}
        for link in setup.links:
            if link.category not in ("generators", "loads", "shunts"):
                continue
            dump_file = os.path.join(dump_dir, f"dumpInitValues-{link.model_id}.txt")
            if not os.path.exists(dump_file):
                logger.warning(f"No initial values dumped for {link.component} ({dump_file}).")
                continue
            lib = link.spec.dynawo.lib
            if lib not in read_only_cache:
                read_only_cache[lib] = DynamicParameterGenerator.read_ddb_parameters(
                    dynawo_path, lib
                )[1]
            component = parsed_data.get(link.category, {}).get(link.component, {})
            quantities = DynamicParameterGenerator.load_flow_quantities(setup.network, link)
            literals: Dict[str, Any] = ModelicaInitGenerator.collect_initial_values(
                link, component, read_dump_parameters(dump_file), read_only_cache[lib], quantities
            )
            terminal = ModelicaInitGenerator._terminal_start_values(link, component, quantities)
            if terminal:
                literals["terminal"] = terminal
            unresolved = set(component.get("missing_initial_parameters", [])) - set(literals)
            if unresolved:
                logger.warning(
                    f"{link.component}: Dynawo did not provide {', '.join(sorted(unresolved))}; "
                    "the initialized model will still miss them."
                )
            if literals:
                values[link.component] = literals

        # 2. Start values of the bus voltages, so that every node of the network starts
        # from the load flow (OpenModelica solves the initialization from the start values,
        # and mixing exact and flat start values hampers its convergence)
        for bus, start_values in ModelicaInitGenerator._bus_start_values(
            setup, parsed_data
        ).items():
            values.setdefault(bus, {}).update(start_values)

        # 3. Copy of the root model with the values injected
        source_file = connector.get_source_file(model_name)
        if not source_file or not os.path.exists(source_file):
            source_file = os.path.join(source_dir, f"{model_name.split('.')[-1]}.mo")
        try:
            with open(source_file, "r", encoding="utf-8") as f:
                source = f.read()
        except OSError as e:
            logger.error(f"Failed to read the original Modelica file {source_file}: {e}")
            return None

        short_name = model_name.split(".")[-1]
        initialized_name = f"{short_name}_initialized"
        source = ModelicaInitGenerator._rename_class(source, short_name, initialized_name)

        root_components = {
            name
            for category in parsed_data.values()
            if isinstance(category, dict)
            for name, info in category.items()
            if isinstance(info, dict) and info.get("declared_in") == model_name
        }
        inherited: Dict[str, Dict[str, Dict[str, str]]] = {}
        base_of = ModelicaInitGenerator._extends_of_components(connector, model_name, parsed_data)
        for component, literals in values.items():
            if component in root_components:
                source, found = inject_in_declaration(source, component, literals)
                if not found:
                    logger.warning(f"Declaration of {component} not found in {source_file}.")
            elif component in base_of:
                inherited.setdefault(base_of[component], {})[component] = literals
            else:
                logger.warning(
                    f"Could not locate where {component} is declared; its values are skipped."
                )
        for base_class, components in inherited.items():
            source, found = inject_in_extends(source, base_class, components)
            if not found:
                logger.warning(f"Extends clause of {base_class} not found in {source_file}.")

        within = re.search(r"^\s*within\s+([\w\.]+)\s*;", source, re.MULTILINE)
        class_name = f"{within.group(1)}.{initialized_name}" if within else initialized_name

        os.makedirs(export_folder, exist_ok=True)
        target = os.path.join(export_folder, f"{initialized_name}.mo")
        try:
            with open(target, "w", encoding="utf-8") as f:
                f.write(source)
        except IOError as e:
            logger.error(f"Failed to write Modelica file: {e}")
            return None

        logger.info(f"SUCCESS: Initialized Modelica model generated at: {target}")
        return InitializedModel(path=target, class_name=class_name, values=values)

    @staticmethod
    def _terminal_start_values(
        link: DynamicLink, component: Dict[str, Any], quantities: Dict[str, float]
    ) -> Dict[str, Any]:
        """
        Returns the start value modifiers of the terminal of an injection whose start
        voltage or current (u0Pu, i0Pu) is computed by the initial equations of its model
        (fixed = false) and cannot be given a value, e.g. for the simplified generators
        whose start voltage is Complex(U0Pu, 0).
        """
        computed = set(component.get("computed_parameters", []))
        if link.static_element == "bus" or "u0.re" not in quantities:
            return {}
        terminal: Dict[str, Any] = {}
        for parameter, variable, quantity in (("u0Pu", "V", "u0"), ("i0Pu", "i", "i0")):
            if parameter in computed:
                terminal[variable] = {
                    "re": {"start": _format_real(quantities[f"{quantity}.re"])},
                    "im": {"start": _format_real(quantities[f"{quantity}.im"])},
                }
        return terminal

    @staticmethod
    def _bus_start_values(
        setup: DynamicModelSetup, parsed_data: Dict[str, Any]
    ) -> Dict[str, Dict[str, Any]]:
        """
        Returns the start value modifiers of the terminal voltage of every Bus component,
        e.g. ``terminal(V(re(start = 1.0), im(start = 0.0)))``, from the load flow.
        """
        registry = ModelRegistry.load()
        buses = setup.network.get_bus_breaker_view_buses()
        nominal = setup.network.get_voltage_levels()["nominal_v"]
        start_values: Dict[str, Dict[str, Any]] = {}
        for bus, info in parsed_data.get("buses", {}).items():
            spec = registry.get(info.get("modelica_type", ""))
            if (
                info.get("is_virtual")
                or spec is None
                or spec.element != "bus"
                or bus not in buses.index
            ):
                continue
            row = buses.loc[bus]
            if pd.isna(row["v_mag"]) or pd.isna(row["v_angle"]):
                continue
            u0 = cmath.rect(
                float(row["v_mag"]) / float(nominal[row["voltage_level_id"]]),
                math.radians(float(row["v_angle"])),
            )
            start_values[bus] = {
                "terminal": {
                    "V": {
                        "re": {"start": _format_real(u0.real)},
                        "im": {"start": _format_real(u0.imag)},
                    }
                }
            }
        return start_values

    @staticmethod
    def _rename_class(source: str, old_name: str, new_name: str) -> str:
        """Renames the root class of a Modelica file and adds a note about its origin."""
        source = re.sub(
            rf"^([ \t]*)(model|class|block)(\s+){re.escape(old_name)}\b",
            rf"\1// Initialized version of {old_name}, generated from the Dynawo "
            rf"initialization by dynawo-notebooks\n\1\2\3{new_name}",
            source,
            count=1,
            flags=re.MULTILINE,
        )
        return re.sub(rf"\bend\s+{re.escape(old_name)}\s*;", f"end {new_name};", source)

    @staticmethod
    def _extends_of_components(
        connector: OMCConnector, model_name: str, parsed_data: Dict[str, Any]
    ) -> Dict[str, str]:
        """
        Returns, for each component declared in a base class, the base class of the root
        model (extends clause) through which it is inherited.
        """
        closures: Dict[str, set] = {}

        def closure(class_name: str, visited: Optional[set] = None) -> set:
            visited = visited if visited is not None else set()
            if class_name in visited:
                return visited
            visited.add(class_name)
            for base in connector.get_extends(class_name):
                closure(base, visited)
            return visited

        for base in connector.get_extends(model_name):
            closures[base] = closure(base)

        result = {}
        for category in parsed_data.values():
            if not isinstance(category, dict):
                continue
            for name, info in category.items():
                declared_in = info.get("declared_in") if isinstance(info, dict) else None
                for base, classes in closures.items():
                    if declared_in in classes:
                        result[name] = base
                        break
        return result


def _close(current: Any, new: float) -> bool:
    """Tells whether a new start value is equal to the current one."""
    try:
        current = float(current)
    except (TypeError, ValueError):
        return False
    return abs(current - new) <= UNCHANGED_TOLERANCE * max(1.0, abs(current), abs(new))
