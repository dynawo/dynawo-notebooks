# helpers/modelica_parsing.py
# Low-level Modelica text parsing helpers

import re


def _unwrap_code_modifier(mod_raw):
    """
    Return the inner text of an OpenModelica modifier wrapper.

    `{$Code((...))}` becomes `...`, and `{}` becomes `""`.
    """
    s = mod_raw.strip()
    if s == "{}":
        return ""

    s = re.sub(r"^\{\$Code\(\(", "", s)
    s = re.sub(r"\)\)\}$", "", s)
    return s.strip()


def _strip_modelica_comments(s):
    """
    Remove Modelica line and block comments from `s`.

    Comment markers inside quoted strings are kept literal, and newlines are
    preserved so adjacent tokens do not get glued together.
    """
    if not s:
        return ""

    out = []
    in_str = False
    escaped = False
    in_line_comment = False
    in_block_comment = False

    i = 0
    while i < len(s):
        c = s[i]
        next_c = s[i + 1] if i + 1 < len(s) else None

        if in_line_comment:
            if c == "\n":
                in_line_comment = False
                out.append(c)
            i += 1
            continue

        if in_block_comment:
            if c == "*" and next_c == "/":
                in_block_comment = False
                i += 2
            else:
                if c == "\n":
                    out.append(c)
                i += 1
            continue

        if in_str:
            out.append(c)
            if escaped:
                escaped = False
            elif c == "\\":
                escaped = True
            elif c == '"':
                in_str = False
            i += 1
            continue

        if c == '"':
            in_str = True
            out.append(c)
            i += 1
            continue

        if c == "/" and next_c == "/":
            in_line_comment = True
            i += 2
            continue

        if c == "/" and next_c == "*":
            in_block_comment = True
            i += 2
            continue

        out.append(c)
        i += 1

    return "".join(out).strip()


def _split_top_level_commas(s):
    """
    Split `s` by commas that appear at top level only.

    Commas inside `()`, `[]`, `{}`, or quoted strings are ignored.
    """
    parts = []
    if not s.strip():
        return parts

    buf = []
    paren = 0
    bracket = 0
    brace = 0
    in_str = False
    escaped = False

    for c in s:
        if in_str:
            buf.append(c)
            if escaped:
                escaped = False
                continue
            if c == "\\":
                escaped = True
            elif c == '"':
                in_str = False
            continue

        if c == '"':
            in_str = True
            buf.append(c)
            continue
        elif c == "(":
            paren += 1
        elif c == ")":
            paren = max(paren - 1, 0)
        elif c == "[":
            bracket += 1
        elif c == "]":
            bracket = max(bracket - 1, 0)
        elif c == "{":
            brace += 1
        elif c == "}":
            brace = max(brace - 1, 0)

        if c == "," and paren == 0 and bracket == 0 and brace == 0:
            parts.append("".join(buf).strip())
            buf = []
        else:
            buf.append(c)

    tail = "".join(buf).strip()
    if tail:
        parts.append(tail)

    return parts


def _find_top_level_equal(part):
    """
    Return the index of the first `=` that appears at top level in `part`.

    `=` inside nested delimiters or quoted strings is ignored.
    """
    paren = 0
    bracket = 0
    brace = 0
    in_str = False
    escaped = False

    for i, c in enumerate(part):
        if in_str:
            if escaped:
                escaped = False
                continue
            if c == "\\":
                escaped = True
            elif c == '"':
                in_str = False
            continue

        if c == '"':
            in_str = True
        elif c == "(":
            paren += 1
        elif c == ")":
            paren = max(paren - 1, 0)
        elif c == "[":
            bracket += 1
        elif c == "]":
            bracket = max(bracket - 1, 0)
        elif c == "{":
            brace += 1
        elif c == "}":
            brace = max(brace - 1, 0)
        elif c == "=" and paren == 0 and bracket == 0 and brace == 0:
            return i

    return None


def parse_modifier_dict(mod_raw):
    """
    Parse top-level assignment modifiers from OpenModelica raw text.

    Call-style modifiers like `x(fixed = false)` are skipped.
    """
    s = _strip_modelica_comments(_unwrap_code_modifier(mod_raw))
    if not s:
        return {}
    parts = _split_top_level_commas(s)

    result = {}
    for p in parts:
        eqpos = _find_top_level_equal(p)
        if eqpos is not None:
            lhs = p[:eqpos].strip()
            rhs = p[eqpos + 1:].strip()
            if lhs:
                result[lhs] = rhs

    return result


def parse_call_modifier_dict(mod_raw):
    """
    Parse top-level call-style modifiers from OpenModelica raw text.

    Example output entry: `"i0Pu" => "re(fixed = false), im(fixed = false)"`.
    """
    s = _strip_modelica_comments(_unwrap_code_modifier(mod_raw))
    if not s:
        return {}
    parts = _split_top_level_commas(s)

    result = {}
    for p in parts:
        if _find_top_level_equal(p) is not None:
            continue

        m = re.match(r"^\s*([A-Za-z_]\w*)\((.*)\)\s*$", p)
        if m is not None:
            result[m.group(1).strip()] = m.group(2).strip()

    return result


def parse_component(raw):
    """
    Parse OpenModelica `getNthComponent` raw text, typically:
    `{ClassName, componentName}`.
    """
    s = raw.strip()
    s = s.replace("{", "")
    s = s.replace("}", "")
    parts = s.split(",")

    comp_class = parts[0].strip()
    comp_name = parts[1].strip()

    return comp_class, comp_name


def parse_nth_connection(raw):
    """
    Parse OpenModelica `getNthConnection` raw text and return the connector paths.
    """
    matches = re.findall(r"\"([^\"]*)\"", raw)
    return matches[0], matches[1]


def component_of_connector(conn):
    """
    Return the component name from a connector path.
    """
    return conn.split(".", 1)[0]
