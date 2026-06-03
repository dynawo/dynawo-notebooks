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
model DIGrid_auxiliary
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
  parameter Real L1 = 120 "Branch 1 length (in km)";
  parameter Real L2 = 120 "Branch 2 length (in km)";
  parameter Real L3 = 100 "Branch 3 length (in km)";
  Dynawo.Electrical.Buses.InfiniteBus inertialGrid1(UPu = 1, UPhase = 0) annotation(
    Placement(visible = true, transformation(origin = {-38, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorAlphaBeta inertialGrid2(QGen0Pu = 0, PGen0Pu = 3.3, Alpha = 0, Beta = 0, U0Pu = 1, u0Pu = Complex(1, 0), i0Pu = Modelica.ComplexMath.conj(Complex(inertialGrid2.PGen0Pu, inertialGrid2.QGen0Pu)/inertialGrid2.u0Pu)) annotation(
    Placement(visible = true, transformation(origin = {-38, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Loads.LoadPQ load(i0Pu(re(start = 5, fixed = false), im(start = -(0), fixed = false)), s0Pu(re(start = 5, fixed = false), im(start = 0, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {84, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Loads.LoadPQ loadPQ(i0Pu(re(start = 0, fixed = false), im(start = -(0), fixed = false)), s0Pu(re(start = 0, fixed = false), im(start = 0, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-20, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load(Value0 = 5);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load(Value0 = 0);
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_loadPQ(Value0 = 0);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_loadPQ(Value0 = 0);
  Dynawo.Electrical.Buses.Bus busIG1 annotation(
    Placement(visible = true, transformation(origin = {-2, 40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus busIG2 annotation(
    Placement(visible = true, transformation(origin = {-2, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus busL annotation(
    Placement(visible = true, transformation(origin = {72, 0}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line line1(BPu = 0, GPu = 0, RPu = R1Pu*L1, XPu = X1Pu*L1) annotation(
    Placement(visible = true, transformation(origin = {16, 24}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Buses.Bus bus annotation(
    Placement(visible = true, transformation(origin = {16, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line2(BPu = 0, GPu = 0, RPu = R2Pu*L2, XPu = X2Pu*L2) annotation(
    Placement(visible = true, transformation(origin = {16, -26}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Lines.Line line3(BPu = 0, GPu = 0, RPu = R3Pu*L3, XPu = X3Pu*L3) annotation(
    Placement(visible = true, transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
Dynawo.Electrical.Loads.Load_INIT load_INIT(Q0Pu = 0, P0Pu = 5, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT loadPQ_INIT(Q0Pu = 0, P0Pu = 0, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
equation
  loadPQ.deltaP = 0;
// deltaFrequency calculation
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
inertialGrid2.switchOffSignal1.value = false;
  inertialGrid2.switchOffSignal2.value = false;
  inertialGrid2.switchOffSignal3.value = false;
// No variations in PspPu for the inertial grids
// No variations in the ZIP Load
  load.deltaP = 0;
  load.deltaQ = 0;
  load.PRefPu = PrefPu_load.setPoint;
  load.QRefPu = QrefPu_load.setPoint;
// Variation in P in loadPQ (5% in base SNom for inertialGrid1)
  loadPQ.deltaQ = 0;
// LoadPQ Setpoint
  loadPQ.PRefPu = PrefPu_loadPQ.setPoint;
  loadPQ.QRefPu = QrefPu_loadPQ.setPoint;
  connect(busIG1.terminal, loadPQ.terminal) annotation(
    Line(points = {{-2, 40}, {-20, 40}, {-20, 18}}, color = {0, 0, 255}));
  connect(inertialGrid1.terminal, busIG1.terminal) annotation(
    Line(points = {{-26, 40}, {-2, 40}}, color = {0, 0, 255}));
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
initial equation
  load_INIT.U0Pu = Modelica.ComplexMath.'abs'(load.terminal.V);
  load_INIT.UPhase0 = Modelica.ComplexMath.arg(load.terminal.V);
  loadPQ_INIT.U0Pu = Modelica.ComplexMath.'abs'(loadPQ.terminal.V);
  loadPQ_INIT.UPhase0 = Modelica.ComplexMath.arg(loadPQ.terminal.V);
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 50, Tolerance = 1e-08, Interval = 0.001),
    Documentation(info = "<html><head></head><body>In this example, two inertial grids are connected together and with a load. It allows to make appearing an interarea oscillation. The frequency of this oscillation can be theoretically calculated using a few approximations (U1 = U2 = 1 for example). It leads to find a mode in the system at the following frequency: f = sqrt(omega0/HX)/2*Pi.<div>The theoretical derivations are provided in the following paper:</div><div><br></div><div><div>C. Cardozo et al., \"Small Signal Stability Analysis of the Angle Difference Control on a HVDC Interconnection Embedded in the CE Synchronous Power System,\" 2020 IEEE/PES Transmission and Distribution Conference and Exposition (T&D), Chicago, IL, USA, 2020, pp. 1-5, doi: 10.1109/TD39804.2020.9300036. </div></div><div><div><br></div><div>It means that the frequency of the interarea oscillation can be easily moved in a range of frequency. With the particular values provided in this case we obtained a mode at f = 0.45 Hz, as demonstrated by the plots below.

<figure>
    <img width=\"300\" src=\"modelica://Dynawo/Examples/InertialGrid/Resources/Images/frequencyDev.png\">
</figure>

<figure>
    <img width=\"300\" src=\"modelica://Dynawo/Examples/InertialGrid/Resources/Images/deltaF.png\">
</figure>

</div><div><br></div><div>By taking H = 4 for example, we end up with a different mode (f = 0.36 Hz), as visible in the plot below.

<figure>
    <img width=\"300\" src=\"modelica://Dynawo/Examples/InertialGrid/Resources/Images/frequencyDevH.png\">
</figure>

<figure>
    <img width=\"300\" src=\"modelica://Dynawo/Examples/InertialGrid/Resources/Images/deltaFH.png\">
</figure>

</div></div><div><br></div><div>The test case can be used and modified to assess the contribution of any device under test to the interarea mode.</div></body></html>"));
end DIGrid_auxiliary;