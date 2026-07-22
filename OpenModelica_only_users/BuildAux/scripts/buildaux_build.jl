# scripts/buildaux_build.jl
# Auxiliary model rewrite and cleanup helpers

module BuildAuxBuild
using OMJulia

using ..BuildAuxOmc:
    om_send,
    resolve_load_ref_value,
    get_all_components,
    get_comp_param_value

using ..BuildAuxParse:
    parse_nth_connection,
    component_of_connector

export
    collect_cleanup_component_names,
    apply_replacements!,
    add_init_models!,
    apply_LF_modifiers!,
    add_init_equations!,
    delete_connections!,
    delete_components!

# ------------------------------------------------------------
# Auxiliary Model Rewrite
# ------------------------------------------------------------

"""
    _code_modification_from_assignments(assignments::Vector{String}) -> String

Build a Modelica modification string: `\$Code((a = 1, b = 2, ...))`.

Entries may be standard assignments or raw call-style modifier fragments.
"""
function _code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

"""
    _existing_modifier_assignments(c) -> Vector{String}

Serialize parsed modifier dictionaries back into Modelica modification fragments.
"""
function _existing_modifier_assignments(c::Dict{String, Any})
    assignments = String[]

    raw_mods = c["modifiers"]
    if isa(raw_mods, Dict)
        for (k, v) in raw_mods
            push!(assignments, "$(k) = $(v)")
        end
    end

    raw_calls = c["call_modifiers"]
    if isa(raw_calls, Dict)
        for (k, v) in raw_calls
            push!(assignments, "$(k)($(v))")
        end
    end

    return assignments
end

"""
    _get_slack_voltage_expressions(omc, model, components, comp_name, mods) -> NamedTuple

Resolve the slack voltage magnitude and phase expressions.

For each quantity, prefer the explicit scalar modifier/value (`U0Pu`, `UPhase0`).
If it is missing, fall back to deriving it from `u0Pu = Complex(re, im)`.
Returns `(upu = ..., uphase = ...)`.
"""
function _get_slack_voltage_expressions(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    mods::Dict{String, String},
)
    function get_value(param::String)
        if haskey(mods, param)
            return strip(mods[param])
        end
        return strip(string(get_comp_param_value(omc, model, components, comp_name, param)))
    end

    u0pu = get_value("u0Pu")
    has_complex_u0pu = startswith(u0pu, "Complex(") && endswith(u0pu, ")")

    ure = ""
    uim = ""
    if has_complex_u0pu
        inner = strip(u0pu[9:end-1])
        parts = split(inner, ","; limit = 2)

        if length(parts) == 2
            ure = strip(parts[1])
            uim = strip(parts[2])
        end
    end

    upu = get_value("U0Pu")
    if isempty(upu)
        if !isempty(ure) && !isempty(uim)
            upu = "sqrt(($(ure))^2 + ($(uim))^2)"
        else
            error(
                "Could not determine slack voltage magnitude for $model.$comp_name. " *
                "Expected U0Pu or u0Pu = Complex(re, im)."
            )
        end
    end

    uphase = get_value("UPhase0")
    if isempty(uphase)
        if !isempty(ure) && !isempty(uim)
            uphase = "atan2($(uim), $(ure))"
        else
            error(
                "Could not determine slack voltage phase for $model.$comp_name. " *
                "Expected UPhase0 or u0Pu = Complex(re, im)."
            )
        end
    end

    return (
        upu = upu,
        uphase = uphase,
    )
end

"""
    _build_slack_replacement_assignments(omc, model, components, comp_name, mods, call_mods) -> Vector{String}

Build the modifier list for the slack replacement to `InfiniteBus`.
"""
function _build_slack_replacement_assignments(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    mods::Dict{String, String},
)
    voltage = _get_slack_voltage_expressions(omc, model, components, comp_name, mods)

    return [
        "UPu = $(voltage.upu)",
        "UPhase = $(voltage.uphase)",
    ]
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

        # Load call-style and assignment modifiers
        mods = Dict{String, String}()
        raw_mods = c["modifiers"]
        if isa(raw_mods, Dict)
            for (k, v) in raw_mods
                mods[string(k)] = string(v)
            end
        end

        call_mods = Dict{String, String}()
        raw_calls = c["call_modifiers"]
        if isa(raw_calls, Dict)
            for (k, v) in raw_calls
                call_mods[string(k)] = string(v)
            end
        end

        # Slack replacement
        if comp_name == SLACK_COMPONENT
            assignments = _build_slack_replacement_assignments(omc, model, components, comp_name, mods)
            mod_str = _code_modification_from_assignments(assignments)
            om_send(
                omc,
                "updateComponent($comp_name, Dynawo.Electrical.Buses.InfiniteBus, $aux_model, modification = $mod_str)",
                parsed = false,
            )
            continue
        end

        # Other replacements
        if !haskey(REPLACEMENTS, old_class)
            continue
        end

        spec = REPLACEMENTS[old_class]::Dict{String, Any}
        new_class = spec["new_class"]::String

        # Read the replacement spec
        write_map = Dict{String, String}()
        if haskey(spec, "write_modifiers")
            raw_map = spec["write_modifiers"]
            if isa(raw_map, Dict)
                for (k, v) in raw_map
                    write_map[string(k)] = string(v)
                end
            end
        end

        # Build the replacement assignments
        extra_raw = haskey(spec, "extra_modifiers_raw") ? spec["extra_modifiers_raw"]::Vector{String} : String[]

        assignments = String[]
        for (new_param, old_param) in write_map
            # Allow a leading "-" in replacement mappings, e.g. "-P0Pu",
            # to flip the sign of the copied source modifier/value.
            should_flip_sign = startswith(old_param, "-")
            source_param = should_flip_sign ? old_param[2:end] : old_param

            if haskey(call_mods, source_param)
                if should_flip_sign
                    error("Signed call-style replacements are not supported for $comp_name.$source_param")
                end
                push!(assignments, "$(new_param)($(call_mods[source_param]))")
                continue
            end

            rhs = if haskey(mods, source_param)
                mods[source_param]
            else
                string(get_comp_param_value(omc, model, components, comp_name, source_param))
            end

            if should_flip_sign
                rhs = "-(" * rhs * ")"
            end

            push!(assignments, "$(new_param) = $(rhs)")
        end

        append!(assignments, replace.(extra_raw, "{component}" => comp_name))

        # Build the modification string and update the component
        mod_str = _code_modification_from_assignments(assignments)

        om_send(
            omc,
            "updateComponent($comp_name, $new_class, $aux_model, modification = $mod_str)",
            parsed = false,
        )
    end
end

# ------------------------------------------------------------
# INIT Assembly
# ------------------------------------------------------------

"""
    _resolve_init_spec(base_comp, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT) -> Union{Nothing, Dict{String, Any}}

Resolve the leaf INIT spec for a component.

If the class entry has `profiles`, the component must appear in
`INIT_MODEL_BY_COMPONENT` and the selected profile must exist.
If the class entry is direct, any explicit component selection is rejected.
Returns `nothing` when the class has no INIT entry.
"""
function _resolve_init_spec(
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
    _load_init_mode(omc, model, components, comp_name, base_class) -> Symbol

Decide how a Dynawo load should be initialized.

Returns:
- `:pq_init` when `PRefPu` and `QRefPu` have resolvable initialization values
- `:direct_complex` when the load already has explicit `s0Pu`, `u0Pu`, and `i0Pu`
- `:not_load` for non-load components
"""
function _load_init_mode(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    base_class::String,
)
    if !startswith(base_class, "Dynawo.Electrical.Loads.")
        return :not_load
    end

    raw_mods = components[comp_name]["modifiers"]
    has_direct_complex =
        isa(raw_mods, Dict) &&
        haskey(raw_mods, "s0Pu") &&
        haskey(raw_mods, "u0Pu") &&
        haskey(raw_mods, "i0Pu")

    p_ref = strip(resolve_load_ref_value(omc, model, comp_name, "PRefPu"))
    q_ref = strip(resolve_load_ref_value(omc, model, comp_name, "QRefPu"))
    has_pq_init = !isempty(p_ref) && !isempty(q_ref)

    if has_pq_init
        return :pq_init
    elseif has_direct_complex
        return :direct_complex
    end

    error("Load $model.$comp_name has neither resolvable PRefPu/QRefPu initialization nor explicit s0Pu/u0Pu/i0Pu")
end

"""
    _apply_component_modifiers!(omc, aux_model, aux_components, base_comp, replace_keys, extra_raw)

Update one auxiliary component by replacing only the modifiers listed in
`replace_keys` and preserving all the others.
"""
function _apply_component_modifiers!(
    omc,
    aux_model::String,
    aux_components::Dict{String, Dict{String, Any}},
    base_comp::String,
    replace_keys::Set{String},
    extra_raw::Vector{String},
)
    isempty(extra_raw) && return nothing

    if !haskey(aux_components, base_comp)
        error("Component $base_comp not found in $aux_model while applying modifiers")
    end

    aux_c = aux_components[base_comp]
    current_aux_class = aux_c["class"]::String
    existing_assignments = _existing_modifier_assignments(aux_c)

    kept_assignments = String[]
    for raw in existing_assignments
        m = match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
        m === nothing && error("Could not extract existing modifier name from: $raw")
        m.captures[1] in replace_keys && continue
        push!(kept_assignments, raw)
    end

    mod_assignments = vcat(kept_assignments, extra_raw)
    mod_str = _code_modification_from_assignments(mod_assignments)

    om_send(
        omc,
        "updateComponent($base_comp, $current_aux_class, $aux_model, modification = $mod_str)",
        parsed = false,
    )
end

"""
    apply_load_LF_modifiers!(omc, model, aux_model, aux_components, base_comp)

Apply custom load-flow modifiers to Dynawo loads so their complex initialization
variables stay free but receive useful start values derived from P/Q references.
"""
function apply_load_LF_modifiers!(
    omc,
    model::String,
    aux_model::String,
    aux_components::Dict{String, Dict{String, Any}},
    base_comp::String,
)
    p_ref = strip(resolve_load_ref_value(omc, model, base_comp, "PRefPu"))
    q_ref = strip(resolve_load_ref_value(omc, model, base_comp, "QRefPu"))

    isempty(p_ref) && error("Could not resolve PRefPu for load $model.$base_comp")
    isempty(q_ref) && error("Could not resolve QRefPu for load $model.$base_comp")

    extra_raw = [
        "i0Pu(re(start = $p_ref, fixed = false), im(start = -($q_ref), fixed = false))",
        "s0Pu(re(start = $p_ref, fixed = false), im(start = $q_ref, fixed = false))",
        "u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))",
    ]

    _apply_component_modifiers!(
        omc,
        aux_model,
        aux_components,
        base_comp,
        Set(["i0Pu", "s0Pu", "u0Pu"]),
        extra_raw,
    )
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

        # Build the init component settings
        spec = _resolve_init_spec(base_comp, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT)
        if isnothing(spec)
            continue
        end
        spec = spec::Dict{String, Any}

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        if load_mode == :direct_complex
            continue
        end

        suffix = spec["init_component_suffix"]::String
        init_name = base_comp * suffix
        init_class = spec["init_class"]::String
        write_map = spec["write_modifiers"]::Dict{String, String}
        extra_raw = haskey(spec, "extra_modifiers_raw") ? spec["extra_modifiers_raw"]::Vector{String} : String[]
        write_from_model = haskey(spec, "write_modifiers_from_model") ? spec["write_modifiers_from_model"]::Vector{String} : String[]
        is_slack = base_comp == SLACK_COMPONENT

        # Copy values from the base component
        assignments = String[]
        for (init_param, base_param) in write_map
            if startswith(base_param, "@aux.")
                aux_field = base_param[6:end]
                push!(assignments, "$(init_param) = $(base_comp).$(aux_field)")
                continue
            end

            if is_slack && (init_param == "P0Pu" || init_param == "Q0Pu")
                continue
            end

            val = ""

            if load_mode == :pq_init && (base_param == "PRefPu" || base_param == "QRefPu")
                val = resolve_load_ref_value(omc, model, base_comp, base_param)
            else
                val = string(get_comp_param_value(omc, model, components, base_comp, base_param))
            end

            if isempty(strip(val))
                error("Empty value for $model.$base_comp.$base_param while building $init_name.$init_param")
            end

            push!(assignments, "$(init_param) = $(val)")
        end

        # Copy values from the model init params
        for init_param in write_from_model
            push!(assignments, "$(init_param) = $(base_comp)_INITparams.$(init_param)")
        end

        # Add slack or target extras
        if is_slack
            voltage = _get_slack_voltage_expressions(
                omc,
                model,
                components,
                base_comp,
                Dict{String, String}(),
            )
            push!(assignments, "UPhase0 = $(voltage.uphase)")
            append!(assignments, [
                "P0Pu(fixed = false)",
                "Q0Pu(fixed = false)",
            ])
        else
            append!(assignments, extra_raw)
        end

        # Build the modification string and add the init component
        mod_str = _code_modification_from_assignments(assignments)

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
Existing modifiers are read from the current auxiliary model state, so
previous replacements are preserved without reintroducing modifiers from
the original class.
"""
function apply_LF_modifiers!(
    omc,
    model::String,
    aux_model::String,
    INIT_MODELS::Dict{String, Any},
    components::Dict{String, Dict{String, Any}},
)
    aux_components = get_all_components(omc, aux_model)

    for (base_comp, c) in components
        base_class = c["class"]::String
        if startswith(base_class, "Dynawo.Electrical.Loads.")
            apply_load_LF_modifiers!(omc, model, aux_model, aux_components, base_comp)
            aux_components = get_all_components(omc, aux_model)
            continue
        end

        if !haskey(INIT_MODELS, base_class)
            continue
        end

        spec = INIT_MODELS[base_class]
        if !haskey(spec, "LF_modifiers_raw")
            continue
        end

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        if load_mode == :direct_complex
            continue
        end

        extra_raw = spec["LF_modifiers_raw"]::Vector{String}
        lf_keys = Set{String}()
        for raw in extra_raw
            m = match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
            m === nothing && error("Could not extract LF modifier name from: $raw")
            push!(lf_keys, m.captures[1])
        end

        _apply_component_modifiers!(
            omc,
            aux_model,
            aux_components,
            base_comp,
            lf_keys,
            extra_raw,
        )
        aux_components = get_all_components(omc, aux_model)
    end
end

"""
    add_init_equations!(omc, model, aux_model, components, INIT_MODELS, INIT_MODEL_BY_COMPONENT, SLACK_COMPONENT)

Add the initial equations to `aux_model`.

Equations are generated from `init_equations` and `init_equations_raw`
mappings in `INIT_MODELS` and added with `addEquation`.
"""
function add_init_equations!(
    omc,
    model::String,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    INIT_MODELS::Dict{String, Any},
    INIT_MODEL_BY_COMPONENT::Dict{String, String},
    SLACK_COMPONENT::String,
)
    eqs = String[]

    for (base_name, c) in components
        base_class = c["class"]::String
        spec = _resolve_init_spec(base_name, base_class, INIT_MODELS, INIT_MODEL_BY_COMPONENT)
        if isnothing(spec)
            continue
        end
        spec = spec::Dict{String, Any}

        load_mode = _load_init_mode(omc, model, components, base_name, base_class)
        if load_mode == :direct_complex
            continue
        end

        suffix = spec["init_component_suffix"]::String
        init_name = base_name * suffix

        # Slack equations use terminal V and i directly
        if base_name == SLACK_COMPONENT
            push!(eqs, "$init_name.P0Pu = Modelica.ComplexMath.real($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i))")
            push!(eqs, "$init_name.Q0Pu = Modelica.ComplexMath.imag($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i))")
            continue
        end

        # Write the mapped init equations
        if haskey(spec, "init_equations")
            eqmap = spec["init_equations"]::Dict{String, String}
            for (init_var, base_var) in eqmap
                # Support signed init-equation mappings like "-QGenPu".
                should_flip_sign = startswith(base_var, "-")
                source_var = should_flip_sign ? base_var[2:end] : base_var
                rhs = should_flip_sign ? "-($base_name.$source_var)" : "$base_name.$source_var"
                push!(eqs, "$init_name.$init_var = $rhs")
            end
        end

        if haskey(spec, "init_equations_raw")
            for raw in spec["init_equations_raw"]::Vector{String}
                line = replace(replace(raw, "{init}" => init_name), "{base}" => base_name)
                push!(eqs, line)
            end
        end
    end

    # Build and inject the block
    for eq in eqs
        om_send(omc, "addEquation($aux_model, \"$(rstrip(strip(eq), ';'))\", true)", parsed = false)
    end
end

# ------------------------------------------------------------
# Auxiliary Model Cleanup
# ------------------------------------------------------------

const CLEANUP_CLASS_PREFIXES = (
    "Modelica.Blocks.Sources.",
    "Dynawo.Electrical.Events.",
    "Dynawo.Electrical.Loads.LoadConnect_INIT",
    "Dynawo.Electrical.Controls.Machines.",
    "Dynawo.Electrical.Controls.Frequency.SignalN",
)

"""
    collect_cleanup_component_names(components) -> Set{String}

Collect component names whose classes match the cleanup prefixes.
"""
function collect_cleanup_component_names(components::Dict{String, Dict{String, Any}})
    names = Set{String}()
    for (name, c) in components
        cls = c["class"]::String
        if any(startswith(cls, p) for p in CLEANUP_CLASS_PREFIXES)
            push!(names, name)
        end
    end
    return names
end

"""
    _has_switch_off_signal_equation(omc, aux_model, switch_signal) -> Bool

Return `true` if `switch_signal.value` already appears on either side of an
equation in `aux_model`.
"""
function _has_switch_off_signal_equation(omc, aux_model::String, switch_signal::String)
    target = switch_signal * ".value"
    neq = sendExpression(omc, "getEquationItemsCount($aux_model)")

    for i in 1:neq
        eqi = String(sendExpression(omc, "getNthEquationItem($aux_model, $i)", parsed = false))
        eqi = strip(replace(eqi, "\"" => ""))
        occursin("=", eqi) || continue

        parts = split(eqi, "=", limit = 2)
        length(parts) == 2 || continue

        lhs = strip(replace(parts[1], ";" => ""))
        rhs = strip(replace(parts[2], ";" => ""))

        if lhs == target || rhs == target
            return true
        end
    end

    return false
end

"""
    delete_connections!(omc, aux_model, components; global_targets=nothing) -> Set{String}

Delete all connections in `aux_model` that touch a cleanup-target component.
If the deleted connection leaves a switch-off connector unconnected, add a
neutral `switchOffSignalN.value = false` equation for the surviving endpoint.
Returns the set of effective target component names.

Iterates connections backwards because deleting connections reindexes the connection list.
"""
function delete_connections!(
    omc,
    aux_model::String,
    components::Dict{String, Dict{String, Any}};
    global_targets::Union{Nothing, Set{String}} = nothing,
)
    local_targets = collect_cleanup_component_names(components)
    cleanup_targets = isnothing(global_targets) ? local_targets : union(local_targets, global_targets)
    deleted_switch_signals = Set{String}()

    count = sendExpression(omc, "getConnectionCount($aux_model)")

    for i in count:-1:1
        raw = sendExpression(omc, "getNthConnection($aux_model, $i)", parsed = false)
        from, to = parse_nth_connection(raw)

        from_comp = component_of_connector(from)
        to_comp = component_of_connector(to)

        if (from_comp in cleanup_targets) || (to_comp in cleanup_targets)
            if (from_comp in cleanup_targets) && !(to_comp in cleanup_targets)
                occursin(r"\.switchOffSignal\d+$", to) && push!(deleted_switch_signals, String(to))
            end
            if (to_comp in cleanup_targets) && !(from_comp in cleanup_targets)
                occursin(r"\.switchOffSignal\d+$", from) && push!(deleted_switch_signals, String(from))
            end
            sendExpression(omc, "deleteConnection($from, $to, $aux_model)")
        end
    end

    switch_signal_lines = String[]
    for switch_signal in sort!(collect(deleted_switch_signals))
        _has_switch_off_signal_equation(omc, aux_model, switch_signal) && continue
        push!(switch_signal_lines, "$switch_signal.value = false;")
    end

    # Add false equations for switch-off signals whose event/source connection is deleted.
    if !isempty(switch_signal_lines)
        block = "equation\n" * join(switch_signal_lines, "\n")
        om_send(omc, "loadClassContentString(\"$block\", $aux_model)", parsed = false)
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

end # module
