# scripts/initialization_helpers.jl
# Umbrella module that re-exports the initialization helpers

include("initialization_omc.jl")
include("initialization_build.jl")

module InitializationHelpers
using ..InitializationOmc
using ..InitializationBuild

export
    om_send,
    inherited_classes,
    get_inheritance_chain,
    get_all_components,
    get_initializable_components,
    extract_all_initialization_values,
    apply_initialization_modifiers!,
    rewrite_initialized_extends,
    print_omc_errors,
    run_omc_diagnostic

end # module
