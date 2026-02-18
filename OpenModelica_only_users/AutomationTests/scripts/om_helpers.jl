# scripts/om_helpers.jl

module OMHelpers
using OMJulia

export
    parse_modifier_dict,
    parse_component,
    parse_nth_connection,
    component_of_connector,
    get_all_components,
    code_modification_from_assignments,
    get_comp_param_value,
    apply_replacements!,
    add_init_models!,
    add_init_equations!,
    delete_source_connections!,
    delete_sources!,
    patch_aux_equations!


# ------------------------------------------------------------
# ------------------------------------------------------------    
# ----------------------- FUNCTIONS --------------------------
# ------------------------------------------------------------
# ------------------------------------------------------------

# ------------------------------------------------------------
# Parsing helpers & String utilities
# ------------------------------------------------------------

"""
    parse_modifier_dict(mod_raw::String) -> Dict{String,String}

Parse OpenModelica component modification text returned by `getNthComponentModification` when it is wrapped like `{\$Code((...))}`.
Returns a dictionary of *explicit* `key => value` pairs, with values kept as raw strings (e.g. `"1"`, `"acos(BESS.PF0)"`, `"Complex(0.5, 0.0)"`).
"""
function parse_modifier_dict(mod_raw::String)
    s = strip(mod_raw)

    if s == "{}"
        return Dict{String, String}()
    end

    # Strip the OpenModelica {$Code(( ... ))} wrapper
    s = replace(s, r"^\{\$Code\(\(" => "")
    s = replace(s, r"\)\)\}$" => "")
    s = strip(s)

    # Split by commas, but ignore commas inside parentheses
    parts = String[]
    buf = IOBuffer()
    depth = 0

    for c in s
        if c == '('
            depth += 1
        elseif c == ')'
            depth = max(depth - 1, 0)
        end

        # Only split at top-level commas
        if c == ',' && depth == 0
            push!(parts, strip(String(take!(buf))))
        else
            write(buf, c)
        end
    end

    tail = strip(String(take!(buf)))
    if !isempty(tail)
        push!(parts, tail)
    end

    result = Dict{String, String}()
    for p in parts
        kv = split(p, "=", limit=2)
        if length(kv) == 2
            result[strip(kv[1])] = strip(kv[2])
        end
    end

    return result
end

"""
    parse_component(raw::String) -> (comp_class::String, comp_name::String)

Parse the raw string returned by OpenModelica `getNthComponent`, typically formatted like: `{ClassName, componentName}`.
"""
function parse_component(raw::String)
    s = strip(raw)
    s = replace(s, "{" => "")
    s = replace(s, "}" => "")
    parts = split(s, ",")

    comp_class = strip(parts[1])
    comp_name  = strip(parts[2])

    return comp_class, comp_name
end

"""
    parse_nth_connection(raw::String) -> (from::SubString{String}, to::SubString{String})

Parse raw output from OpenModelica `getNthConnection`, typically: `{"from", "to", "comment"}`.
Returns the `from` and `to` connector strings.
"""
function parse_nth_connection(raw::String)
    ms = collect(eachmatch(r"\"([^\"]*)\"", raw))
    
    from = ms[1].captures[1]
    to   = ms[2].captures[1]
    return from, to
end

"""
    component_of_connector(conn::AbstractString) -> String

Extract the component name from a connector reference like `"URefPu.y"` or `"BESS.URefPu"`.
Returns the substring before the first dot.
"""
function component_of_connector(conn::AbstractString)
    return String(split(conn, ".", limit=2)[1])
end

# ------------------------------------------------------------
# Model inspection helpers (query OpenModelica)
# ------------------------------------------------------------

"""
    get_all_components(omc, model_name) -> Dict{String, Dict{String,Any}}

Query OpenModelica for all components in `model_name`.

Returns a dictionary keyed by component name. Each component entry contains:
- `"name"`             :: String
- `"class"`            :: String
- `"modification_raw"` :: String   (raw text from `getNthComponentModification`)
- `"modifiers"`        :: Dict{String,String}  (explicitly-set modifiers only)
"""
function get_all_components(omc, model)
    n = sendExpression(omc, "getComponentCount($model)")

    components = Dict{String, Dict{String, Any}}()

    for i in 1:n
        raw = sendExpression(omc, "getNthComponent($model, $i)", parsed=false)
        comp_class, comp_name = parse_component(raw)

        mod_raw  = sendExpression(omc, "getNthComponentModification($model, $i)", parsed=false)
        mod_dict = parse_modifier_dict(mod_raw)

        name = String(comp_name)

        components[name] = Dict{String, Any}(
            "name" => name,
            "class" => String(comp_class),
            "modification_raw" => String(strip(mod_raw)),
            "modifiers" => mod_dict
        )
    end

    return components
end

# ------------------------------------------------------------
# Modification helpers
# ------------------------------------------------------------

"""
    code_modification_from_assignments(assignments::Vector{String}) -> String

Build a Modelica modification string of the form: `\$Code((a = 1, b = 2, ...))`

`assignments` must already contain items formatted like `"param = value"`.
"""
function code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

"""
    get_comp_param_value(omc, model, components, comp_name, param) -> Any

Get the value of `param` for component `comp_name` in `model`.

Logic:
1. If `components[comp_name]["modifiers"]` contains `param`, return that raw string value (explicit modifiers only).
2. Otherwise, fall back to OpenModelica `getComponentModifierValue`, which can return defaults or inherited values.
"""
function get_comp_param_value(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    param::String)
    if haskey(components, comp_name)
        mods = components[comp_name]["modifiers"]
        if isa(mods, Dict) && haskey(mods, param)
            return mods[param]
        end
    end
    # fallback if missing in parsed modifiers
    return sendExpression(omc, "getComponentModifierValue($model, $comp_name.$param)")
end

# ------------------------------------------------------------
# Model transformation and cleanup steps
# ------------------------------------------------------------

"""
    apply_replacements!(omc, model, aux_model, REPLACEMENTS, components)

Apply component replacements specified in `REPLACEMENTS` to `aux_model`.

This function:
1) reads the requested parameters from `model` (using `components` + OM fallback),
2) builds a `\$Code((...))` modification string, and
3) calls `updateComponent(...)` in OpenModelica on `aux_model`.
"""
function apply_replacements!(
    omc,
    model::String,
    aux_model::String,
    REPLACEMENTS::Dict{String,Any},
    components::Dict{String, Dict{String, Any}})
    # Loop over all components in the model
    for (comp_name, c) in components
        old_class = c["class"]::String

        # Only replace if this component's class is in the dictionary
        if !haskey(REPLACEMENTS, old_class)
            continue
        end

        spec = REPLACEMENTS[old_class]::Dict{String,Any}
        new_class = spec["new_class"]::String
        write_map = spec["write_modifiers"]::Dict{String,String}

        assignments = String[]
        for (new_param, old_param) in write_map
            val = get_comp_param_value(omc, model, components, comp_name, old_param)
            push!(assignments, "$(new_param) = $(val)")
        end

        mod_str = code_modification_from_assignments(assignments)

        sendExpression(omc,
            "updateComponent($comp_name, $new_class, $aux_model, modification = $mod_str)"
        )
    end
end


"""
    add_init_models!(omc, model, aux_model, INIT_MODELS, components)

Add INIT components described in `INIT_MODELS` to `aux_model`.

For each base component, this function:
1) copies selected parameters from `model` (using `components` + OM fallback),
2) appends any `extra_modifiers_raw` entries verbatim, and
3) calls `addComponent(init_name, init_class, ...)` with a `\$Code((...))` modification.
"""
function add_init_models!(
    omc,
    model::String,
    aux_model::String,
    INIT_MODELS::Dict{String,Any},
    components::Dict{String, Dict{String, Any}})
    # Loop over every component in the model
    for (base_comp, c) in components
        base_class = c["class"]::String

        # Only act if this component's class has an INIT rule
        if !haskey(INIT_MODELS, base_class)
            continue
        end

        spec = INIT_MODELS[base_class]::Dict{String,Any}

        suffix     = spec["init_component_suffix"]::String
        init_name  = base_comp * suffix
        init_class = spec["init_class"]::String
        write_map  = spec["write_modifiers"]::Dict{String,String}
        extra_raw  = spec["extra_modifiers_raw"]::Vector{String}

        assignments = String[]

        # Copy mapped parameters from the base component (e.g. BESS2 -> BESS2_INIT)
        for (init_param, base_param) in write_map
            val = get_comp_param_value(omc, model, components, base_comp, base_param)
            push!(assignments, "$(init_param) = $(val)")
        end

        # Append raw modifiers (e.g. Q0Pu(fixed=false))
        append!(assignments, extra_raw)

        mod_str = code_modification_from_assignments(assignments)

        sendExpression(omc,
            "addComponent($init_name, $init_class, $aux_model, modification = $mod_str)"
        )
    end
end


"""
    add_init_equations!(omc, aux_model, components, INIT_MODELS)

Add `initial equation` statements to `aux_model` for all components
whose class appears in `INIT_MODELS`.

For each matching component, equations are generated using the
`init_equations` mapping and injected into the model via
`loadClassContentString`.
"""
function add_init_equations!(
    omc,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    INIT_MODELS::Dict{String,Any})
    lines = String[]
    push!(lines, "initial equation")

    for (base_name, c) in components
        base_class = c["class"]::String
        if !haskey(INIT_MODELS, base_class)
            continue
        end

        spec = INIT_MODELS[base_class]::Dict{String,Any}
        suffix = spec["init_component_suffix"]::String
        init_name = base_name * suffix

        eqmap = spec["init_equations"]::Dict{String,String}
        for (init_var, base_var) in eqmap
            push!(lines, "$init_name.$init_var = $base_name.$base_var;")
        end
    end

    block = join(lines, "\n")
    sendExpression(omc, "loadClassContentString(\"$block\", $aux_model)")
end


"""
    delete_source_connections!(omc, aux_model, components) -> Set{String}

Delete all connections in `aux_model` that touch a "source" component.
Returns the set of detected source component names.

Important: Iterates connections **backwards** because deleting connections reindexes the connection list.
"""
function delete_source_connections!(omc, aux_model::String, components::Dict{String, Dict{String, Any}})
    # Identify source component names (by class prefix)
    sources = Set{String}()
    for (name, c) in components
        cls = c["class"]::String
        if startswith(cls, "Modelica.Blocks.Sources.")
            push!(sources, name)
        end
    end

    # Iterate backwards: deleting shifts indices in OpenModelica's connection list
    count = sendExpression(omc, "getConnectionCount($aux_model)")

    for i in count:-1:1
        raw = sendExpression(omc, "getNthConnection($aux_model, $i)", parsed=false)
        from, to = parse_nth_connection(raw)

        from_comp = component_of_connector(from)
        to_comp   = component_of_connector(to)

        if (from_comp in sources) || (to_comp in sources)
            sendExpression(omc, "deleteConnection($from, $to, $aux_model)")
        end
    end

    return sources
end

"""
    delete_sources!(omc, aux_model, components)

Delete all components in `aux_model` whose class starts with `Modelica.Blocks.Sources.`.
"""
function delete_sources!(omc, aux_model::String, components::Dict{String, Dict{String, Any}})
    for (name, c) in components
        cls = c["class"]::String

        if startswith(cls, "Modelica.Blocks.Sources.")
            sendExpression(omc, "deleteComponent($name, $aux_model)")
        end
    end
end


# ------------------------------------------------------------
# Equation replacement
# ------------------------------------------------------------

function patch_aux_equations!(aux_file::String)
    txt = read(aux_file, String)
    txt = replace(txt, "BESS.injector.switchOffSignal1.value = false;" => "BESS.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal2.value = false;" => "BESS.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal3.value = false;" => "BESS.switchOffSignal3.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal1.value = false;" => "BESS2.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal2.value = false;" => "BESS2.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal3.value = false;" => "BESS2.switchOffSignal3.value = false;")
    write(aux_file, txt)
    return nothing
end

end # module
