"""
Flattened Modelica Model Evaluation Module.

This module parses the flattened model returned by OpenModelica (instantiateModel)
and evaluates the numerical value of its parameters. Bindings are evaluated
recursively; variables without binding are resolved through the simple equations of
the model (for instance ``load.PRefPu = PrefPu_load.setPoint.value`` and
``PrefPu_load.setPoint.value = PrefPu_load.Value0``).
"""

import logging
import math
import re
from typing import Dict, Iterable, List, Optional, Set, Tuple, Union

logger = logging.getLogger(__name__)

Number = Union[float, bool]

# Package constants that may survive flattening as qualified names
KNOWN_CONSTANTS: Dict[str, float] = {
    "Dynawo.Electrical.SystemBase.SnRef": 100.0,
    "Dynawo.Electrical.SystemBase.fNom": 50.0,
    "Dynawo.Electrical.SystemBase.omegaNom": 2.0 * math.pi * 50.0,
    "Dynawo.Electrical.SystemBase.omegaRef0Pu": 1.0,
    "Dynawo.Electrical.SystemBase.omega0Pu": 1.0,
    "Modelica.Constants.pi": math.pi,
    "Modelica.Constants.e": math.e,
    "SystemBase.SnRef": 100.0,
    # Expressions are evaluated at the initial time, the instant described by the load flow
    "time": 0.0,
}

# Functions available to the evaluated expressions
FUNCTIONS = {
    "abs": abs,
    "sqrt": math.sqrt,
    "sin": math.sin,
    "cos": math.cos,
    "tan": math.tan,
    "asin": math.asin,
    "acos": math.acos,
    "atan": math.atan,
    "atan2": math.atan2,
    "exp": math.exp,
    "log": math.log,
    "log10": math.log10,
    "min": min,
    "max": max,
    "sign": lambda x: math.copysign(1.0, x) if x != 0 else 0.0,
}
FUNCTION_ALIASES = {
    "Modelica.Math.sin": "sin",
    "Modelica.Math.cos": "cos",
    "Modelica.Math.tan": "tan",
    "Modelica.Math.asin": "asin",
    "Modelica.Math.acos": "acos",
    "Modelica.Math.atan": "atan",
    "Modelica.Math.atan2": "atan2",
    "Modelica.Math.exp": "exp",
    "Modelica.Math.log": "log",
    "Modelica.Math.log10": "log10",
}

_TOKEN = re.compile(
    r"""
    (?P<number>\d+\.?\d*(?:[eE][+-]?\d+)?|\.\d+(?:[eE][+-]?\d+)?)
  | (?P<name>(?:[A-Za-z_]\w*|'[^']+')(?:\[[^\]]*\])?(?:\.(?:[A-Za-z_]\w*|'[^']+')(?:\[[^\]]*\])?)*)
  | (?P<string>"(?:[^"\\]|\\.)*")
  | (?P<op><>|<=|>=|==|[-+*/^(),<>])
  | (?P<space>\s+)
    """,
    re.VERBOSE,
)
_KEYWORDS = {"if", "then", "elseif", "else", "and", "or", "not", "true", "false"}


class UnresolvedExpression(Exception):
    """Raised when an expression cannot be evaluated numerically."""


def split_statements(text: str) -> List[str]:
    """
    Splits Modelica code at the top level semicolons, ignoring the ones inside strings
    and parentheses.

    :param text: Modelica code.
    :return: The list of statements, without the trailing semicolons.
    """
    statements, current, depth, in_string, escape = [], [], 0, False, False
    for char in text:
        if in_string:
            current.append(char)
            if escape:
                escape = False
            elif char == "\\":
                escape = True
            elif char == '"':
                in_string = False
            continue
        if char == '"':
            in_string = True
        elif char in "([{":
            depth += 1
        elif char in ")]}":
            depth -= 1
        elif char == ";" and depth == 0:
            statements.append("".join(current).strip())
            current = []
            continue
        current.append(char)
    if "".join(current).strip():
        statements.append("".join(current).strip())
    return statements


def _strip_comment(expression: str) -> str:
    """Removes a trailing Modelica description string from an expression."""
    expression = expression.strip()
    match = re.search(r'\s*"(?:[^"\\]|\\.)*"\s*$', expression)
    if match and not expression.startswith('"'):
        expression = expression[: match.start()]
    return expression.strip()


def _find_top_level(text: str, target: str) -> int:
    """Returns the index of the first top-level occurrence of a character, or -1."""
    depth, in_string = 0, False
    for index, char in enumerate(text):
        if char == '"':
            in_string = not in_string
        elif in_string:
            continue
        elif char in "([{":
            depth += 1
        elif char in ")]}":
            depth -= 1
        elif char == target and depth == 0:
            return index
    return -1


class FlatModel:
    """
    Evaluates the parameters of a flattened Modelica model.

    :param flat_text: Output of OMC instantiateModel.
    :param unknown: Names whose values must be considered unknown (for instance the
        dummy values injected by a probe instantiation).
    """

    _DECLARATION = re.compile(
        r"""^(?:(?:protected|public|final|inner|outer|input|output|flow|stream|discrete|parameter|constant)\s+)*
            (?P<type>[A-Za-z_][\w\.]*(?:\([^)]*\))?)\s+
            (?P<name>[A-Za-z_][\w\.\[\],']*)""",
        re.VERBOSE,
    )

    def __init__(self, flat_text: str = "", unknown: Iterable[str] = ()) -> None:
        self.bindings: Dict[str, str] = {}
        self.kinds: Dict[str, str] = {}
        self.types: Dict[str, str] = {}
        self.comments: Dict[str, str] = {}
        self.finals: Set[str] = set()
        # Parameters with fixed = false, computed by the initial equations of the model
        self.computed: Set[str] = set()
        self.equations: List[Tuple[str, str]] = []
        self.unknown: Set[str] = set(unknown)
        self._values: Dict[str, Optional[Number]] = {}
        self._equation_index: Dict[str, List[str]] = {}
        if flat_text:
            self._parse(flat_text)

    # ------------------------------------------------------------------ #
    # Parsing
    # ------------------------------------------------------------------ #

    def _parse(self, flat_text: str) -> None:
        """Parses the declarations and the equations of the flattened model."""
        # The flattened class is preceded by the functions it uses, and ends with
        # "end <class name>;" (not to be confused with "end when;" or "end if;")
        body = flat_text
        start = re.search(r"^\s*(?:class|model)\s+([\w\.']+)[^\n]*\n", body, re.MULTILINE)
        if start:
            class_name = start.group(1)
            body = body[start.end() :]
            end = re.search(rf"^\s*end\s+{re.escape(class_name)}\s*;\s*$", body, re.MULTILINE)
            if end:
                body = body[: end.start()]

        section = "declarations"
        for statement in split_statements(body):
            keyword = re.match(
                r"^(initial\s+equation|equation|algorithm|initial\s+algorithm)\b", statement
            )
            if keyword:
                section = "initial" if keyword.group(1).startswith("initial") else keyword.group(1)
                statement = statement[keyword.end() :].strip()
                if not statement:
                    continue
            if section == "declarations":
                self._parse_declaration(statement)
            elif section == "equation":
                self._parse_equation(statement)

        for lhs, rhs in self.equations:
            for side in (lhs, rhs):
                if re.fullmatch(r"[A-Za-z_][\w\.\[\],']*", side):
                    self._equation_index.setdefault(side, []).append(rhs if side == lhs else lhs)

    def _parse_declaration(self, statement: str) -> None:
        """Parses one declaration of the flattened model."""
        statement = re.sub(r"\s+", " ", statement).strip()
        match = self._DECLARATION.match(statement)
        if not match:
            return
        name = match.group("name")
        prefix = statement[: match.start("type")]
        self.types[name] = match.group("type")
        self.kinds[name] = (
            "constant"
            if "constant" in prefix
            else "parameter"
            if "parameter" in prefix
            else "variable"
        )
        if re.search(r"\bfinal\b", prefix):
            self.finals.add(name)

        rest = statement[match.end() :].strip()
        if rest.startswith("("):
            depth = 0
            for index, char in enumerate(rest):
                depth += char == "("
                depth -= char == ")"
                if depth == 0:
                    attributes, rest = rest[: index + 1], rest[index + 1 :].strip()
                    if self.kinds[name] == "parameter" and re.search(
                        r"\bfixed\s*=\s*false\b", attributes
                    ):
                        self.computed.add(name)
                    break

        comment = re.search(r'"((?:[^"\\]|\\.)*)"\s*$', rest)
        if comment:
            self.comments[name] = comment.group(1)
        if rest.startswith("="):
            binding = _strip_comment(rest[1:])
            if binding:
                self.bindings[name] = binding

    def _parse_equation(self, statement: str) -> None:
        """Keeps the simple equations of the form ``lhs = rhs`` (no when/if blocks)."""
        statement = re.sub(r"\s+", " ", statement).strip()
        if re.match(r"^(when|if|for|connect|assert|terminate|reinit)\b", statement):
            return
        index = _find_top_level(statement, "=")
        if index <= 0 or statement[index - 1] in "<>=:" or statement[index + 1 : index + 2] == "=":
            return
        self.equations.append((statement[:index].strip(), _strip_comment(statement[index + 1 :])))

    # ------------------------------------------------------------------ #
    # Queries
    # ------------------------------------------------------------------ #

    def names_with_prefix(self, prefix: str) -> List[str]:
        """Returns the declared names starting with ``prefix.``."""
        start = f"{prefix}."
        return [name for name in self.kinds if name.startswith(start)]

    def has(self, name: str) -> bool:
        """Tells whether a name is declared in the flat model."""
        return name in self.kinds

    def is_parameter(self, name: str) -> bool:
        """Tells whether a declared name is a parameter or a constant."""
        return self.kinds.get(name) in ("parameter", "constant")

    def value(self, name: str) -> Optional[Number]:
        """
        Evaluates a declared name.

        :param name: Fully qualified name in the flat model.
        :return: The numerical (or boolean) value, or None if it cannot be determined.
        """
        if name in self._values:
            return self._values[name]
        self._values[name] = None  # Protects against cyclic definitions
        result = self._compute(name)
        self._values[name] = result
        return result

    def evaluate(self, expression: str, scope: str = "") -> Optional[Number]:
        """
        Evaluates an expression, resolving its identifiers in the flat model.

        :param expression: Modelica expression.
        :param scope: Optional component prefix tried before the global scope.
        :return: The numerical (or boolean) value, or None if it cannot be determined.
        """
        try:
            return self._eval(expression, scope)
        except UnresolvedExpression:
            return None
        except (ArithmeticError, ValueError, TypeError):
            return None

    # ------------------------------------------------------------------ #
    # Evaluation internals
    # ------------------------------------------------------------------ #

    def _compute(self, name: str) -> Optional[Number]:
        """Computes the value of a name from its binding or from the equations."""
        if name in self.unknown:
            return None
        if name in KNOWN_CONSTANTS:
            return KNOWN_CONSTANTS[name]
        if name in self.bindings:
            return self.evaluate(self.bindings[name])
        for expression in self._equation_index.get(name, []):
            result = self.evaluate(expression)
            if result is not None:
                return result
        return None

    def _resolve_name(self, name: str, scope: str) -> Number:
        """Resolves an identifier to a value, raising if it cannot be determined."""
        if name in ("true", "false"):
            return name == "true"
        candidates = [f"{scope}.{name}", name] if scope else [name]
        for candidate in candidates:
            if candidate in KNOWN_CONSTANTS:
                return KNOWN_CONSTANTS[candidate]
            if candidate in self.kinds or candidate in self._equation_index:
                result = self.value(candidate)
                if result is None:
                    raise UnresolvedExpression(candidate)
                return result
        raise UnresolvedExpression(name)

    def _eval(self, expression: str, scope: str) -> Number:
        """Translates a Modelica expression to Python and evaluates it."""
        tokens = self._tokenize(expression)
        python_expression = self._translate(tokens, scope)
        return eval(python_expression, {"__builtins__": {}}, dict(FUNCTIONS))  # noqa: S307

    @staticmethod
    def _tokenize(expression: str) -> List[Tuple[str, str]]:
        """Splits a Modelica expression into tokens."""
        tokens, position = [], 0
        while position < len(expression):
            match = _TOKEN.match(expression, position)
            if not match:
                raise UnresolvedExpression(expression)
            position = match.end()
            kind = match.lastgroup
            if kind == "space":
                continue
            if kind == "string":
                raise UnresolvedExpression(expression)
            tokens.append((kind, match.group(kind)))
        return tokens

    def _translate(self, tokens: List[Tuple[str, str]], scope: str) -> str:
        """Translates tokens to a Python expression, resolving identifiers to values."""
        output: List[str] = []
        index = 0
        while index < len(tokens):
            kind, text = tokens[index]
            if kind == "name" and text == "if":
                translated, index = self._translate_if(tokens, index, scope)
                output.append(translated)
                continue
            if kind == "name":
                next_is_call = index + 1 < len(tokens) and tokens[index + 1][1] == "("
                if next_is_call:
                    function = FUNCTION_ALIASES.get(text, text)
                    if function not in FUNCTIONS:
                        raise UnresolvedExpression(text)
                    output.append(function)
                elif text in ("and", "or", "not"):
                    output.append(f" {text} ")
                elif text in ("then", "else", "elseif"):
                    raise UnresolvedExpression(text)
                else:
                    output.append(repr(self._resolve_name(text, scope)))
            elif kind == "op":
                output.append({"^": "**", "<>": "!="}.get(text, text))
            else:
                output.append(text)
            index += 1
        return "".join(output)

    def _translate_if(
        self, tokens: List[Tuple[str, str]], index: int, scope: str
    ) -> Tuple[str, int]:
        """
        Translates an ``if c then a elseif c2 then b else d`` expression starting at
        ``index`` into a Python conditional expression.

        :return: The translated expression and the index after it.
        """
        branches: List[Tuple[List, List]] = []
        index += 1  # Skip "if"
        condition: List = []
        value: List = []
        target = condition
        depth = 0
        nested_ifs = 0
        while index < len(tokens):
            kind, text = tokens[index]
            if text in ("(", "["):
                depth += 1
            elif text in (")", "]", ","):
                if depth == 0 and nested_ifs == 0:
                    break
                if text != ",":
                    depth -= 1
            if kind == "name" and depth == 0:
                if text == "if":
                    nested_ifs += 1
                elif nested_ifs == 0 and text == "then":
                    target = value
                    index += 1
                    continue
                elif nested_ifs == 0 and text in ("elseif", "else"):
                    branches.append((condition, value))
                    condition, value = ([], []) if text == "elseif" else (None, [])
                    target = condition if text == "elseif" else value
                    index += 1
                    continue
                elif text == "else" and nested_ifs > 0:
                    # The "else" closes a nested if: the nested expression ends after its value
                    nested_ifs -= 1
            target.append(tokens[index])
            index += 1
        if condition is not None:
            raise UnresolvedExpression("if expression without else branch")
        result = f"({self._translate(value, scope)})"
        for branch_condition, branch_value in reversed(branches):
            python_value = self._translate(branch_value, scope)
            python_condition = self._translate(branch_condition, scope)
            result = f"(({python_value}) if ({python_condition}) else {result})"
        return result, index
