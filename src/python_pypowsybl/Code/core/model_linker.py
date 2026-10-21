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
"""

import logging
from dataclasses import dataclass, field
from typing import Dict, Any, List

import pandas as pd
import pypowsybl as pp

from python_pypowsybl.Code.core.model_registry import ModelRegistry, ModelSpec

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
    """

    mapping: pp.dynamic.ModelMapping
    registry: Dict[str, pd.DataFrame]
    network: pp.network.Network
    links: List[DynamicLink] = field(default_factory=list)
    full_dynamic_network: bool = False
    removed_elements: List[str] = field(default_factory=list)

    def __iter__(self):
        """Allows ``mapping, registry = link_models(...)`` as with former versions."""
        return iter((self.mapping, self.registry))


def copy_network(network: pp.network.Network) -> pp.network.Network:
    """Returns an independent copy of a network, with its load flow results."""
    return pp.network.load_from_binary_buffer(network.save_to_binary_buffer(format="XIIDM"))


def link_models(network: pp.network.Network, parsed_data: Dict[str, Any]) -> DynamicModelSetup:
    """
    Links static network elements with their dynamic Modelica counterparts.
    Uses the exact modelica_type from the parsed data and the model registry to select
    the Dynawo model of each component, and warns about the components left to the
    default Dynawo network model.

    :param network: The network built from the Modelica case, after the load flow.
    :param parsed_data: The parsed topology of the Modelica case.
    :return: The dynamic model setup of the case.
    """
    registry = ModelRegistry.load()
    links: List[DynamicLink] = []
    unsupported: List[str] = []

    # 1. Injections (generators, loads, shunts) with a model in the registry
    for category in ("generators", "loads", "shunts"):
        for name, info in parsed_data.get(category, {}).items():
            spec = registry.get(info.get("modelica_type", ""))
            if spec is None or spec.dynawo is None or not info.get("bus"):
                unsupported.append(f"{name} ({info.get('modelica_type')})")
                continue
            if spec.dynawo.static_element == "bus":
                links.append(DynamicLink(name, category, info["bus"], "bus", spec))
            else:
                links.append(DynamicLink(name, category, name, category[:-1], spec))

    full_dynamic = any(link.spec.dynawo.requires_full_dynamic_network for link in links)

    # 2. In a fully dynamic network, the passive elements also need a dynamic model
    if full_dynamic:
        buses_with_model = {link.static_id for link in links if link.static_element == "bus"}
        for category in ("lines", "transformers"):
            for name, info in parsed_data.get(category, {}).items():
                spec = registry.get(info.get("modelica_type", ""))
                if spec is None or spec.dynawo is None:
                    unsupported.append(f"{name} ({info.get('modelica_type')})")
                    continue
                links.append(DynamicLink(name, category, name, category[:-1], spec))
        bus_spec = registry.get(BUS_MODEL)
        for name in parsed_data.get("buses", {}):
            if name not in buses_with_model:
                links.append(DynamicLink(name, "buses", name, "bus", bus_spec))
        if unsupported:
            raise ValueError(
                "The case needs a fully dynamic network (it contains an infinite bus), but "
                f"these components have no supported dynamic model: {', '.join(unsupported)}"
            )
    elif unsupported:
        logger.warning(
            "Components without supported dynamic model, left to the default Dynawo network "
            f"model: {', '.join(unsupported)}"
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
                "model_name": link.spec.dynawo.lib,
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
                    "model_name": link.spec.dynawo.lib,
                    "category": link.spec.dynawo.category,
                    "original_type": link.spec.modelica_class,
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
    )
