# scripts/buildaux_helpers.jl
# Umbrella module that re-exports the BuildAux helpers

include("buildaux_omc.jl")
include("buildaux_build.jl")
include("buildaux_patch.jl")

module BuildAuxHelpers
using ..BuildAuxOmc
using ..BuildAuxBuild
using ..BuildAuxPatch

export
    om_send,
    resolve_load_ref_value,
    inherited_classes,
    get_inheritance_chain,
    get_all_components,
    get_comp_param_value,
    collect_cleanup_component_names,
    apply_replacements!,
    add_init_models!,
    apply_LF_modifiers!,
    add_init_equations!,
    delete_connections!,
    delete_components!,
    rewrite_aux_extends,
    clean_aux_equations!

end # module
