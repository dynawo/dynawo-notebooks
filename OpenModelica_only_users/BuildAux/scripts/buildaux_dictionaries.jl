# scripts/buildaux_dictionaries.jl
# Replacement and init configuration tables for BuildAux

module BuildAuxDictionaries

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
            "PGen0Pu" => "P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Examples.Nordic.Components.GeneratorWithControl.GeneratorSynchronousThreeWindingsWithControl" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Examples.Nordic.Components.GeneratorWithControl.GeneratorSynchronousFourWindingsWithControl" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Electrical.Loads.LoadAlphaBeta" => Dict(
        "new_class" => "Dynawo.Electrical.Loads.LoadPQ",
        "extra_modifiers_raw" => [
            "i0Pu(re(fixed = false), im(fixed = false))",
            "s0Pu(re(fixed = false), im(fixed = false))",
            "u0Pu(re(fixed = false), im(fixed = false))",
        ]
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
        "profiles" => Dict(
            "GeneratorSynchronousInt_INIT" => Dict(
                "init_component_suffix" => "_INIT",
                "init_class" => "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousInt_INIT",

                "write_modifiers" => Dict(
                    "DPu" => "DPu",
                    "ExcitationPu" => "ExcitationPu",
                    "H" => "H",
                    "LDPu" => "LDPPu",
                    "LQ1Pu" => "LQ1PPu",
                    "LQ2Pu" => "LQ2PPu",
                    "LdPu" => "LdPPu",
                    "LfPu" => "LfPPu",
                    "LqPu" => "LqPPu",
                    "MdPu" => "MdPPu",
                    "MdPuEfd" => "MdPPuEfd",
                    "MqPu" => "MqPPu",
                    "MrcPu" => "MrcPPu",
                    "MsalPu" => "MsalPu",
                    "P0Pu" => "P0Pu",
                    "PNomAlt" => "PNomAlt",
                    "PNomTurb" => "PNomTurb",
                    "Q0Pu" => "Q0Pu",
                    "RDPu" => "RDPPu",
                    "RQ1Pu" => "RQ1PPu",
                    "RQ2Pu" => "RQ2PPu",
                    "RTfPu" => "RTfPu",
                    "RaPu" => "RaPPu",
                    "RfPu" => "RfPPu",
                    "SNom" => "SNom",
                    "SnTfo" => "SnTfo",
                    "U0Pu" => "U0Pu",
                    "UBaseHV" => "UBaseHV",
                    "UBaseLV" => "UBaseLV",
                    "UNom" => "UNom",
                    "UNomHV" => "UNomHV",
                    "UNomLV" => "UNomLV",
                    "UPhase0" => "UPhase0",
                    "XTfPu" => "XTfPu",
                    "md" => "md",
                    "mq" => "mq",
                    "nd" => "nd",
                    "nq" => "nq",
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

            "GeneratorSynchronousExt3W_INIT" => Dict(
                "init_component_suffix" => "_INIT",
                "init_class" => "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT",

                "write_modifiers" => Dict(
                    "DPu" => "DPu",
                    "ExcitationPu" => "ExcitationPu",
                    "H" => "H",
                    "P0Pu" => "P0Pu",
                    "PNomAlt" => "PNomAlt",
                    "PNomTurb" => "PNomTurb",
                    "RTfPu" => "RTfPu",
                    "SNom" => "SNom",
                    "SnTfo" => "SnTfo",
                    "U0Pu" => "U0Pu",
                    "UBaseHV" => "UBaseHV",
                    "UBaseLV" => "UBaseLV",
                    "UNom" => "UNom",
                    "UNomHV" => "UNomHV",
                    "UNomLV" => "UNomLV",
                    "XTfPu" => "XTfPu",
                    "md" => "md",
                    "mq" => "mq",
                    "nd" => "nd",
                    "nq" => "nq",
                ),

                "write_modifiers_from_model" => [
                    "RaPu",
                    "XlPu",
                    "XdPu",
                    "XpdPu",
                    "XppdPu",
                    "XqPu",
                    "XppqPu",
                    "Tpd0",
                    "Tppd0",
                    "Tppq0",
                    "MdPuEfd",
                    "UseApproximation",
                ],

                "extra_modifiers_raw" => [
                    "Q0Pu(fixed = false)",
                    "UPhase0(fixed = false)",
                ],

                "init_equations" => Dict(
                    "Q0Pu"    => "QGenPu",
                    "UPhase0" => "UPhase",
                )
            ),

            "GeneratorSynchronousExt4W_INIT" => Dict(
                "init_component_suffix" => "_INIT",
                "init_class" => "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT",

                "write_modifiers" => Dict(
                    "DPu" => "DPu",
                    "ExcitationPu" => "ExcitationPu",
                    "H" => "H",
                    "P0Pu" => "P0Pu",
                    "PNomAlt" => "PNomAlt",
                    "PNomTurb" => "PNomTurb",
                    "RTfPu" => "RTfPu",
                    "SNom" => "SNom",
                    "SnTfo" => "SnTfo",
                    "U0Pu" => "U0Pu",
                    "UBaseHV" => "UBaseHV",
                    "UBaseLV" => "UBaseLV",
                    "UNom" => "UNom",
                    "UNomHV" => "UNomHV",
                    "UNomLV" => "UNomLV",
                    "XTfPu" => "XTfPu",
                    "md" => "md",
                    "mq" => "mq",
                    "nd" => "nd",
                    "nq" => "nq",
                ),

                "write_modifiers_from_model" => [
                    "RaPu",
                    "XlPu",
                    "XdPu",
                    "XpdPu",
                    "XppdPu",
                    "XqPu",
                    "XpqPu",
                    "XppqPu",
                    "Tpd0",
                    "Tpq0",
                    "Tppd0",
                    "Tppq0",
                    "MdPuEfd",
                    "UseApproximation",
                ],

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
    ),

    "Dynawo.Electrical.Loads.LoadPQ" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers" => Dict(
            "P0Pu" => "PRefPu",
            "Q0Pu" => "QRefPu",
        ),

        "extra_modifiers_raw" => [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
            
        ],

        "init_equations" => Dict(
            "i0Pu.re" => "i0Pu.re",
            "i0Pu.im" => "i0Pu.im",
            "s0Pu.re" => "s0Pu.re",
            "s0Pu.im" => "s0Pu.im",
            "u0Pu.re" => "u0Pu.re",
            "u0Pu.im" => "u0Pu.im",
        ),

        "LF_modifiers_raw" => [
            "i0Pu(re(fixed = false), im(fixed = false))",
            "s0Pu(re(fixed = false), im(fixed = false))",
            "u0Pu(re(fixed = false), im(fixed = false))",
        ],
    ),

    "Dynawo.Electrical.Loads.LoadAlphaBeta" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers" => Dict(
            "P0Pu" => "PRefPu",
            "Q0Pu" => "QRefPu",
        ),

        "extra_modifiers_raw" => [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
            
        ],

        "init_equations" => Dict(
            "i0Pu.re" => "i0Pu.re",
            "i0Pu.im" => "i0Pu.im",
            "s0Pu.re" => "s0Pu.re",
            "s0Pu.im" => "s0Pu.im",
            "u0Pu.re" => "u0Pu.re",
            "u0Pu.im" => "u0Pu.im",
        ),

        "LF_modifiers_raw" => [
            "i0Pu(re(fixed = false), im(fixed = false))",
            "s0Pu(re(fixed = false), im(fixed = false))",
            "u0Pu(re(fixed = false), im(fixed = false))",
        ],
    )
)

end # module
