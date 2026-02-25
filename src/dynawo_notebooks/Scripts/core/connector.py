# FILE: src/dynawo_notebooks/Scripts/core/connector.py
"""
OpenModelica Connector Module.
"""

import os
import logging
import re
from typing import Optional, List, Any
from OMPython import OMCSessionZMQ

logger = logging.getLogger(__name__)


class OMCConnector:
    def __init__(self):
        logger.info("Connecting to OpenModelica Compiler (OMC)...")
        try:
            self._omc = OMCSessionZMQ()
            logger.info("OMC Session established successfully.")
        except Exception as e:
            logger.critical(f"Failed to connect to OMC: {e}")
            raise e
            
        # --- NUEVO: Sistemas de Caché para acelerar x100 ---
        self._list_cache = {}
        self._param_cache = {}

    def load_libraries(self, dynawo_pkg_path: str) -> None:
        logger.info("Loading Standard Modelica Libraries...")
        self._omc.sendExpression("loadModel(Modelica)")
        self._omc.sendExpression("loadModel(Complex)")
        self._omc.sendExpression("loadModel(ModelicaServices)")

        abs_pkg_path = os.path.abspath(dynawo_pkg_path).replace("\\", "/")
        if not abs_pkg_path.endswith("package.mo"):
            load_path = f"{abs_pkg_path}/package.mo"
        else:
            load_path = abs_pkg_path

        logger.info(f"Loading Dynawo Package from: {load_path}")
        if not self._omc.sendExpression(f'loadFile("{load_path}")'):
            logger.error("Failed to load Dynawo package. Check path.")

    def load_local_files(self, source_dir: str, file_list: List[str]) -> None:
        abs_source = os.path.abspath(source_dir).replace("\\", "/")
        logger.info(f"Loading {len(file_list)} local files from {abs_source}...")
        for f in file_list:
            full_path = f"{abs_source}/{f}"
            if not self._omc.sendExpression(f'loadFile("{full_path}")'):
                logger.warning(f"Failed to load file: {f}")

    def check_model(self, model_name: str) -> bool:
        logger.info(f"Checking model: {model_name}")
        res = self._omc.sendExpression(f"checkModel({model_name})")
        return "Error" not in str(res)

    def instantiate_model(self, model_name: str) -> Optional[str]:
        """
        Attempts to force OMC to compile and flatten the model safely.
        """
        logger.info(f"Attempting to instantiate (flatten) model {model_name}...")
        try:
            res = self._omc.sendExpression(f"instantiateModel({model_name})")
            if res and "Error" not in str(res):
                return str(res)
        except Exception as e:
            logger.warning(
                "OMC could not flatten the model (likely due to unbound parameters). Falling back to AST parsing."
            )
        return None

    def get_components(self, model_name: str) -> List[Any]:
        return self._omc.sendExpression(f"getComponents({model_name})")

    def get_connections(self, model_name: str) -> List[List[str]]:
        count_str = self._omc.sendExpression(f"getConnectionCount({model_name})")
        connections = []
        if count_str:
            try:
                count = int(count_str)
                for i in range(1, count + 1):
                    conn = self._omc.sendExpression(f"getNthConnection({model_name}, {i})")
                    if conn and len(conn) >= 2:
                        connections.append([conn[0], conn[1]])
            except ValueError:
                pass
        return connections

    def get_parameter_value(self, model_name: str, parameter_path: str) -> Optional[str]:
        cache_key = f"{model_name}::{parameter_path}"
        if cache_key in self._param_cache:
            return self._param_cache[cache_key]

        try:
            val = self._omc.sendExpression(f'getParameterValue({model_name}, "{parameter_path}")')
            if val and "Error" not in str(val) and val != "":
                res = str(val).strip().replace('"', "")
                self._param_cache[cache_key] = res
                return res
        except Exception:
            pass
            
        self._param_cache[cache_key] = None
        return None

    def get_modifier_value(
        self, model_name: str, component_name: str, parameter_name: str
    ) -> Optional[str]:
        """Fallback: Parses source code to find mathematical equations."""
        try:
            # OPTIMIZACIÓN: Solo pedir list(model) a OMC una sola vez
            if model_name not in self._list_cache:
                raw_list = self._omc.sendExpression(f"list({model_name})")
                if not raw_list or "Error" in str(raw_list):
                    self._list_cache[model_name] = ""
                else:
                    self._list_cache[model_name] = str(raw_list)

            definition_str = self._list_cache[model_name]
            if not definition_str: return None
            

            comp_pattern = re.compile(rf"\b{component_name}\s*\(", re.IGNORECASE)
            comp_match = comp_pattern.search(definition_str)
            if not comp_match: return None

            start_comp_idx = comp_match.end()
            depth = 1
            comp_modifiers_str = ""
            for char in str(definition_str)[start_comp_idx:]:
                if char == "(":
                    depth += 1
                elif char == ")":
                    depth -= 1
                if depth == 0:
                    break
                comp_modifiers_str += char

            param_pattern = re.compile(rf"\b{parameter_name}\s*=", re.IGNORECASE)
            param_match = param_pattern.search(comp_modifiers_str)
            if not param_match:
                return None

            start_param_idx = param_match.end()
            value_str = ""
            depth_param = 0

            for char in comp_modifiers_str[start_param_idx:]:
                if char == "(":
                    depth_param += 1
                elif char == ")":
                    depth_param -= 1
                if depth_param < 0:
                    break
                if depth_param == 0 and char == ",":
                    break
                value_str += char

            val = value_str.strip()
            val = val.split("/*")[0].split("//")[0].strip()
            return val if val else None
        except Exception:
            return None

    def get_extends(self, model_name: str) -> List[str]:
        try:
            cmd = f"getInheritedClasses({model_name})"
            result = self._omc.sendExpression(cmd)
            if isinstance(result, (list, tuple)):
                return [str(c) for c in result]
            elif isinstance(result, str) and result:
                return [result]
        except Exception:
            pass
        return []
