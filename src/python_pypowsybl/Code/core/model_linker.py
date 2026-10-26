"""
Dynamic Model Linker Module (LF Energy Summit 2026).

Maps static IIDM network elements to Modelica dynamic components for Dynawo.
Every Modelica component whose class is in the model registry is mapped to the
corresponding model of the Dynawo model database.

When the case contains an infinite bus, PyPowSyBl maps it on a bus and forbids the
default Dynawo network model: the case is then simulated as a fully dynamic network,
where every bus, line and transformer also gets its own dynamic model (the same
Modelica models as in the OpenModelica case). The generator that stands for the
infinite bus in the load flow is removed from the network given to Dynawo.

When the models of the case have been compiled beforehand (model_compiler module), the
components are linked to the compiled models, and the simulation reads them from the
model database of the case.
"""

import logging
from dataclasses import dataclass, field
from typing import TYPE_CHECKING, Dict, Any, List, Optional

import pandas as pd
import pypowsybl as pp

from python_pypowsybl.Code.core.model_registry import ModelRegistry, ModelSpec

if TYPE_CHECKING:
    from python_pypowsybl.Code.core.model_compiler import CompiledModels

logger = logging.getLogger(__name__)

# Model used for the buses of a fully dynamic network
BUS_MODEL = "Dynawo.Electrical.Buses.Bus"

# Display name of each kind of network element in the linked models registry
DISPLAY_NAMES = {
    "generators": "Generators",
    "loads": "Loads",
    "shunts": "Shunts",
    "lines": "Lines",
    "transformers": "Transformers",
    "buses": "Buses",
}


@dataclass
class DynamicLink:
    """Association between a Modelica component and a Dynawo dynamic model."""

    component: str
    category: str  # Key of the parsed data ("generators", "loads", ...)
    static_id: str  # IIDM element the dynamic model is attached to
    static_element: str  # Kind of the IIDM element ("generator", "load", "bus", ...)
    spec: ModelSpec
    modelica_class: Optional[str] = None  # Modelica class of the component in the case
    lib: str = ""  # Dynawo model: the one of the registry, or the one compiled for the case

    def __post_init__(self) -> None:
        if not self.lib:
            self.lib = self.spec.dynawo.lib

    @property
    def model_id(self) -> str:
        """Identifier of the dynamic model in Dynawo (PyPowSyBl uses the static id)."""
        return self.static_id

    @property
    def parameter_set_id(self) -> str:
        """Identifier of the parameter set of the dynamic model."""
        return self.static_id


@dataclass
class DynamicModelSetup:
    """
    Result of the dynamic model linking.

    :param mapping: PyPowSyBl dynamic model mapping.
    :param registry: Linked models, per kind of element, for display and auditing.
    :param network: Network to simulate (without the stand-ins of the infinite buses).
    :param links: Associations between Modelica components and Dynawo models.
    :param full_dynamic_network: Whether every network element has a dynamic model.
    :param removed_elements: Static elements removed from the simulated network.
    :param compiled_models: Models compiled for the case, if any.
    """

    mapping: pp.dynamic.ModelMapping
    registry: Dict[str, pd.DataFrame]
    network: pp.network.Network
    links: List[DynamicLink] = field(default_factory=list)
    full_dynamic_network: bool = False
    removed_elements: List[str] = field(default_factory=list)
    compiled_models: Optional["CompiledModels"] = None

    @property
    def model_database(self) -> Optional[str]:
        """
        Dynawo model database of the simulation: the one of the case when models were
        compiled for it, or None for the model database of the Dynawo installation.
        """
        return self.compiled_models.model_database if self.compiled_models else None

    def __iter__(self):
        """Allows ``mapping, registry = link_models(...)`` as with former versions."""
        return iter((self.mapping, self.registry))


def copy_network(network: pp.network.Network) -> pp.network.Network:
    """Returns an independent copy of a network, with its load flow results."""
    return pp.network.load_from_binary_buffer(network.save_to_binary_buffer(format="XIIDM"))


@dataclass
class LinkPlan:
    """
    Components of a case simulated with a Dynawo model.

    :param links: Associations between Modelica components and Dynawo models (models of
        the registry).
    :param full_dynamic_network: Whether every network element needs a dynamic model.
    :param unsupported: Components without supported dynamic model.
    """

    links: List[DynamicLink]
    full_dynamic_network: bool
    unsupported: List[str]


def plan_links(parsed_data: Dict[str, Any]) -> LinkPlan:
    """
    Selects the Dynawo model of every component of a case from the model registry. It
    does not need the network, so that the models can be compiled before the linking.

    :param parsed_data: The parsed topology of the Modelica case.
    :return: The components simulated with a Dynawo model.
    :raises ValueError: If the case needs a fully dynamic network but some of its
        components have no supported dynamic model.
    """
    registry = ModelRegistry.load()
    links: List[DynamicLink] = []
    unsupported: List[str] = []

    # 1. Injections (generators, loads, shunts) with a model in the registry
    for category in ("generators", "loads", "shunts"):
        for name, info in parsed_data.get(category, {}).items():
            spec = registry.spec_of(info)
            modelica_class = info.get("modelica_type")
            if spec is None or spec.dynawo is None or not info.get("bus"):
                unsupported.append(f"{name} ({modelica_class})")
                continue
            if spec.dynawo.static_element == "bus":
                links.append(DynamicLink(name, category, info["bus"], "bus", spec, modelica_class))
            else:
                links.append(
                    DynamicLink(name, category, name, category[:-1], spec, modelica_class)
                )

    full_dynamic = any(link.spec.dynawo.requires_full_dynamic_network for link in links)

    # 2. In a fully dynamic network, the passive elements also need a dynamic model
    if full_dynamic:
        buses_with_model = {link.static_id for link in links if link.static_element == "bus"}
        for category in ("lines", "transformers"):
            for name, info in parsed_data.get(category, {}).items():
                spec = registry.spec_of(info)
                modelica_class = info.get("modelica_type")
                if spec is None or spec.dynawo is None:
                    unsupported.append(f"{name} ({modelica_class})")
                    continue
                links.append(
                    DynamicLink(name, category, name, category[:-1], spec, modelica_class)
                )
        bus_spec = registry.get(BUS_MODEL)
        for name, info in parsed_data.get("buses", {}).items():
            if name not in buses_with_model:
                links.append(
                    DynamicLink(name, "buses", name, "bus", bus_spec, info.get("modelica_type"))
                )
        if unsupported:
            raise ValueError(
                "The case needs a fully dynamic network (it contains an infinite bus), but "
                f"these components have no supported dynamic model: {', '.join(unsupported)}"
            )
    return LinkPlan(links, full_dynamic, unsupported)


def link_models(
    network: pp.network.Network,
    parsed_data: Dict[str, Any],
    compiled_models: Optional["CompiledModels"] = None,
) -> DynamicModelSetup:
    """
    Links static network elements with their dynamic Modelica counterparts.
    Uses the exact modelica_type from the parsed data and the model registry to select
    the Dynawo model of each component, and warns about the components left to the
    default Dynawo network model.

    :param network: The network built from the Modelica case, after the load flow.
    :param parsed_data: The parsed topology of the Modelica case.
    :param compiled_models: Models compiled for the case (DynawoModelCompiler.compile_case),
        which replace the models of the Dynawo model database.
    :return: The dynamic model setup of the case.
    """
    plan = plan_links(parsed_data)
    links = plan.links
    full_dynamic = plan.full_dynamic_network
    if plan.unsupported and not full_dynamic:
        logger.warning(
            "Components without supported dynamic model, left to the default Dynawo network "
            f"model: {', '.join(plan.unsupported)}"
        )

    # Models compiled for the case replace the models of the Dynawo model database
    for link in links:
        compiled = compiled_models.model_of(link.component) if compiled_models else None
        if compiled is not None:
            link.lib = compiled.lib
        base_class = (
            parsed_data.get(link.category, {}).get(link.component, {}).get("registry_class")
        )
        if base_class and (compiled is None or compiled.modelica_class != link.modelica_class):
            logger.warning(
                f"{link.component}: the user class {link.modelica_class} is simulated with the "
                f"Dynawo model {link.lib} of its base class {base_class}. Compile the models "
                "of the case (mode 'case') to simulate its own equations."
            )

    # 3. Network to simulate: the generators standing for infinite buses are removed
    removed = [
        link.component
        for link in links
        if link.static_element == "bus" and link.category == "generators"
    ]
    simulated_network = network
    if removed:
        simulated_network = copy_network(network)
        simulated_network.remove_elements(removed)
        logger.info(f"Infinite bus stand-ins removed from the simulated network: {removed}")

    # 4. PyPowSyBl mapping, grouped by dynamic model category
    mapping = pp.dynamic.ModelMapping()
    rows: Dict[str, List[Dict[str, Any]]] = {}
    for link in links:
        rows.setdefault(link.spec.dynawo.category, []).append(
            {
                "static_id": link.static_id,
                "parameter_set_id": link.parameter_set_id,
                "model_name": link.lib,
            }
        )
    for category, category_rows in rows.items():
        df = pd.DataFrame(category_rows).set_index("static_id")
        mapping.add_dynamic_model(category_name=category, df=df)
        logger.info(f"Linked {len(df)} elements to the {category} dynamic models.")

    # 5. Registry of the linked models, for display
    linked_dataframes: Dict[str, pd.DataFrame] = {}
    for category, display_name in DISPLAY_NAMES.items():
        category_links = [link for link in links if link.category == category]
        if not category_links:
            continue
        linked_dataframes[display_name] = pd.DataFrame(
            [
                {
                    "component": link.component,
                    "static_id": link.static_id,
                    "parameter_set_id": link.parameter_set_id,
                    "model_name": link.lib,
                    "category": link.spec.dynawo.category,
                    "original_type": link.modelica_class or link.spec.modelica_class,
                }
                for link in category_links
            ]
        )

    return DynamicModelSetup(
        mapping=mapping,
        registry=linked_dataframes,
        network=simulated_network,
        links=links,
        full_dynamic_network=full_dynamic,
        removed_elements=removed,
        compiled_models=compiled_models,
    )
