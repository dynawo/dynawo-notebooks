# helpers/openmodelica.jl
# OpenModelica query and inspection helpers

# ------------------------------------------------------------
# OpenModelica Command Wrapper
# ------------------------------------------------------------

"""
    omc_call(omc, expression; parsed = true)

Send an expression to OpenModelica and return its result.

If OpenModelica reports an error or returns failure, stop with the expression
and the OpenModelica error messages. Successful calls remain quiet.
"""
function omc_call(omc, expression; parsed = true)
    sendExpression(omc, "clearMessages()")

    result = sendExpression(omc, expression; parsed = parsed)

    _, num_errors, _ = sendExpression(omc, "countMessages()")
    messages = sendExpression(omc, "getErrorString()")

    if result === false || result === nothing || num_errors > 0
        error("""
        OpenModelica call failed.

        Expression:
        $expression

        Result:
        $result

        OpenModelica messages:
        $messages
        """)
    end

    return result
end

# ------------------------------------------------------------
# Component and Value Retrieval
# ------------------------------------------------------------

"""
    resolve_load_ref_value(omc, model::String, comp::String, field::String) -> String

For loads: get numeric value assigned via plain equations like
loadPQ1.PRefPu = PrefPu_load_01.setPoint;
PrefPu_load_01.setPoint = loadPQ1.PRefPu;

If the right-hand side is `X.setPoint` or `X.step`, this returns `X.Value0`.
Derivative and `when` equations are ignored.
Returns `""` when no matching equation is found.
"""
function resolve_load_ref_value(omc, model::String, comp::String, field::String)
    target = "$comp.$field"
    neq = sendExpression(omc, "getEquationItemsCount($model)")
    for i in 1:neq
        eqi = String(sendExpression(omc, "getNthEquationItem($model, $i)", parsed = false))
        eqi = strip(replace(eqi, "\"" => ""))

        startswith(eqi, "when ") && continue
        occursin("der(", eqi) && continue

        occursin("=", eqi) || continue
        parts = split(eqi, "=", limit = 2)
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

        m = match(r"^([A-Za-z_]\w*)\.(setPoint|step)$", other)
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
    raw = strip(String(omc_call(omc, "getInheritedClasses($model)", parsed = false)))
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
