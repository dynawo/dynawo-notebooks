"""
Dynamic Parameter Generator Module.

This module writes the Dynawo parameter files of a case from the Dynawo model
database descriptions (ddb/*.desc.xml), the Modelica parameters of each component and
the solved load flow:

- models.par: one parameter set per dynamic model. Each parameter of the Dynawo model
  takes, in order of preference, its initial value from the load flow (registry
  "initial_values"), a value computed from the Modelica parameters (registry
  "parameters"), the Modelica parameter with the same name, or the database default.
- network.par: the parameters of the default Dynawo network model.
- solvers.par: the solver parameters, from a template with a bounded time step so that
  short events (faults) are not stepped over.
- additional_models.json: the Dynawo models that PyPowSyBl does not ship, and the models
  compiled for the case from other classes than the standard ones.

The descriptions of the Dynawo models are read from the model database of the case when
its models were compiled, and from the one of the installation otherwise. All the files
are written to the export directory of the case, so that several cases never overwrite
each other's parameters.
"""

import cmath
import json
import logging
import math
import os
import re
import xml.etree.ElementTree as ET
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Any, List, Optional, Tuple
from xml.sax.saxutils import escape

import pandas as pd

from python_pypowsybl.Code.core.flat_model import FlatModel
from python_pypowsybl.Code.core.model_linker import DynamicLink, DynamicModelSetup
from python_pypowsybl.Code.core.model_registry import ModelRegistry

logger = logging.getLogger(__name__)

DYNAWO_NAMESPACE = "http://www.rte-france.com/dynawo"
S_REF_MVA = 100.0

# Default solver template shipped with the notebooks
DEFAULT_SOLVER_TEMPLATE = (
    Path(__file__).resolve().parents[2] / "Notebooks" / "om_powsybl_data" / "Solver.par"
)

# Parameters of the default Dynawo network model (loads without dynamic model, limits...)
NETWORK_PARAMETERS: List[Tuple[str, str, str]] = [
    ("DOUBLE", "capacitor_no_reclosing_delay", "300.0"),
    ("DOUBLE", "dangling_line_currentLimit_maxTimeOperation", "90.0"),
    ("DOUBLE", "line_currentLimit_maxTimeOperation", "90.0"),
    ("DOUBLE", "load_Tp", "90.0"),
    ("DOUBLE", "load_Tq", "90.0"),
    ("DOUBLE", "load_alpha", "1.0"),
    ("DOUBLE", "load_alphaLong", "0.0"),
    ("DOUBLE", "load_beta", "2.0"),
    ("DOUBLE", "load_betaLong", "0.0"),
    ("BOOL", "load_isControllable", "false"),
    ("BOOL", "load_isRestorative", "false"),
    ("DOUBLE", "load_zPMax", "100.0"),
    ("DOUBLE", "load_zQMax", "100.0"),
    ("DOUBLE", "reactance_no_reclosing_delay", "0.0"),
    ("DOUBLE", "transformer_currentLimit_maxTimeOperation", "90.0"),
    ("DOUBLE", "transformer_t1st_HT", "30.0"),
    ("DOUBLE", "transformer_t1st_THT", "30.0"),
    ("DOUBLE", "transformer_tNext_HT", "10.0"),
    ("DOUBLE", "transformer_tNext_THT", "10.0"),
    ("DOUBLE", "transformer_tolV", "0.015"),
]


# Parameters of the IDA solver (the maximum step is given by the caller). The absolute
# tolerance resolves deviations of a few 1e-5 pu (e.g. frequency deviations), while the
# relative one is kept moderate for the discontinuities of the control models (WECC).
IDA_PARAMETERS: List[Tuple[str, str, str]] = [
    ("INT", "order", "2"),
    ("DOUBLE", "initStep", "1e-6"),
    ("DOUBLE", "minStep", "1e-6"),
    ("DOUBLE", "absAccuracy", "1e-6"),
    ("DOUBLE", "relAccuracy", "1e-4"),
]

# Parameter set of each solver in solvers.par
SOLVER_SETS = {"SIM": "Solver", "IDA": "IDA"}


@dataclass
class DynawoParameterFiles:
    """Paths of the parameter files of a case and their use by PyPowSyBl."""

    models: str
    network: str
    solver: str
    solver_id: str = "Solver"
    solver_type: str = "SIM"
    additional_models: Optional[str] = None
    network_id: str = "Network"

    def provider_parameters(self) -> Dict[str, str]:
        """Returns the PyPowSyBl Dynawo provider parameters pointing to these files."""
        parameters = {
            "parametersFile": self.models,
            "network.parametersFile": self.network,
            "network.parametersId": self.network_id,
            "solver.parametersFile": self.solver,
            "solver.parametersId": self.solver_id,
            "solver.type": self.solver_type,
        }
        if self.additional_models:
            parameters["additionalModelsFile"] = self.additional_models
        return parameters


@dataclass(frozen=True)
class DdbParameter:
    """A writable parameter of a model of the Dynawo model database."""

    name: str
    value_type: str
    default: Optional[str]


class DynamicParameterGenerator:
    """
    Handles the creation of Dynawo .par files by merging DDB descriptions
    with the Modelica parameters of the components and the load flow results.
    """

    # ------------------------------------------------------------------ #
    # Model database
    # ------------------------------------------------------------------ #

    @staticmethod
    def read_ddb_parameters(
        dynawo_path: str, lib: str, model_database: Optional[str] = None
    ) -> Tuple[List[DdbParameter], List[str]]:
        """
        Reads the parameters of a model of the Dynawo model database.

        :param dynawo_path: Root of the Dynawo installation.
        :param lib: Name of the model.
        :param model_database: Model database of the case, when its models were compiled
            (defaults to the one of the installation).
        :return: The writable parameters and the names of the read-only ones.
        """
        ddb_path = os.path.join(
            model_database or os.path.join(dynawo_path, "ddb"), f"{lib}.desc.xml"
        )
        if not os.path.exists(ddb_path):
            raise FileNotFoundError(
                f"Model {lib} not found in the Dynawo model database: {ddb_path}"
            )

        writable, read_only = [], []
        for param in ET.parse(ddb_path).getroot().iter(f"{{{DYNAWO_NAMESPACE}}}parameter"):
            if param.get("readOnly") == "false":
                writable.append(
                    DdbParameter(
                        param.get("name"), param.get("valueType"), param.get("defaultValue")
                    )
                )
            else:
                read_only.append(param.get("name"))
        return writable, read_only

    # ------------------------------------------------------------------ #
    # Load flow quantities
    # ------------------------------------------------------------------ #

    @staticmethod
    def load_flow_quantities(network, link: DynamicLink) -> Dict[str, float]:
        """
        Collects the solved load flow quantities of the static element of a link.

        :param network: The simulated network, after the load flow.
        :param link: The dynamic model link.
        :return: The available quantities (see the registry documentation).
        """
        element = link.static_element
        if element in ("line", "transformer"):
            return {}

        if element == "bus":
            # Buses are identified in the bus/breaker view, as in the parsed topology
            buses = network.get_bus_breaker_view_buses()
            if link.static_id not in buses.index:
                return {}
            bus = buses.loc[link.static_id]
            p_mw, q_mvar = 0.0, 0.0
        else:
            getters = {
                "generator": network.get_generators,
                "load": network.get_loads,
                "shunt": network.get_shunt_compensators,
            }
            df = getters[element]()
            if link.static_id not in df.index or not df.at[link.static_id, "bus_id"]:
                return {}
            row = df.loc[link.static_id]
            # Injections are identified in the bus view
            bus = network.get_buses().loc[row["bus_id"]]
            p_mw = 0.0 if pd.isna(row.get("p")) else float(row["p"])
            q_mvar = 0.0 if pd.isna(row.get("q")) else float(row["q"])

        u_nom = float(network.get_voltage_levels().loc[bus["voltage_level_id"], "nominal_v"])
        u_pu = float(bus["v_mag"]) / u_nom
        angle_rad = math.radians(float(bus["v_angle"]))

        u0 = cmath.rect(u_pu, angle_rad)
        s0 = complex(p_mw, q_mvar) / S_REF_MVA
        i0 = (s0 / u0).conjugate() if abs(u0) > 1e-9 else 0j
        return {
            "p_pu": s0.real,
            "q_pu": s0.imag,
            "p_gen_pu": -s0.real,
            "q_gen_pu": -s0.imag,
            "u_pu": u_pu,
            "angle_rad": angle_rad,
            "u_nom_kv": u_nom,
            "u0.re": u0.real,
            "u0.im": u0.imag,
            "s0.re": s0.real,
            "s0.im": s0.imag,
            "i0.re": i0.real,
            "i0.im": i0.imag,
        }

    # ------------------------------------------------------------------ #
    # Parameter values
    # ------------------------------------------------------------------ #

    @staticmethod
    def _modelica_value(parameters: Dict[str, Any], name: str) -> Optional[Any]:
        """
        Returns the Modelica parameter matching a Dynawo parameter name (without prefix),
        mapping the "_re"/"_im" suffixes of complex parameters to their fields.
        """
        if name in parameters:
            return parameters[name]
        match = re.fullmatch(r"(.+)_(re|im)", name)
        if match:
            return parameters.get(f"{match.group(1)}.{match.group(2)}")
        return None

    @staticmethod
    def resolve_parameters(
        link: DynamicLink,
        component: Dict[str, Any],
        quantities: Dict[str, float],
        ddb_parameters: List[DdbParameter],
    ) -> Tuple[List[Tuple[str, str, str]], List[str]]:
        """
        Computes the values of the writable parameters of a Dynawo model.

        :param link: The dynamic model link.
        :param component: The parsed data of the Modelica component.
        :param quantities: The load flow quantities of its static element.
        :param ddb_parameters: The writable parameters of the Dynawo model.
        :return: The (type, name, value) triplets to write, and the names of the
            mandatory parameters for which no value was found.
        """
        dynawo = link.spec.dynawo
        modelica = component.get("parameters", {})
        prefix = f"{dynawo.prefix}_"
        expressions = FlatModel()
        for name, value in modelica.items():
            expressions.bindings[name] = (
                repr(value) if not isinstance(value, bool) else str(value).lower()
            )
            expressions.kinds[name] = "parameter"

        triplets, missing = [], []
        for parameter in ddb_parameters:
            if not parameter.name.startswith(prefix):
                continue
            name = parameter.name[len(prefix) :]

            value: Optional[Any] = None
            if name in dynawo.initial_values and dynawo.initial_values[name] in quantities:
                value = quantities[dynawo.initial_values[name]]
            elif name in dynawo.parameters:
                value = expressions.evaluate(dynawo.parameters[name])
            if value is None:
                value = DynamicParameterGenerator._modelica_value(modelica, name)

            if value is None:
                if parameter.default is None and parameter.value_type in ("DOUBLE", "INT", "BOOL"):
                    missing.append(parameter.name)
                continue

            if name in dynawo.minimum_magnitude and isinstance(value, float):
                minimum = dynawo.minimum_magnitude[name]
                if abs(value) < minimum:
                    logger.warning(
                        f"{link.component}: {parameter.name} = {value:g} raised to {minimum:g} "
                        "to keep the Dynawo solver well conditioned."
                    )
                    value = math.copysign(minimum, value) if value else minimum

            triplets.append(
                (parameter.value_type, parameter.name, _format_value(value, parameter.value_type))
            )
        return triplets, missing

    # ------------------------------------------------------------------ #
    # File generation
    # ------------------------------------------------------------------ #

    @staticmethod
    def generate_parameters(
        setup: DynamicModelSetup,
        parsed_data: Dict[str, Any],
        dynawo_path: str,
        target_dir: str,
        solver_template: Optional[str] = None,
        max_time_step: float = 0.01,
        solver: str = "IDA",
    ) -> DynawoParameterFiles:
        """
        Generates the Dynawo parameter files of a case.

        :param setup: The dynamic model setup returned by link_models.
        :param parsed_data: The parsed topology of the Modelica case.
        :param dynawo_path: Root of the Dynawo installation.
        :param target_dir: Directory where the files are written.
        :param solver_template: Solver parameter file used as template for the SIM solver
            (defaults to the Solver.par of the notebook data).
        :param max_time_step: Maximum time step of the solver in s.
        :param solver: Dynawo solver used by the simulation, "IDA" or "SIM".
        :return: The paths of the generated files.
        """
        if solver not in SOLVER_SETS:
            raise ValueError(
                f"Unknown Dynawo solver {solver}: expected one of {sorted(SOLVER_SETS)}"
            )
        target = Path(target_dir).resolve()
        target.mkdir(parents=True, exist_ok=True)

        # 1. Dynamic models
        sets: List[str] = []
        ddb_cache: Dict[str, List[DdbParameter]] = {}
        for link in setup.links:
            lib = link.lib
            if lib not in ddb_cache:
                ddb_cache[lib] = DynamicParameterGenerator.read_ddb_parameters(
                    dynawo_path, lib, setup.model_database
                )[0]
            component = parsed_data.get(link.category, {}).get(link.component, {})
            quantities = DynamicParameterGenerator.load_flow_quantities(setup.network, link)
            triplets, missing = DynamicParameterGenerator.resolve_parameters(
                link, component, quantities, ddb_cache[lib]
            )
            if missing:
                logger.warning(
                    f"{link.component} ({lib}): no value found for {', '.join(missing)}. "
                    "Dynawo will refuse the simulation until they are provided."
                )
            sets.append(_parameter_set(link.parameter_set_id, triplets))

        models_path = target / "models.par"
        _write_parameter_file(models_path, sets)
        logger.info(f"Dynamic parameters successfully generated at {models_path}")

        # 2. Default network model
        network_path = target / "network.par"
        _write_parameter_file(network_path, [_parameter_set("Network", NETWORK_PARAMETERS)])
        logger.info(f"Network parameters successfully generated at {network_path}")

        # 3. Solver
        solver_path = target / "solvers.par"
        DynamicParameterGenerator._write_solver_parameters(
            Path(solver_template) if solver_template else DEFAULT_SOLVER_TEMPLATE,
            solver_path,
            max_time_step,
        )

        # 4. Models that PyPowSyBl does not ship
        additional_path = DynamicParameterGenerator._write_additional_models(setup, target)

        return DynawoParameterFiles(
            models=str(models_path),
            network=str(network_path),
            solver=str(solver_path),
            solver_id=SOLVER_SETS[solver],
            solver_type=solver,
            additional_models=str(additional_path) if additional_path else None,
        )

    @staticmethod
    def _write_solver_parameters(template: Path, target: Path, max_time_step: float) -> None:
        """
        Writes the parameters of both Dynawo solvers:

        - "Solver" (SIM, fixed step): the template, with the time step bounded. The
          minimal acceptable step must stay below the maximum step, or the solver would
          consider every step as too small.
        - "IDA" (variable step and order): tolerances tight enough for the small
          deviations of electromechanical dynamics. The SIM template skips the Newton
          iterations whenever the residual is below 1e-3, which freezes slow dynamics.
        """
        tree = ET.parse(template)
        ET.register_namespace("", DYNAWO_NAMESPACE)
        root = tree.getroot()
        overrides = {"hMax": max_time_step, "minimalAcceptableStep": min(1e-6, max_time_step / 10)}
        for par in root.iter(f"{{{DYNAWO_NAMESPACE}}}par"):
            if par.get("name") in overrides:
                par.set("value", repr(float(overrides[par.get("name")])))

        ida_set = ET.SubElement(root, f"{{{DYNAWO_NAMESPACE}}}set", id="IDA")
        for value_type, name, value in IDA_PARAMETERS + [
            ("DOUBLE", "maxStep", repr(float(max_time_step)))
        ]:
            ET.SubElement(
                ida_set, f"{{{DYNAWO_NAMESPACE}}}par", type=value_type, name=name, value=value
            )

        ET.indent(tree, space="    ")
        tree.write(target, encoding="UTF-8", xml_declaration=True)
        logger.info(f"Solver parameters (maximum step {max_time_step} s) generated at {target}")

    @staticmethod
    def _write_additional_models(setup: DynamicModelSetup, target: Path) -> Optional[Path]:
        """
        Writes the additionalModelsFile registering the Dynawo models unknown to PyPowSyBl:
        the models of the registry that PyPowSyBl does not ship, and the models compiled
        for the case from another class than the standard one, registered in the category
        of the model they stand for.
        """
        registry = ModelRegistry.load()
        content: Dict[str, Dict[str, List[Dict[str, Any]]]] = {}
        registered = set()
        for link in setup.links:
            dynawo = link.spec.dynawo
            if link.lib in registered or (link.lib == dynawo.lib and not dynawo.additional_model):
                continue
            registered.add(link.lib)
            definition = dict(dynawo.additional_model or {})
            category_key = definition.pop("category_key", None) or registry.category_key(
                dynawo.category
            )
            if category_key is None:
                raise ValueError(
                    f"{link.lib}: the PyPowSyBl category key of {dynawo.category} is unknown "
                    "(categories section of dynamic_models.json)."
                )
            if link.lib != dynawo.lib:
                definition["doc"] = (
                    f"{link.modelica_class} compiled for the case, with the interface of "
                    f"{dynawo.lib}."
                )
            content.setdefault(category_key, {"libs": []})["libs"].append(
                {"lib": link.lib, **definition}
            )
        if not content:
            return None
        path = target / "additional_models.json"
        with open(path, "w", encoding="utf-8") as f:
            json.dump(content, f, indent=4)
        logger.info(f"Additional Dynawo models registered in {path}")
        return path


def _format_value(value: Any, value_type: str) -> str:
    """Formats a parameter value for a Dynawo parameter file."""
    if value_type == "BOOL":
        return "true" if bool(value) else "false"
    if value_type == "INT":
        return str(int(round(float(value))))
    if value_type == "DOUBLE":
        return repr(float(value))
    return str(value)


def _xml_attribute(value: str) -> str:
    """Escapes a value written between double quotes in an XML attribute."""
    return escape(value, {'"': "&quot;"})


def _parameter_set(set_id: str, triplets: List[Tuple[str, str, str]]) -> str:
    """Renders a parameter set of a Dynawo parameter file."""
    lines = [f'    <set id="{_xml_attribute(set_id)}">']
    lines += [
        f'        <par type="{t}" name="{_xml_attribute(n)}" value="{_xml_attribute(v)}"/>'
        for t, n, v in triplets
    ]
    lines.append("    </set>")
    return "\n".join(lines)


def _write_parameter_file(path: Path, sets: List[str]) -> None:
    """Writes a Dynawo parameter file from rendered parameter sets."""
    content = '<?xml version="1.0" encoding="UTF-8"?>\n'
    content += f'<parametersSet xmlns="{DYNAWO_NAMESPACE}">\n'
    content += "\n".join(sets)
    content += "\n</parametersSet>\n"
    with open(path, "w", encoding="utf-8") as f:
        f.write(content)
