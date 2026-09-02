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
model FullDynamicModel_auxiliary "Nordic test grid with buses, lines, shunts, loads, transformers and generators"
  extends MyNordic_auxiliary.NetworkWithAlphaBetaLoads_auxiliary;
  //  extends Dynawo.Examples.Nordic.Grid.BaseClasses.NetworkWithPQLoads;

  record GeneratorSynchronousExt3W_INITparams
    parameter Dynawo.Types.PerUnit RaPu;
    parameter Dynawo.Types.PerUnit XlPu;
    parameter Dynawo.Types.PerUnit XdPu;
    parameter Dynawo.Types.PerUnit XpdPu;
    parameter Dynawo.Types.PerUnit XppdPu;
    parameter Dynawo.Types.PerUnit XqPu;
    parameter Dynawo.Types.PerUnit XppqPu;
    parameter Dynawo.Types.Time Tpd0;
    parameter Dynawo.Types.Time Tppd0;
    parameter Dynawo.Types.Time Tppq0;
    parameter Dynawo.Types.PerUnit MdPuEfd;
    parameter Boolean UseApproximation;
  end GeneratorSynchronousExt3W_INITparams;

  record GeneratorSynchronousExt4W_INITparams
    parameter Dynawo.Types.PerUnit RaPu;
    parameter Dynawo.Types.PerUnit XlPu;
    parameter Dynawo.Types.PerUnit XdPu;
    parameter Dynawo.Types.PerUnit XpdPu;
    parameter Dynawo.Types.PerUnit XppdPu;
    parameter Dynawo.Types.PerUnit XqPu;
    parameter Dynawo.Types.PerUnit XpqPu;
    parameter Dynawo.Types.PerUnit XppqPu;
    parameter Dynawo.Types.Time Tpd0;
    parameter Dynawo.Types.Time Tpq0;
    parameter Dynawo.Types.Time Tppd0;
    parameter Dynawo.Types.Time Tppq0;
    parameter Dynawo.Types.PerUnit MdPuEfd;
    parameter Boolean UseApproximation;
  end GeneratorSynchronousExt4W_INITparams;

  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1_1041(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.0^2*(100/1200.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {-55, -97}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_2_1042(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.0^2*(100/600.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {35, -87}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_3_1043(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.01^2*(100/460.0), rTfoPu = 1.01) annotation(
    Placement(visible = true, transformation(origin = {-65, -53}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_4_1044(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*0.99^2*(100/1600.0), rTfoPu = 0.99) annotation(
    Placement(visible = true, transformation(origin = {-25, -53}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_5_1045(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.0^2*(100/1400.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {-25, -97}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_11_1011(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/400.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {21, 123}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_12_1012(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.05^2*(100/600.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {39, 108}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_13_1013(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/200.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {85, 123}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_22_1022(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/560.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {-40, 43}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_31_2031(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.01^2*(100/200.0), rTfoPu = 1.01) annotation(
    Placement(visible = true, transformation(origin = {-35, 12}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_32_2032(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.06^2*(100/400.0), rTfoPu = 1.06) annotation(
    Placement(visible = true, transformation(origin = {-89, 13}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_41_4041(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/1080.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {-81, -17}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_42_4042(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/800.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {55, -2}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_43_4043(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.02^2*(100/1800.0), rTfoPu = 1.02) annotation(
    Placement(visible = true, transformation(origin = {25, -37}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_46_4046(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.02^2*(100/1400.0), rTfoPu = 1.02) annotation(
    Placement(visible = true, transformation(origin = {71, -38}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_47_4047(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/200.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {61, -103}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_51_4051(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.05^2*(100/1600.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {35, -123}, extent = {{-5, -5}, {5, 5}}, rotation = 270)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_61_4061(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/1000.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {-95, -58}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_62_4062(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/600.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {-100, -102}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_63_4063(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/1180.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {-80, -137}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_71_4071(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/600.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {-95, 123}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_72_4072(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.05^2*(100/4000.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-88, 73}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1011_4011(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*0.95^2*(100/1250.0), rTfoPu = 0.95) annotation(
    Placement(visible = true, transformation(origin = {0, 125}, extent = {{5, -5}, {-5, 5}}, rotation = 0)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1012_4012(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*0.95^2*(100/1250.0), rTfoPu = 0.95) annotation(
    Placement(visible = true, transformation(origin = {-2, 96}, extent = {{5, -5}, {-5, 5}}, rotation = 0)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1022_4022(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*0.93^2*(100/833.3), rTfoPu = 0.93) annotation(
    Placement(visible = true, transformation(origin = {-25, 43}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1044_4044a(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/1000.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {-15, -45}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1044_4044b(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.03^2*(100/1000.0), rTfoPu = 1.03) annotation(
    Placement(visible = true, transformation(origin = {-8, -45}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1045_4045a(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/1000.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {-14, -100}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_1045_4045b(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.04^2*(100/1000.0), rTfoPu = 1.04) annotation(
    Placement(visible = true, transformation(origin = {-8, -100}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_2031_4031(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.0^2*(100/833.3), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {-26, 28}, extent = {{-5, -5}, {5, 5}}, rotation = 0)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g1_1012(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.0^2*(100/800.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {25, 93}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g2_1013(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.0^2*(100/600.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {75, 138}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g3_1014(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.0^2*(100/700.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {85, 93}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g4_1021(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.0^2*(100/600.0), rTfoPu = 1.0) annotation(
    Placement(visible = true, transformation(origin = {-85, 43}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g5_1022(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/250.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-45, 57}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g6_1042(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/400.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {35, -72}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g7_1043(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/200.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-53, -53}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g8_2032(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/850.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-77, 13}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g9_4011(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/1000.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-25, 138}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g10_4012(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/800.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-35, 93}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g11_4021(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/300.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {35, 58}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g12_4031(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/350.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-4, 28}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g13_4041(BPu = 0, GPu = 0, RPu = 0, XPu = 0.10*1.05^2*(100/300.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-70, -17}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g14_4042(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/700.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {50, -17}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g15_4047(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/1200.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {80, -103}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g16_4051(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/700.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {20, -123}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g17_4062(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/600.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-78, -102}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g18_4063(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/1200.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-95, -137}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g19_4071(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/500.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-75, 137}, extent = {{-5, -5}, {5, 5}}, rotation = -90)));
  Dynawo.Electrical.Transformers.TransformersFixedTap.TransformerFixedRatio trafo_g20_4072(BPu = 0, GPu = 0, RPu = 0, XPu = 0.15*1.05^2*(100/4500.0), rTfoPu = 1.05) annotation(
    Placement(visible = true, transformation(origin = {-75, 73}, extent = {{-5, -5}, {5, 5}}, rotation = 90)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g01(PGen0Pu = -(P0Pu_g01), U0Pu = U0Pu_g01) annotation(
    Placement(visible = true, transformation(origin = {25, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g02(PGen0Pu = -(P0Pu_g02), U0Pu = U0Pu_g02) annotation(
    Placement(visible = true, transformation(origin = {75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g03(PGen0Pu = -(P0Pu_g03), U0Pu = U0Pu_g03) annotation(
    Placement(visible = true, transformation(origin = {85, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g04(PGen0Pu = -(P0Pu_g04), U0Pu = U0Pu_g04) annotation(
    Placement(visible = true, transformation(origin = {-85, 30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g05(PGen0Pu = -(P0Pu_g05), U0Pu = U0Pu_g05) annotation(
    Placement(visible = true, transformation(origin = {-45, 71}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g06(PGen0Pu = -(P0Pu_g06), U0Pu = U0Pu_g06) annotation(
    Placement(visible = true, transformation(origin = {35, -60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g07(PGen0Pu = -(P0Pu_g07), U0Pu = U0Pu_g07) annotation(
    Placement(visible = true, transformation(origin = {-53, -39}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g08(PGen0Pu = -(P0Pu_g08), U0Pu = U0Pu_g08) annotation(
    Placement(visible = true, transformation(origin = {-77, 0}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g09(PGen0Pu = -(P0Pu_g09), U0Pu = U0Pu_g09) annotation(
    Placement(visible = true, transformation(origin = {-25, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g10(PGen0Pu = -(P0Pu_g10), U0Pu = U0Pu_g10) annotation(
    Placement(visible = true, transformation(origin = {-35, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g11(PGen0Pu = -(P0Pu_g11), U0Pu = U0Pu_g11) annotation(
    Placement(visible = true, transformation(origin = {35, 72}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g12(PGen0Pu = -(P0Pu_g12), U0Pu = U0Pu_g12) annotation(
    Placement(visible = true, transformation(origin = {-4, 41}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g13(PGen0Pu = -(P0Pu_g13), U0Pu = U0Pu_g13) annotation(
    Placement(visible = true, transformation(origin = {-70, -29}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g14(PGen0Pu = -(P0Pu_g14), U0Pu = U0Pu_g14) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g15(PGen0Pu = -(P0Pu_g15), U0Pu = U0Pu_g15) annotation(
    Placement(visible = true, transformation(origin = {80, -89}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g16(PGen0Pu = -(P0Pu_g16), U0Pu = U0Pu_g16) annotation(
    Placement(visible = true, transformation(origin = {20, -109}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g17(PGen0Pu = -(P0Pu_g17), U0Pu = U0Pu_g17) annotation(
    Placement(visible = true, transformation(origin = {-78, -88}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g18(PGen0Pu = -(P0Pu_g18), U0Pu = U0Pu_g18) annotation(
    Placement(visible = true, transformation(origin = {-95, -151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed g19(PGen0Pu = -(P0Pu_g19), U0Pu = U0Pu_g19) annotation(
    Placement(visible = true, transformation(origin = {-75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBus g20(UPu = U0Pu_g20, UPhase = UPhase0_g20) annotation(
    Placement(visible = true, transformation(origin = {-75, 60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  // g01 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g01;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g01;
  // g01 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g01_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g02 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g02;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g02;
  // g02 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g02_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g03 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g03;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g03;
  // g03 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g03_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g04 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g04;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g04;
  // g04 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g04_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g05 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g05;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g05;
  // g05 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g05_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g06 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g06;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g06;
  // g06 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g06_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g07 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g07;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g07;
  // g07 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g07_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g08 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g08;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g08;
  // g08 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g08_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g09 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g09;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g09;
  // g09 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g09_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g10 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g10;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g10;
  // g10 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g10_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g11 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g11;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g11;
  // g11 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g11_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g12 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g12;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g12;
  // g12 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g12_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g13 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g13;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g13;
  // g13 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g13_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.55, XpdPu = 0.3, XppdPu = 0.2, XqPu = 1.0, XppqPu = 0.2, Tpd0 = 7.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g14 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g14;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g14;
  // g14 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g14_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g15 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g15;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g15;
  // g15 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g15_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g16 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g16;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g16;
  // g16 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g16_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g17 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g17;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g17;
  // g17 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g17_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g18 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g18;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g18;
  // g18 parameters for GeneratorSynchronousExt4W_INIT
  parameter GeneratorSynchronousExt4W_INITparams g18_INITparams(RaPu = 0.0015, XlPu = 0.15, XdPu = 2.2, XpdPu = 0.3, XppdPu = 0.2, XqPu = 2.0, XpqPu = 0.4, XppqPu = 0.2, Tpd0 = 7.0, Tpq0 = 1.5, Tppd0 = 0.05, Tppq0 = 0.05, MdPuEfd = 0, UseApproximation = true);
  // g19 electrical values for the load flow
  parameter Dynawo.Types.ActivePowerPu P0Pu_g19;
  parameter Dynawo.Types.VoltageModulePu U0Pu_g19;
  // g19 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g19_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  // g20 electrical values for the load flow
  parameter Dynawo.Types.VoltageModulePu U0Pu_g20;
  parameter Dynawo.Types.Angle UPhase0_g20;
  // g20 parameters for GeneratorSynchronousExt3W_INIT
  parameter GeneratorSynchronousExt3W_INITparams g20_INITparams(RaPu = 0.002, XlPu = 0.15, XdPu = 1.1, XpdPu = 0.25, XppdPu = 0.2, XqPu = 0.7, XppqPu = 0.2, Tpd0 = 5.0, Tppd0 = 0.05, Tppq0 = 0.1, MdPuEfd = 0, UseApproximation = true);
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g11_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 300.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g11, md = 0.1, PNomTurb = 285.0, UNomHV = 15, SNom = 300.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g11, PNomAlt = 285.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g11_INITparams.RaPu, XlPu = g11_INITparams.XlPu, XdPu = g11_INITparams.XdPu, XpdPu = g11_INITparams.XpdPu, XppdPu = g11_INITparams.XppdPu, XqPu = g11_INITparams.XqPu, XppqPu = g11_INITparams.XppqPu, Tpd0 = g11_INITparams.Tpd0, Tppd0 = g11_INITparams.Tppd0, Tppq0 = g11_INITparams.Tppq0, MdPuEfd = g11_INITparams.MdPuEfd, UseApproximation = g11_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g05_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 250.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g05, md = 0.1, PNomTurb = 237.5, UNomHV = 15, SNom = 250.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g05, PNomAlt = 237.5, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g05_INITparams.RaPu, XlPu = g05_INITparams.XlPu, XdPu = g05_INITparams.XdPu, XpdPu = g05_INITparams.XpdPu, XppdPu = g05_INITparams.XppdPu, XqPu = g05_INITparams.XqPu, XppqPu = g05_INITparams.XppqPu, Tpd0 = g05_INITparams.Tpd0, Tppd0 = g05_INITparams.Tppd0, Tppq0 = g05_INITparams.Tppq0, MdPuEfd = g05_INITparams.MdPuEfd, UseApproximation = g05_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g16_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 700.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g16, md = 0.1, PNomTurb = 630.0, UNomHV = 15, SNom = 700.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g16, PNomAlt = 630.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g16_INITparams.RaPu, XlPu = g16_INITparams.XlPu, XdPu = g16_INITparams.XdPu, XpdPu = g16_INITparams.XpdPu, XppdPu = g16_INITparams.XppdPu, XqPu = g16_INITparams.XqPu, XpqPu = g16_INITparams.XpqPu, XppqPu = g16_INITparams.XppqPu, Tpd0 = g16_INITparams.Tpd0, Tpq0 = g16_INITparams.Tpq0, Tppd0 = g16_INITparams.Tppd0, Tppq0 = g16_INITparams.Tppq0, MdPuEfd = g16_INITparams.MdPuEfd, UseApproximation = g16_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g14_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 700.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g14, md = 0.1, PNomTurb = 630.0, UNomHV = 15, SNom = 700.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g14, PNomAlt = 630.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g14_INITparams.RaPu, XlPu = g14_INITparams.XlPu, XdPu = g14_INITparams.XdPu, XpdPu = g14_INITparams.XpdPu, XppdPu = g14_INITparams.XppdPu, XqPu = g14_INITparams.XqPu, XpqPu = g14_INITparams.XpqPu, XppqPu = g14_INITparams.XppqPu, Tpd0 = g14_INITparams.Tpd0, Tpq0 = g14_INITparams.Tpq0, Tppd0 = g14_INITparams.Tppd0, Tppq0 = g14_INITparams.Tppq0, MdPuEfd = g14_INITparams.MdPuEfd, UseApproximation = g14_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g06_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 400.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g06, md = 0.1, PNomTurb = 360.0, UNomHV = 15, SNom = 400.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g06, PNomAlt = 360.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g06_INITparams.RaPu, XlPu = g06_INITparams.XlPu, XdPu = g06_INITparams.XdPu, XpdPu = g06_INITparams.XpdPu, XppdPu = g06_INITparams.XppdPu, XqPu = g06_INITparams.XqPu, XpqPu = g06_INITparams.XpqPu, XppqPu = g06_INITparams.XppqPu, Tpd0 = g06_INITparams.Tpd0, Tpq0 = g06_INITparams.Tpq0, Tppd0 = g06_INITparams.Tppd0, Tppq0 = g06_INITparams.Tppq0, MdPuEfd = g06_INITparams.MdPuEfd, UseApproximation = g06_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g08_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 850.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g08, md = 0.1, PNomTurb = 807.5, UNomHV = 15, SNom = 850.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g08, PNomAlt = 807.5, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g08_INITparams.RaPu, XlPu = g08_INITparams.XlPu, XdPu = g08_INITparams.XdPu, XpdPu = g08_INITparams.XpdPu, XppdPu = g08_INITparams.XppdPu, XqPu = g08_INITparams.XqPu, XppqPu = g08_INITparams.XppqPu, Tpd0 = g08_INITparams.Tpd0, Tppd0 = g08_INITparams.Tppd0, Tppq0 = g08_INITparams.Tppq0, MdPuEfd = g08_INITparams.MdPuEfd, UseApproximation = g08_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g12_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 350.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g12, md = 0.1, PNomTurb = 332.5, UNomHV = 15, SNom = 350.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g12, PNomAlt = 332.5, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g12_INITparams.RaPu, XlPu = g12_INITparams.XlPu, XdPu = g12_INITparams.XdPu, XpdPu = g12_INITparams.XpdPu, XppdPu = g12_INITparams.XppdPu, XqPu = g12_INITparams.XqPu, XppqPu = g12_INITparams.XppqPu, Tpd0 = g12_INITparams.Tpd0, Tppd0 = g12_INITparams.Tppd0, Tppq0 = g12_INITparams.Tppq0, MdPuEfd = g12_INITparams.MdPuEfd, UseApproximation = g12_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g09_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 1000.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g09, md = 0.1, PNomTurb = 950.0, UNomHV = 15, SNom = 1000.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g09, PNomAlt = 950.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g09_INITparams.RaPu, XlPu = g09_INITparams.XlPu, XdPu = g09_INITparams.XdPu, XpdPu = g09_INITparams.XpdPu, XppdPu = g09_INITparams.XppdPu, XqPu = g09_INITparams.XqPu, XppqPu = g09_INITparams.XppqPu, Tpd0 = g09_INITparams.Tpd0, Tppd0 = g09_INITparams.Tppd0, Tppq0 = g09_INITparams.Tppq0, MdPuEfd = g09_INITparams.MdPuEfd, UseApproximation = g09_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g03_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 700.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g03, md = 0.1, PNomTurb = 665.0, UNomHV = 15, SNom = 700.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g03, PNomAlt = 665.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g03_INITparams.RaPu, XlPu = g03_INITparams.XlPu, XdPu = g03_INITparams.XdPu, XpdPu = g03_INITparams.XpdPu, XppdPu = g03_INITparams.XppdPu, XqPu = g03_INITparams.XqPu, XppqPu = g03_INITparams.XppqPu, Tpd0 = g03_INITparams.Tpd0, Tppd0 = g03_INITparams.Tppd0, Tppq0 = g03_INITparams.Tppq0, MdPuEfd = g03_INITparams.MdPuEfd, UseApproximation = g03_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g10_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 800.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g10, md = 0.1, PNomTurb = 760.0, UNomHV = 15, SNom = 800.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g10, PNomAlt = 760.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g10_INITparams.RaPu, XlPu = g10_INITparams.XlPu, XdPu = g10_INITparams.XdPu, XpdPu = g10_INITparams.XpdPu, XppdPu = g10_INITparams.XppdPu, XqPu = g10_INITparams.XqPu, XppqPu = g10_INITparams.XppqPu, Tpd0 = g10_INITparams.Tpd0, Tppd0 = g10_INITparams.Tppd0, Tppq0 = g10_INITparams.Tppq0, MdPuEfd = g10_INITparams.MdPuEfd, UseApproximation = g10_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g02_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 600.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g02, md = 0.1, PNomTurb = 570.0, UNomHV = 15, SNom = 600.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g02, PNomAlt = 570.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g02_INITparams.RaPu, XlPu = g02_INITparams.XlPu, XdPu = g02_INITparams.XdPu, XpdPu = g02_INITparams.XpdPu, XppdPu = g02_INITparams.XppdPu, XqPu = g02_INITparams.XqPu, XppqPu = g02_INITparams.XppqPu, Tpd0 = g02_INITparams.Tpd0, Tppd0 = g02_INITparams.Tppd0, Tppq0 = g02_INITparams.Tppq0, MdPuEfd = g02_INITparams.MdPuEfd, UseApproximation = g02_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g20_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 4500.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g20, md = 0.1, PNomTurb = 4275.0, UNomHV = 15, SNom = 4500.0, RTfPu = 0, UBaseHV = 15, PNomAlt = 4275.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g20_INITparams.RaPu, XlPu = g20_INITparams.XlPu, XdPu = g20_INITparams.XdPu, XpdPu = g20_INITparams.XpdPu, XppdPu = g20_INITparams.XppdPu, XqPu = g20_INITparams.XqPu, XppqPu = g20_INITparams.XppqPu, Tpd0 = g20_INITparams.Tpd0, Tppd0 = g20_INITparams.Tppd0, Tppq0 = g20_INITparams.Tppq0, MdPuEfd = g20_INITparams.MdPuEfd, UseApproximation = g20_INITparams.UseApproximation, UPhase0 = UPhase0_g20, P0Pu(fixed = false), Q0Pu(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g18_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 1200.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g18, md = 0.1, PNomTurb = 1080.0, UNomHV = 15, SNom = 1200.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g18, PNomAlt = 1080.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g18_INITparams.RaPu, XlPu = g18_INITparams.XlPu, XdPu = g18_INITparams.XdPu, XpdPu = g18_INITparams.XpdPu, XppdPu = g18_INITparams.XppdPu, XqPu = g18_INITparams.XqPu, XpqPu = g18_INITparams.XpqPu, XppqPu = g18_INITparams.XppqPu, Tpd0 = g18_INITparams.Tpd0, Tpq0 = g18_INITparams.Tpq0, Tppd0 = g18_INITparams.Tppd0, Tppq0 = g18_INITparams.Tppq0, MdPuEfd = g18_INITparams.MdPuEfd, UseApproximation = g18_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g04_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 600.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g04, md = 0.1, PNomTurb = 570.0, UNomHV = 15, SNom = 600.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g04, PNomAlt = 570.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g04_INITparams.RaPu, XlPu = g04_INITparams.XlPu, XdPu = g04_INITparams.XdPu, XpdPu = g04_INITparams.XpdPu, XppdPu = g04_INITparams.XppdPu, XqPu = g04_INITparams.XqPu, XppqPu = g04_INITparams.XppqPu, Tpd0 = g04_INITparams.Tpd0, Tppd0 = g04_INITparams.Tppd0, Tppq0 = g04_INITparams.Tppq0, MdPuEfd = g04_INITparams.MdPuEfd, UseApproximation = g04_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g15_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 1200.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g15, md = 0.1, PNomTurb = 1080.0, UNomHV = 15, SNom = 1200.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g15, PNomAlt = 1080.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g15_INITparams.RaPu, XlPu = g15_INITparams.XlPu, XdPu = g15_INITparams.XdPu, XpdPu = g15_INITparams.XpdPu, XppdPu = g15_INITparams.XppdPu, XqPu = g15_INITparams.XqPu, XpqPu = g15_INITparams.XpqPu, XppqPu = g15_INITparams.XppqPu, Tpd0 = g15_INITparams.Tpd0, Tpq0 = g15_INITparams.Tpq0, Tppd0 = g15_INITparams.Tppd0, Tppq0 = g15_INITparams.Tppq0, MdPuEfd = g15_INITparams.MdPuEfd, UseApproximation = g15_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g13_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 300.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g13, md = 0.1, PNomTurb = 285.0, UNomHV = 15, SNom = 300.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g13, PNomAlt = 285.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 2.0, nq = 6.0257, RaPu = g13_INITparams.RaPu, XlPu = g13_INITparams.XlPu, XdPu = g13_INITparams.XdPu, XpdPu = g13_INITparams.XpdPu, XppdPu = g13_INITparams.XppdPu, XqPu = g13_INITparams.XqPu, XppqPu = g13_INITparams.XppqPu, Tpd0 = g13_INITparams.Tpd0, Tppd0 = g13_INITparams.Tppd0, Tppq0 = g13_INITparams.Tppq0, MdPuEfd = g13_INITparams.MdPuEfd, UseApproximation = g13_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g07_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 200.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g07, md = 0.1, PNomTurb = 180.0, UNomHV = 15, SNom = 200.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g07, PNomAlt = 180.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g07_INITparams.RaPu, XlPu = g07_INITparams.XlPu, XdPu = g07_INITparams.XdPu, XpdPu = g07_INITparams.XpdPu, XppdPu = g07_INITparams.XppdPu, XqPu = g07_INITparams.XqPu, XpqPu = g07_INITparams.XpqPu, XppqPu = g07_INITparams.XppqPu, Tpd0 = g07_INITparams.Tpd0, Tpq0 = g07_INITparams.Tpq0, Tppd0 = g07_INITparams.Tppd0, Tppq0 = g07_INITparams.Tppq0, MdPuEfd = g07_INITparams.MdPuEfd, UseApproximation = g07_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt4W_INIT g17_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 600.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g17, md = 0.1, PNomTurb = 540.0, UNomHV = 15, SNom = 600.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g17, PNomAlt = 540.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 6.0, nq = 6.0257, RaPu = g17_INITparams.RaPu, XlPu = g17_INITparams.XlPu, XdPu = g17_INITparams.XdPu, XpdPu = g17_INITparams.XpdPu, XppdPu = g17_INITparams.XppdPu, XqPu = g17_INITparams.XqPu, XpqPu = g17_INITparams.XpqPu, XppqPu = g17_INITparams.XppqPu, Tpd0 = g17_INITparams.Tpd0, Tpq0 = g17_INITparams.Tpq0, Tppd0 = g17_INITparams.Tppd0, Tppq0 = g17_INITparams.Tppq0, MdPuEfd = g17_INITparams.MdPuEfd, UseApproximation = g17_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g01_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 800.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g01, md = 0.1, PNomTurb = 760.0, UNomHV = 15, SNom = 800.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g01, PNomAlt = 760.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g01_INITparams.RaPu, XlPu = g01_INITparams.XlPu, XdPu = g01_INITparams.XdPu, XpdPu = g01_INITparams.XpdPu, XppdPu = g01_INITparams.XppdPu, XqPu = g01_INITparams.XqPu, XppqPu = g01_INITparams.XppqPu, Tpd0 = g01_INITparams.Tpd0, Tppd0 = g01_INITparams.Tppd0, Tppq0 = g01_INITparams.Tppq0, MdPuEfd = g01_INITparams.MdPuEfd, UseApproximation = g01_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronousExt3W_INIT g19_INIT(UNomLV = 15, nd = 6.0257, SnTfo = 500.0, DPu = 0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, U0Pu = U0Pu_g19, md = 0.1, PNomTurb = 475.0, UNomHV = 15, SNom = 500.0, RTfPu = 0, UBaseHV = 15, P0Pu = P0Pu_g19, PNomAlt = 475.0, UNom = 15, XTfPu = 0, mq = 0.1, UBaseLV = 15, H = 3.0, nq = 6.0257, RaPu = g19_INITparams.RaPu, XlPu = g19_INITparams.XlPu, XdPu = g19_INITparams.XdPu, XpdPu = g19_INITparams.XpdPu, XppdPu = g19_INITparams.XppdPu, XqPu = g19_INITparams.XqPu, XppqPu = g19_INITparams.XppqPu, Tpd0 = g19_INITparams.Tpd0, Tppd0 = g19_INITparams.Tppd0, Tppq0 = g19_INITparams.Tppq0, MdPuEfd = g19_INITparams.MdPuEfd, UseApproximation = g19_INITparams.UseApproximation, Q0Pu(fixed = false), UPhase0(fixed = false));
initial equation
  g11_INIT.Q0Pu = -(g11.QGenPu);
  g11_INIT.UPhase0 = g11.UPhase;
  g05_INIT.Q0Pu = -(g05.QGenPu);
  g05_INIT.UPhase0 = g05.UPhase;
  g16_INIT.Q0Pu = -(g16.QGenPu);
  g16_INIT.UPhase0 = g16.UPhase;
  g14_INIT.Q0Pu = -(g14.QGenPu);
  g14_INIT.UPhase0 = g14.UPhase;
  g06_INIT.Q0Pu = -(g06.QGenPu);
  g06_INIT.UPhase0 = g06.UPhase;
  g08_INIT.Q0Pu = -(g08.QGenPu);
  g08_INIT.UPhase0 = g08.UPhase;
  g12_INIT.Q0Pu = -(g12.QGenPu);
  g12_INIT.UPhase0 = g12.UPhase;
  g09_INIT.Q0Pu = -(g09.QGenPu);
  g09_INIT.UPhase0 = g09.UPhase;
  g03_INIT.Q0Pu = -(g03.QGenPu);
  g03_INIT.UPhase0 = g03.UPhase;
  g10_INIT.Q0Pu = -(g10.QGenPu);
  g10_INIT.UPhase0 = g10.UPhase;
  g02_INIT.Q0Pu = -(g02.QGenPu);
  g02_INIT.UPhase0 = g02.UPhase;
  g20_INIT.P0Pu = Modelica.ComplexMath.real(g20.terminal.V*Modelica.ComplexMath.conj(g20.terminal.i));
  g20_INIT.Q0Pu = Modelica.ComplexMath.imag(g20.terminal.V*Modelica.ComplexMath.conj(g20.terminal.i));
  g18_INIT.Q0Pu = -(g18.QGenPu);
  g18_INIT.UPhase0 = g18.UPhase;
  g04_INIT.Q0Pu = -(g04.QGenPu);
  g04_INIT.UPhase0 = g04.UPhase;
  g15_INIT.Q0Pu = -(g15.QGenPu);
  g15_INIT.UPhase0 = g15.UPhase;
  g13_INIT.Q0Pu = -(g13.QGenPu);
  g13_INIT.UPhase0 = g13.UPhase;
  g07_INIT.Q0Pu = -(g07.QGenPu);
  g07_INIT.UPhase0 = g07.UPhase;
  g17_INIT.Q0Pu = -(g17.QGenPu);
  g17_INIT.UPhase0 = g17.UPhase;
  g01_INIT.Q0Pu = -(g01.QGenPu);
  g01_INIT.UPhase0 = g01.UPhase;
  g19_INIT.Q0Pu = -(g19.QGenPu);
  g19_INIT.UPhase0 = g19.UPhase;
equation
  g01.switchOffSignal1 = false;
  g01.switchOffSignal2 = false;
  g01.switchOffSignal3 = false;
  g02.switchOffSignal1 = false;
  g02.switchOffSignal2 = false;
  g02.switchOffSignal3 = false;
  g03.switchOffSignal1 = false;
  g03.switchOffSignal2 = false;
  g03.switchOffSignal3 = false;
  g04.switchOffSignal1 = false;
  g04.switchOffSignal2 = false;
  g04.switchOffSignal3 = false;
  g05.switchOffSignal1 = false;
  g05.switchOffSignal2 = false;
  g05.switchOffSignal3 = false;
  g06.switchOffSignal1 = false;
  g06.switchOffSignal2 = false;
  g06.switchOffSignal3 = false;
  g07.switchOffSignal1 = false;
  g07.switchOffSignal2 = false;
  g07.switchOffSignal3 = false;
  g08.switchOffSignal1 = false;
  g08.switchOffSignal2 = false;
  g08.switchOffSignal3 = false;
  g09.switchOffSignal1 = false;
  g09.switchOffSignal2 = false;
  g09.switchOffSignal3 = false;
  g10.switchOffSignal1 = false;
  g10.switchOffSignal2 = false;
  g10.switchOffSignal3 = false;
  g11.switchOffSignal1 = false;
  g11.switchOffSignal2 = false;
  g11.switchOffSignal3 = false;
  g12.switchOffSignal1 = false;
  g12.switchOffSignal2 = false;
  g12.switchOffSignal3 = false;
  g13.switchOffSignal1 = false;
  g13.switchOffSignal2 = false;
  g13.switchOffSignal3 = false;
  g14.switchOffSignal1 = false;
  g14.switchOffSignal2 = false;
  g14.switchOffSignal3 = false;
  g15.switchOffSignal1 = false;
  g15.switchOffSignal2 = false;
  g15.switchOffSignal3 = false;
  g16.switchOffSignal1 = false;
  g16.switchOffSignal2 = false;
  g16.switchOffSignal3 = false;
  g17.switchOffSignal1 = false;
  g17.switchOffSignal2 = false;
  g17.switchOffSignal3 = false;
  g18.switchOffSignal1 = false;
  g18.switchOffSignal2 = false;
  g18.switchOffSignal3 = false;
  g19.switchOffSignal1 = false;
  g19.switchOffSignal2 = false;
  g19.switchOffSignal3 = false;
  trafo_1_1041.switchOffSignal1 = false;
  trafo_1_1041.switchOffSignal2 = false;
  trafo_2_1042.switchOffSignal1 = false;
  trafo_2_1042.switchOffSignal2 = false;
  trafo_3_1043.switchOffSignal1 = false;
  trafo_3_1043.switchOffSignal2 = false;
  trafo_4_1044.switchOffSignal1 = false;
  trafo_4_1044.switchOffSignal2 = false;
  trafo_5_1045.switchOffSignal1 = false;
  trafo_5_1045.switchOffSignal2 = false;
  trafo_11_1011.switchOffSignal1 = false;
  trafo_11_1011.switchOffSignal2 = false;
  trafo_12_1012.switchOffSignal1 = false;
  trafo_12_1012.switchOffSignal2 = false;
  trafo_13_1013.switchOffSignal1 = false;
  trafo_13_1013.switchOffSignal2 = false;
  trafo_22_1022.switchOffSignal1 = false;
  trafo_22_1022.switchOffSignal2 = false;
  trafo_31_2031.switchOffSignal1 = false;
  trafo_31_2031.switchOffSignal2 = false;
  trafo_32_2032.switchOffSignal1 = false;
  trafo_32_2032.switchOffSignal2 = false;
  trafo_41_4041.switchOffSignal1 = false;
  trafo_41_4041.switchOffSignal2 = false;
  trafo_42_4042.switchOffSignal1 = false;
  trafo_42_4042.switchOffSignal2 = false;
  trafo_43_4043.switchOffSignal1 = false;
  trafo_43_4043.switchOffSignal2 = false;
  trafo_46_4046.switchOffSignal1 = false;
  trafo_46_4046.switchOffSignal2 = false;
  trafo_47_4047.switchOffSignal1 = false;
  trafo_47_4047.switchOffSignal2 = false;
  trafo_51_4051.switchOffSignal1 = false;
  trafo_51_4051.switchOffSignal2 = false;
  trafo_61_4061.switchOffSignal1 = false;
  trafo_61_4061.switchOffSignal2 = false;
  trafo_62_4062.switchOffSignal1 = false;
  trafo_62_4062.switchOffSignal2 = false;
  trafo_63_4063.switchOffSignal1 = false;
  trafo_63_4063.switchOffSignal2 = false;
  trafo_71_4071.switchOffSignal1 = false;
  trafo_71_4071.switchOffSignal2 = false;
  trafo_72_4072.switchOffSignal1 = false;
  trafo_72_4072.switchOffSignal2 = false;
  trafo_g1_1012.switchOffSignal1 = false;
  trafo_g1_1012.switchOffSignal2 = false;
  trafo_g2_1013.switchOffSignal1 = false;
  trafo_g2_1013.switchOffSignal2 = false;
  trafo_g3_1014.switchOffSignal1 = false;
  trafo_g3_1014.switchOffSignal2 = false;
  trafo_g4_1021.switchOffSignal1 = false;
  trafo_g4_1021.switchOffSignal2 = false;
  trafo_g5_1022.switchOffSignal1 = false;
  trafo_g5_1022.switchOffSignal2 = false;
  trafo_g6_1042.switchOffSignal1 = false;
  trafo_g6_1042.switchOffSignal2 = false;
  trafo_g7_1043.switchOffSignal1 = false;
  trafo_g7_1043.switchOffSignal2 = false;
  trafo_g8_2032.switchOffSignal1 = false;
  trafo_g8_2032.switchOffSignal2 = false;
  trafo_g9_4011.switchOffSignal1 = false;
  trafo_g9_4011.switchOffSignal2 = false;
  trafo_g10_4012.switchOffSignal1 = false;
  trafo_g10_4012.switchOffSignal2 = false;
  trafo_g11_4021.switchOffSignal1 = false;
  trafo_g11_4021.switchOffSignal2 = false;
  trafo_g12_4031.switchOffSignal1 = false;
  trafo_g12_4031.switchOffSignal2 = false;
  trafo_g13_4041.switchOffSignal1 = false;
  trafo_g13_4041.switchOffSignal2 = false;
  trafo_g14_4042.switchOffSignal1 = false;
  trafo_g14_4042.switchOffSignal2 = false;
  trafo_g15_4047.switchOffSignal1 = false;
  trafo_g15_4047.switchOffSignal2 = false;
  trafo_g16_4051.switchOffSignal1 = false;
  trafo_g16_4051.switchOffSignal2 = false;
  trafo_g17_4062.switchOffSignal1 = false;
  trafo_g17_4062.switchOffSignal2 = false;
  trafo_g18_4063.switchOffSignal1 = false;
  trafo_g18_4063.switchOffSignal2 = false;
  trafo_g19_4071.switchOffSignal1 = false;
  trafo_g19_4071.switchOffSignal2 = false;
  trafo_g20_4072.switchOffSignal1 = false;
  trafo_g20_4072.switchOffSignal2 = false;
  trafo_1011_4011.switchOffSignal1 = false;
  trafo_1011_4011.switchOffSignal2 = false;
  trafo_1012_4012.switchOffSignal1 = false;
  trafo_1012_4012.switchOffSignal2 = false;
  trafo_1022_4022.switchOffSignal1 = false;
  trafo_1022_4022.switchOffSignal2 = false;
  trafo_1044_4044a.switchOffSignal1 = false;
  trafo_1044_4044a.switchOffSignal2 = false;
  trafo_1044_4044b.switchOffSignal1 = false;
  trafo_1044_4044b.switchOffSignal2 = false;
  trafo_1045_4045a.switchOffSignal1 = false;
  trafo_1045_4045a.switchOffSignal2 = false;
  trafo_1045_4045b.switchOffSignal1 = false;
  trafo_1045_4045b.switchOffSignal2 = false;
  trafo_2031_4031.switchOffSignal1 = false;
  trafo_2031_4031.switchOffSignal2 = false;
  connect(g20.terminal, bus_BG20.terminal) annotation(
    Line(points = {{-75, 60}, {-75, 65}}, color = {0, 0, 255}));
  connect(trafo_1_1041.terminal2, bus_1041.terminal) annotation(
    Line(points = {{-55, -92}, {-55, -90}, {-60, -90}}, color = {0, 0, 255}));
  connect(trafo_1_1041.terminal1, bus_B01.terminal) annotation(
    Line(points = {{-55, -102}, {-55, -105}}, color = {0, 0, 255}));
  connect(trafo_2_1042.terminal2, bus_1042.terminal) annotation(
    Line(points = {{35, -82}, {35, -80}, {30, -80}}, color = {0, 0, 255}));
  connect(trafo_2_1042.terminal1, bus_B02.terminal) annotation(
    Line(points = {{35, -92}, {35, -95}}, color = {0, 0, 255}));
  connect(trafo_3_1043.terminal1, bus_B03.terminal) annotation(
    Line(points = {{-65, -48}, {-65, -45}}, color = {0, 0, 255}));
  connect(trafo_3_1043.terminal2, bus_1043.terminal) annotation(
    Line(points = {{-65, -58}, {-65, -60}, {-60, -60}}, color = {0, 0, 255}));
  connect(trafo_4_1044.terminal1, bus_B04.terminal) annotation(
    Line(points = {{-25, -48}, {-25, -45}}, color = {0, 0, 255}));
  connect(trafo_4_1044.terminal2, bus_1044.terminal) annotation(
    Line(points = {{-25, -58}, {-25, -60}, {-20, -60}}, color = {0, 0, 255}));
  connect(trafo_5_1045.terminal1, bus_B05.terminal) annotation(
    Line(points = {{-25, -102}, {-25, -105}}, color = {0, 0, 255}));
  connect(trafo_5_1045.terminal2, bus_1045.terminal) annotation(
    Line(points = {{-25, -92}, {-25, -90}, {-17, -90}}, color = {0, 0, 255}));
  connect(trafo_11_1011.terminal1, bus_B11.terminal) annotation(
    Line(points = {{21, 118}, {21, 115}}, color = {0, 0, 255}));
  connect(trafo_11_1011.terminal2, bus_1011.terminal) annotation(
    Line(points = {{21, 128}, {21, 130}, {30, 130}}, color = {0, 0, 255}));
  connect(trafo_12_1012.terminal1, bus_B12.terminal) annotation(
    Line(points = {{39, 113}, {39, 115}}, color = {0, 0, 255}));
  connect(trafo_12_1012.terminal2, bus_1012.terminal) annotation(
    Line(points = {{39, 103}, {39, 100}, {30, 100}}, color = {0, 0, 255}));
  connect(trafo_13_1013.terminal1, bus_B13.terminal) annotation(
    Line(points = {{85, 118}, {85, 115}}, color = {0, 0, 255}));
  connect(trafo_13_1013.terminal2, bus_1013.terminal) annotation(
    Line(points = {{85, 128}, {85, 130}, {80, 130}}, color = {0, 0, 255}));
  connect(trafo_22_1022.terminal2, bus_1022.terminal) annotation(
    Line(points = {{-40, 48}, {-40, 50}}, color = {0, 0, 255}));
  connect(trafo_22_1022.terminal1, bus_B22.terminal) annotation(
    Line(points = {{-40, 38}, {-40, 35}}, color = {0, 0, 255}));
  connect(trafo_31_2031.terminal1, bus_B31.terminal) annotation(
    Line(points = {{-35, 7}, {-35, 5}}, color = {0, 0, 255}));
  connect(trafo_31_2031.terminal2, bus_2031.terminal) annotation(
    Line(points = {{-35, 17}, {-35, 20}, {-40, 20}}, color = {0, 0, 255}));
  connect(trafo_32_2032.terminal1, bus_B32.terminal) annotation(
    Line(points = {{-89, 8}, {-89, 5}}, color = {0, 0, 255}));
  connect(trafo_32_2032.terminal2, bus_2032.terminal) annotation(
    Line(points = {{-89, 18}, {-89, 21}, {-80, 21}}, color = {0, 0, 255}));
  connect(trafo_41_4041.terminal2, bus_4041.terminal) annotation(
    Line(points = {{-81, -12}, {-81, -10}, {-78, -10}}, color = {0, 0, 255}));
  connect(trafo_41_4041.terminal1, bus_B41.terminal) annotation(
    Line(points = {{-81, -22}, {-81, -25}}, color = {0, 0, 255}));
  connect(trafo_42_4042.terminal1, bus_B42.terminal) annotation(
    Line(points = {{55, 3}, {55, 5}}, color = {0, 0, 255}));
  connect(trafo_42_4042.terminal2, bus_4042.terminal) annotation(
    Line(points = {{55, -7}, {55, -10}, {50, -10}}, color = {0, 0, 255}));
  connect(trafo_43_4043.terminal1, bus_B43.terminal) annotation(
    Line(points = {{25, -42}, {25, -45}}, color = {0, 0, 255}));
  connect(trafo_43_4043.terminal2, bus_4043.terminal) annotation(
    Line(points = {{25, -32}, {25, -30}, {30, -30}}, color = {0, 0, 255}));
  connect(trafo_46_4046.terminal1, bus_B46.terminal) annotation(
    Line(points = {{71, -43}, {71, -45}}, color = {0, 0, 255}));
  connect(trafo_46_4046.terminal2, bus_4046.terminal) annotation(
    Line(points = {{71, -33}, {71, -30}, {70, -30}}, color = {0, 0, 255}));
  connect(trafo_47_4047.terminal1, bus_B47.terminal) annotation(
    Line(points = {{61, -98}, {61, -95}}, color = {0, 0, 255}));
  connect(trafo_47_4047.terminal2, bus_4047.terminal) annotation(
    Line(points = {{61, -108}, {61, -110}, {70, -110}}, color = {0, 0, 255}));
  connect(trafo_51_4051.terminal1, bus_B51.terminal) annotation(
    Line(points = {{35, -118}, {35, -115}}, color = {0, 0, 255}));
  connect(trafo_51_4051.terminal2, bus_4051.terminal) annotation(
    Line(points = {{35, -128}, {35, -130}, {14, -130}}, color = {0, 0, 255}));
  connect(trafo_61_4061.terminal2, bus_4061.terminal) annotation(
    Line(points = {{-95, -53}, {-95, -50}, {-92, -50}}, color = {0, 0, 255}));
  connect(trafo_61_4061.terminal1, bus_B61.terminal) annotation(
    Line(points = {{-95, -63}, {-95, -65}}, color = {0, 0, 255}));
  connect(trafo_62_4062.terminal1, bus_B62.terminal) annotation(
    Line(points = {{-100, -97}, {-100, -95}}, color = {0, 0, 255}));
  connect(trafo_62_4062.terminal2, bus_4062.terminal) annotation(
    Line(points = {{-100, -107}, {-100, -110}, {-87, -110}}, color = {0, 0, 255}));
  connect(trafo_63_4063.terminal1, bus_B63.terminal) annotation(
    Line(points = {{-80, -142}, {-80, -145}}, color = {0, 0, 255}));
  connect(trafo_63_4063.terminal2, bus_4063.terminal) annotation(
    Line(points = {{-80, -132}, {-80, -130}, {-87, -130}}, color = {0, 0, 255}));
  connect(trafo_71_4071.terminal2, bus_4071.terminal) annotation(
    Line(points = {{-95, 128}, {-95, 130}, {-80, 130}}, color = {0, 0, 255}));
  connect(trafo_71_4071.terminal1, bus_B71.terminal) annotation(
    Line(points = {{-95, 118}, {-95, 115}}, color = {0, 0, 255}));
  connect(trafo_72_4072.terminal1, bus_B72.terminal) annotation(
    Line(points = {{-88, 68}, {-88, 65}}, color = {0, 0, 255}));
  connect(trafo_72_4072.terminal2, bus_4072.terminal) annotation(
    Line(points = {{-88, 78}, {-88, 81}, {-82, 81}}, color = {0, 0, 255}));
  connect(trafo_1011_4011.terminal1, bus_1011.terminal) annotation(
    Line(points = {{5, 125}, {16, 125}, {16, 130}, {30, 130}}, color = {0, 0, 255}));
  connect(trafo_1011_4011.terminal2, bus_4011.terminal) annotation(
    Line(points = {{-5, 125}, {-17, 125}, {-17, 130}, {-30, 130}}, color = {0, 0, 255}));
  connect(trafo_1012_4012.terminal1, bus_1012.terminal) annotation(
    Line(points = {{3, 96}, {17, 96}, {17, 100}, {30, 100}}, color = {0, 0, 255}));
  connect(trafo_1012_4012.terminal2, bus_4012.terminal) annotation(
    Line(points = {{-7, 96}, {-13, 96}, {-13, 100}, {-30, 100}}, color = {0, 0, 255}));
  connect(trafo_1022_4022.terminal1, bus_1022.terminal) annotation(
    Line(points = {{-30, 43}, {-30, 50}, {-40, 50}}, color = {0, 0, 255}));
  connect(trafo_1022_4022.terminal2, bus_4022.terminal) annotation(
    Line(points = {{-20, 43}, {-20, 49}, {-10, 49}}, color = {0, 0, 255}));
  connect(trafo_1044_4044b.terminal1, bus_1044.terminal) annotation(
    Line(points = {{-8, -50}, {-8, -60}, {-20, -60}}, color = {0, 0, 255}));
  connect(trafo_1044_4044a.terminal1, bus_1044.terminal) annotation(
    Line(points = {{-15, -50}, {-14, -50}, {-14, -60}, {-20, -60}}, color = {0, 0, 255}));
  connect(trafo_1044_4044b.terminal2, bus_4044.terminal) annotation(
    Line(points = {{-8, -40}, {-8, -30}, {-6, -30}}, color = {0, 0, 255}));
  connect(trafo_1044_4044a.terminal2, bus_4044.terminal) annotation(
    Line(points = {{-15, -40}, {-15, -30}, {-6, -30}}, color = {0, 0, 255}));
  connect(trafo_1045_4045b.terminal1, bus_1045.terminal) annotation(
    Line(points = {{-8, -95}, {-8, -90}, {-17, -90}}, color = {0, 0, 255}));
  connect(trafo_1045_4045a.terminal1, bus_1045.terminal) annotation(
    Line(points = {{-14, -95}, {-14, -90}, {-17, -90}}, color = {0, 0, 255}));
  connect(trafo_1045_4045b.terminal2, bus_4045.terminal) annotation(
    Line(points = {{-8, -105}, {-8, -110}, {0, -110}}, color = {0, 0, 255}));
  connect(trafo_1045_4045a.terminal2, bus_4045.terminal) annotation(
    Line(points = {{-14, -105}, {-14, -110}, {0, -110}}, color = {0, 0, 255}));
  connect(trafo_2031_4031.terminal1, bus_2031.terminal) annotation(
    Line(points = {{-31, 28}, {-31, 20}, {-40, 20}}, color = {0, 0, 255}));
  connect(trafo_2031_4031.terminal2, bus_4031.terminal) annotation(
    Line(points = {{-21, 28}, {-21, 21}, {-13, 21}}, color = {0, 0, 255}));
  connect(trafo_g1_1012.terminal2, bus_1012.terminal) annotation(
    Line(points = {{25, 98}, {25, 100}, {30, 100}}, color = {0, 0, 255}));
  connect(trafo_g1_1012.terminal1, bus_BG01.terminal) annotation(
    Line(points = {{25, 88}, {25, 85}}, color = {0, 0, 255}));
  connect(trafo_g2_1013.terminal2, bus_1013.terminal) annotation(
    Line(points = {{75, 133}, {75, 130}, {80, 130}}, color = {0, 0, 255}));
  connect(trafo_g2_1013.terminal1, bus_BG02.terminal) annotation(
    Line(points = {{75, 143}, {75, 145}}, color = {0, 0, 255}));
  connect(trafo_g3_1014.terminal1, bus_BG03.terminal) annotation(
    Line(points = {{85, 88}, {85, 85}}, color = {0, 0, 255}));
  connect(trafo_g3_1014.terminal2, bus_1014.terminal) annotation(
    Line(points = {{85, 98}, {85, 100}, {80, 100}}, color = {0, 0, 255}));
  connect(trafo_g4_1021.terminal1, bus_BG04.terminal) annotation(
    Line(points = {{-85, 38}, {-85, 35}}, color = {0, 0, 255}));
  connect(trafo_g4_1021.terminal2, bus_1021.terminal) annotation(
    Line(points = {{-85, 48}, {-85, 50}, {-80, 50}}, color = {0, 0, 255}));
  connect(trafo_g5_1022.terminal1, bus_BG05.terminal) annotation(
    Line(points = {{-45, 62}, {-45, 65}}, color = {0, 0, 255}));
  connect(trafo_g5_1022.terminal2, bus_1022.terminal) annotation(
    Line(points = {{-45, 52}, {-45, 50}, {-40, 50}}, color = {0, 0, 255}));
  connect(trafo_g6_1042.terminal1, bus_BG06.terminal) annotation(
    Line(points = {{35, -67}, {35, -65}}, color = {0, 0, 255}));
  connect(trafo_g6_1042.terminal2, bus_1042.terminal) annotation(
    Line(points = {{35, -77}, {35, -80}, {30, -80}}, color = {0, 0, 255}));
  connect(trafo_g7_1043.terminal1, bus_BG07.terminal) annotation(
    Line(points = {{-53, -48}, {-53, -45}}, color = {0, 0, 255}));
  connect(trafo_g7_1043.terminal2, bus_1043.terminal) annotation(
    Line(points = {{-53, -58}, {-53, -60}, {-60, -60}}, color = {0, 0, 255}));
  connect(trafo_g8_2032.terminal1, bus_BG08.terminal) annotation(
    Line(points = {{-77, 8}, {-77, 5}}, color = {0, 0, 255}));
  connect(trafo_g8_2032.terminal2, bus_2032.terminal) annotation(
    Line(points = {{-77, 18}, {-77, 21}, {-80, 21}}, color = {0, 0, 255}));
  connect(trafo_g9_4011.terminal1, bus_BG09.terminal) annotation(
    Line(points = {{-25, 143}, {-25, 145}}, color = {0, 0, 255}));
  connect(trafo_g9_4011.terminal2, bus_4011.terminal) annotation(
    Line(points = {{-25, 133}, {-25, 130}, {-30, 130}}, color = {0, 0, 255}));
  connect(trafo_g10_4012.terminal1, bus_BG10.terminal) annotation(
    Line(points = {{-35, 88}, {-35, 85}}, color = {0, 0, 255}));
  connect(trafo_g10_4012.terminal2, bus_4012.terminal) annotation(
    Line(points = {{-35, 98}, {-35, 100}, {-30, 100}}, color = {0, 0, 255}));
  connect(trafo_g11_4021.terminal1, bus_BG11.terminal) annotation(
    Line(points = {{35, 65}, {35, 63}}, color = {0, 0, 255}));
  connect(trafo_g11_4021.terminal2, bus_4021.terminal) annotation(
    Line(points = {{35, 53}, {35, 50}, {30, 50}}, color = {0, 0, 255}));
  connect(trafo_g12_4031.terminal1, bus_BG12.terminal) annotation(
    Line(points = {{-4, 33}, {-4, 35}}, color = {0, 0, 255}));
  connect(trafo_g12_4031.terminal2, bus_4031.terminal) annotation(
    Line(points = {{-4, 23}, {-4, 21}, {-13, 21}}, color = {0, 0, 255}));
  connect(trafo_g13_4041.terminal2, bus_4041.terminal) annotation(
    Line(points = {{-70, -12}, {-70, -10}, {-78, -10}}, color = {0, 0, 255}));
  connect(trafo_g13_4041.terminal1, bus_BG13.terminal) annotation(
    Line(points = {{-70, -22}, {-70, -25}}, color = {0, 0, 255}));
  connect(trafo_g15_4047.terminal1, bus_BG15.terminal) annotation(
    Line(points = {{80, -98}, {80, -95}}, color = {0, 0, 255}));
  connect(trafo_g15_4047.terminal2, bus_4047.terminal) annotation(
    Line(points = {{80, -108}, {80, -110}, {70, -110}}, color = {0, 0, 255}));
  connect(trafo_g16_4051.terminal1, bus_BG16.terminal) annotation(
    Line(points = {{20, -118}, {20, -115}}, color = {0, 0, 255}));
  connect(trafo_g16_4051.terminal2, bus_4051.terminal) annotation(
    Line(points = {{20, -128}, {20, -130}, {14, -130}}, color = {0, 0, 255}));
  connect(trafo_g14_4042.terminal1, bus_BG14.terminal) annotation(
    Line(points = {{50, -22}, {50, -25}}, color = {0, 0, 255}));
  connect(trafo_g14_4042.terminal2, bus_4042.terminal) annotation(
    Line(points = {{50, -12}, {50, -10}}, color = {0, 0, 255}));
  connect(trafo_g17_4062.terminal1, bus_BG17.terminal) annotation(
    Line(points = {{-78, -97}, {-78, -95}}, color = {0, 0, 255}));
  connect(trafo_g17_4062.terminal2, bus_4062.terminal) annotation(
    Line(points = {{-78, -107}, {-78, -110}, {-87, -110}}, color = {0, 0, 255}));
  connect(trafo_g18_4063.terminal1, bus_BG18.terminal) annotation(
    Line(points = {{-95, -142}, {-95, -145}}, color = {0, 0, 255}));
  connect(trafo_g18_4063.terminal2, bus_4063.terminal) annotation(
    Line(points = {{-95, -132}, {-95, -130}, {-87, -130}}, color = {0, 0, 255}));
  connect(trafo_g19_4071.terminal1, bus_BG19.terminal) annotation(
    Line(points = {{-75, 142}, {-75, 145}}, color = {0, 0, 255}));
  connect(trafo_g19_4071.terminal2, bus_4071.terminal) annotation(
    Line(points = {{-75, 132}, {-75, 130}, {-80, 130}}, color = {0, 0, 255}));
  connect(trafo_g20_4072.terminal1, bus_BG20.terminal) annotation(
    Line(points = {{-75, 68}, {-75, 65}}, color = {0, 0, 255}));
  connect(trafo_g20_4072.terminal2, bus_4072.terminal) annotation(
    Line(points = {{-75, 78}, {-75, 81}, {-82, 81}}, color = {0, 0, 255}));
  connect(g01.terminal, bus_BG01.terminal) annotation(
    Line(points = {{25, 79}, {25, 85}}, color = {0, 0, 255}));
  connect(g02.terminal, bus_BG02.terminal) annotation(
    Line(points = {{75, 151}, {75, 145}}, color = {0, 0, 255}));
  connect(g03.terminal, bus_BG03.terminal) annotation(
    Line(points = {{85, 79}, {85, 85}}, color = {0, 0, 255}));
  connect(g04.terminal, bus_BG04.terminal) annotation(
    Line(points = {{-85, 30}, {-85, 35}}, color = {0, 0, 255}));
  connect(g05.terminal, bus_BG05.terminal) annotation(
    Line(points = {{-45, 71}, {-45, 65}}, color = {0, 0, 255}));
  connect(g06.terminal, bus_BG06.terminal) annotation(
    Line(points = {{35, -60}, {35, -65}}, color = {0, 0, 255}));
  connect(g07.terminal, bus_BG07.terminal) annotation(
    Line(points = {{-53, -39}, {-53, -45}}, color = {0, 0, 255}));
  connect(g08.terminal, bus_BG08.terminal) annotation(
    Line(points = {{-77, 0}, {-77, 5}}, color = {0, 0, 255}));
  connect(g09.terminal, bus_BG09.terminal) annotation(
    Line(points = {{-25, 151}, {-25, 145}}, color = {0, 0, 255}));
  connect(g10.terminal, bus_BG10.terminal) annotation(
    Line(points = {{-35, 85}, {-35, 79}}, color = {0, 0, 255}));
  connect(g11.terminal, bus_BG11.terminal) annotation(
    Line(points = {{35, 72}, {35, 65}}, color = {0, 0, 255}));
  connect(g12.terminal, bus_BG12.terminal) annotation(
    Line(points = {{-4, 41}, {-4, 35}}, color = {0, 0, 255}));
  connect(g13.terminal, bus_BG13.terminal) annotation(
    Line(points = {{-70, -29}, {-70, -25}}, color = {0, 0, 255}));
  connect(g14.terminal, bus_BG14.terminal) annotation(
    Line(points = {{50, -30}, {50, -25}}, color = {0, 0, 255}));
  connect(g15.terminal, bus_BG15.terminal) annotation(
    Line(points = {{80, -89}, {80, -95}}, color = {0, 0, 255}));
  connect(g16.terminal, bus_BG16.terminal) annotation(
    Line(points = {{20, -109}, {20, -115}}, color = {0, 0, 255}));
  connect(g17.terminal, bus_BG17.terminal) annotation(
    Line(points = {{-78, -88}, {-78, -95}}, color = {0, 0, 255}));
  connect(g18.terminal, bus_BG18.terminal) annotation(
    Line(points = {{-95, -151}, {-95, -145}}, color = {0, 0, 255}));
  connect(g19.terminal, bus_BG19.terminal) annotation(
    Line(points = {{-75, 151}, {-75, 145}}, color = {0, 0, 255}));
  annotation(
    preferredView = "diagram",
    Diagram(graphics = {Line(origin = {1.18, 21.94}, points = {{-103.176, -26.9412}, {19.8235, -26.9412}, {103.824, 42.0588}}, pattern = LinePattern.Dash, thickness = 0.5), Line(origin = {-58.3, -98.4}, points = {{-44.7012, 54.3963}, {-25.7012, 54.3963}, {-13.7012, 42.3963}, {-13.7012, -9.60369}, {31.2988, -54.6037}}, pattern = LinePattern.Dash, thickness = 0.5), Line(origin = {-80.5, 104}, points = {{-22.5, -48}, {22.5, -48}, {22.5, 48}}, pattern = LinePattern.Dash, thickness = 0.5), Text(origin = {-55, -145}, extent = {{-15, 5}, {15, -5}}, textString = "SOUTH", textStyle = {TextStyle.Bold, TextStyle.Italic}), Text(origin = {-35, -25}, extent = {{-15, 5}, {15, -5}}, textString = "CENTRAL", textStyle = {TextStyle.Bold, TextStyle.Italic}), Text(origin = {5, 145}, extent = {{-15, 5}, {15, -5}}, textString = "NORTH", textStyle = {TextStyle.Bold, TextStyle.Italic}), Text(origin = {-100, 150}, extent = {{-15, 5}, {15, -5}}, textString = "EQUIV.", textStyle = {TextStyle.Bold, TextStyle.Italic})}),
    Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}})),
    Documentation(info = "<html><head></head><body><div>This model extends the network with alpha-beta loads model, it could also extend the network with PQ loads model.</div><div><br><div>This model implements the Nordic 32 test system presented in the IEEE Technical Report \"Test Systems for Voltage Stability Analysis and Security Assessment\" from August, 2015. It is a modified version of the so-called Nordic32 test system, which was first proposed by K. Walve.</div><div><br><div>The system consists of 74 buses, 32 at transmission, 22 at distribution and 20 at generator level. Synchronous generators and distribution transformers are regulated. The initial values have been taken from the report.</div><div><br></div><div>Its main purpose is to simulate and study long-term voltage instabilities.</div></div></div></body></html>"));
end FullDynamicModel_auxiliary;
