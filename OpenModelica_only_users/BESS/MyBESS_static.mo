within Dynawo.Examples.BESS.WECC;

model MyBESS_static "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Icons.Example;

  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed GenPV(PGen0Pu = 0.03, U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBusWithVariations infiniteBus(
    U0Pu = 1,
    UEvtPu = 0.55,
    UPhase = 0,
    omega0Pu = 1,
    omegaEvtPu = 1.01,
    tOmegaEvtEnd = 6.5,
    tOmegaEvtStart = 6,
    tUEvtEnd = 1.5,
    tUEvtStart = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
    
  Dynawo.Electrical.BESS.WECC.BESS_INIT bess_INIT(
   RPu = 0,
   SNom = 6,
   XPu =  1e-10,
   P0Pu = GenPV.PGen0Pu,
   U0Pu = GenPV.U0Pu,
   Q0Pu(fixed = false),
   UPhase0(fixed = false)) annotation(
   Placement(visible = true, transformation(origin = {-70, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

initial equation
  bess_INIT.Q0Pu    = GenPV.QGenPu;
  bess_INIT.UPhase0 = GenPV.UPhase;

equation
  line.switchOffSignal1.value = false;
  line.switchOffSignal2.value = false;
  GenPV.switchOffSignal1.value = false;
  GenPV.switchOffSignal2.value = false;
  GenPV.switchOffSignal3.value = false;
  
  connect(line.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-60, 0}, {-82, 0}}, color = {0, 0, 255}));
  connect(line.terminal2, GenPV.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}}, color = {0, 0, 255}));

  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-05, Interval = 0.001),
  __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
  __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
  Documentation(info = "hi "));
end MyBESS_static;
