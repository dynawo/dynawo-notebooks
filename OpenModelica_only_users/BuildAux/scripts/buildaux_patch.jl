# scripts/buildaux_patch.jl
# Text rewrite and post-save patch helpers

module BuildAuxPatch

export
    rewrite_aux_extends,
    patch_aux_equations!,
    patch_testcase_omega_refs!

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
# Post-Save Patches
# ------------------------------------------------------------

function _collect_deleted_component_names(components)
    components === nothing && return Set{String}()

    # Collect components that are deleted earlier in the build workflow.
    deleted_names = Set{String}()
    for (comp_name, c) in components
        cls = string(get(c, "class", ""))
        if startswith(cls, "Modelica.Blocks.Sources.") ||
           startswith(cls, "Dynawo.Electrical.Events.") ||
           startswith(cls, "Dynawo.Electrical.Loads.LoadConnect_INIT")
            push!(deleted_names, comp_name)
        end
    end
    return deleted_names
end

function _collect_allowed_component_refs(components, slack_component::String)
    components === nothing && return Dict{String, Set{String}}()

    # Read the replacement and whitelist tables used by the notebooks.
    replacements = Main.BuildAuxDictionaries.REPLACEMENTS
    aux_allowed_refs = Main.BuildAuxDictionaries.AUX_ALLOWED_REFS

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
            allowed_refs_by_component[comp_name] = Set(aux_allowed_refs["Dynawo.Electrical.Buses.InfiniteBus"])
            continue
        end

        old_class = string(get(c, "class", ""))
        haskey(replacements, old_class) || continue

        # Regular replacements use the allowed interface of their new class.
        new_class = string(replacements[old_class]["new_class"])
        haskey(aux_allowed_refs, new_class) || continue

        allowed_refs_by_component[comp_name] = Set(aux_allowed_refs[new_class])
    end

    return allowed_refs_by_component
end

function _statement_uses_disallowed_ref(statement::String, allowed_refs_by_component::Dict{String, Set{String}})
    # Ignore comments when checking whether a statement references dead paths.
    statement_code = replace(statement, r"//.*" => "")
    stripped_statement = strip(statement_code)
    isempty(stripped_statement) && return false

    # Connections are already cleaned up earlier in the notebook workflow.
    startswith(stripped_statement, "connect(") && return false

    # Delete the full statement if any tracked component is referenced through a dead path.
    for (comp_name, allowed_refs) in allowed_refs_by_component
        escaped_comp_name = replace(comp_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        ref_pattern = Regex("\\b" * escaped_comp_name * "\\.([A-Za-z_][A-Za-z0-9_]*(?:\\.[A-Za-z_][A-Za-z0-9_]*)*)")

        for m in eachmatch(ref_pattern, statement_code)
            suffix = "." * String(m.captures[1])
            isempty(allowed_refs) && return true

            is_allowed = any(suffix == allowed_ref || startswith(suffix, allowed_ref * ".") for allowed_ref in allowed_refs)
            is_allowed || return true
        end
    end

    return false
end

function _delete_dead_equations(txt::String, components, slack_component::String)
    components === nothing && return txt

    # Track the interfaces that are allowed to remain after replacements and deletions.
    allowed_refs_by_component = _collect_allowed_component_refs(components, slack_component)
    isempty(allowed_refs_by_component) && return txt

    # Rebuild equation sections while dropping statements that reference dead interfaces.
    in_equation_section = false
    statement_lines = String[]
    rewritten_lines = String[]
    lines = split(txt, "\n"; keepempty = true)

    function flush_statement!()
        isempty(statement_lines) && return
        statement = join(statement_lines, "\n")
        _statement_uses_disallowed_ref(statement, allowed_refs_by_component) || append!(rewritten_lines, statement_lines)
        empty!(statement_lines)
    end

    for line in lines
        if !in_equation_section
            push!(rewritten_lines, line)
            if occursin(r"^\s*(initial equation|equation)\s*$", line)
                in_equation_section = true
            end
            continue
        end

        if isempty(statement_lines) && occursin(r"^\s*(annotation\b|initial equation\b|equation\b|initial algorithm\b|algorithm\b|end\b)", line)
            in_equation_section = false
            push!(rewritten_lines, line)
            if occursin(r"^\s*(initial equation|equation)\s*$", line)
                in_equation_section = true
            end
            continue
        end

        if isempty(statement_lines) && (isempty(strip(line)) || occursin(r"^\s*//", line))
            push!(rewritten_lines, line)
            continue
        end

        push!(statement_lines, line)
        occursin(';', line) && flush_statement!()
    end

    flush_statement!()
    return join(rewritten_lines, "\n")
end

function _patch_step_setpoint(txt::String, components)
    components === nothing && return txt

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

    # Detect Step-driven load reference equations.
    targets = Set{Tuple{String, String, String, String}}()
    for m in eachmatch(r"(?m)^\s*([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*=\s*([A-Za-z_]\w*)\.step\s*;\s*$", txt)
        load_name = String(m.captures[1])
        ref_field = String(m.captures[2])
        step_name = String(m.captures[3])
        load_name in load_names || continue
        step_name in step_names || continue
        delta_field = ref_field == "PRefPu" ? "deltaP" : "deltaQ"
        push!(targets, (load_name, ref_field, delta_field, step_name))
    end
    for m in eachmatch(r"(?m)^\s*([A-Za-z_]\w*)\.step\s*=\s*([A-Za-z_]\w*)\.(PRefPu|QRefPu)\s*;\s*$", txt)
        step_name = String(m.captures[1])
        load_name = String(m.captures[2])
        ref_field = String(m.captures[3])
        load_name in load_names || continue
        step_name in step_names || continue
        delta_field = ref_field == "PRefPu" ? "deltaP" : "deltaQ"
        push!(targets, (load_name, ref_field, delta_field, step_name))
    end

    # Replace Step output references with SetPoint outputs.
    used_step_names = sort!(collect(Set(step_name for (_, _, _, step_name) in targets)))
    for step_name in used_step_names
        escaped_step_name = replace(step_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        txt = replace(txt, Regex("\\b" * escaped_step_name * "\\.step\\b") => step_name * ".setPoint")
    end

    # Insert missing static load equations.
    new_lines = String[]
    for (load_name, ref_field, delta_field, _) in sort!(collect(targets))
        escaped_load_name = replace(load_name, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        der_pattern = Regex("(?m)^\\s*der\\(" * escaped_load_name * "\\." * ref_field * "\\)\\s*=\\s*0\\s*;\\s*\$")
        delta_pattern = Regex("(?m)^\\s*" * escaped_load_name * "\\." * delta_field * "\\s*=\\s*0\\s*;\\s*\$")
        occursin(der_pattern, txt) || push!(new_lines, "  der($load_name.$ref_field) = 0;")
        occursin(delta_pattern, txt) || push!(new_lines, "  $load_name.$delta_field = 0;")
    end
    if !isempty(new_lines) && occursin(r"(?m)^equation\s*$", txt)
        txt = replace(txt, r"(?m)^equation\s*$" => "equation\n" * join(new_lines, "\n"); count = 1)
    end

    # Remove all when blocks from the auxiliary model.
    txt = replace(txt, r"(?ms)^\s*when\b.*?^\s*end\s+when;\s*\n?" => "")

    return txt
end

"""
    patch_aux_equations!(aux_file::String, slack_component::String = ""; components = nothing)

Apply targeted text patches to the saved auxiliary `.mo` file.

This function fixes specific equation lines that are easier to patch in text
than through OpenModelica API calls.
"""
function patch_aux_equations!(aux_file::String, slack_component::String = ""; components = nothing)
    txt = read(aux_file, String)

    # Patch switch-off equations after injector-based replacements.
    if !isempty(slack_component)
        escaped_slack_component = replace(slack_component, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        txt = replace(
            txt,
            Regex("(?m)^\\s*" * escaped_slack_component * "\\.(injector|injectorURI|wT4Injector)\\.switchOffSignal[123]\\.value\\s*=\\s*false\\s*;\\s*\\n?") => "",
        )
    end
    txt = replace(
        txt,
        r"(?m)^(\s*)([A-Za-z_]\w*)\.(injector|injectorURI|wT4Injector)\.(switchOffSignal[123]\.value\s*=\s*false\s*;)\s*$" => s"\1\2.\4",
    )

    # Patch Step equations after Step components are replaced by SetPoint.
    txt = _patch_step_setpoint(txt, components)

    # Delete equations that still reference dead interfaces after replacements.
    txt = _delete_dead_equations(txt, components, slack_component)

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
