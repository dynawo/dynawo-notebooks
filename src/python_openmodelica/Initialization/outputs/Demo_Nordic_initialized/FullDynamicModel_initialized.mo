within Demo_Nordic_initialized;

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
  extends Demo_Nordic_initialized.NetworkWithAlphaBetaLoads_initialized;
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
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g01(UNom = 15, SNom = 800.0, PNomTurb = 760.0, PNomAlt = 760.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 800.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -6.0, U0Pu = 1.0684, Q0Pu = -0.583425212123122, UPhase0 = 0.04511875285453376, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.7509948824625471, Cm0Pu = 0.7905209289079442, Cos2Eta0 = 0.9392275393937101, Efd0Pu = 1.5058962562345033, IRotor0Pu = 1.5058962562345033, IStator0Pu = 5.6423611760365295, Id0Pu = -0.3023788613558285, If0Pu = 1.585153953931056, Iq0Pu = -0.6371877812649466, LambdaAD0Pu = 1.0516599858806583, LambdaAQ0Pu = -0.26751205111172466, LambdaAirGap0Pu = 1.0851504151003715, LambdaD0Pu = 1.0516599858806583, LambdaQ10Pu = -0.26751177895069633, LambdaQ20Pu = -0.26751177895069633, Lambdad0Pu = 1.006303156677284, Lambdaf0Pu = 1.2288242513200116, Lambdaq0Pu = -0.36309021830146665, MdSat0PPu = 0.8198319346608177, Mds0Pu = 0.8164136737126764, Mi0Pu = 0.7955229504183017, MqSat0PPu = 0.41983193466081753, Mqs0Pu = 0.4726605479389178, PGen0Pu = 6.0, Pm0Pu = 0.7905209289079442, QGen0Pu = 0.583425212123122, QStator0Pu = 0.5834252167706908, QStator0PuQNom = 0.23355700711205873, Sin2Eta0 = 0.060772460606290046, Theta0 = 0.3912688603394811, ThetaInternal0 = 0.3461501074849473, UStator0Pu = 1.0684, Ud0Pu = 0.36248546057875497, Uf0Pu = 0.0010714696061888732, Uq0Pu = 1.005028781114754, i0Pu = Complex(-5.634788860100638, 0.29222275815743126), iStator0Pu = Complex(-5.634788860100638, 0.29222276251188967), s0Pu = Complex(-6.0, -0.583425212123122), sStator0Pu = Complex(-5.999999999790165, -0.5834252167706908), u0Pu = Complex(1.0673127125350448, 0.04818852208861507), uStator0Pu = Complex(1.0673127125350448, 0.04818852208861507)) annotation(
    Placement(visible = true, transformation(origin = {25, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g02(UNom = 15, SNom = 600.0, PNomTurb = 570.0, PNomAlt = 570.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 600.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -3.0, U0Pu = 1.0565, Q0Pu = -0.17237478399623665, UPhase0 = 0.08929734659092124, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.5004494303756254, Cm0Pu = 0.5267888740796056, Cos2Eta0 = 0.9664798793251995, Efd0Pu = 1.33199104965143, IRotor0Pu = 1.33199104965143, IStator0Pu = 2.844248080488985, Id0Pu = -0.14381696720582718, If0Pu = 1.4020958417383473, Iq0Pu = -0.45169888019623344, LambdaAD0Pu = 1.0459099525367768, LambdaAQ0Pu = -0.19478283107288752, LambdaAirGap0Pu = 1.0638928423935616, LambdaD0Pu = 1.0459099525367765, LambdaQ10Pu = -0.19478280679046459, LambdaQ20Pu = -0.19478280679046459, Lambdad0Pu = 1.0243374074559026, Lambdaf0Pu = 1.2026147819075328, Lambdaq0Pu = -0.2625376631023225, MdSat0PPu = 0.8312226913333155, Mds0Pu = 0.8295223010138896, Mi0Pu = 0.8178146430633954, MqSat0PPu = 0.4312226913333154, Mqs0Pu = 0.48024975321856755, PGen0Pu = 3.0, Pm0Pu = 0.5267888740796056, QGen0Pu = 0.17237478399623665, QStator0Pu = 0.17237478541879503, QStator0PuQNom = 0.09200685383886567, Sin2Eta0 = 0.033520120674800494, Theta0 = 0.3401451316620625, ThetaInternal0 = 0.25084778507114125, UStator0Pu = 1.0565, Ud0Pu = 0.26225002916791085, Uf0Pu = 0.0009477332316276607, Uq0Pu = 1.0234340096955101, i0Pu = Complex(-2.842800836730301, -0.09072235830305854), iStator0Pu = Complex(-2.842800836730301, -0.09072235695119006), s0Pu = Complex(-3.0, -0.17237478399623665), sStator0Pu = Complex(-2.9999999998726308, -0.17237478541879503), u0Pu = Complex(1.0522905243087015, 0.09421731502286536), uStator0Pu = Complex(1.0522905243087015, 0.09421731502286536)) annotation(
    Placement(visible = true, transformation(origin = {75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g03(UNom = 15, SNom = 700.0, PNomTurb = 665.0, PNomAlt = 665.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 700.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -5.5, U0Pu = 1.0595, Q0Pu = -0.20915462307465027, UPhase0 = 0.17932185686275964, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.786815786603378, Cm0Pu = 0.8282271437930294, Cos2Eta0 = 0.9261072107311313, Efd0Pu = 1.4666792333985512, IRotor0Pu = 1.466679233398551, IStator0Pu = 5.194880075020422, Id0Pu = -0.30078229437252163, If0Pu = 1.5438728772616328, Iq0Pu = -0.6784398301272617, LambdaAD0Pu = 1.030671097846692, LambdaAQ0Pu = -0.2911323694962474, LambdaAirGap0Pu = 1.070999985296454, LambdaD0Pu = 1.030671097846692, LambdaQ10Pu = -0.29113200917654786, LambdaQ20Pu = -0.29113200917654786, Lambdad0Pu = 0.9855537536908138, Lambdaf0Pu = 1.2032215958935801, Lambdaq0Pu = -0.39289834401533663, MdSat0PPu = 0.8291198662701413, Mds0Pu = 0.8252381826150563, Mi0Pu = 0.7995627505625938, MqSat0PPu = 0.4291198662701412, Mqs0Pu = 0.4777694741455588, PGen0Pu = 5.5, Pm0Pu = 0.8282271437930294, QGen0Pu = 0.20915462307465027, QStator0Pu = 0.2091546344406866, QStator0PuQNom = 0.09569012992218583, Sin2Eta0 = 0.07389278926886882, Theta0 = 0.5586171651516081, ThetaInternal0 = 0.3792953082888485, UStator0Pu = 1.0595, Ud0Pu = 0.3922967794265916, Uf0Pu = 0.0010435660584909672, Uq0Pu = 0.9841968740305592, i0Pu = Complex(-5.143097798403202, -0.7316584215726765), iStator0Pu = Complex(-5.143097798403202, -0.7316584106701164), s0Pu = Complex(-5.5, -0.20915462307465027), sStator0Pu = Complex(-5.49999999793969, -0.2091546344406866), u0Pu = Complex(1.0425107842480785, 0.18897490501772046), uStator0Pu = Complex(1.0425107842480785, 0.18897490501772046)) annotation(
    Placement(visible = true, transformation(origin = {85, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g04(UNom = 15, SNom = 600.0, PNomTurb = 570.0, PNomAlt = 570.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 600.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -4.0, U0Pu = 1.0339, Q0Pu = -0.3038986674595805, UPhase0 = 0.14010078991931132, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.6675030203352078, Cm0Pu = 0.7026347582475871, Cos2Eta0 = 0.9378227461717856, Efd0Pu = 1.3943565501934785, IRotor0Pu = 1.3943565501934783, IStator0Pu = 3.879995830169258, Id0Pu = -0.2638374344116876, If0Pu = 1.4677437370457667, Iq0Pu = -0.5903953651165776, LambdaAD0Pu = 1.01393363815102, LambdaAQ0Pu = -0.261074778826022, LambdaAirGap0Pu = 1.047005951613084, LambdaD0Pu = 1.0139336381510202, LambdaQ10Pu = -0.26107466948926306, LambdaQ20Pu = -0.26107466948926306, Lambdad0Pu = 0.9743580229892669, Lambdaf0Pu = 1.1779755852326057, Lambdaq0Pu = -0.3496340835935086, MdSat0PPu = 0.8422031149206467, Mds0Pu = 0.8393051348240034, Mi0Pu = 0.8173322133893609, MqSat0PPu = 0.4422031149206465, Mqs0Pu = 0.48591349910863346, PGen0Pu = 4.0, Pm0Pu = 0.7026347582475871, QGen0Pu = 0.3038986674595805, QStator0Pu = 0.3038986712612563, QStator0PuQNom = 0.1622091105762802, Sin2Eta0 = 0.06217725382821437, Theta0 = 0.484530294942249, ThetaInternal0 = 0.3444295050229376, UStator0Pu = 1.0339, Ud0Pu = 0.34910640872468524, Uf0Pu = 0.000992107296593232, Uq0Pu = 0.9731772322590337, i0Pu = Complex(-3.871984721145315, -0.24920265487921683), iStator0Pu = Complex(-3.871984721145315, -0.2492026511658079), s0Pu = Complex(-4.0, -0.3038986674595805), sStator0Pu = Complex(-3.9999999994638697, -0.3038986712612563), u0Pu = Complex(1.023769771957012, 0.14437681263654403), uStator0Pu = Complex(1.023769771957012, 0.14437681263654403)) annotation(
    Placement(visible = true, transformation(origin = {-85, 30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g05(UNom = 15, SNom = 250.0, PNomTurb = 237.5, PNomAlt = 237.5, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 250.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -2.0, U0Pu = 1.0294, Q0Pu = -0.6008914733790581, UPhase0 = -0.21570180947983497, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.8013169679143398, Cm0Pu = 0.8434915451729892, Cos2Eta0 = 0.934473174572467, Efd0Pu = 1.6615772039071448, IRotor0Pu = 1.661577203907145, IStator0Pu = 2.028674613067695, Id0Pu = -0.49702628964898904, If0Pu = 1.7490286356917315, Iq0Pu = -0.6414422632713074, LambdaAD0Pu = 1.0365557237329992, LambdaAQ0Pu = -0.27448511541022125, LambdaAirGap0Pu = 1.0722825406512055, LambdaD0Pu = 1.0365557237329992, LambdaQ10Pu = -0.2744849186087176, LambdaQ20Pu = -0.2744849186087176, Lambdad0Pu = 0.9620017802856509, Lambdaf0Pu = 1.2320353947808984, Lambdaq0Pu = -0.3707014549009174, MdSat0PPu = 0.8279183557517167, Mds0Pu = 0.8244545256979018, Mi0Pu = 0.8017076255807035, MqSat0PPu = 0.4279183557517166, Mqs0Pu = 0.4773157780356273, PGen0Pu = 2.0, Pm0Pu = 0.8434915451729892, QGen0Pu = 0.6008914733790581, QStator0Pu = 0.6008914881537203, QStator0PuQNom = 0.7697571570819729, Sin2Eta0 = 0.06552682542753302, Theta0 = 0.15165348428050332, ThetaInternal0 = 0.36735529376033826, UStator0Pu = 1.0294, Ud0Pu = 0.3697074023216194, Uf0Pu = 0.0011822391250075322, Uq0Pu = 0.9607188957591083, i0Pu = Complex(-1.772918426074688, 0.9860430574848053), iStator0Pu = Complex(-1.772918426074688, 0.9860430721779918), s0Pu = Complex(-2.0, -0.6008914733790581), sStator0Pu = Complex(-2.000000003237285, -0.6008914881537203), u0Pu = Complex(1.0055451212497661, -0.22032559799259188), uStator0Pu = Complex(1.0055451212497661, -0.22032559799259188)) annotation(
    Placement(visible = true, transformation(origin = {-45, 71}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g06(UNom = 15, SNom = 400.0, PNomTurb = 360.0, PNomAlt = 360.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 400.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -3.6, U0Pu = 1.0084, Q0Pu = -1.3857092847346664, UPhase0 = -1.0370703185127013, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.9013718613174071, Cm0Pu = 1.0015242903526747, Cos2Eta0 = 0.6401673157316344, Efd0Pu = 2.7569193780220096, IRotor0Pu = 2.756919378022009, IStator0Pu = 3.825351948397895, Id0Pu = -0.8672640577525956, If0Pu = 1.344838720986346, Iq0Pu = -0.4030327526392557, LambdaAD0Pu = 0.8558048421427483, LambdaAQ0Pu = -0.6416205942035605, LambdaAirGap0Pu = 1.0696162464833379, LambdaD0Pu = 0.8558048421427483, LambdaQ10Pu = -0.6416205854665362, LambdaQ20Pu = -0.6416205854665362, Lambdad0Pu = 0.725715233479859, Lambdaf0Pu = 1.073456371986591, Lambdaq0Pu = -0.7020755070994489, MdSat0PPu = 1.791981250319957, Mds0Pu = 1.7825937873655884, Mi0Pu = 1.7200147134662838, MqSat0PPu = 1.5919812503199569, Mqs0Pu = 1.6086821983543114, PGen0Pu = 3.6, Pm0Pu = 1.0015242903526747, QGen0Pu = 1.3857092847346664, QStator0Pu = 1.385709255894891, QStator0PuQNom = 0.7947587646808911, Sin2Eta0 = 0.3598326842683655, Theta0 = -0.2687378411451722, ThetaInternal0 = 0.7683324773675292, UStator0Pu = 1.0084, Ud0Pu = 0.70077461101282, Uf0Pu = 0.001352621895897706, Uq0Pu = 0.7251106843509001, i0Pu = Complex(-0.6331807016527238, 3.7725853406284537), iStator0Pu = Complex(-0.6331807016527238, 3.7725852844125516), s0Pu = Complex(-3.6, -1.3857092847346664), sStator0Pu = Complex(-3.5999999511962115, -1.385709255894891), u0Pu = Complex(0.51301810593372, -0.8681491709286938), uStator0Pu = Complex(0.51301810593372, -0.8681491709286938)) annotation(
    Placement(visible = true, transformation(origin = {35, -60}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g07(UNom = 15, SNom = 200.0, PNomTurb = 180.0, PNomAlt = 180.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 200.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -1.8, U0Pu = 1.0141, Q0Pu = -0.6042061072727894, UPhase0 = -1.2034688371651445, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.9013145540079697, Cm0Pu = 1.0014606155644108, Cos2Eta0 = 0.6193199337041656, Efd0Pu = 2.6824535898993394, IRotor0Pu = 2.6824535898993394, IStator0Pu = 1.872301398968039, Id0Pu = -0.8398668306973363, If0Pu = 1.3085139462923605, Iq0Pu = -0.4135236859465621, LambdaAD0Pu = 0.8407870508555351, LambdaAQ0Pu = -0.6591868774986321, LambdaAirGap0Pu = 1.0683867297719234, LambdaD0Pu = 0.8407870508555346, LambdaQ10Pu = -0.6591868669539814, LambdaQ20Pu = -0.6591868669539814, Lambdad0Pu = 0.7148070262509346, Lambdaf0Pu = 1.0525597026896933, Lambdaq0Pu = -0.7212154303906164, MdSat0PPu = 1.7940728170022295, Mds0Pu = 1.784201176641501, Mi0Pu = 1.7179368037430627, MqSat0PPu = 1.5940728170022294, Mqs0Pu = 1.610132769164281, PGen0Pu = 1.8, Pm0Pu = 1.0014606155644108, QGen0Pu = 0.6042061072727894, QStator0Pu = 0.6042060971217923, QStator0PuQNom = 0.6930719259013195, Sin2Eta0 = 0.38068006629583445, Theta0 = -0.4140481593890877, ThetaInternal0 = 0.7894206777760567, UStator0Pu = 1.0141, Ud0Pu = 0.7199556301445704, Uf0Pu = 0.0013160868937090425, Uq0Pu = 0.7141867407220148, i0Pu = Complex(-0.08137333499305009, 1.870532280717139), iStator0Pu = Complex(-0.08137333499305009, 1.870532252844036), s0Pu = Complex(-1.8, -0.6042061072727894), sStator0Pu = Complex(-1.7999999736195065, -0.6042060971217923), u0Pu = Complex(0.3641861161426631, -0.9464498311104095), uStator0Pu = Complex(0.3641861161426631, -0.9464498311104095)) annotation(
    Placement(visible = true, transformation(origin = {-53, -39}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g08(UNom = 15, SNom = 850.0, PNomTurb = 807.5, PNomAlt = 807.5, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 850.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -7.5, U0Pu = 1.0498, Q0Pu = -2.325933411047953, UPhase0 = -0.29346974082570393, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.8839016923937457, Cm0Pu = 0.9304228340986797, Cos2Eta0 = 0.9335731920400041, Efd0Pu = 1.7637699876037813, IRotor0Pu = 1.763769987603781, IStator0Pu = 7.479887583304678, Id0Pu = -0.5505990451050974, If0Pu = 1.8565999869513485, Iq0Pu = -0.6864527768430909, LambdaAD0Pu = 1.0606955257979411, LambdaAQ0Pu = -0.28293602161073644, LambdaAirGap0Pu = 1.0977831255638255, LambdaD0Pu = 1.0606955257979414, LambdaQ10Pu = -0.28293563043733205, LambdaQ20Pu = -0.28293563043733205, Lambdad0Pu = 0.9781056690321766, Lambdaf0Pu = 1.268197877280739, Lambdaq0Pu = -0.3859039381372001, MdSat0PPu = 0.8121705672726931, Mds0Pu = 0.808204667776597, Mi0Pu = 0.7855998440886947, MqSat0PPu = 0.4121705672726929, Mqs0Pu = 0.4679079655548719, PGen0Pu = 7.5, Pm0Pu = 0.9304228340986797, QGen0Pu = 2.325933411047953, QStator0Pu = 2.325933348342285, QStator0PuQNom = 0.8763468539852581, Sin2Eta0 = 0.06642680795999596, Theta0 = 0.08182698524646899, ThetaInternal0 = 0.37529672607217296, UStator0Pu = 1.0498, Ud0Pu = 0.3848027400469899, Uf0Pu = 0.0012549509477838075, Uq0Pu = 0.9767327634784904, i0Pu = Complex(-6.1978560256860495, 4.187517100423028), iStator0Pu = Complex(-6.1978560256860495, 4.18751703802416), s0Pu = Complex(-7.5, -2.325933411047953), sStator0Pu = Complex(-7.4999999810506335, -2.325933348342285), u0Pu = Complex(1.0049167764763347, -0.3036812677074639), uStator0Pu = Complex(1.0049167764763347, -0.3036812677074639)) annotation(
    Placement(visible = true, transformation(origin = {-77, 0}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g09(UNom = 15, SNom = 1000.0, PNomTurb = 950.0, PNomAlt = 950.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 1000.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -6.685, U0Pu = 0.9988, Q0Pu = -2.0127714748166046, UPhase0 = -0.028421460530684763, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.6694771531447352, Cm0Pu = 0.7047127927839317, Cos2Eta0 = 0.9406151596645341, Efd0Pu = 1.5182965121904763, IRotor0Pu = 1.5182965121904766, IStator0Pu = 6.9898255986013735, Id0Pu = -0.414826539159248, If0Pu = 1.5982068549373436, Iq0Pu = -0.5625793823077694, LambdaAD0Pu = 1.0039987743114511, LambdaAQ0Pu = -0.2522696427931966, LambdaAirGap0Pu = 1.0352069896855909, LambdaD0Pu = 1.0039987743114513, LambdaQ10Pu = -0.2522695869411671, LambdaQ20Pu = -0.2522695869411671, Lambdad0Pu = 0.941774793437564, Lambdaf0Pu = 1.1826218933926835, Lambdaq0Pu = -0.33665655013936197, MdSat0PPu = 0.8484159833698962, Mds0Pu = 0.8458108222389386, Mi0Pu = 0.8246620472357098, MqSat0PPu = 0.448415983369896, Mqs0Pu = 0.4896799497172801, PGen0Pu = 6.685, Pm0Pu = 0.7047127927839317, QGen0Pu = 2.0127714748166046, QStator0Pu = 2.012771442018535, QStator0PuQNom = 0.644602750084062, Sin2Eta0 = 0.05938484033546609, Theta0 = 0.3144898998334115, ThetaInternal0 = 0.3429113603640963, UStator0Pu = 0.9988, Ud0Pu = 0.33582689706104346, Uf0Pu = 0.0010802925893862753, Uq0Pu = 0.9406496346729485, i0Pu = Complex(-6.633061649303435, 2.2045759683546766), iStator0Pu = Complex(-6.633061649303435, 2.204575935503935), s0Pu = Complex(-6.685, -2.0127714748166046), sStator0Pu = Complex(-6.684999999067579, -2.012771442018535), u0Pu = Complex(0.9983966221127623, -0.028383533145579513), uStator0Pu = Complex(0.9983966221127623, -0.028383533145579513)) annotation(
    Placement(visible = true, transformation(origin = {-25, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g10(UNom = 15, SNom = 800.0, PNomTurb = 760.0, PNomAlt = 760.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 800.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -6.0, U0Pu = 1.0157, Q0Pu = -2.557039475396007, UPhase0 = 0.017238446132258847, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.7512885484777885, Cm0Pu = 0.790830051029251, Cos2Eta0 = 0.9440825699501009, Efd0Pu = 1.7086611794132935, IRotor0Pu = 1.7086611794132935, IStator0Pu = 6.4213358275197345, Id0Pu = -0.5440068659024777, If0Pu = 1.7985907151718878, Iq0Pu = -0.5901955676967677, LambdaAD0Pu = 1.0397147922153098, LambdaAQ0Pu = -0.253036303531183, LambdaAirGap0Pu = 1.0700627178142643, LambdaD0Pu = 1.0397147922153098, LambdaQ10Pu = -0.2530362010972842, LambdaQ20Pu = -0.2530362010972842, Lambdad0Pu = 0.9581137623299381, Lambdaf0Pu = 1.2407337544992265, Lambdaq0Pu = -0.34156563868569817, MdSat0PPu = 0.8287328047629288, Mds0Pu = 0.8258088252570321, Mi0Pu = 0.8063658327429691, MqSat0PPu = 0.4287328047629287, Mqs0Pu = 0.4780998462014395, PGen0Pu = 6.0, Pm0Pu = 0.790830051029251, QGen0Pu = 2.557039475396007, QStator0Pu = 2.5570395119466105, QStator0PuQNom = 1.0236350406366794, Sin2Eta0 = 0.055917430049899124, Theta0 = 0.3590716086250781, ThetaInternal0 = 0.34183316249281925, UStator0Pu = 1.0157, Ud0Pu = 0.3404776249538932, Uf0Pu = 0.0012157401371021685, Uq0Pu = 0.9569333711945445, i0Pu = Complex(-5.9497742779892215, 2.415313577345065), iStator0Pu = Complex(-5.9497742779892215, 2.4153136133360418), s0Pu = Complex(-6.0, -2.557039475396007), sStator0Pu = Complex(-5.999999999369862, -2.5570395119466105), u0Pu = Complex(1.0155490889870418, 0.017508222570823077), uStator0Pu = Complex(1.0155490889870418, 0.017508222570823077)) annotation(
    Placement(visible = true, transformation(origin = {-35, 79}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g11(UNom = 15, SNom = 300.0, PNomTurb = 285.0, PNomAlt = 285.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 300.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -2.5, U0Pu = 1.0211, Q0Pu = -0.607278181446761, UPhase0 = -0.5068607286939991, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.8347440202099278, Cm0Pu = 0.8786779160104502, Cos2Eta0 = 0.9226634089754475, Efd0Pu = 1.6301837235761947, IRotor0Pu = 1.6301837235761945, IStator0Pu = 2.5195380561000364, Id0Pu = -0.4985346119650559, If0Pu = 1.71598286692231, Iq0Pu = -0.6758731950588897, LambdaAD0Pu = 1.017724375219642, LambdaAQ0Pu = -0.29464633250220995, LambdaAirGap0Pu = 1.0595184590997995, LambdaD0Pu = 1.0177243752196419, LambdaQ10Pu = -0.2946460902544682, LambdaQ20Pu = -0.2946460902544682, Lambdad0Pu = 0.9429441834248836, Lambdaf0Pu = 1.2095106956403705, Lambdaq0Pu = -0.3960273117610434, MdSat0PPu = 0.8359487732440631, Mds0Pu = 0.832109945918434, Mi0Pu = 0.8050141368342421, MqSat0PPu = 0.43594877324406295, Mqs0Pu = 0.4817478634264617, PGen0Pu = 2.5, Pm0Pu = 0.8786779160104502, QGen0Pu = 0.607278181446761, QStator0Pu = 0.6072782041737345, QStator0PuQNom = 0.6482822512027258, Sin2Eta0 = 0.07733659102455274, Theta0 = -0.10962874526172603, ThetaInternal0 = 0.39723198343227306, UStator0Pu = 1.0211, Ud0Pu = 0.3950302425371133, Uf0Pu = 0.0011599021546698735, Uq0Pu = 0.9415924370347658, i0Pu = Complex(-1.851814406822524, 1.7084657830440217), iStator0Pu = Complex(-1.851814406822524, 1.7084658085021458), s0Pu = Complex(-2.5, -0.607278181446761), sStator0Pu = Complex(-2.5000000126190254, -0.6072782041737345), u0Pu = Complex(0.8927198800042873, -0.49567774394774955), uStator0Pu = Complex(0.8927198800042873, -0.49567774394774955)) annotation(
    Placement(visible = true, transformation(origin = {35, 72}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g12(UNom = 15, SNom = 350.0, PNomTurb = 332.5, PNomAlt = 332.5, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 350.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -3.1, U0Pu = 1.02, Q0Pu = -0.9834016174330449, UPhase0 = -0.5564247861345785, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.8873741048340278, Cm0Pu = 0.9340780050884503, Cos2Eta0 = 0.9232170495511418, Efd0Pu = 1.7424655725318812, IRotor0Pu = 1.742465572531881, IStator0Pu = 3.188472684185821, Id0Pu = -0.5933763497586424, If0Pu = 1.8341742868756643, Iq0Pu = -0.6912389512864635, LambdaAD0Pu = 1.0290031417287606, LambdaAQ0Pu = -0.29675441622603804, LambdaAirGap0Pu = 1.070939143573208, LambdaD0Pu = 1.0290031417287604, LambdaQ10Pu = -0.29675412540588925, LambdaQ20Pu = -0.29675412540588925, Lambdad0Pu = 0.9399966892649642, Lambdaf0Pu = 1.2339990914383934, Lambdaq0Pu = -0.4004402589190076, MdSat0PPu = 0.8293075858262917, Mds0Pu = 0.8252752775380634, Mi0Pu = 0.7985944056467484, MqSat0PPu = 0.4293075858262916, Mqs0Pu = 0.4777909501536156, PGen0Pu = 3.1, Pm0Pu = 0.9340780050884503, QGen0Pu = 0.9834016174330449, QStator0Pu = 0.9834016487161947, QStator0PuQNom = 0.8998302311874462, Sin2Eta0 = 0.07678295044885818, Theta0 = -0.15424513632872805, ThetaInternal0 = 0.40217964980585047, UStator0Pu = 1.02, Ud0Pu = 0.3992535062194903, Uf0Pu = 0.0012397925109840161, Uq0Pu = 0.9386142113623912, i0Pu = Complex(-2.0715432102304923, 2.4238536694397315), iStator0Pu = Complex(-2.0715432102304923, 2.4238537055579656), s0Pu = Complex(-3.1, -0.9834016174330449), sStator0Pu = Complex(-3.1000000194574984, -0.9834016487161947), u0Pu = Complex(0.8661317722878212, -0.5387167651313238), uStator0Pu = Complex(0.8661317722878212, -0.5387167651313238)) annotation(
    Placement(visible = true, transformation(origin = {-4, 41}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g13(UNom = 15, SNom = 300.0, PNomTurb = 285.0, PNomAlt = 285.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 2.0, DPu = 0, SnTfo = 300.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = 0.0, U0Pu = 1.017, Q0Pu = -0.5012150205926418, UPhase0 = -0.9476399362543123, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 1.4000000000000001, LDPPu = 0.0750000000000001, RDPPu = 0.014323944878270586, MrcPPu = 0.0, LfPPu = 0.168, RfPPu = 0.000713014145051691, LqPPu = 0.15, MqPPu = 0.85, LQ1PPu = 0.05312500000000006, RQ1PPu = 0.028747361595973596, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.5500000000000002, MdPPuEfd = 0.0, MdPPuEfdNom = 0.6460756808250417, Ce0Pu = 5.397631516638064e-05, Cm0Pu = 5.6817173859348035e-05, Cos2Eta0 = 0.9999999990384801, Efd0Pu = 1.404826315361979, IRotor0Pu = 1.404826315361979, IStator0Pu = 0.49283679757758514, Id0Pu = -0.16427892588113796, If0Pu = 1.0034473681156992, Iq0Pu = -4.672447121435719e-05, LambdaAD0Pu = 1.0416418911977283, LambdaAQ0Pu = -3.229963050332456e-05, LambdaAirGap0Pu = 1.041641891698508, LambdaD0Pu = 1.0416418911977283, LambdaQ10Pu = -3.229963050208273e-05, LambdaQ20Pu = -3.229963050208273e-05, Lambdad0Pu = 1.0170000523155576, Lambdaf0Pu = 1.2102210490411656, Lambdaq0Pu = -3.930830118547814e-05, MdSat0PPu = 1.2412786739501487, Mds0Pu = 1.2412786738901935, Mi0Pu = 1.2412786734213128, MqSat0PPu = 0.6912786739501486, Mqs0Pu = 0.7536334805761888, PGen0Pu = -0.0, Pm0Pu = 5.6817173859348035e-05, QGen0Pu = 0.5012150205926418, QStator0Pu = 0.501215023136404, QStator0PuQNom = 0.5350575754280427, Sin2Eta0 = 9.615198029795285e-10, Theta0 = -0.9479243507621553, ThetaInternal0 = -0.0002844145078431088, UStator0Pu = 1.017, Ud0Pu = -0.0002892495505767978, Uf0Pu = 0.0007154721672813848, Uq0Pu = 1.0169999588666152, i0Pu = Complex(0.4002034037683724, 0.287620135236272), iStator0Pu = Complex(0.4002034037683724, 0.287620139522146), s0Pu = Complex(0.0, -0.5012150205926418), sStator0Pu = Complex(-3.5394681074940593e-09, -0.501215023136404), u0Pu = Complex(0.59352240022983, -0.8258451189087583), uStator0Pu = Complex(0.59352240022983, -0.8258451189087583)) annotation(
    Placement(visible = true, transformation(origin = {-70, -29}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g14(UNom = 15, SNom = 700.0, PNomTurb = 630.0, PNomAlt = 630.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 700.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -6.3, U0Pu = 1.0454, Q0Pu = -2.9585536691471077, UPhase0 = -0.8709296483328985, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.901356953893838, Cm0Pu = 1.001507726548709, Cos2Eta0 = 0.6982615258249869, Efd0Pu = 2.8730290747403235, IRotor0Pu = 2.8730290747403235, IStator0Pu = 6.65783769935535, Id0Pu = -0.8626767350638799, If0Pu = 1.4014775974343041, Iq0Pu = -0.40052151001255265, LambdaAD0Pu = 0.9315247319026045, LambdaAQ0Pu = -0.6123513480620892, LambdaAirGap0Pu = 1.1147701555117437, LambdaD0Pu = 0.9315247319026042, LambdaQ10Pu = -0.6123513310383418, LambdaQ20Pu = -0.6123513310383418, Lambdad0Pu = 0.8021232216430225, Lambdaf0Pu = 1.1583428167505243, Lambdaq0Pu = -0.6724295745639721, MdSat0PPu = 1.7288850054998304, Mds0Pu = 1.7191453391044837, Mi0Pu = 1.6685373106648278, MqSat0PPu = 1.5288850054998302, Mqs0Pu = 1.5514238426064852, PGen0Pu = 6.3, Pm0Pu = 1.001507726548709, QGen0Pu = 2.9585536691471077, QStator0Pu = 2.9585537336912413, QStator0PuQNom = 0.9696268228718096, Sin2Eta0 = 0.3017384741750131, Theta0 = -0.1738396800872495, ThetaInternal0 = 0.6970899682456491, UStator0Pu = 1.0454, Ud0Pu = 0.6711355594613763, Uf0Pu = 0.0014095885665081152, Uq0Pu = 0.8015224393780037, i0Pu = Complex(-1.7169009364817198, 6.432655188339698), iStator0Pu = Complex(-1.7169009364817198, 6.43265528419373), s0Pu = Complex(-6.3, -2.9585536691471077), sStator0Pu = Complex(-6.300000076650233, -2.9585537336912413), u0Pu = Complex(0.6733585648814348, -0.7996558028932291), uStator0Pu = Complex(0.6733585648814348, -0.7996558028932291)) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g15(UNom = 15, SNom = 1200.0, PNomTurb = 1080.0, PNomAlt = 1080.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 1200.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -10.8, U0Pu = 1.0455, Q0Pu = -3.7790627313354315, UPhase0 = -0.9109251514871687, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.9012476557390299, Cm0Pu = 1.0013862841544776, Cos2Eta0 = 0.64641489050699, Efd0Pu = 2.692548945601196, IRotor0Pu = 2.692548945601196, IStator0Pu = 10.94412760843277, Id0Pu = -0.8089071886786022, If0Pu = 1.3134385100493637, Iq0Pu = -0.42122744058162215, LambdaAD0Pu = 0.8840203185418389, LambdaAQ0Pu = -0.6538130046803613, LambdaAirGap0Pu = 1.0995287029832266, LambdaD0Pu = 0.8840203185418386, LambdaQ10Pu = -0.6538129840313052, LambdaQ20Pu = -0.6538129840313052, Lambdad0Pu = 0.7626842402400485, Lambdaf0Pu = 1.096589972141933, Lambdaq0Pu = -0.7169971207676046, MdSat0PPu = 1.752161424071836, Mds0Pu = 1.7415200669090696, Mi0Pu = 1.6814444021732338, MqSat0PPu = 1.5521614240718358, Mqs0Pu = 1.571615670137453, PGen0Pu = 10.8, Pm0Pu = 1.0013862841544776, QGen0Pu = 3.7790627313354315, QStator0Pu = 3.7790628304406786, QStator0PuQNom = 0.7224803938237588, Sin2Eta0 = 0.3535851094930101, Theta0 = -0.15682513299852915, ThetaInternal0 = 0.7541000184886396, UStator0Pu = 1.0455, Ud0Pu = 0.7157837599845867, Uf0Pu = 0.0013210399580888229, Uq0Pu = 0.7620523990791761, i0Pu = Complex(-3.4766467354012085, 10.377227634467992), iStator0Pu = Complex(-3.4766467354012085, 10.377227789100735), s0Pu = Complex(-10.8, -3.7790627313354315), sStator0Pu = Complex(-10.800000127729653, -3.7790628304406786), u0Pu = Complex(0.6409072623553033, -0.8260194495653421), uStator0Pu = Complex(0.6409072623553033, -0.8260194495653421)) annotation(
    Placement(visible = true, transformation(origin = {80, -89}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g16(UNom = 15, SNom = 700.0, PNomTurb = 630.0, PNomAlt = 630.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 700.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -6.0, U0Pu = 1.0531, Q0Pu = -2.2262547056075017, UPhase0 = -1.1188044087447906, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.8582733827751837, Cm0Pu = 0.9536370919724264, Cos2Eta0 = 0.6707053073942824, Efd0Pu = 2.6331134397710225, IRotor0Pu = 2.6331134397710225, IStator0Pu = 6.077014523774584, Id0Pu = -0.7642938184050403, If0Pu = 1.2844455803761086, Iq0Pu = -0.41174091617085506, LambdaAD0Pu = 0.9060449083360101, LambdaAQ0Pu = -0.6348574467572543, LambdaAirGap0Pu = 1.1063278689542033, LambdaD0Pu = 0.90604490833601, LambdaQ10Pu = -0.6348574246763855, LambdaQ20Pu = -0.6348574246763855, Lambdad0Pu = 0.7914008355752541, Lambdaf0Pu = 1.113922285160038, Lambdaq0Pu = -0.6966185841828826, MdSat0PPu = 1.741885685252001, Mds0Pu = 1.7316585486302987, Mi0Pu = 1.6760267467308574, MqSat0PPu = 1.5418856852520009, Mqs0Pu = 1.5627162512029524, PGen0Pu = 6.0, Pm0Pu = 0.9536370919724264, QGen0Pu = 2.2262547056075017, QStator0Pu = 2.226254747063525, QStator0PuQNom = 0.7296255236862864, Sin2Eta0 = 0.3292946926057178, Theta0 = -0.39744688765814185, ThetaInternal0 = 0.7213575210866489, UStator0Pu = 1.0531, Ud0Pu = 0.695472143455275, Uf0Pu = 0.0012918792335422358, Uq0Pu = 0.7907832242009978, i0Pu = Complex(-0.586703978711681, 6.048626527831489), iStator0Pu = Complex(-0.586703978711681, 6.048626617963048), s0Pu = Complex(-6.0, -2.2262547056075017), sStator0Pu = Complex(-6.000000085385821, -2.226254747063525), u0Pu = Complex(0.4599501518788107, -0.9473465404943742), uStator0Pu = Complex(0.4599501518788107, -0.9473465404943742)) annotation(
    Placement(visible = true, transformation(origin = {20, -109}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g17(UNom = 15, SNom = 600.0, PNomTurb = 540.0, PNomAlt = 540.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 600.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -5.3, U0Pu = 1.0092, Q0Pu = -0.48727234957944265, UPhase0 = -0.8177699821654295, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.8844922291001154, Cm0Pu = 0.9827691434445727, Cos2Eta0 = 0.4769924516252834, Efd0Pu = 2.3353318813377197, IRotor0Pu = 2.3353318813377197, IStator0Pu = 5.273833116413232, Id0Pu = -0.7524865221388808, If0Pu = 1.1391862835793753, Iq0Pu = -0.45426439204721225, LambdaAD0Pu = 0.7120304212229825, LambdaAQ0Pu = -0.7455843343073053, LambdaAirGap0Pu = 1.0309623272998125, LambdaD0Pu = 0.7120304212229825, LambdaQ10Pu = -0.7455843234421836, LambdaQ20Pu = -0.7455843234421836, Lambdad0Pu = 0.5991574429021504, Lambdaf0Pu = 0.8963987276443817, Lambdaq0Pu = -0.8137239931143871, MdSat0PPu = 1.8413003891458308, Mds0Pu = 1.8300788864704223, Mi0Pu = 1.7366988794708875, MqSat0PPu = 1.6413003891458307, Mqs0Pu = 1.6515346048635517, PGen0Pu = 5.3, Pm0Pu = 0.9827691434445727, QGen0Pu = 0.48727234957944265, QStator0Pu = 0.4872723923803637, QStator0PuQNom = 0.18631325582134245, Sin2Eta0 = 0.5230075483747163, Theta0 = 0.11822166030182385, ThetaInternal0 = 0.9359916424672534, UStator0Pu = 1.0092, Ud0Pu = 0.8125952633311788, Uf0Pu = 0.0011457792571184014, Uq0Pu = 0.5984760463140796, i0Pu = Complex(-3.239080401091976, 4.161931448115484), iStator0Pu = Complex(-3.239080401091976, 4.161931510133096), s0Pu = Complex(-5.3, -0.48727234957944265), sStator0Pu = Complex(-5.300000045665748, -0.4872723923803637), u0Pu = Complex(0.690141397636981, -0.7363351758999936), uStator0Pu = Complex(0.690141397636981, -0.7363351758999936)) annotation(
    Placement(visible = true, transformation(origin = {-78, -88}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g18(UNom = 15, SNom = 1200.0, PNomTurb = 1080.0, PNomAlt = 1080.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 6.0, DPu = 0, SnTfo = 1200.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -10.6, U0Pu = 1.0307, Q0Pu = -2.9342902459669657, UPhase0 = -0.7561411424858845, RaPPu = 0.0015, LdPPu = 0.15, MdPPu = 2.0500000000000003, LDPPu = 0.07500000000000008, RDPPu = 0.014323944878270585, MrcPPu = 0.0, LfPPu = 0.1618421052631579, RfPPu = 0.001005787441118331, LqPPu = 0.15, MqPPu = 1.85, LQ1PPu = 0.28906250000000017, RQ1PPu = 0.004539231606100098, LQ2PPu = 0.06250000000000011, RQ2PPu = 0.01989436788648693, MsalPu = 0.20000000000000018, MdPPuEfd = 0.0, MdPPuEfdNom = 0.703890707549778, Ce0Pu = 0.8845194821067608, Cm0Pu = 0.9827994245630676, Cos2Eta0 = 0.6039205098397479, Efd0Pu = 2.5585852552103105, IRotor0Pu = 2.5585852552103105, IStator0Pu = 10.671037986421483, Id0Pu = -0.7801740765543799, If0Pu = 1.2480903683952733, Iq0Pu = -0.4267313003363578, LambdaAD0Pu = 0.8355949965268729, LambdaAQ0Pu = -0.6767014677236523, LambdaAirGap0Pu = 1.0752413099579508, LambdaD0Pu = 0.8355949965268729, LambdaQ10Pu = -0.6767014515428931, LambdaQ20Pu = -0.6767014515428931, Lambdad0Pu = 0.7185688850437159, Lambdaf0Pu = 1.0375885693066342, Lambdaq0Pu = -0.740711162774106, MdSat0PPu = 1.7857788050923475, Mds0Pu = 1.775158403185913, Mi0Pu = 1.706562907060297, MqSat0PPu = 1.5857788050923474, Mqs0Pu = 1.6019722175092383, PGen0Pu = 10.6, Pm0Pu = 0.9827994245630676, QGen0Pu = 2.9342902459669657, QStator0Pu = 2.9342901439852973, QStator0PuQNom = 0.5609769389762862, Sin2Eta0 = 0.39607949016025207, Theta0 = 0.04408445085249045, ThetaInternal0 = 0.800225593338375, UStator0Pu = 1.0307, Ud0Pu = 0.7395409016592744, Uf0Pu = 0.0012553136179127172, Uq0Pu = 0.7179287880932114, i0Pu = Complex(-5.528389331138788, 9.127319737676112), iStator0Pu = Complex(-5.528389331138788, 9.12731960166845), s0Pu = Complex(-10.6, -2.9342902459669657), sStator0Pu = Complex(-10.599999903817675, -2.9342901439852973), u0Pu = Complex(0.7498229712124542, -0.7071831458979541), uStator0Pu = Complex(0.7498229712124542, -0.7071831458979541)) annotation(
    Placement(visible = true, transformation(origin = {-95, -151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g19(UNom = 15, SNom = 500.0, PNomTurb = 475.0, PNomAlt = 475.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 500.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, P0Pu = -3.0, U0Pu = 1.03, Q0Pu = -1.2123684751976573, UPhase0 = 0.0004816676692917009, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.6007895060677012, Cm0Pu = 0.6324100063870539, Cos2Eta0 = 0.9608781454128162, Efd0Pu = 1.571645640079993, IRotor0Pu = 1.5716456400799932, IStator0Pu = 3.141468743755466, Id0Pu = -0.3874331761431986, If0Pu = 1.6543638316631506, Iq0Pu = -0.4946196202571174, LambdaAD0Pu = 1.0488727367054496, LambdaAQ0Pu = -0.21164029409319768, LambdaAirGap0Pu = 1.0700119774506427, LambdaD0Pu = 1.0488727367054496, LambdaQ10Pu = -0.21164025802745953, LambdaQ20Pu = -0.21164025802745953, Lambdad0Pu = 0.9907577602839698, Lambdaf0Pu = 1.2337722237736837, Lambdaq0Pu = -0.2858332371317653, MdSat0PPu = 0.8278848823616073, Mds0Pu = 0.8258396687084347, Mi0Pu = 0.8122361405267339, MqSat0PPu = 0.42788488236160727, Mqs0Pu = 0.4781177029364621, PGen0Pu = 3.0, Pm0Pu = 0.6324100063870539, QGen0Pu = 1.2123684751976573, QStator0Pu = 1.212368493241819, QStator0PuQNom = 0.776537314217071, Sin2Eta0 = 0.03912185458718363, Theta0 = 0.2808979549748283, ThetaInternal0 = 0.2804162873055365, UStator0Pu = 1.03, Ud0Pu = 0.2850583707794789, Uf0Pu = 0.0011182513589984887, Uq0Pu = 0.9897685210434556, i0Pu = Complex(-2.9131879715238664, 1.175653720008395), iStator0Pu = Complex(-2.9131879715238664, 1.1756537375270006), s0Pu = Complex(-3.0, -1.2123684751976573), sStator0Pu = Complex(-2.9999999999913087, -1.212368493241819), u0Pu = Complex(1.0299998805180743, 0.0004961176801869249), uStator0Pu = Complex(1.0299998805180743, 0.0004961176801869249)) annotation(
    Placement(visible = true, transformation(origin = {-75, 151}, extent = {{-3, -3}, {3, 3}}, rotation = 0)));
  Dynawo.Electrical.Machines.OmegaRef.GeneratorSynchronous g20(UNom = 15, SNom = 4500.0, PNomTurb = 4275.0, PNomAlt = 4275.0, ExcitationPu = Dynawo.Electrical.Machines.OmegaRef.BaseClasses.GeneratorSynchronousParameters.ExcitationPuType.NoLoad, H = 3.0, DPu = 0, SnTfo = 4500.0, UNomHV = 15, UNomLV = 15, UBaseHV = 15, UBaseLV = 15, RTfPu = 0, XTfPu = 0, md = 0.1, mq = 0.1, nd = 6.0257, nq = 6.0257, U0Pu = 1.0185, UPhase0 = 0.0, P0Pu = -21.37396908954099, Q0Pu = -3.7738605593670553, RaPPu = 0.002, LdPPu = 0.15, MdPPu = 0.9500000000000001, LDPPu = 0.10000000000000017, RDPPu = 0.012732395447351637, MrcPPu = 0.0, LfPPu = 0.11176470588235292, RfPPu = 0.0006759404053667554, LqPPu = 0.15, MqPPu = 0.5499999999999999, LQ1PPu = 0.05500000000000003, RQ1PPu = 0.019257748114119334, LQ2PPu = 100000.0, RQ2PPu = 0.0, MsalPu = 0.40000000000000013, MdPPuEfd = 0.0, MdPPuEfdNom = 0.5284282234925111, Ce0Pu = 0.4754256075705856, Cm0Pu = 0.5004480079690374, Cos2Eta0 = 0.9652368728348635, Efd0Pu = 1.325827295631193, IRotor0Pu = 1.325827295631193, IStator0Pu = 21.310333566776983, Id0Pu = -0.19734722972233698, If0Pu = 1.395607679611782, Iq0Pu = -0.430483397733902, LambdaAD0Pu = 1.016007214902473, LambdaAQ0Pu = -0.19281430821576598, LambdaAirGap0Pu = 1.0341411983798945, LambdaD0Pu = 1.016007214902473, LambdaQ10Pu = -0.19281429682442316, LambdaQ20Pu = -0.19281429682442316, Lambdad0Pu = 0.9864051304441225, Lambdaf0Pu = 1.1719868967414369, Lambdaq0Pu = -0.25738681787585127, MdSat0PPu = 0.8479018188376432, Mds0Pu = 0.846385197979184, Mi0Pu = 0.8339965679715885, MqSat0PPu = 0.44790181883764296, Mqs0Pu = 0.4900124830405801, PGen0Pu = 21.37396908954099, Pm0Pu = 0.5004480079690374, QGen0Pu = 3.7738605593670553, QStator0Pu = 3.7738605593670553, QStator0PuQNom = 0.26857836626190223, Sin2Eta0 = 0.03476312716513675, Theta0 = 0.2550813498521701, ThetaInternal0 = 0.2550813498521701, UStator0Pu = 1.0185, Ud0Pu = 0.2569921234164066, Uf0Pu = 0.0009433476206897449, Uq0Pu = 0.9855441636486547, i0Pu = Complex(-20.98573302851349, 3.7053122821473297), iStator0Pu = Complex(-20.9857327158017, 3.7053122821473297), s0Pu = Complex(-21.37396908954099, -3.7738605593670553), sStator0Pu = Complex(-21.37396877104403, -3.7738605593670553), u0Pu = Complex(1.0185, 0.0), uStator0Pu = Complex(1.0185, 0.0)) annotation(
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
  g01.switchOffSignal1 = false;
  g01.switchOffSignal2 = false;
  g01.switchOffSignal3 = false;
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
  g20.switchOffSignal1 = false;
  g20.switchOffSignal2 = false;
  g20.switchOffSignal3 = false;
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
end FullDynamicModel_initialized;
