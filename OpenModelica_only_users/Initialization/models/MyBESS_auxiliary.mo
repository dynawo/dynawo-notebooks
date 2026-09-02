model MyBESS_auxiliary "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed BESS(PGen0Pu = -0.03, U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Controls.WECC.BaseClasses_INIT.WECCPlantCurrentSource_INIT BESS_INIT(PPCLocal = true, GMvHvPu = 0, U0Pu = 1, rTfoPu = 1, QPcc0Pu = 0, SNom = 6, UPcc0Pu = 1, P0Pu = -0.03, RLvTrPu = 0, XLvTrPu = 0, RMvHvPu = 0, XMvHvPu = 1e-10, BMvHvPu = 0, ConverterLVControl = true, PPcc0Pu = 0, Q0Pu(fixed = false), UPhase0(fixed = false));
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  BESS.switchOffSignal1 = false;
  BESS.switchOffSignal2 = false;
  BESS.switchOffSignal3 = false;
  connect(line.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-60, 0}, {-82, 0}}, color = {0, 0, 255}));
  connect(line.terminal2, BESS.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}}, color = {0, 0, 255}));
initial equation
  BESS_INIT.Q0Pu = BESS.QGenPu;
  BESS_INIT.UPhase0 = BESS.UPhase;
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
    Documentation(info = "hi "));
end MyBESS_auxiliary;