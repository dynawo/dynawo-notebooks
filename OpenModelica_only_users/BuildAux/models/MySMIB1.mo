model MySMIB1 "Synchronous machine infinite bus - Step on Pm"
  
  extends Dynawo.Icons.Example;
  
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous generatorSynchronous(
    DPu = 0,
    ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad,
    H = 3.5,
    LDPPu = 0.16634,
    LQ1PPu = 0.92815,
    LQ2PPu = 0.12046,
    LdPPu = 0.15,
    LfPPu = 0.1699,
    LqPPu = 0.15,
    MdPPu = 1.66,
    MdPPuEfd = 1,
    MqPPu = 1.61,
    MrcPPu = 0,
    MsalPu = 0.05,
    P0Pu = -19.98,
    PNomAlt = 2200,
    PNomTurb = 2220,
    Q0Pu = -9.68,
    RDPPu = 0.03339,
    RQ1PPu = 0.00924,
    RQ2PPu = 0.02821,
    RTfPu = 0,
    RaPPu = 0.003,
    RfPPu = 0.00074,
    SNom = 2220,
    SnTfo = 2220,
    U0Pu = 1,
    UBaseHV = 24,
    UBaseLV = 24,
    UNom = 24,
    UNomHV = 24,
    UNomLV = 24,
    UPhase0 = 0.494442,
    XTfPu = 0,
    md = 0.031,
    mq = 0.031,
    nd = 6.93,
    nq = 6.93,
    
    Ce0Pu = 0.903,
    Cm0Pu = 0.903,
    Cos2Eta0 = 0.689,
    Efd0Pu = 2.466,
    IRotor0Pu = 2.467,
    IStator0Pu = 22.779,
    Id0Pu = -0.920,
    If0Pu = 1.486,
    Iq0Pu = -0.393,
    LambdaAD0Pu = 0.893,
    LambdaAQ0Pu = -0.600,
    LambdaAirGap0Pu = 1.076,
    LambdaD0Pu = 0.893,
    LambdaQ10Pu = -0.600,
    LambdaQ20Pu = -0.600,
    Lambdad0Pu = 0.755,
    Lambdaf0Pu = 1.146,
    Lambdaq0Pu = 0.659,
    MdPPuEfdNom = 0.751,
    MdSat0PPu = 1.579,
    Mds0Pu = 1.578,
    Mi0Pu = 1.564,
    MqSat0PPu = 1.529,
    Mqs0Pu = 1.539,
    PGen0Pu = 19.980,
    Pm0Pu = 0.903,
    QGen0Pu = 9.680,
    QStator0Pu = 9.084,
    QStator0PuQNom = 3.055,
    Sin2Eta0 = 0.311,
    Theta0 = 1.211,
    ThetaInternal0 = 0.717,
    UStator0Pu = 0.981,
    Ud0Pu = 0.657,
    Uf0Pu = 0.001,
    Uq0Pu = 0.754,
    i0Pu = Complex(-22.181, -0.961),
    iStator0Pu = Complex(-22.181, -0.961),
    s0Pu = Complex(-19.980, -9.680),
    sStator0Pu = Complex(-19.980, -9.680),
    u0Pu = Complex(0.880, 0.475),
    uStator0Pu = Complex(0.880, 0.475)) annotation(
    Placement(visible = true, transformation(origin = {82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  Modelica.Blocks.Sources.Constant Omega0Pu(k = 1);
  Modelica.Blocks.Sources.Step PmPu(height = 0.02, offset = 0.903, startTime = 1) annotation(
    Placement(visible = true, transformation(origin = {70, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant EfdPu(k = 2.4659) annotation(
    Placement(visible = true, transformation(origin = {50, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
 
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 0.90081) annotation(
    Placement(visible = true, transformation(origin = {-92, 0}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = 0, XPu = 0.022522) annotation(
    Placement(transformation(origin = {-30, 20}, extent = {{-20, -20}, {20, 20}})));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = 0, XPu = 0.04189) annotation(
    Placement(transformation(origin = {-30, -20}, extent = {{-20, -20}, {20, 20}})));
  
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio transformer(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00675, rTfoPu = 1) annotation(
    Placement(visible = true, transformation(origin = {36, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

initial equation
  der(generatorSynchronous.lambdafPu) = 0;
  der(generatorSynchronous.lambdaDPu) = 0;
  der(generatorSynchronous.lambdaQ1Pu) = 0;
  der(generatorSynchronous.lambdaQ2Pu) = 0;
  der(generatorSynchronous.theta) = 0;
  der(generatorSynchronous.omegaPu) = 0;

equation
  connect(Omega0Pu.y, generatorSynchronous.omegaRefPu);
  connect(transformer.terminal2, generatorSynchronous.terminal) annotation(
    Line(points = {{56, 0}, {82, 0}}, color = {0, 0, 255}));
  connect(line2.terminal2, transformer.terminal1) annotation(
    Line(points = {{-10, -20}, {0, -20}, {0, 0}, {16, 0}}, color = {0, 0, 255}));
  connect(line1.terminal2, transformer.terminal1) annotation(
    Line(points = {{-10, 20}, {0, 20}, {0, 0}, {16, 0}}, color = {0, 0, 255}));
  connect(line1.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-50, 20}, {-60, 20}, {-60, 0}, {-92, 0}}, color = {0, 0, 255}));
  connect(line2.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-50, -20}, {-60, -20}, {-60, 0}, {-92, 0}}, color = {0, 0, 255}));
  connect(EfdPu.y, generatorSynchronous.efdPu) annotation(
    Line(points = {{62, -40}, {70, -40}, {70, -16}}, color = {0, 0, 127}));
  connect(PmPu.y, generatorSynchronous.PmPu) annotation(
    Line(points = {{82, -70}, {94, -70}, {94, -16}}, color = {0, 0, 127}));
  
  line1.switchOffSignal1 = false;
  line1.switchOffSignal2 = false;
  line2.switchOffSignal1 = false;
  line2.switchOffSignal2 = false;
  transformer.switchOffSignal1 = false;
  transformer.switchOffSignal2 = false;
  generatorSynchronous.switchOffSignal1 = false;
  generatorSynchronous.switchOffSignal2 = false;
  generatorSynchronous.switchOffSignal3 = false;
  
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 30, Tolerance = 0.000001),
 //__OpenModelica_commandLineOptions = "--daeMode",
    __OpenModelica_simulationFlags(initialStepSize = "0.001", lv = "LOG_STATS", nls = "kinsol", s = "ida", nlsLS = "klu", maxIntegrationOrder = "2", maxStepSize = "10", emit_protected = "()"),
    Documentation(info = ""));
end MySMIB1;
