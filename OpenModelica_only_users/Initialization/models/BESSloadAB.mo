model BESSloadAB "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;

  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS(
  // input parameters
    DDn = 126,
    DPMaxPu = 999,
    DPMinPu = -999,
    DUp = 126,
    Dbd1Pu = -0.05,
    Dbd2Pu = 0.05,
    DbdPu = 0,
    EMaxPu = 0.1,
    EMinPu = -0.1,
    FDbd1Pu = 0.00083,
    FDbd2Pu = 0.00083,
    FEMaxPu = 999,
    FEMinPu = -999,
    FreqFlag = true,
    IMaxPu = 1.11,
    Iqh1Pu = 0.75,
    Iql1Pu = -0.75,
    IqrMaxPu = 999,
    IqrMinPu = -999,
    Kc = 0,
    Ki = 1e-6,
    KiPLL = 20,
    Kig = 1e-6,
    Kp = 1e-6,
    KpPLL = 3,
    Kpg = 1,
    Kqi = 1,
    Kqp = 1e-6,
    Kqv = 15,
    Kvi = 0.1,
    Kvp = 1e-6,
    Lvplsw = false,
    OmegaMaxPu = 1.5,
    OmegaMinPu = 0.5,
    P0Pu = -0.03,
    PMaxREECPu = 1,
    PMaxREPCPu = 1,
    PMinREECPu = -0.667,
    PMinREPCPu = -0.667,
    PQFlag = false,
    PfFlag = false,
    QFlag = false,
    QMaxREECPu = 0.75,
    QMaxREPCPu = 0.75,
    QMinREECPu = -0.75,
    QMinREPCPu = -0.75,
    RLvTrPu = 0,
    RMvHvPu = 0,
    BMvHvPu = 0,
    GMvHvPu = 0,
    rTfoPu = 1,
    ConverterLVControl = true,
    PPCLocal = true,
    PPcc0Pu = 0,
    QPcc0Pu = 0,
    UPcc0Pu = 1,
    RefFlag = false,
    RrpwrPu = 10,
    SNom = 6,
    SOC0Pu = 0.5,
    SOCMaxPu = 0.8,
    SOCMinPu = 0.2,
    U0Pu = 1,
    VCompFlag = true,
    VDLIp11 = 0.2,
    VDLIp12 = 1.11,
    VDLIp21 = 0.5,
    VDLIp22 = 1.11,
    VDLIp31 = 0.75,
    VDLIp32 = 1.11,
    VDLIp41 = 1,
    VDLIp42 = 1.11,
    VDLIq11 = 0,
    VDLIq12 = 0.75,
    VDLIq21 = 0.2,
    VDLIq22 = 0.75,
    VDLIq31 = 0.5,
    VDLIq32 = 0.75,
    VDLIq41 = 1,
    VDLIq42 = 0.75,
    VDipPu = -99,
    VFlag = true,
    VFrz = 0,
    VMaxPu = 1.1,
    VMinPu = 0.9,
    VRef0Pu = 1,
    VUpPu = 99,
    XLvTrPu = 0,
    XMvHvPu = 1e-10,
    brkpt = 0.1,
    lvpl1 = 1.22,
    tBattery = 999,
    tFilterGC = 0.02,
    tFilterPC = 0.02,
    tFt = 1e-10,
    tFv = 0.05,
    tG = 0.017,
    tIq = 0.017,
    tLag = 0.1,
    tpREEC = 0.05,
    tpREPC = 0.05,
    tPord = 0.017,
    tRv = 0.01,
    zerox = 0.05) annotation(
    
    // From internal initialization
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  
  Modelica.Blocks.Sources.Constant URefPu(k = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 80}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant omegaRefPu(k = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 40}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant QRefPu(k = 0) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant PRefPu(k = 0.5) annotation(
    Placement(visible = true, transformation(origin = {90, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant PFaRef(k = acos(BESS.PF0)) annotation(
    Placement(visible = true, transformation(origin = {90, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    
  Modelica.Blocks.Sources.Constant PAuxPu(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-50, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(transformation(origin = {-54, 56}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
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
    Placement(transformation(origin = {-86, 76}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
      Dynawo.Electrical.Buses.Bus bus1 annotation(
    Placement(transformation(origin = {-54, 20}, extent = {{-10, -10}, {10, 10}})));

  Dynawo.Electrical.Buses.Bus bus2 annotation(
    Placement(transformation(origin = {-26, -32}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));

  Dynawo.Electrical.Lines.Line lineFeeder(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00001) annotation(
    Placement(transformation(origin = {-54, -12}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
    
  Dynawo.Electrical.Loads.LoadAlphaBeta loadAB1(alpha = 2, beta = 2) annotation(
    Placement(transformation(origin = {-90, 19}, extent = {{-10, -10}, {10, 10}})));

  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_01(Value0 = 0.20);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_01(Value0 = 0.05);


  Modelica.Blocks.Sources.Constant const(k = 0) "External PCC active/reactive power (unused when PPCLocal = true)";
  Modelica.ComplexBlocks.Sources.ComplexConstant complexConst(k = Complex(1, 0)) "External PCC voltage (unused when PPCLocal = true)";
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  lineFeeder.switchOffSignal1 = false;
  lineFeeder.switchOffSignal2 = false;
  loadAB1.switchOffSignal1 = false;
  loadAB1.switchOffSignal2 = false;


  BESS.injector.switchOffSignal1 = false;
  BESS.injector.switchOffSignal2 = false;
  BESS.injector.switchOffSignal3 = false;

  // Fix AB load references
  loadAB1.deltaP = 0;
  loadAB1.deltaQ = 0;
  
  loadAB1.PRefPu = PrefPu_load_01.setPoint;
  loadAB1.QRefPu = QrefPu_load_01.setPoint;

  
  connect(const.y, BESS.PPccPu);
  connect(const.y, BESS.QPccPu);
  connect(complexConst.y, BESS.uPccPu);
  connect(URefPu.y, BESS.URefPu) annotation(
    Line(points = {{80, 80}, {20, 80}, {20, 22}}, color = {0, 0, 127}));
  connect(omegaRefPu.y, BESS.omegaRefPu) annotation(
    Line(points = {{80, 40}, {60, 40}, {60, 12}, {42, 12}}, color = {0, 0, 127}));
  connect(QRefPu.y, BESS.QRefPu) annotation(
    Line(points = {{80, 0}, {42, 0}}, color = {0, 0, 127}));
  connect(PRefPu.y, BESS.PRefPu) annotation(
    Line(points = {{79, -40}, {60, -40}, {60, -12}, {42, -12}}, color = {0, 0, 127}));
  connect(PFaRef.y, BESS.PFaRef) annotation(
    Line(points = {{79, -80}, {20, -80}, {20, -22}}, color = {0, 0, 127}));
  connect(PAuxPu.y, BESS.PAuxPu) annotation(
    Line(points = {{-38, -80}, {12, -80}, {12, -22}}, color = {0, 0, 127}));
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
  connect(bus1.terminal, loadAB1.terminal) annotation(
    Line(points = {{-54, 20}, {-90, 20}, {-90, 22}}, color = {0, 0, 255}));
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
  __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
  __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
  Documentation(info = "hi "));
end BESSloadAB;
