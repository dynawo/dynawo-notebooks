"""
Dynawo Modelica Library Compatibility Module.

The example cases of the notebooks are not all written against the same version of
the Dynawo Modelica library: some of them use class paths or connector types that
only exist in the library 1.8, while the PyPowSyBl workflow runs with the Dynawo 1.7
simulator and its library. This module bridges that gap without touching the user's
files:

- Class shims: small Modelica classes, stored in ``modelica_compat/``, that provide
  class paths missing from the loaded library on top of equivalent 1.7 models. They
  are only loaded when the class is really missing.
- Source adapters: textual rewrites applied in memory to the local Modelica files
  before they are handed to OpenModelica, for API changes that cannot be bridged by
  a class (for instance a connector that changed from a record to a plain Real).

Every adaptation is logged, so that it is always visible what was bridged.
"""

import logging
import re
from dataclasses import dataclass, field
from pathlib import Path
from typing import Callable, List, Tuple

logger = logging.getLogger(__name__)

SHIM_DIRECTORY = Path(__file__).resolve().parent / "modelica_compat"


@dataclass(frozen=True)
class ClassShim:
    """A Modelica class provided by this package when the loaded library lacks it."""

    class_name: str
    file_name: str
    required_classes: Tuple[str, ...] = ()


@dataclass(frozen=True)
class SourceAdapter:
    """
    An in-memory rewrite of local Modelica sources.

    :param description: Human readable description, used in the logs.
    :param is_needed: Predicate on the OMC connector telling whether the loaded library
        requires the rewrite.
    :param rewrite: Function returning the rewritten source and the number of changes.
    """

    description: str
    is_needed: Callable[..., bool]
    rewrite: Callable[[str], Tuple[str, int]]


def _connector_type(connector, class_name: str, component_name: str) -> str:
    """Returns the declared type of a component of a library class, or an empty string."""
    try:
        for component in connector.get_components(class_name) or []:
            if isinstance(component, (list, tuple)) and len(component) > 1:
                if str(component[1]) == component_name:
                    return str(component[0])
    except Exception:
        pass
    return ""


def _make_impin_rewrite(block_class: str, block_output: str) -> Callable[[str], Tuple[str, int]]:
    """
    Builds a rewrite that appends ``.value`` to the accesses to a block output.

    In the Dynawo library 1.8, the outputs of blocks such as SetPoint are plain
    RealOutput connectors, accessed as ``block.setPoint``. In the library 1.7 they are
    ImPin connectors, accessed as ``block.setPoint.value``. Only the instances that the
    file declares with the block class are rewritten, and connect statements are left
    untouched, since they connect the connectors themselves in both versions.

    :param block_class: Short name of the block class (e.g. "SetPoint").
    :param block_output: Name of the output connector of the block (e.g. "setPoint").
    """
    declaration = re.compile(rf"\b(?:[\w\.]+\.)?{block_class}\s+([A-Za-z_]\w*)\s*[\(;]")

    def rewrite(source: str) -> Tuple[str, int]:
        instances = set(declaration.findall(source))
        if not instances:
            return source, 0
        names = "|".join(sorted(re.escape(name) for name in instances))
        access = re.compile(rf"\b({names})\.{block_output}\b(?!\s*\.)")

        count = 0
        lines = []
        for line in source.splitlines(keepends=True):
            if "connect(" in line or line.lstrip().startswith("//"):
                lines.append(line)
                continue
            line, changes = access.subn(rf"\1.{block_output}.value", line)
            count += changes
            lines.append(line)
        return "".join(lines), count

    return rewrite


CLASS_SHIMS: List[ClassShim] = [
    ClassShim(
        class_name="Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio",
        file_name="TransformersFixedTap.mo",
        required_classes=("Dynawo.Electrical.Transformers.TransformerFixedRatio",),
    ),
    ClassShim(
        class_name="Dynawo.Electrical.BESS.WECC.BESSCurrentSource",
        file_name="BESSCurrentSource.mo",
        required_classes=("Dynawo.Electrical.BESS.WECC.BESScbCurrentSource",),
    ),
]

SOURCE_ADAPTERS: List[SourceAdapter] = [
    SourceAdapter(
        description=(
            "SetPoint output accessed as a Real (library >= 1.8) adapted to the ImPin "
            "connector of the library 1.7"
        ),
        is_needed=lambda connector: (
            _connector_type(connector, "Dynawo.Electrical.Controls.Basics.SetPoint", "setPoint")
            == "Dynawo.Connectors.ImPin"
        ),
        rewrite=_make_impin_rewrite("SetPoint", "setPoint"),
    ),
    SourceAdapter(
        description=(
            "Step output accessed as a Real (library >= 1.8) adapted to the ImPin "
            "connector of the library 1.7"
        ),
        is_needed=lambda connector: (
            _connector_type(connector, "Dynawo.Electrical.Controls.Basics.Step", "step")
            == "Dynawo.Connectors.ImPin"
        ),
        rewrite=_make_impin_rewrite("Step", "step"),
    ),
]


@dataclass
class DynawoLibraryCompatibility:
    """
    Applies the class shims and source adapters needed by the loaded Dynawo library.

    :param connector: Active OMCConnector on which the Dynawo library is loaded.
    """

    connector: object
    loaded_shims: List[str] = field(default_factory=list)
    active_adapters: List[SourceAdapter] = field(default_factory=list)

    def install(self) -> None:
        """Loads the missing class shims and selects the source adapters to apply."""
        for shim in CLASS_SHIMS:
            if self.connector.is_class(shim.class_name):
                continue
            if not all(self.connector.is_class(name) for name in shim.required_classes):
                logger.debug(f"Shim {shim.class_name} skipped: its base classes are missing.")
                continue
            shim_path = SHIM_DIRECTORY / shim.file_name
            if self.connector.load_file(str(shim_path)):
                self.loaded_shims.append(shim.class_name)
                logger.info(f"Compatibility shim loaded for missing class {shim.class_name}.")
            else:
                logger.error(f"Failed to load the compatibility shim {shim_path}.")

        self.active_adapters = [
            adapter for adapter in SOURCE_ADAPTERS if adapter.is_needed(self.connector)
        ]
        for adapter in self.active_adapters:
            logger.info(f"Compatibility source adapter enabled: {adapter.description}.")

    def adapt_source(self, source: str, file_name: str = "") -> str:
        """
        Applies the enabled source adapters to the text of a local Modelica file.

        :param source: Modelica source code.
        :param file_name: Name of the file, only used in the logs.
        :return: The adapted source code.
        """
        for adapter in self.active_adapters:
            source, changes = adapter.rewrite(source)
            if changes:
                logger.info(f"{file_name}: {changes} statement(s) adapted ({adapter.description}).")
        return source
