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
model TestCase_auxiliary "Nordic test system case with variable reference frequency"
  extends MyNordic_auxiliary.FullDynamicModel_auxiliary(Alpha = 1, Beta = 2, P0Pu_g01 = -6, P0Pu_g02 = -3, P0Pu_g03 = -5.5, P0Pu_g04 = -4, P0Pu_g05 = -2, P0Pu_g06 = -3.6, P0Pu_g07 = -1.8, P0Pu_g08 = -7.5, P0Pu_g09 = -6.685, P0Pu_g10 = -6, P0Pu_g11 = -2.5, P0Pu_g12 = -3.1, P0Pu_g13 = 0, P0Pu_g14 = -6.3, P0Pu_g15 = -10.8, P0Pu_g16 = -6, P0Pu_g17 = -5.3, P0Pu_g18 = -10.6, P0Pu_g19 = -3, U0Pu_g01 = 1.0684, U0Pu_g02 = 1.0565, U0Pu_g03 = 1.0595, U0Pu_g04 = 1.0339, U0Pu_g05 = 1.0294, U0Pu_g06 = 1.0084, U0Pu_g07 = 1.0141, U0Pu_g08 = 1.0498, U0Pu_g09 = 0.9988, U0Pu_g10 = 1.0157, U0Pu_g11 = 1.0211, U0Pu_g12 = 1.02, U0Pu_g13 = 1.017, U0Pu_g14 = 1.0454, U0Pu_g15 = 1.0455, U0Pu_g16 = 1.0531, U0Pu_g17 = 1.0092, U0Pu_g18 = 1.0307, U0Pu_g19 = 1.03, U0Pu_g20 = 1.0185, UPhase0_g20 = 0, P0Pu_load_01 = 6, P0Pu_load_02 = 3.3, P0Pu_load_03 = 2.6, P0Pu_load_04 = 8.4, P0Pu_load_05 = 7.2, P0Pu_load_11 = 2, P0Pu_load_12 = 3, P0Pu_load_13 = 1, P0Pu_load_22 = 2.8, P0Pu_load_31 = 1, P0Pu_load_32 = 2, P0Pu_load_41 = 5.4, P0Pu_load_42 = 4, P0Pu_load_43 = 9, P0Pu_load_46 = 7, P0Pu_load_47 = 1, P0Pu_load_51 = 8, P0Pu_load_61 = 5, P0Pu_load_62 = 3, P0Pu_load_63 = 5.9, P0Pu_load_71 = 3, P0Pu_load_72 = 20, Q0Pu_load_01 = 1.482, Q0Pu_load_02 = 0.71, Q0Pu_load_03 = 0.838, Q0Pu_load_04 = 2.52, Q0Pu_load_05 = 1.904, Q0Pu_load_11 = 0.688, Q0Pu_load_12 = 0.838, Q0Pu_load_13 = 0.344, Q0Pu_load_22 = 0.799, Q0Pu_load_31 = 0.247, Q0Pu_load_32 = 0.396, Q0Pu_load_41 = 1.314, Q0Pu_load_42 = 1.274, Q0Pu_load_43 = 2.546, Q0Pu_load_46 = 2.118, Q0Pu_load_47 = 0.44, Q0Pu_load_51 = 2.582, Q0Pu_load_61 = 1.225, Q0Pu_load_62 = 0.838, Q0Pu_load_63 = 2.646, Q0Pu_load_71 = 0.838, Q0Pu_load_72 = 3.961, BPu_shunt_1022 = -0.5, BPu_shunt_1041 = -2.5, BPu_shunt_1043 = -2, BPu_shunt_1044 = -2, BPu_shunt_1045 = -2, BPu_shunt_4012 = 1, BPu_shunt_4041 = -2, BPu_shunt_4043 = -2, BPu_shunt_4046 = -1, BPu_shunt_4051 = -1, BPu_shunt_4071 = 4);
  extends Dynawo.Icons.Example;
Dynawo.Types.VoltageModulePu check_UPu_bus_1041;
  Dynawo.Types.VoltageModulePu check_UPu_bus_1042;
  Dynawo.Types.VoltageModulePu check_UPu_bus_4012;
  Dynawo.Types.VoltageModulePu check_UPu_bus_4062;
equation
  check_UPu_bus_1041 = Modelica.ComplexMath.'abs'(bus_1041.terminal.V);
  check_UPu_bus_1042 = Modelica.ComplexMath.'abs'(bus_1042.terminal.V);
  check_UPu_bus_4012 = Modelica.ComplexMath.'abs'(bus_4012.terminal.V);
  check_UPu_bus_4062 = Modelica.ComplexMath.'abs'(bus_4062.terminal.V);
  line_4032_4044.switchOffSignal1.value = false;
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 169.8, Tolerance = 0.005, Interval = 0.01),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection --maxSizeLinearTearing=1040 --maxSizeNonlinearTearing=1040 --daeMode",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "euler", lssMaxDensity = "0.1", newtonMaxStepFactor = "0.1"),
    Documentation(info = "<html><head></head><body><span style=\"font-family: 'MS Shell Dlg 2'; font-size: 12px;\">This test case is meant to investigate the long term dynamic response of the Nordic 32 test system, operating point A, regarding a contingency. This particular test case corresponds to the setup presented in Chapter 3.1 of the IEEE Technical Report \"Test Systems for Voltage Stability Analysis and Security Assessment\" from August, 2015.</span><div><font face=\"MS Shell Dlg 2\"><br></font><div><font face=\"MS Shell Dlg 2\">OmegaRef of the generators is set to the center of inertia of the whole system.</font></div><div><font face=\"MS Shell Dlg 2\"><br></font></div><div><font face=\"MS Shell Dlg 2\">The simulation runs in DAEmode, starts at t = 0 s, ends at t = 169.8 s (just before crashing) and uses the euler solver with a step size of 0.01 s and a tolerance of 0.005.</font></div><div><font face=\"MS Shell Dlg 2\"><br></font><div><font face=\"MS Shell Dlg 2\">At t = 1 s, a node fault occurs at bus 4032, which is cleared by tripping line 4032-4044&nbsp;</font><span style=\"font-family: 'MS Shell Dlg 2';\">after 0.1 s</span>.</div><div><br></div><div><div style=\"font-family: 'MS Shell Dlg 2'; font-size: 12px;\">While voltage remains more or less stable at bus 4012 and 4062, voltage keeps dropping at bus 1041 and 1042, until the voltage collapses ~160 s later.</div></div></div></div></body></html>"));
end TestCase_auxiliary;
