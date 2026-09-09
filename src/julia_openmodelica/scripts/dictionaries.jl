# scripts/dictionaries.jl
# Public dictionary API for the full initialization workflow.

module WorkflowDictionaries

include(joinpath(@__DIR__, "dictionaries", "lf_replacements.jl"))
include(joinpath(@__DIR__, "dictionaries", "init_models.jl"))
include(joinpath(@__DIR__, "dictionaries", "init_parameters.jl"))

export REPLACEMENTS, AUX_ALLOWED_REFS, INIT_MODELS, INIT_PARAMS

end # module
