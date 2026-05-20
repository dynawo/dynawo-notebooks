# scripts/buildaux_parse.jl
# Low-level Modelica text parsing helpers

module BuildAuxParse

export
    parse_modifier_dict,
    parse_call_modifier_dict,
    parse_component,
    parse_nth_connection,
    component_of_connector

# ------------------------------------------------------------
# Low-Level String Scanners
# ------------------------------------------------------------

"""
    _unwrap_code_modifier(mod_raw::String) -> String

Return the inner text of an OpenModelica modifier wrapper.

`{\$Code((...))}` becomes `...`, and `{}` becomes `""`.
"""
function _unwrap_code_modifier(mod_raw::String)
    s = strip(mod_raw)
    if s == "{}"
        return ""
    end

    s = replace(s, r"^\{\$Code\(\(" => "")
    s = replace(s, r"\)\)\}$" => "")
    return strip(s)
end

"""
    _split_top_level_commas(s::AbstractString) -> Vector{String}

Split `s` by commas that are at top level only.

Commas inside `()`, `[]`, `{}`, or quoted strings are ignored.
"""
function _split_top_level_commas(s::AbstractString)
    parts = String[]
    isempty(strip(s)) && return parts

    buf = IOBuffer()
    paren = 0
    bracket = 0
    brace = 0
    in_str = false
    escaped = false

    for c in s
        if in_str
            write(buf, c)
            if escaped
                escaped = false
                continue
            end
            if c == '\\'
                escaped = true
            elseif c == '"'
                in_str = false
            end
            continue
        end

        if c == '"'
            in_str = true
            write(buf, c)
            continue
        elseif c == '('
            paren += 1
        elseif c == ')'
            paren = max(paren - 1, 0)
        elseif c == '['
            bracket += 1
        elseif c == ']'
            bracket = max(bracket - 1, 0)
        elseif c == '{'
            brace += 1
        elseif c == '}'
            brace = max(brace - 1, 0)
        end

        if c == ',' && paren == 0 && bracket == 0 && brace == 0
            push!(parts, strip(String(take!(buf))))
        else
            write(buf, c)
        end
    end

    tail = strip(String(take!(buf)))
    if !isempty(tail)
        push!(parts, tail)
    end

    return parts
end

"""
    _find_top_level_equal(part::AbstractString) -> Union{Int,Nothing}

Return the index of the first `=` that appears at top level in `part`.

`=` inside nested delimiters or quoted strings is ignored.
"""
function _find_top_level_equal(part::AbstractString)
    paren = 0
    bracket = 0
    brace = 0
    in_str = false
    escaped = false

    for (i, c) in pairs(part)
        if in_str
            if escaped
                escaped = false
                continue
            end
            if c == '\\'
                escaped = true
            elseif c == '"'
                in_str = false
            end
            continue
        end

        if c == '"'
            in_str = true
        elseif c == '('
            paren += 1
        elseif c == ')'
            paren = max(paren - 1, 0)
        elseif c == '['
            bracket += 1
        elseif c == ']'
            bracket = max(bracket - 1, 0)
        elseif c == '{'
            brace += 1
        elseif c == '}'
            brace = max(brace - 1, 0)
        elseif c == '=' && paren == 0 && bracket == 0 && brace == 0
            return i
        end
    end

    return nothing
end

# ------------------------------------------------------------
# Modifier Parsers
# ------------------------------------------------------------

"""
    parse_modifier_dict(mod_raw::String) -> Dict{String,String}

Parse top-level assignment modifiers from OpenModelica raw text.

Example output entry: `"U0Pu" => "Complex(1, 0)"`.
Call-style modifiers like `x(fixed = false)` are skipped.
"""
function parse_modifier_dict(mod_raw::String)
    s = _unwrap_code_modifier(mod_raw)
    isempty(s) && return Dict{String, String}()
    parts = _split_top_level_commas(s)

    result = Dict{String, String}()
    for p in parts
        eqpos = _find_top_level_equal(p)
        if eqpos !== nothing
            lhs = strip(p[1:prevind(p, eqpos)])
            rhs = strip(p[nextind(p, eqpos):end])
            if !isempty(lhs)
                result[lhs] = rhs
            end
        end
    end

    return result
end

"""
    parse_call_modifier_dict(mod_raw::String) -> Dict{String,String}

Parse top-level call-style modifiers from OpenModelica raw text.

Example output entry: `"i0Pu" => "re(fixed = false), im(fixed = false)"`.
"""
function parse_call_modifier_dict(mod_raw::String)
    s = _unwrap_code_modifier(mod_raw)
    isempty(s) && return Dict{String, String}()
    parts = _split_top_level_commas(s)

    result = Dict{String, String}()
    for p in parts
        if _find_top_level_equal(p) !== nothing
            continue
        end

        m = match(r"^\s*([A-Za-z_]\w*)\((.*)\)\s*$", p)
        if m !== nothing
            result[strip(m.captures[1])] = strip(m.captures[2])
        end
    end

    return result
end

# ------------------------------------------------------------
# OpenModelica Raw Parsers
# ------------------------------------------------------------

"""
    parse_component(raw::String) -> (comp_class::String, comp_name::String)

Parse OpenModelica `getNthComponent` raw text, typically:
`{ClassName, componentName}`.
"""
function parse_component(raw::String)
    s = strip(raw)
    s = replace(s, "{" => "")
    s = replace(s, "}" => "")
    parts = split(s, ",")

    comp_class = strip(parts[1])
    comp_name = strip(parts[2])

    return comp_class, comp_name
end

"""
    parse_nth_connection(raw::String) -> (from::SubString{String}, to::SubString{String})

Parse OpenModelica `getNthConnection` raw text and return the
`from` and `to` connector strings.
"""
function parse_nth_connection(raw::String)
    ms = collect(eachmatch(r"\"([^\"]*)\"", raw))

    from = ms[1].captures[1]
    to = ms[2].captures[1]
    return from, to
end

"""
    component_of_connector(conn::AbstractString) -> String

Return the component name from a connector path.
"""
function component_of_connector(conn::AbstractString)
    return String(split(conn, ".", limit = 2)[1])
end

end # module
