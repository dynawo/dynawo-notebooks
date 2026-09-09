model Demo_SMIB_auxiliary "Synchronous machine infinite bus - Step on Pm"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed generatorSynchronous(PGen0Pu = -(-19.98), U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 0.90081) annotation(
    Placement(visible = true, transformation(origin = {-92, 0}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = 0, XPu = 0.022522) annotation(
    Placement(transformation(origin = {-30, 20}, extent = {{-20, -20}, {20, 20}})));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = 0, XPu = 0.04189) annotation(
    Placement(transformation(origin = {-30, -20}, extent = {{-20, -20}, {20, 20}})));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio transformer(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00675, rTfoPu = 1) annotation(
    Placement(visible = true, transformation(origin = {36, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousInt_INIT generatorSynchronous_INIT(LqPu = 0.15, LDPu = 0.16634, SnTfo = 2220, md = 0.031, U0Pu = 1, PNomTurb = 2220, MrcPu = 0, UNomHV = 24, RTfPu = 0, RQ1Pu = 0.00924, PNomAlt = 2200, UBaseHV = 24, LfPu = 0.1699, UNom = 24, mq = 0.031, UBaseLV = 24, RDPu = 0.03339, H = 3.5, RQ2Pu = 0.02821, UNomLV = 24, LQ1Pu = 0.92815, MqPu = 1.61, nd = 6.93, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, MdPuEfd = 1, RfPu = 0.00074, LQ2Pu = 0.12046, SNom = 2220, P0Pu = -19.98, XTfPu = 0, LdPu = 0.15, MdPu = 1.66, RaPu = 0.003, nq = 6.93, Q0Pu(fixed = false), UPhase0(fixed = false));
initial equation
  generatorSynchronous_INIT.Q0Pu = -(generatorSynchronous.QGenPu);
  generatorSynchronous_INIT.UPhase0 = generatorSynchronous.UPhase;
equation
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
end Demo_SMIB_auxiliary;