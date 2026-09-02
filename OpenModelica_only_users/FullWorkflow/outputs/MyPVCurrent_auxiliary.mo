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
model MyPVCurrent_auxiliary "WECC PV Model on infinite bus"
  extends Dynawo.Icons.Example;
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPhase = 0, UPu = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line(RPu = 0, XPu = 0.0000020661, BPu = 0, GPu = 0) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed PV(PGen0Pu = -0.7, U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.Controls.WECC.BaseClasses_INIT.WECCPlantCurrentSource_INIT PV_INIT(PPCLocal = true, GMvHvPu = 0, U0Pu = 1, rTfoPu = 1, QPcc0Pu = 0, SNom = 100, UPcc0Pu = 1, P0Pu = -0.7, RLvTrPu = 0, XLvTrPu = 0, RMvHvPu = 0, XMvHvPu = 0.15, BMvHvPu = 0, ConverterLVControl = true, PPcc0Pu = 0, Q0Pu(fixed = false), UPhase0(fixed = false));
equation
  line.switchOffSignal1 = false;
  line.switchOffSignal2 = false;
  PV.switchOffSignal1 = false;
  PV.switchOffSignal2 = false;
  PV.switchOffSignal3 = false;
  connect(line.terminal2, PV.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}, {0, 0}, {0, 0}}, color = {0, 0, 255}));
  connect(infiniteBus.terminal, line.terminal1) annotation(
    Line(points = {{-82, 0}, {-60, 0}, {-60, 0}, {-60, 0}}, color = {0, 0, 255}));
initial equation
  PV_INIT.Q0Pu = PV.QGenPu;
  PV_INIT.UPhase0 = PV.UPhase;
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 20, Tolerance = 1e-05, Interval = 0.001),
    Documentation(info = "<html><head></head><body><span style=\"font-size: 12px;\">
     This test case consists in one PV park connected to an infinite bus which voltage is reduced to 0.5 pu from t = 1 s to t = 2 s, and which frequency is increased to 1.01 pu from t = 6 s to t = 6.5 s. This is a way to observe the PV park's response to a voltage and frequency variation at its terminal.    </div>
    <div><br></div><div><br></div><div><br></div><div><br></div><div><br></div><div><span style=\"font-size: 12px;\"><br></span></div></div></body></html>
 "),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"));
end MyPVCurrent_auxiliary;