model ManyBESS_initialized "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS(u0Pu = Complex(0.9999999999999101, -4.2396599999999206e-7), KiPLL = 20, DDn = 126, Kqi = 1, U0Pu = 1, tFv = 0.05, PConv0Pu = 0.5, UConv0Pu = 0.9999999999999999, Dbd2Pu = 0.05, uConv0Pu = Complex(0.9999999999999101, -4.2391599999999205e-7), Q0Pu = 4.492227387527755e-9, EMaxPu = 0.1, UInj0Pu = 1.0000050000117515, VDLIp11 = 0.2, VRef0Pu = 1, QMinREPCPu = -0.75, tG = 0.017, Kvp = 1e-6, PMinREPCPu = -0.667, Id0Pu = 0.5000000000000001, VMaxPu = 1.1, XMvHvPu = 1e-10, VDLIp22 = 1.11, VUpPu = 99, Kc = 0, Kqv = 15, IMaxPu = 1.11, QFlag = false, PPcc0Pu = 0, RefFlag = false, SOCMaxPu = 0.8, VDLIq31 = 0.5, VFrz = 0, tFilterPC = 0.02, i0Pu = Complex(-0.029999999999999208, 8.226752612472412e-9), QInj0Pu = 2.425154543541261e-6, s0Pu = Complex(-0.03, 4.492227387527755e-9), VFlag = true, Ki = 1e-6, VDLIp32 = 1.11, VDLIq42 = 0.75, PfFlag = false, brkpt = 0.1, EMinPu = -0.1, VDLIp42 = 1.11, VDLIq41 = 1, VDLIq21 = 0.2, VDLIq12 = 0.75, IqrMinPu = -999, QMinREECPu = -0.75, lvpl1 = 1.22, P0Pu = -0.03, RMvHvPu = 0, DPMaxPu = 999, DbdPu = 0, FEMaxPu = 999, tFilterGC = 0.02, SOCMinPu = 0.2, GMvHvPu = 0, Kqp = 1e-6, VDLIp12 = 1.11, tIq = 0.017, IqrMaxPu = 999, RrpwrPu = 10, UPcc0Pu = 1, KpPLL = 3, BMvHvPu = 0, VDLIq11 = 0, tpREPC = 0.05, zerox = 0.05, PInj0Pu = 0.5000025, PPCLocal = true, DUp = 126, VDLIp21 = 0.5, PMaxREECPu = 1, FDbd1Pu = 0.00083, OmegaMaxPu = 1.5, Iql1Pu = -0.75, SNom = 6, SOC0Pu = 0.5, FreqFlag = true, RLvTrPu = 0, VMinPu = 0.9, XLvTrPu = 0, tFt = 1e-10, Iq0Pu = -7.484545645879589e-8, QConv0Pu = -7.484545645879592e-8, ConverterLVControl = true, Iqh1Pu = 0.75, Kig = 1e-6, VDLIq32 = 0.75, VDipPu = -99, Kvi = 0.1, VCompFlag = true, PF0 = 0.9999999999999888, rTfoPu = 1, QPcc0Pu = 0, FEMinPu = -999, VDLIp31 = 0.75, PQFlag = false, DPMinPu = -999, UPhaseConv0 = -4.2391600000000476e-7, Lvplsw = false, PMaxREPCPu = 1, tPord = 0.017, tRv = 0.01, QMaxREECPu = 0.75, Kpg = 1, tpREEC = 0.05, iConv0Pu = Complex(0.49999999999998684, -1.3711254354120686e-7), Kp = 1e-6, tBattery = 999, QMaxREPCPu = 0.75, PMinREECPu = -0.667, tLag = 0.1, VDLIp41 = 1, FDbd2Pu = 0.00083, VDLIq22 = 0.75, uInj0Pu = Complex(1.0000050000012812, 4.5760826288744414e-6), uPcc0Pu = Complex(0.5403023058681398, 0.8414709848078965), OmegaMinPu = 0.5, Dbd1Pu = -0.05) annotation(
 // From internal initialization
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS2(u0Pu = Complex(0.9999999999999923, -1.2396599999999996e-7), KiPLL = 20, DDn = 126, Kqi = 1, U0Pu = 1, tFv = 0.05, PConv0Pu = 0.5, UConv0Pu = 1.0, Dbd2Pu = 0.05, uConv0Pu = Complex(0.9999999999999923, -1.2391599999999996e-7), Q0Pu = 8.291738823473363e-9, EMaxPu = 0.1, UInj0Pu = 1.0000050000111183, VDLIp11 = 0.2, VRef0Pu = 1, QMinREPCPu = -0.75, tG = 0.017, Kvp = 1e-6, PMinREPCPu = -0.667, Id0Pu = 0.5, VMaxPu = 1.1, XMvHvPu = 1e-10, VDLIp22 = 1.11, VUpPu = 99, Kc = 0, Kqv = 15, IMaxPu = 1.11, QFlag = false, PPcc0Pu = 0, RefFlag = false, SOCMaxPu = 0.8, VDLIq31 = 0.5, VFrz = 0, tFilterPC = 0.02, i0Pu = Complex(-0.030000000000000797, -4.572758823473301e-9), QInj0Pu = 2.361829352942302e-6, s0Pu = Complex(-0.03, 8.291738823473363e-9), VFlag = true, Ki = 1e-6, VDLIp32 = 1.11, VDLIq42 = 0.75, PfFlag = false, brkpt = 0.1, EMinPu = -0.1, VDLIp42 = 1.11, VDLIq41 = 1, VDLIq21 = 0.2, VDLIq12 = 0.75, IqrMinPu = -999, QMinREECPu = -0.75, lvpl1 = 1.22, P0Pu = -0.03, RMvHvPu = 0, DPMaxPu = 999, DbdPu = 0, FEMaxPu = 999, tFilterGC = 0.02, SOCMinPu = 0.2, GMvHvPu = 0, Kqp = 1e-6, VDLIp12 = 1.11, tIq = 0.017, IqrMaxPu = 999, RrpwrPu = 10, UPcc0Pu = 1, KpPLL = 3, BMvHvPu = 0, VDLIq11 = 0, tpREPC = 0.05, zerox = 0.05, PInj0Pu = 0.5000025, PPCLocal = true, DUp = 126, VDLIp21 = 0.5, PMaxREECPu = 1, FDbd1Pu = 0.00083, OmegaMaxPu = 1.5, Iql1Pu = -0.75, SNom = 6, SOC0Pu = 0.5, FreqFlag = true, RLvTrPu = 0, VMinPu = 0.9, XLvTrPu = 0, tFt = 1e-10, Iq0Pu = -1.381706470578894e-7, QConv0Pu = -1.381706470578894e-7, ConverterLVControl = true, Iqh1Pu = 0.75, Kig = 1e-6, VDLIq32 = 0.75, VDipPu = -99, Kvi = 0.1, VCompFlag = true, PF0 = 0.9999999999999618, rTfoPu = 1, QPcc0Pu = 0, FEMinPu = -999, VDLIp31 = 0.75, PQFlag = false, DPMinPu = -999, UPhaseConv0 = -1.2391600000000027e-7, Lvplsw = false, PMaxREPCPu = 1, tPord = 0.017, tRv = 0.01, QMaxREECPu = 0.75, Kpg = 1, tpREEC = 0.05, iConv0Pu = Complex(0.5000000000000133, 7.621264705788836e-8), Kp = 1e-6, tBattery = 999, QMaxREPCPu = 0.75, PMinREECPu = -0.667, tLag = 0.1, VDLIp41 = 1, FDbd2Pu = 0.00083, VDLIq22 = 0.75, uInj0Pu = Complex(1.0000049999992302, 4.876084762126604e-6), uPcc0Pu = Complex(0.5403023058681398, 0.8414709848078965), OmegaMinPu = 0.5, Dbd1Pu = -0.05) annotation(
 // From internal initialization
    Placement(transformation(origin = {-12, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
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
    Placement(transformation(origin = {-54, 56}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Buses.InfiniteBusWithVariations infiniteBus(U0Pu = 1, UEvtPu = 0.55, UPhase = 0, omega0Pu = 1, omegaEvtPu = 1.01, tOmegaEvtEnd = 6.5, tOmegaEvtStart = 6, tUEvtEnd = 1.5, tUEvtStart = 1) annotation(
    Placement(transformation(origin = {-86, 76}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus1 annotation(
    Placement(transformation(origin = {-54, 20}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Buses.Bus bus2 annotation(
    Placement(transformation(origin = {-26, -32}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line lineFeeder(BPu = 0, GPu = 0, RPu = 0, XPu = 0.00001) annotation(
    Placement(transformation(origin = {-54, -12}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Sources.Constant PAuxPu(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-50, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0) "External PCC active/reactive power (unused when PPCLocal = true)";
  Modelica.ComplexBlocks.Sources.ComplexConstant complexConst(k = Complex(1, 0)) "External PCC voltage (unused when PPCLocal = true)";
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  lineFeeder.switchOffSignal1 = false;
  lineFeeder.switchOffSignal2 = false;
  BESS.injector.switchOffSignal1 = false;
  BESS.injector.switchOffSignal2 = false;
  BESS.injector.switchOffSignal3 = false;
  BESS2.injector.switchOffSignal1 = false;
  BESS2.injector.switchOffSignal2 = false;
  BESS2.injector.switchOffSignal3 = false;
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
  connect(line.terminal2, bus1.terminal);
  connect(lineFeeder.terminal2, bus2.terminal);
  connect(bus2.terminal, BESS.terminal);
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
  connect(const.y, BESS2.PPccPu);
  connect(const.y, BESS2.QPccPu);
  connect(complexConst.y, BESS2.uPccPu);
  connect(URefPu.y, BESS2.URefPu);
  connect(omegaRefPu.y, BESS2.omegaRefPu);
  connect(QRefPu.y, BESS2.QRefPu);
  connect(PRefPu.y, BESS2.PRefPu);
  connect(PFaRef.y, BESS2.PFaRef);
  connect(PAuxPu.y, BESS2.PAuxPu);
  connect(bus1.terminal, BESS2.terminal);
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
    Documentation(info = "hi "));
end ManyBESS_initialized;