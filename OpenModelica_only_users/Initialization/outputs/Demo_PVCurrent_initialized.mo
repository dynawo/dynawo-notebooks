/*
* Copyright (c) 2021, RTE (http://www.rte-france.com)
* See AUTHORS.txt
* All rights reserved.
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, you can obtain one at http://mozilla.org/MPL/2.0/.
* SPDX-License-Identifier: MPL-2.0
*
* This file is part of Dynawo, an hybrid C++/Modelica open source suite of simulation tools for power systems.
*/
model Demo_PVCurrent_initialized "WECC PV Model on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Buses.InfiniteBusWithVariations infiniteBus(U0Pu = 1, UEvtPu = 0.5, UPhase = 0, omega0Pu = 1, omegaEvtPu = 1.01, tOmegaEvtEnd = 6.5, tOmegaEvtStart = 6, tUEvtEnd = 2, tUEvtStart = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line(RPu = 0, XPu = 0.0000020661, BPu = 0, GPu = 0) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Photovoltaics.WECC.PVCurrentSource PV(u0Pu = Complex(0.9999999999989542, -1.4462699999999998e-6), KiPLL = 20, DDn = 20, Kqi = 0.5, U0Pu = 1, tFv = 0.1, PConv0Pu = 0.7000000000000001, UConv0Pu = 1.005497313839768, Dbd2Pu = 0.1, uConv0Pu = Complex(1.0000000759267957, 0.10499855373), Q0Pu = 5.062033898185934e-7, EMaxPu = 999, UInj0Pu = 1.0055050065647935, VRef0Pu = 1, QMinREPCPu = -0.4, tG = 0.02, Kvp = 1, PMinREPCPu = 0, Id0Pu = 0.6961729189776327, VMaxPu = 1.1, XMvHvPu = 0.15, VUpPu = 1.1, Kc = 0, Kqv = 2, IMaxPu = 1.05, QFlag = true, PPcc0Pu = 0, RefFlag = true, VFrz = 0, tFilterPC = 0.04, i0Pu = Complex(-0.7, 5.061856101819357e-7), s0Pu = Complex(-0.7, 5.062033898185934e-7), QInj0Pu = 0.07350439379664861, VFlag = true, Ki = 1.5, PfFlag = false, brkpt = 0.1, EMinPu = -999, IqrMinPu = -20, QMinREECPu = -0.4, lvpl1 = 1.22, P0Pu = -0.7, RMvHvPu = 0, DPMaxPu = 999, DbdPu = 0.01, FEMaxPu = 999, tFilterGC = 0.02, GMvHvPu = 0, Kqp = 1, tIq = 0.02, IqrMaxPu = 20, RrpwrPu = 10, UPcc0Pu = 1, KpPLL = 3, BMvHvPu = 0, tpREPC = 0.04, zerox = 0.05, PInj0Pu = 0.7000049, PPCLocal = true, DUp = 0.001, PMaxREECPu = 1, FDbd1Pu = 0.004, OmegaMaxPu = 1.5, Iql1Pu = -2, SNom = 100, tFt = 1e-10, FreqFlag = true, RLvTrPu = 0, VMinPu = 0.9, XLvTrPu = 0, Iq0Pu = 0.07309765305684467, QConv0Pu = 0.07349949379664861, ConverterLVControl = true, Iqh1Pu = 2, Kig = 2.36, VDipPu = 0.9, Kvi = 1, VCompFlag = false, PF0 = 0.9999999999997384, rTfoPu = 1, QPcc0Pu = 0, FEMinPu = -999, UPhaseConv0 = 0.10461521924828314, PQFlag = false, DPMinPu = -999, Lvplsw = false, PMaxREPCPu = 1, tPord = 0.02, tRv = 0.02, QMaxREECPu = 0.4, Kpg = 0.05, tpREEC = 0.04, iConv0Pu = Complex(0.7, -5.061856101819357e-7), VRef1Pu = 0, Kp = 0.1, QMaxREPCPu = 0.4, PMinREECPu = 0, tLag = 0.1, FDbd2Pu = 1, uInj0Pu = Complex(1.0000070759318578, 0.10500555372493814), uPcc0Pu = Complex(0.5403023058681398, 0.8414709848078965), OmegaMinPu = 0.5, Dbd1Pu = -0.1) annotation(
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant PRefPu(k = 0.7) annotation(
    Placement(visible = true, transformation(origin = {90, -40}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant QRefPu(k = 0.2) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant omegaRefPu(k = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant URefPu(k = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant PFaRef(k = 0) annotation(
    Placement(visible = true, transformation(origin = {90, -80}, extent = {{-10, 10}, {10, -10}}, rotation = 180)));
  Modelica.Blocks.Sources.Constant const(k = 0) "External PCC active/reactive power (unused when PPCLocal = true)";
  Modelica.ComplexBlocks.Sources.ComplexConstant complexConst(k = Complex(1, 0)) "External PCC voltage (unused when PPCLocal = true)";
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  PV.injector.switchOffSignal1 = false;
  PV.injector.switchOffSignal2 = false;
  PV.injector.switchOffSignal3 = false;
  connect(line.terminal2, PV.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}, {0, 0}, {0, 0}}, color = {0, 0, 255}));
  connect(infiniteBus.terminal, line.terminal1) annotation(
    Line(points = {{-82, 0}, {-60, 0}, {-60, 0}, {-60, 0}}, color = {0, 0, 255}));
  connect(const.y, PV.PPccPu);
  connect(const.y, PV.QPccPu);
  connect(complexConst.y, PV.uPccPu);
  connect(omegaRefPu.y, PV.omegaRefPu) annotation(
    Line(points = {{79, 40}, {60, 40}, {60, 12}, {42, 12}}, color = {0, 0, 127}));
  connect(QRefPu.y, PV.QRefPu) annotation(
    Line(points = {{79, 0}, {42, 0}}, color = {0, 0, 127}));
  connect(PRefPu.y, PV.PRefPu) annotation(
    Line(points = {{79, -40}, {60, -40}, {60, -12}, {42, -12}}, color = {0, 0, 127}));
  connect(URefPu.y, PV.URefPu) annotation(
    Line(points = {{79, 80}, {20, 80}, {20, 22}}, color = {0, 0, 127}));
  connect(PFaRef.y, PV.PFaRef) annotation(
    Line(points = {{79, -80}, {20, -80}, {20, -22}}, color = {0, 0, 127}));
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 20, Tolerance = 1e-05, Interval = 0.001),
    Documentation(info = "<html><head></head><body><span style=\"font-size: 12px;\">
     This test case consists in one PV park connected to an infinite bus which voltage is reduced to 0.5 pu from t = 1 s to t = 2 s, and which frequency is increased to 1.01 pu from t = 6 s to t = 6.5 s. This is a way to observe the PV park's response to a voltage and frequency variation at its terminal.    </div>
    <div><br></div><div><br></div><div><br></div><div><br></div><div><br></div><div><span style=\"font-size: 12px;\"><br></span></div></div></body></html>
 "),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"));
end Demo_PVCurrent_initialized;