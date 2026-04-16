# helpers/initialization_helpers.jl
# Initialization extraction and model update helpers

module InitializationHelpers
using OMJulia

export
    om_send,
    get_all_components,
    get_initializable_components,
    extract_all_initialization_values,
    apply_initialization_modifiers!

function om_send(omc, expr; parsed = true)
    println("OMC -> ", expr)
    try
        return sendExpression(omc, expr; parsed = parsed)
    catch err
        println(sendExpression(omc, "getErrorString()", parsed = false))
        rethrow(err)
    end
end

function parse_component(raw::String)
    s = strip(raw)
    s = replace(s, "{" => "")
    s = replace(s, "}" => "")
    parts = split(s, ",")

    comp_class = strip(parts[1])
    comp_name = strip(parts[2])

    return comp_class, comp_name
end

# ------------------------------------------------------------
# Low-Level String Scanners
# ------------------------------------------------------------

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
            # Keep line breaks so the next token stays on its own line.
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

        # Split only when the comma is outside nested delimiters and strings.
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

function get_all_components(omc, model)
    n = sendExpression(omc, "getComponentCount($model)")
    components = Dict{String, Dict{String, Any}}()

    for i in 1:n
        raw = sendExpression(omc, "getNthComponent($model, $i)", parsed = false)
        comp_class, comp_name = parse_component(String(raw))

        mod_raw = sendExpression(omc, "getNthComponentModification($model, $i)", parsed = false)
        modifiers = parse_modifier_dict(String(mod_raw))
        call_modifiers = parse_call_modifier_dict(String(mod_raw))

        components[comp_name] = Dict{String, Any}(
            "class" => comp_class,
            "modifiers" => modifiers,
            "call_modifiers" => call_modifiers,
        )
    end

    return components
end

function _resolve_init_params(component::String, class::String, init_params, init_model_by_component)
    haskey(init_params, class) || return nothing

    spec = init_params[class]
    if isa(spec, Dict) && haskey(spec, "profiles")
        haskey(init_model_by_component, component) || error("Missing INIT model selection for component $component of class $class")
        profile_name = init_model_by_component[component]
        profiles = spec["profiles"]
        haskey(profiles, profile_name) || error("Unknown INIT profile $profile_name for component $component of class $class")
        return profiles[profile_name]
    end

    if haskey(init_model_by_component, component)
        profile_name = init_model_by_component[component]
        error("Component $component selects INIT profile $profile_name, but class $class has no profiles")
    end

    return spec
end

function get_initializable_components(components, init_params, init_model_by_component = Dict{String, String}())
    initializable = Dict{String, Dict{String, Any}}()

    for (component, info) in components
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        isnothing(param_pairs) && continue
        initializable[component] = info
    end

    return initializable
end

function _read_result_value(aux_session, full_name::AbstractString)
    isempty(aux_session.resultfile) && error("Auxiliary session has no result file. Run simulate(...) before extracting initialization values.")
    values = getSolutions(aux_session, String(full_name))
    series = values[1]
    isempty(series) && error("No values found in $(aux_session.resultfile) for $(full_name)")
    return Float64(series[end])
end

function extract_component_initialization_values(aux_session, component, param_pairs)
    init_component = component * "_INIT"
    values = Dict{String, Float64}()

    for (init_var, dynamic_var) in param_pairs
        full_name = init_component * "." * init_var
        values[dynamic_var] = _read_result_value(aux_session, full_name)
    end

    return values
end

function extract_all_initialization_values(aux_session, initializable_components, init_params, init_model_by_component = Dict{String, String}())
    values_by_component = Dict{String, Dict{String, Float64}}()

    for (component, info) in initializable_components
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        values_by_component[component] = extract_component_initialization_values(aux_session, component, param_pairs)
    end

    return values_by_component
end

function _code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

function build_modifier_assignments(info, param_pairs, values)
    modifiers = Dict{String, String}(info["modifiers"])
    call_modifiers = Dict{String, String}(info["call_modifiers"])

    dynamic_vars = [dynamic_var for (_, dynamic_var) in param_pairs]
    scalar_vars = [v for v in dynamic_vars if !(endswith(v, ".re") || endswith(v, ".im"))]
    complex_bases = unique(replace(v, r"\.(re|im)$" => "") for v in dynamic_vars if endswith(v, ".re") || endswith(v, ".im"))

    for field in scalar_vars
        haskey(values, field) || error("Missing extracted value for $field")
        modifiers[field] = string(values[field])
    end

    # Rebuild Complex(...) modifiers from the extracted .re/.im values.
    for base in complex_bases
        real_key = base * ".re"
        imag_key = base * ".im"
        haskey(values, real_key) || error("Missing extracted value for $real_key")
        haskey(values, imag_key) || error("Missing extracted value for $imag_key")
        modifiers[base] = "Complex($(values[real_key]), $(values[imag_key]))"
    end

    assignments = String[]
    for (field, value) in modifiers
        push!(assignments, "$(field) = $(value)")
    end
    for (field, value) in call_modifiers
        push!(assignments, "$(field)($(value))")
    end

    return assignments
end

function apply_initialization_modifiers!(omc, target_model, initializable_components, init_params, values_by_component, init_model_by_component = Dict{String, String}())
    for (component, info) in initializable_components
        haskey(values_by_component, component) || error("Missing extracted values for $component")
        current_class = info["class"]
        param_pairs = _resolve_init_params(component, current_class, init_params, init_model_by_component)
        assignments = build_modifier_assignments(info, param_pairs, values_by_component[component])
        mod_str = _code_modification_from_assignments(assignments)
        om_send(omc, "updateComponent($component, $current_class, $target_model, modification = $mod_str)", parsed = false)
    end
end

end # module
