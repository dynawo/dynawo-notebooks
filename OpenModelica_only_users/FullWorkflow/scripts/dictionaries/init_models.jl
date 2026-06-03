# dictionaries/init_models.jl
# INIT components added to the auxiliary model and their equations.

const INIT_MODELS = Dict{String, Any}(
    "Dynawo.Electrical.Loads.LoadZIP" => Dict(
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

        "init_equations_raw" => [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
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

        "init_equations_raw" => [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
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

        "init_equations_raw" => [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    ),

    "Dynawo.Electrical.Loads.LoadAlphaBetaRestorative" => Dict(
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

        "init_equations_raw" => [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    ),

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

    "Dynawo.Electrical.Photovoltaics.WECC.PVCurrentSource" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.Photovoltaics.WECC.PVCurrentSource_INIT",

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

    "Dynawo.Electrical.Machines.SignalN.GeneratorPV" => Dict(
        "init_component_suffix" => "_INIT",
        "init_class" => "Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT",

        "write_modifiers" => Dict(
            "P0Pu" => "PRef0Pu",
            "PMax" => "PMaxPu",
            "PMin" => "PMinPu",
            "QMax" => "QMaxPu",
            "QMin" => "QMinPu",
            "U0Pu" => "U0Pu",
            "URef0Pu" => "URef0Pu",
        ),

        "extra_modifiers_raw" => [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations" => Dict(
            "Q0Pu"    => "-QGenPu",
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
                    "P0Pu" => "P0Pu",
                    "PNomAlt" => "PNomAlt",
                    "PNomTurb" => "PNomTurb",
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
                    "Q0Pu"    => "-QGenPu",
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
                    "Q0Pu"    => "-QGenPu",
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
                    "Q0Pu"    => "-QGenPu",
                    "UPhase0" => "UPhase",
                )
            )
        )
    ),
)
