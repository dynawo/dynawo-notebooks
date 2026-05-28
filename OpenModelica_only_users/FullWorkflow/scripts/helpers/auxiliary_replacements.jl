# helpers/auxiliary_replacements.jl
# Replace dynamic components with auxiliary-model equivalents.

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
    _build_slack_replacement_assignments(omc, model, components, comp_name, mods) -> Vector{String}

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
    apply_replacements!(omc, model, aux_model, components, slack_component)

Apply the configured class replacements to `aux_model`.

For each mapped `new_param => old_param`, this reuses call-style modifiers
first, then assignment modifiers, then falls back to OpenModelica value lookup.
"""
function apply_replacements!(
    omc,
    model::String,
    aux_model::String,
    components::Dict{String, Dict{String, Any}},
    slack_component::String,
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
        raw_calls = c["call_modifiers"]
        if isa(raw_calls, Dict)
            for (k, v) in raw_calls
                call_mods[string(k)] = string(v)
            end
        end

        if comp_name == slack_component
            assignments = _build_slack_replacement_assignments(omc, model, components, comp_name, mods)
            mod_str = _code_modification_from_assignments(assignments)
            omc_call(
                omc,
                "updateComponent($comp_name, Dynawo.Electrical.Buses.InfiniteBus, $aux_model, modification = $mod_str)",
                parsed = false,
            )
            continue
        end

        haskey(REPLACEMENTS, old_class) || continue

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

            should_flip_sign && (rhs = "-(" * rhs * ")")
            push!(assignments, "$(new_param) = $(rhs)")
        end

        append!(assignments, extra_raw)
        mod_str = _code_modification_from_assignments(assignments)

        omc_call(
            omc,
            "updateComponent($comp_name, $new_class, $aux_model, modification = $mod_str)",
            parsed = false,
        )
    end
end
