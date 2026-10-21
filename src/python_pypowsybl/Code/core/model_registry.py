"""
Dynamic Model Registry Module.

Loads ``dynamic_models.json``, which describes, for every supported Dynawo Modelica
model, how the component enters the load flow and which model of the Dynawo model
database represents it in the dynamic simulation. See the ``_documentation`` section
of the JSON file for the meaning of each field.
"""

import json
import logging
from dataclasses import dataclass, field
from functools import lru_cache
from pathlib import Path
from typing import Any, Dict, Optional

logger = logging.getLogger(__name__)

REGISTRY_FILE = Path(__file__).resolve().parent / "dynamic_models.json"


@dataclass(frozen=True)
class PowerFlowSpec:
    """Load flow behaviour of an injection, expressed with Modelica parameter expressions."""

    p: Optional[str] = None
    q: Optional[str] = None
    convention: str = "receptor"
    u: Optional[str] = None
    angle: Optional[str] = None
    q_min: Optional[str] = None
    q_max: Optional[str] = None
    participation: Optional[str] = None
    slack: bool = False
    voltage_control: bool = True


@dataclass(frozen=True)
class DynawoModelSpec:
    """Dynawo model representing a component in the dynamic simulation."""

    category: str
    lib: str
    prefix: str
    static_element: Optional[str] = None
    initial_values: Dict[str, str] = field(default_factory=dict)
    parameters: Dict[str, str] = field(default_factory=dict)
    additional_model: Optional[Dict[str, Any]] = None
    minimum_magnitude: Dict[str, float] = field(default_factory=dict)

    @property
    def requires_full_dynamic_network(self) -> bool:
        """
        Infinite buses are mapped on buses by PyPowSyBl, which then forbids the default
        Dynawo network model: every element of the grid needs its own dynamic model.
        """
        return self.category == "InfiniteBus"


@dataclass(frozen=True)
class ModelSpec:
    """Registry entry of a Modelica class."""

    modelica_class: str
    element: str
    power_flow: PowerFlowSpec
    dynawo: Optional[DynawoModelSpec]


class ModelRegistry:
    """Read-only access to the registry of supported dynamic models."""

    def __init__(self, models: Dict[str, ModelSpec]) -> None:
        self._models = models

    @classmethod
    @lru_cache(maxsize=1)
    def load(cls, path: Path = REGISTRY_FILE) -> "ModelRegistry":
        """
        Loads the registry from its JSON file (cached).

        :param path: Path of the registry file.
        :return: The registry.
        """
        with open(path, "r", encoding="utf-8") as f:
            content = json.load(f)

        models = {}
        for modelica_class, entry in content.get("models", {}).items():
            dynawo = entry.get("dynawo")
            models[modelica_class] = ModelSpec(
                modelica_class=modelica_class,
                element=entry["element"],
                power_flow=PowerFlowSpec(**entry.get("power_flow", {})),
                dynawo=DynawoModelSpec(**dynawo) if dynawo else None,
            )
        logger.info(f"Loaded {len(models)} dynamic model definitions from {path.name}")
        return cls(models)

    def get(self, modelica_class: str) -> Optional[ModelSpec]:
        """Returns the registry entry of a Modelica class, or None if it is not supported."""
        return self._models.get(modelica_class)

    def __contains__(self, modelica_class: str) -> bool:
        return modelica_class in self._models
