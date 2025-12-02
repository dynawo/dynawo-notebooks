within Dynawo.Examples.InertialGrid;

model TripleInertialGrid
  /*
    * Copyright (c) 2024, RTE (http://www.rte-france.com)
    * See AUTHORS.txt
    * All rights reserved.
    * This Source Code Form is subject to the terms of the Mozilla Public
    * License, v. 2.0. If a copy of the MPL was not distributed with this
    * file, you can obtain one at http://mozilla.org/MPL/2.0/.
    * SPDX-License-Identifier: MPL-2.0
    *
    * This file is part of Dynawo, an hybrid C++/Modelica open source time domain simulation tool for power systems.
    */
  extends Modelica.Icons.Example;
  parameter Dynawo.Types.VoltageModule UNom = 400 "Nominal voltage for the test case";
  parameter Dynawo.Types.ActivePowerPu deltaPPu = 0.05 "Variation on the PQ load active power in pu (base SNom)";
  parameter Dynawo.Types.ApparentPowerModule SNom = 32350 "Nominal apparent power of the inertial grids in MVA";
  // Network parameters
  parameter Dynawo.Types.PerUnit R1Pu = 0.02*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line resistance in pu (base SnRef/UNom) by kilometer for branch 1";
  parameter Dynawo.Types.PerUnit X1Pu = 0.27*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line reactance in pu (base SnRef/UNom) by kilometer for branch 1";
  parameter Dynawo.Types.PerUnit R2Pu = 0.02*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line resistance in pu (base SnRef/UNom) by kilometer for branch 2";
  parameter Dynawo.Types.PerUnit X2Pu = 0.27*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line reactance in pu (base SnRef/UNom) by kilometer for branch 2";
  parameter Dynawo.Types.PerUnit R3Pu = 0.18*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line resistance in pu (base SnRef/UNom) by kilometer for branch 3";
  parameter Dynawo.Types.PerUnit X3Pu = 0.81*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line reactance in pu (base SnRef/UNom) by kilometer for branch 3";
  parameter Dynawo.Types.PerUnit R4Pu = 0.02*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line resistance in pu (base SnRef/UNom) by kilometer for branch 4";
  parameter Dynawo.Types.PerUnit X4Pu = 0.27*Dynawo.Electrical.SystemBase.SnRef/(UNom*UNom) "Line reactance in pu (base SnRef/UNom) by kilometer for branch 4";
  parameter Real L1 = 120 "Branch 1 length (in km)";
  parameter Real L2 = 120 "Branch 2 length (in km)";
  parameter Real L3 = 100 "Branch 3 length (in km)";
  parameter Real L4 = 120 "Branch 4 length (in km)";
  Dynawo.Electrical.Sources.InertialGrid.InertialGrid inertialGrid1(DPu = 2, Fh = 0, H = 2.6, Km = 1, P0Pu = 2.1356, Q0Pu = 2.25, R = 0.05, SNom = SNom, Tr = 15, U0Pu = 1, UPhase0 = 0) annotation(
    Placement(transformation(origin = {-36, 40}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Sources.InertialGrid.InertialGrid inertialGrid2(DPu = 2, Fh = 0, H = 2.6, Km = 1, P0Pu = 3.3, Q0Pu = 0, R = 0.05, SNom = SNom, Tr = 15, U0Pu = 0.9546, UPhase0 = 0.031) annotation(
    Placement(transformation(origin = {-36, -40}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Sources.InertialGrid.InertialGrid inertialGrid3(DPu = 2, Fh = 0, H = 2.6, Km = 1, P0Pu = 3.9, Q0Pu = 0, R = 0.05, SNom = SNom, Tr = 15, U0Pu = 0.93, UPhase0 = 0.04) annotation(
    Placement(transformation(origin = {-36, -76}, extent = {{-10, -10}, {10, 10}})));
  Dynawo.Electrical.Loads.LoadZIP load(Ip = 0, Iq = 0, Pp = 1, Pq = 1, Zp = 0, Zq = 0, s0Pu = Complex(5, 0), u0Pu = Complex(0.8351*cos(-0.365), 0.8351*sin(-0.365)), i0Pu = Modelica.ComplexMath.conj(load.s0Pu/load.u0Pu)) annotation(
    Placement(visible = true, transformation(origin = {84, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Loads.LoadPQ loadPQ(i0Pu = Modelica.ComplexMath.conj(loadPQ.s0Pu/loadPQ.u0Pu), s0Pu = Complex(0, 0), u0Pu = inertialGrid1.u0Pu) annotation(
    Placement(visible = true, transformation(origin = {-20, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus busIG1 annotation(
    Placement(visible = true, transformation(origin = {-2, 40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus busIG2 annotation(
    Placement(transformation(origin = {-2, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus busIG3 annotation(
    Placement(transformation(origin = {-2, -76}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus busL annotation(
    Placement(visible = true, transformation(origin = {72, 0}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = R1Pu*L1, XPu = X1Pu*L1) annotation(
    Placement(transformation(origin = {16, 24}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus annotation(
    Placement(transformation(origin = {16, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = R2Pu*L2, XPu = X2Pu*L2) annotation(
    Placement(visible = true, transformation(origin = {16, -26}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Lines.Line line3(BPu = 0, GPu = 0, RPu = R3Pu*L3, XPu = X3Pu*L3) annotation(
    Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line4(
    BPu = 0, GPu = 0, RPu = R4Pu*L4, XPu = X4Pu*L4) annotation(
    Placement(transformation(origin = {58, -66},
                             extent = {{-10, -10}, {10, 10}},
                             rotation = 90)));
  Dynawo.Types.Frequency deltaFrequency "Frequency difference between both inertial grids";
equation
// deltaFrequency calculation
  deltaFrequency = inertialGrid1.reducedOrderSFR.deltaFrequency - inertialGrid2.reducedOrderSFR.deltaFrequency;
//Switch-off equations inhibitions
  load.switchOffSignal1.value = false;
  load.switchOffSignal2.value = false;
  loadPQ.switchOffSignal1.value = false;
  loadPQ.switchOffSignal2.value = false;
  line1.switchOffSignal1.value = false;
  line1.switchOffSignal2.value = false;
  line2.switchOffSignal1.value = false;
  line2.switchOffSignal2.value = false;
  line3.switchOffSignal1.value = false;
  line3.switchOffSignal2.value = false;
  line4.switchOffSignal1.value = false;
  line4.switchOffSignal2.value = false;
  inertialGrid1.injectorURI.switchOffSignal1.value = false;
  inertialGrid1.injectorURI.switchOffSignal2.value = false;
  inertialGrid1.injectorURI.switchOffSignal3.value = false;
  inertialGrid2.injectorURI.switchOffSignal1.value = false;
  inertialGrid2.injectorURI.switchOffSignal2.value = false;
  inertialGrid2.injectorURI.switchOffSignal3.value = false;
  inertialGrid3.injectorURI.switchOffSignal1.value = false;
  inertialGrid3.injectorURI.switchOffSignal2.value = false;
  inertialGrid3.injectorURI.switchOffSignal3.value = false;
// No variations in PspPu for the inertial grids
  der(inertialGrid1.reducedOrderSFR.PspPu) = 0;
  der(inertialGrid2.reducedOrderSFR.PspPu) = 0;
  der(inertialGrid3.reducedOrderSFR.PspPu) = 0;
// No variations in the ZIP Load
  der(load.PRefPu) = 0;
  der(load.QRefPu) = 0;
  load.deltaP = 0;
  load.deltaQ = 0;
// Variation in P in loadPQ (5% in base SNom for inertialGrid1)
  der(loadPQ.QRefPu) = 0;
  loadPQ.deltaQ = 0;
  when time > 10 then
    loadPQ.deltaP = deltaPPu*SNom/Dynawo.Electrical.SystemBase.SnRef;
    loadPQ.PRefPu = 1;
  end when;
  connect(busIG1.terminal, loadPQ.terminal) annotation(
    Line(points = {{-2, 40}, {-20, 40}, {-20, 18}}, color = {0, 0, 255}));
  connect(inertialGrid1.terminal, busIG1.terminal) annotation(
    Line(points = {{-37, 40}, {-2, 40}}, color = {0, 0, 255}));
  connect(inertialGrid2.terminal, busIG2.terminal) annotation(
    Line(points = {{-26, -40}, {-2, -40}}, color = {0, 0, 255}));
  connect(load.terminal, busL.terminal) annotation(
    Line(points = {{84, 0}, {72, 0}}, color = {0, 0, 255}));
  connect(bus.terminal, line1.terminal2) annotation(
    Line(points = {{16, 0}, {16, 14}}, color = {0, 0, 255}));
  connect(line1.terminal1, busIG1.terminal) annotation(
    Line(points = {{16, 34}, {16, 40}, {-2, 40}}, color = {0, 0, 255}));
  connect(line2.terminal1, bus.terminal) annotation(
    Line(points = {{16, -36}, {16, 0}}, color = {0, 0, 255}));
  connect(busIG2.terminal, line2.terminal2) annotation(
    Line(points = {{-2, -40}, {16, -40}, {16, -16}}, color = {0, 0, 255}));
  connect(line3.terminal1, busL.terminal) annotation(
    Line(points = {{60, 0}, {72, 0}}, color = {0, 0, 255}));
  connect(line3.terminal2, bus.terminal) annotation(
    Line(points = {{40, 0}, {16, 0}}, color = {0, 0, 255}));
  connect(inertialGrid3.terminal, busIG3.terminal) annotation(
    Line(points = {{-37, -76}, {-2, -76}}, color = {0, 0, 255}));
  connect(line4.terminal1, bus.terminal) annotation(
    Line(points = {{58, -76}, {58, -27}, {16, 0}}, color = {0, 0, 255}));
 connect(busIG3.terminal, line4.terminal2) annotation(
    Line(points = {{-2, -76}, {16, -76}, {16, -66}}, color = {0, 0, 255}));  end TripleInertialGrid;
