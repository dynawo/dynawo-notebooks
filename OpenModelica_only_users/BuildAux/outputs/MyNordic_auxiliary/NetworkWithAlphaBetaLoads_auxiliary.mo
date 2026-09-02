within MyNordic_auxiliary;

/*
* Copyright (c) 2022, RTE (http://www.rte-france.com)
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
model NetworkWithAlphaBetaLoads_auxiliary "Nordic test grid with buses, lines, shunts and voltage-dependent loads"
  extends MyNordic_auxiliary.Network_auxiliary;
  parameter Real Alpha "Active load sensitivity to voltage";
  parameter Real Beta "Reactive load sensitivity to voltage";
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_01;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_01;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_02;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_02;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_03;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_03;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_04;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_04;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_05;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_05;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_11;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_11;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_12;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_12;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_13;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_13;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_22;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_22;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_31;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_31;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_32;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_32;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_41;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_41;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_42;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_42;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_43;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_43;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_46;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_46;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_47;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_47;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_51;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_51;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_61;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_61;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_62;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_62;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_63;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_63;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_71;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_71;
  parameter Dynawo.Types.ActivePowerPu P0Pu_load_72;
  parameter Dynawo.Types.ReactivePowerPu Q0Pu_load_72;
  Dynawo.Electrical.Loads.LoadPQ load_01(i0Pu(re(start = P0Pu_load_01, fixed = false), im(start = -(Q0Pu_load_01), fixed = false)), s0Pu(re(start = P0Pu_load_01, fixed = false), im(start = Q0Pu_load_01, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-55, -107}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_01(Value0 = P0Pu_load_01);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_01(Value0 = Q0Pu_load_01);
  Dynawo.Electrical.Loads.LoadPQ load_02(i0Pu(re(start = P0Pu_load_02, fixed = false), im(start = -(Q0Pu_load_02), fixed = false)), s0Pu(re(start = P0Pu_load_02, fixed = false), im(start = Q0Pu_load_02, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {35, -97}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_02(Value0 = P0Pu_load_02);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_02(Value0 = Q0Pu_load_02);
  Dynawo.Electrical.Loads.LoadPQ load_03(i0Pu(re(start = P0Pu_load_03, fixed = false), im(start = -(Q0Pu_load_03), fixed = false)), s0Pu(re(start = P0Pu_load_03, fixed = false), im(start = Q0Pu_load_03, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-65, -43}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_03(Value0 = P0Pu_load_03);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_03(Value0 = Q0Pu_load_03);
  Dynawo.Electrical.Loads.LoadPQ load_04(i0Pu(re(start = P0Pu_load_04, fixed = false), im(start = -(Q0Pu_load_04), fixed = false)), s0Pu(re(start = P0Pu_load_04, fixed = false), im(start = Q0Pu_load_04, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-25, -43}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_04(Value0 = P0Pu_load_04);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_04(Value0 = Q0Pu_load_04);
  Dynawo.Electrical.Loads.LoadPQ load_05(i0Pu(re(start = P0Pu_load_05, fixed = false), im(start = -(Q0Pu_load_05), fixed = false)), s0Pu(re(start = P0Pu_load_05, fixed = false), im(start = Q0Pu_load_05, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-25, -107}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_05(Value0 = P0Pu_load_05);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_05(Value0 = Q0Pu_load_05);
  Dynawo.Electrical.Loads.LoadPQ load_11(i0Pu(re(start = P0Pu_load_11, fixed = false), im(start = -(Q0Pu_load_11), fixed = false)), s0Pu(re(start = P0Pu_load_11, fixed = false), im(start = Q0Pu_load_11, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {21, 113}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_11(Value0 = P0Pu_load_11);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_11(Value0 = Q0Pu_load_11);
  Dynawo.Electrical.Loads.LoadPQ load_12(i0Pu(re(start = P0Pu_load_12, fixed = false), im(start = -(Q0Pu_load_12), fixed = false)), s0Pu(re(start = P0Pu_load_12, fixed = false), im(start = Q0Pu_load_12, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {39, 118}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_12(Value0 = P0Pu_load_12);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_12(Value0 = Q0Pu_load_12);
  Dynawo.Electrical.Loads.LoadPQ load_13(i0Pu(re(start = P0Pu_load_13, fixed = false), im(start = -(Q0Pu_load_13), fixed = false)), s0Pu(re(start = P0Pu_load_13, fixed = false), im(start = Q0Pu_load_13, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {85, 113}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_13(Value0 = P0Pu_load_13);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_13(Value0 = Q0Pu_load_13);
  Dynawo.Electrical.Loads.LoadPQ load_22(i0Pu(re(start = P0Pu_load_22, fixed = false), im(start = -(Q0Pu_load_22), fixed = false)), s0Pu(re(start = P0Pu_load_22, fixed = false), im(start = Q0Pu_load_22, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-40, 33}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_22(Value0 = P0Pu_load_22);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_22(Value0 = Q0Pu_load_22);
  Dynawo.Electrical.Loads.LoadPQ load_31(i0Pu(re(start = P0Pu_load_31, fixed = false), im(start = -(Q0Pu_load_31), fixed = false)), s0Pu(re(start = P0Pu_load_31, fixed = false), im(start = Q0Pu_load_31, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-35, 3}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_31(Value0 = P0Pu_load_31);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_31(Value0 = Q0Pu_load_31);
  Dynawo.Electrical.Loads.LoadPQ load_32(i0Pu(re(start = P0Pu_load_32, fixed = false), im(start = -(Q0Pu_load_32), fixed = false)), s0Pu(re(start = P0Pu_load_32, fixed = false), im(start = Q0Pu_load_32, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-89, 3}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_32(Value0 = P0Pu_load_32);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_32(Value0 = Q0Pu_load_32);
  Dynawo.Electrical.Loads.LoadPQ load_41(i0Pu(re(start = P0Pu_load_41, fixed = false), im(start = -(Q0Pu_load_41), fixed = false)), s0Pu(re(start = P0Pu_load_41, fixed = false), im(start = Q0Pu_load_41, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-81, -27}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_41(Value0 = P0Pu_load_41);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_41(Value0 = Q0Pu_load_41);
  Dynawo.Electrical.Loads.LoadPQ load_42(i0Pu(re(start = P0Pu_load_42, fixed = false), im(start = -(Q0Pu_load_42), fixed = false)), s0Pu(re(start = P0Pu_load_42, fixed = false), im(start = Q0Pu_load_42, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {55, 7}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_42(Value0 = P0Pu_load_42);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_42(Value0 = Q0Pu_load_42);
  Dynawo.Electrical.Loads.LoadPQ load_43(i0Pu(re(start = P0Pu_load_43, fixed = false), im(start = -(Q0Pu_load_43), fixed = false)), s0Pu(re(start = P0Pu_load_43, fixed = false), im(start = Q0Pu_load_43, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {25, -47}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_43(Value0 = P0Pu_load_43);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_43(Value0 = Q0Pu_load_43);
  Dynawo.Electrical.Loads.LoadPQ load_46(i0Pu(re(start = P0Pu_load_46, fixed = false), im(start = -(Q0Pu_load_46), fixed = false)), s0Pu(re(start = P0Pu_load_46, fixed = false), im(start = Q0Pu_load_46, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {71, -47}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_46(Value0 = P0Pu_load_46);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_46(Value0 = Q0Pu_load_46);
  Dynawo.Electrical.Loads.LoadPQ load_47(i0Pu(re(start = P0Pu_load_47, fixed = false), im(start = -(Q0Pu_load_47), fixed = false)), s0Pu(re(start = P0Pu_load_47, fixed = false), im(start = Q0Pu_load_47, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {61, -93}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_47(Value0 = P0Pu_load_47);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_47(Value0 = Q0Pu_load_47);
  Dynawo.Electrical.Loads.LoadPQ load_51(i0Pu(re(start = P0Pu_load_51, fixed = false), im(start = -(Q0Pu_load_51), fixed = false)), s0Pu(re(start = P0Pu_load_51, fixed = false), im(start = Q0Pu_load_51, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {35, -113}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_51(Value0 = P0Pu_load_51);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_51(Value0 = Q0Pu_load_51);
  Dynawo.Electrical.Loads.LoadPQ load_61(i0Pu(re(start = P0Pu_load_61, fixed = false), im(start = -(Q0Pu_load_61), fixed = false)), s0Pu(re(start = P0Pu_load_61, fixed = false), im(start = Q0Pu_load_61, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-95, -67}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_61(Value0 = P0Pu_load_61);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_61(Value0 = Q0Pu_load_61);
  Dynawo.Electrical.Loads.LoadPQ load_62(i0Pu(re(start = P0Pu_load_62, fixed = false), im(start = -(Q0Pu_load_62), fixed = false)), s0Pu(re(start = P0Pu_load_62, fixed = false), im(start = Q0Pu_load_62, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-100, -93}, extent = {{-5, 5}, {5, -5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_62(Value0 = P0Pu_load_62);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_62(Value0 = Q0Pu_load_62);
  Dynawo.Electrical.Loads.LoadPQ load_63(i0Pu(re(start = P0Pu_load_63, fixed = false), im(start = -(Q0Pu_load_63), fixed = false)), s0Pu(re(start = P0Pu_load_63, fixed = false), im(start = Q0Pu_load_63, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-80, -147}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_63(Value0 = P0Pu_load_63);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_63(Value0 = Q0Pu_load_63);
  Dynawo.Electrical.Loads.LoadPQ load_71(i0Pu(re(start = P0Pu_load_71, fixed = false), im(start = -(Q0Pu_load_71), fixed = false)), s0Pu(re(start = P0Pu_load_71, fixed = false), im(start = Q0Pu_load_71, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-95, 113}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_71(Value0 = P0Pu_load_71);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_71(Value0 = Q0Pu_load_71);
  Dynawo.Electrical.Loads.LoadPQ load_72(i0Pu(re(start = P0Pu_load_72, fixed = false), im(start = -(Q0Pu_load_72), fixed = false)), s0Pu(re(start = P0Pu_load_72, fixed = false), im(start = Q0Pu_load_72, fixed = false)), u0Pu(re(start = 1, fixed = false), im(start = 0, fixed = false))) annotation(
    Placement(visible = true, transformation(origin = {-88, 63}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_load_72(Value0 = P0Pu_load_72);
  Dynawo.Electrical.Controls.Basics.SetPoint QrefPu_load_72(Value0 = Q0Pu_load_72);
  Dynawo.Electrical.Shunts.ShuntB shunt_1022(BPu = BPu_shunt_1022, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_1022, i0Pu = s0Pu_shunt_1022) annotation(
    Placement(visible = true, transformation(origin = {-33.5, 56.5}, extent = {{-2.5, 2.5}, {2.5, -2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_1041(BPu = BPu_shunt_1041, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_1041, i0Pu = s0Pu_shunt_1041) annotation(
    Placement(visible = true, transformation(origin = {-66.5, -94.5}, extent = {{-2.5, -2.5}, {2.5, 2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_1043(BPu = BPu_shunt_1043, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_1043, i0Pu = s0Pu_shunt_1043) annotation(
    Placement(visible = true, transformation(origin = {-55.5, -67.5}, extent = {{-2.5, -2.5}, {2.5, 2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_1044(BPu = BPu_shunt_1044, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_1044, i0Pu = s0Pu_shunt_1044) annotation(
    Placement(visible = true, transformation(origin = {-15.5, -67.5}, extent = {{-2.5, -2.5}, {2.5, 2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_1045(BPu = BPu_shunt_1045, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_1045, i0Pu = s0Pu_shunt_1045) annotation(
    Placement(visible = true, transformation(origin = {-12.5, -83.5}, extent = {{-2.5, 2.5}, {2.5, -2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4012(BPu = BPu_shunt_4012, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4012, i0Pu = s0Pu_shunt_4012) annotation(
    Placement(visible = true, transformation(origin = {-22.5, 106.5}, extent = {{-2.5, 2.5}, {2.5, -2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4041(BPu = BPu_shunt_4041, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4041, i0Pu = s0Pu_shunt_4041) annotation(
    Placement(visible = true, transformation(origin = {-94.5, -14.5}, extent = {{-2.5, -2.5}, {2.5, 2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4043(BPu = BPu_shunt_4043, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4043, i0Pu = s0Pu_shunt_4043) annotation(
    Placement(visible = true, transformation(origin = {24.5, -23.5}, extent = {{-2.5, 2.5}, {2.5, -2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4046(BPu = BPu_shunt_4046, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4046, i0Pu = s0Pu_shunt_4046) annotation(
    Placement(visible = true, transformation(origin = {76.5, -22.5}, extent = {{-2.5, 2.5}, {2.5, -2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4051(BPu = BPu_shunt_4051, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4051, i0Pu = s0Pu_shunt_4051) annotation(
    Placement(visible = true, transformation(origin = {21.5, -134.5}, extent = {{-2.5, -2.5}, {2.5, 2.5}}, rotation = 0)));
  Dynawo.Electrical.Shunts.ShuntB shunt_4071(BPu = BPu_shunt_4071, u0Pu = Complex(1, 0), s0Pu = s0Pu_shunt_4071, i0Pu = s0Pu_shunt_4071) annotation(
    Placement(visible = true, transformation(origin = {-85.5, 136.5}, extent = {{2.5, 2.5}, {-2.5, -2.5}}, rotation = 0)));
  // shunt_1022 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_1022;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_1022 = Complex(0, BPu_shunt_1022);
  // shunt_1041 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_1041;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_1041 = Complex(0, BPu_shunt_1041);
  // shunt_1043 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_1043;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_1043 = Complex(0, BPu_shunt_1043);
  // shunt_1044 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_1044;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_1044 = Complex(0, BPu_shunt_1044);
  // shunt_1045 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_1045;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_1045 = Complex(0, BPu_shunt_1045);
  // shunt_4012 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4012;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4012 = Complex(0, BPu_shunt_4012);
  // shunt_4041 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4041;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4041 = Complex(0, BPu_shunt_4041);
  // shunt_4043 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4043;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4043 = Complex(0, BPu_shunt_4043);
  // shunt_4046 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4046;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4046 = Complex(0, BPu_shunt_4046);
  // shunt_4051 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4051;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4051 = Complex(0, BPu_shunt_4051);
  // shunt_4071 init values:
  // negative values for capacitors, positive values for inductors (reversed in PESTR)
  parameter Dynawo.Types.PerUnit BPu_shunt_4071;
  final parameter Dynawo.Types.ComplexApparentPowerPu s0Pu_shunt_4071 = Complex(0, BPu_shunt_4071);
  Dynawo.Electrical.Loads.Load_INIT load_22_INIT(Q0Pu = Q0Pu_load_22, P0Pu = P0Pu_load_22, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_71_INIT(Q0Pu = Q0Pu_load_71, P0Pu = P0Pu_load_71, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_61_INIT(Q0Pu = Q0Pu_load_61, P0Pu = P0Pu_load_61, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_04_INIT(Q0Pu = Q0Pu_load_04, P0Pu = P0Pu_load_04, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_46_INIT(Q0Pu = Q0Pu_load_46, P0Pu = P0Pu_load_46, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_02_INIT(Q0Pu = Q0Pu_load_02, P0Pu = P0Pu_load_02, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_05_INIT(Q0Pu = Q0Pu_load_05, P0Pu = P0Pu_load_05, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_63_INIT(Q0Pu = Q0Pu_load_63, P0Pu = P0Pu_load_63, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_42_INIT(Q0Pu = Q0Pu_load_42, P0Pu = P0Pu_load_42, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_03_INIT(Q0Pu = Q0Pu_load_03, P0Pu = P0Pu_load_03, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_11_INIT(Q0Pu = Q0Pu_load_11, P0Pu = P0Pu_load_11, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_41_INIT(Q0Pu = Q0Pu_load_41, P0Pu = P0Pu_load_41, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_51_INIT(Q0Pu = Q0Pu_load_51, P0Pu = P0Pu_load_51, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_13_INIT(Q0Pu = Q0Pu_load_13, P0Pu = P0Pu_load_13, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_32_INIT(Q0Pu = Q0Pu_load_32, P0Pu = P0Pu_load_32, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_01_INIT(Q0Pu = Q0Pu_load_01, P0Pu = P0Pu_load_01, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_12_INIT(Q0Pu = Q0Pu_load_12, P0Pu = P0Pu_load_12, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_31_INIT(Q0Pu = Q0Pu_load_31, P0Pu = P0Pu_load_31, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_72_INIT(Q0Pu = Q0Pu_load_72, P0Pu = P0Pu_load_72, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_47_INIT(Q0Pu = Q0Pu_load_47, P0Pu = P0Pu_load_47, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_43_INIT(Q0Pu = Q0Pu_load_43, P0Pu = P0Pu_load_43, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
  Dynawo.Electrical.Loads.Load_INIT load_62_INIT(Q0Pu = Q0Pu_load_62, P0Pu = P0Pu_load_62, U0Pu(start = 1, fixed = false), UPhase0(start = 0, fixed = false));
equation
  load_11.deltaP = 0;
  load_11.deltaQ = 0;
  load_12.deltaP = 0;
  load_12.deltaQ = 0;
  load_13.deltaP = 0;
  load_13.deltaQ = 0;
  load_22.deltaP = 0;
  load_22.deltaQ = 0;
  load_01.deltaP = 0;
  load_01.deltaQ = 0;
  load_02.deltaP = 0;
  load_02.deltaQ = 0;
  load_03.deltaP = 0;
  load_03.deltaQ = 0;
  load_04.deltaP = 0;
  load_04.deltaQ = 0;
  load_05.deltaP = 0;
  load_05.deltaQ = 0;
  load_31.deltaP = 0;
  load_31.deltaQ = 0;
  load_32.deltaP = 0;
  load_32.deltaQ = 0;
  load_41.deltaP = 0;
  load_41.deltaQ = 0;
  load_42.deltaP = 0;
  load_42.deltaQ = 0;
  load_43.deltaP = 0;
  load_43.deltaQ = 0;
  load_46.deltaP = 0;
  load_46.deltaQ = 0;
  load_47.deltaP = 0;
  load_47.deltaQ = 0;
  load_51.deltaP = 0;
  load_51.deltaQ = 0;
  load_61.deltaP = 0;
  load_61.deltaQ = 0;
  load_62.deltaP = 0;
  load_62.deltaQ = 0;
  load_63.deltaP = 0;
  load_63.deltaQ = 0;
  load_71.deltaP = 0;
  load_71.deltaQ = 0;
  load_72.deltaP = 0;
  load_72.deltaQ = 0;
  load_11.switchOffSignal1 = false;
  load_11.switchOffSignal2 = false;
  load_12.switchOffSignal1 = false;
  load_12.switchOffSignal2 = false;
  load_13.switchOffSignal1 = false;
  load_13.switchOffSignal2 = false;
  load_22.switchOffSignal1 = false;
  load_22.switchOffSignal2 = false;
  load_01.switchOffSignal1 = false;
  load_01.switchOffSignal2 = false;
  load_02.switchOffSignal1 = false;
  load_02.switchOffSignal2 = false;
  load_03.switchOffSignal1 = false;
  load_03.switchOffSignal2 = false;
  load_04.switchOffSignal1 = false;
  load_04.switchOffSignal2 = false;
  load_05.switchOffSignal1 = false;
  load_05.switchOffSignal2 = false;
  load_31.switchOffSignal1 = false;
  load_31.switchOffSignal2 = false;
  load_32.switchOffSignal1 = false;
  load_32.switchOffSignal2 = false;
  load_41.switchOffSignal1 = false;
  load_41.switchOffSignal2 = false;
  load_42.switchOffSignal1 = false;
  load_42.switchOffSignal2 = false;
  load_43.switchOffSignal1 = false;
  load_43.switchOffSignal2 = false;
  load_46.switchOffSignal1 = false;
  load_46.switchOffSignal2 = false;
  load_47.switchOffSignal1 = false;
  load_47.switchOffSignal2 = false;
  load_51.switchOffSignal1 = false;
  load_51.switchOffSignal2 = false;
  load_61.switchOffSignal1 = false;
  load_61.switchOffSignal2 = false;
  load_62.switchOffSignal1 = false;
  load_62.switchOffSignal2 = false;
  load_63.switchOffSignal1 = false;
  load_63.switchOffSignal2 = false;
  load_71.switchOffSignal1 = false;
  load_71.switchOffSignal2 = false;
  load_72.switchOffSignal1 = false;
  load_72.switchOffSignal2 = false;
  shunt_1022.switchOffSignal1 = false;
  shunt_1022.switchOffSignal2 = false;
  shunt_1041.switchOffSignal1 = false;
  shunt_1041.switchOffSignal2 = false;
  shunt_1043.switchOffSignal1 = false;
  shunt_1043.switchOffSignal2 = false;
  shunt_1044.switchOffSignal1 = false;
  shunt_1044.switchOffSignal2 = false;
  shunt_1045.switchOffSignal1 = false;
  shunt_1045.switchOffSignal2 = false;
  shunt_4012.switchOffSignal1 = false;
  shunt_4012.switchOffSignal2 = false;
  shunt_4041.switchOffSignal1 = false;
  shunt_4041.switchOffSignal2 = false;
  shunt_4043.switchOffSignal1 = false;
  shunt_4043.switchOffSignal2 = false;
  shunt_4046.switchOffSignal1 = false;
  shunt_4046.switchOffSignal2 = false;
  shunt_4051.switchOffSignal1 = false;
  shunt_4051.switchOffSignal2 = false;
  shunt_4071.switchOffSignal1 = false;
  shunt_4071.switchOffSignal2 = false;
  PrefPu_load_01.setPoint = load_01.PRefPu;
  QrefPu_load_01.setPoint = load_01.QRefPu;
  PrefPu_load_02.setPoint = load_02.PRefPu;
  QrefPu_load_02.setPoint = load_02.QRefPu;
  QrefPu_load_03.setPoint = load_03.QRefPu;
  PrefPu_load_03.setPoint = load_03.PRefPu;
  PrefPu_load_04.setPoint = load_04.PRefPu;
  QrefPu_load_04.setPoint = load_04.QRefPu;
  PrefPu_load_05.setPoint = load_05.PRefPu;
  QrefPu_load_05.setPoint = load_05.QRefPu;
  PrefPu_load_11.setPoint = load_11.PRefPu;
  QrefPu_load_11.setPoint = load_11.QRefPu;
  PrefPu_load_12.setPoint = load_12.PRefPu;
  QrefPu_load_12.setPoint = load_12.QRefPu;
  PrefPu_load_13.setPoint = load_13.PRefPu;
  QrefPu_load_13.setPoint = load_13.QRefPu;
  QrefPu_load_22.setPoint = load_22.QRefPu;
  PrefPu_load_22.setPoint = load_22.PRefPu;
  PrefPu_load_31.setPoint = load_31.PRefPu;
  QrefPu_load_31.setPoint = load_31.QRefPu;
  PrefPu_load_32.setPoint = load_32.PRefPu;
  QrefPu_load_32.setPoint = load_32.QRefPu;
  PrefPu_load_41.setPoint = load_41.PRefPu;
  QrefPu_load_41.setPoint = load_41.QRefPu;
  PrefPu_load_42.setPoint = load_42.PRefPu;
  QrefPu_load_42.setPoint = load_42.QRefPu;
  PrefPu_load_43.setPoint = load_43.PRefPu;
  QrefPu_load_43.setPoint = load_43.QRefPu;
  PrefPu_load_46.setPoint = load_46.PRefPu;
  QrefPu_load_46.setPoint = load_46.QRefPu;
  PrefPu_load_47.setPoint = load_47.PRefPu;
  QrefPu_load_47.setPoint = load_47.QRefPu;
  PrefPu_load_51.setPoint = load_51.PRefPu;
  QrefPu_load_51.setPoint = load_51.QRefPu;
  QrefPu_load_61.setPoint = load_61.QRefPu;
  PrefPu_load_61.setPoint = load_61.PRefPu;
  PrefPu_load_62.setPoint = load_62.PRefPu;
  QrefPu_load_62.setPoint = load_62.QRefPu;
  PrefPu_load_63.setPoint = load_63.PRefPu;
  QrefPu_load_63.setPoint = load_63.QRefPu;
  QrefPu_load_71.setPoint = load_71.QRefPu;
  PrefPu_load_71.setPoint = load_71.PRefPu;
  PrefPu_load_72.setPoint = load_72.PRefPu;
  QrefPu_load_72.setPoint = load_72.QRefPu;
  connect(shunt_4012.terminal, bus_4012.terminal) annotation(
    Line(points = {{-22.5, 106.5}, {-22.5, 100}, {-30, 100}}, color = {0, 0, 255}));
  connect(shunt_4071.terminal, bus_4071.terminal) annotation(
    Line(points = {{-85.5, 136.5}, {-85.5, 130}, {-80, 130}}, color = {0, 0, 255}));
  connect(shunt_1022.terminal, bus_1022.terminal) annotation(
    Line(points = {{-33.5, 56.5}, {-33.5, 50}, {-40, 50}}, color = {0, 0, 255}));
  connect(shunt_4043.terminal, bus_4043.terminal) annotation(
    Line(points = {{24.5, -23.5}, {24.5, -29}, {30, -29}, {30, -30}}, color = {0, 0, 255}));
  connect(shunt_4046.terminal, bus_4046.terminal) annotation(
    Line(points = {{76.5, -22.5}, {76, -22.5}, {76, -30}, {70, -30}}, color = {0, 0, 255}));
  connect(shunt_4051.terminal, bus_4051.terminal) annotation(
    Line(points = {{21.5, -134.5}, {21.5, -130}, {14, -130}}, color = {0, 0, 255}));
  connect(shunt_1044.terminal, bus_1044.terminal) annotation(
    Line(points = {{-15.5, -67.5}, {-15.5, -60}, {-20, -60}}, color = {0, 0, 255}));
  connect(shunt_1043.terminal, bus_1043.terminal) annotation(
    Line(points = {{-55.5, -67.5}, {-55.5, -60}, {-60, -60}}, color = {0, 0, 255}));
  connect(shunt_1041.terminal, bus_1041.terminal) annotation(
    Line(points = {{-66.5, -94.5}, {-66.5, -90}, {-60, -90}}, color = {0, 0, 255}));
  connect(shunt_1045.terminal, bus_1045.terminal) annotation(
    Line(points = {{-12.5, -83.5}, {-12.5, -90}, {-17, -90}}, color = {0, 0, 255}));
  connect(shunt_4041.terminal, bus_4041.terminal) annotation(
    Line(points = {{-94.5, -14.5}, {-94.5, -10}, {-78, -10}}, color = {0, 0, 255}));
  connect(load_01.terminal, bus_B01.terminal) annotation(
    Line(points = {{-55, -107}, {-55, -107}, {-55, -105}, {-55, -105}}, color = {0, 0, 255}));
  connect(load_02.terminal, bus_B02.terminal) annotation(
    Line(points = {{35, -97}, {35, -95}}, color = {0, 0, 255}));
  connect(load_03.terminal, bus_B03.terminal) annotation(
    Line(points = {{-65, -43}, {-65, -45}}, color = {0, 0, 255}));
  connect(load_04.terminal, bus_B04.terminal) annotation(
    Line(points = {{-25, -43}, {-25, -43}, {-25, -45}, {-25, -45}}, color = {0, 0, 255}));
  connect(load_05.terminal, bus_B05.terminal) annotation(
    Line(points = {{-25, -107}, {-25, -105}}, color = {0, 0, 255}));
  connect(load_11.terminal, bus_B11.terminal) annotation(
    Line(points = {{21, 113}, {21, 115}}, color = {0, 0, 255}));
  connect(load_12.terminal, bus_B12.terminal) annotation(
    Line(points = {{39, 118}, {39, 115}}, color = {0, 0, 255}));
  connect(load_13.terminal, bus_B13.terminal) annotation(
    Line(points = {{85, 113}, {85, 113}, {85, 115}, {85, 115}}, color = {0, 0, 255}));
  connect(load_22.terminal, bus_B22.terminal) annotation(
    Line(points = {{-40, 33}, {-40, 33}, {-40, 35}, {-40, 35}}, color = {0, 0, 255}));
  connect(load_31.terminal, bus_B31.terminal) annotation(
    Line(points = {{-35, 3}, {-35, 5}}, color = {0, 0, 255}));
  connect(load_32.terminal, bus_B32.terminal) annotation(
    Line(points = {{-89, 3}, {-89, 3}, {-89, 3}, {-88, 3}, {-88, 5}, {-89, 5}, {-89, 5}, {-89, 5}}, color = {0, 0, 255}));
  connect(load_41.terminal, bus_B41.terminal) annotation(
    Line(points = {{-81, -27}, {-81, -25}}, color = {0, 0, 255}));
  connect(load_42.terminal, bus_B42.terminal) annotation(
    Line(points = {{55, 7}, {55, 5}}, color = {0, 0, 255}));
  connect(load_43.terminal, bus_B43.terminal) annotation(
    Line(points = {{25, -47}, {25, -47}, {25, -45}, {25, -45}}, color = {0, 0, 255}));
  connect(load_46.terminal, bus_B46.terminal) annotation(
    Line(points = {{71, -47}, {71, -47}, {71, -45}, {71, -45}, {71, -45}, {71, -45}}, color = {0, 0, 255}));
  connect(load_47.terminal, bus_B47.terminal) annotation(
    Line(points = {{61, -93}, {61, -95}}, color = {0, 0, 255}));
  connect(load_51.terminal, bus_B51.terminal) annotation(
    Line(points = {{35, -113}, {35, -115}}, color = {0, 0, 255}));
  connect(load_61.terminal, bus_B61.terminal) annotation(
    Line(points = {{-95, -67}, {-95, -67}, {-95, -65}, {-95, -65}}, color = {0, 0, 255}));
  connect(load_62.terminal, bus_B62.terminal) annotation(
    Line(points = {{-100, -93}, {-100, -95}}, color = {0, 0, 255}));
  connect(load_63.terminal, bus_B63.terminal) annotation(
    Line(points = {{-80, -147}, {-80, -147}, {-80, -145}, {-80, -145}}, color = {0, 0, 255}));
  connect(load_71.terminal, bus_B71.terminal) annotation(
    Line(points = {{-95, 113}, {-95, 115}}, color = {0, 0, 255}));
  connect(load_72.terminal, bus_B72.terminal) annotation(
    Line(points = {{-88, 63}, {-88, 65}}, color = {0, 0, 255}));
initial equation
  load_22_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_22.terminal.V);
  load_22_INIT.UPhase0 = Modelica.ComplexMath.arg(load_22.terminal.V);
  load_71_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_71.terminal.V);
  load_71_INIT.UPhase0 = Modelica.ComplexMath.arg(load_71.terminal.V);
  load_61_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_61.terminal.V);
  load_61_INIT.UPhase0 = Modelica.ComplexMath.arg(load_61.terminal.V);
  load_04_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_04.terminal.V);
  load_04_INIT.UPhase0 = Modelica.ComplexMath.arg(load_04.terminal.V);
  load_46_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_46.terminal.V);
  load_46_INIT.UPhase0 = Modelica.ComplexMath.arg(load_46.terminal.V);
  load_02_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_02.terminal.V);
  load_02_INIT.UPhase0 = Modelica.ComplexMath.arg(load_02.terminal.V);
  load_05_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_05.terminal.V);
  load_05_INIT.UPhase0 = Modelica.ComplexMath.arg(load_05.terminal.V);
  load_63_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_63.terminal.V);
  load_63_INIT.UPhase0 = Modelica.ComplexMath.arg(load_63.terminal.V);
  load_42_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_42.terminal.V);
  load_42_INIT.UPhase0 = Modelica.ComplexMath.arg(load_42.terminal.V);
  load_03_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_03.terminal.V);
  load_03_INIT.UPhase0 = Modelica.ComplexMath.arg(load_03.terminal.V);
  load_11_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_11.terminal.V);
  load_11_INIT.UPhase0 = Modelica.ComplexMath.arg(load_11.terminal.V);
  load_41_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_41.terminal.V);
  load_41_INIT.UPhase0 = Modelica.ComplexMath.arg(load_41.terminal.V);
  load_51_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_51.terminal.V);
  load_51_INIT.UPhase0 = Modelica.ComplexMath.arg(load_51.terminal.V);
  load_13_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_13.terminal.V);
  load_13_INIT.UPhase0 = Modelica.ComplexMath.arg(load_13.terminal.V);
  load_32_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_32.terminal.V);
  load_32_INIT.UPhase0 = Modelica.ComplexMath.arg(load_32.terminal.V);
  load_01_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_01.terminal.V);
  load_01_INIT.UPhase0 = Modelica.ComplexMath.arg(load_01.terminal.V);
  load_12_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_12.terminal.V);
  load_12_INIT.UPhase0 = Modelica.ComplexMath.arg(load_12.terminal.V);
  load_31_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_31.terminal.V);
  load_31_INIT.UPhase0 = Modelica.ComplexMath.arg(load_31.terminal.V);
  load_72_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_72.terminal.V);
  load_72_INIT.UPhase0 = Modelica.ComplexMath.arg(load_72.terminal.V);
  load_47_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_47.terminal.V);
  load_47_INIT.UPhase0 = Modelica.ComplexMath.arg(load_47.terminal.V);
  load_43_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_43.terminal.V);
  load_43_INIT.UPhase0 = Modelica.ComplexMath.arg(load_43.terminal.V);
  load_62_INIT.U0Pu = Modelica.ComplexMath.'abs'(load_62.terminal.V);
  load_62_INIT.UPhase0 = Modelica.ComplexMath.arg(load_62.terminal.V);
  annotation(
    preferredView = "diagram",
    Diagram(coordinateSystem(extent = {{-100, -150}, {100, 150}}, grid = {1, 1}, preserveAspectRatio = false, initialScale = 0.1)),
    Icon(coordinateSystem(extent = {{-100, -150}, {100, 150}}, grid = {1, 1}, preserveAspectRatio = false)),
    version = "",
    __OpenModelica_commandLineOptions = "",
    Documentation(info = "<html><head></head><body>This network model extends the base network. It adds AlphaBetaLoads with alpha = 1 and beta = 2 as well as shunts, as described in&nbsp;the&nbsp;<span style=\"font-size: 12px; font-family: 'MS Shell Dlg 2';\">IEEE Technical Report \"Test Systems for Voltage Stability Analysis and Security Assessment\" from August, 2015</span>.</body></html>"));
end NetworkWithAlphaBetaLoads_auxiliary;
