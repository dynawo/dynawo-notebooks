# helpers/initialization_dictionaries.jl
# Initialization parameter mappings by component class

module InitializationDictionaries

export INIT_PARAMS

const INIT_PARAMS = Dict{String, Vector{Tuple{String, String}}}(
    "Dynawo.Electrical.BESS.WECC.BESSCurrentSource" => [
        ("Id0Pu", "Id0Pu"),
        ("Iq0Pu", "Iq0Pu"),
        ("PF0", "PF0"),
        ("PInj0Pu", "PInj0Pu"),
        ("QInj0Pu", "QInj0Pu"),
        ("UInj0Pu", "UInj0Pu"),
        ("UPhase0", "UPhaseInj0"),
        ("i0Pu.re", "i0Pu.re"),
        ("i0Pu.im", "i0Pu.im"),
        ("iInj0Pu.re", "iInj0Pu.re"),
        ("iInj0Pu.im", "iInj0Pu.im"),
        ("u0Pu.re", "u0Pu.re"),
        ("u0Pu.im", "u0Pu.im"),
        ("uInj0Pu.re", "uInj0Pu.re"),
        ("uInj0Pu.im", "uInj0Pu.im"),
        ("s0Pu.re", "s0Pu.re"),
        ("s0Pu.im", "s0Pu.im"),
        ("Q0Pu", "Q0Pu"),
    ],
)

end # module
