# scripts/mynordic_transform.jl

include("mynordic_parse.jl")

module MyNordicTransform
using OMJulia

using ..MyNordicParse:
    parse_modifier_dict,
    parse_call_modifier_dict,
    parse_component,
    parse_nth_connection,
    component_of_connector

export
    om_send,
    resolve_load_ref_value,
    get_inheritance_chain,
    get_all_components,
    collect_blacklisted_component_names,
    code_modification_from_assignments,
    get_comp_param_value,
    apply_replacements!,
    add_init_models!,
    apply_LF_modifiers!,
    add_init_equations!,
    delete_connections!,
    delete_components!,
    rewrite_aux_extends,
    patch_aux_equations!,
    patch_testcase_omega_refs!

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
- `modification_raw`
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
            "modification_raw" => String(strip(mod_raw)),
            "modifiers" => mod_dict,
            "call_modifiers" => call_mod_dict,
        )
    end

    return components
end

"""
    get_component_class_map(omc, model) -> Dict{String,String}

Return a map `component_name => component_class` for `model`.
"""
function get_component_class_map(omc, model::String)
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

# ------------------------------------------------------------
# Modification Builder
# ------------------------------------------------------------

"""
    code_modification_from_assignments(assignments::Vector{String}) -> String

Build a Modelica modification string: `\$Code((a = 1, b = 2, ...))`.

Entries may be standard assignments or raw call-style modifier fragments.
"""
function code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

# ------------------------------------------------------------
# Auxiliary Model Transformation and Cleanup
# ------------------------------------------------------------

const CLEANUP_CLASS_PREFIXES = (
    "Modelica.Blocks.Sources.",
    "Dynawo.Electrical.Events.",
    "Dynawo.Electrical.Loads.LoadConnect_INIT",
)

"""
    is_cleanup_class(cls::String) -> Bool

Return whether `cls` matches one of the configured cleanup prefixes.
"""
function is_cleanup_class(cls::String)
    return any(startswith(cls, p) for p in CLEANUP_CLASS_PREFIXES)
end

"""
    collect_cleanup_component_names(components) -> Set{String}

Collect component names whose classes match the cleanup prefixes.
"""
function collect_cleanup_component_names(components::Dict{String, Dict{String, Any}})
    names = Set{String}()
    for (name, c) in components
        cls = c["class"]::String
        if is_cleanup_class(cls)
            push!(names, name)
        end
    end
    return names
end

"""
    collect_blacklisted_component_names(omc, models::Vector{String}) -> Set{String}

Collect cleanup-target component names across a full class chain.
Use this when declarations can be in a parent class while connections are
written in child classes.
"""
function collect_blacklisted_component_names(omc, models::Vector{String})
    names = Set{String}()
    for model in models
        components = get_all_components(omc, model)
        union!(names, collect_cleanup_component_names(components))
    end
    return names
end

"""
    apply_replacements!(omc, model, aux_model, REPLACEMENTS, components, SLACK_COMPONENT)

Apply class replacements from `REPLACEMENTS` to `aux_model`.

For each mapped `new_param => old_param`, this reuses call-style modifiers
first, then assignment modifiers, then falls back to OpenModelica value lookup.
"""
function apply_replacements!(
    omc,
    model::String,
    aux_model::String,
    REPLACEMENTS::Dict{String, Any},
    components::Dict{String, Dict{String, Any}},
    SLACK_COMPONENT::String,
)
    for (comp_name, c) in components
        old_class = c["class"]::String

        mods = Dict{String, String}()
        raw_mods = c["modifiers"]
        if isa(raw_mods, Dict)
            for (k, v) in raw_mods
                mods[string(k)] = string(v)
            end
        end

        call_mods = Dict{String, String}()
        if haskey(c, "call_modifiers")
            raw_calls = c["call_modifiers"]
            if isa(raw_calls, Dict)
                for (k, v) in raw_calls
                    call_mods[string(k)] = string(v)
                end
            end
        end

        if comp_name == SLACK_COMPONENT
            assignments = String[]

            if haskey(call_mods, "U0Pu")
                push!(assignments, "UPu(" * call_mods["U0Pu"] * ")")
            elseif haskey(mods, "U0Pu")
                push!(assignments, "UPu = " * mods["U0Pu"])
            else
                val = get_comp_param_value(omc, model, components, comp_name, "U0Pu")
                if isempty(strip(string(val)))
                    error("Empty value for $model.$comp_name.U0Pu while building slack replacement for $comp_name")
                end
                push!(assignments, "UPu = $(val)")
            end

            if haskey(call_mods, "UPhase0")
                push!(assignments, "UPhase(" * call_mods["UPhase0"] * ")")
            elseif haskey(mods, "UPhase0")
                push!(assignments, "UPhase = " * mods["UPhase0"])
            else
                val = get_comp_param_value(omc, model, components, comp_name, "UPhase0")
                if isempty(strip(string(val)))
                    error("Empty value for $model.$comp_name.UPhase0 while building slack replacement for $comp_name")
                end
                push!(assignments, "UPhase = $(val)")
            end

            mod_str = code_modification_from_assignments(assignments)
            om_send(
                omc,
                "updateComponent($comp_name, Dynawo.Electrical.Buses.InfiniteBus, $aux_model, modification = $mod_str)",
                parsed = false,
            )
            continue
        end

        if !haskey(REPLACEMENTS, old_class)
            continue
        end

        spec = REPLACEMENTS[old_class]::Dict{String, Any}
        new_class = spec["new_class"]::String

        write_map = Dict{String, String}()
        if haskey(spec, "write_modifiers")
            raw_map = spec["write_modifiers"]
            if isa(raw_map, Dict)
                for (k, v) in raw_map
                    write_map[string(k)] = string(v)
                end
            end
        end

        extra_raw = haskey(spec, "extra_modifiers_raw") ? spec["extra_modifiers_raw"]::Vector{String} : String[]

        assignments = String[]
        for (new_param, old_param) in write_map
            if haskey(call_mods, old_param)
                push!(assignments, "$(new_param)($(call_mods[old_param]))")
                continue
            end

            if haskey(mods, old_param)
                push!(assignments, "$(new_param) = $(mods[old_param])")
                continue
            end

            val = get_comp_param_value(omc, model, components, comp_name, old_param)
            push!(assignments, "$(new_param) = $(val)")
        end

        append!(assignments, extra_raw)

        mod_str = code_modification_from_assignments(assignments)

        om_send(
            omc,
            "updateComponent($comp_name, $new_class, $aux_model, modification = $mod_str)",
            parsed = false,
        )
    end
end

"""
    resolve_init_spec(base_comp, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT) -> Union{Nothing, Dict{String, Any}}

Resolve the leaf INIT spec for a component.

If the class entry has `profiles`, the component must appear in
`INIT_MODEL_BY_COMPONENT` and the selected profile must exist.
If the class entry is direct, any explicit component selection is rejected.
Returns `nothing` when the class has no INIT entry.
"""
function resolve_init_spec(
    base_comp::String,
    base_class::String,
    INIT_MODELS::Dict{String, Any},
    INIT_MODEL_BY_COMPONENT::Dict{String, String},
)
    if !haskey(INIT_MODELS, base_class)
        return nothing
    end

    class_spec = INIT_MODELS[base_class]

    if haskey(class_spec, "profiles")
        if !haskey(INIT_MODEL_BY_COMPONENT, base_comp)
            error("Missing INIT model selection for component $base_comp of class $base_class")
        end

        profile_name = INIT_MODEL_BY_COMPONENT[base_comp]
        profiles = class_spec["profiles"]

        if !haskey(profiles, profile_name)
            error("Unknown INIT profile $profile_name for component $base_comp of class $base_class")
        end

        return profiles[profile_name]
    end

    if haskey(INIT_MODEL_BY_COMPONENT, base_comp)
        profile_name = INIT_MODEL_BY_COMPONENT[base_comp]
        error("Component $base_comp selects INIT profile $profile_name, but class $base_class has no profiles")
    end

    return class_spec
end

"""
    add_init_models!(omc, model, aux_model, INIT_MODELS, INIT_MODEL_BY_COMPONENT, components, SLACK_COMPONENT)

Add INIT components described in `INIT_MODELS` to `aux_model`.

This copies mapped parameters from each base component and appends
`extra_modifiers_raw` before calling `addComponent`.
"""
function add_init_models!(
    omc,
    model::String,
    aux_model::String,
    INIT_MODELS::Dict{String, Any},
    INIT_MODEL_BY_COMPONENT::Dict{String, String},
    components::Dict{String, Dict{String, Any}},
    SLACK_COMPONENT::String,
)
    for (base_comp, c) in components
        base_class = c["class"]::String
        spec = resolve_init_spec(base_comp, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT)
        if isnothing(spec)
            continue
        end
        spec = spec::Dict{String, Any}

        suffix = spec["init_component_suffix"]::String
        init_name = base_comp * suffix
        init_class = spec["init_class"]::String
        write_map = spec["write_modifiers"]::Dict{String, String}
        extra_raw = haskey(spec, "extra_modifiers_raw") ? spec["extra_modifiers_raw"]::Vector{String} : String[]
        write_from_model = haskey(spec, "write_modifiers_from_model") ? spec["write_modifiers_from_model"]::Vector{String} : String[]
        is_slack = base_comp == SLACK_COMPONENT

        assignments = String[]
        for (init_param, base_param) in write_map
            if is_slack && (init_param == "P0Pu" || init_param == "Q0Pu")
                continue
            end

            val = ""

            if startswith(base_class, "Dynawo.Electrical.Loads.") && (base_param == "PRefPu" || base_param == "QRefPu")
                val = resolve_load_ref_value(omc, model, base_comp, base_param)
            else
                val = string(get_comp_param_value(omc, model, components, base_comp, base_param))
            end

            if isempty(strip(val))
                error("Empty value for $model.$base_comp.$base_param while building $init_name.$init_param")
            end

            push!(assignments, "$(init_param) = $(val)")
        end

        for init_param in write_from_model
            push!(assignments, "$(init_param) = $(base_comp)_INITparams.$(init_param)")
        end

        if is_slack
            append!(assignments, [
                "P0Pu(fixed = false)",
                "Q0Pu(fixed = false)",
            ])
        else
            append!(assignments, extra_raw)
        end

        mod_str = code_modification_from_assignments(assignments)

        om_send(
            omc,
            "addComponent($init_name, $init_class, $aux_model, modification = $mod_str)",
            parsed = false,
        )
    end
end

"""
    apply_LF_modifiers!(omc, model, aux_model, INIT_MODELS, components)

Apply optional `LF_modifiers_raw` to base components in `aux_model`.

Only components whose class appears in `INIT_MODELS` are considered.
The current auxiliary class is preserved so previous replacements are not lost.
"""
function apply_LF_modifiers!(
    omc,
    model::String,
    aux_model::String,
    INIT_MODELS::Dict{String, Any},
    components::Dict{String, Dict{String, Any}},
)
    aux_class_map = get_component_class_map(omc, aux_model)

    for (base_comp, c) in components
        base_class = c["class"]::String
        if !haskey(INIT_MODELS, base_class)
            continue
        end

        spec = INIT_MODELS[base_class]
        if !haskey(spec, "LF_modifiers_raw")
            continue
        end

        extra_raw = spec["LF_modifiers_raw"]::Vector{String}
        isempty(extra_raw) && continue

        if !haskey(aux_class_map, base_comp)
            continue
        end

        current_aux_class = aux_class_map[base_comp]
        mod_str = code_modification_from_assignments(extra_raw)

        om_send(
            omc,
            "updateComponent($base_comp, $current_aux_class, $aux_model, modification = $mod_str)";
            parsed = false,
        )
    end
end

"""
    add_init_equations!(omc, aux_model, components, INIT_MODELS, INIT_MODEL_BY_COMPONENT, SLACK_COMPONENT)

Build and inject an `initial equation` block into `aux_model`.

Equations are generated from `init_equations` mappings in `INIT_MODELS`.
"""
function add_init_equations!(
    omc,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    INIT_MODELS::Dict{String, Any},
    INIT_MODEL_BY_COMPONENT::Dict{String, String},
    SLACK_COMPONENT::String,
)
    lines = String[]
    push!(lines, "initial equation")

    for (base_name, c) in components
        base_class = c["class"]::String
        spec = resolve_init_spec(base_name, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT)
        if isnothing(spec)
            continue
        end
        spec = spec::Dict{String, Any}
        suffix = spec["init_component_suffix"]::String
        init_name = base_name * suffix

        if base_name == SLACK_COMPONENT
            push!(lines, "$init_name.P0Pu = Modelica.ComplexMath.real($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i));")
            push!(lines, "$init_name.Q0Pu = Modelica.ComplexMath.imag($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i));")
            continue
        end

        eqmap = spec["init_equations"]::Dict{String, String}
        for (init_var, base_var) in eqmap
            push!(lines, "$init_name.$init_var = $base_name.$base_var;")
        end
    end

    block = join(lines, "\n")
    om_send(omc, "loadClassContentString(\"$block\", $aux_model)", parsed = false)
end

"""
    delete_connections!(omc, aux_model, components; global_targets=nothing) -> Set{String}

Delete all connections in `aux_model` that touch a cleanup-target component.
Returns the set of effective target component names.

Important: Iterates connections backwards because deleting connections
reindexes the connection list.
"""
function delete_connections!(
    omc,
    aux_model::String,
    components::Dict{String, Dict{String, Any}};
    global_targets::Union{Nothing, Set{String}} = nothing,
)
    local_targets = collect_cleanup_component_names(components)
    cleanup_targets = isnothing(global_targets) ? local_targets : union(local_targets, global_targets)

    count = sendExpression(omc, "getConnectionCount($aux_model)")

    for i in count:-1:1
        raw = sendExpression(omc, "getNthConnection($aux_model, $i)", parsed = false)
        from, to = parse_nth_connection(raw)

        from_comp = component_of_connector(from)
        to_comp = component_of_connector(to)

        if (from_comp in cleanup_targets) || (to_comp in cleanup_targets)
            sendExpression(omc, "deleteConnection($from, $to, $aux_model)")
        end
    end

    return cleanup_targets
end

"""
    delete_components!(omc, aux_model, components)

Delete all cleanup-target components in `aux_model`.
"""
function delete_components!(omc, aux_model::String, components::Dict{String, Dict{String, Any}})
    for name in collect_cleanup_component_names(components)
        sendExpression(omc, "deleteComponent($name, $aux_model)")
    end
end

# Backward-compatible aliases for older notebooks.
delete_blacklisted_connections!(omc, aux_model::String, components::Dict{String, Dict{String, Any}}; global_targets::Union{Nothing, Set{String}} = nothing) =
    delete_connections!(omc, aux_model, components; global_targets = global_targets)

delete_blacklisted_components!(omc, aux_model::String, components::Dict{String, Dict{String, Any}}) =
    delete_components!(omc, aux_model, components)

delete_source_connections!(omc, aux_model::String, components::Dict{String, Dict{String, Any}}; global_targets::Union{Nothing, Set{String}} = nothing) =
    delete_connections!(omc, aux_model, components; global_targets = global_targets)

delete_sources!(omc, aux_model::String, components::Dict{String, Dict{String, Any}}) =
    delete_components!(omc, aux_model, components)

# ------------------------------------------------------------
# Text Rewriting and Post-Save Model Patching
# ------------------------------------------------------------

"""
    escape_regex(text::String) -> String

Escape regex metacharacters in `text`.
"""
function escape_regex(text::String)
    return replace(text, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
end

"""
    rewrite_aux_extends(text::String, aux_name_map::Dict{String,String}) -> String

Rewrite `extends OriginalParent` clauses so they point to auxiliary parents.
"""
function rewrite_aux_extends(text::String, aux_name_map::Dict{String, String})
    rewritten = text
    for (original_parent, aux_parent) in aux_name_map
        pattern = Regex("(?m)(\\bextends\\s+)" * escape_regex(original_parent) * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * aux_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end

"""
    patch_aux_equations!(aux_file::String)

Apply targeted text patches to the saved auxiliary `.mo` file.

This function fixes specific equation lines that are easier to patch in text
than through OpenModelica API calls.
"""
function patch_aux_equations!(aux_file::String)
    txt = read(aux_file, String)
    txt = replace(txt, "BESS.injector.switchOffSignal1.value = false;" => "BESS.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal2.value = false;" => "BESS.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal3.value = false;" => "BESS.switchOffSignal3.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal1.value = false;" => "BESS2.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal2.value = false;" => "BESS2.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal3.value = false;" => "BESS2.switchOffSignal3.value = false;")
    txt = replace(txt, "  der(generatorSynchronous.lambdafPu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaDPu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaQ1Pu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaQ2Pu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.theta) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.omegaPu) = 0;" => "")
    write(aux_file, txt)
    return nothing
end

"""
    patch_testcase_omega_refs!(aux_file::String)

Apply targeted text cleanup for `TestCase` omegaCOI and generator omegaRef lines.
"""
function patch_testcase_omega_refs!(aux_file::String)
    txt = read(aux_file, String)

    txt = replace(
        txt,
        r"(?m)^\s*Dynawo\.Types\.AngularVelocityPu\s+omegaCOI\b.*\n" => "",
    )

    txt = replace(
        txt,
        r"(?ms)^\s*omegaCOI\s*=.*?;\s*\n" => "",
    )

    txt = replace(
        txt,
        r"(?m)^\s*g\d+\.generatorSynchronous\.omegaRefPu\s*=\s*omegaCOI\s*;\s*\n" => "",
    )

    txt = replace(
        txt,
        r"(?m)^\s*g\d+\.omegaRefPu\s*=\s*omegaCOI\s*;\s*\n" => "",
    )

    write(aux_file, txt)
    return nothing
end

end # module
