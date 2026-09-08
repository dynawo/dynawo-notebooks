model BESSload_example2 "Infinite bus + Simplified PV Generator + Load PQ"
  extends Dynawo.Icons.Example;
  
  // Buses
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 1) annotation(
    Placement(transformation(origin = {-86, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus1 annotation(
    Placement(transformation( origin = {-10, 0},extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus2 annotation(
    Placement(transformation(origin = {68, 0}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    
   // Lines
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(transformation(origin = {-46, 0}, extent = {{-20, -20}, {20, 20}})));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00001) annotation(
    Placement(transformation(origin = {26, 0}, extent = {{-20, -20}, {20, 20}})));
  
  // Simplifid PV Generator (BESS static swap)
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed BESS(PGen0Pu = -0.03, U0Pu = 1) annotation(
    Placement(transformation(origin = {68, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  
  // LoadPQ and P, Q setpoints
  Dynawo.Electrical.Loads.LoadPQ loadPQ1(i0Pu(re(fixed = false), im(fixed = false)), s0Pu(re(fixed = false), im(fixed = false)), u0Pu(re(fixed = false), im(fixed = false))) annotation(
    Placement(transformation(origin = {-10, -35}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_01(Value0 = 0.20);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_01(Value0 = 0.05);
  
  // BESS and Load INIT
  Dynawo.Electrical.BESS.WECC.BESS_INIT BESS_INIT(RPu = 0, SNom = 6, P0Pu = -0.03, U0Pu = 1, XPu = 1e-10, Q0Pu(fixed = false), UPhase0(fixed = false));
  
  Dynawo.Electrical.Loads.Load_INIT loadPQ1_INIT(Q0Pu = 0.05, P0Pu = 0.20, U0Pu(start=0.8,fixed = false), UPhase0(start=0.2,fixed = false));
  
  
equation

// SwitchoffSignal
  line1.switchOffSignal1.value = false;
  line1.switchOffSignal2.value = false;
  line2.switchOffSignal1.value = false;
  line2.switchOffSignal2.value = false;
  loadPQ1.switchOffSignal1.value = false;
  loadPQ1.switchOffSignal2.value = false;
  BESS.switchOffSignal1.value = false;
  BESS.switchOffSignal2.value = false;
  BESS.switchOffSignal3.value = false;
  
// Fix PQ load references
  loadPQ1.deltaP = 0;
  loadPQ1.deltaQ = 0;
  loadPQ1.PRefPu = PrefPu_load_01.setPoint;
  loadPQ1.QRefPu = QrefPu_load_01.setPoint;
  
// Connections
  connect(line2.terminal1, bus1.terminal) annotation(
    Line(points = {{6, 0}, {-10, 0}}, color = {0, 0, 255}));
  connect(line1.terminal2, bus1.terminal) annotation(
    Line(points = {{-26, 0}, {-10, 0}}, color = {0, 0, 255}));
  connect(infiniteBus.terminal, line1.terminal1) annotation(
    Line(points = {{-86, 0}, {-66, 0}}, color = {0, 0, 255}));
  connect(line2.terminal2, bus2.terminal) annotation(
    Line(points = {{46, 0}, {68, 0}}, color = {0, 0, 255}));
  connect(bus2.terminal, BESS.terminal) annotation(
    Line(points = {{68, 0}, {68, -40}}, color = {0, 0, 255}));
  connect(bus1.terminal, loadPQ1.terminal) annotation(
    Line(points = {{-10, 0}, {-10, -35}}, color = {0, 0, 255}));
    
    
initial equation

// BESS INIT parameters <-> Simplified generator LF solution
  BESS_INIT.Q0Pu = BESS.QGenPu;
  BESS_INIT.UPhase0 = BESS.UPhase;
  
// Load INIT parameters <-> LoadPQ LF solution
  //loadPQ1_INIT.U0Pu = ;
  //loadPQ1_INIT.UPhase0 = ; 
  loadPQ1_INIT.u0Pu.im = loadPQ1.u0Pu.im;
  loadPQ1_INIT.i0Pu.im = loadPQ1.i0Pu.im;
  loadPQ1_INIT.s0Pu.im = loadPQ1.s0Pu.im;
  loadPQ1_INIT.i0Pu.re = loadPQ1.i0Pu.re;
  loadPQ1_INIT.s0Pu.re = loadPQ1.s0Pu.re;
  loadPQ1_INIT.u0Pu.re = loadPQ1.u0Pu.re;


  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
    Documentation(info = "hi "));
end BESSload_example2;
