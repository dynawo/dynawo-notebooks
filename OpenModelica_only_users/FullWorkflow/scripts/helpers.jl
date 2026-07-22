# scripts/helpers.jl
# Public helper API for the full initialization workflow.

module FullWorkflowHelpers

using OMJulia
using ..FullWorkflowDictionaries: REPLACEMENTS, AUX_ALLOWED_REFS, INIT_MODELS, INIT_PARAMS

include(joinpath(@__DIR__, "helpers", "modelica_parsing.jl"))
include(joinpath(@__DIR__, "helpers", "openmodelica.jl"))

include(joinpath(@__DIR__, "helpers", "auxiliary_replacements.jl"))
include(joinpath(@__DIR__, "helpers", "auxiliary_init_model.jl"))
include(joinpath(@__DIR__, "helpers", "auxiliary_cleanup.jl"))
include(joinpath(@__DIR__, "helpers", "auxiliary_patch.jl"))

include(joinpath(@__DIR__, "helpers", "value_extraction.jl"))
include(joinpath(@__DIR__, "helpers", "initialized_model.jl"))
include(joinpath(@__DIR__, "helpers", "package_workflow.jl"))

export
    omc_call,
    get_inheritance_chain,
    get_all_components,
    apply_replacements!,
    delete_connections!,
    delete_components!,
    add_init_models!,
    apply_LF_modifiers!,
    add_init_equations!,
    clean_aux_equations!,
    get_initializable_components,
    extract_all_initialization_values,
    apply_initialization_modifiers!,
    package_workflow_paths,
    auxiliary_name_map,
    initialized_name_map,
    package_class_names,
    write_package_files!,
    collect_package_component_contexts,
    save_auxiliary_package_classes!,
    save_initialized_package_classes!,
    simulation_flags_without_log_stats,
    print_omc_errors,
    run_omc_diagnostic

end # module
