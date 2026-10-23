"""
Dynawo Model Compilation Module.

By default, the dynamic simulation uses the models precompiled in the model database of
the Dynawo installation (ddb). This module compiles the Dynawo models of a case instead,
before the dynamic linking, with the model generator of the Dynawo distribution
(``dynawo.sh jobs --generate-preassembled``):

- "library" mode: every Dynawo model used by the case is compiled from its standard
  definition in the Dynawo Modelica library, the one its model database was built from.
- "case" mode: every model is compiled from the Modelica class the case actually uses,
  including the user's own classes (defined in the files of the case) and the classes
  provided by the compatibility layer. A component whose class is the standard one of
  its Dynawo model keeps the standard model; any other class is compiled into a model of
  its own, registered in PyPowSyBl as an additional model of the same category.

Every model is compiled following the Dynawo compilation guide:

1. The models compiled with another Dynawo version or distribution are removed
   (``dynawo.version``), since they are not binary compatible.
2. An architecture file describes the model: a preassembled model made of a single unit
   dynamic model and, if any, its initialization model (as the models of the database).
   A class defined outside the Dynawo library is compiled through a top-level wrapper
   class, with its external variables file.
3. The model generator compiles the library (``<lib>.so``) and its external variables
   (``<lib>.extvar``).
4. The description of the model (``<lib>.desc.xml``) is dumped from the library, which also
   checks that Dynawo can instantiate it.

The compiled models are gathered with the standard ones in a model database of the case:
symbolic links to the model database of the installation, where the compiled models
replace the standard models of the same name. Dynawo reads it through DYNAWO_DDB_DIR, both
in the PyPowSyBl run and in the command line replay: PyPowSyBl does not let the user add
model directories to the jobs file, and Dynawo refuses two libraries with the same name.

The C++ code generated from the Modelica models is compiled with the C++ compiler of the
system against the headers and libraries of the Dynawo distribution. The toolchain applies
the adaptations a recent Linux system requires and refuses the combinations that would
produce libraries incompatible with Dynawo (see DynawoToolchain).
"""

import hashlib
import json
import logging
import os
import re
import shlex
import shutil
import subprocess
import time
from concurrent.futures import ThreadPoolExecutor
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any, Dict, Iterable, List, Optional, Sequence
from xml.sax.saxutils import quoteattr

import pandas as pd

from python_pypowsybl.Code.core.compatibility import CLASS_SHIMS, SHIM_DIRECTORY
from python_pypowsybl.Code.core.model_linker import DynamicLink, plan_links

logger = logging.getLogger(__name__)

COMPILATION_MODES = ("library", "case")

VERSION_FILE = "dynawo.version"
MANIFEST_FILE = "compiled_models.json"
MODEL_DATABASE_DIRECTORY = "model_database"

# Name suffix of the top-level wrapper classes of the models compiled from other classes
# than the standard ones, and name prefix of the Modelica files written for them
WRAPPER_SUFFIX = "Model"
STAGED_FILE_PREFIX = "DynawoNotebooks_"

# Files of a compiled model, next to each other as in the Dynawo model database
MODEL_FILE_SUFFIXES = (".so", ".desc.xml", ".extvar")

# Tools of a Dynawo distribution able to compile models ("full" distributions)
REQUIRED_TOOLS = (
    "dynawo.sh",
    "sbin/generate-preassembled",
    "sbin/dumpModel",
    "sbin/compileCppModelicaModelInDynamicLib.cmake",
    "OpenModelica/bin/omcDynawo",
    "include",
)

# Boost releases before 1.77 do not build against glibc >= 2.34, where PTHREAD_STACK_MIN
# is no longer a compile-time constant
FIRST_BOOST_WITH_DYNAMIC_STACK_SIZE = 107700


class ModelCompilationError(RuntimeError):
    """Raised when a Dynawo model cannot be compiled."""


class ToolchainError(ModelCompilationError):
    """Raised when the Dynawo distribution or the C++ compiler cannot compile models."""


# ---------------------------------------------------------------------- #
# Toolchain
# ---------------------------------------------------------------------- #


def _clean_environment() -> Dict[str, str]:
    """Returns the environment of the process without the Dynawo library path."""
    environment = dict(os.environ)
    environment.pop("LD_LIBRARY_PATH", None)
    return environment


def _major(version: Optional[str]) -> Optional[int]:
    """Returns the major number of a version string, or None."""
    match = re.match(r"\s*(\d+)", version or "")
    return int(match.group(1)) if match else None


@dataclass
class DynawoToolchain:
    """
    Tools used to compile Dynawo models: the launcher and the model generator of a Dynawo
    distribution, and the C++ compiler of the system.

    The model generator compiles the C++ code of the models with the compiler given by
    CXX, which the toolchain sets to a wrapper of the system compiler:

    - The Dynawo launcher puts the libraries of the distribution first in LD_LIBRARY_PATH,
      which replaces system libraries needed by the compiler tools (for instance zlib for
      the assembler). The wrapper runs the compiler without them, and the linker finds the
      dependencies of the Dynawo libraries through rpath-link.
    - The C++ standard library ABI of the compiled code (_GLIBCXX_USE_CXX11_ABI) is the one
      of the Dynawo libraries.
    - Boost releases older than 1.77 receive the constant PTHREAD_STACK_MIN that glibc
      >= 2.34 no longer provides.
    - When the distribution ships its Boost libraries, CMake is kept from using the Boost
      configuration of the system, which may be another version.

    Dynawo distributions built with GCC 4 cannot be used with a recent compiler: the C++11
    support of GCC 4 was experimental, and the layout of some standard containers of the
    Dynawo headers (std::unordered_map) differs from the one of GCC >= 5, so that the
    compiled models crash when Dynawo instantiates them.

    :param dynawo_path: Root of the Dynawo installation.
    :param compiler: C++ compiler command.
    :param compiler_version: Version of the C++ compiler.
    :param dynawo_compiler: Compiler the Dynawo distribution was built with (e.g. "gcc 11").
    :param cxx11_abi: Whether the Dynawo libraries use the C++11 ABI of the standard library.
    :param flags: Additional flags given to the compiler.
    :param shipped_boost: Whether the distribution ships its Boost libraries.
    """

    dynawo_path: Path
    compiler: List[str]
    compiler_version: str
    dynawo_compiler: str
    cxx11_abi: bool
    flags: List[str] = field(default_factory=list)
    shipped_boost: bool = False

    @property
    def launcher(self) -> Path:
        """Dynawo launcher of the distribution."""
        return self.dynawo_path / "dynawo.sh"

    @classmethod
    def detect(cls, dynawo_path: str, compiler: Optional[str] = None) -> "DynawoToolchain":
        """
        Detects the compilation toolchain of a Dynawo installation and checks it.

        :param dynawo_path: Root of the Dynawo installation.
        :param compiler: C++ compiler command (defaults to $CXX, or g++).
        :return: The toolchain.
        :raises ToolchainError: If the installation or the compiler cannot compile models.
        """
        root = Path(dynawo_path).resolve()
        missing = [tool for tool in REQUIRED_TOOLS if not (root / tool).exists()]
        if missing:
            raise ToolchainError(
                f"The Dynawo distribution at {root} cannot compile models (missing "
                f"{', '.join(missing)}): use a full distribution, with headers and on-the-fly "
                "model compilation."
            )
        if shutil.which("cmake") is None:
            raise ToolchainError("CMake is required to compile Dynawo models but was not found.")

        command = shlex.split(compiler or os.environ.get("CXX", "")) or ["g++"]
        executable = shutil.which(command[0])
        if executable is None:
            raise ToolchainError(f"C++ compiler not found: {command[0]}")
        command[0] = executable
        identification = subprocess.run(
            command + ["--version"], capture_output=True, text=True, env=_clean_environment()
        ).stdout
        compiler_version = subprocess.run(
            command + ["-dumpfullversion", "-dumpversion"],
            capture_output=True,
            text=True,
            env=_clean_environment(),
        ).stdout.strip()
        is_gcc = "clang" not in identification.lower()

        # Compiler and C++ ABI of the Dynawo distribution
        build = _read_build_environment(root / "dynawoEnv.txt")
        dynawo_compiler_name = build.get("DYNAWO_COMPILER_NAME", "gcc").lower()
        dynawo_compiler_version = build.get("DYNAWO_COMPILER_VERSION", "")
        common_libraries = sorted((root / "lib").glob("libdynawo_Common.so*"))
        if not common_libraries:
            raise ToolchainError(f"Dynawo libraries not found in {root / 'lib'}.")
        cxx11_abi = b"__cxx11" in common_libraries[0].read_bytes()

        dynawo_major, compiler_major = _major(dynawo_compiler_version), _major(compiler_version)
        if (
            dynawo_compiler_name == "gcc"
            and dynawo_major is not None
            and dynawo_major < 5
            and is_gcc
            and compiler_major is not None
            and compiler_major >= 5
        ):
            raise ToolchainError(
                f"The Dynawo distribution at {root} was built with GCC "
                f"{dynawo_compiler_version}, whose C++11 support was experimental: the layout "
                "of some standard containers of its headers (std::unordered_map) differs from "
                f"the one of GCC {compiler_version}, and the models compiled with it would "
                "crash when Dynawo loads them. Use a Dynawo distribution built with a recent "
                "compiler (for instance Dynawo_Linux_gcc11_v1.7.0.zip of the Dynawo releases) "
                "for the compilation and the simulations, or a GCC 4 compiler (compiler "
                "argument or CXX)."
            )

        flags = [f"-D_GLIBCXX_USE_CXX11_ABI={1 if cxx11_abi else 0}"]
        stack_size = _pthread_stack_min_workaround(root)
        if stack_size is not None:
            flags.append(f"-DPTHREAD_STACK_MIN={stack_size}")
        flags.append(f"-Wl,-rpath-link,{root / 'lib'}")

        toolchain = cls(
            dynawo_path=root,
            compiler=command,
            compiler_version=compiler_version,
            dynawo_compiler=f"{dynawo_compiler_name} {dynawo_compiler_version}".strip(),
            cxx11_abi=cxx11_abi,
            flags=flags,
            shipped_boost=any((root / "lib").glob("libboost_system*"))
            and not any((root / "lib" / "cmake").glob("Boost-*")),
        )
        logger.info(f"Model compilation toolchain: {toolchain.description}")
        return toolchain

    @property
    def description(self) -> str:
        """Human readable description of the toolchain."""
        return (
            f"{' '.join(self.compiler)} {self.compiler_version} {' '.join(self.flags)} "
            f"(Dynawo built with {self.dynawo_compiler or 'an unknown compiler'})"
        )

    def dynawo_version(self) -> str:
        """Returns the version printed by the Dynawo launcher."""
        process = subprocess.run(
            [str(self.launcher), "version"], capture_output=True, text=True, check=False
        )
        version = process.stdout.strip().splitlines()
        if process.returncode != 0 or not version:
            raise ToolchainError(f"Could not read the Dynawo version: {process.stderr.strip()}")
        return version[-1]

    def environment(self, directory: Path) -> Dict[str, str]:
        """
        Writes the compiler wrapper (and the Boost configuration shim) to a directory and
        returns the environment of the model generator.

        :param directory: Directory of the toolchain files.
        :return: The environment variables of the compilation processes.
        """
        directory.mkdir(parents=True, exist_ok=True)
        wrapper = directory / "cxx"
        wrapper.write_text(
            "#!/bin/sh\n"
            "# C++ compiler of the Dynawo model generator, written by dynawo-notebooks.\n"
            "# The compiler tools run without the libraries of the Dynawo distribution.\n"
            "unset LD_LIBRARY_PATH\n"
            f'exec {" ".join(shlex.quote(part) for part in self.compiler + self.flags)} "$@"\n',
            encoding="utf-8",
        )
        wrapper.chmod(0o755)

        environment = dict(os.environ)
        environment["CXX"] = str(wrapper)
        if self.shipped_boost:
            # A declined configuration package makes FindBoost search the Boost of the
            # distribution (BOOST_ROOT) instead of the configuration of the system
            boost = directory / "boost"
            boost.mkdir(exist_ok=True)
            (boost / "BoostConfig.cmake").write_text(
                "# Declines the Boost configuration package: FindBoost then searches the Boost\n"
                "# libraries of the Dynawo distribution (BOOST_ROOT).\n"
                "set(Boost_FOUND FALSE)\n",
                encoding="utf-8",
            )
            (boost / "BoostConfigVersion.cmake").write_text(
                'set(PACKAGE_VERSION "0")\nset(PACKAGE_VERSION_COMPATIBLE TRUE)\n',
                encoding="utf-8",
            )
            environment["Boost_DIR"] = str(boost)
        return environment


def _read_build_environment(path: Path) -> Dict[str, str]:
    """Reads the build variables of a Dynawo distribution (dynawoEnv.txt)."""
    variables: Dict[str, str] = {}
    if path.exists():
        for line in path.read_text(encoding="utf-8", errors="ignore").splitlines():
            match = re.match(r'^(\w+)="?(.*?)"?$', line.strip())
            if match:
                variables[match.group(1)] = match.group(2)
    return variables


def _pthread_stack_min_workaround(root: Path) -> Optional[int]:
    """
    Returns the value of PTHREAD_STACK_MIN to define when the Boost headers of the Dynawo
    distribution predate glibc 2.34 and the system glibc defines it dynamically, or None.
    """
    version_header = root / "include" / "boost" / "version.hpp"
    if not version_header.exists():
        return None
    match = re.search(r"#define\s+BOOST_VERSION\s+(\d+)", version_header.read_text())
    if not match or int(match.group(1)) >= FIRST_BOOST_WITH_DYNAMIC_STACK_SIZE:
        return None
    for bits in (Path("/usr/include/bits"), *Path("/usr/include").glob("*/bits")):
        if (bits / "pthread_stack_min-dynamic.h").exists():
            constant = bits / "pthread_stack_min.h"
            value = re.search(
                r"#\s*define\s+PTHREAD_STACK_MIN\s+(\d+)",
                constant.read_text() if constant.exists() else "",
            )
            return int(value.group(1)) if value else 16384
    return None


# ---------------------------------------------------------------------- #
# Models
# ---------------------------------------------------------------------- #


@dataclass(frozen=True)
class ModelDefinition:
    """
    A Dynawo model to compile: a preassembled model made of a single unit dynamic model,
    like the models of the Dynawo model database.

    :param lib: Name of the Dynawo model (id of the modelicaModel) and of its library.
    :param prefix: Prefix of its parameters and variables (id of the unit dynamic model).
    :param modelica_class: Modelica class of the model.
    :param init_class: Initialization model, if any.
    :param base_lib: Dynawo model of the model database it stands for.
    :param base_class: Modelica class of that standard model.
    :param unit_class: Class given to the model generator, when it is not the Modelica
        class itself (top-level wrapper of a class defined outside the Dynawo library).
    """

    lib: str
    prefix: str
    modelica_class: str
    init_class: Optional[str] = None
    base_lib: str = ""
    base_class: str = ""
    unit_class: Optional[str] = None

    def architecture(self) -> str:
        """Returns the architecture file (model list) of the model."""
        init = f" initName={quoteattr(self.init_class)}" if self.init_class else ""
        return (
            "<?xml version='1.0' encoding='UTF-8'?>\n"
            '<dyn:dynamicModelsArchitecture xmlns:dyn="http://www.rte-france.com/dynawo">\n'
            f"  <dyn:modelicaModel id={quoteattr(self.lib)}>\n"
            f"    <dyn:unitDynamicModel id={quoteattr(self.prefix)} "
            f"name={quoteattr(self.unit_class or self.modelica_class)}{init}/>\n"
            "  </dyn:modelicaModel>\n"
            "</dyn:dynamicModelsArchitecture>\n"
        )


@dataclass
class CompiledModel:
    """
    A Dynawo model compiled for a case.

    :param lib: Name of the Dynawo model.
    :param modelica_class: Modelica class it was compiled from.
    :param init_class: Initialization model compiled with it, if any.
    :param prefix: Prefix of its parameters and variables.
    :param base_lib: Dynawo model of the model database it stands for.
    :param library: Path of the compiled library.
    :param reused: Whether an up-to-date library of a former compilation was reused.
    :param duration: Compilation time in s.
    """

    lib: str
    modelica_class: str
    init_class: Optional[str]
    prefix: str
    base_lib: str
    library: str
    reused: bool = False
    duration: float = 0.0

    @property
    def is_variant(self) -> bool:
        """Whether the model is compiled from another class than the standard model."""
        return self.lib != self.base_lib


@dataclass
class CompiledModels:
    """
    The Dynawo models compiled for a case.

    :param mode: Compilation mode ("library" or "case").
    :param directory: Directory of the compiled models.
    :param model_database: Model database of the case (DYNAWO_DDB_DIR of the simulations).
    :param dynawo_path: Root of the Dynawo installation that compiled them.
    :param dynawo_version: Version of that installation.
    :param models: Compiled models, by name.
    :param component_libs: Compiled model of each Modelica component.
    """

    mode: str
    directory: str
    model_database: str
    dynawo_path: str
    dynawo_version: str
    models: Dict[str, CompiledModel]
    component_libs: Dict[str, str]

    def model_of(self, component: str) -> Optional[CompiledModel]:
        """Returns the model compiled for a Modelica component, if any."""
        lib = self.component_libs.get(component)
        return self.models.get(lib) if lib else None

    def lib_of(self, component: str) -> Optional[str]:
        """Returns the name of the model compiled for a Modelica component, if any."""
        model = self.model_of(component)
        return model.lib if model else None

    def to_dataframe(self) -> pd.DataFrame:
        """Returns a table of the compiled models."""
        components: Dict[str, int] = {}
        for lib in self.component_libs.values():
            components[lib] = components.get(lib, 0) + 1
        return pd.DataFrame(
            [
                {
                    "model_name": model.lib,
                    "modelica_class": model.modelica_class,
                    "init_model": model.init_class or "",
                    # Model of the database replaced by the compiled model, or that a model
                    # compiled from another class stands for
                    "ddb_model": model.base_lib,
                    "components": components.get(model.lib, 0),
                    "status": "reused" if model.reused else f"compiled in {model.duration:.0f} s",
                }
                for model in self.models.values()
            ]
        )

    def summary(self) -> str:
        """Human readable summary of the compilation."""
        compiled = sum(not model.reused for model in self.models.values())
        return (
            f"{len(self.models)} Dynawo models for the case (mode '{self.mode}', Dynawo "
            f"{self.dynawo_version}): {compiled} compiled, {len(self.models) - compiled} "
            f"reused from a former compilation.\n"
            f"Compiled models: {self.directory}\n"
            f"Model database of the simulations: {self.model_database}"
        )


def _variant_lib(modelica_class: str) -> str:
    """
    Name of the model compiled from a class that is not the standard one of its Dynawo
    model: its qualified name, which cannot collide with the models of the database.
    """
    return re.sub(r"\W", "_", modelica_class)


def _digest(*parts: str) -> str:
    """Returns a short SHA-256 digest of text parts."""
    digest = hashlib.sha256()
    for part in parts:
        digest.update(part.encode("utf-8"))
        digest.update(b"\0")
    return digest.hexdigest()[:16]


def _failure_message(output: str) -> str:
    """Returns the most meaningful line of a failed compilation output."""
    lines = output.splitlines()
    for pattern in (r"\berror:", r"CMake Error", r"Error:|failed"):
        matches = [line.strip() for line in lines if re.search(pattern, line)]
        if matches:
            return matches[0]
    return lines[-1].strip() if lines else "no output"


def _check_launcher_arguments(arguments: Iterable[str]) -> None:
    """The Dynawo launcher splits its arguments on whitespace: paths must not contain any."""
    for argument in arguments:
        if re.search(r"\s", argument):
            raise ModelCompilationError(
                f"The Dynawo launcher does not support paths with whitespace: {argument}"
            )


def _link_or_copy(target: Path, link: Path) -> None:
    """Creates a symbolic link, or a copy where symbolic links are not available."""
    try:
        link.symlink_to(target, target_is_directory=target.is_dir())
    except OSError:
        if target.is_dir():
            shutil.copytree(target, link)
        else:
            shutil.copy2(target, link)


# ---------------------------------------------------------------------- #
# Compiler
# ---------------------------------------------------------------------- #


class DynawoModelCompiler:
    """
    Compiles Dynawo models with the model generator of a Dynawo distribution.

    The compiled models must be simulated with the same Dynawo installation: it has to be
    the one of the PyPowSyBl configuration (homeDir of the dynawo section of config.yml).

    :param dynawo_path: Root of the Dynawo installation.
    :param output_dir: Directory of the compiled models (e.g. <export>/compiled_models).
    :param compiler: C++ compiler command (defaults to $CXX, or g++).
    :param jobs: Number of models compiled in parallel (defaults to half the processors).
    """

    def __init__(
        self,
        dynawo_path: str,
        output_dir: str,
        compiler: Optional[str] = None,
        jobs: Optional[int] = None,
    ) -> None:
        self.dynawo_path = Path(dynawo_path).resolve()
        self.output_dir = Path(output_dir).resolve()
        self.compiler = compiler
        self.jobs = jobs or max(1, (os.cpu_count() or 2) // 2)
        self._toolchain: Optional[DynawoToolchain] = None
        self._dynawo_version: Optional[str] = None

    @property
    def toolchain(self) -> DynawoToolchain:
        """Compilation toolchain, detected and checked on first use."""
        if self._toolchain is None:
            self._toolchain = DynawoToolchain.detect(str(self.dynawo_path), self.compiler)
        return self._toolchain

    # ------------------------------------------------------------------ #
    # Case compilation
    # ------------------------------------------------------------------ #

    def compile_case(
        self,
        parsed_data: Dict[str, Any],
        mode: str = "case",
        connector: Any = None,
        source_dir: Optional[str] = None,
        local_files: Sequence[str] = (),
        force: bool = False,
    ) -> CompiledModels:
        """
        Compiles the Dynawo models of a case before the dynamic linking: the models of the
        components that link_models simulates with a Dynawo model.

        :param parsed_data: Parsed topology of the case.
        :param mode: "library" (the Dynawo models of the case, compiled from their standard
            definition in the Dynawo Modelica library) or "case" (the Modelica classes of
            the case, user classes included).
        :param connector: OMC connector on which the case is loaded, which locates the
            classes defined outside the Dynawo library (mode "case").
        :param source_dir: Directory of the Modelica files of the case (mode "case").
        :param local_files: Modelica files of the case (mode "case").
        :param force: Whether to compile the models again even if they are up to date.
        :return: The compiled models, to give to link_models.
        """
        if mode not in COMPILATION_MODES:
            raise ValueError(
                f"Unknown compilation mode {mode}: expected one of {COMPILATION_MODES}"
            )
        # Models of another Dynawo installation are removed before the sources are written
        version = self._check_version()

        definitions: Dict[str, ModelDefinition] = {}
        component_libs: Dict[str, str] = {}
        for link in plan_links(parsed_data).links:
            definition = self._definition(link, mode)
            known = definitions.setdefault(definition.lib, definition)
            if known != definition:
                raise ModelCompilationError(
                    f"{known.modelica_class} and {definition.modelica_class} would both be "
                    f"compiled as the Dynawo model {definition.lib}."
                )
            component_libs[link.component] = definition.lib

        modelica_dirs = self._prepare_sources(
            definitions.values(), connector, source_dir, local_files
        )

        logger.info(
            f"Compiling {len(definitions)} Dynawo models for the case (mode '{mode}'): "
            f"{', '.join(sorted(definitions))}"
        )
        models = self.compile_models(list(definitions.values()), modelica_dirs, force)
        database = self._build_model_database(models.values())
        return CompiledModels(
            mode=mode,
            directory=str(self.output_dir),
            model_database=str(database),
            dynawo_path=str(self.dynawo_path),
            dynawo_version=version,
            models=models,
            component_libs=component_libs,
        )

    @staticmethod
    def _definition(link: DynamicLink, mode: str) -> ModelDefinition:
        """Returns the definition of the Dynawo model to compile for a linked component."""
        dynawo = link.spec.dynawo
        standard = ModelDefinition(
            lib=dynawo.lib,
            prefix=dynawo.prefix,
            modelica_class=link.spec.standard_class,
            init_class=dynawo.init_model,
            base_lib=dynawo.lib,
            base_class=link.spec.standard_class,
        )
        if mode == "library" or not link.modelica_class:
            return standard
        if link.modelica_class == standard.modelica_class:
            return standard
        # Another class than the standard one (user class or compatibility class): compiled
        # into a model of its own, with the initialization model of the standard model
        lib = _variant_lib(link.modelica_class)
        return ModelDefinition(
            lib=lib,
            prefix=dynawo.prefix,
            modelica_class=link.modelica_class,
            init_class=dynawo.init_model,
            base_lib=dynawo.lib,
            base_class=standard.modelica_class,
            unit_class=f"{lib}{WRAPPER_SUFFIX}",
        )

    def _prepare_sources(
        self,
        definitions: Iterable[ModelDefinition],
        connector: Any,
        source_dir: Optional[str],
        local_files: Sequence[str],
    ) -> List[Path]:
        """
        Writes the Modelica sources that the model generator needs beyond the Dynawo
        library, and returns the Modelica model directories of the compilation.

        A model compiled from another class than the standard one goes through a top-level
        wrapper class extending it, next to which its external variables file is written:
        Dynawo looks the external variables of a model up from the location of its file in
        a package tree, which the classes of the case and of the compatibility layer do not
        follow. They are read from a <Class>.extvar file next to the Modelica file of the
        class (as for the models of the Dynawo library), or else from the standard model,
        whose interface the class extends.

        The files of the case and of the compatibility layer are copied as OpenModelica
        loaded them (adapted by the compatibility layer), under names that Dynawo sorts
        after the Dynawo package, which it loads first.

        :return: The Modelica model directories of the compilation.
        """
        variants = [definition for definition in definitions if definition.unit_class]
        staging = self.output_dir / "modelica"
        if staging.exists():
            shutil.rmtree(staging)
        if not variants:
            return []
        staging.mkdir(parents=True)

        library = Path(
            getattr(connector, "dynawo_library", None) or self.dynawo_path / "ddb" / "Dynawo"
        )
        shim_files = set()
        needs_case_files = False
        for definition in variants:
            source = connector.get_source_file(definition.modelica_class) if connector else None
            if not source:
                raise ModelCompilationError(
                    f"The source of {definition.modelica_class} is unknown: give the OMC "
                    "connector of the case to compile its classes."
                )
            source_path = Path(source).resolve()
            if source_path.parent == SHIM_DIRECTORY:
                shim_files.add(source_path)
            elif not source_path.is_relative_to(library.resolve()):
                needs_case_files = True

            wrapper = definition.unit_class
            (staging / f"{wrapper}.mo").write_text(
                f'model {wrapper} "{definition.modelica_class}, compiled by dynawo-notebooks '
                f'as the Dynawo model {definition.lib}"\n'
                f"  extends {definition.modelica_class};\n"
                f"end {wrapper};\n",
                encoding="utf-8",
            )
            external_variables = self._external_variables_file(
                definition, source_path, library, source_dir
            )
            if external_variables is None:
                logger.warning(
                    f"{definition.lib}: no external variables file found, the model will not "
                    "be connected to the network."
                )
            else:
                shutil.copy2(external_variables, staging / f"{wrapper}.extvar")

        if needs_case_files:
            if source_dir is None or not local_files:
                raise ModelCompilationError(
                    "The case defines some of its classes: give its source directory and its "
                    "Modelica files to compile them."
                )
            compatibility = getattr(connector, "compatibility", None)
            # The files of the case may use the classes of the compatibility layer
            if compatibility is not None:
                loaded = set(compatibility.loaded_shims)
                shim_files.update(
                    SHIM_DIRECTORY / shim.file_name
                    for shim in CLASS_SHIMS
                    if shim.class_name in loaded
                )
            for index, file_name in enumerate(local_files):
                source = (Path(source_dir) / file_name).read_text(encoding="utf-8")
                if compatibility is not None:
                    source = compatibility.adapt_source(source, file_name)
                target = staging / f"{STAGED_FILE_PREFIX}{index:02d}_{Path(file_name).name}"
                target.write_text(source, encoding="utf-8")
        for shim_file in sorted(shim_files):
            shutil.copy2(shim_file, staging / f"{STAGED_FILE_PREFIX}compat_{shim_file.name}")
        logger.info(f"Modelica sources of the classes of the case written to {staging}")
        return [staging]

    @staticmethod
    def _external_variables_file(
        definition: ModelDefinition,
        source_path: Path,
        library: Path,
        source_dir: Optional[str],
    ) -> Optional[Path]:
        """
        Returns the external variables file of a class compiled into a model of its own:
        the <Class>.extvar file next to its Modelica file or in the source directory of the
        case, or else the one of the standard model it stands for.
        """
        short_name = definition.modelica_class.rsplit(".", 1)[-1]
        candidates = [source_path.with_name(f"{short_name}.extvar")]
        if source_dir:
            candidates.append(Path(source_dir) / f"{short_name}.extvar")
        candidates.append(library.parent / f"{definition.base_class.replace('.', '/')}.extvar")
        return next((candidate for candidate in candidates if candidate.exists()), None)

    # ------------------------------------------------------------------ #
    # Model compilation
    # ------------------------------------------------------------------ #

    def compile_models(
        self,
        definitions: Sequence[ModelDefinition],
        modelica_dirs: Sequence[Path] = (),
        force: bool = False,
    ) -> Dict[str, CompiledModel]:
        """
        Compiles Dynawo models, reusing the libraries of a former compilation that are up
        to date (same Dynawo installation, toolchain, definition and sources).

        :param definitions: Models to compile.
        :param modelica_dirs: Directories of Modelica models outside the Dynawo library.
        :param force: Whether to compile the models again even if they are up to date.
        :return: The compiled models, by name.
        :raises ModelCompilationError: If a model cannot be compiled.
        """
        version = self._check_version()
        manifest = self._read_manifest()
        environment = self.toolchain.environment(self.output_dir / "toolchain")
        sources = _digest(
            *(
                f"{path.name}:{path.read_text(encoding='utf-8', errors='ignore')}"
                for directory in modelica_dirs
                for path in sorted(Path(directory).iterdir())
                if path.suffix in (".mo", ".extvar")
            )
        )

        results: Dict[str, CompiledModel] = {}
        pending: List[ModelDefinition] = []
        fingerprints: Dict[str, str] = {}
        for definition in definitions:
            fingerprint = _digest(
                version,
                str(self.dynawo_path),
                self.toolchain.description,
                definition.architecture(),
                sources if modelica_dirs else "",
            )
            fingerprints[definition.lib] = fingerprint
            entry = manifest.get("models", {}).get(definition.lib, {})
            up_to_date = entry.get("fingerprint") == fingerprint and all(
                (self.output_dir / f"{definition.lib}{suffix}").exists()
                for suffix in (".so", ".desc.xml")
            )
            if up_to_date and not force:
                results[definition.lib] = self._compiled_model(definition, reused=True)
            else:
                pending.append(definition)

        errors: List[str] = []
        with ThreadPoolExecutor(max_workers=min(self.jobs, max(1, len(pending)))) as pool:
            futures = {
                pool.submit(self._compile_model, definition, modelica_dirs, environment): (
                    definition
                )
                for definition in pending
            }
            for future, definition in futures.items():
                try:
                    results[definition.lib] = future.result()
                except ModelCompilationError as error:
                    errors.append(str(error))
        # The build directories of the successful compilations are removed
        build = self.output_dir / "build"
        if build.is_dir() and not any(build.iterdir()):
            build.rmdir()

        # The models of former compilations that this one did not need are kept
        entries = dict(manifest.get("models", {}))
        for lib, model in results.items():
            entries[lib] = {
                "modelica_class": model.modelica_class,
                "init_class": model.init_class,
                "prefix": model.prefix,
                "base_lib": model.base_lib,
                "fingerprint": fingerprints[lib],
            }
        manifest = {
            "dynawo_version": version,
            "dynawo_path": str(self.dynawo_path),
            "toolchain": self.toolchain.description,
            "models": entries,
        }
        (self.output_dir / MANIFEST_FILE).write_text(json.dumps(manifest, indent=4) + "\n")

        if errors:
            raise ModelCompilationError("\n".join(errors))
        return {definition.lib: results[definition.lib] for definition in definitions}

    def _compile_model(
        self,
        definition: ModelDefinition,
        modelica_dirs: Sequence[Path],
        environment: Dict[str, str],
    ) -> CompiledModel:
        """Compiles one model: preassembly, then description dump."""
        start = time.time()
        lib = definition.lib
        launcher = str(self.toolchain.launcher)

        model_list = self.output_dir / "model_lists" / f"{lib}.xml"
        model_list.parent.mkdir(parents=True, exist_ok=True)
        model_list.write_text(definition.architecture(), encoding="utf-8")
        build = self.output_dir / "build" / lib
        if build.exists():
            shutil.rmtree(build)
        build.mkdir(parents=True)
        log_file = self.output_dir / "logs" / f"{lib}.log"
        log_file.parent.mkdir(parents=True, exist_ok=True)

        # 1. Preassembly: Modelica model, C++ code and library
        command = [
            launcher,
            "jobs",
            "--generate-preassembled",
            "--model-list",
            str(model_list),
            "--output-dir",
            str(build),
        ]
        for directory in modelica_dirs:
            command += ["--non-recursive-modelica-models-dir", str(directory)]
        _check_launcher_arguments(command)
        logger.info(f"Compiling {lib} from {definition.modelica_class}...")
        process = subprocess.run(
            command, capture_output=True, text=True, env=environment, cwd=build
        )
        output = process.stdout + process.stderr
        log_file.write_text(f"$ {' '.join(command)}\n{output}", encoding="utf-8")
        if process.returncode != 0 or not (build / f"{lib}.so").exists():
            raise ModelCompilationError(
                f"Compilation of {lib} ({definition.modelica_class}) failed: "
                f"{_failure_message(output)} (see {log_file})"
            )
        for suffix in (".so", ".extvar"):
            target = self.output_dir / f"{lib}{suffix}"
            if target.exists():
                target.unlink()
            if (build / f"{lib}{suffix}").exists():
                shutil.move(str(build / f"{lib}{suffix}"), str(target))

        # 2. Description dump, which also checks that Dynawo can instantiate the library
        description = self.output_dir / f"{lib}.desc.xml"
        command = [
            launcher,
            "jobs",
            "--dump-model",
            "--model-file",
            str(self.output_dir / f"{lib}.so"),
            "--output-file",
            str(description),
        ]
        _check_launcher_arguments(command)
        dump = subprocess.run(command, capture_output=True, text=True, env=environment)
        with open(log_file, "a", encoding="utf-8") as log:
            log.write(f"\n$ {' '.join(command)}\n{dump.stdout}{dump.stderr}")
        if dump.returncode != 0 or not description.exists():
            if dump.returncode in (139, -11):
                reason = (
                    "the library crashed when Dynawo instantiated it, which reveals a binary "
                    "incompatibility between the C++ compiler and the Dynawo distribution"
                )
            else:
                reason = _failure_message(dump.stdout + dump.stderr)
            raise ModelCompilationError(
                f"Description dump of {lib} failed: {reason} (see {log_file})"
            )

        shutil.rmtree(build, ignore_errors=True)
        duration = time.time() - start
        logger.info(f"{lib} compiled in {duration:.0f} s.")
        return self._compiled_model(definition, reused=False, duration=duration)

    def _compiled_model(
        self, definition: ModelDefinition, reused: bool, duration: float = 0.0
    ) -> CompiledModel:
        """Builds the description of a compiled model."""
        return CompiledModel(
            lib=definition.lib,
            modelica_class=definition.modelica_class,
            init_class=definition.init_class,
            prefix=definition.prefix,
            base_lib=definition.base_lib,
            library=str(self.output_dir / f"{definition.lib}.so"),
            reused=reused,
            duration=duration,
        )

    # ------------------------------------------------------------------ #
    # Version control and model database
    # ------------------------------------------------------------------ #

    def _check_version(self) -> str:
        """
        Removes the models compiled by another Dynawo version or installation, which are
        not binary compatible, and records the current one in dynawo.version.

        :return: The Dynawo version.
        """
        if self._dynawo_version is not None:
            return self._dynawo_version
        version = self.toolchain.dynawo_version()
        version_file = self.output_dir / VERSION_FILE
        manifest = self._read_manifest()
        previous = version_file.read_text().strip() if version_file.exists() else None
        previous_path = manifest.get("dynawo_path")
        if (previous and previous != version) or (
            previous_path and previous_path != str(self.dynawo_path)
        ):
            logger.warning(
                f"Models compiled with Dynawo {previous} ({previous_path}) removed: they are "
                f"not compatible with Dynawo {version} ({self.dynawo_path})."
            )
            self.clean()
        self.output_dir.mkdir(parents=True, exist_ok=True)
        version_file.write_text(version + "\n")
        self._dynawo_version = version
        return version

    def clean(self) -> None:
        """Removes the compiled models and every file written by the compiler."""
        if not self.output_dir.exists():
            return
        for entry in self.output_dir.iterdir():
            generated = entry.name in (
                VERSION_FILE,
                MANIFEST_FILE,
                MODEL_DATABASE_DIRECTORY,
                "model_lists",
                "logs",
                "build",
                "modelica",
                "toolchain",
            ) or entry.name.endswith(MODEL_FILE_SUFFIXES)
            if not generated:
                continue
            if entry.is_dir() and not entry.is_symlink():
                shutil.rmtree(entry)
            else:
                entry.unlink()

    def _read_manifest(self) -> Dict[str, Any]:
        """Reads the manifest of the compiled models, or returns an empty one."""
        path = self.output_dir / MANIFEST_FILE
        try:
            return json.loads(path.read_text()) if path.exists() else {}
        except (OSError, ValueError):
            return {}

    def _build_model_database(self, models: Iterable[CompiledModel]) -> Path:
        """
        Builds the model database of the case: symbolic links to the model database of the
        Dynawo installation, where the compiled models replace the standard models of the
        same name.

        :return: The directory of the model database.
        """
        database = self.output_dir / MODEL_DATABASE_DIRECTORY
        if database.exists():
            shutil.rmtree(database)
        database.mkdir(parents=True)

        compiled = {
            f"{model.lib}{suffix}": self.output_dir / f"{model.lib}{suffix}"
            for model in models
            for suffix in MODEL_FILE_SUFFIXES
        }
        for entry in sorted((self.dynawo_path / "ddb").iterdir()):
            if entry.name not in compiled:
                _link_or_copy(entry, database / entry.name)
        for name, path in compiled.items():
            if path.exists():
                _link_or_copy(path, database / name)
        logger.info(f"Model database of the case built at {database}")
        return database
