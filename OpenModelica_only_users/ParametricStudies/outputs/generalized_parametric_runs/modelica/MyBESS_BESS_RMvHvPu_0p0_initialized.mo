model MyBESS_BESS_RMvHvPu_0p0_initialized "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS(u0Pu = Complex(0.9999999999999981, -6.198299999999998e-8), KiPLL = 20, DDn = 126, Kqi = 1, U0Pu = 1, tFv = 0.05, PConv0Pu = 0.5, UConv0Pu = 1.0, Dbd2Pu = 0.05, uConv0Pu = Complex(0.9999999999999981, -6.193299999999998e-8), Q0Pu = 9.997267555296222e-10, EMaxPu = 0.1, UInj0Pu = 1.0000050000123335, VDLIp11 = 0.2, VRef0Pu = 1, QMinREPCPu = -0.75, tG = 0.017, Kvp = 1e-6, PMinREPCPu = -0.667, Id0Pu = 0.5, VMaxPu = 1.1, XMvHvPu = 1e-10, VDLIp22 = 1.11, VUpPu = 99, Kc = 0, Kqv = 15, IMaxPu = 1.11, QFlag = false, PPcc0Pu = 0, RefFlag = false, SOCMaxPu = 0.8, VDLIq31 = 0.5, VFrz = 0, tFilterPC = 0.02, i0Pu = Complex(-0.030000000000000006, 8.59763244470379e-10), QInj0Pu = 2.483362887407843e-6, s0Pu = Complex(-0.03, 9.997267555296222e-10), VFlag = true, Ki = 1e-6, VDLIp32 = 1.11, VDLIq42 = 0.75, PfFlag = false, brkpt = 0.1, EMinPu = -0.1, VDLIp42 = 1.11, VDLIq41 = 1, VDLIq21 = 0.2, VDLIq12 = 0.75, IqrMinPu = -999, QMinREECPu = -0.75, lvpl1 = 1.22, P0Pu = -0.03, RMvHvPu = 0.0, DPMaxPu = 999, DbdPu = 0, FEMaxPu = 999, tFilterGC = 0.02, SOCMinPu = 0.2, GMvHvPu = 0, Kqp = 1e-6, VDLIp12 = 1.11, tIq = 0.017, IqrMaxPu = 999, RrpwrPu = 10, UPcc0Pu = 1, KpPLL = 3, BMvHvPu = 0, VDLIq11 = 0, tpREPC = 0.05, zerox = 0.05, PInj0Pu = 0.5000025, PPCLocal = true, DUp = 126, VDLIp21 = 0.5, PMaxREECPu = 1, FDbd1Pu = 0.00083, OmegaMaxPu = 1.5, Iql1Pu = -0.75, SNom = 6, SOC0Pu = 0.5, FreqFlag = true, RLvTrPu = 0, VMinPu = 0.9, XLvTrPu = 0, tFt = 1e-10, Iq0Pu = -1.663711259216037e-8, QConv0Pu = -1.663711259216037e-8, ConverterLVControl = true, Iqh1Pu = 0.75, Kig = 1e-6, VDLIq32 = 0.75, VDipPu = -99, Kvi = 0.1, VCompFlag = true, PF0 = 0.9999999999999994, rTfoPu = 1, QPcc0Pu = 0, FEMinPu = -999, VDLIp31 = 0.75, PQFlag = false, DPMinPu = -999, UPhaseConv0 = -6.193300000000002e-8, Lvplsw = false, PMaxREPCPu = 1, tPord = 0.017, tRv = 0.01, QMaxREECPu = 0.75, Kpg = 1, tpREEC = 0.05, iConv0Pu = Complex(0.5000000000000001, -1.432938740783965e-8), Kp = 1e-6, tBattery = 999, QMaxREPCPu = 0.75, PMinREECPu = -0.667, tLag = 0.1, VDLIp41 = 1, FDbd2Pu = 0.00083, VDLIq22 = 0.75, uInj0Pu = Complex(1.0000050000001413, 4.938066856706128e-6), uPcc0Pu = Complex(0.5403023058681398, 0.8414709848078965), OmegaMinPu = 0.5, Dbd1Pu = -0.05) annotation(
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
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBusWithVariations infiniteBus(U0Pu = 1, UEvtPu = 0.55, UPhase = 0, omega0Pu = 1, omegaEvtPu = 1.01, tOmegaEvtEnd = 6.5, tOmegaEvtStart = 6, tUEvtEnd = 1.5, tUEvtStart = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Sources.Constant PAuxPu(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-50, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0) "External PCC active/reactive power (unused when PPCLocal = true)";
  Modelica.ComplexBlocks.Sources.ComplexConstant complexConst(k = Complex(1, 0)) "External PCC voltage (unused when PPCLocal = true)";
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  BESS.injector.switchOffSignal1 = false;
  BESS.injector.switchOffSignal2 = false;
  BESS.injector.switchOffSignal3 = false;
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
  connect(line.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-60, 0}, {-82, 0}}, color = {0, 0, 255}));
  connect(PAuxPu.y, BESS.PAuxPu) annotation(
    Line(points = {{-38, -80}, {12, -80}, {12, -22}}, color = {0, 0, 127}));
  connect(line.terminal2, BESS.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}}, color = {0, 0, 255}));
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
    Documentation(info = "hi "));
end MyBESS_BESS_RMvHvPu_0p0_initialized;