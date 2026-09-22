# dictionaries/init_models.py
# INIT components added to the auxiliary model and their equations.

INIT_MODELS = {
    "Dynawo.Electrical.Loads.LoadZIP": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers": {
            "P0Pu": "PRefPu",
            "Q0Pu": "QRefPu",
        },

        "extra_modifiers_raw": [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
        ],

        "init_equations_raw": [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    },

    "Dynawo.Electrical.Loads.LoadPQ": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers": {
            "P0Pu": "PRefPu",
            "Q0Pu": "QRefPu",
        },

        "extra_modifiers_raw": [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
        ],

        "init_equations_raw": [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    },

    "Dynawo.Electrical.Loads.LoadAlphaBeta": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers": {
            "P0Pu": "PRefPu",
            "Q0Pu": "QRefPu",
        },

        "extra_modifiers_raw": [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
        ],

        "init_equations_raw": [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    },

    "Dynawo.Electrical.Loads.LoadAlphaBetaRestorative": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Loads.Load_INIT",

        "write_modifiers": {
            "P0Pu": "PRefPu",
            "Q0Pu": "QRefPu",
        },

        "extra_modifiers_raw": [
            "U0Pu(start = 1, fixed = false)",
            "UPhase0(start = 0, fixed = false)",
        ],

        "init_equations_raw": [
            "{init}.U0Pu = Modelica.ComplexMath.'abs'({base}.terminal.V);",
            "{init}.UPhase0 = Modelica.ComplexMath.arg({base}.terminal.V);",
        ],
    },

    "Dynawo.Electrical.BESS.WECC.BESSCurrentSource": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Controls.WECC.BaseClasses_INIT.WECCPlantCurrentSource_INIT",

        "write_modifiers": {
            "RLvTrPu": "RLvTrPu",
            "XLvTrPu": "XLvTrPu",
            "RMvHvPu": "RMvHvPu",
            "XMvHvPu": "XMvHvPu",
            "BMvHvPu": "BMvHvPu",
            "GMvHvPu": "GMvHvPu",
            "rTfoPu": "rTfoPu",
            "SNom": "SNom",
            "P0Pu": "P0Pu",
            "U0Pu": "U0Pu",
            "ConverterLVControl": "ConverterLVControl",
            "PPCLocal": "PPCLocal",
            "PPcc0Pu": "PPcc0Pu",
            "QPcc0Pu": "QPcc0Pu",
            "UPcc0Pu": "UPcc0Pu",
        },

        "extra_modifiers_raw": [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations": {
            "Q0Pu": "QGenPu",
            "UPhase0": "UPhase",
        },
    },

    "Dynawo.Electrical.Photovoltaics.WECC.PVCurrentSource": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Controls.WECC.BaseClasses_INIT.WECCPlantCurrentSource_INIT",

        "write_modifiers": {
            "RLvTrPu": "RLvTrPu",
            "XLvTrPu": "XLvTrPu",
            "RMvHvPu": "RMvHvPu",
            "XMvHvPu": "XMvHvPu",
            "BMvHvPu": "BMvHvPu",
            "GMvHvPu": "GMvHvPu",
            "rTfoPu": "rTfoPu",
            "SNom": "SNom",
            "P0Pu": "P0Pu",
            "U0Pu": "U0Pu",
            "ConverterLVControl": "ConverterLVControl",
            "PPCLocal": "PPCLocal",
            "PPcc0Pu": "PPcc0Pu",
            "QPcc0Pu": "QPcc0Pu",
            "UPcc0Pu": "UPcc0Pu",
        },

        "extra_modifiers_raw": [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations": {
            "Q0Pu": "QGenPu",
            "UPhase0": "UPhase",
        },
    },

    "Dynawo.Electrical.Machines.SignalN.GeneratorPV": {
        "init_component_suffix": "_INIT",
        "init_class": "Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT",

        "write_modifiers": {
            "P0Pu": "PRef0Pu",
            "PMax": "PMaxPu",
            "PMin": "PMinPu",
            "QMax": "QMaxPu",
            "QMin": "QMinPu",
            "U0Pu": "U0Pu",
            "URef0Pu": "URef0Pu",
        },

        "extra_modifiers_raw": [
            "Q0Pu(fixed = false)",
            "UPhase0(fixed = false)",
        ],

        "init_equations": {
            "Q0Pu": "-QGenPu",
            "UPhase0": "UPhase",
        },
    },

    "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous": {
        "profiles": {
            "GeneratorSynchronousInt_INIT": {
                "init_component_suffix": "_INIT",
                "init_class": "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousInt_INIT",

                "write_modifiers": {
                    "DPu": "DPu",
                    "ExcitationPu": "ExcitationPu",
                    "H": "H",
                    "LDPu": "LDPPu",
                    "LQ1Pu": "LQ1PPu",
                    "LQ2Pu": "LQ2PPu",
                    "LdPu": "LdPPu",
                    "LfPu": "LfPPu",
                    "LqPu": "LqPPu",
                    "MdPu": "MdPPu",
                    "MdPuEfd": "MdPPuEfd",
                    "MqPu": "MqPPu",
                    "MrcPu": "MrcPPu",
                    "P0Pu": "P0Pu",
                    "PNomAlt": "PNomAlt",
                    "PNomTurb": "PNomTurb",
                    "RDPu": "RDPPu",
                    "RQ1Pu": "RQ1PPu",
                    "RQ2Pu": "RQ2PPu",
                    "RTfPu": "RTfPu",
                    "RaPu": "RaPPu",
                    "RfPu": "RfPPu",
                    "SNom": "SNom",
                    "SnTfo": "SnTfo",
                    "U0Pu": "U0Pu",
                    "UBaseHV": "UBaseHV",
                    "UBaseLV": "UBaseLV",
                    "UNom": "UNom",
                    "UNomHV": "UNomHV",
                    "UNomLV": "UNomLV",
                    "XTfPu": "XTfPu",
                    "md": "md",
                    "mq": "mq",
                    "nd": "nd",
                    "nq": "nq",
                },

                "extra_modifiers_raw": [
                    "Q0Pu(fixed = false)",
                    "UPhase0(fixed = false)",
                ],

                "init_equations": {
                    "Q0Pu": "-QGenPu",
                    "UPhase0": "UPhase",
                },
            },

            "GeneratorSynchronousExt3W_INIT": {
                "init_component_suffix": "_INIT",
                "init_class": "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT",

                "write_modifiers": {
                    "DPu": "DPu",
                    "ExcitationPu": "ExcitationPu",
                    "H": "H",
                    "P0Pu": "P0Pu",
                    "PNomAlt": "PNomAlt",
                    "PNomTurb": "PNomTurb",
                    "RTfPu": "RTfPu",
                    "SNom": "SNom",
                    "SnTfo": "SnTfo",
                    "U0Pu": "U0Pu",
                    "UBaseHV": "UBaseHV",
                    "UBaseLV": "UBaseLV",
                    "UNom": "UNom",
                    "UNomHV": "UNomHV",
                    "UNomLV": "UNomLV",
                    "XTfPu": "XTfPu",
                    "md": "md",
                    "mq": "mq",
                    "nd": "nd",
                    "nq": "nq",
                },

                "write_modifiers_from_model": [
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

                "extra_modifiers_raw": [
                    "Q0Pu(fixed = false)",
                    "UPhase0(fixed = false)",
                ],

                "init_equations": {
                    "Q0Pu": "-QGenPu",
                    "UPhase0": "UPhase",
                },
            },

            "GeneratorSynchronousExt4W_INIT": {
                "init_component_suffix": "_INIT",
                "init_class": "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT",

                "write_modifiers": {
                    "DPu": "DPu",
                    "ExcitationPu": "ExcitationPu",
                    "H": "H",
                    "P0Pu": "P0Pu",
                    "PNomAlt": "PNomAlt",
                    "PNomTurb": "PNomTurb",
                    "RTfPu": "RTfPu",
                    "SNom": "SNom",
                    "SnTfo": "SnTfo",
                    "U0Pu": "U0Pu",
                    "UBaseHV": "UBaseHV",
                    "UBaseLV": "UBaseLV",
                    "UNom": "UNom",
                    "UNomHV": "UNomHV",
                    "UNomLV": "UNomLV",
                    "XTfPu": "XTfPu",
                    "md": "md",
                    "mq": "mq",
                    "nd": "nd",
                    "nq": "nq",
                },

                "write_modifiers_from_model": [
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

                "extra_modifiers_raw": [
                    "Q0Pu(fixed = false)",
                    "UPhase0(fixed = false)",
                ],

                "init_equations": {
                    "Q0Pu": "-QGenPu",
                    "UPhase0": "UPhase",
                },
            },
        },
    },
}
