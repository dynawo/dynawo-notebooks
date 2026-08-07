# dictionaries/lf_replacements.jl
# Component replacements and valid interfaces in the auxiliary model.

const REPLACEMENTS = Dict{String, Any}(
    "Dynawo.Electrical.BESS.WECC.BESSCurrentSource" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Electrical.Photovoltaics.WECC.PVCurrentSource" => Dict(
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

    "Dynawo.Electrical.Controls.Basics.Step" => Dict(
        "new_class" => "Dynawo.Electrical.Controls.Basics.SetPoint",
        "write_modifiers" => Dict(
            "Value0" => "Value0",
        )
    ),

    "Dynawo.Electrical.Sources.InertialGrid.InertialGrid" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorAlphaBeta",
        "write_modifiers" => Dict(
            "PGen0Pu" => "P0Pu",
            "QGen0Pu" => "Q0Pu",
        ),
        "extra_modifiers_raw" => [
            "Alpha = 0",
            "Beta = 0",
            "U0Pu = 1",
            "u0Pu = Complex(1, 0)",
            "i0Pu = Modelica.ComplexMath.conj(Complex({component}.PGen0Pu, {component}.QGen0Pu) / {component}.u0Pu)",
        ]
    ),

    "Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "-P0Pu",
            "U0Pu"    => "U0Pu",
        )
    ),

    "Dynawo.Electrical.Machines.SignalN.GeneratorPV" => Dict(
        "new_class" => "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed",
        "write_modifiers" => Dict(
            "PGen0Pu" => "-PRef0Pu",
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
    ),

    "Dynawo.Electrical.Loads.LoadAlphaBetaRestorative" => Dict(
        "new_class" => "Dynawo.Electrical.Loads.LoadPQ",
        "extra_modifiers_raw" => [
            "i0Pu(re(fixed = false), im(fixed = false))",
            "s0Pu(re(fixed = false), im(fixed = false))",
            "u0Pu(re(fixed = false), im(fixed = false))",
        ]
    ),

    "Dynawo.Electrical.Loads.LoadZIP" => Dict(
        "new_class" => "Dynawo.Electrical.Loads.LoadPQ",
        "extra_modifiers_raw" => [
            "i0Pu(re(fixed = false), im(fixed = false))",
            "s0Pu(re(fixed = false), im(fixed = false))",
            "u0Pu(re(fixed = false), im(fixed = false))",
        ]
    )
)

const AUX_ALLOWED_REFS = Dict{String, Vector{String}}(
    "Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed" => [
        ".terminal",
        ".running",
        ".switchOffSignal1",
        ".switchOffSignal2",
        ".switchOffSignal3",
        ".PGen0Pu",
        ".QGen0Pu",
        ".U0Pu",
        ".u0Pu",
        ".i0Pu",
        ".PGen",
        ".PGenPu",
        ".QGenPu",
        ".SGenPu",
        ".UPu",
        ".UPhase",
    ],

    "Dynawo.Electrical.Machines.Simplified.GeneratorAlphaBeta" => [
        ".terminal",
        ".running",
        ".switchOffSignal1",
        ".switchOffSignal2",
        ".switchOffSignal3",
        ".PGen0Pu",
        ".QGen0Pu",
        ".U0Pu",
        ".u0Pu",
        ".i0Pu",
        ".PGen",
        ".PGenPu",
        ".QGenPu",
        ".SGenPu",
        ".UPu",
        ".Alpha",
        ".Beta",
    ],

    "Dynawo.Electrical.Buses.InfiniteBus" => [
        ".terminal",
        ".UPu",
        ".UPhase",
        ".UNom",
        ".UPuVar",
        ".UPhaseVar",
        ".U",
    ],

    "Dynawo.Electrical.Controls.Basics.SetPoint" => [
        ".Value0",
        ".setPoint",
    ],
)
