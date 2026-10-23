model Demo_SMIB_initialized "Synchronous machine infinite bus - Step on Pm"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous generatorSynchronous(DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.5, LDPPu = 0.16634, LQ1PPu = 0.92815, LQ2PPu = 0.12046, LdPPu = 0.15, LfPPu = 0.1699, LqPPu = 0.15, MdPPu = 1.66, MdPPuEfd = 1.0, MqPPu = 1.61, MrcPPu = 0.0, MsalPu = 0.04999999999999982, P0Pu = -19.98, PNomAlt = 2200, PNomTurb = 2220, Q0Pu = -9.67888049087389, RDPPu = 0.03339, RQ1PPu = 0.00924, RQ2PPu = 0.02821, RTfPu = 0, RaPPu = 0.003, RfPPu = 0.00074, SNom = 2220, SnTfo = 2220, U0Pu = 1.0, UBaseHV = 24, UBaseLV = 24, UNom = 24, UNomHV = 24, UNomLV = 24, UPhase0 = 0.4944955098008534, XTfPu = 0, md = 0.031, mq = 0.031, nd = 6.93, nq = 6.93, Ce0Pu = 0.903000250350357, Cm0Pu = 0.903000250350357, Cos2Eta0 = 0.6888857433578157, Efd0Pu = 2.4658964809226047, IRotor0Pu = 2.4658964809226047, IStator0Pu = 22.200926276996174, Id0Pu = -0.9197470249987568, If0Pu = 1.4854798077847018, Iq0Pu = -0.3926179569567317, LambdaAD0Pu = 0.8934295889397309, LambdaAQ0Pu = -0.6004083029862408, LambdaAirGap0Pu = 1.076432329822843, LambdaD0Pu = 0.893429588939731, LambdaQ10Pu = -0.6004082983373565, LambdaQ20Pu = -0.6004082983373565, Lambdad0Pu = 0.7554675351899174, Lambdaf0Pu = 1.1458126082823514, Lambdaq0Pu = -0.6593009965297506, MdPPuEfdNom = 0.7509782418801915, MdSat0PPu = 1.57924309165901, Mds0Pu = 1.5784791671617409, Mi0Pu = 1.5636873788269008, MqSat0PPu = 1.52924309165901, Mqs0Pu = 1.5309346139339777, PGen0Pu = 19.98, Pm0Pu = 0.903000250350357, QGen0Pu = 9.67888049087389, QStator0Pu = 9.678880490873892, QStator0PuQNom = 3.255359791276271, Sin2Eta0 = 0.3111142566421844, Theta0 = 1.2107202999164237, ThetaInternal0 = 0.7162247901155704, UStator0Pu = 1.0, Ud0Pu = 0.6565417554547543, Uf0Pu = 0.0010992550577606792, Uq0Pu = 0.7542896813190472, i0Pu = Complex(-22.180037965830753, -0.9628309254098961), iStator0Pu = Complex(-22.180037965830753, -0.9628309254098961), s0Pu = Complex(-19.98, -9.67888049087389), sStator0Pu = Complex(-19.98, -9.678880490873892), u0Pu = Complex(0.8802082466578147, 0.4745876552498765), uStator0Pu = Complex(0.8802082466578147, 0.4745876552498765)) annotation(
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
end Demo_SMIB_initialized;