# scripts/initialization_build.jl
# Initialization extraction and model update helpers

module InitializationBuild
using OMJulia

using ..InitializationOmc: om_send

export
    get_initializable_components,
    extract_all_initialization_values,
    apply_initialization_modifiers!,
    rewrite_initialized_extends

"""
    _resolve_init_params(component, class, init_params, init_model_by_component)

Resolve the initialization parameter mapping for one component.

If a class has multiple profiles, this validates and applies the profile
selected in `init_model_by_component`.
"""
function _resolve_init_params(component::AbstractString, class::AbstractString, init_params, init_model_by_component)
    haskey(init_params, class) || return nothing

    spec = init_params[class]
    if isa(spec, Dict) && haskey(spec, "profiles")
        haskey(init_model_by_component, component) || error("Missing INIT model selection for component $component of class $class")
        profile_name = init_model_by_component[component]
        profiles = spec["profiles"]
        haskey(profiles, profile_name) || error("Unknown INIT profile $profile_name for component $component of class $class")
        return profiles[profile_name]
    end

    if haskey(init_model_by_component, component)
        profile_name = init_model_by_component[component]
        error("Component $component selects INIT profile $profile_name, but class $class has no profiles")
    end

    return spec
end

"""
    get_initializable_components(components, init_params, init_model_by_component = Dict{String, String}())

Filter `components` down to the subset whose classes appear in `init_params`
with a valid initialization mapping.
"""
function get_initializable_components(components, init_params, init_model_by_component = Dict{String, String}())
    initializable = Dict{String, Dict{String, Any}}()

    for (component, info) in components
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        isnothing(param_pairs) && continue
        initializable[component] = info
    end

    return initializable
end

"""
    _read_result_value(aux_session, full_name::AbstractString) -> Float64

Read the final simulated value of `full_name` from the auxiliary result file.
"""
function _read_result_value(aux_session, full_name::AbstractString)
    isempty(aux_session.resultfile) && error("Auxiliary session has no result file. Run simulate(...) before extracting initialization values.")
    values = getSolutions(aux_session, String(full_name))
    series = values[1]
    isempty(series) && error("No values found in $(aux_session.resultfile) for $(full_name)")
    return Float64(series[end])
end

"""
    extract_component_initialization_values(aux_session, component, param_pairs) -> Dict{String, Float64}

Extract all initialization values for one component from its companion
`<component>_INIT` block in the auxiliary simulation results.
"""
function extract_component_initialization_values(aux_session, component, param_pairs)
    init_component = component * "_INIT"
    values = Dict{String, Float64}()

    for (init_var, dynamic_var) in param_pairs
        full_name = init_component * "." * init_var
        values[dynamic_var] = _read_result_value(aux_session, full_name)
    end

    return values
end

"""
    extract_all_initialization_values(aux_session, initializable_components, init_params, init_model_by_component = Dict{String, String}())

Extract initialization values for every component that needs to be initialized.
"""
function extract_all_initialization_values(aux_session, initializable_components, init_params, init_model_by_component = Dict{String, String}())
    values_by_component = Dict{String, Dict{String, Float64}}()

    for (component, info) in initializable_components
        param_pairs = _resolve_init_params(component, info["class"], init_params, init_model_by_component)
        values_by_component[component] = extract_component_initialization_values(aux_session, component, param_pairs)
    end

    return values_by_component
end

"""
    _code_modification_from_assignments(assignments::Vector{String}) -> String

Build an OpenModelica modification string of the form `\$Code((...))`.
"""
function _code_modification_from_assignments(assignments::Vector{String})
    return "\$Code((" * join(assignments, ", ") * "))"
end

"""
    build_modifier_assignments(info, param_pairs, values) -> Vector{String}

Merge existing component modifiers with extracted initialization values and
return the resulting list of Modelica assignment fragments.
"""
function build_modifier_assignments(info, param_pairs, values)
    modifiers = Dict{String, String}(info["modifiers"])
    call_modifiers = Dict{String, String}(info["call_modifiers"])

    dynamic_vars = [dynamic_var for (_, dynamic_var) in param_pairs]
    scalar_vars = [v for v in dynamic_vars if !(endswith(v, ".re") || endswith(v, ".im"))]
    complex_bases = unique(replace(v, r"\.(re|im)$" => "") for v in dynamic_vars if endswith(v, ".re") || endswith(v, ".im"))

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
    apply_initialization_modifiers!(omc, target_model, initializable_components, init_params, values_by_component, init_model_by_component = Dict{String, String}())

Update each initializable component in `target_model` with the extracted
initialization values.
"""
function apply_initialization_modifiers!(omc, target_model, initializable_components, init_params, values_by_component, init_model_by_component = Dict{String, String}())
    for (component, info) in initializable_components
        haskey(values_by_component, component) || error("Missing extracted values for $component")
        current_class = info["class"]
        param_pairs = _resolve_init_params(component, current_class, init_params, init_model_by_component)
        assignments = build_modifier_assignments(info, param_pairs, values_by_component[component])
        mod_str = _code_modification_from_assignments(assignments)
        om_send(omc, "updateComponent($component, $current_class, $target_model, modification = $mod_str)", parsed = false)
    end
end

"""
    rewrite_initialized_extends(txt::String, initialized_name_map::Dict{String, String}) -> String

Rewrite `extends OriginalParent` clauses so that copied initialized classes
inherit from their initialized parents instead of the original package.
"""
function rewrite_initialized_extends(txt::String, initialized_name_map::Dict{String, String})
    rewritten = txt
    for (original_parent, initialized_parent) in initialized_name_map
        escaped_parent = replace(original_parent, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        pattern = Regex("(?m)(\\bextends\\s+)" * escaped_parent * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * initialized_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end

end # module
