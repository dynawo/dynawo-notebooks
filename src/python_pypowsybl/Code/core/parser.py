"""
Modelica Topology Parser Module.

This module is responsible for extracting the electrical topology and physical
parameters from Modelica network models. It utilizes the OMCConnector to query
the OpenModelica compiler and builds a standardized topological dictionary.

The parameters are read from the flattened model. A model that is not initialized
yet cannot be flattened as is, because some of its initial parameters have no value.
In that case the model is flattened through a probe that gives those parameters a
placeholder value; they are then reported as unknown, and listed per component as the
initial parameters that the initialization must provide.

How each component enters the load flow is described in the model registry
(``dynamic_models.json``). Components whose class is not in the registry are
classified from their Dynawo package and read with generic parameter names.
"""

import logging
import math
import re
from collections import deque
from typing import Dict, Any, Optional, List, Set, Tuple

from .connector import OMCConnector
from .flat_model import FlatModel, split_statements
from .model_registry import ModelRegistry, PowerFlowSpec

logger = logging.getLogger(__name__)

# Maximum number of probe instantiations (each one reveals one parameter without value)
MAX_PROBE_ITERATIONS = 400
PROBE_MODEL_NAME = "DynawoNotebooksProbe"
PROBE_PLACEHOLDER = "1.0"

CATEGORY_OF_ELEMENT = {
    "bus": "buses",
    "line": "lines",
    "transformer": "transformers",
    "generator": "generators",
    "load": "loads",
    "shunt": "shunts",
}

# Package fragments used to classify the Dynawo classes that are not in the registry
FALLBACK_GENERATOR_PACKAGES = (".machines.", ".sources.", ".bess.", ".photovoltaics.", ".wind.")


class ModelicaParser:
    """
    Parses Modelica models to extract hierarchical components, parameter assignments,
    and topological connectivity (nodes and edges).
    """

    def __init__(self, connector: OMCConnector, model_name: str):
        """
        Initializes the ModelicaParser instance and flattens the model.

        :param connector: Active OMCConnector instance for Modelica queries.
        :param model_name: The name of the root Modelica model to parse.
        """
        self.conn = connector
        self.model_name = model_name
        self.registry = ModelRegistry.load()

        # Source code of the root model and of its base classes
        self.top_code = self._get_full_code(model_name)

        flat_text, self.probed_parameters = self._flatten_with_probe()
        self.flat_model = flat_text or ""
        if flat_text:
            self.flat = FlatModel(flat_text, unknown=self.probed_parameters)
        else:
            logger.warning(
                f"OpenModelica could not flatten {model_name}: the parameters are read "
                "from the component modifiers only, which may leave some of them unresolved."
            )
            self.flat = self._build_source_model()

    # ------------------------------------------------------------------ #
    # Flattening
    # ------------------------------------------------------------------ #

    def _get_full_code(self, model: str, visited: Optional[Set[str]] = None) -> str:
        """Returns the source code of a model and of all its base classes."""
        visited = visited if visited is not None else set()
        if model in visited:
            return ""
        visited.add(model)
        code = self.conn.list_class(model)
        for base in self.conn.get_extends(model):
            code += "\n" + self._get_full_code(base, visited)
        return code

    def _flatten_with_probe(self) -> Tuple[Optional[str], Set[str]]:
        """
        Flattens the root model. If some parameters have no value (model not initialized
        yet), they receive a placeholder through a probe model extending the root model,
        until the flattening succeeds.

        :return: The flattened model (None on failure) and the set of probed parameters.
        """
        flat, error = self.conn.instantiate(self.model_name)
        if flat:
            logger.info(f"Model {self.model_name} flattened ({len(flat)} characters).")
            return flat, set()

        probed: List[str] = []
        for _ in range(MAX_PROBE_ITERATIONS):
            missing = re.findall(
                r"Parameter ([\w\.\[\],']+) has neither value nor start value", error
            )
            new = [name for name in missing if name not in probed]
            if not new:
                logger.debug(f"Probe flattening stopped on an unrelated error: {error[-500:]}")
                return None, set(probed)
            probed.extend(new)

            probe = (
                f"model {PROBE_MODEL_NAME}\n"
                f"  extends .{self.model_name}({self._render_modifiers(probed)});\n"
                f"end {PROBE_MODEL_NAME};"
            )
            if not self.conn.load_string(probe, f"{PROBE_MODEL_NAME}.mo"):
                return None, set(probed)
            flat, error = self.conn.instantiate(PROBE_MODEL_NAME)
            if flat:
                logger.info(
                    f"Model {self.model_name} flattened through a probe: {len(probed)} "
                    "parameter(s) without value are left to the initialization."
                )
                return flat, set(probed)
        return None, set(probed)

    @staticmethod
    def _render_modifiers(names: List[str]) -> str:
        """Renders dotted parameter names as nested Modelica modifiers with a placeholder value."""
        tree: Dict[str, Any] = {}
        for name in names:
            node = tree
            parts = name.split(".")
            for part in parts[:-1]:
                node = node.setdefault(part, {})
            node[parts[-1]] = PROBE_PLACEHOLDER

        def render(node: Dict[str, Any]) -> str:
            return ", ".join(
                f"{key}({render(value)})" if isinstance(value, dict) else f"{key} = {value}"
                for key, value in node.items()
            )

        return render(tree)

    def _build_source_model(self) -> FlatModel:
        """
        Builds a partial model from the source code when flattening fails: the component
        modifiers, the parameters of the root model and the equations of its sources.
        """
        model = FlatModel()
        for statement in split_statements(re.sub(r"//[^\n]*", "", self.top_code)):
            declaration = re.match(
                r"^\s*(?:final\s+)?parameter\s+[\w\.]+\s+(\w+)\s*(?:\([^)]*\))?\s*=\s*(.+)$",
                statement,
                re.DOTALL,
            )
            if declaration:
                model.bindings[declaration.group(1)] = re.sub(
                    r'\s*"[^"]*"\s*$', "", declaration.group(2)
                )
                model.kinds[declaration.group(1)] = "parameter"
        for name, info in self._collect_all_components_recursive().items():
            for key, expression in _split_modifiers(info.get("modifiers", "")):
                model.bindings[f"{name}.{key}"] = expression
                model.kinds[f"{name}.{key}"] = "parameter"
        equations = re.split(r"\bequation\b", self.top_code)
        for section in equations[1:]:
            for statement in split_statements(section):
                model._parse_equation(statement)
        model._equation_index.clear()
        for lhs, rhs in model.equations:
            model._equation_index.setdefault(lhs, []).append(rhs)
            model._equation_index.setdefault(rhs, []).append(lhs)
        return model

    # ------------------------------------------------------------------ #
    # Topology
    # ------------------------------------------------------------------ #

    def parse_topology(self) -> Dict[str, Dict[str, Any]]:
        """
        Executes the full parsing pipeline. Extracts all components, categorizes them
        based on their types, extracts their parameters, and resolves their connectivity.

        :return: A deeply structured dictionary containing categorized topological elements.
        """
        logger.info(f"Starting topology parsing for root: {self.model_name}")

        all_components_map = self._collect_all_components_recursive()
        logger.info(f"Total unique components found: {len(all_components_map)}")

        topo: Dict[str, Dict[str, Any]] = {
            category: {} for category in CATEGORY_OF_ELEMENT.values()
        }

        for comp_name, comp_info in all_components_map.items():
            comp_type = comp_info["type"]
            element = self._classify(comp_type)
            if element is None:
                continue

            data: Dict[str, Any] = {
                "modelica_type": comp_type,
                "declared_in": comp_info["declared_in"],
            }
            data.update(self._ELEMENT_READERS[element](self, comp_name, comp_type))
            data["parameters"] = self._component_parameters(comp_name)
            data["missing_initial_parameters"] = self._missing_parameters(comp_name)
            data["final_parameters"] = self._final_parameters(comp_name)
            data["computed_parameters"] = self._computed_parameters(comp_name)
            data["enumerations"] = self._enumeration_parameters(comp_name)
            topo[CATEGORY_OF_ELEMENT[element]][comp_name] = data

        raw_connections = self._collect_all_connections_recursive()
        if raw_connections:
            self._build_topological_nodes(topo, raw_connections)

        return topo

    def _classify(self, modelica_type: str) -> Optional[str]:
        """
        Returns the network element represented by a Modelica class, from the registry
        or, for unregistered classes, from their Dynawo package.
        """
        spec = self.registry.get(modelica_type)
        if spec is not None:
            return spec.element

        type_lower = modelica_type.lower()
        if not type_lower.startswith("dynawo.electrical."):
            return None
        if ".buses." in type_lower:
            return "generator" if "infinite" in type_lower else "bus"
        if ".lines." in type_lower:
            return "line"
        if ".transformers." in type_lower:
            return "transformer"
        if ".loads." in type_lower:
            return "load"
        if ".shunts." in type_lower:
            return "shunt"
        if any(package in type_lower for package in FALLBACK_GENERATOR_PACKAGES):
            return "generator"
        return None

    def _collect_all_components_recursive(
        self, current_model: Optional[str] = None, visited: Optional[Set[str]] = None
    ) -> Dict[str, Any]:
        """
        Recursively queries the OMC to retrieve all declared components
        in the current model and its inherited base classes.

        :param current_model: The name of the Modelica model to inspect.
        :param visited: A set tracking already visited models to prevent infinite loops.
        :return: A mapping of component instance names to their structural types and origins.
        """
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return {}
        visited.add(current_model)

        components = {}
        raw = self.conn.get_components(current_model)
        if isinstance(raw, (list, tuple)):
            for i, comp in enumerate(raw):
                if isinstance(comp, (list, tuple)) and len(comp) >= 2:
                    c_mods = self.conn.get_component_modification(current_model, i + 1)
                    components[str(comp[1])] = {
                        "type": str(comp[0]),
                        "declared_in": current_model,
                        "modifiers": c_mods,
                    }

        for base in self.conn.get_extends(current_model):
            for name, info in self._collect_all_components_recursive(base, visited).items():
                components.setdefault(name, info)
        return components

    def _collect_all_connections_recursive(
        self, current_model: Optional[str] = None, visited: Optional[Set[str]] = None
    ) -> List[List[str]]:
        """
        Recursively retrieves explicit electrical connection statements (connect())
        declared within the model and its inherited base classes.

        :param current_model: The name of the Modelica model to inspect.
        :param visited: A set tracking already visited models.
        :return: A list containing pairs of connected terminals.
        """
        if current_model is None:
            current_model = self.model_name
        if visited is None:
            visited = set()
        if current_model in visited:
            return []
        visited.add(current_model)

        connections = self.conn.get_connections(current_model)
        for base in self.conn.get_extends(current_model):
            connections.extend(self._collect_all_connections_recursive(base, visited))
        return connections

    def _build_topological_nodes(
        self, topo: Dict[str, Dict[str, Any]], connections: List[List[str]]
    ) -> None:
        """
        Processes connection statements to deduce physical topological nodes.
        Groups interconnected pins/terminals into logical buses.

        :param topo: The topological dictionary containing extracted components.
        :param connections: List of connection terminal pairs.
        """
        electrical_components = {name for category in topo.values() for name in category}

        def is_electrical_terminal(terminal: str) -> bool:
            # Only the AC terminals of electrical components define network nodes: control
            # signal connections (e.g. a set point connected to a generator) are ignored
            component, _, pin = terminal.rpartition(".")
            return (
                component in electrical_components and re.fullmatch(r"terminal\d*", pin) is not None
            )

        adj: Dict[str, List[str]] = {}
        for c in connections:
            if len(c) >= 2:
                term1, term2 = str(c[0]), str(c[1])
                if not (is_electrical_terminal(term1) and is_electrical_terminal(term2)):
                    continue
                adj.setdefault(term1, []).append(term2)
                adj.setdefault(term2, []).append(term1)

        # Connected groups of terminals (breadth-first search), each one a network node
        visited: Set[str] = set()
        node_groups = []
        for terminal in adj:
            if terminal not in visited:
                queue, group = deque([terminal]), {terminal}
                visited.add(terminal)
                while queue:
                    curr = queue.popleft()
                    for neighbor in adj[curr]:
                        if neighbor not in visited:
                            visited.add(neighbor)
                            group.add(neighbor)
                            queue.append(neighbor)
                node_groups.append(sorted(group))

        virtual_bus_idx = 1
        for group in node_groups:
            # The node takes the name of its Bus component, or a virtual name if it has none
            bus_id = next(
                (
                    component
                    for component, _, _ in (term.rpartition(".") for term in group)
                    if component in topo["buses"]
                ),
                None,
            )

            if not bus_id:
                bus_id = f"VirtualBus_{virtual_bus_idx}"
                virtual_bus_idx += 1
                topo["buses"][bus_id] = {
                    "nominal_v": None,
                    "is_virtual": True,
                    "om_reference": group[0],
                }

            for term in group:
                comp_name, _, pin_name = term.rpartition(".")
                for cat in ("lines", "transformers"):
                    if comp_name in topo[cat]:
                        # Branches are connected through terminal1 (side 1) and terminal2
                        side = "bus1" if pin_name.endswith("1") else "bus2"
                        topo[cat][comp_name][side] = bus_id
                for cat in ("generators", "loads", "shunts"):
                    if comp_name in topo[cat]:
                        topo[cat][comp_name]["bus"] = bus_id

    # ------------------------------------------------------------------ #
    # Parameter evaluation
    # ------------------------------------------------------------------ #

    def evaluate(self, component: str, expression: Optional[str]) -> Optional[float]:
        """
        Evaluates an expression in the scope of a component (e.g. "-PRef0Pu" for Gen1).

        :param component: Name of the component.
        :param expression: Modelica expression over the component parameters.
        :return: The value, or None if the expression cannot be evaluated.
        """
        if not expression:
            return None
        value = self.flat.evaluate(expression, scope=component)
        if isinstance(value, bool) or value is None:
            return None
        value = float(value)
        return value if math.isfinite(value) else None

    def _first_value(self, component: str, *expressions: str) -> Optional[float]:
        """Returns the first expression that can be evaluated in the scope of a component."""
        for expression in expressions:
            value = self.evaluate(component, expression)
            if value is not None:
                return value
        return None

    def _component_parameters(self, component: str) -> Dict[str, Any]:
        """
        Returns the numerical (and boolean) parameters of a component, including the real
        and imaginary parts of its complex parameters ("u0Pu.re").
        """
        parameters: Dict[str, Any] = {}
        prefix_length = len(component) + 1
        for name in self.flat.names_with_prefix(component):
            relative = name[prefix_length:]
            depth = relative.count(".")
            if depth > 1 or (depth == 1 and not relative.endswith((".re", ".im"))):
                continue
            if not self.flat.is_parameter(name):
                continue
            value = self.flat.value(name)
            if isinstance(value, bool):
                parameters[relative] = value
            elif value is not None and math.isfinite(float(value)):
                parameters[relative] = float(value)
        return parameters

    def _enumeration_parameters(self, component: str) -> Dict[str, Dict[str, Any]]:
        """
        Returns the enumeration parameters of a component: their literals (in declaration
        order) and the qualified type used by their current value, so that the
        initialization can write another literal of the same type.
        """
        enumerations: Dict[str, Dict[str, Any]] = {}
        prefix = f"{component}."
        for name in self.flat.names_with_prefix(component):
            relative = name[len(prefix) :]
            type_name = self.flat.types.get(name, "")
            if (
                "." in relative
                or not type_name.startswith("enumeration(")
                or not self.flat.is_parameter(name)
            ):
                continue
            literals = [
                literal.strip() for literal in type_name[len("enumeration(") : -1].split(",")
            ]
            binding = self.flat.bindings.get(name, "")
            type_path, _, current = binding.rpartition(".")
            enumerations[relative] = {
                "literals": literals,
                "type": type_path or None,
                "value": current if current in literals else None,
            }
        return enumerations

    def _final_parameters(self, component: str) -> List[str]:
        """Returns the parameters of a component that are final, hence cannot be modified."""
        return self._component_subset(component, self.flat.finals)

    def _computed_parameters(self, component: str) -> List[str]:
        """Returns the parameters of a component computed by its initial equations (fixed=false)."""
        return self._component_subset(component, self.flat.computed)

    @staticmethod
    def _component_subset(component: str, names: Set[str]) -> List[str]:
        """Returns the parameters (complex ones by their base name) of a component among names."""
        prefix = f"{component}."
        return sorted(
            {
                name[len(prefix) :].split(".")[0]
                for name in names
                if name.startswith(prefix) and name[len(prefix) :].count(".") <= 1
            }
        )

    def _missing_parameters(self, component: str) -> List[str]:
        """Returns the parameters of a component that have no value in the Modelica model."""
        prefix = f"{component}."
        missing = set()
        for name in self.probed_parameters:
            if name.startswith(prefix):
                relative = name[len(prefix) :]
                missing.add(relative.split(".")[0])
        return sorted(missing)

    def _base_voltage_hint(self, component: str, *parameters: str) -> Optional[float]:
        """
        Deduces a base voltage in kV from the impedance base used in the binding of a
        parameter, following the naming conventions of the Dynawo examples
        (ZBASE69_0 for 69.0 kV, XBase_130 for 130 kV).
        """
        for parameter in parameters:
            binding = self.flat.bindings.get(f"{component}.{parameter}", "")
            match = re.search(r"ZBASE(\d+)_(\d+)", binding, re.IGNORECASE)
            if match:
                return float(f"{match.group(1)}.{match.group(2)}")
            match = re.search(r"XBase_(\d+)", binding, re.IGNORECASE)
            if match:
                return float(match.group(1))
        return None

    # ------------------------------------------------------------------ #
    # Element readers
    # ------------------------------------------------------------------ #

    def _read_bus(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """Reads a bus: its nominal voltage, when the model gives a meaningful one."""
        u_nom = self.evaluate(name, "UNom")
        return {"nominal_v": u_nom if u_nom is not None and u_nom > 1.5 else None}

    def _read_line(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """Reads a line (impedance in pu base SnRef, half-admittances per side)."""
        x_pu = self.evaluate(name, "XPu")
        if x_pu is None:
            logger.warning(f"Line {name}: reactance not found, a negligible value is used.")
            x_pu = 1e-6
        return {
            "r_pu": self.evaluate(name, "RPu") or 0.0,
            "x_pu": x_pu,
            "g_pu": self.evaluate(name, "GPu") or 0.0,
            "b_pu": self.evaluate(name, "BPu") or 0.0,
            "base_kv": self._base_voltage_hint(name, "XPu", "RPu", "BPu"),
        }

    def _read_transformer(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """Reads a transformer (impedance and admittance in pu base SnRef and side 2 voltage)."""
        data = self._read_line(name, modelica_type)
        data["ratio"] = self._first_value(name, "rTfoPu", "RatioTfo0Pu") or 1.0
        return data

    def _read_shunt(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """Reads a shunt (susceptance in pu base SnRef, receptor convention: Q = B U^2)."""
        return {
            "b_pu": self.evaluate(name, "BPu") or 0.0,
            "g_pu": self.evaluate(name, "GPu") or 0.0,
            "base_kv": self._base_voltage_hint(name, "BPu"),
        }

    def _read_load(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """
        Reads the active and reactive power requested by a load, in pu base SnRef and
        receptor convention, from its references (PRefPu, QRefPu) or its start values.
        """
        delta_p = self.evaluate(name, "deltaP") or 0.0
        delta_q = self.evaluate(name, "deltaQ") or 0.0
        p_ref = self._first_value(name, "PRefPu")
        q_ref = self._first_value(name, "QRefPu")
        p_pu = (
            p_ref * (1.0 + delta_p)
            if p_ref is not None
            else self._first_value(name, "s0Pu.re", "P0Pu")
        )
        q_pu = (
            q_ref * (1.0 + delta_q)
            if q_ref is not None
            else self._first_value(name, "s0Pu.im", "Q0Pu")
        )
        if p_pu is None or q_pu is None:
            logger.warning(
                f"Load {name}: power request not fully resolved, missing values set to 0."
            )
        return {"p_pu": p_pu or 0.0, "q_pu": q_pu or 0.0}

    def _read_generator(self, name: str, modelica_type: str) -> Dict[str, Any]:
        """
        Reads the load flow behaviour of an injection: active and reactive power in pu
        base SnRef (generator convention), voltage set point, voltage angle and whether
        it controls its voltage or acts as the slack.
        """
        spec = self.registry.get(modelica_type)
        power_flow = spec.power_flow if spec is not None else self._generic_power_flow(name)

        sign = 1.0 if power_flow.convention == "generator" else -1.0
        p_value = self.evaluate(name, power_flow.p)
        q_value = self.evaluate(name, power_flow.q)
        p_pu = sign * p_value if p_value is not None else None
        q_pu = sign * q_value if q_value is not None else None
        u_pu = self.evaluate(name, power_flow.u)
        angle_rad = self.evaluate(name, power_flow.angle)
        q_min = self.evaluate(name, power_flow.q_min)
        q_max = self.evaluate(name, power_flow.q_max)

        slack = power_flow.slack or p_pu is None
        voltage_control = power_flow.voltage_control and not (q_pu is not None and u_pu is None)
        if slack and u_pu is None:
            logger.warning(
                f"Generator {name}: no voltage set point found for a slack, 1 pu is used."
            )
            u_pu = 1.0
        if voltage_control and u_pu is None:
            logger.warning(f"Generator {name}: no voltage set point found, 1 pu is used.")
            u_pu = 1.0

        return {
            "p_pu": p_pu,
            "q_pu": q_pu,
            "u_pu": u_pu,
            "angle_rad": angle_rad,
            "q_min_pu": q_min,
            "q_max_pu": q_max,
            "participation_factor": self.evaluate(name, power_flow.participation),
            "slack": slack,
            "voltage_control": voltage_control or slack,
            "sn_nom": self.evaluate(name, "SNom"),
        }

    def _generic_power_flow(self, name: str) -> PowerFlowSpec:
        """
        Load flow description of an injection whose class is not in the registry, using
        the usual Dynawo parameter names (generator convention for PGen0Pu, receptor
        convention for P0Pu).
        """
        if self.flat.has(f"{name}.PGen0Pu"):
            return PowerFlowSpec(
                p="PGen0Pu", q="QGen0Pu", convention="generator", u="U0Pu", angle="UPhase0"
            )
        return PowerFlowSpec(p="P0Pu", q="Q0Pu", convention="receptor", u="U0Pu", angle="UPhase0")

    _ELEMENT_READERS = {
        "bus": _read_bus,
        "line": _read_line,
        "transformer": _read_transformer,
        "shunt": _read_shunt,
        "load": _read_load,
        "generator": _read_generator,
    }


def _split_modifiers(modifiers: str) -> List[Tuple[str, str]]:
    """
    Splits a component modification such as ``(a = 1, b = f(2, 3))`` into
    (name, expression) pairs, ignoring nested modifications.
    """
    text = modifiers.strip().strip('"').strip()
    if text.startswith("(") and text.endswith(")"):
        text = text[1:-1]
    pairs, depth, current = [], 0, ""
    for char in text + ",":
        if char in "([{":
            depth += 1
        elif char in ")]}":
            depth -= 1
        if char == "," and depth == 0:
            match = re.match(r"^\s*(?:final\s+)?(\w+)\s*=\s*(.+?)\s*$", current, re.DOTALL)
            if match:
                pairs.append((match.group(1), match.group(2)))
            current = ""
        else:
            current += char
    return pairs
