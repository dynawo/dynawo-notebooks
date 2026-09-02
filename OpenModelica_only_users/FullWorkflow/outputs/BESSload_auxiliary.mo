model BESSload_auxiliary "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed BESS(PGen0Pu = -0.03, U0Pu = 1) annotation(
 // From internal initialization
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(transformation(origin = {-54, 56}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 1) annotation(
    Placement(transformation(origin = {-86, 76}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus1 annotation(
    Placement(transformation(origin = {-54, 20}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Buses.Bus bus2 annotation(
    Placement(transformation(origin = {-26, -32}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line lineFeeder(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00001) annotation(
    Placement(transformation(origin = {-54, -12}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Loads.LoadPQ loadPQ1(i0Pu(re(start = 0.20, fixed = false), im(start = -(0.05), fixed = false)), s0Pu(re(start = 0.20, fixed = false), im(start = 0.05, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(transformation(origin = {-90, 19}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_01(Value0 = 0.20);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_01(Value0 = 0.05);
  Dynawo.Electrical.Controls.WECC.BaseClasses_INIT.WECCPlantCurrentSource_INIT BESS_INIT(PPCLocal = true, GMvHvPu = 0, U0Pu = 1, rTfoPu = 1, QPcc0Pu = 0, SNom = 6, UPcc0Pu = 1, P0Pu = -0.03, RLvTrPu = 0, XLvTrPu = 0, RMvHvPu = 0, XMvHvPu = 1e-10, BMvHvPu = 0, ConverterLVControl = true, PPcc0Pu = 0, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Loads.Load_INIT loadPQ1_INIT(Q0Pu = 0.05, P0Pu = 0.20, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  lineFeeder.switchOffSignal1 = false;
  lineFeeder.switchOffSignal2 = false;
  loadPQ1.switchOffSignal1 = false;
  loadPQ1.switchOffSignal2 = false;
  BESS.switchOffSignal1 = false;
  BESS.switchOffSignal2 = false;
  BESS.switchOffSignal3 = false;
// Fix PQ load references
  loadPQ1.deltaP = 0;
  loadPQ1.deltaQ = 0;
  loadPQ1.PRefPu = PrefPu_load_01.setPoint;
  loadPQ1.QRefPu = QrefPu_load_01.setPoint;
  connect(lineFeeder.terminal1, bus1.terminal) annotation(
    Line(points = {{-54, 0}, {-54, 20}}, color = {0, 0, 255}));
  connect(line.terminal2, bus1.terminal) annotation(
    Line(points = {{-54, 36}, {-54, 20}}, color = {0, 0, 255}));
  connect(infiniteBus.terminal, line.terminal1) annotation(
    Line(points = {{-86, 76}, {-54, 76}}, color = {0, 0, 255}));
  connect(lineFeeder.terminal2, bus2.terminal) annotation(
    Line(points = {{-54, -32}, {-26, -32}}, color = {0, 0, 255}));
  connect(bus2.terminal, BESS.terminal) annotation(
    Line(points = {{-26, -32}, {-10, -32}, {-10, 0}, {0, 0}}, color = {0, 0, 255}));
  connect(bus1.terminal, loadPQ1.terminal) annotation(
    Line(points = {{-54, 20}, {-90, 20}, {-90, 22}}, color = {0, 0, 255}));
initial equation
  BESS_INIT.Q0Pu = BESS.QGenPu;
  BESS_INIT.UPhase0 = BESS.UPhase;
  loadPQ1_INIT.U0Pu = Modelica.ComplexMath.'abs'(loadPQ1.terminal.V);
  loadPQ1_INIT.UPhase0 = Modelica.ComplexMath.arg(loadPQ1.terminal.V);
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
    Documentation(info = "hi "));
end BESSload_auxiliary;