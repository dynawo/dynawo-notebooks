within Demo_IEEE14_LineB2B5_XPu_0p24_auxiliary;

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
model IEEE14DisconnectLine_auxiliary "IEEE 14-bus system benchmark formed with 14 buses, 5 generators (2 generators and 3 synchronous condensers), 1 shunt, 3 transformers, 17 lines and 11 loads. Disconnection of a line is represented at time 100 s of the simulation."
  extends Demo_IEEE14_LineB2B5_XPu_0p24_auxiliary.IEEE14Base_auxiliary(U0Pu_Gen1 = 1.06, UPhase0_Gen1 = 0, P0Pu_Gen2 = -0.4, U0Pu_Gen2 = 1.045072, P0Pu_Gen3 = 0, U0Pu_Gen3 = 1.01, P0Pu_Gen6 = 0, U0Pu_Gen6 = 1.070290, P0Pu_Gen8 = 0, U0Pu_Gen8 = 1.089855, P0Pu_Load2 = 0.217000, Q0Pu_Load2 = 0.127000, P0Pu_Load3 = 0.942000, Q0Pu_Load3 = 0.190000, P0Pu_Load4 = 0.478000, Q0Pu_Load4 = -0.039000, P0Pu_Load5 = 0.076000, Q0Pu_Load5 = 0.016000, P0Pu_Load6 = 0.112000, Q0Pu_Load6 = 0.075000, P0Pu_Load9 = 0.295000, Q0Pu_Load9 = 0.166000, P0Pu_Load10 = 0.090000, Q0Pu_Load10 = 0.058000, P0Pu_Load11 = 0.035000, Q0Pu_Load11 = 0.018000, P0Pu_Load12 = 0.061000, Q0Pu_Load12 = 0.016000, P0Pu_Load13 = 0.135000, Q0Pu_Load13 = 0.058000, P0Pu_Load14 = 0.149000, Q0Pu_Load14 = 0.050000);
  extends Modelica.Icons.Example;
equation
  Load2.deltaP = 0;
  Load2.deltaQ = 0;
  Load3.deltaP = 0;
  Load3.deltaQ = 0;
  Load4.deltaP = 0;
  Load4.deltaQ = 0;
  Load5.deltaP = 0;
  Load5.deltaQ = 0;
  Load6.deltaP = 0;
  Load6.deltaQ = 0;
  Load9.deltaP = 0;
  Load9.deltaQ = 0;
  Load10.deltaP = 0;
  Load10.deltaQ = 0;
  Load11.deltaP = 0;
  Load11.deltaQ = 0;
  Load12.deltaP = 0;
  Load12.deltaQ = 0;
  Load13.deltaP = 0;
  Load13.deltaQ = 0;
  Load14.deltaP = 0;
  Load14.deltaQ = 0;
// Generators references
// Switch off signals for generators, loads, lines, transformers and bank
  Gen2.switchOffSignal1 = false;
  Gen2.switchOffSignal2 = false;
  Gen2.switchOffSignal3 = false;
  Gen3.switchOffSignal1 = false;
  Gen3.switchOffSignal2 = false;
  Gen3.switchOffSignal3 = false;
  Gen6.switchOffSignal1 = false;
  Gen6.switchOffSignal2 = false;
  Gen6.switchOffSignal3 = false;
  Gen8.switchOffSignal1 = false;
  Gen8.switchOffSignal2 = false;
  Gen8.switchOffSignal3 = false;
  Load2.switchOffSignal1 = false;
  Load2.switchOffSignal2 = false;
  Load3.switchOffSignal1 = false;
  Load3.switchOffSignal2 = false;
  Load4.switchOffSignal1 = false;
  Load4.switchOffSignal2 = false;
  Load5.switchOffSignal1 = false;
  Load5.switchOffSignal2 = false;
  Load6.switchOffSignal1 = false;
  Load6.switchOffSignal2 = false;
  Load9.switchOffSignal1 = false;
  Load9.switchOffSignal2 = false;
  Load10.switchOffSignal1 = false;
  Load10.switchOffSignal2 = false;
  Load11.switchOffSignal1 = false;
  Load11.switchOffSignal2 = false;
  Load12.switchOffSignal1 = false;
  Load12.switchOffSignal2 = false;
  Load13.switchOffSignal1 = false;
  Load13.switchOffSignal2 = false;
  Load14.switchOffSignal1 = false;
  Load14.switchOffSignal2 = false;
  LineB10B11.switchOffSignal1 = false;
  LineB10B11.switchOffSignal2 = false;
  LineB12B13.switchOffSignal1 = false;
  LineB12B13.switchOffSignal2 = false;
  LineB13B14.switchOffSignal1 = false;
  LineB13B14.switchOffSignal2 = false;
  LineB1B5.switchOffSignal1 = false;
  LineB1B5.switchOffSignal2 = false;
// Disconnecting line B1B5
  LineB1B2.switchOffSignal1 = false;
  LineB1B2.switchOffSignal2 = false;
  LineB2B3.switchOffSignal1 = false;
  LineB2B3.switchOffSignal2 = false;
  LineB2B4.switchOffSignal1 = false;
  LineB2B4.switchOffSignal2 = false;
  LineB2B5.switchOffSignal1 = false;
  LineB2B5.switchOffSignal2 = false;
  LineB3B4.switchOffSignal1 = false;
  LineB3B4.switchOffSignal2 = false;
  LineB4B5.switchOffSignal1 = false;
  LineB4B5.switchOffSignal2 = false;
  LineB6B11.switchOffSignal1 = false;
  LineB6B11.switchOffSignal2 = false;
  LineB6B12.switchOffSignal1 = false;
  LineB6B12.switchOffSignal2 = false;
  LineB6B13.switchOffSignal1 = false;
  LineB6B13.switchOffSignal2 = false;
  LineB7B8.switchOffSignal1 = false;
  LineB7B8.switchOffSignal2 = false;
  LineB7B9.switchOffSignal1 = false;
  LineB7B9.switchOffSignal2 = false;
  LineB9B10.switchOffSignal1 = false;
  LineB9B10.switchOffSignal2 = false;
  LineB9B14.switchOffSignal1 = false;
  LineB9B14.switchOffSignal2 = false;
  Tfo1.switchOffSignal1 = false;
  Tfo1.switchOffSignal2 = false;
  Tfo2.switchOffSignal1 = false;
  Tfo2.switchOffSignal2 = false;
  Tfo3.switchOffSignal1 = false;
  Tfo3.switchOffSignal2 = false;
  Bank9.switchOffSignal1 = false;
  Bank9.switchOffSignal2 = false;
  annotation(
    preferredView = "diagram",
    experiment(StartTime = 0, StopTime = 2000, Tolerance = 1e-6, Interval = 10),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian --daeMode",
    __OpenModelica_simulationFlags(ls = "klu", lv = "LOG_STATS", nls = "kinsol", s = "euler"));
end IEEE14DisconnectLine_auxiliary;
