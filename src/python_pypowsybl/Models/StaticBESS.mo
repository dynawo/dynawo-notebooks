within Dynawo.Examples.BESS.WECC;

/*
* Copyright (c) 2024, RTE (http://www.rte-france.com)
* See AUTHORS.txt
* All rights reserved.
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, you can obtain one at http://mozilla.org/MPL/2.0/.
* SPDX-License-Identifier: MPL-2.0
*
* This file is part of Dynawo, an hybrid C++/Modelica open source suite of simulation tools for power systems.
*/

model StaticBESS "WECC BESS with REEC-C and REGC-B with a plant controller REPC-A on infinite bus"
  extends Icons.Example;
  
  record InitData
    Types.PerUnit Id0Pu;
    Types.PerUnit Iq0Pu;
    Types.PerUnit PF0;
  
    Types.ActivePowerPu    PInj0Pu;
    Types.ReactivePowerPu  QInj0Pu;
    Types.VoltageModulePu  UInj0Pu;
  
    Types.ComplexPerUnit          i0Pu;
    Types.ComplexPerUnit          iInj0Pu;
    Types.ComplexPerUnit          s0Pu;
    Types.ComplexVoltagePu        u0Pu;
    Types.ComplexPerUnit          uInj0Pu;
  end InitData;

  InitData init;
  Dynawo.Electrical.Machines.Simplified.GeneratorPVFixed GenPV(PGen0Pu = 0.03, U0Pu = 1) annotation(
    Placement(visible = true, transformation(origin = {20, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  Dynawo.Electrical.Lines.Line line(BPu = 0, GPu = 0, RPu = 0, XPu = 0.0000020661) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Dynawo.Electrical.Buses.InfiniteBus infiniteBus(UPu = 1, UPhase = 0) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
    
  Dynawo.Electrical.BESS.WECC.BESS_INIT bess_INIT(
   P0Pu = -0.03,
   Q0Pu = 0,
   RPu = 0,
   SNom = 6,
   U0Pu = 1,
   UPhase0 = 0.00000144621,
   XPu =  1e-10) annotation(
   Placement(visible = true, transformation(origin = {-70, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation
  line.switchOffSignal1.value = false;
  line.switchOffSignal2.value = false;
  GenPV.switchOffSignal1.value = false;
  GenPV.switchOffSignal2.value = false;
  GenPV.switchOffSignal3.value = false;
  
  init.Id0Pu       = bess_INIT.Id0Pu;
  init.Iq0Pu       = bess_INIT.Iq0Pu;
  init.PF0         = bess_INIT.PF0;
  init.PInj0Pu     = bess_INIT.PInj0Pu;
  init.QInj0Pu     = bess_INIT.QInj0Pu;
  init.UInj0Pu     = bess_INIT.UInj0Pu;
  init.i0Pu.re     = bess_INIT.i0Pu.re;
  init.i0Pu.im     = bess_INIT.i0Pu.im;
  init.iInj0Pu.re  = bess_INIT.iInj0Pu.re;
  init.iInj0Pu.im  = bess_INIT.iInj0Pu.im;
  init.u0Pu.re     = bess_INIT.u0Pu.re;
  init.u0Pu.im     = bess_INIT.u0Pu.im;
  init.uInj0Pu.re  = bess_INIT.uInj0Pu.re;
  init.uInj0Pu.im  = bess_INIT.uInj0Pu.im;
  init.s0Pu.re     = bess_INIT.s0Pu.re;
  init.s0Pu.im     = bess_INIT.s0Pu.im;


  connect(line.terminal1, infiniteBus.terminal) annotation(
    Line(points = {{-60, 0}, {-82, 0}}, color = {0, 0, 255}));
  connect(line.terminal2, GenPV.terminal) annotation(
    Line(points = {{-20, 0}, {0, 0}}, color = {0, 0, 255}));

  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 3, Tolerance = 1e-05, Interval = 0.001),
  __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian,newInst",
  __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida", maxIntegrationOrder = "2", nls = "kinsol", noHomotopyOnFirstTry = "()", noRestart = "()", noRootFinding = "()", initialStepSize = "0.00001", maxStepSize = "10"),
  Documentation(info = "<html><head></head><body>
  <figure>This example and the data are inspired by the article [P. <span style=\"text-decoration: underline;\">Pourbeik</span> and J. K. <span style=\"text-decoration: underline;\">Petter</span>, <span style=\"text-decoration: underline;\">“Modeling</span> and validation <span style=\"text-decoration: underline;\">of</span> <span style=\"text-decoration: underline;\">battery</span> <span style=\"text-decoration: underline;\">energy</span> <span style=\"text-decoration: underline;\">storage</span> <span style=\"text-decoration: underline;\">systems&nbsp;</span><span style=\"text-decoration: underline;\">using</span> simple <span style=\"text-decoration: underline;\">generic</span> <span style=\"text-decoration: underline;\">models</span> for <span style=\"text-decoration: underline;\">power</span> system <span style=\"text-decoration: underline;\">stability</span> <span style=\"text-decoration: underline;\">studies”</span>, <span style=\"text-decoration: underline;\">CIGRE</span> Science and Engineering, <span style=\"text-decoration: underline;\">October</span> 2017, pp. 63-72.]</figure><figure>At initial time, the active power demanded by the battery is 0.5 pu (base SNom = 6MVA) and the reactive power is 0 pu (base SNom = 6MVA).</figure><figure>The BESS is able to discharge since the initial state of charge SOC0Pu = 0.5 is between the accepted range [SOCMinPu = 0.2 , SOCMaxPu = 0.8]. Since the simulation is only for 3 s, and the discharge time is considered much longer, the state of charge SOCPu is considered constant all along the simulation time.</figure><figure>At t = 1 s, a fault at the infinite bus is simulated and it can be seen that the BESS starts injecting reactive power until the fault is cleared at t = 1.5 s.</figure><figure>
    <img width=\"450\" src=\"modelica://Dynawo/Examples/BESS/WECC/Resources/PInjPuSn.png\">
  </figure>
  <figure>
    <img width=\"450\" src=\"modelica://Dynawo/Examples/BESS/WECC/Resources/QInjPuSn.png\">
  </figure>
  <figure>
    <img width=\"450\" src=\"modelica://Dynawo/Examples/BESS/WECC/Resources/UPu.png\">
  </figure>
</body></html>"));
end StaticBESS;
