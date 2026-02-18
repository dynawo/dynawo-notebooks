module Dictionaries

export REPLACEMENTS, INIT_MODELS

const REPLACEMENTS = Dict{String, Any}(
    "Dynawo.Electrical.BESS.WECC.BESSCurrentSource" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Electrical.Buses.InfiniteBusWithVariations" => Dict(
        "new_class" => "Dynawo.Electrical.Buses.InfiniteBus",
        "write_modifiers" => Dict(
            "UPu"    => "U0Pu",
            "UPhase" => "UPhase",
        )
    ),

    "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "PGen0Pu",
            "U0Pu"    => "U0Pu",
        )
    )
)

const INIT_MODELS = Dict{String, Any}(
    "Dynawo.Electrical.BESS.WECC.BESSCurrentSource" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.BESS.WECC.BESS_INIT",

        "write_modifiers" => Dict(
            "RPu"  => "RPu",
            "XPu"  => "XPu",
            "SNom" => "SNom",
            "P0Pu" => "P0Pu",
            "U0Pu" => "U0Pu",
        ),

        "extra_modifiers_raw" => [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations" => Dict(
            "Q0Pu"    => "QGenPu",
            "UPhase0" => "UPhase",
        )
    ),

    "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousInt_INIT",

        "write_modifiers" => Dict(
            "RPu"  => "RPu",
            "XPu"  => "XPu",
            "SNom" => "SNom",
            "P0Pu" => "P0Pu",
            "U0Pu" => "U0Pu",
        ),

        "extra_modifiers_raw" => [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations" => Dict(
            "Q0Pu"    => "QGenPu",
            "UPhase0" => "UPhase",
        )
    )
)

end # module