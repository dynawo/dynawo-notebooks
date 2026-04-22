# scripts/initialization_parse.jl
# Low-level Modelica text parsing helpers

module InitializationParse

export
    parse_modifier_dict,
    parse_call_modifier_dict,
    parse_component

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
    _strip_modelica_comments(s::AbstractString) -> String

Remove Modelica line and block comments from `s`.

Comment markers inside quoted strings are kept literal, and newlines are
preserved so adjacent tokens do not get glued together.
"""
function _strip_modelica_comments(s::AbstractString)
    isempty(s) && return ""

    out = IOBuffer()
    in_str = false
    escaped = false
    in_line_comment = false
    in_block_comment = false

    i = firstindex(s)
    while i <= lastindex(s)
        c = s[i]
        next_i = nextind(s, i)
        next_c = next_i <= lastindex(s) ? s[next_i] : nothing

        if in_line_comment
            if c == '\n'
                in_line_comment = false
                write(out, c)
            end
            i = nextind(s, i)
            continue
        end

        if in_block_comment
            if c == '*' && next_c == '/'
                in_block_comment = false
                i = nextind(s, next_i)
            else
                if c == '\n'
                    write(out, c)
                end
                i = nextind(s, i)
            end
            continue
        end

        if in_str
            write(out, c)
            if escaped
                escaped = false
            elseif c == '\\'
                escaped = true
            elseif c == '"'
                in_str = false
            end
            i = nextind(s, i)
            continue
        end

        if c == '"'
            in_str = true
            write(out, c)
            i = nextind(s, i)
            continue
        end

        if c == '/' && next_c == '/'
            in_line_comment = true
            i = nextind(s, next_i)
            continue
        end

        if c == '/' && next_c == '*'
            in_block_comment = true
            i = nextind(s, next_i)
            continue
        end

        write(out, c)
        i = nextind(s, i)
    end

    return strip(String(take!(out)))
end

"""
    _split_top_level_commas(s::AbstractString) -> Vector{String}

Split `s` by commas that appear at top level only.

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
    _find_top_level_equal(part::AbstractString) -> Union{Int, Nothing}

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

"""
    parse_modifier_dict(mod_raw::String) -> Dict{String, String}

Parse top-level assignment modifiers from OpenModelica raw text.

Call-style modifiers like `x(fixed = false)` are skipped.
"""
function parse_modifier_dict(mod_raw::String)
    s = _strip_modelica_comments(_unwrap_code_modifier(mod_raw))
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
    parse_call_modifier_dict(mod_raw::String) -> Dict{String, String}

Parse top-level call-style modifiers from OpenModelica raw text.

Example output entry: `"i0Pu" => "re(fixed = false), im(fixed = false)"`.
"""
function parse_call_modifier_dict(mod_raw::String)
    s = _strip_modelica_comments(_unwrap_code_modifier(mod_raw))
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

    comp_class = String(strip(parts[1]))
    comp_name = String(strip(parts[2]))

    return comp_class, comp_name
end

end # module
