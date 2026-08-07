# helpers/auxiliary_cleanup.jl
# Remove components and connections that are not needed in the auxiliary model.

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
        if any(startswith(cls, prefix) for prefix in CLEANUP_CLASS_PREFIXES)
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
    count = sendExpression(omc, "getEquationItemsCount($aux_model)")

    for i in 1:count
        equation = String(sendExpression(omc, "getNthEquationItem($aux_model, $i)", parsed = false))
        equation = strip(replace(equation, "\"" => ""))
        occursin("=", equation) || continue

        parts = split(equation, "=", limit = 2)
        length(parts) == 2 || continue

        lhs = strip(replace(parts[1], ";" => ""))
        rhs = strip(replace(parts[2], ";" => ""))
        (lhs == target || rhs == target) && return true
    end

    return false
end

"""
    delete_connections!(omc, aux_model, components; global_targets=nothing) -> Set{String}

Delete connections that touch a cleanup-target component and add static false
equations for switch-off signals left disconnected by that cleanup.
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

    for switch_signal in sort!(collect(deleted_switch_signals))
        _has_switch_off_signal_equation(omc, aux_model, switch_signal) && continue
        omc_call(omc, "addEquation($aux_model, \"$switch_signal.value = false\", false)", parsed = false)
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
