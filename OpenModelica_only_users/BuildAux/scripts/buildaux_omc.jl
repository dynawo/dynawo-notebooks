# scripts/buildaux_omc.jl
# OpenModelica query and inspection helpers

include("buildaux_parse.jl")

module BuildAuxOmc
using OMJulia

using ..BuildAuxParse:
    parse_modifier_dict,
    parse_call_modifier_dict,
    parse_component,
    parse_nth_connection,
    component_of_connector

export
    om_send,
    resolve_load_ref_value,
    inherited_classes,
    get_inheritance_chain,
    get_all_components,
    get_comp_param_value

# ------------------------------------------------------------
# OpenModelica Command Wrapper
# ------------------------------------------------------------

"""
    om_send(omc, expr; parsed=true)

Send an expression to OpenModelica and print the command.

If OpenModelica fails, this prints `getErrorString()` and rethrows.
"""
function om_send(omc, expr; parsed = true)
    println("OMC -> ", expr)
    try
        return sendExpression(omc, expr; parsed = parsed)
    catch err
        println("OMC FAILED on: ", expr)
        println("OpenModelica says:")
        println(sendExpression(omc, "getErrorString()"))
        rethrow(err)
    end
end

# ------------------------------------------------------------
# Component and Value Retrieval
# ------------------------------------------------------------

"""
    resolve_load_ref_value(omc, model::String, comp::String, field::String) -> String

For loads: get numeric value assigned via equations like
loadPQ1.PRefPu = PrefPu_load_01.setPoint;
PrefPu_load_01.setPoint = loadPQ1.PRefPu;

If the right-hand side is `X.setPoint`, this returns `X.Value0`.
Returns `""` when no matching equation is found.
"""
function resolve_load_ref_value(omc, model::String, comp::String, field::String)
    target = "$comp.$field"
    neq = sendExpression(omc, "getEquationItemsCount($model)")
    for i in 1:neq
        eqi = String(sendExpression(omc, "getNthEquationItem($model, $i)", parsed = false))
        eqi = replace(eqi, "\"" => "")

        occursin("=", eqi) || continue
        parts = split(strip(eqi), "=", limit = 2)
        length(parts) == 2 || continue

        lhs = strip(replace(parts[1], ";" => ""))
        rhs = strip(replace(parts[2], ";" => ""))

        other = ""
        if lhs == target
            other = rhs
        elseif rhs == target
            other = lhs
        else
            continue
        end

        m = match(r"^([A-Za-z_]\w*)\.setPoint$", other)
        if m !== nothing
            sp = m.captures[1]
            return string(sendExpression(omc, "getComponentModifierValue($model, $sp.Value0)"))
        end

        return other
    end

    return ""
end

"""
    inherited_classes(omc, model::String) -> Vector{String}

Return direct inherited classes for `model`, filtering out icon-only parents.
"""
function inherited_classes(omc, model::String)
    raw = strip(String(om_send(omc, "getInheritedClasses($model)", parsed = false)))
    raw = replace(raw, "{" => "", "}" => "", ";" => "", "\"" => "")
    isempty(strip(raw)) && return String[]

    parents = String[]
    for parent in split(raw, ",")
        parent = strip(parent)
        isempty(parent) && continue
        if startswith(parent, "Modelica.Icons") || startswith(parent, "Dynawo.Icons")
            continue
        end
        push!(parents, parent)
    end

    return parents
end

"""
    get_inheritance_chain(omc, root::String) -> Vector{String}

Return the inheritance chain of `root`, ordered from oldest parent to child.
"""
function get_inheritance_chain(omc, root::String)
    chain = String[]
    seen = Set{String}()

    function visit(model::String)
        model in seen && return
        push!(seen, model)

        for parent in inherited_classes(omc, model)
            visit(parent)
        end

        push!(chain, model)
    end

    visit(root)
    return chain
end

# ------------------------------------------------------------
# Model Inspection Helpers
# ------------------------------------------------------------

"""
    get_all_components(omc, model) -> Dict{String, Dict{String,Any}}

Query OpenModelica for all components in `model`.

Each component entry contains:
- `name`
- `class`
- `modifiers` for top-level `a = b`
- `call_modifiers` for call-style modifiers like `a(fixed = false)`
"""
function get_all_components(omc, model)
    n = sendExpression(omc, "getComponentCount($model)")

    components = Dict{String, Dict{String, Any}}()

    for i in 1:n
        raw = sendExpression(omc, "getNthComponent($model, $i)", parsed = false)
        comp_class, comp_name = parse_component(raw)

        mod_raw = sendExpression(omc, "getNthComponentModification($model, $i)", parsed = false)
        mod_dict = parse_modifier_dict(mod_raw)
        call_mod_dict = parse_call_modifier_dict(mod_raw)

        name = String(comp_name)

        components[name] = Dict{String, Any}(
            "name" => name,
            "class" => String(comp_class),
            "modifiers" => mod_dict,
            "call_modifiers" => call_mod_dict,
        )
    end

    return components
end

"""
    _get_component_class_map(omc, model) -> Dict{String,String}

Return a map `component_name => component_class` for `model`.  Helper for the function apply_LF_modifiers!
"""
function _get_component_class_map(omc, model::String)
    n = sendExpression(omc, "getComponentCount($model)")
    class_map = Dict{String, String}()

    for i in 1:n
        raw = sendExpression(omc, "getNthComponent($model, $i)", parsed = false)
        comp_class, comp_name = parse_component(raw)
        class_map[String(comp_name)] = String(comp_class)
    end

    return class_map
end

"""
    get_comp_param_value(omc, model, components, comp_name, param) -> Any

Return `param` value for `comp_name` in `model`.

Priority:
1. explicit parsed modifier from `components`
2. OpenModelica `getComponentModifierValue` fallback
"""
function get_comp_param_value(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    param::String,
)
    if haskey(components, comp_name)
        mods = components[comp_name]["modifiers"]
        if isa(mods, Dict) && haskey(mods, param)
            return mods[param]
        end
    end

    return sendExpression(omc, "getComponentModifierValue($model, $comp_name.$param)")
end

end # module
