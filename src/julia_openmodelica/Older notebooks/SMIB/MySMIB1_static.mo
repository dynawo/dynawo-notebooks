within Dynawo.Examples.SMIB;

model MySMIB1_static "Synchronous machine infinite bus - Step on Pm"
  
  extends Icons.Example;
  
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed GenPV(PGen0Pu = -19.98, U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 0.90081) annotation(
    Placement(visible = true, transformation(origin = {-92, 0}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = 0, XPu = 0.022522) annotation(
    Placement(transformation(origin = {-30, 20}, extent = {{-20, -20}, {20, 20}})));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = 0, XPu = 0.04189) annotation(
    Placement(transformation(origin = {-30, -20}, extent = {{-20, -20}, {20, 20}})));
  
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio transformer(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00675, rTfoPu = 1) annotation(
    Placement(visible = true, transformation(origin = {36, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

   // Initialization
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousInt_INIT generatorSynchronousInt_INIT(
    DPu = 0,
    ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad,
    H = 3.5,
    LDPu = 0.16634,
    LQ1Pu = 0.92815,
    LQ2Pu = 0.12046,
    LdPu = 0.15,
    LfPu = 0.1699,
    LqPu = 0.15,
    MdPu = 1.66,
    MdPuEfd = 1,
    MqPu = 1.61,
    MrcPu = 0,
    PNomAlt = 2200,
    PNomTurb = 2220,
    RDPu = 0.03339,
    RQ1Pu = 0.00924,
    RQ2Pu = 0.02821,
    RTfPu = 0,
    RaPu = 0.003,
    RfPu = 0.00074,
    SNom = 2220,
    SnTfo = 2220,
    UBaseHV = 24,
    UBaseLV = 24,
    UNom = 24,
    UNomHV = 24,
    UNomLV = 24,
    XTfPu = 0,
    md = 0.031,
    mq = 0.031,
    nd = 6.93,
    nq = 6.93,
    P0Pu = GenPV.PGen0Pu,
    U0Pu = GenPV.U0Pu,
    UPhase0(fixed = false),
    Q0Pu(fixed = false));
    
initial equation
  generatorSynchronousInt_INIT.Q0Pu    = GenPV.QGenPu;
  generatorSynchronousInt_INIT.UPhase0 = GenPV.UPhase;

equation
  connect(transformer.terminal2, GenPV.terminal) annotation(
    Line(points = {{56, 0}, {82, 0}}, color = {0, 0, 255}));
  connect(line2.terminal2, transformer.terminal1) annotation(
    Line(points = {{-10, -20}, {0, -20}, {0, 0}, {16, 0}}, color = {0, 0, 255}));
  connect(line1.terminal2, transformer.terminal1) annotation(
    Line(points = {{-10, 20}, {0, 20}, {0, 0}, {16, 0}}, color = {0, 0, 255}));
  connect(line1.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-50, 20}, {-60, 20}, {-60, 0}, {-92, 0}}, color = {0, 0, 255}));
  connect(line2.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-50, -20}, {-60, -20}, {-60, 0}, {-92, 0}}, color = {0, 0, 255}));
  
  line1.switchOffSignal1.value = false;
  line1.switchOffSignal2.value = false;
  line2.switchOffSignal1.value = false;
  line2.switchOffSignal2.value = false;
  transformer.switchOffSignal1.value = false;
  transformer.switchOffSignal2.value = false;
  GenPV.switchOffSignal1.value = false;
  GenPV.switchOffSignal2.value = false;
  GenPV.switchOffSignal3.value = false;
  
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 30, Tolerance = 0.000001),
 //__OpenModelica_commandLineOptions = "--daeMode",
    __OpenModelica_simulationFlags(initialStepSize = "0.001", lv = "LOG_STATS", nls = "kinsol", s = "ida", nlsLS = "klu", maxIntegrationOrder = "2", maxStepSize = "10", emit_protected = "()"),
    Documentation(info = ""));
end MySMIB1_static;
