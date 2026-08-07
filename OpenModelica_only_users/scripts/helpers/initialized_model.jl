# helpers/initialized_model.jl
# Write extracted initialization values into a copy of the dynamic model.

"""
    build_modifier_assignments(info, param_pairs, values) -> Vector{String}

Merge existing component modifiers with extracted initialization values and
return the Modelica assignment fragments used by `updateComponent`.
"""
function build_modifier_assignments(info, param_pairs, values)
    modifiers = Dict{String, String}(info["modifiers"])
    call_modifiers = Dict{String, String}(info["call_modifiers"])

    dynamic_vars = [dynamic_var for (_, dynamic_var) in param_pairs]
    scalar_vars = [var for var in dynamic_vars if !(endswith(var, ".re") || endswith(var, ".im"))]
    complex_bases = unique(replace(var, r"\.(re|im)$" => "") for var in dynamic_vars if endswith(var, ".re") || endswith(var, ".im"))

    for field in scalar_vars
        haskey(values, field) || error("Missing extracted value for $field")
        modifiers[field] = string(values[field])
    end

    for base in complex_bases
        real_key = base * ".re"
        imag_key = base * ".im"
        haskey(values, real_key) || error("Missing extracted value for $real_key")
        haskey(values, imag_key) || error("Missing extracted value for $imag_key")
        modifiers[base] = "Complex($(values[real_key]), $(values[imag_key]))"
    end

    assignments = String[]
    for (field, value) in modifiers
        push!(assignments, "$(field) = $(value)")
    end
    for (field, value) in call_modifiers
        push!(assignments, "$(field)($(value))")
    end

    return assignments
end

"""
    apply_initialization_modifiers!(omc, target_model, initializable_components, values_by_component, init_model_by_component = Dict{String, String}())

Update each initializable component in `target_model` with values extracted
from the auxiliary simulation.
"""
function apply_initialization_modifiers!(omc, target_model, initializable_components, values_by_component, init_model_by_component = Dict{String, String}())
    for (component, info) in initializable_components
        haskey(values_by_component, component) || error("Missing extracted values for $component")
        current_class = info["class"]
        param_pairs = if current_class == INERTIAL_GRID_CLASS
            [(field, field) for field in ("P0Pu", "Q0Pu", "U0Pu", "UPhase0")]
        else
            _resolve_init_params(component, current_class, init_model_by_component)
        end
        assignments = build_modifier_assignments(info, param_pairs, values_by_component[component])
        mod_str = _code_modification_from_assignments(assignments)
        omc_call(omc, "updateComponent($component, $current_class, $target_model, modification = $mod_str)", parsed = false)
    end
end

"""
    rewrite_initialized_extends(text::String, initialized_name_map::Dict{String, String}) -> String

Rewrite `extends OriginalParent` clauses to refer to initialized parents.
"""
function rewrite_initialized_extends(text::String, initialized_name_map::Dict{String, String})
    rewritten = text
    for (original_parent, initialized_parent) in initialized_name_map
        escaped_parent = replace(original_parent, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        pattern = Regex("(?m)(\\bextends\\s+)" * escaped_parent * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * initialized_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end
