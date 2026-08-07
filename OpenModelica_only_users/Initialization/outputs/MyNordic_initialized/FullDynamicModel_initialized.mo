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
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g01(u0Pu = Complex(1.0673127125350448, 0.04818852208861453), LambdaQ10Pu = -0.26751177895069644, U0Pu = 1.0684, Mqs0Pu = 0.4726605479389179, QStator0Pu = 0.5834252167706817, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2675120511117248, Q0Pu = -0.5834252121231129, Cos2Eta0 = 0.93922753939371, sStator0Pu = Complex(-5.999999999790165, -0.5834252167706817), Id0Pu = -0.3023788613558276, RQ2PPu = 0.0, Ce0Pu = 0.750994882462547, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.634788860100638, 0.2922227581574255), s0Pu = Complex(-6.0, -0.5834252121231129), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4198319346608176, RQ1PPu = 0.019257748114119334, P0Pu = -6.0, Mds0Pu = 0.8164136737126765, IStator0Pu = 5.6423611760365295, UPhase0 = 0.045118752854533255, MdSat0PPu = 0.8198319346608177, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.505896256234502, MdPPuEfd = 0.0, PNomTurb = 760.0, Lambdad0Pu = 1.0063031566772838, Lambdaf0Pu = 1.228824251320011, UBaseHV = 15, PNomAlt = 760.0, LambdaAD0Pu = 1.051659985880658, Ud0Pu = 0.36248546057875514, LambdaAirGap0Pu = 1.085150415100371, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.505896256234502, UBaseLV = 15, Cm0Pu = 0.7905209289079441, Uf0Pu = 0.0010714696061888723, uStator0Pu = Complex(1.0673127125350448, 0.04818852208861453), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.051659985880658, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.5851539539310546, SNom = 800.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.23355700711205507, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6371877812649468, Uq0Pu = 1.0050287811147538, Theta0 = 0.3912688603394807, QGen0Pu = 0.5834252121231129, SnTfo = 800.0, Pm0Pu = 0.7905209289079441, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.634788860100638, 0.2922227625118839), Lambdaq0Pu = -0.3630902183014668, Sin2Eta0 = 0.060772460606290164, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.26751177895069644, UStator0Pu = 1.0684, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3461501074849475, MrcPPu = 0.0, Mi0Pu = 0.7955229504183017, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {25, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g02(u0Pu = Complex(1.0522905243087015, 0.09421731502286479), LambdaQ10Pu = -0.19478280686771166, U0Pu = 1.0565, Mqs0Pu = 0.48024975324155267, QStator0Pu = 0.17237478257367161, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.1947828311501346, Q0Pu = -0.17237478399623002, Cos2Eta0 = 0.9664798792944137, sStator0Pu = Complex(-3.0000000001273697, -0.17237478257367161), Id0Pu = -0.143816966824488, RQ2PPu = 0.0, Ce0Pu = 0.5004494304181091, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.8428008367303006, -0.09072235830306326), s0Pu = Complex(-3.0, -0.17237478399623002), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.43122269137401825, RQ1PPu = 0.019257748114119334, P0Pu = -3.0, Mds0Pu = 0.8295223010535911, IStator0Pu = 2.8442480805752264, UPhase0 = 0.0892973465909207, MdSat0PPu = 0.8312226913740183, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.3319910491367188, MdPPuEfd = 0.0, PNomTurb = 570.0, Lambdad0Pu = 1.0243374074309393, Lambdaf0Pu = 1.2026147817648145, UBaseHV = 15, PNomAlt = 570.0, LambdaAD0Pu = 1.0459099524546125, Ud0Pu = 0.2622500292663955, LambdaAirGap0Pu = 1.063892842326929, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3319910491367186, UBaseLV = 15, Cm0Pu = 0.5267888741243253, Uf0Pu = 0.0009477332312614353, uStator0Pu = Complex(1.0522905243087015, 0.09421731502286479), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0459099524546123, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.402095841196546, SNom = 600.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.09200685232025115, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.45169888033273287, Uq0Pu = 1.0234340096702739, Theta0 = 0.34014513175829153, QGen0Pu = 0.17237478399623002, SnTfo = 600.0, Pm0Pu = 0.5267888741243253, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.8428008367303006, -0.09072235965493174), Lambdaq0Pu = -0.2625376632000445, Sin2Eta0 = 0.03352012070558613, DPu = 0, PGen0Pu = 3.0, LambdaQ20Pu = -0.19478280686771166, UStator0Pu = 1.0565, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.2508477851673709, MrcPPu = 0.0, Mi0Pu = 0.8178146430917839, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g03(u0Pu = Complex(1.0425107842480787, 0.18897490501771994), LambdaQ10Pu = -0.2911320091765474, U0Pu = 1.0595, Mqs0Pu = 0.4777694741455587, QStator0Pu = 0.20915463444069926, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2911323694962468, Q0Pu = -0.20915462307466282, Cos2Eta0 = 0.9261072107311318, sStator0Pu = Complex(-5.49999999793969, -0.20915463444069926), Id0Pu = -0.3007822943725227, RQ2PPu = 0.0, Ce0Pu = 0.7868157866033778, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.143097798403204, -0.7316584215726619), s0Pu = Complex(-5.5, -0.20915462307466282), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.42911986627014104, RQ1PPu = 0.019257748114119334, P0Pu = -5.5, Mds0Pu = 0.8252381826150561, IStator0Pu = 5.194880075020421, UPhase0 = 0.17932185686275912, MdSat0PPu = 0.8291198662701412, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.4666792333985528, MdPPuEfd = 0.0, PNomTurb = 665.0, Lambdad0Pu = 0.9855537536908141, Lambdaf0Pu = 1.2032215958935808, UBaseHV = 15, PNomAlt = 665.0, LambdaAD0Pu = 1.0306710978466924, Ud0Pu = 0.3922967794265909, LambdaAirGap0Pu = 1.0709999852964542, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.466679233398553, UBaseLV = 15, Cm0Pu = 0.8282271437930292, Uf0Pu = 0.0010435660584909683, uStator0Pu = Complex(1.0425107842480787, 0.18897490501771994), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0306710978466924, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.5438728772616346, SNom = 700.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.09569012992219161, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.678439830127261, Uq0Pu = 0.9841968740305596, Theta0 = 0.558617165151607, QGen0Pu = 0.20915462307466282, SnTfo = 700.0, Pm0Pu = 0.8282271437930292, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.143097798403204, -0.7316584106701018), Lambdaq0Pu = -0.39289834401533597, Sin2Eta0 = 0.07389278926886851, DPu = 0, PGen0Pu = 5.5, LambdaQ20Pu = -0.2911320091765474, UStator0Pu = 1.0595, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3792953082888478, MrcPPu = 0.0, Mi0Pu = 0.7995627505625938, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {85, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g04(u0Pu = Complex(1.023769771957012, 0.14437681263654345), LambdaQ10Pu = -0.26107466948926306, U0Pu = 1.0339, Mqs0Pu = 0.48591349910863346, QStator0Pu = 0.30389867126125863, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.26107477882602187, Q0Pu = -0.3038986674595828, Cos2Eta0 = 0.9378227461717856, sStator0Pu = Complex(-3.9999999994638697, -0.30389867126125863), Id0Pu = -0.26383743441168794, RQ2PPu = 0.0, Ce0Pu = 0.6675030203352078, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-3.8719847211453158, -0.2492026548792125), s0Pu = Complex(-4.0, -0.3038986674595828), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4422031149206465, RQ1PPu = 0.019257748114119334, P0Pu = -4.0, Mds0Pu = 0.8393051348240034, IStator0Pu = 3.8799958301692583, UPhase0 = 0.14010078991931074, MdSat0PPu = 0.8422031149206466, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.3943565501934787, MdPPuEfd = 0.0, PNomTurb = 570.0, Lambdad0Pu = 0.9743580229892668, Lambdaf0Pu = 1.1779755852326055, UBaseHV = 15, PNomAlt = 570.0, LambdaAD0Pu = 1.01393363815102, Ud0Pu = 0.3491064087246851, LambdaAirGap0Pu = 1.047005951613084, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3943565501934787, UBaseLV = 15, Cm0Pu = 0.7026347582475871, Uf0Pu = 0.0009921072965932323, uStator0Pu = Complex(1.023769771957012, 0.14437681263654345), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.01393363815102, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.4677437370457669, SNom = 600.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.16220911057628146, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.5903953651165776, Uq0Pu = 0.9731772322590336, Theta0 = 0.48453029494224836, QGen0Pu = 0.3038986674595828, SnTfo = 600.0, Pm0Pu = 0.7026347582475871, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.8719847211453158, -0.24920265116580356), Lambdaq0Pu = -0.3496340835935085, Sin2Eta0 = 0.06217725382821431, DPu = 0, PGen0Pu = 4.0, LambdaQ20Pu = -0.26107466948926306, UStator0Pu = 1.0339, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.34442950502293757, MrcPPu = 0.0, Mi0Pu = 0.8173322133893609, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-85, 30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g05(u0Pu = Complex(1.005545121249766, -0.2203255979925926), LambdaQ10Pu = -0.2744849186087174, U0Pu = 1.0294, Mqs0Pu = 0.4773157780356273, QStator0Pu = 0.6008914881537237, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.27448511541022097, Q0Pu = -0.6008914733790616, Cos2Eta0 = 0.9344731745724674, sStator0Pu = Complex(-2.000000003237285, -0.6008914881537237), Id0Pu = -0.49702628964899, RQ2PPu = 0.0, Ce0Pu = 0.8013169679143395, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-1.7729184260746864, 0.9860430574848098), s0Pu = Complex(-2.0, -0.6008914733790616), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.42791835575171666, RQ1PPu = 0.019257748114119334, P0Pu = -2.0, Mds0Pu = 0.8244545256979018, IStator0Pu = 2.028674613067696, UPhase0 = -0.21570180947983567, MdSat0PPu = 0.8279183557517169, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.6615772039071457, MdPPuEfd = 0.0, PNomTurb = 237.5, Lambdad0Pu = 0.9620017802856509, Lambdaf0Pu = 1.2320353947808989, UBaseHV = 15, PNomAlt = 237.5, LambdaAD0Pu = 1.0365557237329994, Ud0Pu = 0.369707402321619, LambdaAirGap0Pu = 1.0722825406512055, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.6615772039071457, UBaseLV = 15, Cm0Pu = 0.8434915451729889, Uf0Pu = 0.0011822391250075328, uStator0Pu = Complex(1.005545121249766, -0.2203255979925926), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0365557237329994, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.7490286356917324, SNom = 250.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.7697571570819772, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6414422632713068, Uq0Pu = 0.9607188957591083, Theta0 = 0.15165348428050224, QGen0Pu = 0.6008914733790616, SnTfo = 250.0, Pm0Pu = 0.8434915451729889, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.7729184260746864, 0.9860430721779964), Lambdaq0Pu = -0.370701454900917, Sin2Eta0 = 0.06552682542753288, DPu = 0, PGen0Pu = 2.0, LambdaQ20Pu = -0.2744849186087174, UStator0Pu = 1.0294, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.36735529376033793, MrcPPu = 0.0, Mi0Pu = 0.8017076255807037, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-45, 71}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g06(u0Pu = Complex(0.5130181059337189, -0.8681491709286945), LambdaQ10Pu = -0.641620588845529, U0Pu = 1.0084, Mqs0Pu = 1.6086821952640515, QStator0Pu = 1.3857093135744443, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6416205975825539, Q0Pu = -1.3857092847346686, Cos2Eta0 = 0.6401673137004865, sStator0Pu = Complex(-3.600000048803789, -1.3857093135744443), Id0Pu = -0.8672640869510218, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.9013718857988311, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.6331807016527171, 3.7725853406284555), s0Pu = Complex(-3.6, -1.3857092847346686), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5919812470688177, RQ1PPu = 0.004539231606100098, P0Pu = -3.6, Mds0Pu = 1.7825937839412465, IStator0Pu = 3.825352059278822, UPhase0 = -1.0370703185127026, MdSat0PPu = 1.791981247068818, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.756919440494591, MdPPuEfd = 0.0, PNomTurb = 360.0, Lambdad0Pu = 0.725715229834009, Lambdaf0Pu = 1.0734563776525508, UBaseHV = 15, PNomAlt = 360.0, LambdaAD0Pu = 0.8558048428766623, Ud0Pu = 0.7007746147898527, LambdaAirGap0Pu = 1.0696162490974706, RfPPu = 0.001005787441118331, IRotor0Pu = 2.756919440494591, UBaseLV = 15, Cm0Pu = 1.0015243175542567, Uf0Pu = 0.001352621926548505, uStator0Pu = Complex(0.5130181059337189, -0.8681491709286945), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8558048428766618, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.344838751460776, SNom = 400.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7947587977623839, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.40303275558483587, Uq0Pu = 0.7251106807006318, Theta0 = -0.26873783593626843, QGen0Pu = 1.3857092847346686, SnTfo = 400.0, Pm0Pu = 1.0015243175542567, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.6331807016527171, 3.7725853968443577), Lambdaq0Pu = -0.7020755109202792, Sin2Eta0 = 0.3598326862995134, DPu = 0, PGen0Pu = 3.6, LambdaQ20Pu = -0.641620588845529, UStator0Pu = 1.0084, MqPPu = 1.85, ThetaInternal0 = 0.7683324825764342, MrcPPu = 0.0, Mi0Pu = 1.7200147098089151, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {35, -60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g07(u0Pu = Complex(0.36418611614266183, -0.9464498311104099), LambdaQ10Pu = -0.6591868724572116, U0Pu = 1.0141, Mqs0Pu = 1.6101327667961116, QStator0Pu = 0.604206117423788, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6591868830018627, Q0Pu = -0.6042061072727909, Cos2Eta0 = 0.6193199287812317, sStator0Pu = Complex(-1.8000000263804936, -0.604206117423788), Id0Pu = -0.8398668597302744, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.90131458046667, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.0813733349930463, 1.8705322807171398), s0Pu = Complex(-1.8, -0.6042061072727909), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.594072814603162, RQ1PPu = 0.004539231606100098, P0Pu = -1.8, Mds0Pu = 1.7842011740173132, IStator0Pu = 1.8723014546615708, UPhase0 = -1.2034688371651459, MdSat0PPu = 1.7940728146031621, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.6824536486917943, MdPPuEfd = 0.0, PNomTurb = 180.0, Lambdad0Pu = 0.7148070201371288, Lambdaf0Pu = 1.0525597055723377, UBaseHV = 15, PNomAlt = 180.0, LambdaAD0Pu = 0.84078704909667, Ud0Pu = 0.7199556362154503, LambdaAirGap0Pu = 1.0683867317832048, RfPPu = 0.001005787441118331, IRotor0Pu = 2.6824536486917943, UBaseLV = 15, Cm0Pu = 1.0014606449629668, Uf0Pu = 0.0013160869225542684, uStator0Pu = Complex(0.36418611614266183, -0.9464498311104099), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8407870490966697, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.3085139749716068, SNom = 200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.6930719491893057, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.41352369002122, Uq0Pu = 0.714186734602097, Theta0 = -0.41404815088867947, QGen0Pu = 0.6042061072727909, SnTfo = 200.0, Pm0Pu = 1.0014606449629668, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.0813733349930463, 1.8705323085902428), Lambdaq0Pu = -0.7212154365050457, Sin2Eta0 = 0.3806800712187684, DPu = 0, PGen0Pu = 1.8, LambdaQ20Pu = -0.6591868724572116, UStator0Pu = 1.0141, MqPPu = 1.85, ThetaInternal0 = 0.7894206862764664, MrcPPu = 0.0, Mi0Pu = 1.7179368003594084, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-53, -39}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g08(u0Pu = Complex(1.0049167764763345, -0.303681267707465), LambdaQ10Pu = -0.2829356292483998, U0Pu = 1.0498, Mqs0Pu = 0.4679079647220903, QStator0Pu = 2.3259334737536226, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2829360204218056, Q0Pu = -2.3259334110479535, Cos2Eta0 = 0.9335731928611755, sStator0Pu = Complex(-7.5000000189493665, -2.3259334737536226), Id0Pu = -0.550599058833179, RQ2PPu = 0.0, Ce0Pu = 0.8839016968813529, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-6.197856025686043, 4.187517100423034), s0Pu = Complex(-7.5, -2.3259334110479535), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.41217056582545725, RQ1PPu = 0.019257748114119334, P0Pu = -7.5, Mds0Pu = 0.8082046663381561, IStator0Pu = 7.479887653171054, UPhase0 = -0.29346974082570504, MdSat0PPu = 0.8121705658254574, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.7637700058571968, MdPPuEfd = 0.0, PNomTurb = 807.5, Lambdad0Pu = 0.9781056695384737, Lambdaf0Pu = 1.268197881993709, UBaseHV = 15, PNomAlt = 807.5, LambdaAD0Pu = 1.0606955283634505, Ud0Pu = 0.38480273875946486, LambdaAirGap0Pu = 1.0977831277362335, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7637700058571968, UBaseLV = 15, Cm0Pu = 0.9304228388224767, Uf0Pu = 0.0012549509607714087, uStator0Pu = Complex(1.0049167764763345, -0.303681267707465), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0606955283634505, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.8566000061654704, SNom = 850.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.8763469012367544, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6864527763688375, Uq0Pu = 0.9767327639857359, Theta0 = 0.08182698392827208, QGen0Pu = 2.3259334110479535, SnTfo = 850.0, Pm0Pu = 0.9304228388224767, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-6.197856025686043, 4.1875171628219015), Lambdaq0Pu = -0.3859039368771312, Sin2Eta0 = 0.06642680713882462, DPu = 0, PGen0Pu = 7.5, LambdaQ20Pu = -0.2829356292483998, UStator0Pu = 1.0498, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3752967247539771, MrcPPu = 0.0, Mi0Pu = 0.7855998429699276, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-77, 0}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g09(u0Pu = Complex(0.9983966221127623, -0.02838353314558008), LambdaQ10Pu = -0.25226958596450927, U0Pu = 0.9988, Mqs0Pu = 0.48967994941020304, QStator0Pu = 2.0127715076146786, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.25226964181653805, Q0Pu = -2.012771474816609, Cos2Eta0 = 0.9406151602370517, sStator0Pu = Complex(-6.68500000093242, -2.0127715076146786), Id0Pu = -0.41482654468207675, RQ2PPu = 0.0, Ce0Pu = 0.6694771533370131, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-6.633061649303433, 2.2045759683546846), s0Pu = Complex(-6.685, -2.012771474816609), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.44841598282763667, RQ1PPu = 0.019257748114119334, P0Pu = -6.685, Mds0Pu = 0.8458108217085327, IStator0Pu = 6.989825619323481, UPhase0 = -0.02842146053068533, MdSat0PPu = 0.8484159828276367, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.5182965195646125, MdPPuEfd = 0.0, PNomTurb = 950.0, Lambdad0Pu = 0.9417747938674003, Lambdaf0Pu = 1.1826218955184895, UBaseHV = 15, PNomAlt = 950.0, LambdaAD0Pu = 1.0039987755697117, Ud0Pu = 0.33582689584868386, LambdaAirGap0Pu = 1.035206990667917, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.5182965195646128, UBaseLV = 15, Cm0Pu = 0.7047127929863295, Uf0Pu = 0.0010802925946330928, uStator0Pu = Complex(0.9983966221127623, -0.02838353314558008), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0039987755697117, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.5982068626995922, SNom = 1000.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.6446027710916408, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.5625793808100665, Uq0Pu = 0.9406496351057801, Theta0 = 0.31448989854455744, QGen0Pu = 2.012771474816609, SnTfo = 1000.0, Pm0Pu = 0.7047127929863295, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-6.633061649303433, 2.2045760012054263), Lambdaq0Pu = -0.33665654893804803, Sin2Eta0 = 0.05938483976294821, DPu = 0, PGen0Pu = 6.685, LambdaQ20Pu = -0.25226958596450927, UStator0Pu = 0.9988, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.3429113590752428, MrcPPu = 0.0, Mi0Pu = 0.8246620469224575, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-25, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g10(u0Pu = Complex(1.0155490889870418, 0.01750822257082255), LambdaQ10Pu = -0.25303620109728403, U0Pu = 1.0157, Mqs0Pu = 0.4780998462014395, QStator0Pu = 2.5570395119466225, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.25303630353118284, Q0Pu = -2.5570394753960186, Cos2Eta0 = 0.9440825699501009, sStator0Pu = Complex(-5.999999999369862, -2.5570395119466225), Id0Pu = -0.5440068659024789, RQ2PPu = 0.0, Ce0Pu = 0.7512885484777886, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-5.949774277989221, 2.4153135773450796), s0Pu = Complex(-6.0, -2.5570394753960186), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4287328047629287, RQ1PPu = 0.019257748114119334, P0Pu = -6.0, Mds0Pu = 0.8258088252570321, IStator0Pu = 6.421335827519741, UPhase0 = 0.017238446132258327, MdSat0PPu = 0.8287328047629288, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.7086611794132947, MdPPuEfd = 0.0, PNomTurb = 760.0, Lambdad0Pu = 0.9581137623299382, Lambdaf0Pu = 1.2407337544992267, UBaseHV = 15, PNomAlt = 760.0, LambdaAD0Pu = 1.03971479221531, Ud0Pu = 0.340477624953893, LambdaAirGap0Pu = 1.0700627178142645, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7086611794132949, UBaseLV = 15, Cm0Pu = 0.7908300510292511, Uf0Pu = 0.0012157401371021693, uStator0Pu = Complex(1.0155490889870418, 0.01750822257082255), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0397147922153098, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.7985907151718892, SNom = 800.0, LQ2PPu = 100000.0, QStator0PuQNom = 1.0236350406366843, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.5901955676967674, Uq0Pu = 0.9569333711945446, Theta0 = 0.3590716086250773, QGen0Pu = 2.5570394753960186, SnTfo = 800.0, Pm0Pu = 0.7908300510292511, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.949774277989221, 2.4153136133360564), Lambdaq0Pu = -0.34156563868569795, Sin2Eta0 = 0.05591743004989903, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.25303620109728403, UStator0Pu = 1.0157, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.34183316249281903, MrcPPu = 0.0, Mi0Pu = 0.8063658327429691, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-35, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g11(u0Pu = Complex(0.8927198800042867, -0.49567774394775055), LambdaQ10Pu = -0.29464609025446786, U0Pu = 1.0211, Mqs0Pu = 0.4817478634264616, QStator0Pu = 0.607278204173738, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2946463325022098, Q0Pu = -0.6072781814467647, Cos2Eta0 = 0.9226634089754475, sStator0Pu = Complex(-2.5000000126190254, -0.607278204173738), Id0Pu = -0.4985346119650569, RQ2PPu = 0.0, Ce0Pu = 0.8347440202099278, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-1.8518144068225202, 1.7084657830440269), s0Pu = Complex(-2.5, -0.6072781814467647), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4359487732440626, RQ1PPu = 0.019257748114119334, P0Pu = -2.5, Mds0Pu = 0.8321099459184338, IStator0Pu = 2.5195380561000364, UPhase0 = -0.5068607286940002, MdSat0PPu = 0.8359487732440628, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.6301837235761962, MdPPuEfd = 0.0, PNomTurb = 285.0, Lambdad0Pu = 0.9429441834248837, Lambdaf0Pu = 1.209510695640371, UBaseHV = 15, PNomAlt = 285.0, LambdaAD0Pu = 1.0177243752196423, Ud0Pu = 0.39503024253711305, LambdaAirGap0Pu = 1.0595184590997997, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.6301837235761965, UBaseLV = 15, Cm0Pu = 0.8786779160104502, Uf0Pu = 0.0011599021546698745, uStator0Pu = Complex(0.8927198800042867, -0.49567774394775055), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0177243752196423, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.7159828669223118, SNom = 300.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.6482822512027295, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6758731950588893, Uq0Pu = 0.9415924370347659, Theta0 = -0.10962874526172738, QGen0Pu = 0.6072781814467647, SnTfo = 300.0, Pm0Pu = 0.8786779160104502, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.8518144068225202, 1.708465808502151), Lambdaq0Pu = -0.39602731176104317, Sin2Eta0 = 0.07733659102455263, DPu = 0, PGen0Pu = 2.5, LambdaQ20Pu = -0.29464609025446786, UStator0Pu = 1.0211, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.39723198343227284, MrcPPu = 0.0, Mi0Pu = 0.8050141368342417, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {35, 72}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g12(u0Pu = Complex(0.8661317722878207, -0.5387167651313246), LambdaQ10Pu = -0.2967541253351073, U0Pu = 1.02, Mqs0Pu = 0.47779095115065784, QStator0Pu = 0.9834015861499019, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.2967544161552445, Q0Pu = -0.9834016174330522, Cos2Eta0 = 0.923217049182703, sStator0Pu = Complex(-3.0999999805425023, -0.9834015861499019), Id0Pu = -0.5933763290250214, RQ2PPu = 0.0, Ce0Pu = 0.8873740936582852, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.0715432102304865, 2.42385366943974), s0Pu = Complex(-3.1, -0.9834016174330522), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.4293075875121276, RQ1PPu = 0.019257748114119334, P0Pu = -3.1, Mds0Pu = 0.8252752792602274, IStator0Pu = 3.188472629272187, UPhase0 = -0.5564247861345795, MdSat0PPu = 0.8293075875121279, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.742465547094215, MdPPuEfd = 0.0, PNomTurb = 332.5, Lambdad0Pu = 0.9399966894553916, Lambdaf0Pu = 1.233999085526111, UBaseHV = 15, PNomAlt = 332.5, LambdaAD0Pu = 1.0290031388091447, Ud0Pu = 0.3992535057582718, LambdaAirGap0Pu = 1.0709391407483022, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.7424655470942148, UBaseLV = 15, Cm0Pu = 0.9340779933245107, Uf0Pu = 0.0012397924928847042, uStator0Pu = Complex(0.8661317722878207, -0.5387167651313246), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0290031388091445, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.8341742600991735, SNom = 350.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.8998301739381608, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.6912389484071819, Uq0Pu = 0.9386142115585773, Theta0 = -0.15424513682011143, QGen0Pu = 0.9834016174330522, SnTfo = 350.0, Pm0Pu = 0.9340779933245107, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.0715432102304865, 2.4238536333215057), Lambdaq0Pu = -0.4004402584163218, Sin2Eta0 = 0.07678295081729725, DPu = 0, PGen0Pu = 3.1, LambdaQ20Pu = -0.2967541253351073, UStator0Pu = 1.02, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.4021796493144681, MrcPPu = 0.0, Mi0Pu = 0.7985944071852089, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-4, 41}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g13(u0Pu = Complex(0.593522400229829, -0.8258451189087591), LambdaQ10Pu = -3.2299630502073135e-5, U0Pu = 1.017, Mqs0Pu = 0.7536334805761887, QStator0Pu = 0.501215023136411, MdPPuEfdNom = 0.6460756808250417, LambdaAQ0Pu = -3.229963050338665e-5, Q0Pu = -0.5012150205926487, Cos2Eta0 = 0.9999999990384804, sStator0Pu = Complex(-3.5394681074940593e-9, -0.501215023136411), Id0Pu = -0.1642789258811402, RQ2PPu = 0.0, Ce0Pu = 5.397631516637648e-5, LdPPu = 0.15, LfPPu = 0.168, i0Pu = Complex(0.40020340376837826, 0.28762013523627544), s0Pu = Complex(0.0, -0.5012150205926487), md = 0.1, RTfPu = 0, MdPPu = 1.4000000000000001, LqPPu = 0.15, UNom = 15, H = 2.0, UNomLV = 15, MqSat0PPu = 0.6912786739501486, RQ1PPu = 0.028747361595973596, P0Pu = 0.0, Mds0Pu = 1.2412786738901933, IStator0Pu = 0.4928367975775919, UPhase0 = -0.9476399362543135, MdSat0PPu = 1.241278673950149, LQ1PPu = 0.05312500000000006, Efd0Pu = 1.4048263153619827, MdPPuEfd = 0.0, PNomTurb = 285.0, Lambdad0Pu = 1.0170000523155578, Lambdaf0Pu = 1.2102210490411667, UBaseHV = 15, PNomAlt = 285.0, LambdaAD0Pu = 1.0416418911977288, Ud0Pu = -0.0002892495505767423, LambdaAirGap0Pu = 1.0416418916985084, RfPPu = 0.000713014145051691, IRotor0Pu = 1.4048263153619829, UBaseLV = 15, Cm0Pu = 5.6817173859343665e-5, Uf0Pu = 0.0007154721672813866, uStator0Pu = Complex(0.593522400229829, -0.8258451189087591), nd = 6.0257, LDPPu = 0.0750000000000001, LambdaD0Pu = 1.0416418911977288, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.003447368115702, SNom = 300.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.5350575754280501, XTfPu = 0, RDPPu = 0.014323944878270586, MsalPu = 0.5500000000000002, Iq0Pu = -4.672447121434331e-5, Uq0Pu = 1.0169999588666154, Theta0 = -0.9479243507621565, QGen0Pu = 0.5012150205926487, SnTfo = 300.0, Pm0Pu = 5.6817173859343665e-5, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(0.40020340376837826, 0.28762013952214943), Lambdaq0Pu = -3.930830118553815e-5, Sin2Eta0 = 9.615198029832245e-10, DPu = 0, PGen0Pu = -0.0, LambdaQ20Pu = -3.2299630502073135e-5, UStator0Pu = 1.017, MqPPu = 0.85, ThetaInternal0 = -0.00028441450784305415, MrcPPu = 0.0, Mi0Pu = 1.241278673421313, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-70, -29}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g14(u0Pu = Complex(0.6733585648814339, -0.7996558028932298), LambdaQ10Pu = -0.6123513291606324, U0Pu = 1.0454, Mqs0Pu = 1.5514238466923154, QStator0Pu = 2.95855360460298, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6123513461843795, Q0Pu = -2.958553669147113, Cos2Eta0 = 0.6982615260412299, sStator0Pu = Complex(-6.299999923349767, -2.95855360460298), Id0Pu = -0.8626767069943331, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.90135693191827, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-1.716900936481709, 6.432655188339704), s0Pu = Complex(-6.3, -2.958553669147113), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5288850098871105, RQ1PPu = 0.004539231606100098, P0Pu = -6.3, Mds0Pu = 1.7191453436320252, IStator0Pu = 6.657837514131266, UPhase0 = -0.8709296483328997, MdSat0PPu = 1.7288850098871107, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.87302901157469, MdPPuEfd = 0.0, PNomTurb = 630.0, Lambdad0Pu = 0.8021232234750666, Lambdaf0Pu = 1.158342809385376, UBaseHV = 15, PNomAlt = 630.0, LambdaAD0Pu = 0.9315247295242166, Ud0Pu = 0.6711355572691473, LambdaAirGap0Pu = 1.1147701524928746, RfPPu = 0.001005787441118331, IRotor0Pu = 2.87302901157469, UBaseLV = 15, Cm0Pu = 1.0015077021314112, Uf0Pu = 0.0014095885355172853, uStator0Pu = Complex(0.6733585648814339, -0.7996558028932298), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.9315247295242165, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.4014775666217998, SNom = 700.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.9696267805648405, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4005215076350621, Uq0Pu = 0.801522441213614, Theta0 = -0.17383968282233173, QGen0Pu = 2.958553669147113, SnTfo = 700.0, Pm0Pu = 1.0015077021314112, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-1.716900936481709, 6.432655092485672), Lambdaq0Pu = -0.6724295723296388, Sin2Eta0 = 0.30173847395877007, DPu = 0, PGen0Pu = 6.3, LambdaQ20Pu = -0.6123513291606324, UStator0Pu = 1.0454, MqPPu = 1.85, ThetaInternal0 = 0.6970899655105678, MrcPPu = 0.0, Mi0Pu = 1.6685373150953566, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g15(u0Pu = Complex(0.6409072623553019, -0.826019449565343), LambdaQ10Pu = -0.6538129840313053, U0Pu = 1.0455, Mqs0Pu = 1.571615670137453, QStator0Pu = 3.779062830440687, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.653813004680361, Q0Pu = -3.7790627313354395, Cos2Eta0 = 0.6464148905069905, sStator0Pu = Complex(-10.800000127729653, -3.779062830440687), Id0Pu = -0.8089071886786028, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.9012476557390301, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-3.476646735401187, 10.377227634468005), s0Pu = Complex(-10.8, -3.7790627313354395), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.552161424071836, RQ1PPu = 0.004539231606100098, P0Pu = -10.8, Mds0Pu = 1.7415200669090696, IStator0Pu = 10.944127608432778, UPhase0 = -0.9109251514871701, MdSat0PPu = 1.7521614240718362, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.6925489456011977, MdPPuEfd = 0.0, PNomTurb = 1080.0, Lambdad0Pu = 0.7626842402400489, Lambdaf0Pu = 1.096589972141934, UBaseHV = 15, PNomAlt = 1080.0, LambdaAD0Pu = 0.8840203185418393, Ud0Pu = 0.7157837599845863, LambdaAirGap0Pu = 1.0995287029832266, RfPPu = 0.001005787441118331, IRotor0Pu = 2.6925489456011977, UBaseLV = 15, Cm0Pu = 1.0013862841544778, Uf0Pu = 0.0013210399580888238, uStator0Pu = Complex(0.6409072623553019, -0.826019449565343), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8840203185418393, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.3134385100493646, SNom = 1200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7224803938237604, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4212274405816221, Uq0Pu = 0.7620523990791764, Theta0 = -0.15682513299853107, QGen0Pu = 3.7790627313354395, SnTfo = 1200.0, Pm0Pu = 1.0013862841544778, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.476646735401187, 10.377227789100747), Lambdaq0Pu = -0.7169971207676042, Sin2Eta0 = 0.3535851094930097, DPu = 0, PGen0Pu = 10.8, LambdaQ20Pu = -0.6538129840313053, UStator0Pu = 1.0455, MqPPu = 1.85, ThetaInternal0 = 0.7541000184886392, MrcPPu = 0.0, Mi0Pu = 1.6814444021732342, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {80, -89}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g16(u0Pu = Complex(0.45995015187880917, -0.9473465404943748), LambdaQ10Pu = -0.6348574193279723, U0Pu = 1.0531, Mqs0Pu = 1.56271625396749, QStator0Pu = 2.226254664151481, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.63485744140884, Q0Pu = -2.2262547056075053, Cos2Eta0 = 0.6707053116975112, sStator0Pu = Complex(-5.99999991461418, -2.226254664151481), Id0Pu = -0.7642937915666811, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8582733583124791, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-0.5867039787116679, 6.048626527831493), s0Pu = Complex(-6.0, -2.2262547056075053), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.541885688083343, RQ1PPu = 0.004539231606100098, P0Pu = -6.0, Mds0Pu = 1.7316585516937053, IStator0Pu = 6.0770143443535405, UPhase0 = -1.1188044087447921, MdSat0PPu = 1.741885688083343, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.6331133844239196, MdPPuEfd = 0.0, PNomTurb = 630.0, Lambdad0Pu = 0.7914008407946369, Lambdaf0Pu = 1.1139222819841588, UBaseHV = 15, PNomAlt = 630.0, LambdaAD0Pu = 0.906044909529639, Ud0Pu = 0.695472137513395, LambdaAirGap0Pu = 1.1063278668625998, RfPPu = 0.001005787441118331, IRotor0Pu = 2.6331133844239196, UBaseLV = 15, Cm0Pu = 0.9536370647916435, Uf0Pu = 0.0012918792063873962, uStator0Pu = Complex(0.45995015187880917, -0.9473465404943748), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.9060449095296392, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.2844455533775216, SNom = 700.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.7296254965129614, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4117409119460331, Uq0Pu = 0.7907832294267179, Theta0 = -0.3974468951720608, QGen0Pu = 2.2262547056075053, SnTfo = 700.0, Pm0Pu = 0.9536370647916435, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-0.5867039787116679, 6.048626437699934), Lambdaq0Pu = -0.696618578200745, Sin2Eta0 = 0.3292946883024889, DPu = 0, PGen0Pu = 6.0, LambdaQ20Pu = -0.6348574193279723, UStator0Pu = 1.0531, MqPPu = 1.85, ThetaInternal0 = 0.7213575135727314, MrcPPu = 0.0, Mi0Pu = 1.6760267504228452, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {20, -109}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g17(u0Pu = Complex(0.6901413976369801, -0.7363351758999945), LambdaQ10Pu = -0.7455843234421836, U0Pu = 1.0092, Mqs0Pu = 1.6515346048635517, QStator0Pu = 0.48727239238036457, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.7455843343073052, Q0Pu = -0.48727234957944354, Cos2Eta0 = 0.47699245162528364, sStator0Pu = Complex(-5.300000045665749, -0.48727239238036457), Id0Pu = -0.752486522138881, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8844922291001156, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-3.2390804010919703, 4.161931448115489), s0Pu = Complex(-5.3, -0.48727234957944354), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.6413003891458309, RQ1PPu = 0.004539231606100098, P0Pu = -5.3, Mds0Pu = 1.8300788864704223, IStator0Pu = 5.273833116413232, UPhase0 = -0.8177699821654307, MdSat0PPu = 1.841300389145831, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.33533188133772, MdPPuEfd = 0.0, PNomTurb = 540.0, Lambdad0Pu = 0.5991574429021506, Lambdaf0Pu = 0.8963987276443814, UBaseHV = 15, PNomAlt = 540.0, LambdaAD0Pu = 0.7120304212229827, Ud0Pu = 0.8125952633311787, LambdaAirGap0Pu = 1.0309623272998125, RfPPu = 0.001005787441118331, IRotor0Pu = 2.33533188133772, UBaseLV = 15, Cm0Pu = 0.9827691434445729, Uf0Pu = 0.0011457792571184016, uStator0Pu = Complex(0.6901413976369801, -0.7363351758999945), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.7120304212229827, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.1391862835793756, SNom = 600.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.18631325582134278, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.4542643920472122, Uq0Pu = 0.5984760463140797, Theta0 = 0.11822166030182252, QGen0Pu = 0.48727234957944354, SnTfo = 600.0, Pm0Pu = 0.9827691434445729, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-3.2390804010919703, 4.1619315101331), Lambdaq0Pu = -0.813723993114387, Sin2Eta0 = 0.5230075483747162, DPu = 0, PGen0Pu = 5.3, LambdaQ20Pu = -0.7455843234421836, UStator0Pu = 1.0092, MqPPu = 1.85, ThetaInternal0 = 0.9359916424672532, MrcPPu = 0.0, Mi0Pu = 1.7366988794708877, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-78, -88}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g18(u0Pu = Complex(0.7498229712124534, -0.7071831458979548), LambdaQ10Pu = -0.6767014515428932, U0Pu = 1.0307, Mqs0Pu = 1.6019722175092383, QStator0Pu = 2.9342901439852995, MdPPuEfdNom = 0.703890707549778, LambdaAQ0Pu = -0.6767014677236523, Q0Pu = -2.9342902459669675, Cos2Eta0 = 0.6039205098397481, sStator0Pu = Complex(-10.599999903817674, -2.9342901439852995), Id0Pu = -0.7801740765543798, RQ2PPu = 0.01989436788648693, Ce0Pu = 0.8845194821067608, LdPPu = 0.15, LfPPu = 0.1618421052631579, i0Pu = Complex(-5.528389331138777, 9.12731973767612), s0Pu = Complex(-10.6, -2.9342902459669675), md = 0.1, RTfPu = 0, MdPPu = 2.0500000000000003, LqPPu = 0.15, UNom = 15, H = 6.0, UNomLV = 15, MqSat0PPu = 1.5857788050923474, RQ1PPu = 0.004539231606100098, P0Pu = -10.6, Mds0Pu = 1.775158403185913, IStator0Pu = 10.671037986421483, UPhase0 = -0.7561411424858856, MdSat0PPu = 1.7857788050923475, LQ1PPu = 0.28906250000000017, Efd0Pu = 2.55858525521031, MdPPuEfd = 0.0, PNomTurb = 1080.0, Lambdad0Pu = 0.718568885043716, Lambdaf0Pu = 1.037588569306634, UBaseHV = 15, PNomAlt = 1080.0, LambdaAD0Pu = 0.835594996526873, Ud0Pu = 0.7395409016592744, LambdaAirGap0Pu = 1.0752413099579508, RfPPu = 0.001005787441118331, IRotor0Pu = 2.55858525521031, UBaseLV = 15, Cm0Pu = 0.9827994245630676, Uf0Pu = 0.001255313617912717, uStator0Pu = Complex(0.7498229712124534, -0.7071831458979548), nd = 6.0257, LDPPu = 0.07500000000000008, LambdaD0Pu = 0.8355949965268726, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.0015, If0Pu = 1.248090368395273, SNom = 1200.0, LQ2PPu = 0.06250000000000011, QStator0PuQNom = 0.5609769389762865, XTfPu = 0, RDPPu = 0.014323944878270585, MsalPu = 0.20000000000000018, Iq0Pu = -0.42673130033635787, Uq0Pu = 0.7179287880932115, Theta0 = 0.04408445085248923, QGen0Pu = 2.9342902459669675, SnTfo = 1200.0, Pm0Pu = 0.9827994245630676, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-5.528389331138777, 9.127319601668457), Lambdaq0Pu = -0.740711162774106, Sin2Eta0 = 0.39607949016025207, DPu = 0, PGen0Pu = 10.6, LambdaQ20Pu = -0.6767014515428932, UStator0Pu = 1.0307, MqPPu = 1.85, ThetaInternal0 = 0.8002255933383748, MrcPPu = 0.0, Mi0Pu = 1.706562907060297, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-95, -151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g19(u0Pu = Complex(1.0299998805180743, 0.0004961176801866794), LambdaQ10Pu = -0.21164025802745953, U0Pu = 1.03, Mqs0Pu = 0.4781177029364621, QStator0Pu = 1.2123684932418202, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.21164029409319757, Q0Pu = -1.2123684751976584, Cos2Eta0 = 0.9608781454128162, sStator0Pu = Complex(-2.9999999999913087, -1.2123684932418202), Id0Pu = -0.3874331761431987, RQ2PPu = 0.0, Ce0Pu = 0.6007895060677012, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-2.913187971523866, 1.1756537200083967), s0Pu = Complex(-3.0, -1.2123684751976584), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.42788488236160727, RQ1PPu = 0.019257748114119334, P0Pu = -3.0, Mds0Pu = 0.8258396687084347, IStator0Pu = 3.141468743755466, UPhase0 = 0.0004816676692914625, MdSat0PPu = 0.8278848823616073, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.5716456400799932, MdPPuEfd = 0.0, PNomTurb = 475.0, Lambdad0Pu = 0.9907577602839698, Lambdaf0Pu = 1.233772223773684, UBaseHV = 15, PNomAlt = 475.0, LambdaAD0Pu = 1.0488727367054496, Ud0Pu = 0.28505837077947876, LambdaAirGap0Pu = 1.0700119774506427, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.5716456400799932, UBaseLV = 15, Cm0Pu = 0.6324100063870539, Uf0Pu = 0.001118251358998489, uStator0Pu = Complex(1.0299998805180743, 0.0004961176801866794), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.0488727367054496, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.6543638316631508, SNom = 500.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.7765373142170716, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.4946196202571174, Uq0Pu = 0.9897685210434556, Theta0 = 0.28089795497482795, QGen0Pu = 1.2123684751976584, SnTfo = 500.0, Pm0Pu = 0.6324100063870539, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-2.913187971523866, 1.1756537375270024), Lambdaq0Pu = -0.28583323713176517, Sin2Eta0 = 0.03912185458718359, DPu = 0, PGen0Pu = 3.0, LambdaQ20Pu = -0.21164025802745953, UStator0Pu = 1.03, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.2804162873055364, MrcPPu = 0.0, Mi0Pu = 0.8122361405267339, nq = 6.0257) annotation(
    Placement(visible = true, transformation(origin = {-75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g20(u0Pu = Complex(1.0185, 0.0), LambdaQ10Pu = -0.19281429682442314, U0Pu = 1.0185, Mqs0Pu = 0.4900124830405801, QStator0Pu = 3.7738605593670598, MdPPuEfdNom = 0.5284282234925111, LambdaAQ0Pu = -0.19281430821576612, Q0Pu = -3.7738605593670598, Cos2Eta0 = 0.9652368728348629, sStator0Pu = Complex(-21.373968771044044, -3.7738605593670598), Id0Pu = -0.19734722972233723, RQ2PPu = 0.0, Ce0Pu = 0.47542560757058594, LdPPu = 0.15, LfPPu = 0.11176470588235292, i0Pu = Complex(-20.985733028513504, 3.705312282147334), s0Pu = Complex(-21.373969089541003, -3.7738605593670598), md = 0.1, RTfPu = 0, MdPPu = 0.9500000000000001, LqPPu = 0.15, UNom = 15, H = 3.0, UNomLV = 15, MqSat0PPu = 0.44790181883764263, RQ1PPu = 0.019257748114119334, P0Pu = -21.373969089541003, Mds0Pu = 0.846385197979184, IStator0Pu = 21.310333566776993, UPhase0 = 0.0, MdSat0PPu = 0.8479018188376427, LQ1PPu = 0.05500000000000003, Efd0Pu = 1.325827295631194, MdPPuEfd = 0.0, PNomTurb = 4275.0, Lambdad0Pu = 0.9864051304441225, Lambdaf0Pu = 1.171986896741437, UBaseHV = 15, PNomAlt = 4275.0, LambdaAD0Pu = 1.016007214902473, Ud0Pu = 0.25699212341640676, LambdaAirGap0Pu = 1.0341411983798947, RfPPu = 0.0006759404053667554, IRotor0Pu = 1.3258272956311938, UBaseLV = 15, Cm0Pu = 0.5004480079690378, Uf0Pu = 0.0009433476206897457, uStator0Pu = Complex(1.0185, 0.0), nd = 6.0257, LDPPu = 0.10000000000000017, LambdaD0Pu = 1.016007214902473, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, RaPPu = 0.002, If0Pu = 1.3956076796117831, SNom = 4500.0, LQ2PPu = 100000.0, QStator0PuQNom = 0.2685783662619025, XTfPu = 0, RDPPu = 0.012732395447351637, MsalPu = 0.40000000000000013, Iq0Pu = -0.43048339773390226, Uq0Pu = 0.9855441636486547, Theta0 = 0.2550813498521703, QGen0Pu = 3.7738605593670598, SnTfo = 4500.0, Pm0Pu = 0.5004480079690378, UNomHV = 15, mq = 0.1, iStator0Pu = Complex(-20.985732715801714, 3.705312282147334), Lambdaq0Pu = -0.25738681787585144, Sin2Eta0 = 0.03476312716513678, DPu = 0, PGen0Pu = 21.373969089541003, LambdaQ20Pu = -0.19281429682442314, UStator0Pu = 1.0185, MqPPu = 0.5499999999999999, ThetaInternal0 = 0.2550813498521703, MrcPPu = 0.0, Mi0Pu = 0.8339965679715879, nq = 6.0257) annotation(
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
