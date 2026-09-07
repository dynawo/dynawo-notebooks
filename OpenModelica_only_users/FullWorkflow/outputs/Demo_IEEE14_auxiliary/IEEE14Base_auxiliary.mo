within Demo_IEEE14_auxiliary;

/*
* Copyright (c) 2023, RTE (http://www.rte-france.com)
* See AUTHORS.txt
* All rights reserved.
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, you can obtain one at http://mozilla.org/MPL/2.0/.
* SPDX-License-Identifier: MPL-2.0
*
* This file is part of Dynawo, an hybrid C++/Modelica open source suite
* of simulation tools for power systems.
*/
model IEEE14Base_auxiliary "Base class for IEEE 14-bus system benchmark formed with 14 buses, 5 generators (2 generators and 3 synchronous condensers), 1 shunt, 3 transformers, 17 lines and 11 loads"
  // Base Calculation
  final parameter Modelica.SIunits.Impedance ZBASE1 = 69^2/Dynawo.Electrical.SystemBase.SnRef;
  final parameter Modelica.SIunits.Impedance ZBASE2 = 13.8^2/Dynawo.Electrical.SystemBase.SnRef;
  // Load parameters
  parameter Real alpha = 1.5 "Active load sensitivity to voltage";
  parameter Real beta = 2.5 "Reactive load sensitivity to voltage";
  parameter Dynawo.Types.VoltageModulePu uMaxPu = 1.05 "Maximum value of the voltage amplitude at terminal in pu (base UNom) that ensures the P/Q restoration";
  parameter Dynawo.Types.VoltageModulePu uMinPu = 0.95 "Minimum value of the voltage amplitude at terminal in pu (base UNom) that ensures the P/Q restoration";
  parameter Dynawo.Types.Time tfilter = 10;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load2;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load2;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load3;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load3;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load4;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load4;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load5;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load5;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load6;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load6;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load9;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load9;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load10;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load10;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load11;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load11;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load12;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load12;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load13;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load13;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Load14;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_Load14;
  // Generators electrical values for the load flow
  parameter Dynawo.Types.VoltageModulePu U0Pu_Gen1;
  parameter Dynawo.Types.Angle UPhase0_Gen1;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Gen2;
  parameter Dynawo.Types.VoltageModulePu U0Pu_Gen2;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Gen3;
  parameter Dynawo.Types.VoltageModulePu U0Pu_Gen3;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Gen6;
  parameter Dynawo.Types.VoltageModulePu U0Pu_Gen6;
  parameter Dynawo.Types.ActivePowerPu P0Pu_Gen8;
  parameter Dynawo.Types.VoltageModulePu U0Pu_Gen8;
  // Generators
  Dynawo.Electrical.Buses.InfiniteBus Gen1(UPu = U0Pu_Gen1, UPhase = atan2(U0Pu_Gen1*Modelica.Math.sin(UPhase0_Gen1), U0Pu_Gen1*Modelica.Math.cos(UPhase0_Gen1))) annotation(
    Placement(visible = true, transformation(origin = {-170, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed Gen2(PGen0Pu = -(P0Pu_Gen2), U0Pu = U0Pu_Gen2) annotation(
    Placement(visible = true, transformation(origin = {-90, -160}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed Gen3(PGen0Pu = -(P0Pu_Gen3), U0Pu = U0Pu_Gen3) annotation(
    Placement(visible = true, transformation(origin = {90, -200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed Gen6(PGen0Pu = -(P0Pu_Gen6), U0Pu = U0Pu_Gen6) annotation(
    Placement(visible = true, transformation(origin = {-60, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed Gen8(PGen0Pu = -(P0Pu_Gen8), U0Pu = U0Pu_Gen8) annotation(
    Placement(visible = true, transformation(origin = {170, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Generators control
  // Loads
  Dynawo.Electrical.Loads.LoadPQ Load2(i0Pu(re(start = P0Pu_Load2, fixed = false), im(start = -(Q0Pu_Load2), fixed = false)), s0Pu(re(start = P0Pu_Load2, fixed = false), im(start = Q0Pu_Load2, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-120, -160}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load2(Value0 = P0Pu_Load2);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load2(Value0 = Q0Pu_Load2);
  Dynawo.Electrical.Loads.LoadPQ Load3(i0Pu(re(start = P0Pu_Load3, fixed = false), im(start = -(Q0Pu_Load3), fixed = false)), s0Pu(re(start = P0Pu_Load3, fixed = false), im(start = Q0Pu_Load3, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {118, -200}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load3(Value0 = P0Pu_Load3);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load3(Value0 = Q0Pu_Load3);
  Dynawo.Electrical.Loads.LoadPQ Load4(i0Pu(re(start = P0Pu_Load4, fixed = false), im(start = -(Q0Pu_Load4), fixed = false)), s0Pu(re(start = P0Pu_Load4, fixed = false), im(start = Q0Pu_Load4, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {90, -88}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load4(Value0 = P0Pu_Load4);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load4(Value0 = Q0Pu_Load4);
  Dynawo.Electrical.Loads.LoadPQ Load5(i0Pu(re(start = P0Pu_Load5, fixed = false), im(start = -(Q0Pu_Load5), fixed = false)), s0Pu(re(start = P0Pu_Load5, fixed = false), im(start = Q0Pu_Load5, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-50, -20}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load5(Value0 = P0Pu_Load5);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load5(Value0 = Q0Pu_Load5);
  Dynawo.Electrical.Loads.LoadPQ Load6(i0Pu(re(start = P0Pu_Load6, fixed = false), im(start = -(Q0Pu_Load6), fixed = false)), s0Pu(re(start = P0Pu_Load6, fixed = false), im(start = Q0Pu_Load6, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {0, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load6(Value0 = P0Pu_Load6);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load6(Value0 = Q0Pu_Load6);
  Dynawo.Electrical.Loads.LoadPQ Load9(i0Pu(re(start = P0Pu_Load9, fixed = false), im(start = -(Q0Pu_Load9), fixed = false)), s0Pu(re(start = P0Pu_Load9, fixed = false), im(start = Q0Pu_Load9, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {70, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load9(Value0 = P0Pu_Load9);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load9(Value0 = Q0Pu_Load9);
  Dynawo.Electrical.Loads.LoadPQ Load10(i0Pu(re(start = P0Pu_Load10, fixed = false), im(start = -(Q0Pu_Load10), fixed = false)), s0Pu(re(start = P0Pu_Load10, fixed = false), im(start = Q0Pu_Load10, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {30, 82}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load10(Value0 = P0Pu_Load10);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load10(Value0 = Q0Pu_Load10);
  Dynawo.Electrical.Loads.LoadPQ Load11(i0Pu(re(start = P0Pu_Load11, fixed = false), im(start = -(Q0Pu_Load11), fixed = false)), s0Pu(re(start = P0Pu_Load11, fixed = false), im(start = Q0Pu_Load11, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {10, 120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load11(Value0 = P0Pu_Load11);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load11(Value0 = Q0Pu_Load11);
  Dynawo.Electrical.Loads.LoadPQ Load12(i0Pu(re(start = P0Pu_Load12, fixed = false), im(start = -(Q0Pu_Load12), fixed = false)), s0Pu(re(start = P0Pu_Load12, fixed = false), im(start = Q0Pu_Load12, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-130, 140}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load12(Value0 = P0Pu_Load12);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load12(Value0 = Q0Pu_Load12);
  Dynawo.Electrical.Loads.LoadPQ Load13(i0Pu(re(start = P0Pu_Load13, fixed = false), im(start = -(Q0Pu_Load13), fixed = false)), s0Pu(re(start = P0Pu_Load13, fixed = false), im(start = Q0Pu_Load13, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-70, 220}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load13(Value0 = P0Pu_Load13);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load13(Value0 = Q0Pu_Load13);
  Dynawo.Electrical.Loads.LoadPQ Load14(i0Pu(re(start = P0Pu_Load14, fixed = false), im(start = -(Q0Pu_Load14), fixed = false)), s0Pu(re(start = P0Pu_Load14, fixed = false), im(start = Q0Pu_Load14, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {10, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_Load14(Value0 = P0Pu_Load14);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_Load14(Value0 = Q0Pu_Load14);
  // Buses
  Dynawo.Electrical.Buses.Bus Bus1(terminal.V.re(start = 1)) annotation(
    Placement(visible = true, transformation(origin = {-170, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus2 annotation(
    Placement(visible = true, transformation(origin = {-90, -140}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus3 annotation(
    Placement(visible = true, transformation(origin = {90, -180}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus4 annotation(
    Placement(visible = true, transformation(origin = {90, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus5 annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus6 annotation(
    Placement(visible = true, transformation(origin = {-30, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus7 annotation(
    Placement(visible = true, transformation(origin = {110, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus8 annotation(
    Placement(visible = true, transformation(origin = {170, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus9 annotation(
    Placement(visible = true, transformation(origin = {70, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus10 annotation(
    Placement(visible = true, transformation(origin = {30, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus11 annotation(
    Placement(visible = true, transformation(origin = {10, 140}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus12 annotation(
    Placement(visible = true, transformation(origin = {-130, 160}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus13 annotation(
    Placement(visible = true, transformation(origin = {-70, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Buses.Bus Bus14 annotation(
    Placement(visible = true, transformation(origin = {10, 180}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Lines
  Dynawo.Electrical.Lines.Line LineB10B11(BPu = 0, GPu = 0, RPu = 0.156256/ZBASE2, XPu = 0.365778/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {40, 130}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line LineB12B13(BPu = 0, GPu = 0, RPu = 0.42072/ZBASE2, XPu = 0.380651/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {-110, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB13B14(BPu = 0, GPu = 0, RPu = 0.325519/ZBASE2, XPu = 0.662769/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {-30, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB1B2(BPu = 5.54505E-4*ZBASE1, GPu = 0, RPu = 0.922682/ZBASE1, XPu = 2.81708/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {-150, -120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB1B5(BPu = 5.167E-4*ZBASE1, GPu = 0, RPu = 2.57237/ZBASE1, XPu = 10.6189/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {-70, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB2B3(BPu = 4.599875E-4*ZBASE1, GPu = 0, RPu = 2.23719/ZBASE1, XPu = 9.42535/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {10, -160}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB2B4(BPu = 3.57068E-4*ZBASE1, GPu = 0, RPu = 2.76662/ZBASE1, XPu = 8.3946/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {10, -120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB2B5(BPu = 3.63369E-4*ZBASE1, GPu = 0, RPu = 2.71139/ZBASE1, XPu = 8.27843/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {-52, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB3B4(BPu = 1.344255E-4*ZBASE1, GPu = 0, RPu = 3.19035/ZBASE1, XPu = 8.14274/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {100, -112}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line LineB4B5(BPu = 0, GPu = 0, RPu = 0.635593/ZBASE1, XPu = 2.00486/ZBASE1) annotation(
    Placement(visible = true, transformation(origin = {28, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB6B11(BPu = 0, GPu = 0, RPu = 0.18088/ZBASE2, XPu = 0.378785/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {-30, 90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line LineB6B12(BPu = 0, GPu = 0, RPu = 0.23407/ZBASE2, XPu = 0.487165/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {-70, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB6B13(BPu = 0, GPu = 0, RPu = 0.125976/ZBASE2, XPu = 0.248086/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {-50, 120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB7B8(BPu = 0, GPu = 0, RPu = 0, XPu = 0.33546/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {150, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Dynawo.Electrical.Lines.Line LineB7B9(BPu = 0, GPu = 0, RPu = 0, XPu = 0.209503/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {110, 50}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line LineB9B10(BPu = 0, GPu = 0, RPu = 0.060579/ZBASE2, XPu = 0.160922/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {60, 90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Dynawo.Electrical.Lines.Line LineB9B14(BPu = 0, GPu = 0, RPu = 0.242068/ZBASE2, XPu = 0.514912/ZBASE2) annotation(
    Placement(visible = true, transformation(origin = {50, 180}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Transformers
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio Tfo1(BPu = 0, GPu = 0, RPu = 0, XPu = 0.47994804/ZBASE2, rTfoPu = 1.0729614) annotation(
    Placement(visible = true, transformation(origin = {-30, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio Tfo2(BPu = 0, GPu = 0, RPu = 0, XPu = 1.0591881/ZBASE2, rTfoPu = 1.0319917) annotation(
    Placement(visible = true, transformation(origin = {80, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio Tfo3(BPu = 0, GPu = 0, RPu = 0, XPu = 0.39824802/ZBASE2, rTfoPu = 1.0224948) annotation(
    Placement(visible = true, transformation(origin = {110, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  // Shunt
  Dynawo.Electrical.Shunts.ShuntB Bank9(BPu = -0.099769*ZBASE2, i0Pu = Complex(-0.0455016, -0.186237), s0Pu = Complex(0, 0.193446), u0Pu = Complex(1.020247, -0.272201)) annotation(
    Placement(visible = true, transformation(origin = {100, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Dynawo.Electrical.Loads.Load_INIT Load2_INIT(Q0Pu = Q0Pu_Load2, P0Pu = P0Pu_Load2, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load9_INIT(Q0Pu = Q0Pu_Load9, P0Pu = P0Pu_Load9, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load12_INIT(Q0Pu = Q0Pu_Load12, P0Pu = P0Pu_Load12, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load6_INIT(Q0Pu = Q0Pu_Load6, P0Pu = P0Pu_Load6, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load5_INIT(Q0Pu = Q0Pu_Load5, P0Pu = P0Pu_Load5, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT Gen2_INIT(PMin = 0, P0Pu = P0Pu_Gen2, PMax = 10.08, U0Pu = U0Pu_Gen2, URef0Pu = U0Pu_Gen2, QMin = -100, QMax = 100, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT Gen6_INIT(PMin = 0, P0Pu = P0Pu_Gen6, PMax = 0.744, U0Pu = U0Pu_Gen6, URef0Pu = U0Pu_Gen6, QMin = -100, QMax = 100, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load11_INIT(Q0Pu = Q0Pu_Load11, P0Pu = P0Pu_Load11, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load13_INIT(Q0Pu = Q0Pu_Load13, P0Pu = P0Pu_Load13, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load10_INIT(Q0Pu = Q0Pu_Load10, P0Pu = P0Pu_Load10, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT Gen1_INIT(PMin = 0, PMax = 10.9, U0Pu = U0Pu_Gen1, URef0Pu = U0Pu_Gen1, QMin = -100, QMax = 100, UPhase0 = atan2(U0Pu_Gen1*Modelica.Math.sin(UPhase0_Gen1), U0Pu_Gen1*Modelica.Math.cos(UPhase0_Gen1)), P0Pu(fixed = false), Q0Pu(fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load3_INIT(Q0Pu = Q0Pu_Load3, P0Pu = P0Pu_Load3, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load14_INIT(Q0Pu = Q0Pu_Load14, P0Pu = P0Pu_Load14, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT Gen3_INIT(PMin = 0, P0Pu = P0Pu_Gen3, PMax = 14.85, U0Pu = U0Pu_Gen3, URef0Pu = U0Pu_Gen3, QMin = -100, QMax = 100, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Loads.Load_INIT Load4_INIT(Q0Pu = Q0Pu_Load4, P0Pu = P0Pu_Load4, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Machines.SignalN.GeneratorPV_INIT Gen8_INIT(PMin = 0, P0Pu = P0Pu_Gen8, PMax = 2.28, U0Pu = U0Pu_Gen8, URef0Pu = U0Pu_Gen8, QMin = -100, QMax = 100, Q0Pu(fixed = false), UPhase0(fixed = false));
equation
// Generators controls
// Loads references
  Load2.PRefPu = PrefPu_Load2.setPoint;
  Load2.QRefPu = QrefPu_Load2.setPoint;
  Load3.PRefPu = PrefPu_Load3.setPoint;
  Load3.QRefPu = QrefPu_Load3.setPoint;
  Load4.PRefPu = PrefPu_Load4.setPoint;
  Load4.QRefPu = QrefPu_Load4.setPoint;
  Load5.PRefPu = PrefPu_Load5.setPoint;
  Load5.QRefPu = QrefPu_Load5.setPoint;
  Load6.PRefPu = PrefPu_Load6.setPoint;
  Load6.QRefPu = QrefPu_Load6.setPoint;
  Load9.PRefPu = PrefPu_Load9.setPoint;
  Load9.QRefPu = QrefPu_Load9.setPoint;
  Load10.PRefPu = PrefPu_Load10.setPoint;
  Load10.QRefPu = QrefPu_Load10.setPoint;
  Load11.PRefPu = PrefPu_Load11.setPoint;
  Load11.QRefPu = QrefPu_Load11.setPoint;
  Load12.PRefPu = PrefPu_Load12.setPoint;
  Load12.QRefPu = QrefPu_Load12.setPoint;
  Load13.PRefPu = PrefPu_Load13.setPoint;
  Load13.QRefPu = QrefPu_Load13.setPoint;
  Load14.PRefPu = PrefPu_Load14.setPoint;
  Load14.QRefPu = QrefPu_Load14.setPoint;
// Network connections
  connect(Bus10.terminal, Load10.terminal) annotation(
    Line(points = {{30, 100}, {30, 82}}, color = {0, 0, 255}));
  connect(Bus12.terminal, Load12.terminal) annotation(
    Line(points = {{-130, 160}, {-130, 140}}, color = {0, 0, 255}));
  connect(Bus13.terminal, Load13.terminal) annotation(
    Line(points = {{-70, 200}, {-70, 220}}, color = {0, 0, 255}));
  connect(Bus14.terminal, Load14.terminal) annotation(
    Line(points = {{10, 180}, {10, 200}}, color = {0, 0, 255}));
  connect(Bus4.terminal, Load4.terminal) annotation(
    Line(points = {{90, -60}, {90, -88}}, color = {0, 0, 255}));
  connect(Gen1.terminal, Bus1.terminal) annotation(
    Line(points = {{-170, 0}, {-170, -20}}, color = {0, 0, 255}));
  connect(Gen2.terminal, Bus2.terminal) annotation(
    Line(points = {{-90, -160}, {-90, -140}}, color = {0, 0, 255}));
  connect(Bus8.terminal, Gen8.terminal) annotation(
    Line(points = {{170, 40}, {170, 60}}, color = {0, 0, 255}));
  connect(LineB1B5.terminal1, Bus1.terminal) annotation(
    Line(points = {{-80, -60}, {-160, -60}, {-160, -20}, {-170, -20}}, color = {0, 0, 255}));
  connect(LineB1B5.terminal2, Bus5.terminal) annotation(
    Line(points = {{-60, -60}, {-40, -60}, {-40, -40}, {-30, -40}}, color = {0, 0, 255}));
  connect(LineB12B13.terminal2, Bus13.terminal) annotation(
    Line(points = {{-100, 200}, {-70, 200}}, color = {0, 0, 255}));
  connect(LineB13B14.terminal1, Bus13.terminal) annotation(
    Line(points = {{-40, 200}, {-70, 200}}, color = {0, 0, 255}));
  connect(LineB10B11.terminal1, Bus11.terminal) annotation(
    Line(points = {{40, 140}, {10, 140}}, color = {0, 0, 255}));
  connect(LineB2B5.terminal1, Bus2.terminal) annotation(
    Line(points = {{-62, -100}, {-90, -100}, {-90, -140}}, color = {0, 0, 255}));
  connect(LineB2B5.terminal2, Bus5.terminal) annotation(
    Line(points = {{-42, -100}, {-30, -100}, {-30, -40}}, color = {0, 0, 255}));
  connect(LineB6B11.terminal1, Bus6.terminal) annotation(
    Line(points = {{-30, 100}, {-30, 60}}, color = {0, 0, 255}));
  connect(LineB6B11.terminal2, Bus11.terminal) annotation(
    Line(points = {{-30, 80}, {-30, 140}, {10, 140}}, color = {0, 0, 255}));
  connect(LineB7B8.terminal1, Bus7.terminal) annotation(
    Line(points = {{140, 20}, {110, 20}}, color = {0, 0, 255}));
  connect(LineB7B9.terminal1, Bus9.terminal) annotation(
    Line(points = {{110, 60}, {70, 60}}, color = {0, 0, 255}));
  connect(LineB9B14.terminal1, Bus14.terminal) annotation(
    Line(points = {{40, 180}, {10, 180}}, color = {0, 0, 255}));
  connect(Tfo1.terminal1, Bus5.terminal) annotation(
    Line(points = {{-30, -20}, {-30, -40}}, color = {0, 0, 255}));
  connect(Tfo1.terminal2, Bus6.terminal) annotation(
    Line(points = {{-30, 0}, {-30, 60}}, color = {0, 0, 255}));
  connect(Tfo3.terminal1, Bus4.terminal) annotation(
    Line(points = {{110, -20}, {110, -40}, {90, -40}, {90, -60}}, color = {0, 0, 255}));
  connect(Tfo3.terminal2, Bus7.terminal) annotation(
    Line(points = {{110, 0}, {110, 20}}, color = {0, 0, 255}));
  connect(Load2.terminal, Bus2.terminal) annotation(
    Line(points = {{-120, -160}, {-120, -140}, {-90, -140}}, color = {0, 0, 255}));
  connect(Load5.terminal, Bus5.terminal) annotation(
    Line(points = {{-50, -20}, {-40, -20}, {-40, -40}, {-30, -40}}, color = {0, 0, 255}));
  connect(LineB1B2.terminal1, Bus1.terminal) annotation(
    Line(points = {{-160, -120}, {-170, -120}, {-170, -20}}, color = {0, 0, 255}));
  connect(Gen3.terminal, Bus3.terminal) annotation(
    Line(points = {{90, -200}, {90, -180}}, color = {0, 0, 255}));
  connect(Load3.terminal, Bus3.terminal) annotation(
    Line(points = {{118, -200}, {118, -180}, {90, -180}}, color = {0, 0, 255}));
  connect(LineB3B4.terminal1, Bus4.terminal) annotation(
    Line(points = {{100, -102}, {100, -60}, {90, -60}}, color = {0, 0, 255}));
  connect(LineB3B4.terminal2, Bus3.terminal) annotation(
    Line(points = {{100, -122}, {100, -180}, {90, -180}}, color = {0, 0, 255}));
  connect(LineB2B4.terminal1, Bus2.terminal) annotation(
    Line(points = {{0, -120}, {-80, -120}, {-80, -140}, {-90, -140}}, color = {0, 0, 255}));
  connect(LineB2B4.terminal2, Bus4.terminal) annotation(
    Line(points = {{20, -120}, {80, -120}, {80, -60}, {90, -60}}, color = {0, 0, 255}));
  connect(LineB4B5.terminal1, Bus5.terminal) annotation(
    Line(points = {{18, -80}, {-20, -80}, {-20, -40}, {-30, -40}}, color = {0, 0, 255}));
  connect(LineB2B3.terminal2, Bus3.terminal) annotation(
    Line(points = {{20, -160}, {80, -160}, {80, -180}, {90, -180}}, color = {0, 0, 255}));
  connect(LineB2B3.terminal1, Bus2.terminal) annotation(
    Line(points = {{0, -160}, {-80, -160}, {-80, -140}, {-90, -140}}, color = {0, 0, 255}));
  connect(LineB4B5.terminal2, Bus4.terminal) annotation(
    Line(points = {{38, -80}, {60, -80}, {60, -60}, {90, -60}}, color = {0, 0, 255}));
  connect(Tfo2.terminal1, Bus4.terminal) annotation(
    Line(points = {{80, -20}, {80, -60}, {90, -60}}, color = {0, 0, 255}));
  connect(Bus8.terminal, LineB7B8.terminal2) annotation(
    Line(points = {{170, 40}, {170, 20}, {160, 20}}, color = {0, 0, 255}));
  connect(Bank9.terminal, Bus9.terminal) annotation(
    Line(points = {{100, 80}, {80, 80}, {80, 60}, {70, 60}}, color = {0, 0, 255}));
  connect(LineB7B9.terminal2, Bus7.terminal) annotation(
    Line(points = {{110, 40}, {110, 20}}, color = {0, 0, 255}));
  connect(Tfo2.terminal2, Bus9.terminal) annotation(
    Line(points = {{80, 0}, {80, 60}, {70, 60}}, color = {0, 0, 255}));
  connect(LineB1B2.terminal2, Bus2.terminal) annotation(
    Line(points = {{-140, -120}, {-100, -120}, {-100, -140}, {-90, -140}}, color = {0, 0, 255}));
  connect(Bus9.terminal, LineB9B14.terminal2) annotation(
    Line(points = {{70, 60}, {70, 180}, {60, 180}}, color = {0, 0, 255}));
  connect(Bus9.terminal, Load9.terminal) annotation(
    Line(points = {{70, 60}, {70, 40}}, color = {0, 0, 255}));
  connect(LineB9B10.terminal2, Bus9.terminal) annotation(
    Line(points = {{60, 80}, {60, 60}, {70, 60}}, color = {0, 0, 255}));
  connect(LineB9B10.terminal1, Bus10.terminal) annotation(
    Line(points = {{60, 100}, {30, 100}}, color = {0, 0, 255}));
  connect(Bus11.terminal, Load11.terminal) annotation(
    Line(points = {{10, 140}, {10, 120}}, color = {0, 0, 255}));
  connect(LineB13B14.terminal2, Bus14.terminal) annotation(
    Line(points = {{-20, 200}, {0, 200}, {0, 180}, {10, 180}}, color = {0, 0, 255}));
  connect(Load6.terminal, Bus6.terminal) annotation(
    Line(points = {{0, 40}, {0, 60}, {-30, 60}}, color = {0, 0, 255}));
  connect(Gen6.terminal, Bus6.terminal) annotation(
    Line(points = {{-60, 40}, {-60, 60}, {-30, 60}}, color = {0, 0, 255}));
  connect(LineB10B11.terminal2, Bus10.terminal) annotation(
    Line(points = {{40, 120}, {40, 100}, {30, 100}}, color = {0, 0, 255}));
  connect(LineB6B13.terminal2, Bus6.terminal) annotation(
    Line(points = {{-40, 120}, {-40, 60}, {-30, 60}}, color = {0, 0, 255}));
  connect(LineB6B12.terminal2, Bus6.terminal) annotation(
    Line(points = {{-60, 80}, {-60, 60}, {-30, 60}}, color = {0, 0, 255}));
  connect(Bus12.terminal, LineB12B13.terminal1) annotation(
    Line(points = {{-130, 160}, {-130, 200}, {-120, 200}}, color = {0, 0, 255}));
  connect(LineB6B12.terminal1, Bus12.terminal) annotation(
    Line(points = {{-80, 80}, {-120, 80}, {-120, 160}, {-130, 160}}, color = {0, 0, 255}));
  connect(Bus13.terminal, LineB6B13.terminal1) annotation(
    Line(points = {{-70, 200}, {-70, 120}, {-60, 120}}, color = {0, 0, 255}));
initial equation
  Load2_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load2.terminal.V);
  Load2_INIT.UPhase0 = Modelica.ComplexMath.arg(Load2.terminal.V);
  Load9_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load9.terminal.V);
  Load9_INIT.UPhase0 = Modelica.ComplexMath.arg(Load9.terminal.V);
  Load12_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load12.terminal.V);
  Load12_INIT.UPhase0 = Modelica.ComplexMath.arg(Load12.terminal.V);
  Load6_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load6.terminal.V);
  Load6_INIT.UPhase0 = Modelica.ComplexMath.arg(Load6.terminal.V);
  Load5_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load5.terminal.V);
  Load5_INIT.UPhase0 = Modelica.ComplexMath.arg(Load5.terminal.V);
  Gen2_INIT.Q0Pu = -(Gen2.QGenPu);
  Gen2_INIT.UPhase0 = Gen2.UPhase;
  Gen6_INIT.Q0Pu = -(Gen6.QGenPu);
  Gen6_INIT.UPhase0 = Gen6.UPhase;
  Load11_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load11.terminal.V);
  Load11_INIT.UPhase0 = Modelica.ComplexMath.arg(Load11.terminal.V);
  Load13_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load13.terminal.V);
  Load13_INIT.UPhase0 = Modelica.ComplexMath.arg(Load13.terminal.V);
  Load10_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load10.terminal.V);
  Load10_INIT.UPhase0 = Modelica.ComplexMath.arg(Load10.terminal.V);
  Gen1_INIT.P0Pu = Modelica.ComplexMath.real(Gen1.terminal.V*Modelica.ComplexMath.conj(Gen1.terminal.i));
  Gen1_INIT.Q0Pu = Modelica.ComplexMath.imag(Gen1.terminal.V*Modelica.ComplexMath.conj(Gen1.terminal.i));
  Load3_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load3.terminal.V);
  Load3_INIT.UPhase0 = Modelica.ComplexMath.arg(Load3.terminal.V);
  Load14_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load14.terminal.V);
  Load14_INIT.UPhase0 = Modelica.ComplexMath.arg(Load14.terminal.V);
  Gen3_INIT.Q0Pu = -(Gen3.QGenPu);
  Gen3_INIT.UPhase0 = Gen3.UPhase;
  Load4_INIT.U0Pu = Modelica.ComplexMath.'abs'(Load4.terminal.V);
  Load4_INIT.UPhase0 = Modelica.ComplexMath.arg(Load4.terminal.V);
  Gen8_INIT.Q0Pu = -(Gen8.QGenPu);
  Gen8_INIT.UPhase0 = Gen8.UPhase;
  annotation(
    preferredView = "diagram",
    Diagram(coordinateSystem(extent = {{-180, 240}, {180, -220}})));
end IEEE14Base_auxiliary;
