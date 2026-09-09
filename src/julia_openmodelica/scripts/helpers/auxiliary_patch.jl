# helpers/auxiliary_patch.jl
# Text rewrite and post-save patch helpers

# ------------------------------------------------------------
# Regex Helper
# ------------------------------------------------------------

"""
    rewrite_aux_extends(text::String, aux_name_map::Dict{String,String}) -> String

Rewrite `extends OriginalParent` clauses so they point to auxiliary parents.
"""
function rewrite_aux_extends(text::String, aux_name_map::Dict{String, String})
    rewritten = text
    for (original_parent, aux_parent) in aux_name_map
        # Escape the parent name so regex metacharacters stay literal.
        escaped_parent = replace(original_parent, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")

        pattern = Regex("(?m)(\\bextends\\s+)" * escaped_parent * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * aux_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end

# ------------------------------------------------------------
# Dead-Reference Detection Helpers
# ------------------------------------------------------------

function _collect_deleted_component_names(components)
    components === nothing && return Set{String}()

    # Collect components that are deleted earlier in the build workflow.
    deleted_names = Set{String}()
    for (comp_name, c) in components
        cls = string(get(c, "class", ""))
        if startswith(cls, "Modelica.Blocks.Sources.") ||
           startswith(cls, "Dynawo.Electrical.Events.") ||
           startswith(cls, "Dynawo.Electrical.Loads.LoadConnect_INIT") ||
           startswith(cls, "Dynawo.Electrical.Controls.Machines.") ||
           startswith(cls, "Dynawo.Electrical.Controls.Frequency.SignalN")
            push!(deleted_names, comp_name)
        end
    end
    return deleted_names
end

function _collect_allowed_component_refs(components, slack_component::String)
    components === nothing && return Dict{String, Set{String}}()

    # Deleted components keep an empty allowed interface.
    allowed_refs_by_component = Dict{String, Set{String}}()
    deleted_names = _collect_deleted_component_names(components)
    for comp_name in deleted_names
        allowed_refs_by_component[comp_name] = Set{String}()
    end

    for (comp_name, c) in components
        comp_name in deleted_names && continue

        # Slack replacements always end up as InfiniteBus.
        if comp_name == slack_component
            allowed_refs_by_component[comp_name] = Set(AUX_ALLOWED_REFS["Dynawo.Electrical.Buses.InfiniteBus"])
            continue
        end

        old_class = string(get(c, "class", ""))
        haskey(REPLACEMENTS, old_class) || continue

        # Regular replacements use the allowed interface of their new class.
        new_class = string(REPLACEMENTS[old_class]["new_class"])
        haskey(AUX_ALLOWED_REFS, new_class) || continue

        allowed_refs_by_component[comp_name] = Set(AUX_ALLOWED_REFS[new_class])
    end

    return allowed_refs_by_component
end

function _statement_uses_disallowed_ref(statement::String, allowed_refs_by_component::Dict{String, Set{String}})
    stripped_statement = strip(statement)
    isempty(stripped_statement) && return false

    # Connections are already cleaned up earlier in the notebook workflow.
    startswith(stripped_statement, "connect(") && return false

    # Delete the full statement if any tracked component is referenced through a dead path.
    for (comp_name, allowed_refs) in allowed_refs_by_component
        escaped_comp_name = replace(comp_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        ref_pattern = Regex("\\b" * escaped_comp_name * "\\.([A-Za-z_][A-Za-z0-9_]*(?:\\.[A-Za-z_][A-Za-z0-9_]*)*)")

        for m in eachmatch(ref_pattern, statement)
            suffix = "." * String(m.captures[1])
            isempty(allowed_refs) && return true

            is_allowed = any(suffix == allowed_ref || startswith(suffix, allowed_ref * ".") for allowed_ref in allowed_refs)
            is_allowed || return true
        end
    end

    return false
end

function _simple_local_refs(statement::String)
    refs = Set{String}()
    parts = split(statement, "=", limit = 2)
    length(parts) == 2 || return refs

    lhs = strip(parts[1])
    rhs = strip(replace(parts[2], ";" => ""))

    occursin(r"^[A-Za-z_]\w*$", lhs) && push!(refs, lhs)
    occursin(r"^[A-Za-z_]\w*$", rhs) && push!(refs, rhs)

    return refs
end

# ------------------------------------------------------------
# Equation Readers
# ------------------------------------------------------------

function _equation_items(omc, aux_model::String)
    items = String[]
    n = sendExpression(omc, "getEquationItemsCount($aux_model)")
    for i in 1:n
        eq = String(sendExpression(omc, "getNthEquationItem($aux_model, $i)", parsed = false))
        push!(items, String(strip(replace(eq, "\"" => ""))))
    end
    return items
end

function _all_equation_items(omc, aux_model::String)
    items = _equation_items(omc, aux_model)
    n = sendExpression(omc, "getInitialEquationItemsCount($aux_model)")
    for i in 1:n
        eq = String(sendExpression(omc, "getNthInitialEquationItem($aux_model, $i)", parsed = false))
        push!(items, String(strip(replace(eq, "\"" => ""))))
    end
    return items
end

# ------------------------------------------------------------
# Equation Cleanup Steps
# ------------------------------------------------------------

function _patch_switch_off_signals!(omc, aux_model::String, slack_component::String)
    for eq in _equation_items(omc, aux_model)
        m = match(r"^([A-Za-z_]\w*)\.(injector|injectorURI|wT4Injector)\.(switchOffSignal[123])\s*=\s*false\s*;?$", eq)
        m === nothing && continue

        if m.captures[1] == slack_component
            # Slack becomes an InfiniteBus, which has no switch-off signal
            omc_call(omc, "deleteEquation($aux_model, \"$eq\")")
        else
            # Replacement class exposes the signal directly, so drop the injector level
            omc_call(omc, "updateEquation($aux_model, \"$eq\", \"$(m.captures[1]).$(m.captures[3]) = false\")")
        end
    end
end

function _patch_time_switch_events!(omc, aux_model::String)
    for eq in _equation_items(omc, aux_model)
        m = match(r"^([A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)\.(switchOffSignal[123])\s*=\s*[^;]*\btime\b[^;]*;?$", eq)
        m === nothing && continue

        omc_call(omc, "updateEquation($aux_model, \"$eq\", \"$(m.captures[1]).$(m.captures[2]) = false\")")
    end
end

function _remove_when_blocks!(omc, aux_model::String)
    for eq in _equation_items(omc, aux_model)
        occursin(r"^when\b", eq) || continue

        omc_call(omc, "deleteEquation($aux_model, \"$(replace(eq, "\n" => "\\n"))\")")
    end
end

function _patch_step_setpoint!(omc, aux_model::String, components)
    components === nothing && return nothing

    # Collect original Step component names.
    step_names = Set{String}()
    for (comp_name, c) in components
        get(c, "class", "") == "Dynawo.Electrical.Controls.Basics.Step" || continue
        push!(step_names, comp_name)
    end

    # Collect original Dynawo load component names.
    load_names = Set{String}()
    for (comp_name, c) in components
        startswith(string(get(c, "class", "")), "Dynawo.Electrical.Loads.") || continue
        push!(load_names, comp_name)
    end

    eqs = _equation_items(omc, aux_model)

    # Detect Step-driven load reference equations.
    targets = Set{Tuple{String, String, String, String}}()
    for eq in eqs
        m = match(r"^([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*=\s*([A-Za-z_]\w*)\.step\s*;?$", eq)
        if m === nothing
            m = match(r"^([A-Za-z_]\w*)\.step\s*=\s*([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*;?$", eq)
            m === nothing && continue
            step_name = String(m.captures[1]); load_name = String(m.captures[2]); ref_field = String(m.captures[3])
        else
            load_name = String(m.captures[1]); ref_field = String(m.captures[2]); step_name = String(m.captures[3])
        end
        load_name in load_names || continue
        step_name in step_names || continue
        delta_field = ref_field == "PRefPu" ? "deltaP" : "deltaQ"
        push!(targets, (load_name, ref_field, delta_field, step_name))
    end

    # Replace Step output references with SetPoint outputs.
    used_step_names = sort!(collect(Set(step_name for (_, _, _, step_name) in targets)))
    for eq in eqs
        new_eq = eq
        for step_name in used_step_names
            escaped_step_name = replace(step_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
            new_eq = replace(new_eq, Regex("\\b" * escaped_step_name * "\\.step\\b") => step_name * ".setPoint")
        end
        new_eq == eq && continue
        omc_call(omc, "updateEquation($aux_model, \"$eq\", \"$new_eq\")")
    end

    # Insert missing static load variation equations.
    for (load_name, ref_field, delta_field, _) in sort!(collect(targets))
        escaped_load_name = replace(load_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        any(occursin(Regex("^" * escaped_load_name * "\\." * delta_field * "\\s*=\\s*0\\s*;?\$"), e) for e in eqs) && continue
        omc_call(omc, "addEquation($aux_model, \"$load_name.$delta_field = 0\", false)")
    end
end

function _delete_dead_equations!(omc, aux_model::String, components, slack_component::String)
    components === nothing && return Set{String}()

    # Track the interfaces that are allowed to remain after replacements and deletions.
    allowed_refs_by_component = _collect_allowed_component_refs(components, slack_component)
    deleted_local_refs = Set{String}()
    isempty(allowed_refs_by_component) && return deleted_local_refs

    for eq in _all_equation_items(omc, aux_model)
        _statement_uses_disallowed_ref(eq, allowed_refs_by_component) || continue

        union!(deleted_local_refs, _simple_local_refs(eq))
        omc_call(omc, "deleteEquation($aux_model, \"$(replace(eq, "\n" => "\\n"))\")")
    end

    return deleted_local_refs
end

function _remove_deleted_local_ref_equations!(omc, aux_model::String, deleted_local_refs::Set{String})
    isempty(deleted_local_refs) && return nothing

    for eq in _all_equation_items(omc, aux_model)
        m = match(r"^([A-Za-z_]\w*)\s*=\s*[^;]+;?$", eq)
        m === nothing && continue
        m.captures[1] in deleted_local_refs || continue

        omc_call(omc, "deleteEquation($aux_model, \"$eq\")")
    end
end

function _remove_unused_deleted_ref_declarations!(omc, aux_model::String, deleted_local_refs::Set{String})
    isempty(deleted_local_refs) && return nothing

    used_text = join(_all_equation_items(omc, aux_model), "\n")

    for ref in deleted_local_refs
        escaped_ref = replace(ref, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        occursin(Regex("\\b" * escaped_ref * "\\b"), used_text) && continue
        omc_call(omc, "deleteComponent($ref, $aux_model)")
    end
end

# ------------------------------------------------------------
# Cleanup Orchestrator
# ------------------------------------------------------------

"""
    clean_aux_equations!(omc, aux_model, components, slack_component = "")

Clean up the auxiliary model's equations in place with the OpenModelica
equation API, after the structural build steps.
"""
function clean_aux_equations!(omc, aux_model::String, components, slack_component::String = "")
    _patch_switch_off_signals!(omc, aux_model, slack_component)
    _patch_time_switch_events!(omc, aux_model)
    _remove_when_blocks!(omc, aux_model)
    _patch_step_setpoint!(omc, aux_model, components)

    deleted_local_refs = _delete_dead_equations!(omc, aux_model, components, slack_component)
    _remove_deleted_local_ref_equations!(omc, aux_model, deleted_local_refs)
    _remove_unused_deleted_ref_declarations!(omc, aux_model, deleted_local_refs)

    return nothing
end
