within MyNordic_initialized;

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
model FullDynamicModel_initialized "Nordic test grid with buses, lines, shunts, loads, transformers and generators"
  extends MyNordic_initialized.NetworkWithAlphaBetaLoads_initialized;
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
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g01(u0Pu = Complex(1.0673127125350454, 0.04818852208859734), LambdaQ10Pu = -0.2675117789506934, U0Pu = 1.0684, Mqs0Pu = 0.472660547938917, QStator0Pu = 0.5834252167708457, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2675120511117213, Q0Pu = -0.5834252121232768, Cos2Eta0 = 0.939227539393712, sStator0Pu = Complex(-5.999999999790165, -0.5834252167708457), Id0Pu = -0.302378861355843, RQ2PPu = 0.0, Ce0Pu = 0.7509948824625472, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.634788860100641, 0.29222275815766957), s0Pu = Complex(-6.0, -0.5834252121232768), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4198319346608161, RQ1PPu = 0.019257748114119334, P0Pu = -6.0, Mds0Pu = 0.8164136737126749, IStator0Pu = 5.6423611760365455, UPhase0 = 0.045118752854517157, MdSat0PPu = 0.8198319346608163, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.505896256234523, MdPPuEfd = 0.0, PNomTurb = 760.0, Lambdad0Pu = 1.0063031566772853, Lambdaf0Pu = 1.2288242513200174, UBaseHV = 15, PNomAlt = 760.0, LambdaAD0Pu = 1.0516599858806617, Ud0Pu = 0.3624854605787509, LambdaAirGap0Pu = 1.0851504151003737, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.5058962562345233, UBaseLV = 15, Cm0Pu = 0.7905209289079443, Uf0Pu = 0.0010714696061888873, uStator0Pu = Complex(1.0673127125350454, 0.04818852208859734), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.051659985880662, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.585153953931077, SNom = 800.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.23355700711212068, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6371877812649417, Uq0Pu = 1.0050287811147554, Theta0 = 0.3912688603394605, QGen0Pu = 0.5834252121232768, SnTfo = 800.0, Pm0Pu = 0.7905209289079443, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.634788860100641, 0.292222762512128), Lambdaq0Pu = -0.3630902183014626, Sin2Eta0 = 0.06077246060628828, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.2675117789506934, UStator0Pu = 1.0684, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3461501074849433, MrcPPu = 0.0, Mi0Pu = 0.795522950418301, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {25, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g02(u0Pu = Complex(1.0522905243087033, 0.09421731502284755), LambdaQ10Pu = -0.19478280679046292, U0Pu = 1.0565, Mqs0Pu = 0.48024975321856683, QStator0Pu = 0.17237478541886708, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.19478283107288585, Q0Pu = -0.1723747839963087, Cos2Eta0 = 0.9664798793252003, sStator0Pu = Complex(-2.9999999998726308, -0.17237478541886708), Id0Pu = -0.14381696720583723, RQ2PPu = 0.0, Ce0Pu = 0.5004494303756254, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.8428008367303077, -0.09072235830294242), s0Pu = Complex(-3.0, -0.1723747839963087), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4312226913333142, RQ1PPu = 0.019257748114119334, P0Pu = -3.0, Mds0Pu = 0.8295223010138884, IStator0Pu = 2.8442480804889887, UPhase0 = 0.08929734659090433, MdSat0PPu = 0.8312226913333144, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.3319910496514438, MdPPuEfd = 0.0, PNomTurb = 570.0, Lambdad0Pu = 1.0243374074559035, Lambdaf0Pu = 1.2026147819075372, UBaseHV = 15, PNomAlt = 570.0, LambdaAD0Pu = 1.0459099525367792, Ud0Pu = 0.2622500291679088, LambdaAirGap0Pu = 1.0638928423935636, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3319910496514438, UBaseLV = 15, Cm0Pu = 0.5267888740796056, Uf0Pu = 0.0009477332316276706, uStator0Pu = Complex(1.0522905243087033, 0.09421731502284755), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0459099525367792, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.402095841738362, SNom = 600.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.09200685383890414, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.45169888019623083, Uq0Pu = 1.023434009695511, Theta0 = 0.34014513166204347, QGen0Pu = 0.1723747839963087, SnTfo = 600.0, Pm0Pu = 0.5267888740796056, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.8428008367303077, -0.09072235695107395), Lambdaq0Pu = -0.26253766310232046, Sin2Eta0 = 0.033520120674799786, DPu = 0, PGen0Pu = 3.0, LambdaQ20Pu = -0.19478280679046292, UStator0Pu = 1.0565, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.25084778507113914, MrcPPu = 0.0, Mi0Pu = 0.8178146430633945, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g03(u0Pu = Complex(1.0425107842480816, 0.18897490501770295), LambdaQ10Pu = -0.29113200995162103, U0Pu = 1.0595, Mqs0Pu = 0.4777694743033152, QStator0Pu = 0.20915461170868022, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.29113237027132477, Q0Pu = -0.20915462307471666, Cos2Eta0 = 0.9261072102760194, sStator0Pu = Complex(-5.50000000206031, -0.20915461170868022), Id0Pu = -0.3007822924077187, RQ2PPu = 0.0, Ce0Pu = 0.7868157871933402, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.143097798403225, -0.7316584215725283), s0Pu = Complex(-5.5, -0.20915462307471666), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.42911986655805917, RQ1PPu = 0.019257748114119334, P0Pu = -5.5, Mds0Pu = 0.8252381828875446, IStator0Pu = 5.194880078091505, UPhase0 = 0.17932185686274285, MdSat0PPu = 0.8291198665580594, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.4666792303389762, MdPPuEfd = 0.0, PNomTurb = 665.0, Lambdad0Pu = 0.9855537533022315, Lambdaf0Pu = 1.2032215948503275, UBaseHV = 15, PNomAlt = 665.0, LambdaAD0Pu = 1.0306710971633892, Ud0Pu = 0.39229678040824767, LambdaAirGap0Pu = 1.0709999848495724, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.4666792303389762, UBaseLV = 15, Cm0Pu = 0.8282271444140423, Uf0Pu = 0.00104356605631403, uStator0Pu = Complex(1.0425107842480816, 0.18897490501770295), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0306710971633892, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.5438728740410275, SNom = 700.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.09569011952208806, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6784398314782553, Uq0Pu = 0.984196873639275, Theta0 = 0.5586171661490098, QGen0Pu = 0.20915462307471666, SnTfo = 700.0, Pm0Pu = 0.8282271444140423, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.143097798403225, -0.7316584324750883), Lambdaq0Pu = -0.3928983449930631, Sin2Eta0 = 0.07389278972398067, DPu = 0, PGen0Pu = 5.5, LambdaQ20Pu = -0.29113200995162103, UStator0Pu = 1.0595, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.379295309286267, MrcPPu = 0.0, Mi0Pu = 0.799562750668467, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {85, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g04(u0Pu = Complex(1.0237697719570154, 0.14437681263652), LambdaQ10Pu = -0.2610746694892609, U0Pu = 1.0339, Mqs0Pu = 0.48591349910863285, QStator0Pu = 0.3038986712613393, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.26107477882601954, Q0Pu = -0.30389866745966343, Cos2Eta0 = 0.9378227461717871, sStator0Pu = Complex(-3.9999999994638697, -0.3038986712613393), Id0Pu = -0.2638374344116984, RQ2PPu = 0.0, Ce0Pu = 0.6675030203352078, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-3.871984721145332, -0.2492026548790466), s0Pu = Complex(-4.0, -0.30389866745966343), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4422031149206456, RQ1PPu = 0.019257748114119334, P0Pu = -4.0, Mds0Pu = 0.8393051348240024, IStator0Pu = 3.879995830169264, UPhase0 = 0.14010078991928784, MdSat0PPu = 0.8422031149206458, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.3943565501934925, MdPPuEfd = 0.0, PNomTurb = 570.0, Lambdad0Pu = 0.9743580229892678, Lambdaf0Pu = 1.17797558523261, UBaseHV = 15, PNomAlt = 570.0, LambdaAD0Pu = 1.0139336381510224, Ud0Pu = 0.34910640872468224, LambdaAirGap0Pu = 1.0470059516130859, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3943565501934925, UBaseLV = 15, Cm0Pu = 0.7026347582475871, Uf0Pu = 0.000992107296593242, uStator0Pu = Complex(1.0237697719570154, 0.14437681263652), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0139336381510224, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.4677437370457815, SNom = 600.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.1622091105763245, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.590395365116574, Uq0Pu = 0.9731772322590346, Theta0 = 0.4845302949422225, QGen0Pu = 0.30389866745966343, SnTfo = 600.0, Pm0Pu = 0.7026347582475871, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.871984721145332, -0.24920265116563767), Lambdaq0Pu = -0.3496340835935056, Sin2Eta0 = 0.062177253828213, DPu = 0, PGen0Pu = 4.0, LambdaQ20Pu = -0.2610746694892609, UStator0Pu = 1.0339, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.34442950502293457, MrcPPu = 0.0, Mi0Pu = 0.8173322133893606, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-85, 30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g05(u0Pu = Complex(1.0055451212497604, -0.22032559799261842), LambdaQ10Pu = -0.27448491860870783, U0Pu = 1.0294, Mqs0Pu = 0.47731577803562425, QStator0Pu = 0.6008914881538704, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.27448511541021137, Q0Pu = -0.6008914733792083, Cos2Eta0 = 0.9344731745724727, sStator0Pu = Complex(-2.000000003237285, -0.6008914881538704), Id0Pu = -0.49702628964903534, RQ2PPu = 0.0, Ce0Pu = 0.8013169679143399, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-1.7729184260746307, 0.9860430574849944), s0Pu = Complex(-2.0, -0.6008914733792083), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4279183557517112, RQ1PPu = 0.019257748114119334, P0Pu = -2.0, Mds0Pu = 0.8244545256978966, IStator0Pu = 2.0286746130677367, UPhase0 = -0.21570180947986137, MdSat0PPu = 0.8279183557517114, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.6615772039072099, MdPPuEfd = 0.0, PNomTurb = 237.5, Lambdad0Pu = 0.9620017802856555, Lambdaf0Pu = 1.2320353947809177, UBaseHV = 15, PNomAlt = 237.5, LambdaAD0Pu = 1.0365557237330107, Ud0Pu = 0.3697074023216072, LambdaAirGap0Pu = 1.0722825406512142, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.6615772039072099, UBaseLV = 15, Cm0Pu = 0.8434915451729893, Uf0Pu = 0.0011822391250075784, uStator0Pu = Complex(1.0055451212497604, -0.22032559799261842), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0365557237330107, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.7490286356918, SNom = 250.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.7697571570821652, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6414422632712927, Uq0Pu = 0.960718895759113, Theta0 = 0.15165348428046424, QGen0Pu = 0.6008914733792083, SnTfo = 250.0, Pm0Pu = 0.8434915451729893, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.7729184260746307, 0.986043072178181), Lambdaq0Pu = -0.3707014549009053, Sin2Eta0 = 0.06552682542752723, DPu = 0, PGen0Pu = 2.0, LambdaQ20Pu = -0.27448491860870783, UStator0Pu = 1.0294, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3673552937603256, MrcPPu = 0.0, Mi0Pu = 0.8017076255807004, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-45, 71}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g06(u0Pu = Complex(0.5130181059336588, -0.86814917092873), LambdaQ10Pu = -0.6416205888455561, U0Pu = 1.0084, Mqs0Pu = 1.6086821952640633, QStator0Pu = 1.3857093135741652, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6416205975825807, Q0Pu = -1.3857092847343893, Cos2Eta0 = 0.6401673137004495, sStator0Pu = Complex(-3.600000048803789, -1.3857093135741652), Id0Pu = -0.8672640869509881, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.9013718857988313, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.6331807016526944, 3.7725853406283583), s0Pu = Complex(-3.6, -1.3857092847343893), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5919812470688313, RQ1PPu = 0.004539231606100098, P0Pu = -3.6, Mds0Pu = 1.7825937839412596, IStator0Pu = 3.8253520592787233, UPhase0 = -1.0370703185127719, MdSat0PPu = 1.7919812470688314, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.7569194404944772, MdPPuEfd = 0.0, PNomTurb = 360.0, Lambdad0Pu = 0.7257152298339812, Lambdaf0Pu = 1.0734563776525088, UBaseHV = 15, PNomAlt = 360.0, LambdaAD0Pu = 0.8558048428766294, Ud0Pu = 0.7007746147898817, LambdaAirGap0Pu = 1.0696162490974603, RfPPu = 0.001005787441118331, IRotor0Pu = 2.7569194404944772, UBaseLV = 15, Cm0Pu = 1.001524317554257, Uf0Pu = 0.0013526219265484493, uStator0Pu = Complex(0.5130181059336588, -0.86814917092873), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8558048428766291, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.3448387514607205, SNom = 400.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7947587977622237, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4030327555848494, Uq0Pu = 0.7251106807006039, Theta0 = -0.26873783593629774, QGen0Pu = 1.3857092847343893, SnTfo = 400.0, Pm0Pu = 1.001524317554257, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.6331807016526944, 3.7725853968442604), Lambdaq0Pu = -0.7020755109203082, Sin2Eta0 = 0.3598326862995504, DPu = 0, PGen0Pu = 3.6, LambdaQ20Pu = -0.6416205888455561, UStator0Pu = 1.0084, MqPPu = 1.85, ThetaInternal0 = 0.768332482576474, MrcPPu = 0.0, Mi0Pu = 1.7200147098089213, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {35, -60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g07(u0Pu = Complex(0.36418611614259316, -0.9464498311104365), LambdaQ10Pu = -0.6591868724572036, U0Pu = 1.0141, Mqs0Pu = 1.6101327667961083, QStator0Pu = 0.6042061174238293, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6591868830018545, Q0Pu = -0.6042061072728323, Cos2Eta0 = 0.6193199287812433, sStator0Pu = Complex(-1.8000000263804936, -0.6042061174238293), Id0Pu = -0.8398668597302835, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.9013145804666698, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.08137333499287244, 1.87053228071716), s0Pu = Complex(-1.8, -0.6042061072728323), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5940728146031584, RQ1PPu = 0.004539231606100098, P0Pu = -1.8, Mds0Pu = 1.7842011740173094, IStator0Pu = 1.8723014546615835, UPhase0 = -1.2034688371652185, MdSat0PPu = 1.7940728146031586, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.682453648691827, MdPPuEfd = 0.0, PNomTurb = 180.0, Lambdad0Pu = 0.7148070201371378, Lambdaf0Pu = 1.0525597055723506, UBaseHV = 15, PNomAlt = 180.0, LambdaAD0Pu = 0.8407870490966803, Ud0Pu = 0.7199556362154415, LambdaAirGap0Pu = 1.0683867317832079, RfPPu = 0.001005787441118331, IRotor0Pu = 2.6824536486918267, UBaseLV = 15, Cm0Pu = 1.0014606449629664, Uf0Pu = 0.0013160869225542844, uStator0Pu = Complex(0.36418611614259316, -0.9464498311104365), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8407870490966804, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.3085139749716228, SNom = 200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.6930719491893531, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4135236900212159, Uq0Pu = 0.714186734602106, Theta0 = -0.41404815088876445, QGen0Pu = 0.6042061072728323, SnTfo = 200.0, Pm0Pu = 1.0014606449629664, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.08137333499287244, 1.870532308590263), Lambdaq0Pu = -0.7212154365050368, Sin2Eta0 = 0.38068007121875674, DPu = 0, PGen0Pu = 1.8, LambdaQ20Pu = -0.6591868724572036, UStator0Pu = 1.0141, MqPPu = 1.85, ThetaInternal0 = 0.789420686276454, MrcPPu = 0.0, Mi0Pu = 1.717936800359407, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-53, -39}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g08(u0Pu = Complex(1.0049167764763212, -0.30368126770750914), LambdaQ10Pu = -0.2829356304373312, U0Pu = 1.0498, Mqs0Pu = 0.4679079655548716, QStator0Pu = 2.325933348342317, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2829360216107356, Q0Pu = -2.325933411047985, Cos2Eta0 = 0.9335731920400046, sStator0Pu = Complex(-7.4999999810506335, -2.325933348342317), Id0Pu = -0.5505990451050999, RQ2PPu = 0.0, Ce0Pu = 0.8839016923937457, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-6.1978560256858515, 4.187517100423335), s0Pu = Complex(-7.5, -2.325933411047985), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.41217056727269225, RQ1PPu = 0.019257748114119334, P0Pu = -7.5, Mds0Pu = 0.8082046677765965, IStator0Pu = 7.479887583304688, UPhase0 = -0.29346974082574895, MdSat0PPu = 0.8121705672726924, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.7637699876037856, MdPPuEfd = 0.0, PNomTurb = 807.5, Lambdad0Pu = 0.9781056690321772, Lambdaf0Pu = 1.2681978772807403, UBaseHV = 15, PNomAlt = 807.5, LambdaAD0Pu = 1.0606955257979422, Ud0Pu = 0.38480274004698894, LambdaAirGap0Pu = 1.0977831255638264, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7637699876037856, UBaseLV = 15, Cm0Pu = 0.9304228340986797, Uf0Pu = 0.0012549509477838105, uStator0Pu = Complex(1.0049167764763212, -0.30368126770750914), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.060695525797942, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.8565999869513532, SNom = 850.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.8763468539852701, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.68645277684309, Uq0Pu = 0.976732763478491, Theta0 = 0.081826985246423, QGen0Pu = 2.325933411047985, SnTfo = 850.0, Pm0Pu = 0.9304228340986797, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-6.1978560256858515, 4.187517038024468), Lambdaq0Pu = -0.38590393813719914, Sin2Eta0 = 0.06642680795999545, DPu = 0, PGen0Pu = 7.5, LambdaQ20Pu = -0.2829356304373312, UStator0Pu = 1.0498, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3752967260721719, MrcPPu = 0.0, Mi0Pu = 0.7855998440886942, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-77, 0}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g09(u0Pu = Complex(0.9983966221127617, -0.028383533145596707), LambdaQ10Pu = -0.2522695859645044, U0Pu = 0.9988, Mqs0Pu = 0.4896799494102017, QStator0Pu = 2.012771507614991, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2522696418165331, Q0Pu = -2.012771474816921, Cos2Eta0 = 0.9406151602370547, sStator0Pu = Complex(-6.685000000932419, -2.012771507614991), Id0Pu = -0.41482654468210256, RQ2PPu = 0.0, Ce0Pu = 0.6694771533370129, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-6.633061649303388, 2.204575968355108), s0Pu = Complex(-6.685, -2.012771474816921), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.44841598282763423, RQ1PPu = 0.019257748114119334, P0Pu = -6.685, Mds0Pu = 0.8458108217085304, IStator0Pu = 6.989825619323572, UPhase0 = -0.028421460530701985, MdSat0PPu = 0.8484159828276344, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.5182965195646467, MdPPuEfd = 0.0, PNomTurb = 950.0, Lambdad0Pu = 0.9417747938674023, Lambdaf0Pu = 1.1826218955184995, UBaseHV = 15, PNomAlt = 950.0, LambdaAD0Pu = 1.0039987755697177, Ud0Pu = 0.3358268958486777, LambdaAirGap0Pu = 1.0352069906679215, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.5182965195646467, UBaseLV = 15, Cm0Pu = 0.7047127929863293, Uf0Pu = 0.0010802925946331171, uStator0Pu = Complex(0.9983966221127617, -0.028383533145596707), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0039987755697177, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.5982068626996282, SNom = 1000.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.6446027710917407, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.5625793808100586, Uq0Pu = 0.9406496351057821, Theta0 = 0.31448989854453424, QGen0Pu = 2.012771474816921, SnTfo = 1000.0, Pm0Pu = 0.7047127929863293, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-6.633061649303388, 2.2045760012058495), Lambdaq0Pu = -0.3366565489380419, Sin2Eta0 = 0.05938483976294537, DPu = 0, PGen0Pu = 6.685, LambdaQ20Pu = -0.2522695859645044, UStator0Pu = 0.9987999999999999, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3429113590752363, MrcPPu = 0.0, Mi0Pu = 0.8246620469224563, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-25, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g10(u0Pu = Complex(1.0155490889870422, 0.017508222570806142), LambdaQ10Pu = -0.25303620109728053, U0Pu = 1.0157, Mqs0Pu = 0.47809984620143836, QStator0Pu = 2.5570395119468037, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2530363035311794, Q0Pu = -2.5570394753962, Cos2Eta0 = 0.944082569950103, sStator0Pu = Complex(-5.999999999369861, -2.5570395119468037), Id0Pu = -0.5440068659024972, RQ2PPu = 0.0, Ce0Pu = 0.7512885484777885, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.949774277989183, 2.4153135773453536), s0Pu = Complex(-6.0, -2.5570394753962), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4287328047629266, RQ1PPu = 0.019257748114119334, P0Pu = -6.0, Mds0Pu = 0.82580882525703, IStator0Pu = 6.421335827519808, UPhase0 = 0.017238446132242173, MdSat0PPu = 0.8287328047629268, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.7086611794133202, MdPPuEfd = 0.0, PNomTurb = 760.0, Lambdad0Pu = 0.9581137623299398, Lambdaf0Pu = 1.2407337544992343, UBaseHV = 15, PNomAlt = 760.0, LambdaAD0Pu = 1.0397147922153145, Ud0Pu = 0.3404776249538887, LambdaAirGap0Pu = 1.0700627178142679, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7086611794133204, UBaseLV = 15, Cm0Pu = 0.790830051029251, Uf0Pu = 0.0012157401371021876, uStator0Pu = Complex(1.0155490889870422, 0.017508222570806142), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0397147922153145, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.798590715171916, SNom = 800.0, LQ2PPu = 100000.0, QStator0PuQNom = 1.0236350406367567, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.5901955676967622, Uq0Pu = 0.9569333711945464, Theta0 = 0.3590716086250567, QGen0Pu = 2.5570394753962, SnTfo = 800.0, Pm0Pu = 0.790830051029251, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.949774277989183, 2.4153136133363304), Lambdaq0Pu = -0.34156563868569373, Sin2Eta0 = 0.05591743004989716, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.25303620109728053, UStator0Pu = 1.0157, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3418331624928145, MrcPPu = 0.0, Mi0Pu = 0.8063658327429679, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-35, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g11(u0Pu = Complex(0.8927198800042663, -0.4956777439477874), LambdaQ10Pu = -0.29464609025445854, U0Pu = 1.0211, Mqs0Pu = 0.481747863426459, QStator0Pu = 0.6072782041738969, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2946463325022005, Q0Pu = -0.6072781814469235, Cos2Eta0 = 0.9226634089754534, sStator0Pu = Complex(-2.5000000126190254, -0.6072782041738969), Id0Pu = -0.49853461196509646, RQ2PPu = 0.0, Ce0Pu = 0.8347440202099278, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-1.8518144068223743, 1.7084657830442394), s0Pu = Complex(-2.5, -0.6072781814469235), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4359487732440579, RQ1PPu = 0.019257748114119334, P0Pu = -2.5, Mds0Pu = 0.8321099459184294, IStator0Pu = 2.5195380561000738, UPhase0 = -0.5068607286940415, MdSat0PPu = 0.835948773244058, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.6301837235762522, MdPPuEfd = 0.0, PNomTurb = 285.0, Lambdad0Pu = 0.9429441834248884, Lambdaf0Pu = 1.209510695640388, UBaseHV = 15, PNomAlt = 285.0, LambdaAD0Pu = 1.017724375219653, Ud0Pu = 0.3950302425371016, LambdaAirGap0Pu = 1.0595184590998075, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.6301837235762524, UBaseLV = 15, Cm0Pu = 0.8786779160104502, Uf0Pu = 0.0011599021546699144, uStator0Pu = Complex(0.8927198800042663, -0.4956777439477874), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0177243752196528, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.715982866922371, SNom = 300.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.6482822512028992, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6758731950588753, Uq0Pu = 0.9415924370347707, Theta0 = -0.10962874526178082, QGen0Pu = 0.6072781814469235, SnTfo = 300.0, Pm0Pu = 0.8786779160104502, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.8518144068223743, 1.7084658085023634), Lambdaq0Pu = -0.3960273117610318, Sin2Eta0 = 0.07733659102454664, DPu = 0, PGen0Pu = 2.5, LambdaQ20Pu = -0.29464609025445854, UStator0Pu = 1.0211, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3972319834322607, MrcPPu = 0.0, Mi0Pu = 0.8050141368342394, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {35, 72}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g12(u0Pu = Complex(0.8661317722877966, -0.5387167651313634), LambdaQ10Pu = -0.2967541254058822, U0Pu = 1.02, Mqs0Pu = 0.47779095015361345, QStator0Pu = 0.9834016487163406, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.29675441622603116, Q0Pu = -0.9834016174331908, Cos2Eta0 = 0.9232170495511463, sStator0Pu = Complex(-3.1000000194574984, -0.9834016487163406), Id0Pu = -0.5933763497586738, RQ2PPu = 0.0, Ce0Pu = 0.887374104834028, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.071543210230306, 2.4238536694399477), s0Pu = Complex(-3.1, -0.9834016174331908), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4293075858262879, RQ1PPu = 0.019257748114119334, P0Pu = -3.1, Mds0Pu = 0.8252752775380597, IStator0Pu = 3.1884726841858644, UPhase0 = -0.5564247861346242, MdSat0PPu = 0.829307585826288, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.742465572531926, MdPPuEfd = 0.0, PNomTurb = 332.5, Lambdad0Pu = 0.9399966892649677, Lambdaf0Pu = 1.2339990914384071, UBaseHV = 15, PNomAlt = 332.5, LambdaAD0Pu = 1.0290031417287688, Ud0Pu = 0.39925350621948175, LambdaAirGap0Pu = 1.070939143573214, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7424655725319262, UBaseLV = 15, Cm0Pu = 0.9340780050884505, Uf0Pu = 0.001239792510984048, uStator0Pu = Complex(0.8661317722877966, -0.5387167651313634), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.029003141728769, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.8341742868757116, SNom = 350.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.8998302311875798, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6912389512864531, Uq0Pu = 0.9386142113623948, Theta0 = -0.1542451363287828, QGen0Pu = 0.9834016174331908, SnTfo = 350.0, Pm0Pu = 0.9340780050884505, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.071543210230306, 2.423853705558182), Lambdaq0Pu = -0.4004402589189991, Sin2Eta0 = 0.07678295044885376, DPu = 0, PGen0Pu = 3.1, LambdaQ20Pu = -0.2967541254058822, UStator0Pu = 1.02, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.4021796498058414, MrcPPu = 0.0, Mi0Pu = 0.7985944056467466, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-4, 41}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g13(u0Pu = Complex(0.5935224002297839, -0.8258451189087915), LambdaQ10Pu = -3.229821787377695e-5, U0Pu = 1.017, Mqs0Pu = 0.7536334807020528, QStator0Pu = 0.501215018048979, MdPPuEfdNom = 0.6460756808250417, LambdaAQ0Pu = -3.2298217875031366e-5, Q0Pu = -0.5012150205927413, Cos2Eta0 = 0.9999999990385641, sStator0Pu = Complex(3.5394680242273324e-9, -0.501215018048979), Id0Pu = -0.1642789242142576, RQ2PPu = 0.0, Ce0Pu = 5.397395442528402e-5, LdPPu = 0.15, LfPPu = 0.168, i0Pu = Complex(0.40020340376846786, 0.28762013523630675), s0Pu = Complex(0.0, -0.5012150205927413), md = 0.1, RTfPu = 0, MdPPu = 1.4000000000000001, LqPPu = 0.15, UNom = 15, H = 2.0, UNomLV = 15, MqSat0PPu = 0.6912786741574488, RQ1PPu = 0.028747361595973596, P0Pu = 0.0, Mds0Pu = 1.2412786740974988, IStator0Pu = 0.4928367925752007, UPhase0 = -0.9476399362543682, MdSat0PPu = 1.2412786741574489, LQ1PPu = 0.05312500000000006, Efd0Pu = 1.4048263125449794, MdPPuEfd = 0.0, PNomTurb = 285.0, Lambdad0Pu = 1.0170000523109828, Lambdaf0Pu = 1.2102210484485185, UBaseHV = 15, PNomAlt = 285.0, LambdaAD0Pu = 1.0416418909431213, Ud0Pu = -0.00028925126639850474, LambdaAirGap0Pu = 1.0416418914438572, RfPPu = 0.000713014145051691, IRotor0Pu = 1.4048263125449794, UBaseLV = 15, Cm0Pu = 5.681468886872002e-5, Uf0Pu = 0.0007154721658466986, uStator0Pu = Complex(0.5935224002297839, -0.8258451189087915), nd = 6.0257, LDPPu = 0.0750000000000001, LambdaD0Pu = 1.041641890943121, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.0034473661035566, SNom = 300.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.5350575699971096, XTfPu = 0, RDPPu = 0.014323944878270586, MsalPu = 0.5500000000000002, Iq0Pu = -4.672242769986068e-5, Uq0Pu = 1.0169999588661274, Theta0 = -0.9479243524493516, QGen0Pu = 0.5012150205927413, SnTfo = 300.0, Pm0Pu = 5.681468886872002e-5, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(0.40020340376846786, 0.28762013095043276), Lambdaq0Pu = -3.930658203001047e-5, Sin2Eta0 = 9.61435700916245e-10, DPu = 0, PGen0Pu = -0.0, LambdaQ20Pu = -3.229821787377695e-5, UStator0Pu = 1.017, MqPPu = 0.85, ThetaInternal0 = -0.0002844161949834985, MrcPPu = 0.0, Mi0Pu = 1.2412786736286592, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-70, -29}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g14(u0Pu = Complex(0.673358564881387, -0.7996558028932693), LambdaQ10Pu = -0.6123513310383499, U0Pu = 1.0454, Mqs0Pu = 1.5514238426064892, QStator0Pu = 2.9585537336910916, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6123513480620972, Q0Pu = -2.958553669146957, Cos2Eta0 = 0.6982615258249775, sStator0Pu = Complex(-6.3000000766502335, -2.9585537336910916), Id0Pu = -0.8626767350638683, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.9013569538938382, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-1.7169009364814463, 6.432655188339709), s0Pu = Complex(-6.3, -2.958553669146957), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.528885005499835, RQ1PPu = 0.004539231606100098, P0Pu = -6.3, Mds0Pu = 1.7191453391044882, IStator0Pu = 6.657837699355289, UPhase0 = -0.8709296483329582, MdSat0PPu = 1.7288850054998353, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.873029074740287, MdPPuEfd = 0.0, PNomTurb = 630.0, Lambdad0Pu = 0.8021232216430154, Lambdaf0Pu = 1.158342816750513, UBaseHV = 15, PNomAlt = 630.0, LambdaAD0Pu = 0.9315247319025957, Ud0Pu = 0.6711355594613849, LambdaAirGap0Pu = 1.1147701555117406, RfPPu = 0.001005787441118331, IRotor0Pu = 2.873029074740287, UBaseLV = 15, Cm0Pu = 1.0015077265487091, Uf0Pu = 0.0014095885665080972, uStator0Pu = Complex(0.673358564881387, -0.7996558028932693), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.9315247319025958, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.4014775974342861, SNom = 700.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.9696268228717605, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.40052151001255665, Uq0Pu = 0.8015224393779966, Theta0 = -0.17383968008729841, QGen0Pu = 2.958553669146957, SnTfo = 700.0, Pm0Pu = 1.0015077265487091, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.7169009364814463, 6.432655284193741), Lambdaq0Pu = -0.6724295745639808, Sin2Eta0 = 0.30173847417502264, DPu = 0, PGen0Pu = 6.3, LambdaQ20Pu = -0.6123513310383499, UStator0Pu = 1.0454, MqPPu = 1.85, ThetaInternal0 = 0.6970899682456598, MrcPPu = 0.0, Mi0Pu = 1.6685373106648307, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g15(u0Pu = Complex(0.6409072623552502, -0.8260194495653832), LambdaQ10Pu = -0.6538129824429264, U0Pu = 1.0455, Mqs0Pu = 1.571615673686694, QStator0Pu = 3.779062632229719, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6538130030919822, Q0Pu = -3.779062731334966, Cos2Eta0 = 0.6464148904636988, sStator0Pu = Complex(-10.799999872270348, -3.779062632229719), Id0Pu = -0.8089071621963791, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.901247634383894, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-3.476646735400895, 10.377227634467946), s0Pu = Complex(-10.8, -3.779062731334966), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5521614278704103, RQ1PPu = 0.004539231606100098, P0Pu = -10.8, Mds0Pu = 1.7415200708420124, IStator0Pu = 10.944127315186929, UPhase0 = -0.9109251514872329, MdSat0PPu = 1.7521614278704105, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.692548886459704, MdPPuEfd = 0.0, PNomTurb = 1080.0, Lambdad0Pu = 0.7626842419810159, Lambdaf0Pu = 1.0965899652415017, UBaseHV = 15, PNomAlt = 1080.0, LambdaAD0Pu = 0.8840203163104727, Ud0Pu = 0.7157837581278017, LambdaAirGap0Pu = 1.0995287002447114, RfPPu = 0.001005787441118331, IRotor0Pu = 2.692548886459704, UBaseLV = 15, Cm0Pu = 1.0013862604265489, Uf0Pu = 0.0013210399290723496, uStator0Pu = Complex(0.6409072623552502, -0.8260194495653832), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8840203163104725, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.3134384811998554, SNom = 1200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7224803559298315, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4212274385274269, Uq0Pu = 0.7620524008232248, Theta0 = -0.15682513543515142, QGen0Pu = 3.779062731334966, SnTfo = 1200.0, Pm0Pu = 1.0013862604265489, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.476646735400895, 10.377227479835204), Lambdaq0Pu = -0.7169971188710963, Sin2Eta0 = 0.3535851095363013, DPu = 0, PGen0Pu = 10.8, LambdaQ20Pu = -0.6538129824429264, UStator0Pu = 1.0455, MqPPu = 1.85, ThetaInternal0 = 0.7541000160520815, MrcPPu = 0.0, Mi0Pu = 1.6814444059631501, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {80, -89}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g16(u0Pu = Complex(0.45995015187874844, -0.9473465404944043), LambdaQ10Pu = -0.634857424676406, U0Pu = 1.0531, Mqs0Pu = 1.5627162512029624, QStator0Pu = 2.226254747063174, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6348574467572743, Q0Pu = -2.2262547056071496, Cos2Eta0 = 0.670705307394257, sStator0Pu = Complex(-6.00000008538582, -2.226254747063174), Id0Pu = -0.764293818405016, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8582733827751834, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.5867039787115842, 6.048626527831383), s0Pu = Complex(-6.0, -2.2262547056071496), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5418856852520118, RQ1PPu = 0.004539231606100098, P0Pu = -6.0, Mds0Pu = 1.7316585486303098, IStator0Pu = 6.077014523774468, UPhase0 = -1.1188044087448563, MdSat0PPu = 1.741885685252012, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.6331134397709395, MdPPuEfd = 0.0, PNomTurb = 630.0, Lambdad0Pu = 0.7914008355752347, Lambdaf0Pu = 1.1139222851600086, UBaseHV = 15, PNomAlt = 630.0, LambdaAD0Pu = 0.906044908335987, Ud0Pu = 0.6954721434552966, LambdaAirGap0Pu = 1.106327868954196, RfPPu = 0.001005787441118331, IRotor0Pu = 2.6331134397709395, UBaseLV = 15, Cm0Pu = 0.9536370919724261, Uf0Pu = 0.001291879233542195, uStator0Pu = Complex(0.45995015187874844, -0.9473465404944043), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.9060449083359873, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.284445580376068, SNom = 700.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7296255236861713, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.41174091617086545, Uq0Pu = 0.7907832242009784, Theta0 = -0.39744688765817976, QGen0Pu = 2.2262547056071496, SnTfo = 700.0, Pm0Pu = 0.9536370919724261, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.5867039787115842, 6.048626617962942), Lambdaq0Pu = -0.6966185841829041, Sin2Eta0 = 0.3292946926057429, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.634857424676406, UStator0Pu = 1.0530999999999997, MqPPu = 1.85, ThetaInternal0 = 0.7213575210866764, MrcPPu = 0.0, Mi0Pu = 1.6760267467308634, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {20, -109}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g17(u0Pu = Complex(0.6901413976369338, -0.736335175900038), LambdaQ10Pu = -0.7455843234421972, U0Pu = 1.0092, Mqs0Pu = 1.6515346048635564, QStator0Pu = 0.4872723923801794, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.7455843343073186, Q0Pu = -0.4872723495792588, Cos2Eta0 = 0.47699245162526055, sStator0Pu = Complex(-5.300000045665748, -0.4872723923801794), Id0Pu = -0.7524865221388737, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8844922291001156, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-3.2390804010918415, 4.161931448115567), s0Pu = Complex(-5.3, -0.4872723495792588), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.6413003891458369, RQ1PPu = 0.004539231606100098, P0Pu = -5.3, Mds0Pu = 1.8300788864704274, IStator0Pu = 5.273833116413215, UPhase0 = -0.8177699821654937, MdSat0PPu = 1.841300389145837, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.3353318813376798, MdPPuEfd = 0.0, PNomTurb = 540.0, Lambdad0Pu = 0.5991574429021311, Lambdaf0Pu = 0.8963987276443581, UBaseHV = 15, PNomAlt = 540.0, LambdaAD0Pu = 0.7120304212229622, Ud0Pu = 0.8125952633311931, LambdaAirGap0Pu = 1.0309623272998079, RfPPu = 0.001005787441118331, IRotor0Pu = 2.3353318813376798, UBaseLV = 15, Cm0Pu = 0.9827691434445729, Uf0Pu = 0.0011457792571183817, uStator0Pu = Complex(0.6901413976369338, -0.736335175900038), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.7120304212229621, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.1391862835793558, SNom = 600.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.18631325582127198, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.45426439204721875, Uq0Pu = 0.5984760463140603, Theta0 = 0.11822166030178358, QGen0Pu = 0.4872723495792588, SnTfo = 600.0, Pm0Pu = 0.9827691434445729, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.2390804010918415, 4.161931510133178), Lambdaq0Pu = -0.8137239931144015, Sin2Eta0 = 0.5230075483747397, DPu = 0, PGen0Pu = 5.3, LambdaQ20Pu = -0.7455843234421972, UStator0Pu = 1.0092000000000003, MqPPu = 1.85, ThetaInternal0 = 0.9359916424672772, MrcPPu = 0.0, Mi0Pu = 1.736698879470889, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-78, -88}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g18(u0Pu = Complex(0.7498229712124076, -0.7071831458980035), LambdaQ10Pu = -0.6767014503909013, U0Pu = 1.0307, Mqs0Pu = 1.601972214194124, QStator0Pu = 2.9342903479480693, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6767014665716609, Q0Pu = -2.9342902459664, Cos2Eta0 = 0.6039205132174661, sStator0Pu = Complex(-10.600000096182326, -2.9342903479480693), Id0Pu = -0.7801740985180853, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8845194981888729, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-5.528389331138563, 9.127319737676077), s0Pu = Complex(-10.6, -2.9342902459664), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5857788014702234, RQ1PPu = 0.004539231606100098, P0Pu = -10.6, Mds0Pu = 1.7751583995124078, IStator0Pu = 10.671038219085752, UPhase0 = -0.7561411424859505, MdSat0PPu = 1.7857788014702236, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.558585307321138, MdPPuEfd = 0.0, PNomTurb = 1080.0, Lambdad0Pu = 0.7185688862263363, Lambdaf0Pu = 1.037588577897823, UBaseHV = 15, PNomAlt = 1080.0, LambdaAD0Pu = 0.835595001004049, Ud0Pu = 0.7395409005115762, LambdaAirGap0Pu = 1.0752413127122644, RfPPu = 0.001005787441118331, IRotor0Pu = 2.5585853073211378, UBaseLV = 15, Cm0Pu = 0.9827994424320811, Uf0Pu = 0.0012553136434797492, uStator0Pu = Complex(0.7498229712124076, -0.7071831458980035), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8355950010040492, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.248090393815189, SNom = 1200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.5609769779698437, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4267313005846156, Uq0Pu = 0.7179287892754593, Theta0 = 0.04408444925380034, QGen0Pu = 2.9342902459664, SnTfo = 1200.0, Pm0Pu = 0.9827994424320811, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.528389331138563, 9.127319873683739), Lambdaq0Pu = -0.7407111616593532, Sin2Eta0 = 0.3960794867825337, DPu = 0, PGen0Pu = 10.6, LambdaQ20Pu = -0.6767014503909013, UStator0Pu = 1.0307, MqPPu = 1.85, ThetaInternal0 = 0.8002255917397508, MrcPPu = 0.0, Mi0Pu = 1.7065629041137167, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-95, -151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g19(u0Pu = Complex(1.0299998805180743, 0.0004961176801795917), LambdaQ10Pu = -0.2116402580274578, U0Pu = 1.03, Mqs0Pu = 0.47811770293646155, QStator0Pu = 1.2123684932418872, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.21164029409319593, Q0Pu = -1.2123684751977255, Cos2Eta0 = 0.9608781454128171, sStator0Pu = Complex(-2.9999999999913087, -1.2123684932418872), Id0Pu = -0.38743317614321027, RQ2PPu = 0.0, Ce0Pu = 0.6007895060677011, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.913187971523858, 1.175653720008482), s0Pu = Complex(-3.0, -1.2123684751977255), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4278848823616062, RQ1PPu = 0.019257748114119334, P0Pu = -3.0, Mds0Pu = 0.8258396687084337, IStator0Pu = 3.1414687437554902, UPhase0 = 0.0004816676692845813, MdSat0PPu = 0.8278848823616064, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.5716456400800078, MdPPuEfd = 0.0, PNomTurb = 475.0, Lambdad0Pu = 0.9907577602839702, Lambdaf0Pu = 1.2337722237736877, UBaseHV = 15, PNomAlt = 475.0, LambdaAD0Pu = 1.0488727367054518, Ud0Pu = 0.2850583707794767, LambdaAirGap0Pu = 1.0700119774506445, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.5716456400800078, UBaseLV = 15, Cm0Pu = 0.6324100063870538, Uf0Pu = 0.0011182513589984993, uStator0Pu = Complex(1.0299998805180743, 0.0004961176801795917), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0488727367054516, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.6543638316631664, SNom = 500.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.7765373142171146, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.4946196202571146, Uq0Pu = 0.989768521043456, Theta0 = 0.280897954974819, QGen0Pu = 1.2123684751977255, SnTfo = 500.0, Pm0Pu = 0.6324100063870538, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.913187971523858, 1.1756537375270877), Lambdaq0Pu = -0.2858332371317631, Sin2Eta0 = 0.039121854587182855, DPu = 0, PGen0Pu = 3.0, LambdaQ20Pu = -0.2116402580274578, UStator0Pu = 1.03, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.2804162873055344, MrcPPu = 0.0, Mi0Pu = 0.8122361405267332, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g20(u0Pu = Complex(1.0185, 0.0), LambdaQ10Pu = -0.19281429682442627, U0Pu = 1.0185, Mqs0Pu = 0.4900124830405798, QStator0Pu = 3.7738605593672276, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.19281430821576903, Q0Pu = -3.7738605593672276, Cos2Eta0 = 0.9652368728348621, sStator0Pu = Complex(-21.37396877104446, -3.7738605593672276), Id0Pu = -0.19734722972234484, RQ2PPu = 0.0, Ce0Pu = 0.47542560757059527, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-20.985733028513913, 3.705312282147499), s0Pu = Complex(-21.37396908954142, -3.7738605593672276), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4479018188376425, RQ1PPu = 0.019257748114119334, P0Pu = -21.37396908954142, Mds0Pu = 0.8463851979791835, IStator0Pu = 21.310333566777423, UPhase0 = 0.0, MdSat0PPu = 0.8479018188376426, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.3258272956312014, MdPPuEfd = 0.0, PNomTurb = 4275.0, Lambdad0Pu = 0.9864051304441215, Lambdaf0Pu = 1.1719868967414382, UBaseHV = 15, PNomAlt = 4275.0, LambdaAD0Pu = 1.0160072149024733, Ud0Pu = 0.25699212341641076, LambdaAirGap0Pu = 1.0341411983798954, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3258272956312016, UBaseLV = 15, Cm0Pu = 0.5004480079690476, Uf0Pu = 0.000943347620689751, uStator0Pu = Complex(1.0185, 0.0), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0160072149024733, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.395607679611791, SNom = 4500.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.2685783662619145, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.43048339773390937, Uq0Pu = 0.9855441636486537, Theta0 = 0.25508134985217434, QGen0Pu = 3.7738605593672276, SnTfo = 4500.0, Pm0Pu = 0.5004480079690476, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-20.985732715802122, 3.705312282147499), Lambdaq0Pu = -0.25738681787585543, Sin2Eta0 = 0.03476312716513779, DPu = 0, PGen0Pu = 21.37396908954142, LambdaQ20Pu = -0.19281429682442627, UStator0Pu = 1.0185, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.25508134985217434, MrcPPu = 0.0, Mi0Pu = 0.8339965679715875, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-75, 60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g01(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {25, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g01(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 760.0) annotation(
    Placement(visible = true, transformation(origin = {25, 43}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g02(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {75, 187}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g02(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 570.0) annotation(
    Placement(visible = true, transformation(origin = {75, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g03(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {85, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g03(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 665.0) annotation(
    Placement(visible = true, transformation(origin = {85, 43}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g04(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 150.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-85, 66}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g04(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 570.0) annotation(
    Placement(visible = true, transformation(origin = {-85, -6}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g05(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-45, 107}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g05(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 237.5) annotation(
    Placement(visible = true, transformation(origin = {-45, 35}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g06(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 75.0, tOelMin = -20.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 1) annotation(
    Placement(visible = true, transformation(origin = {35, -24}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g06(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 360.0) annotation(
    Placement(visible = true, transformation(origin = {35, -96}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g07(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 75.0, tOelMin = -20.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 1) annotation(
    Placement(visible = true, transformation(origin = {-53, -3}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g07(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 180.0) annotation(
    Placement(visible = true, transformation(origin = {-53, -75}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g08(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-77, 36}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g08(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 807.5) annotation(
    Placement(visible = true, transformation(origin = {-77, -36}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g09(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-25, 187}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g09(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 950.0) annotation(
    Placement(visible = true, transformation(origin = {-25, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g10(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-35, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g10(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 760.0) annotation(
    Placement(visible = true, transformation(origin = {-35, 43}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g11(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -20.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 1) annotation(
    Placement(visible = true, transformation(origin = {35, 108}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g11(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 285.0) annotation(
    Placement(visible = true, transformation(origin = {35, 36}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g12(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 75.0, tOelMin = -20.0, EfdMaxPu = 4.0, tLeadPss = 0.20, tLagPss = 0.010, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 15.0, OelMode = 1) annotation(
    Placement(visible = true, transformation(origin = {-4, 77}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g12(Pm0Pu(fixed = false), KSigma = 0.04, Ki = 0.4, Kp = 2, PNom = 332.5) annotation(
    Placement(visible = true, transformation(origin = {-4, 5}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g13(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 50.0, IrLimPu = 2.9579, KPss = 0.0, tOelMin = -17.0, EfdMaxPu = 4.0, tLeadPss = 1.00, tLagPss = 1.000, tLeadTgr = 4.0, tLagTgr = 20.0, tDerOmega = 1.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-70, 7}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g13(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 285.0) annotation(
    Placement(visible = true, transformation(origin = {-70, -65}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g14(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 75.0, tOelMin = -18.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {50, 6}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g14(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 630.0) annotation(
    Placement(visible = true, transformation(origin = {50, -66}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g15(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 75.0, tOelMin = -18.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {80, -53}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g15(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 1080.0) annotation(
    Placement(visible = true, transformation(origin = {80, -125}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g16(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 75.0, tOelMin = -18.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {20, -73}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g16(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 630.0) annotation(
    Placement(visible = true, transformation(origin = {20, -145}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g17(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 150.0, tOelMin = -18.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-78, -52}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g17(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 540.0) annotation(
    Placement(visible = true, transformation(origin = {-78, -124}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g18(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 120.0, IrLimPu = 3.0618, KPss = 150.0, tOelMin = -18.0, EfdMaxPu = 5.0, tLeadPss = 0.22, tLagPss = 0.012, tLeadTgr = 5.0, tLagTgr = 12.5, tDerOmega = 15.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-95, -115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g18(Pm0Pu(fixed = false), KSigma = 0.00, Ki = 0.0, Kp = 0, PNom = 1080.0) annotation(
    Placement(visible = true, transformation(origin = {-95, -187}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g19(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 0.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 1.00, tLagPss = 1.000, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 1.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-75, 187}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g19(Pm0Pu(fixed = false), KSigma = 0.08, Ki = 0.4, Kp = 2, PNom = 475.0) annotation(
    Placement(visible = true, transformation(origin = {-75, 115}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.VoltageRegulators.Simplified.VRNordic vrNordic_g20(Efd0Pu(fixed = false), Ir0Pu(fixed = false), Us0Pu(fixed = false), KTgr = 70.0, IrLimPu = 1.8991, KPss = 0.0, tOelMin = -11.0, EfdMaxPu = 4.0, tLeadPss = 1.00, tLagPss = 1.000, tLeadTgr = 10.0, tLagTgr = 20.0, tDerOmega = 1.0, OelMode = 0) annotation(
    Placement(visible = true, transformation(origin = {-75, 96}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Dynawo.Electrical.Controls.Machines.Governors.Simplified.GoverNordic goverNordic_g20(Pm0Pu(fixed = false), KSigma = 0.08, Ki = 0.4, Kp = 2, PNom = 4275.0) annotation(
    Placement(visible = true, transformation(origin = {-75, 24}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
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
initial equation
  vrNordic_g01.Efd0Pu = g01.Efd0Pu;
  vrNordic_g01.Ir0Pu = g01.IRotor0Pu;
  vrNordic_g01.Us0Pu = g01.UStator0Pu;
  goverNordic_g01.Pm0Pu = g01.Pm0Pu;
  vrNordic_g02.Efd0Pu = g02.Efd0Pu;
  vrNordic_g02.Ir0Pu = g02.IRotor0Pu;
  vrNordic_g02.Us0Pu = g02.UStator0Pu;
  goverNordic_g02.Pm0Pu = g02.Pm0Pu;
  vrNordic_g03.Efd0Pu = g03.Efd0Pu;
  vrNordic_g03.Ir0Pu = g03.IRotor0Pu;
  vrNordic_g03.Us0Pu = g03.UStator0Pu;
  goverNordic_g03.Pm0Pu = g03.Pm0Pu;
  vrNordic_g04.Efd0Pu = g04.Efd0Pu;
  vrNordic_g04.Ir0Pu = g04.IRotor0Pu;
  vrNordic_g04.Us0Pu = g04.UStator0Pu;
  goverNordic_g04.Pm0Pu = g04.Pm0Pu;
  vrNordic_g05.Efd0Pu = g05.Efd0Pu;
  vrNordic_g05.Ir0Pu = g05.IRotor0Pu;
  vrNordic_g05.Us0Pu = g05.UStator0Pu;
  goverNordic_g05.Pm0Pu = g05.Pm0Pu;
  vrNordic_g06.Efd0Pu = g06.Efd0Pu;
  vrNordic_g06.Ir0Pu = g06.IRotor0Pu;
  vrNordic_g06.Us0Pu = g06.UStator0Pu;
  goverNordic_g06.Pm0Pu = g06.Pm0Pu;
  vrNordic_g07.Efd0Pu = g07.Efd0Pu;
  vrNordic_g07.Ir0Pu = g07.IRotor0Pu;
  vrNordic_g07.Us0Pu = g07.UStator0Pu;
  goverNordic_g07.Pm0Pu = g07.Pm0Pu;
  vrNordic_g08.Efd0Pu = g08.Efd0Pu;
  vrNordic_g08.Ir0Pu = g08.IRotor0Pu;
  vrNordic_g08.Us0Pu = g08.UStator0Pu;
  goverNordic_g08.Pm0Pu = g08.Pm0Pu;
  vrNordic_g09.Efd0Pu = g09.Efd0Pu;
  vrNordic_g09.Ir0Pu = g09.IRotor0Pu;
  vrNordic_g09.Us0Pu = g09.UStator0Pu;
  goverNordic_g09.Pm0Pu = g09.Pm0Pu;
  vrNordic_g10.Efd0Pu = g10.Efd0Pu;
  vrNordic_g10.Ir0Pu = g10.IRotor0Pu;
  vrNordic_g10.Us0Pu = g10.UStator0Pu;
  goverNordic_g10.Pm0Pu = g10.Pm0Pu;
  vrNordic_g11.Efd0Pu = g11.Efd0Pu;
  vrNordic_g11.Ir0Pu = g11.IRotor0Pu;
  vrNordic_g11.Us0Pu = g11.UStator0Pu;
  goverNordic_g11.Pm0Pu = g11.Pm0Pu;
  vrNordic_g12.Efd0Pu = g12.Efd0Pu;
  vrNordic_g12.Ir0Pu = g12.IRotor0Pu;
  vrNordic_g12.Us0Pu = g12.UStator0Pu;
  goverNordic_g12.Pm0Pu = g12.Pm0Pu;
  vrNordic_g13.Efd0Pu = g13.Efd0Pu;
  vrNordic_g13.Ir0Pu = g13.IRotor0Pu;
  vrNordic_g13.Us0Pu = g13.UStator0Pu;
  goverNordic_g13.Pm0Pu = g13.Pm0Pu;
  vrNordic_g14.Efd0Pu = g14.Efd0Pu;
  vrNordic_g14.Ir0Pu = g14.IRotor0Pu;
  vrNordic_g14.Us0Pu = g14.UStator0Pu;
  goverNordic_g14.Pm0Pu = g14.Pm0Pu;
  vrNordic_g15.Efd0Pu = g15.Efd0Pu;
  vrNordic_g15.Ir0Pu = g15.IRotor0Pu;
  vrNordic_g15.Us0Pu = g15.UStator0Pu;
  goverNordic_g15.Pm0Pu = g15.Pm0Pu;
  vrNordic_g16.Efd0Pu = g16.Efd0Pu;
  vrNordic_g16.Ir0Pu = g16.IRotor0Pu;
  vrNordic_g16.Us0Pu = g16.UStator0Pu;
  goverNordic_g16.Pm0Pu = g16.Pm0Pu;
  vrNordic_g17.Efd0Pu = g17.Efd0Pu;
  vrNordic_g17.Ir0Pu = g17.IRotor0Pu;
  vrNordic_g17.Us0Pu = g17.UStator0Pu;
  goverNordic_g17.Pm0Pu = g17.Pm0Pu;
  vrNordic_g18.Efd0Pu = g18.Efd0Pu;
  vrNordic_g18.Ir0Pu = g18.IRotor0Pu;
  vrNordic_g18.Us0Pu = g18.UStator0Pu;
  goverNordic_g18.Pm0Pu = g18.Pm0Pu;
  vrNordic_g19.Efd0Pu = g19.Efd0Pu;
  vrNordic_g19.Ir0Pu = g19.IRotor0Pu;
  vrNordic_g19.Us0Pu = g19.UStator0Pu;
  goverNordic_g19.Pm0Pu = g19.Pm0Pu;
  vrNordic_g20.Efd0Pu = g20.Efd0Pu;
  vrNordic_g20.Ir0Pu = g20.IRotor0Pu;
  vrNordic_g20.Us0Pu = g20.UStator0Pu;
  goverNordic_g20.Pm0Pu = g20.Pm0Pu;
equation
  g01.switchOffSignal1.value = false;
  g01.switchOffSignal2.value = false;
  g01.switchOffSignal3.value = false;
  g01.efdPu = vrNordic_g01.efdPu;
  g01.PmPu = goverNordic_g01.PmPu;
  goverNordic_g01.omegaPu = g01.omegaPu;
  goverNordic_g01.PGenPu = g01.PGenPu;
  vrNordic_g01.IrPu = g01.IRotorPu;
  vrNordic_g01.omegaPu = g01.omegaPu;
  vrNordic_g01.UsPu = g01.UStatorPu;
  g02.efdPu = vrNordic_g02.efdPu;
  g02.PmPu = goverNordic_g02.PmPu;
  goverNordic_g02.omegaPu = g02.omegaPu;
  goverNordic_g02.PGenPu = g02.PGenPu;
  vrNordic_g02.IrPu = g02.IRotorPu;
  vrNordic_g02.omegaPu = g02.omegaPu;
  vrNordic_g02.UsPu = g02.UStatorPu;
  g03.efdPu = vrNordic_g03.efdPu;
  g03.PmPu = goverNordic_g03.PmPu;
  goverNordic_g03.omegaPu = g03.omegaPu;
  goverNordic_g03.PGenPu = g03.PGenPu;
  vrNordic_g03.IrPu = g03.IRotorPu;
  vrNordic_g03.omegaPu = g03.omegaPu;
  vrNordic_g03.UsPu = g03.UStatorPu;
  g04.efdPu = vrNordic_g04.efdPu;
  g04.PmPu = goverNordic_g04.PmPu;
  goverNordic_g04.omegaPu = g04.omegaPu;
  goverNordic_g04.PGenPu = g04.PGenPu;
  vrNordic_g04.IrPu = g04.IRotorPu;
  vrNordic_g04.omegaPu = g04.omegaPu;
  vrNordic_g04.UsPu = g04.UStatorPu;
  g05.efdPu = vrNordic_g05.efdPu;
  g05.PmPu = goverNordic_g05.PmPu;
  goverNordic_g05.omegaPu = g05.omegaPu;
  goverNordic_g05.PGenPu = g05.PGenPu;
  vrNordic_g05.IrPu = g05.IRotorPu;
  vrNordic_g05.omegaPu = g05.omegaPu;
  vrNordic_g05.UsPu = g05.UStatorPu;
  g06.efdPu = vrNordic_g06.efdPu;
  g06.PmPu = goverNordic_g06.PmPu;
  goverNordic_g06.omegaPu = g06.omegaPu;
  goverNordic_g06.PGenPu = g06.PGenPu;
  vrNordic_g06.IrPu = g06.IRotorPu;
  vrNordic_g06.omegaPu = g06.omegaPu;
  vrNordic_g06.UsPu = g06.UStatorPu;
  g07.efdPu = vrNordic_g07.efdPu;
  g07.PmPu = goverNordic_g07.PmPu;
  goverNordic_g07.omegaPu = g07.omegaPu;
  goverNordic_g07.PGenPu = g07.PGenPu;
  vrNordic_g07.IrPu = g07.IRotorPu;
  vrNordic_g07.omegaPu = g07.omegaPu;
  vrNordic_g07.UsPu = g07.UStatorPu;
  g08.efdPu = vrNordic_g08.efdPu;
  g08.PmPu = goverNordic_g08.PmPu;
  goverNordic_g08.omegaPu = g08.omegaPu;
  goverNordic_g08.PGenPu = g08.PGenPu;
  vrNordic_g08.IrPu = g08.IRotorPu;
  vrNordic_g08.omegaPu = g08.omegaPu;
  vrNordic_g08.UsPu = g08.UStatorPu;
  g09.efdPu = vrNordic_g09.efdPu;
  g09.PmPu = goverNordic_g09.PmPu;
  goverNordic_g09.omegaPu = g09.omegaPu;
  goverNordic_g09.PGenPu = g09.PGenPu;
  vrNordic_g09.IrPu = g09.IRotorPu;
  vrNordic_g09.omegaPu = g09.omegaPu;
  vrNordic_g09.UsPu = g09.UStatorPu;
  g10.efdPu = vrNordic_g10.efdPu;
  g10.PmPu = goverNordic_g10.PmPu;
  goverNordic_g10.omegaPu = g10.omegaPu;
  goverNordic_g10.PGenPu = g10.PGenPu;
  vrNordic_g10.IrPu = g10.IRotorPu;
  vrNordic_g10.omegaPu = g10.omegaPu;
  vrNordic_g10.UsPu = g10.UStatorPu;
  g11.efdPu = vrNordic_g11.efdPu;
  g11.PmPu = goverNordic_g11.PmPu;
  goverNordic_g11.omegaPu = g11.omegaPu;
  goverNordic_g11.PGenPu = g11.PGenPu;
  vrNordic_g11.IrPu = g11.IRotorPu;
  vrNordic_g11.omegaPu = g11.omegaPu;
  vrNordic_g11.UsPu = g11.UStatorPu;
  g12.efdPu = vrNordic_g12.efdPu;
  g12.PmPu = goverNordic_g12.PmPu;
  goverNordic_g12.omegaPu = g12.omegaPu;
  goverNordic_g12.PGenPu = g12.PGenPu;
  vrNordic_g12.IrPu = g12.IRotorPu;
  vrNordic_g12.omegaPu = g12.omegaPu;
  vrNordic_g12.UsPu = g12.UStatorPu;
  g13.efdPu = vrNordic_g13.efdPu;
  g13.PmPu = goverNordic_g13.PmPu;
  goverNordic_g13.omegaPu = g13.omegaPu;
  goverNordic_g13.PGenPu = g13.PGenPu;
  vrNordic_g13.IrPu = g13.IRotorPu;
  vrNordic_g13.omegaPu = g13.omegaPu;
  vrNordic_g13.UsPu = g13.UStatorPu;
  g14.efdPu = vrNordic_g14.efdPu;
  g14.PmPu = goverNordic_g14.PmPu;
  goverNordic_g14.omegaPu = g14.omegaPu;
  goverNordic_g14.PGenPu = g14.PGenPu;
  vrNordic_g14.IrPu = g14.IRotorPu;
  vrNordic_g14.omegaPu = g14.omegaPu;
  vrNordic_g14.UsPu = g14.UStatorPu;
  g15.efdPu = vrNordic_g15.efdPu;
  g15.PmPu = goverNordic_g15.PmPu;
  goverNordic_g15.omegaPu = g15.omegaPu;
  goverNordic_g15.PGenPu = g15.PGenPu;
  vrNordic_g15.IrPu = g15.IRotorPu;
  vrNordic_g15.omegaPu = g15.omegaPu;
  vrNordic_g15.UsPu = g15.UStatorPu;
  g16.efdPu = vrNordic_g16.efdPu;
  g16.PmPu = goverNordic_g16.PmPu;
  goverNordic_g16.omegaPu = g16.omegaPu;
  goverNordic_g16.PGenPu = g16.PGenPu;
  vrNordic_g16.IrPu = g16.IRotorPu;
  vrNordic_g16.omegaPu = g16.omegaPu;
  vrNordic_g16.UsPu = g16.UStatorPu;
  g17.efdPu = vrNordic_g17.efdPu;
  g17.PmPu = goverNordic_g17.PmPu;
  goverNordic_g17.omegaPu = g17.omegaPu;
  goverNordic_g17.PGenPu = g17.PGenPu;
  vrNordic_g17.IrPu = g17.IRotorPu;
  vrNordic_g17.omegaPu = g17.omegaPu;
  vrNordic_g17.UsPu = g17.UStatorPu;
  g18.efdPu = vrNordic_g18.efdPu;
  g18.PmPu = goverNordic_g18.PmPu;
  goverNordic_g18.omegaPu = g18.omegaPu;
  goverNordic_g18.PGenPu = g18.PGenPu;
  vrNordic_g18.IrPu = g18.IRotorPu;
  vrNordic_g18.omegaPu = g18.omegaPu;
  vrNordic_g18.UsPu = g18.UStatorPu;
  g19.efdPu = vrNordic_g19.efdPu;
  g19.PmPu = goverNordic_g19.PmPu;
  goverNordic_g19.omegaPu = g19.omegaPu;
  goverNordic_g19.PGenPu = g19.PGenPu;
  vrNordic_g19.IrPu = g19.IRotorPu;
  vrNordic_g19.omegaPu = g19.omegaPu;
  vrNordic_g19.UsPu = g19.UStatorPu;
  g20.efdPu = vrNordic_g20.efdPu;
  g20.PmPu = goverNordic_g20.PmPu;
  goverNordic_g20.omegaPu = g20.omegaPu;
  goverNordic_g20.PGenPu = g20.PGenPu;
  vrNordic_g20.IrPu = g20.IRotorPu;
  vrNordic_g20.omegaPu = g20.omegaPu;
  vrNordic_g20.UsPu = g20.UStatorPu;
  g02.switchOffSignal1.value = false;
  g02.switchOffSignal2.value = false;
  g02.switchOffSignal3.value = false;
  g03.switchOffSignal1.value = false;
  g03.switchOffSignal2.value = false;
  g03.switchOffSignal3.value = false;
  g04.switchOffSignal1.value = false;
  g04.switchOffSignal2.value = false;
  g04.switchOffSignal3.value = false;
  g05.switchOffSignal1.value = false;
  g05.switchOffSignal2.value = false;
  g05.switchOffSignal3.value = false;
  g06.switchOffSignal1.value = false;
  g06.switchOffSignal2.value = false;
  g06.switchOffSignal3.value = false;
  g07.switchOffSignal1.value = false;
  g07.switchOffSignal2.value = false;
  g07.switchOffSignal3.value = false;
  g08.switchOffSignal1.value = false;
  g08.switchOffSignal2.value = false;
  g08.switchOffSignal3.value = false;
  g09.switchOffSignal1.value = false;
  g09.switchOffSignal2.value = false;
  g09.switchOffSignal3.value = false;
  g10.switchOffSignal1.value = false;
  g10.switchOffSignal2.value = false;
  g10.switchOffSignal3.value = false;
  g11.switchOffSignal1.value = false;
  g11.switchOffSignal2.value = false;
  g11.switchOffSignal3.value = false;
  g12.switchOffSignal1.value = false;
  g12.switchOffSignal2.value = false;
  g12.switchOffSignal3.value = false;
  g13.switchOffSignal1.value = false;
  g13.switchOffSignal2.value = false;
  g13.switchOffSignal3.value = false;
  g14.switchOffSignal1.value = false;
  g14.switchOffSignal2.value = false;
  g14.switchOffSignal3.value = false;
  g15.switchOffSignal1.value = false;
  g15.switchOffSignal2.value = false;
  g15.switchOffSignal3.value = false;
  g16.switchOffSignal1.value = false;
  g16.switchOffSignal2.value = false;
  g16.switchOffSignal3.value = false;
  g17.switchOffSignal1.value = false;
  g17.switchOffSignal2.value = false;
  g17.switchOffSignal3.value = false;
  g18.switchOffSignal1.value = false;
  g18.switchOffSignal2.value = false;
  g18.switchOffSignal3.value = false;
  g19.switchOffSignal1.value = false;
  g19.switchOffSignal2.value = false;
  g19.switchOffSignal3.value = false;
  g20.switchOffSignal1.value = false;
  g20.switchOffSignal2.value = false;
  g20.switchOffSignal3.value = false;
  trafo_1_1041.switchOffSignal1.value = false;
  trafo_1_1041.switchOffSignal2.value = false;
  trafo_2_1042.switchOffSignal1.value = false;
  trafo_2_1042.switchOffSignal2.value = false;
  trafo_3_1043.switchOffSignal1.value = false;
  trafo_3_1043.switchOffSignal2.value = false;
  trafo_4_1044.switchOffSignal1.value = false;
  trafo_4_1044.switchOffSignal2.value = false;
  trafo_5_1045.switchOffSignal1.value = false;
  trafo_5_1045.switchOffSignal2.value = false;
  trafo_11_1011.switchOffSignal1.value = false;
  trafo_11_1011.switchOffSignal2.value = false;
  trafo_12_1012.switchOffSignal1.value = false;
  trafo_12_1012.switchOffSignal2.value = false;
  trafo_13_1013.switchOffSignal1.value = false;
  trafo_13_1013.switchOffSignal2.value = false;
  trafo_22_1022.switchOffSignal1.value = false;
  trafo_22_1022.switchOffSignal2.value = false;
  trafo_31_2031.switchOffSignal1.value = false;
  trafo_31_2031.switchOffSignal2.value = false;
  trafo_32_2032.switchOffSignal1.value = false;
  trafo_32_2032.switchOffSignal2.value = false;
  trafo_41_4041.switchOffSignal1.value = false;
  trafo_41_4041.switchOffSignal2.value = false;
  trafo_42_4042.switchOffSignal1.value = false;
  trafo_42_4042.switchOffSignal2.value = false;
  trafo_43_4043.switchOffSignal1.value = false;
  trafo_43_4043.switchOffSignal2.value = false;
  trafo_46_4046.switchOffSignal1.value = false;
  trafo_46_4046.switchOffSignal2.value = false;
  trafo_47_4047.switchOffSignal1.value = false;
  trafo_47_4047.switchOffSignal2.value = false;
  trafo_51_4051.switchOffSignal1.value = false;
  trafo_51_4051.switchOffSignal2.value = false;
  trafo_61_4061.switchOffSignal1.value = false;
  trafo_61_4061.switchOffSignal2.value = false;
  trafo_62_4062.switchOffSignal1.value = false;
  trafo_62_4062.switchOffSignal2.value = false;
  trafo_63_4063.switchOffSignal1.value = false;
  trafo_63_4063.switchOffSignal2.value = false;
  trafo_71_4071.switchOffSignal1.value = false;
  trafo_71_4071.switchOffSignal2.value = false;
  trafo_72_4072.switchOffSignal1.value = false;
  trafo_72_4072.switchOffSignal2.value = false;
  trafo_g1_1012.switchOffSignal1.value = false;
  trafo_g1_1012.switchOffSignal2.value = false;
  trafo_g2_1013.switchOffSignal1.value = false;
  trafo_g2_1013.switchOffSignal2.value = false;
  trafo_g3_1014.switchOffSignal1.value = false;
  trafo_g3_1014.switchOffSignal2.value = false;
  trafo_g4_1021.switchOffSignal1.value = false;
  trafo_g4_1021.switchOffSignal2.value = false;
  trafo_g5_1022.switchOffSignal1.value = false;
  trafo_g5_1022.switchOffSignal2.value = false;
  trafo_g6_1042.switchOffSignal1.value = false;
  trafo_g6_1042.switchOffSignal2.value = false;
  trafo_g7_1043.switchOffSignal1.value = false;
  trafo_g7_1043.switchOffSignal2.value = false;
  trafo_g8_2032.switchOffSignal1.value = false;
  trafo_g8_2032.switchOffSignal2.value = false;
  trafo_g9_4011.switchOffSignal1.value = false;
  trafo_g9_4011.switchOffSignal2.value = false;
  trafo_g10_4012.switchOffSignal1.value = false;
  trafo_g10_4012.switchOffSignal2.value = false;
  trafo_g11_4021.switchOffSignal1.value = false;
  trafo_g11_4021.switchOffSignal2.value = false;
  trafo_g12_4031.switchOffSignal1.value = false;
  trafo_g12_4031.switchOffSignal2.value = false;
  trafo_g13_4041.switchOffSignal1.value = false;
  trafo_g13_4041.switchOffSignal2.value = false;
  trafo_g14_4042.switchOffSignal1.value = false;
  trafo_g14_4042.switchOffSignal2.value = false;
  trafo_g15_4047.switchOffSignal1.value = false;
  trafo_g15_4047.switchOffSignal2.value = false;
  trafo_g16_4051.switchOffSignal1.value = false;
  trafo_g16_4051.switchOffSignal2.value = false;
  trafo_g17_4062.switchOffSignal1.value = false;
  trafo_g17_4062.switchOffSignal2.value = false;
  trafo_g18_4063.switchOffSignal1.value = false;
  trafo_g18_4063.switchOffSignal2.value = false;
  trafo_g19_4071.switchOffSignal1.value = false;
  trafo_g19_4071.switchOffSignal2.value = false;
  trafo_g20_4072.switchOffSignal1.value = false;
  trafo_g20_4072.switchOffSignal2.value = false;
  trafo_1011_4011.switchOffSignal1.value = false;
  trafo_1011_4011.switchOffSignal2.value = false;
  trafo_1012_4012.switchOffSignal1.value = false;
  trafo_1012_4012.switchOffSignal2.value = false;
  trafo_1022_4022.switchOffSignal1.value = false;
  trafo_1022_4022.switchOffSignal2.value = false;
  trafo_1044_4044a.switchOffSignal1.value = false;
  trafo_1044_4044a.switchOffSignal2.value = false;
  trafo_1044_4044b.switchOffSignal1.value = false;
  trafo_1044_4044b.switchOffSignal2.value = false;
  trafo_1045_4045a.switchOffSignal1.value = false;
  trafo_1045_4045a.switchOffSignal2.value = false;
  trafo_1045_4045b.switchOffSignal1.value = false;
  trafo_1045_4045b.switchOffSignal2.value = false;
  trafo_2031_4031.switchOffSignal1.value = false;
  trafo_2031_4031.switchOffSignal2.value = false;
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
end FullDynamicModel_initialized;
