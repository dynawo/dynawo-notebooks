# helpers/auxiliary_init_model.jl
# Add INIT components, load-flow modifiers, and initial equations to the auxiliary model.

"""
    _resolve_init_spec(base_comp, base_class, init_model_by_component) -> Union{Nothing, Dict{String, Any}}

Resolve the INIT specification for a component, including an explicitly
selected profile when the class supports several INIT models.
"""
function _resolve_init_spec(
    base_comp::String,
    base_class::String,
    init_model_by_component::Dict{String, String},
)
    haskey(INIT_MODELS, base_class) || return nothing
    class_spec = INIT_MODELS[base_class]

    if haskey(class_spec, "profiles")
        haskey(init_model_by_component, base_comp) ||
            error("Missing INIT model selection for component $base_comp of class $base_class")

        profile_name = init_model_by_component[base_comp]
        profiles = class_spec["profiles"]
        haskey(profiles, profile_name) ||
            error("Unknown INIT profile $profile_name for component $base_comp of class $base_class")

        return profiles[profile_name]
    end

    if haskey(init_model_by_component, base_comp)
        profile_name = init_model_by_component[base_comp]
        error("Component $base_comp selects INIT profile $profile_name, but class $base_class has no profiles")
    end

    return class_spec
end

"""
    _load_init_mode(omc, model, components, comp_name, base_class) -> Symbol

For load components, decide whether to use P/Q reference initialization or
already-present complex initial values. Non-load components return `:not_load`.
"""
function _load_init_mode(
    omc,
    model::String,
    components::Dict{String, Dict{String, Any}},
    comp_name::String,
    base_class::String,
)
    startswith(base_class, "Dynawo.Electrical.Loads.") || return :not_load

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

Replace selected modifiers of one auxiliary component while preserving its
other existing modifiers.
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
    haskey(aux_components, base_comp) ||
        error("Component $base_comp not found in $aux_model while applying modifiers")

    aux_component = aux_components[base_comp]
    current_aux_class = aux_component["class"]::String
    existing_assignments = _existing_modifier_assignments(aux_component)

    kept_assignments = String[]
    for raw in existing_assignments
        match_result = match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
        match_result === nothing && error("Could not extract existing modifier name from: $raw")
        match_result.captures[1] in replace_keys && continue
        push!(kept_assignments, raw)
    end

    mod_assignments = vcat(kept_assignments, extra_raw)
    mod_str = _code_modification_from_assignments(mod_assignments)

    omc_call(
        omc,
        "updateComponent($base_comp, $current_aux_class, $aux_model, modification = $mod_str)",
        parsed = false,
    )
end

"""
    apply_load_LF_modifiers!(omc, model, aux_model, aux_components, base_comp)

Set free complex load initialization variables using the P/Q references of a
load component.
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
    add_init_models!(omc, model, aux_model, components, init_model_by_component, slack_component)

Add the INIT companion components required to simulate `aux_model`.
"""
function add_init_models!(
    omc,
    model::String,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    init_model_by_component::Dict{String, String},
    slack_component::String,
)
    for (base_comp, component) in components
        base_class = component["class"]::String
        spec = _resolve_init_spec(base_comp, base_class, init_model_by_component)
        isnothing(spec) && continue
        spec = spec::Dict{String, Any}

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        load_mode == :direct_complex && continue

        suffix = spec["init_component_suffix"]::String
        init_name = base_comp * suffix
        init_class = spec["init_class"]::String
        write_map = spec["write_modifiers"]::Dict{String, String}
        extra_raw = haskey(spec, "extra_modifiers_raw") ? spec["extra_modifiers_raw"]::Vector{String} : String[]
        write_from_model = haskey(spec, "write_modifiers_from_model") ? spec["write_modifiers_from_model"]::Vector{String} : String[]
        is_slack = base_comp == slack_component

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

            value = if load_mode == :pq_init && (base_param == "PRefPu" || base_param == "QRefPu")
                resolve_load_ref_value(omc, model, base_comp, base_param)
            else
                string(get_comp_param_value(omc, model, components, base_comp, base_param))
            end

            isempty(strip(value)) &&
                error("Empty value for $model.$base_comp.$base_param while building $init_name.$init_param")
            push!(assignments, "$(init_param) = $(value)")
        end

        for init_param in write_from_model
            push!(assignments, "$(init_param) = $(base_comp)_INITparams.$(init_param)")
        end

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

        mod_str = _code_modification_from_assignments(assignments)
        omc_call(
            omc,
            "addComponent($init_name, $init_class, $aux_model, modification = $mod_str)",
            parsed = false,
        )
    end
end

"""
    apply_LF_modifiers!(omc, model, aux_model, components)

Apply optional load-flow modifiers to components in the auxiliary model,
preserving changes already made during replacement.
"""
function apply_LF_modifiers!(
    omc,
    model::String,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
)
    aux_components = get_all_components(omc, aux_model)

    for (base_comp, component) in components
        base_class = component["class"]::String
        if startswith(base_class, "Dynawo.Electrical.Loads.")
            apply_load_LF_modifiers!(omc, model, aux_model, aux_components, base_comp)
            aux_components = get_all_components(omc, aux_model)
            continue
        end

        haskey(INIT_MODELS, base_class) || continue
        spec = INIT_MODELS[base_class]
        haskey(spec, "LF_modifiers_raw") || continue

        load_mode = _load_init_mode(omc, model, components, base_comp, base_class)
        load_mode == :direct_complex && continue

        extra_raw = spec["LF_modifiers_raw"]::Vector{String}
        lf_keys = Set{String}()
        for raw in extra_raw
            match_result = match(r"^\s*([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\s*(?:=|\()", raw)
            match_result === nothing && error("Could not extract LF modifier name from: $raw")
            push!(lf_keys, match_result.captures[1])
        end

        _apply_component_modifiers!(omc, aux_model, aux_components, base_comp, lf_keys, extra_raw)
        aux_components = get_all_components(omc, aux_model)
    end
end

"""
    add_init_equations!(omc, model, aux_model, components, init_model_by_component, slack_component)

Build and inject the initial equations that connect each INIT companion
component to its dynamic component.
"""
function add_init_equations!(
    omc,
    model::String,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    init_model_by_component::Dict{String, String},
    slack_component::String,
)
    lines = ["initial equation"]

    for (base_name, component) in components
        base_class = component["class"]::String
        spec = _resolve_init_spec(base_name, base_class, init_model_by_component)
        isnothing(spec) && continue
        spec = spec::Dict{String, Any}

        load_mode = _load_init_mode(omc, model, components, base_name, base_class)
        load_mode == :direct_complex && continue

        suffix = spec["init_component_suffix"]::String
        init_name = base_name * suffix

        if base_name == slack_component
            push!(lines, "$init_name.P0Pu = Modelica.ComplexMath.real($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i));")
            push!(lines, "$init_name.Q0Pu = Modelica.ComplexMath.imag($base_name.terminal.V * Modelica.ComplexMath.conj($base_name.terminal.i));")
            continue
        end

        if haskey(spec, "init_equations")
            equation_map = spec["init_equations"]::Dict{String, String}
            for (init_var, base_var) in equation_map
                should_flip_sign = startswith(base_var, "-")
                source_var = should_flip_sign ? base_var[2:end] : base_var
                rhs = should_flip_sign ? "-($base_name.$source_var)" : "$base_name.$source_var"
                push!(lines, "$init_name.$init_var = $rhs;")
            end
        end

        if haskey(spec, "init_equations_raw")
            for raw in spec["init_equations_raw"]::Vector{String}
                push!(lines, replace(replace(raw, "{init}" => init_name), "{base}" => base_name))
            end
        end
    end

    length(lines) == 1 && return nothing
    block = join(lines, "\n")
    omc_call(omc, "loadClassContentString(\"$block\", $aux_model)", parsed = false)
end
