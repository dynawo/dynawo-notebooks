model ManyBESS_initialized "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS(u0Pu = Complex(0.9999999999999101, -4.2396599999999206e-7), KiPLL = 20, DDn = 126, Kqi = 1, U0Pu = 1, tFv = 0.05, Dbd2Pu = 0.05, Q0Pu = 4.492227387527755e-9, EMaxPu = 0.1, UInj0Pu = 0.9999999999999999, VDLIp11 = 0.2, VRef0Pu = 1, tG = 0.017, Kvp = 1e-6, Id0Pu = 0.5000000000000001, VMaxPu = 1.1, QMaxPu = 0.75, VDLIp22 = 1.11, VUpPu = 99, Kc = 0, Kqv = 15, IMaxPu = 1.11, QFlag = false, SOCMaxPu = 0.8, RefFlag = false, VDLIq31 = 0.5, VFrz = 0, tFilterPC = 0.02, i0Pu = Complex(-0.029999999999999208, 8.226752612472412e-9), s0Pu = Complex(-0.03, 4.492227387527755e-9), QInj0Pu = -7.486895645879593e-8, VFlag = true, Ki = 1e-6, VDLIp32 = 1.11, VDLIq42 = 0.75, PfFlag = false, brkpt = 0.1, EMinPu = -0.1, VDLIp42 = 1.11, VDLIq41 = 1, VDLIq21 = 0.2, VDLIq12 = 0.75, IqrMinPu = -999, RPu = 0, lvpl1 = 1.22, P0Pu = -0.03, QMinPu = -0.75, PMinPu = -0.667, DPMaxPu = 999, DbdPu = 0, FEMaxPu = 999, tFilterGC = 0.02, SOCMinPu = 0.2, tIq = 0.017, Kqp = 1e-6, VDLIp12 = 1.11, IqrMaxPu = 999, RrpwrPu = 10, KpPLL = 3, zerox = 0.05, VDLIq11 = 0, PInj0Pu = 0.5, DUp = 126, VDLIp21 = 0.5, FDbd1Pu = 0.00083, OmegaMaxPu = 1.5, iInj0Pu = Complex(0.49999999999998684, -1.3711254354120686e-7), Iql1Pu = -0.75, SNom = 6, SOC0Pu = 0.5, FreqFlag = true, tFt = 1e-10, VMinPu = 0.9, Iq0Pu = -7.48689564587959e-8, XPu = 1e-10, Iqh1Pu = 0.75, Kig = 1e-6, VDLIq32 = 0.75, VDipPu = -99, Kvi = 0.1, VCompFlag = true, PF0 = 0.9999999999999889, tP = 0.05, FEMinPu = -999, VDLIp31 = 0.75, PQFlag = false, DPMinPu = -999, Lvplsw = false, tPord = 0.017, tRv = 0.01, Kpg = 1, Kp = 1e-6, PMaxPu = 1, tBattery = 999, tLag = 0.1, VDLIp41 = 1, FDbd2Pu = 0.00083, VDLIq22 = 0.75, uInj0Pu = Complex(0.9999999999999101, -4.239629999999921e-7), UPhaseInj0 = -4.2396600000000476e-7, OmegaMinPu = 0.5, Dbd1Pu = -0.05) annotation(
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.BESS.WECC.BESSCurrentSource BESS2(u0Pu = Complex(0.9999999999999923, -1.2396599999999996e-7), KiPLL = 20, DDn = 126, Kqi = 1, U0Pu = 1, tFv = 0.05, Dbd2Pu = 0.05, Q0Pu = 8.291738823473363e-9, EMaxPu = 0.1, UInj0Pu = 1.0, VDLIp11 = 0.2, VRef0Pu = 1, tG = 0.017, Kvp = 1e-6, Id0Pu = 0.5, VMaxPu = 1.1, QMaxPu = 0.75, VDLIp22 = 1.11, VUpPu = 99, Kc = 0, Kqv = 15, IMaxPu = 1.11, QFlag = false, SOCMaxPu = 0.8, RefFlag = false, VDLIq31 = 0.5, VFrz = 0, tFilterPC = 0.02, i0Pu = Complex(-0.030000000000000797, -4.572758823473301e-9), s0Pu = Complex(-0.03, 8.291738823473363e-9), QInj0Pu = -1.381941470578894e-7, VFlag = true, Ki = 1e-6, VDLIp32 = 1.11, VDLIq42 = 0.75, PfFlag = false, brkpt = 0.1, EMinPu = -0.1, VDLIp42 = 1.11, VDLIq41 = 1, VDLIq21 = 0.2, VDLIq12 = 0.75, IqrMinPu = -999, RPu = 0, lvpl1 = 1.22, P0Pu = -0.03, QMinPu = -0.75, PMinPu = -0.667, DPMaxPu = 999, DbdPu = 0, FEMaxPu = 999, tFilterGC = 0.02, SOCMinPu = 0.2, tIq = 0.017, Kqp = 1e-6, VDLIp12 = 1.11, IqrMaxPu = 999, RrpwrPu = 10, KpPLL = 3, zerox = 0.05, VDLIq11 = 0, PInj0Pu = 0.5, DUp = 126, VDLIp21 = 0.5, FDbd1Pu = 0.00083, OmegaMaxPu = 1.5, iInj0Pu = Complex(0.5000000000000133, 7.621264705788836e-8), Iql1Pu = -0.75, SNom = 6, SOC0Pu = 0.5, FreqFlag = true, tFt = 1e-10, VMinPu = 0.9, Iq0Pu = -1.381941470578894e-7, XPu = 1e-10, Iqh1Pu = 0.75, Kig = 1e-6, VDLIq32 = 0.75, VDipPu = -99, Kvi = 0.1, VCompFlag = true, PF0 = 0.9999999999999618, tP = 0.05, FEMinPu = -999, VDLIp31 = 0.75, PQFlag = false, DPMinPu = -999, Lvplsw = false, tPord = 0.017, tRv = 0.01, Kpg = 1, Kp = 1e-6, PMaxPu = 1, tBattery = 999, tLag = 0.1, VDLIp41 = 1, FDbd2Pu = 0.00083, VDLIq22 = 0.75, uInj0Pu = Complex(0.9999999999999923, -1.2396299999999996e-7), UPhaseInj0 = -1.2396600000000028e-7, OmegaMinPu = 0.5, Dbd1Pu = -0.05) annotation(
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
equation
  line.switchOffSignal1.value = false;
  line.switchOffSignal2.value = false;
  lineFeeder.switchOffSignal1.value = false;
  lineFeeder.switchOffSignal2.value = false;
  BESS.injector.switchOffSignal1.value = false;
  BESS.injector.switchOffSignal2.value = false;
  BESS.injector.switchOffSignal3.value = false;
  BESS2.injector.switchOffSignal1.value = false;
  BESS2.injector.switchOffSignal2.value = false;
  BESS2.injector.switchOffSignal3.value = false;
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