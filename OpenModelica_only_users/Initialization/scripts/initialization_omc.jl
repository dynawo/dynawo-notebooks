# scripts/initialization_omc.jl
# OpenModelica query and inspection helpers

include("initialization_parse.jl")

module InitializationOmc
using OMJulia

using ..InitializationParse:
    parse_modifier_dict,
    parse_call_modifier_dict,
    parse_component

export
    om_send,
    inherited_classes,
    get_inheritance_chain,
    get_all_components,
    print_omc_errors,
    run_omc_diagnostic

"""
    om_send(omc, expr; parsed = true)

Send an expression to OpenModelica and print the command first.

If OpenModelica raises an error, this prints `getErrorString()` and rethrows.
"""
function om_send(omc, expr; parsed = true)
    println("OMC -> ", expr)
    try
        return sendExpression(omc, expr; parsed = parsed)
    catch err
        println(sendExpression(omc, "getErrorString()", parsed = false))
        rethrow(err)
    end
end

"""
    inherited_classes(omc, model::String) -> Vector{String}

Return the direct inherited classes for `model`, filtering out icon-only
parents such as `Modelica.Icons.*` and `Dynawo.Icons.*`.
"""
function inherited_classes(omc, model::String)
    raw = strip(String(om_send(omc, "getInheritedClasses($model)", parsed = false)))
    raw = replace(raw, "{" => "", "}" => "", ";" => "", "\"" => "")
    isempty(strip(raw)) && return String[]

    parents = String[]
    for parent in split(raw, ",")
        parent = strip(parent)
        isempty(parent) && continue
        startswith(parent, "Modelica.Icons") && continue
        startswith(parent, "Dynawo.Icons") && continue
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

    """
        visit(model::String)

    Depth-first helper used to collect parent classes before the child model.
    """
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

"""
    get_all_components(omc, model) -> Dict{String, Dict{String, Any}}

Query OpenModelica for all components in `model`.

Each component entry contains the component class plus parsed assignment and
call-style modifiers.
"""
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

"""
    print_omc_errors(omc, label::String)

Print `getErrorString()` output for `omc` under a readable label.
"""
function print_omc_errors(omc, label::String)
    raw = String(sendExpression(omc, "getErrorString()", parsed = false))
    txt = strip(replace(raw, "\"" => ""))
    println("\n[$label] getErrorString()")
    if isempty(txt)
        println("<no messages>")
    else
        println(raw)
    end
end

"""
    run_omc_diagnostic(omc, label::String, expr::String)

Run one diagnostic OpenModelica expression, print the result, and then print
the associated OMC messages.
"""
function run_omc_diagnostic(omc, label::String, expr::String)
    sendExpression(omc, "clearMessages()")
    println("\n=== $label ===")
    println("OMC -> ", expr)
    try
        result = sendExpression(omc, expr, parsed = false)
        println(result)
    catch err
        println("Julia/OMJulia error while running: ", expr)
        showerror(stdout, err)
        println()
    end
    print_omc_errors(omc, label)
end

end # module
