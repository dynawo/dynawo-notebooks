#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4863
type: SIMPLE_ASSIGN
line_4021_4032.P2Pu = line_4032_4044.terminal1.V.re * line_4021_4032.terminal2.i.re + line_4032_4044.terminal1.V.im * line_4021_4032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2523]] /* line_4021_4032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4863;
}

/*
equation index: 4864
type: SIMPLE_ASSIGN
line_4011_4021.Q2Pu = line_4021_4032.terminal1.V.im * line_4011_4021.terminal2.i.re - line_4021_4032.terminal1.V.re * line_4011_4021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2481]] /* line_4011_4021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4864;
}

/*
equation index: 4865
type: SIMPLE_ASSIGN
line_4011_4021.P2Pu = line_4021_4032.terminal1.V.re * line_4011_4021.terminal2.i.re + line_4021_4032.terminal1.V.im * line_4011_4021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2479]] /* line_4011_4021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4865;
}

/*
equation index: 4866
type: SIMPLE_ASSIGN
trafo_g9_4011.U2Pu = if trafo_g9_4011.running.value then if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4866};
  modelica_real tmp1023;
  modelica_real tmp1024;
  modelica_real tmp1025;
  modelica_boolean tmp1026;
  modelica_real tmp1027;
  modelica_boolean tmp1028;
  modelica_real tmp1029;
  tmp1028 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp1028)
  {
    tmp1026 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
    if(tmp1026)
    {
      tmp1027 = 0.0;
    }
    else
    {
      tmp1023 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
      tmp1024 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
      tmp1025 = (tmp1023 * tmp1023) + (tmp1024 * tmp1024);
      if(tmp1025 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1025, 0.5);
      }
      tmp1027 = sqrt(tmp1025);
    }
    tmp1029 = tmp1027;
  }
  else
  {
    tmp1029 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3443]] /* trafo_g9_4011.U2Pu variable */) = tmp1029;
  threadData->lastEquationSolved = 4866;
}

/*
equation index: 4867
type: SIMPLE_ASSIGN
g09.iStatorPu.re = if g09.running.value then g09.rTfoPu * g09.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4867;
}

/*
equation index: 4868
type: SIMPLE_ASSIGN
g09.IStatorPu = if g09.running.value then if g09.iStatorPu.re == 0.0 and g09.iStatorPu.im == 0.0 then 0.0 else (g09.iStatorPu.re ^ 2.0 + g09.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4868};
  modelica_real tmp1030;
  modelica_real tmp1031;
  modelica_real tmp1032;
  modelica_boolean tmp1033;
  modelica_real tmp1034;
  modelica_boolean tmp1035;
  modelica_real tmp1036;
  tmp1035 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1035)
  {
    tmp1033 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) == 0.0));
    if(tmp1033)
    {
      tmp1034 = 0.0;
    }
    else
    {
      tmp1030 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */);
      tmp1031 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */);
      tmp1032 = (tmp1030 * tmp1030) + (tmp1031 * tmp1031);
      if(tmp1032 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1032, 0.5);
      }
      tmp1034 = sqrt(tmp1032);
    }
    tmp1036 = tmp1034;
  }
  else
  {
    tmp1036 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1382]] /* g09.IStatorPu variable */) = tmp1036;
  threadData->lastEquationSolved = 4868;
}

/*
equation index: 4869
type: SIMPLE_ASSIGN
$DER.g09.lambdaQ1Pu = if g09.running.value then g09.RQ1PPu * g09.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* der(g09.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* g09.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4869;
}

/*
equation index: 4870
type: SIMPLE_ASSIGN
$DER.g09.lambdaQ2Pu = if g09.running.value then g09.RQ2PPu * g09.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* der(g09.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* g09.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4870;
}

/*
equation index: 4871
type: SIMPLE_ASSIGN
$DER.g09.lambdaDPu = if g09.running.value then g09.RDPPu * g09.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* der(g09.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* g09.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4871;
}

/*
equation index: 4872
type: SIMPLE_ASSIGN
g09.uStatorPu.im = if g09.running.value then (g09.terminal.V.im + (-100.0) * (g09.terminal.i.re * g09.XTfoPu + g09.terminal.i.im * g09.RTfoPu) / g09.SNom) / g09.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */),"g09.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4872;
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
g09.uPu.im = if g09.running.value then g09.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1421]] /* g09.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4873;
}

/*
equation index: 4874
type: SIMPLE_ASSIGN
g09.cePu = if g09.running.value then g09.lambdaqPu * g09.idPu - g09.lambdadPu * g09.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4874;
}

/*
equation index: 4875
type: SIMPLE_ASSIGN
g09.PePu = if g09.running.value then g09.cePu * g09.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1386]] /* g09.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4875;
}

/*
equation index: 4876
type: SIMPLE_ASSIGN
g09.thetaInternal.value = if g09.running.value then Modelica.Math.atan3(g09.udPu, g09.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1420]] /* g09.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4876;
}

/*
equation index: 4877
type: SIMPLE_ASSIGN
g09.uStatorPu.re = if g09.running.value then (g09.terminal.V.re + (-100.0) * (g09.terminal.i.re * g09.RTfoPu - g09.terminal.i.im * g09.XTfoPu) / g09.SNom) / g09.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */),"g09.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4877;
}

/*
equation index: 4878
type: SIMPLE_ASSIGN
g09.sStatorPu.im = if g09.running.value then g09.uStatorPu.im * g09.iStatorPu.re - g09.uStatorPu.re * g09.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* g09.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4878;
}

/*
equation index: 4879
type: SIMPLE_ASSIGN
g09.QStatorPu = if g09.running.value then -g09.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1390]] /* g09.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* g09.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4879;
}

/*
equation index: 4880
type: SIMPLE_ASSIGN
g09.QStatorPuQNom = if g09.running.value then 100.0 * g09.QStatorPu / g09.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1391]] /* g09.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1390]] /* g09.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* g09.QNomAlt PARAM */),"g09.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4880;
}

/*
equation index: 4881
type: SIMPLE_ASSIGN
g09.sStatorPu.re = if g09.running.value then g09.uStatorPu.re * g09.iStatorPu.re + g09.uStatorPu.im * g09.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1414]] /* g09.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4881;
}

/*
equation index: 4882
type: SIMPLE_ASSIGN
g09.QGenPu = if g09.running.value then g09.terminal.V.re * g09.terminal.i.im - g09.terminal.V.im * g09.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1389]] /* g09.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4882;
}

/*
equation index: 4883
type: SIMPLE_ASSIGN
g09.QGen = if g09.running.value then 100.0 * g09.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1388]] /* g09.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1389]] /* g09.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4883;
}

/*
equation index: 4884
type: SIMPLE_ASSIGN
g09.UPu = if g09.running.value then (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4884};
  modelica_real tmp1037;
  modelica_real tmp1038;
  modelica_real tmp1039;
  modelica_boolean tmp1040;
  modelica_real tmp1041;
  tmp1040 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1040)
  {
    tmp1037 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
    tmp1038 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
    tmp1039 = (tmp1037 * tmp1037) + (tmp1038 * tmp1038);
    if(tmp1039 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1039, 0.5);
    }
    tmp1041 = sqrt(tmp1039);
  }
  else
  {
    tmp1041 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1392]] /* g09.UPu variable */) = tmp1041;
  threadData->lastEquationSolved = 4884;
}

/*
equation index: 4885
type: SIMPLE_ASSIGN
g09.uPu.re = if g09.running.value then g09.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1422]] /* g09.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4885;
}

/*
equation index: 4886
type: SIMPLE_ASSIGN
trafo_g9_4011.U1Pu = if trafo_g9_4011.running.value then if g09.terminal.V.re == 0.0 and g09.terminal.V.im == 0.0 then 0.0 else (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4886};
  modelica_real tmp1042;
  modelica_real tmp1043;
  modelica_real tmp1044;
  modelica_boolean tmp1045;
  modelica_real tmp1046;
  modelica_boolean tmp1047;
  modelica_real tmp1048;
  tmp1047 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp1047)
  {
    tmp1045 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0));
    if(tmp1045)
    {
      tmp1046 = 0.0;
    }
    else
    {
      tmp1042 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
      tmp1043 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
      tmp1044 = (tmp1042 * tmp1042) + (tmp1043 * tmp1043);
      if(tmp1044 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1044, 0.5);
      }
      tmp1046 = sqrt(tmp1044);
    }
    tmp1048 = tmp1046;
  }
  else
  {
    tmp1048 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3442]] /* trafo_g9_4011.U1Pu variable */) = tmp1048;
  threadData->lastEquationSolved = 4886;
}

/*
equation index: 4887
type: SIMPLE_ASSIGN
trafo_g9_4011.Q1Pu = g09.terminal.V.re * g09.terminal.i.im - g09.terminal.V.im * g09.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3440]] /* trafo_g9_4011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4887;
}

/*
equation index: 4888
type: SIMPLE_ASSIGN
trafo_g9_4011.P1Pu = (-g09.terminal.V.re) * g09.terminal.i.re - g09.terminal.V.im * g09.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3438]] /* trafo_g9_4011.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4888;
}

/*
equation index: 4889
type: SIMPLE_ASSIGN
bus_BG09.UPhase = Modelica.Math.atan3(g09.terminal.V.im, g09.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* bus_BG09.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4889;
}

/*
equation index: 4890
type: SIMPLE_ASSIGN
bus_BG09.UPu = if g09.terminal.V.re == 0.0 and g09.terminal.V.im == 0.0 then 0.0 else (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4890};
  modelica_real tmp1049;
  modelica_real tmp1050;
  modelica_real tmp1051;
  modelica_boolean tmp1052;
  modelica_real tmp1053;
  tmp1052 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0));
  if(tmp1052)
  {
    tmp1053 = 0.0;
  }
  else
  {
    tmp1049 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
    tmp1050 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
    tmp1051 = (tmp1049 * tmp1049) + (tmp1050 * tmp1050);
    if(tmp1051 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1051, 0.5);
    }
    tmp1053 = sqrt(tmp1051);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* bus_BG09.UPu variable */) = tmp1053;
  threadData->lastEquationSolved = 4890;
}

/*
equation index: 4891
type: SIMPLE_ASSIGN
bus_BG09.U = bus_BG09.UPu * bus_BG09.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* bus_BG09.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* bus_BG09.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* bus_BG09.UNom PARAM */));
  threadData->lastEquationSolved = 4891;
}

/*
equation index: 4892
type: SIMPLE_ASSIGN
trafo_g9_4011.Q2Pu = line_4011_4071.terminal1.V.im * trafo_g9_4011.terminal2.i.re - line_4011_4071.terminal1.V.re * trafo_g9_4011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3441]] /* trafo_g9_4011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4892;
}

/*
equation index: 4893
type: SIMPLE_ASSIGN
trafo_g9_4011.P2Pu = line_4011_4071.terminal1.V.re * trafo_g9_4011.terminal2.i.re + line_4011_4071.terminal1.V.im * trafo_g9_4011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3439]] /* trafo_g9_4011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4893;
}

/*
equation index: 4894
type: SIMPLE_ASSIGN
trafo_1011_4011.U2Pu = if trafo_1011_4011.running.value then if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4894};
  modelica_real tmp1054;
  modelica_real tmp1055;
  modelica_real tmp1056;
  modelica_boolean tmp1057;
  modelica_real tmp1058;
  modelica_boolean tmp1059;
  modelica_real tmp1060;
  tmp1059 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp1059)
  {
    tmp1057 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
    if(tmp1057)
    {
      tmp1058 = 0.0;
    }
    else
    {
      tmp1054 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
      tmp1055 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
      tmp1056 = (tmp1054 * tmp1054) + (tmp1055 * tmp1055);
      if(tmp1056 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1056, 0.5);
      }
      tmp1058 = sqrt(tmp1056);
    }
    tmp1060 = tmp1058;
  }
  else
  {
    tmp1060 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2989]] /* trafo_1011_4011.U2Pu variable */) = tmp1060;
  threadData->lastEquationSolved = 4894;
}

/*
equation index: 4895
type: SIMPLE_ASSIGN
trafo_11_1011.U1Pu = if trafo_11_1011.running.value then if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4895};
  modelica_real tmp1061;
  modelica_real tmp1062;
  modelica_real tmp1063;
  modelica_boolean tmp1064;
  modelica_real tmp1065;
  modelica_boolean tmp1066;
  modelica_real tmp1067;
  tmp1066 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp1066)
  {
    tmp1064 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
    if(tmp1064)
    {
      tmp1065 = 0.0;
    }
    else
    {
      tmp1061 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
      tmp1062 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
      tmp1063 = (tmp1061 * tmp1061) + (tmp1062 * tmp1062);
      if(tmp1063 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1063, 0.5);
      }
      tmp1065 = sqrt(tmp1063);
    }
    tmp1067 = tmp1065;
  }
  else
  {
    tmp1067 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* trafo_11_1011.U1Pu variable */) = tmp1067;
  threadData->lastEquationSolved = 4895;
}

/*
equation index: 4896
type: SIMPLE_ASSIGN
trafo_11_1011.Q1Pu = load_11.terminal.V.im * trafo_11_1011.terminal1.i.re - load_11.terminal.V.re * trafo_11_1011.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3056]] /* trafo_11_1011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4896;
}

/*
equation index: 4897
type: SIMPLE_ASSIGN
trafo_11_1011.P1Pu = load_11.terminal.V.re * trafo_11_1011.terminal1.i.re + load_11.terminal.V.im * trafo_11_1011.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3054]] /* trafo_11_1011.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4897;
}

/*
equation index: 4898
type: SIMPLE_ASSIGN
trafo_1011_4011.U1Pu = if trafo_1011_4011.running.value then if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4898};
  modelica_real tmp1068;
  modelica_real tmp1069;
  modelica_real tmp1070;
  modelica_boolean tmp1071;
  modelica_real tmp1072;
  modelica_boolean tmp1073;
  modelica_real tmp1074;
  tmp1073 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp1073)
  {
    tmp1071 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
    if(tmp1071)
    {
      tmp1072 = 0.0;
    }
    else
    {
      tmp1068 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
      tmp1069 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
      tmp1070 = (tmp1068 * tmp1068) + (tmp1069 * tmp1069);
      if(tmp1070 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1070, 0.5);
      }
      tmp1072 = sqrt(tmp1070);
    }
    tmp1074 = tmp1072;
  }
  else
  {
    tmp1074 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2988]] /* trafo_1011_4011.U1Pu variable */) = tmp1074;
  threadData->lastEquationSolved = 4898;
}

/*
equation index: 4899
type: SIMPLE_ASSIGN
trafo_1011_4011.Q1Pu = line_1011_1013a.terminal1.V.im * trafo_1011_4011.terminal1.i.re - line_1011_1013a.terminal1.V.re * trafo_1011_4011.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2986]] /* trafo_1011_4011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4899;
}

/*
equation index: 4900
type: SIMPLE_ASSIGN
trafo_1011_4011.P1Pu = line_1011_1013a.terminal1.V.re * trafo_1011_4011.terminal1.i.re + line_1011_1013a.terminal1.V.im * trafo_1011_4011.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2984]] /* trafo_1011_4011.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4900;
}

/*
equation index: 4901
type: SIMPLE_ASSIGN
trafo_11_1011.U2Pu = if trafo_11_1011.running.value then if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4901};
  modelica_real tmp1075;
  modelica_real tmp1076;
  modelica_real tmp1077;
  modelica_boolean tmp1078;
  modelica_real tmp1079;
  modelica_boolean tmp1080;
  modelica_real tmp1081;
  tmp1080 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp1080)
  {
    tmp1078 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
    if(tmp1078)
    {
      tmp1079 = 0.0;
    }
    else
    {
      tmp1075 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
      tmp1076 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
      tmp1077 = (tmp1075 * tmp1075) + (tmp1076 * tmp1076);
      if(tmp1077 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1077, 0.5);
      }
      tmp1079 = sqrt(tmp1077);
    }
    tmp1081 = tmp1079;
  }
  else
  {
    tmp1081 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* trafo_11_1011.U2Pu variable */) = tmp1081;
  threadData->lastEquationSolved = 4901;
}

/*
equation index: 4902
type: SIMPLE_ASSIGN
trafo_11_1011.Q2Pu = line_1011_1013a.terminal1.V.im * trafo_11_1011.terminal2.i.re - line_1011_1013a.terminal1.V.re * trafo_11_1011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3057]] /* trafo_11_1011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4902;
}

/*
equation index: 4903
type: SIMPLE_ASSIGN
trafo_11_1011.P2Pu = line_1011_1013a.terminal1.V.re * trafo_11_1011.terminal2.i.re + line_1011_1013a.terminal1.V.im * trafo_11_1011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3055]] /* trafo_11_1011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4903;
}

/*
equation index: 4904
type: SIMPLE_ASSIGN
line_1011_1013a.Q1Pu = line_1011_1013a.terminal1.V.im * line_1011_1013a.terminal1.i.re - line_1011_1013a.terminal1.V.re * line_1011_1013a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2294]] /* line_1011_1013a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4904;
}

/*
equation index: 4905
type: SIMPLE_ASSIGN
line_1011_1013a.P1Pu = line_1011_1013a.terminal1.V.re * line_1011_1013a.terminal1.i.re + line_1011_1013a.terminal1.V.im * line_1011_1013a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2292]] /* line_1011_1013a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4905;
}

/*
equation index: 4906
type: SIMPLE_ASSIGN
line_1011_1013b.Q1Pu = line_1011_1013a.terminal1.V.im * line_1011_1013b.terminal1.i.re - line_1011_1013a.terminal1.V.re * line_1011_1013b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2304]] /* line_1011_1013b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4906;
}

/*
equation index: 4907
type: SIMPLE_ASSIGN
line_1011_1013b.P1Pu = line_1011_1013a.terminal1.V.re * line_1011_1013b.terminal1.i.re + line_1011_1013a.terminal1.V.im * line_1011_1013b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2302]] /* line_1011_1013b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4907;
}

/*
equation index: 4908
type: SIMPLE_ASSIGN
trafo_g2_1013.U2Pu = if trafo_g2_1013.running.value then if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4908};
  modelica_real tmp1082;
  modelica_real tmp1083;
  modelica_real tmp1084;
  modelica_boolean tmp1085;
  modelica_real tmp1086;
  modelica_boolean tmp1087;
  modelica_real tmp1088;
  tmp1087 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp1087)
  {
    tmp1085 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp1085)
    {
      tmp1086 = 0.0;
    }
    else
    {
      tmp1082 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
      tmp1083 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
      tmp1084 = (tmp1082 * tmp1082) + (tmp1083 * tmp1083);
      if(tmp1084 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1084, 0.5);
      }
      tmp1086 = sqrt(tmp1084);
    }
    tmp1088 = tmp1086;
  }
  else
  {
    tmp1088 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3387]] /* trafo_g2_1013.U2Pu variable */) = tmp1088;
  threadData->lastEquationSolved = 4908;
}

/*
equation index: 4909
type: SIMPLE_ASSIGN
g02.uPu.re = if g02.running.value then g02.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* g02.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4909;
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
$DER.g02.lambdaDPu = if g02.running.value then g02.RDPPu * g02.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* der(g02.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* g02.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4910;
}

/*
equation index: 4911
type: SIMPLE_ASSIGN
g02.iStatorPu.re = if g02.running.value then g02.rTfoPu * g02.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4911;
}

/*
equation index: 4912
type: SIMPLE_ASSIGN
$DER.g02.lambdaQ1Pu = if g02.running.value then g02.RQ1PPu * g02.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(g02.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* g02.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4912;
}

/*
equation index: 4913
type: SIMPLE_ASSIGN
$DER.g02.lambdaQ2Pu = if g02.running.value then g02.RQ2PPu * g02.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* der(g02.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* g02.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4913;
}

/*
equation index: 4914
type: SIMPLE_ASSIGN
g02.iStatorPu.im = if g02.running.value then g02.rTfoPu * g02.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4914;
}

/*
equation index: 4915
type: SIMPLE_ASSIGN
g02.IStatorPu = if g02.running.value then if g02.iStatorPu.re == 0.0 and g02.iStatorPu.im == 0.0 then 0.0 else (g02.iStatorPu.re ^ 2.0 + g02.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4915};
  modelica_real tmp1089;
  modelica_real tmp1090;
  modelica_real tmp1091;
  modelica_boolean tmp1092;
  modelica_real tmp1093;
  modelica_boolean tmp1094;
  modelica_real tmp1095;
  tmp1094 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp1094)
  {
    tmp1092 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) == 0.0));
    if(tmp1092)
    {
      tmp1093 = 0.0;
    }
    else
    {
      tmp1089 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */);
      tmp1090 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */);
      tmp1091 = (tmp1089 * tmp1089) + (tmp1090 * tmp1090);
      if(tmp1091 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1091, 0.5);
      }
      tmp1093 = sqrt(tmp1091);
    }
    tmp1095 = tmp1093;
  }
  else
  {
    tmp1095 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* g02.IStatorPu variable */) = tmp1095;
  threadData->lastEquationSolved = 4915;
}

/*
equation index: 4916
type: SIMPLE_ASSIGN
g02.uStatorPu.re = if g02.running.value then (g02.terminal.V.re + (-100.0) * (g02.terminal.i.re * g02.RTfoPu - g02.terminal.i.im * g02.XTfoPu) / g02.SNom) / g02.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */),"g02.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4916;
}

/*
equation index: 4917
type: SIMPLE_ASSIGN
g02.cePu = if g02.running.value then g02.lambdaqPu * g02.idPu - g02.lambdadPu * g02.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4917;
}

/*
equation index: 4918
type: SIMPLE_ASSIGN
g02.PePu = if g02.running.value then g02.cePu * g02.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* g02.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4918;
}

/*
equation index: 4919
type: SIMPLE_ASSIGN
g02.thetaInternal.value = if g02.running.value then Modelica.Math.atan3(g02.udPu, g02.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* g02.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4919;
}

/*
equation index: 4920
type: SIMPLE_ASSIGN
g02.uStatorPu.im = if g02.running.value then (g02.terminal.V.im + (-100.0) * (g02.terminal.i.re * g02.XTfoPu + g02.terminal.i.im * g02.RTfoPu) / g02.SNom) / g02.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */),"g02.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4920;
}

/*
equation index: 4921
type: SIMPLE_ASSIGN
g02.sStatorPu.im = if g02.running.value then g02.uStatorPu.im * g02.iStatorPu.re - g02.uStatorPu.re * g02.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* g02.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4921;
}

/*
equation index: 4922
type: SIMPLE_ASSIGN
g02.QStatorPu = if g02.running.value then -g02.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* g02.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* g02.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4922;
}

/*
equation index: 4923
type: SIMPLE_ASSIGN
g02.QStatorPuQNom = if g02.running.value then 100.0 * g02.QStatorPu / g02.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* g02.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* g02.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* g02.QNomAlt PARAM */),"g02.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4923;
}

/*
equation index: 4924
type: SIMPLE_ASSIGN
g02.sStatorPu.re = if g02.running.value then g02.uStatorPu.re * g02.iStatorPu.re + g02.uStatorPu.im * g02.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* g02.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4924;
}

/*
equation index: 4925
type: SIMPLE_ASSIGN
g02.QGenPu = if g02.running.value then g02.terminal.V.re * g02.terminal.i.im - g02.terminal.V.im * g02.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* g02.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4925;
}

/*
equation index: 4926
type: SIMPLE_ASSIGN
g02.QGen = if g02.running.value then 100.0 * g02.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* g02.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* g02.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4926;
}

/*
equation index: 4927
type: SIMPLE_ASSIGN
g02.UPu = if g02.running.value then (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4927};
  modelica_real tmp1096;
  modelica_real tmp1097;
  modelica_real tmp1098;
  modelica_boolean tmp1099;
  modelica_real tmp1100;
  tmp1099 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp1099)
  {
    tmp1096 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
    tmp1097 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
    tmp1098 = (tmp1096 * tmp1096) + (tmp1097 * tmp1097);
    if(tmp1098 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1098, 0.5);
    }
    tmp1100 = sqrt(tmp1098);
  }
  else
  {
    tmp1100 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* g02.UPu variable */) = tmp1100;
  threadData->lastEquationSolved = 4927;
}

/*
equation index: 4928
type: SIMPLE_ASSIGN
g02.uPu.im = if g02.running.value then g02.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* g02.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4928;
}

/*
equation index: 4929
type: SIMPLE_ASSIGN
trafo_g2_1013.U1Pu = if trafo_g2_1013.running.value then if g02.terminal.V.re == 0.0 and g02.terminal.V.im == 0.0 then 0.0 else (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4929};
  modelica_real tmp1101;
  modelica_real tmp1102;
  modelica_real tmp1103;
  modelica_boolean tmp1104;
  modelica_real tmp1105;
  modelica_boolean tmp1106;
  modelica_real tmp1107;
  tmp1106 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp1106)
  {
    tmp1104 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0));
    if(tmp1104)
    {
      tmp1105 = 0.0;
    }
    else
    {
      tmp1101 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
      tmp1102 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
      tmp1103 = (tmp1101 * tmp1101) + (tmp1102 * tmp1102);
      if(tmp1103 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1103, 0.5);
      }
      tmp1105 = sqrt(tmp1103);
    }
    tmp1107 = tmp1105;
  }
  else
  {
    tmp1107 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3386]] /* trafo_g2_1013.U1Pu variable */) = tmp1107;
  threadData->lastEquationSolved = 4929;
}

/*
equation index: 4930
type: SIMPLE_ASSIGN
trafo_g2_1013.Q1Pu = g02.terminal.V.re * g02.terminal.i.im - g02.terminal.V.im * g02.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3384]] /* trafo_g2_1013.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4930;
}

/*
equation index: 4931
type: SIMPLE_ASSIGN
trafo_g2_1013.P1Pu = (-g02.terminal.V.re) * g02.terminal.i.re - g02.terminal.V.im * g02.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3382]] /* trafo_g2_1013.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4931;
}

/*
equation index: 4932
type: SIMPLE_ASSIGN
bus_BG02.UPhase = Modelica.Math.atan3(g02.terminal.V.im, g02.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* bus_BG02.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4932;
}

/*
equation index: 4933
type: SIMPLE_ASSIGN
bus_BG02.UPu = if g02.terminal.V.re == 0.0 and g02.terminal.V.im == 0.0 then 0.0 else (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4933};
  modelica_real tmp1108;
  modelica_real tmp1109;
  modelica_real tmp1110;
  modelica_boolean tmp1111;
  modelica_real tmp1112;
  tmp1111 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0));
  if(tmp1111)
  {
    tmp1112 = 0.0;
  }
  else
  {
    tmp1108 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
    tmp1109 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
    tmp1110 = (tmp1108 * tmp1108) + (tmp1109 * tmp1109);
    if(tmp1110 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1110, 0.5);
    }
    tmp1112 = sqrt(tmp1110);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* bus_BG02.UPu variable */) = tmp1112;
  threadData->lastEquationSolved = 4933;
}

/*
equation index: 4934
type: SIMPLE_ASSIGN
bus_BG02.U = bus_BG02.UPu * bus_BG02.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* bus_BG02.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* bus_BG02.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* bus_BG02.UNom PARAM */));
  threadData->lastEquationSolved = 4934;
}

/*
equation index: 4935
type: SIMPLE_ASSIGN
trafo_g2_1013.Q2Pu = line_1013_1014a.terminal1.V.im * trafo_g2_1013.terminal2.i.re - line_1013_1014a.terminal1.V.re * trafo_g2_1013.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3385]] /* trafo_g2_1013.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4935;
}

/*
equation index: 4936
type: SIMPLE_ASSIGN
trafo_g2_1013.P2Pu = line_1013_1014a.terminal1.V.re * trafo_g2_1013.terminal2.i.re + line_1013_1014a.terminal1.V.im * trafo_g2_1013.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3383]] /* trafo_g2_1013.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4936;
}

/*
equation index: 4937
type: SIMPLE_ASSIGN
trafo_13_1013.U2Pu = if trafo_13_1013.running.value then if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4937};
  modelica_real tmp1113;
  modelica_real tmp1114;
  modelica_real tmp1115;
  modelica_boolean tmp1116;
  modelica_real tmp1117;
  modelica_boolean tmp1118;
  modelica_real tmp1119;
  tmp1118 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp1118)
  {
    tmp1116 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp1116)
    {
      tmp1117 = 0.0;
    }
    else
    {
      tmp1113 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
      tmp1114 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
      tmp1115 = (tmp1113 * tmp1113) + (tmp1114 * tmp1114);
      if(tmp1115 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1115, 0.5);
      }
      tmp1117 = sqrt(tmp1115);
    }
    tmp1119 = tmp1117;
  }
  else
  {
    tmp1119 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3079]] /* trafo_13_1013.U2Pu variable */) = tmp1119;
  threadData->lastEquationSolved = 4937;
}

/*
equation index: 4938
type: SIMPLE_ASSIGN
trafo_13_1013.U1Pu = if trafo_13_1013.running.value then if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4938};
  modelica_real tmp1120;
  modelica_real tmp1121;
  modelica_real tmp1122;
  modelica_boolean tmp1123;
  modelica_real tmp1124;
  modelica_boolean tmp1125;
  modelica_real tmp1126;
  tmp1125 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp1125)
  {
    tmp1123 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
    if(tmp1123)
    {
      tmp1124 = 0.0;
    }
    else
    {
      tmp1120 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
      tmp1121 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
      tmp1122 = (tmp1120 * tmp1120) + (tmp1121 * tmp1121);
      if(tmp1122 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1122, 0.5);
      }
      tmp1124 = sqrt(tmp1122);
    }
    tmp1126 = tmp1124;
  }
  else
  {
    tmp1126 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3078]] /* trafo_13_1013.U1Pu variable */) = tmp1126;
  threadData->lastEquationSolved = 4938;
}

/*
equation index: 4939
type: SIMPLE_ASSIGN
trafo_13_1013.Q1Pu = load_13.terminal.V.im * trafo_13_1013.terminal1.i.re - load_13.terminal.V.re * trafo_13_1013.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3076]] /* trafo_13_1013.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4939;
}

/*
equation index: 4940
type: SIMPLE_ASSIGN
trafo_13_1013.P1Pu = load_13.terminal.V.re * trafo_13_1013.terminal1.i.re + load_13.terminal.V.im * trafo_13_1013.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3074]] /* trafo_13_1013.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4940;
}

/*
equation index: 4941
type: SIMPLE_ASSIGN
load_13.UPu.value = if load_13.running.value then (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4941};
  modelica_real tmp1127;
  modelica_real tmp1128;
  modelica_real tmp1129;
  modelica_boolean tmp1130;
  modelica_real tmp1131;
  tmp1130 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */);
  if(tmp1130)
  {
    tmp1127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
    tmp1128 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
    tmp1129 = (tmp1127 * tmp1127) + (tmp1128 * tmp1128);
    if(tmp1129 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1129, 0.5);
    }
    tmp1131 = sqrt(tmp1129);
  }
  else
  {
    tmp1131 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2823]] /* load_13.UPu.value variable */) = tmp1131;
  threadData->lastEquationSolved = 4941;
}

/*
equation index: 4942
type: SIMPLE_ASSIGN
bus_B13.UPhase = Modelica.Math.atan3(load_13.terminal.V.im, load_13.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* bus_B13.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4942;
}

/*
equation index: 4943
type: SIMPLE_ASSIGN
bus_B13.UPu = if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4943};
  modelica_real tmp1132;
  modelica_real tmp1133;
  modelica_real tmp1134;
  modelica_boolean tmp1135;
  modelica_real tmp1136;
  tmp1135 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
  if(tmp1135)
  {
    tmp1136 = 0.0;
  }
  else
  {
    tmp1132 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
    tmp1133 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
    tmp1134 = (tmp1132 * tmp1132) + (tmp1133 * tmp1133);
    if(tmp1134 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1134, 0.5);
    }
    tmp1136 = sqrt(tmp1134);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* bus_B13.UPu variable */) = tmp1136;
  threadData->lastEquationSolved = 4943;
}

/*
equation index: 4944
type: SIMPLE_ASSIGN
bus_B13.U = bus_B13.UPu * bus_B13.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* bus_B13.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* bus_B13.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* bus_B13.UNom PARAM */));
  threadData->lastEquationSolved = 4944;
}

/*
equation index: 4945
type: SIMPLE_ASSIGN
trafo_13_1013.Q2Pu = line_1013_1014a.terminal1.V.im * trafo_13_1013.terminal2.i.re - line_1013_1014a.terminal1.V.re * trafo_13_1013.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3077]] /* trafo_13_1013.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4945;
}

/*
equation index: 4946
type: SIMPLE_ASSIGN
trafo_13_1013.P2Pu = line_1013_1014a.terminal1.V.re * trafo_13_1013.terminal2.i.re + line_1013_1014a.terminal1.V.im * trafo_13_1013.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3075]] /* trafo_13_1013.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4946;
}

/*
equation index: 4947
type: SIMPLE_ASSIGN
line_1013_1014a.Q1Pu = line_1013_1014a.terminal1.V.im * line_1013_1014a.terminal1.i.re - line_1013_1014a.terminal1.V.re * line_1013_1014a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2330]] /* line_1013_1014a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4947;
}

/*
equation index: 4948
type: SIMPLE_ASSIGN
line_1013_1014a.P1Pu = line_1013_1014a.terminal1.V.re * line_1013_1014a.terminal1.i.re + line_1013_1014a.terminal1.V.im * line_1013_1014a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2328]] /* line_1013_1014a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4948;
}

/*
equation index: 4949
type: SIMPLE_ASSIGN
g01.iStatorPu.im = if g01.running.value then g01.rTfoPu * g01.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4949;
}

/*
equation index: 4950
type: SIMPLE_ASSIGN
trafo_g1_1012.U2Pu = if trafo_g1_1012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4950};
  modelica_real tmp1137;
  modelica_real tmp1138;
  modelica_real tmp1139;
  modelica_boolean tmp1140;
  modelica_real tmp1141;
  modelica_boolean tmp1142;
  modelica_real tmp1143;
  tmp1142 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp1142)
  {
    tmp1140 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp1140)
    {
      tmp1141 = 0.0;
    }
    else
    {
      tmp1137 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp1138 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp1139 = (tmp1137 * tmp1137) + (tmp1138 * tmp1138);
      if(tmp1139 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1139, 0.5);
      }
      tmp1141 = sqrt(tmp1139);
    }
    tmp1143 = tmp1141;
  }
  else
  {
    tmp1143 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3369]] /* trafo_g1_1012.U2Pu variable */) = tmp1143;
  threadData->lastEquationSolved = 4950;
}

/*
equation index: 4951
type: SIMPLE_ASSIGN
$DER.g01.lambdaDPu = if g01.running.value then g01.RDPPu * g01.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* der(g01.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* g01.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4951;
}

/*
equation index: 4952
type: SIMPLE_ASSIGN
g01.iStatorPu.re = if g01.running.value then g01.rTfoPu * g01.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4952;
}

/*
equation index: 4953
type: SIMPLE_ASSIGN
g01.IStatorPu = if g01.running.value then if g01.iStatorPu.re == 0.0 and g01.iStatorPu.im == 0.0 then 0.0 else (g01.iStatorPu.re ^ 2.0 + g01.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4953};
  modelica_real tmp1144;
  modelica_real tmp1145;
  modelica_real tmp1146;
  modelica_boolean tmp1147;
  modelica_real tmp1148;
  modelica_boolean tmp1149;
  modelica_real tmp1150;
  tmp1149 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp1149)
  {
    tmp1147 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) == 0.0));
    if(tmp1147)
    {
      tmp1148 = 0.0;
    }
    else
    {
      tmp1144 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */);
      tmp1145 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */);
      tmp1146 = (tmp1144 * tmp1144) + (tmp1145 * tmp1145);
      if(tmp1146 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1146, 0.5);
      }
      tmp1148 = sqrt(tmp1146);
    }
    tmp1150 = tmp1148;
  }
  else
  {
    tmp1150 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* g01.IStatorPu variable */) = tmp1150;
  threadData->lastEquationSolved = 4953;
}

/*
equation index: 4954
type: SIMPLE_ASSIGN
$DER.g01.lambdaQ1Pu = if g01.running.value then g01.RQ1PPu * g01.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* der(g01.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* g01.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4954;
}

/*
equation index: 4955
type: SIMPLE_ASSIGN
$DER.g01.lambdaQ2Pu = if g01.running.value then g01.RQ2PPu * g01.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* der(g01.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* g01.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4955;
}

/*
equation index: 4956
type: SIMPLE_ASSIGN
g01.uStatorPu.im = if g01.running.value then (g01.terminal.V.im + (-100.0) * (g01.terminal.i.re * g01.XTfoPu + g01.terminal.i.im * g01.RTfoPu) / g01.SNom) / g01.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */),"g01.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4956;
}

/*
equation index: 4957
type: SIMPLE_ASSIGN
g01.uPu.im = if g01.running.value then g01.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* g01.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4957;
}

/*
equation index: 4958
type: SIMPLE_ASSIGN
g01.cePu = if g01.running.value then g01.lambdaqPu * g01.idPu - g01.lambdadPu * g01.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4958;
}

/*
equation index: 4959
type: SIMPLE_ASSIGN
g01.PePu = if g01.running.value then g01.cePu * g01.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* g01.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4959;
}

/*
equation index: 4960
type: SIMPLE_ASSIGN
g01.thetaInternal.value = if g01.running.value then Modelica.Math.atan3(g01.udPu, g01.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* g01.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4960;
}

/*
equation index: 4961
type: SIMPLE_ASSIGN
g01.uStatorPu.re = if g01.running.value then (g01.terminal.V.re + (-100.0) * (g01.terminal.i.re * g01.RTfoPu - g01.terminal.i.im * g01.XTfoPu) / g01.SNom) / g01.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */),"g01.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4961;
}

/*
equation index: 4962
type: SIMPLE_ASSIGN
g01.sStatorPu.im = if g01.running.value then g01.uStatorPu.im * g01.iStatorPu.re - g01.uStatorPu.re * g01.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* g01.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4962;
}

/*
equation index: 4963
type: SIMPLE_ASSIGN
g01.QStatorPu = if g01.running.value then -g01.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* g01.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* g01.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4963;
}

/*
equation index: 4964
type: SIMPLE_ASSIGN
g01.QStatorPuQNom = if g01.running.value then 100.0 * g01.QStatorPu / g01.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* g01.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* g01.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* g01.QNomAlt PARAM */),"g01.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4964;
}

/*
equation index: 4965
type: SIMPLE_ASSIGN
g01.sStatorPu.re = if g01.running.value then g01.uStatorPu.re * g01.iStatorPu.re + g01.uStatorPu.im * g01.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* g01.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4965;
}

/*
equation index: 4966
type: SIMPLE_ASSIGN
g01.QGenPu = if g01.running.value then g01.terminal.V.re * g01.terminal.i.im - g01.terminal.V.im * g01.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* g01.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4966;
}

/*
equation index: 4967
type: SIMPLE_ASSIGN
g01.QGen = if g01.running.value then 100.0 * g01.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* g01.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* g01.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4967;
}

/*
equation index: 4968
type: SIMPLE_ASSIGN
g01.UPu = if g01.running.value then (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4968};
  modelica_real tmp1151;
  modelica_real tmp1152;
  modelica_real tmp1153;
  modelica_boolean tmp1154;
  modelica_real tmp1155;
  tmp1154 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp1154)
  {
    tmp1151 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
    tmp1152 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
    tmp1153 = (tmp1151 * tmp1151) + (tmp1152 * tmp1152);
    if(tmp1153 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1153, 0.5);
    }
    tmp1155 = sqrt(tmp1153);
  }
  else
  {
    tmp1155 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* g01.UPu variable */) = tmp1155;
  threadData->lastEquationSolved = 4968;
}

/*
equation index: 4969
type: SIMPLE_ASSIGN
g01.uPu.re = if g01.running.value then g01.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* g01.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4969;
}

/*
equation index: 4970
type: SIMPLE_ASSIGN
trafo_g1_1012.U1Pu = if trafo_g1_1012.running.value then if g01.terminal.V.re == 0.0 and g01.terminal.V.im == 0.0 then 0.0 else (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4970};
  modelica_real tmp1156;
  modelica_real tmp1157;
  modelica_real tmp1158;
  modelica_boolean tmp1159;
  modelica_real tmp1160;
  modelica_boolean tmp1161;
  modelica_real tmp1162;
  tmp1161 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp1161)
  {
    tmp1159 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0));
    if(tmp1159)
    {
      tmp1160 = 0.0;
    }
    else
    {
      tmp1156 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
      tmp1157 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
      tmp1158 = (tmp1156 * tmp1156) + (tmp1157 * tmp1157);
      if(tmp1158 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1158, 0.5);
      }
      tmp1160 = sqrt(tmp1158);
    }
    tmp1162 = tmp1160;
  }
  else
  {
    tmp1162 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3368]] /* trafo_g1_1012.U1Pu variable */) = tmp1162;
  threadData->lastEquationSolved = 4970;
}

/*
equation index: 4971
type: SIMPLE_ASSIGN
trafo_g1_1012.Q1Pu = g01.terminal.V.re * g01.terminal.i.im - g01.terminal.V.im * g01.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* trafo_g1_1012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4971;
}

/*
equation index: 4972
type: SIMPLE_ASSIGN
trafo_g1_1012.P1Pu = (-g01.terminal.V.re) * g01.terminal.i.re - g01.terminal.V.im * g01.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3364]] /* trafo_g1_1012.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4972;
}

/*
equation index: 4973
type: SIMPLE_ASSIGN
bus_BG01.UPhase = Modelica.Math.atan3(g01.terminal.V.im, g01.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* bus_BG01.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4973;
}

/*
equation index: 4974
type: SIMPLE_ASSIGN
bus_BG01.UPu = if g01.terminal.V.re == 0.0 and g01.terminal.V.im == 0.0 then 0.0 else (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4974};
  modelica_real tmp1163;
  modelica_real tmp1164;
  modelica_real tmp1165;
  modelica_boolean tmp1166;
  modelica_real tmp1167;
  tmp1166 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0));
  if(tmp1166)
  {
    tmp1167 = 0.0;
  }
  else
  {
    tmp1163 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
    tmp1164 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
    tmp1165 = (tmp1163 * tmp1163) + (tmp1164 * tmp1164);
    if(tmp1165 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1165, 0.5);
    }
    tmp1167 = sqrt(tmp1165);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* bus_BG01.UPu variable */) = tmp1167;
  threadData->lastEquationSolved = 4974;
}

/*
equation index: 4975
type: SIMPLE_ASSIGN
bus_BG01.U = bus_BG01.UPu * bus_BG01.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* bus_BG01.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* bus_BG01.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* bus_BG01.UNom PARAM */));
  threadData->lastEquationSolved = 4975;
}

/*
equation index: 4976
type: SIMPLE_ASSIGN
trafo_g1_1012.Q2Pu = line_1012_1014a.terminal1.V.im * trafo_g1_1012.terminal2.i.re - line_1012_1014a.terminal1.V.re * trafo_g1_1012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* trafo_g1_1012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4976;
}

/*
equation index: 4977
type: SIMPLE_ASSIGN
trafo_g1_1012.P2Pu = line_1012_1014a.terminal1.V.re * trafo_g1_1012.terminal2.i.re + line_1012_1014a.terminal1.V.im * trafo_g1_1012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* trafo_g1_1012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4977;
}

/*
equation index: 4978
type: SIMPLE_ASSIGN
trafo_1012_4012.U1Pu = if trafo_1012_4012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4978};
  modelica_real tmp1168;
  modelica_real tmp1169;
  modelica_real tmp1170;
  modelica_boolean tmp1171;
  modelica_real tmp1172;
  modelica_boolean tmp1173;
  modelica_real tmp1174;
  tmp1173 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp1173)
  {
    tmp1171 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp1171)
    {
      tmp1172 = 0.0;
    }
    else
    {
      tmp1168 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp1169 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp1170 = (tmp1168 * tmp1168) + (tmp1169 * tmp1169);
      if(tmp1170 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1170, 0.5);
      }
      tmp1172 = sqrt(tmp1170);
    }
    tmp1174 = tmp1172;
  }
  else
  {
    tmp1174 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* trafo_1012_4012.U1Pu variable */) = tmp1174;
  threadData->lastEquationSolved = 4978;
}

/*
equation index: 4979
type: SIMPLE_ASSIGN
trafo_1012_4012.Q1Pu = line_1012_1014a.terminal1.V.im * trafo_1012_4012.terminal1.i.re - line_1012_1014a.terminal1.V.re * trafo_1012_4012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2996]] /* trafo_1012_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4979;
}

/*
equation index: 4980
type: SIMPLE_ASSIGN
trafo_1012_4012.P1Pu = line_1012_1014a.terminal1.V.re * trafo_1012_4012.terminal1.i.re + line_1012_1014a.terminal1.V.im * trafo_1012_4012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2994]] /* trafo_1012_4012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4980;
}

/*
equation index: 4981
type: SIMPLE_ASSIGN
trafo_12_1012.U2Pu = if trafo_12_1012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4981};
  modelica_real tmp1175;
  modelica_real tmp1176;
  modelica_real tmp1177;
  modelica_boolean tmp1178;
  modelica_real tmp1179;
  modelica_boolean tmp1180;
  modelica_real tmp1181;
  tmp1180 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp1180)
  {
    tmp1178 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp1178)
    {
      tmp1179 = 0.0;
    }
    else
    {
      tmp1175 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp1176 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp1177 = (tmp1175 * tmp1175) + (tmp1176 * tmp1176);
      if(tmp1177 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1177, 0.5);
      }
      tmp1179 = sqrt(tmp1177);
    }
    tmp1181 = tmp1179;
  }
  else
  {
    tmp1181 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* trafo_12_1012.U2Pu variable */) = tmp1181;
  threadData->lastEquationSolved = 4981;
}

/*
equation index: 4982
type: SIMPLE_ASSIGN
trafo_12_1012.U1Pu = if trafo_12_1012.running.value then if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4982};
  modelica_real tmp1182;
  modelica_real tmp1183;
  modelica_real tmp1184;
  modelica_boolean tmp1185;
  modelica_real tmp1186;
  modelica_boolean tmp1187;
  modelica_real tmp1188;
  tmp1187 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp1187)
  {
    tmp1185 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
    if(tmp1185)
    {
      tmp1186 = 0.0;
    }
    else
    {
      tmp1182 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
      tmp1183 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
      tmp1184 = (tmp1182 * tmp1182) + (tmp1183 * tmp1183);
      if(tmp1184 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1184, 0.5);
      }
      tmp1186 = sqrt(tmp1184);
    }
    tmp1188 = tmp1186;
  }
  else
  {
    tmp1188 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* trafo_12_1012.U1Pu variable */) = tmp1188;
  threadData->lastEquationSolved = 4982;
}

/*
equation index: 4983
type: SIMPLE_ASSIGN
load_12.UPu.value = if load_12.running.value then (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4983};
  modelica_real tmp1189;
  modelica_real tmp1190;
  modelica_real tmp1191;
  modelica_boolean tmp1192;
  modelica_real tmp1193;
  tmp1192 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */);
  if(tmp1192)
  {
    tmp1189 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
    tmp1190 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
    tmp1191 = (tmp1189 * tmp1189) + (tmp1190 * tmp1190);
    if(tmp1191 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1191, 0.5);
    }
    tmp1193 = sqrt(tmp1191);
  }
  else
  {
    tmp1193 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2816]] /* load_12.UPu.value variable */) = tmp1193;
  threadData->lastEquationSolved = 4983;
}

/*
equation index: 4984
type: SIMPLE_ASSIGN
trafo_12_1012.Q1Pu = load_12.terminal.V.im * trafo_12_1012.terminal1.i.re - load_12.terminal.V.re * trafo_12_1012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* trafo_12_1012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4984;
}

/*
equation index: 4985
type: SIMPLE_ASSIGN
trafo_12_1012.P1Pu = load_12.terminal.V.re * trafo_12_1012.terminal1.i.re + load_12.terminal.V.im * trafo_12_1012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* trafo_12_1012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4985;
}

/*
equation index: 4986
type: SIMPLE_ASSIGN
bus_B12.UPhase = Modelica.Math.atan3(load_12.terminal.V.im, load_12.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* bus_B12.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4986;
}

/*
equation index: 4987
type: SIMPLE_ASSIGN
bus_B12.UPu = if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4987};
  modelica_real tmp1194;
  modelica_real tmp1195;
  modelica_real tmp1196;
  modelica_boolean tmp1197;
  modelica_real tmp1198;
  tmp1197 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
  if(tmp1197)
  {
    tmp1198 = 0.0;
  }
  else
  {
    tmp1194 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
    tmp1195 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
    tmp1196 = (tmp1194 * tmp1194) + (tmp1195 * tmp1195);
    if(tmp1196 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1196, 0.5);
    }
    tmp1198 = sqrt(tmp1196);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* bus_B12.UPu variable */) = tmp1198;
  threadData->lastEquationSolved = 4987;
}

/*
equation index: 4988
type: SIMPLE_ASSIGN
bus_B12.U = bus_B12.UPu * bus_B12.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* bus_B12.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* bus_B12.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* bus_B12.UNom PARAM */));
  threadData->lastEquationSolved = 4988;
}

/*
equation index: 4989
type: SIMPLE_ASSIGN
trafo_12_1012.Q2Pu = line_1012_1014a.terminal1.V.im * trafo_12_1012.terminal2.i.re - line_1012_1014a.terminal1.V.re * trafo_12_1012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* trafo_12_1012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4989;
}

/*
equation index: 4990
type: SIMPLE_ASSIGN
trafo_12_1012.P2Pu = line_1012_1014a.terminal1.V.re * trafo_12_1012.terminal2.i.re + line_1012_1014a.terminal1.V.im * trafo_12_1012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* trafo_12_1012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4990;
}

/*
equation index: 4991
type: SIMPLE_ASSIGN
line_1012_1014a.Q1Pu = line_1012_1014a.terminal1.V.im * line_1012_1014a.terminal1.i.re - line_1012_1014a.terminal1.V.re * line_1012_1014a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2312]] /* line_1012_1014a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4991;
}

/*
equation index: 4992
type: SIMPLE_ASSIGN
line_1012_1014a.P1Pu = line_1012_1014a.terminal1.V.re * line_1012_1014a.terminal1.i.re + line_1012_1014a.terminal1.V.im * line_1012_1014a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2310]] /* line_1012_1014a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4992;
}

/*
equation index: 4993
type: SIMPLE_ASSIGN
line_1012_1014b.Q1Pu = line_1012_1014a.terminal1.V.im * line_1012_1014b.terminal1.i.re - line_1012_1014a.terminal1.V.re * line_1012_1014b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2322]] /* line_1012_1014b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4993;
}

/*
equation index: 4994
type: SIMPLE_ASSIGN
line_1012_1014b.P1Pu = line_1012_1014a.terminal1.V.re * line_1012_1014b.terminal1.i.re + line_1012_1014a.terminal1.V.im * line_1012_1014b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2320]] /* line_1012_1014b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4994;
}

/*
equation index: 4995
type: SIMPLE_ASSIGN
trafo_g3_1014.U2Pu = if trafo_g3_1014.running.value then if line_1013_1014a.terminal2.V.re == 0.0 and line_1013_1014a.terminal2.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal2.V.re ^ 2.0 + line_1013_1014a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4995};
  modelica_real tmp1199;
  modelica_real tmp1200;
  modelica_real tmp1201;
  modelica_boolean tmp1202;
  modelica_real tmp1203;
  modelica_boolean tmp1204;
  modelica_real tmp1205;
  tmp1204 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp1204)
  {
    tmp1202 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0));
    if(tmp1202)
    {
      tmp1203 = 0.0;
    }
    else
    {
      tmp1199 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */);
      tmp1200 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */);
      tmp1201 = (tmp1199 * tmp1199) + (tmp1200 * tmp1200);
      if(tmp1201 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1201, 0.5);
      }
      tmp1203 = sqrt(tmp1201);
    }
    tmp1205 = tmp1203;
  }
  else
  {
    tmp1205 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* trafo_g3_1014.U2Pu variable */) = tmp1205;
  threadData->lastEquationSolved = 4995;
}

/*
equation index: 4996
type: SIMPLE_ASSIGN
g03.iStatorPu.im = if g03.running.value then g03.rTfoPu * g03.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4996;
}

/*
equation index: 4997
type: SIMPLE_ASSIGN
g03.iStatorPu.re = if g03.running.value then g03.rTfoPu * g03.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4997;
}

/*
equation index: 4998
type: SIMPLE_ASSIGN
g03.IStatorPu = if g03.running.value then if g03.iStatorPu.re == 0.0 and g03.iStatorPu.im == 0.0 then 0.0 else (g03.iStatorPu.re ^ 2.0 + g03.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4998};
  modelica_real tmp1206;
  modelica_real tmp1207;
  modelica_real tmp1208;
  modelica_boolean tmp1209;
  modelica_real tmp1210;
  modelica_boolean tmp1211;
  modelica_real tmp1212;
  tmp1211 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp1211)
  {
    tmp1209 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) == 0.0));
    if(tmp1209)
    {
      tmp1210 = 0.0;
    }
    else
    {
      tmp1206 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */);
      tmp1207 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */);
      tmp1208 = (tmp1206 * tmp1206) + (tmp1207 * tmp1207);
      if(tmp1208 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1208, 0.5);
      }
      tmp1210 = sqrt(tmp1208);
    }
    tmp1212 = tmp1210;
  }
  else
  {
    tmp1212 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* g03.IStatorPu variable */) = tmp1212;
  threadData->lastEquationSolved = 4998;
}

/*
equation index: 4999
type: SIMPLE_ASSIGN
$DER.g03.lambdaQ1Pu = if g03.running.value then g03.RQ1PPu * g03.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* der(g03.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* g03.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4999;
}

/*
equation index: 5000
type: SIMPLE_ASSIGN
$DER.g03.lambdaQ2Pu = if g03.running.value then g03.RQ2PPu * g03.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* der(g03.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* g03.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5000;
}

/*
equation index: 5001
type: SIMPLE_ASSIGN
$DER.g03.lambdaDPu = if g03.running.value then g03.RDPPu * g03.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* der(g03.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* g03.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5001;
}

/*
equation index: 5002
type: SIMPLE_ASSIGN
g03.uStatorPu.im = if g03.running.value then (g03.terminal.V.im + (-100.0) * (g03.terminal.i.re * g03.XTfoPu + g03.terminal.i.im * g03.RTfoPu) / g03.SNom) / g03.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */),"g03.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5002;
}

/*
equation index: 5003
type: SIMPLE_ASSIGN
g03.uPu.im = if g03.running.value then g03.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* g03.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 5003;
}

/*
equation index: 5004
type: SIMPLE_ASSIGN
g03.cePu = if g03.running.value then g03.lambdaqPu * g03.idPu - g03.lambdadPu * g03.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 5004;
}

/*
equation index: 5005
type: SIMPLE_ASSIGN
g03.PePu = if g03.running.value then g03.cePu * g03.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* g03.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 5005;
}

/*
equation index: 5006
type: SIMPLE_ASSIGN
g03.thetaInternal.value = if g03.running.value then Modelica.Math.atan3(g03.udPu, g03.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* g03.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 5006;
}

/*
equation index: 5007
type: SIMPLE_ASSIGN
g03.uStatorPu.re = if g03.running.value then (g03.terminal.V.re + (-100.0) * (g03.terminal.i.re * g03.RTfoPu - g03.terminal.i.im * g03.XTfoPu) / g03.SNom) / g03.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */),"g03.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5007;
}

/*
equation index: 5008
type: SIMPLE_ASSIGN
g03.sStatorPu.im = if g03.running.value then g03.uStatorPu.im * g03.iStatorPu.re - g03.uStatorPu.re * g03.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* g03.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 5008;
}

/*
equation index: 5009
type: SIMPLE_ASSIGN
g03.QStatorPu = if g03.running.value then -g03.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* g03.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* g03.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5009;
}

/*
equation index: 5010
type: SIMPLE_ASSIGN
g03.QStatorPuQNom = if g03.running.value then 100.0 * g03.QStatorPu / g03.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* g03.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* g03.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* g03.QNomAlt PARAM */),"g03.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5010;
}

/*
equation index: 5011
type: SIMPLE_ASSIGN
g03.sStatorPu.re = if g03.running.value then g03.uStatorPu.re * g03.iStatorPu.re + g03.uStatorPu.im * g03.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* g03.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5011;
}

/*
equation index: 5012
type: SIMPLE_ASSIGN
g03.QGenPu = if g03.running.value then g03.terminal.V.re * g03.terminal.i.im - g03.terminal.V.im * g03.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* g03.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 5012;
}

/*
equation index: 5013
type: SIMPLE_ASSIGN
g03.QGen = if g03.running.value then 100.0 * g03.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* g03.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* g03.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5013;
}

/*
equation index: 5014
type: SIMPLE_ASSIGN
g03.UPu = if g03.running.value then (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5014};
  modelica_real tmp1213;
  modelica_real tmp1214;
  modelica_real tmp1215;
  modelica_boolean tmp1216;
  modelica_real tmp1217;
  tmp1216 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp1216)
  {
    tmp1213 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
    tmp1214 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
    tmp1215 = (tmp1213 * tmp1213) + (tmp1214 * tmp1214);
    if(tmp1215 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1215, 0.5);
    }
    tmp1217 = sqrt(tmp1215);
  }
  else
  {
    tmp1217 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* g03.UPu variable */) = tmp1217;
  threadData->lastEquationSolved = 5014;
}

/*
equation index: 5015
type: SIMPLE_ASSIGN
g03.uPu.re = if g03.running.value then g03.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* g03.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 5015;
}

/*
equation index: 5016
type: SIMPLE_ASSIGN
trafo_g3_1014.U1Pu = if trafo_g3_1014.running.value then if g03.terminal.V.re == 0.0 and g03.terminal.V.im == 0.0 then 0.0 else (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5016};
  modelica_real tmp1218;
  modelica_real tmp1219;
  modelica_real tmp1220;
  modelica_boolean tmp1221;
  modelica_real tmp1222;
  modelica_boolean tmp1223;
  modelica_real tmp1224;
  tmp1223 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp1223)
  {
    tmp1221 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0));
    if(tmp1221)
    {
      tmp1222 = 0.0;
    }
    else
    {
      tmp1218 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
      tmp1219 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
      tmp1220 = (tmp1218 * tmp1218) + (tmp1219 * tmp1219);
      if(tmp1220 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1220, 0.5);
      }
      tmp1222 = sqrt(tmp1220);
    }
    tmp1224 = tmp1222;
  }
  else
  {
    tmp1224 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3394]] /* trafo_g3_1014.U1Pu variable */) = tmp1224;
  threadData->lastEquationSolved = 5016;
}

/*
equation index: 5017
type: SIMPLE_ASSIGN
trafo_g3_1014.Q1Pu = g03.terminal.V.re * g03.terminal.i.im - g03.terminal.V.im * g03.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3392]] /* trafo_g3_1014.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)));
  threadData->lastEquationSolved = 5017;
}

/*
equation index: 5018
type: SIMPLE_ASSIGN
trafo_g3_1014.P1Pu = (-g03.terminal.V.re) * g03.terminal.i.re - g03.terminal.V.im * g03.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3390]] /* trafo_g3_1014.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)));
  threadData->lastEquationSolved = 5018;
}

/*
equation index: 5019
type: SIMPLE_ASSIGN
bus_BG03.UPhase = Modelica.Math.atan3(g03.terminal.V.im, g03.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* bus_BG03.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5019;
}

/*
equation index: 5020
type: SIMPLE_ASSIGN
bus_BG03.UPu = if g03.terminal.V.re == 0.0 and g03.terminal.V.im == 0.0 then 0.0 else (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5020};
  modelica_real tmp1225;
  modelica_real tmp1226;
  modelica_real tmp1227;
  modelica_boolean tmp1228;
  modelica_real tmp1229;
  tmp1228 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0));
  if(tmp1228)
  {
    tmp1229 = 0.0;
  }
  else
  {
    tmp1225 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
    tmp1226 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
    tmp1227 = (tmp1225 * tmp1225) + (tmp1226 * tmp1226);
    if(tmp1227 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1227, 0.5);
    }
    tmp1229 = sqrt(tmp1227);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* bus_BG03.UPu variable */) = tmp1229;
  threadData->lastEquationSolved = 5020;
}

/*
equation index: 5021
type: SIMPLE_ASSIGN
bus_BG03.U = bus_BG03.UPu * bus_BG03.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* bus_BG03.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* bus_BG03.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* bus_BG03.UNom PARAM */));
  threadData->lastEquationSolved = 5021;
}

/*
equation index: 5022
type: SIMPLE_ASSIGN
trafo_g3_1014.Q2Pu = line_1013_1014a.terminal2.V.im * trafo_g3_1014.terminal2.i.re - line_1013_1014a.terminal2.V.re * trafo_g3_1014.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3393]] /* trafo_g3_1014.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5022;
}

/*
equation index: 5023
type: SIMPLE_ASSIGN
trafo_g3_1014.P2Pu = line_1013_1014a.terminal2.V.re * trafo_g3_1014.terminal2.i.re + line_1013_1014a.terminal2.V.im * trafo_g3_1014.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3391]] /* trafo_g3_1014.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5023;
}

/*
equation index: 5024
type: SIMPLE_ASSIGN
line_1013_1014b.Q2Pu = line_1013_1014a.terminal2.V.im * line_1013_1014b.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1013_1014b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2343]] /* line_1013_1014b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5024;
}

/*
equation index: 5025
type: SIMPLE_ASSIGN
line_1013_1014b.P2Pu = line_1013_1014a.terminal2.V.re * line_1013_1014b.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1013_1014b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2341]] /* line_1013_1014b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5025;
}

/*
equation index: 5026
type: SIMPLE_ASSIGN
line_1013_1014b.Q1Pu = line_1013_1014a.terminal1.V.im * line_1013_1014b.terminal1.i.re - line_1013_1014a.terminal1.V.re * line_1013_1014b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2342]] /* line_1013_1014b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5026;
}

/*
equation index: 5027
type: SIMPLE_ASSIGN
line_1013_1014b.P1Pu = line_1013_1014a.terminal1.V.re * line_1013_1014b.terminal1.i.re + line_1013_1014a.terminal1.V.im * line_1013_1014b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2340]] /* line_1013_1014b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5027;
}

/*
equation index: 5028
type: SIMPLE_ASSIGN
line_1013_1014a.Q2Pu = line_1013_1014a.terminal2.V.im * line_1013_1014a.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1013_1014a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2331]] /* line_1013_1014a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5028;
}

/*
equation index: 5029
type: SIMPLE_ASSIGN
line_1013_1014a.P2Pu = line_1013_1014a.terminal2.V.re * line_1013_1014a.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1013_1014a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2329]] /* line_1013_1014a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5029;
}

/*
equation index: 5030
type: SIMPLE_ASSIGN
line_1012_1014b.Q2Pu = line_1013_1014a.terminal2.V.im * line_1012_1014b.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1012_1014b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2323]] /* line_1012_1014b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5030;
}

/*
equation index: 5031
type: SIMPLE_ASSIGN
line_1012_1014b.P2Pu = line_1013_1014a.terminal2.V.re * line_1012_1014b.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1012_1014b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2321]] /* line_1012_1014b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5031;
}

/*
equation index: 5032
type: SIMPLE_ASSIGN
line_1012_1014a.Q2Pu = line_1013_1014a.terminal2.V.im * line_1012_1014a.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1012_1014a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2313]] /* line_1012_1014a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5032;
}

/*
equation index: 5033
type: SIMPLE_ASSIGN
line_1012_1014a.P2Pu = line_1013_1014a.terminal2.V.re * line_1012_1014a.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1012_1014a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2311]] /* line_1012_1014a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5033;
}

/*
equation index: 5034
type: SIMPLE_ASSIGN
trafo_1012_4012.Q2Pu = line_4012_4022.terminal1.V.im * trafo_1012_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * trafo_1012_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2997]] /* trafo_1012_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5034;
}

/*
equation index: 5035
type: SIMPLE_ASSIGN
trafo_1012_4012.P2Pu = line_4012_4022.terminal1.V.re * trafo_1012_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * trafo_1012_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2995]] /* trafo_1012_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5035;
}

/*
equation index: 5036
type: SIMPLE_ASSIGN
bus_1012.UPhase = Modelica.Math.atan3(line_1012_1014a.terminal1.V.im, line_1012_1014a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* bus_1012.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5036;
}

/*
equation index: 5037
type: SIMPLE_ASSIGN
bus_1012.UPu = if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5037};
  modelica_real tmp1230;
  modelica_real tmp1231;
  modelica_real tmp1232;
  modelica_boolean tmp1233;
  modelica_real tmp1234;
  tmp1233 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
  if(tmp1233)
  {
    tmp1234 = 0.0;
  }
  else
  {
    tmp1230 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
    tmp1231 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
    tmp1232 = (tmp1230 * tmp1230) + (tmp1231 * tmp1231);
    if(tmp1232 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1232, 0.5);
    }
    tmp1234 = sqrt(tmp1232);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* bus_1012.UPu variable */) = tmp1234;
  threadData->lastEquationSolved = 5037;
}

/*
equation index: 5038
type: SIMPLE_ASSIGN
bus_1012.U = bus_1012.UPu * bus_1012.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* bus_1012.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* bus_1012.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* bus_1012.UNom PARAM */));
  threadData->lastEquationSolved = 5038;
}

/*
equation index: 5039
type: SIMPLE_ASSIGN
bus_1014.UPhase = Modelica.Math.atan3(line_1013_1014a.terminal2.V.im, line_1013_1014a.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* bus_1014.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5039;
}

/*
equation index: 5040
type: SIMPLE_ASSIGN
bus_1014.UPu = if line_1013_1014a.terminal2.V.re == 0.0 and line_1013_1014a.terminal2.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal2.V.re ^ 2.0 + line_1013_1014a.terminal2.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5040};
  modelica_real tmp1235;
  modelica_real tmp1236;
  modelica_real tmp1237;
  modelica_boolean tmp1238;
  modelica_real tmp1239;
  tmp1238 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0));
  if(tmp1238)
  {
    tmp1239 = 0.0;
  }
  else
  {
    tmp1235 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */);
    tmp1236 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */);
    tmp1237 = (tmp1235 * tmp1235) + (tmp1236 * tmp1236);
    if(tmp1237 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1237, 0.5);
    }
    tmp1239 = sqrt(tmp1237);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* bus_1014.UPu variable */) = tmp1239;
  threadData->lastEquationSolved = 5040;
}

/*
equation index: 5041
type: SIMPLE_ASSIGN
bus_1014.U = bus_1014.UPu * bus_1014.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* bus_1014.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* bus_1014.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* bus_1014.UNom PARAM */));
  threadData->lastEquationSolved = 5041;
}

/*
equation index: 5042
type: SIMPLE_ASSIGN
line_1011_1013b.Q2Pu = line_1013_1014a.terminal1.V.im * line_1011_1013b.terminal2.i.re - line_1013_1014a.terminal1.V.re * line_1011_1013b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5042};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2305]] /* line_1011_1013b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5042;
}

/*
equation index: 5043
type: SIMPLE_ASSIGN
line_1011_1013b.P2Pu = line_1013_1014a.terminal1.V.re * line_1011_1013b.terminal2.i.re + line_1013_1014a.terminal1.V.im * line_1011_1013b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2303]] /* line_1011_1013b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5043;
}

/*
equation index: 5044
type: SIMPLE_ASSIGN
line_1011_1013a.Q2Pu = line_1013_1014a.terminal1.V.im * line_1011_1013a.terminal2.i.re - line_1013_1014a.terminal1.V.re * line_1011_1013a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2295]] /* line_1011_1013a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5044;
}

/*
equation index: 5045
type: SIMPLE_ASSIGN
line_1011_1013a.P2Pu = line_1013_1014a.terminal1.V.re * line_1011_1013a.terminal2.i.re + line_1013_1014a.terminal1.V.im * line_1011_1013a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2293]] /* line_1011_1013a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5045;
}

/*
equation index: 5046
type: SIMPLE_ASSIGN
bus_1013.UPhase = Modelica.Math.atan3(line_1013_1014a.terminal1.V.im, line_1013_1014a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* bus_1013.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5046;
}

/*
equation index: 5047
type: SIMPLE_ASSIGN
bus_1013.UPu = if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5047};
  modelica_real tmp1240;
  modelica_real tmp1241;
  modelica_real tmp1242;
  modelica_boolean tmp1243;
  modelica_real tmp1244;
  tmp1243 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
  if(tmp1243)
  {
    tmp1244 = 0.0;
  }
  else
  {
    tmp1240 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
    tmp1241 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
    tmp1242 = (tmp1240 * tmp1240) + (tmp1241 * tmp1241);
    if(tmp1242 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1242, 0.5);
    }
    tmp1244 = sqrt(tmp1242);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* bus_1013.UPu variable */) = tmp1244;
  threadData->lastEquationSolved = 5047;
}

/*
equation index: 5048
type: SIMPLE_ASSIGN
bus_1013.U = bus_1013.UPu * bus_1013.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* bus_1013.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* bus_1013.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* bus_1013.UNom PARAM */));
  threadData->lastEquationSolved = 5048;
}

/*
equation index: 5049
type: SIMPLE_ASSIGN
bus_1011.UPhase = Modelica.Math.atan3(line_1011_1013a.terminal1.V.im, line_1011_1013a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* bus_1011.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5049;
}

/*
equation index: 5050
type: SIMPLE_ASSIGN
bus_1011.UPu = if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5050};
  modelica_real tmp1245;
  modelica_real tmp1246;
  modelica_real tmp1247;
  modelica_boolean tmp1248;
  modelica_real tmp1249;
  tmp1248 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
  if(tmp1248)
  {
    tmp1249 = 0.0;
  }
  else
  {
    tmp1245 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
    tmp1246 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
    tmp1247 = (tmp1245 * tmp1245) + (tmp1246 * tmp1246);
    if(tmp1247 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1247, 0.5);
    }
    tmp1249 = sqrt(tmp1247);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* bus_1011.UPu variable */) = tmp1249;
  threadData->lastEquationSolved = 5050;
}

/*
equation index: 5051
type: SIMPLE_ASSIGN
bus_1011.U = bus_1011.UPu * bus_1011.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* bus_1011.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* bus_1011.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* bus_1011.UNom PARAM */));
  threadData->lastEquationSolved = 5051;
}

/*
equation index: 5052
type: SIMPLE_ASSIGN
load_11.UPu.value = if load_11.running.value then (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5052};
  modelica_real tmp1250;
  modelica_real tmp1251;
  modelica_real tmp1252;
  modelica_boolean tmp1253;
  modelica_real tmp1254;
  tmp1253 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */);
  if(tmp1253)
  {
    tmp1250 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
    tmp1251 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
    tmp1252 = (tmp1250 * tmp1250) + (tmp1251 * tmp1251);
    if(tmp1252 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1252, 0.5);
    }
    tmp1254 = sqrt(tmp1252);
  }
  else
  {
    tmp1254 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2809]] /* load_11.UPu.value variable */) = tmp1254;
  threadData->lastEquationSolved = 5052;
}

/*
equation index: 5053
type: SIMPLE_ASSIGN
bus_B11.UPhase = Modelica.Math.atan3(load_11.terminal.V.im, load_11.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* bus_B11.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5053;
}

/*
equation index: 5054
type: SIMPLE_ASSIGN
bus_B11.UPu = if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5054};
  modelica_real tmp1255;
  modelica_real tmp1256;
  modelica_real tmp1257;
  modelica_boolean tmp1258;
  modelica_real tmp1259;
  tmp1258 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
  if(tmp1258)
  {
    tmp1259 = 0.0;
  }
  else
  {
    tmp1255 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
    tmp1256 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
    tmp1257 = (tmp1255 * tmp1255) + (tmp1256 * tmp1256);
    if(tmp1257 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1257, 0.5);
    }
    tmp1259 = sqrt(tmp1257);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* bus_B11.UPu variable */) = tmp1259;
  threadData->lastEquationSolved = 5054;
}

/*
equation index: 5055
type: SIMPLE_ASSIGN
bus_B11.U = bus_B11.UPu * bus_B11.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* bus_B11.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* bus_B11.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* bus_B11.UNom PARAM */));
  threadData->lastEquationSolved = 5055;
}

/*
equation index: 5056
type: SIMPLE_ASSIGN
trafo_1011_4011.Q2Pu = line_4011_4071.terminal1.V.im * trafo_1011_4011.terminal2.i.re - line_4011_4071.terminal1.V.re * trafo_1011_4011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5056};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2987]] /* trafo_1011_4011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5056;
}

/*
equation index: 5057
type: SIMPLE_ASSIGN
trafo_1011_4011.P2Pu = line_4011_4071.terminal1.V.re * trafo_1011_4011.terminal2.i.re + line_4011_4071.terminal1.V.im * trafo_1011_4011.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2985]] /* trafo_1011_4011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5057;
}

/*
equation index: 5058
type: SIMPLE_ASSIGN
trafo_g19_4071.U2Pu = if trafo_g19_4071.running.value then if line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal1.V.re ^ 2.0 + line_4071_4072a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5058};
  modelica_real tmp1260;
  modelica_real tmp1261;
  modelica_real tmp1262;
  modelica_boolean tmp1263;
  modelica_real tmp1264;
  modelica_boolean tmp1265;
  modelica_real tmp1266;
  tmp1265 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp1265)
  {
    tmp1263 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0));
    if(tmp1263)
    {
      tmp1264 = 0.0;
    }
    else
    {
      tmp1260 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
      tmp1261 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
      tmp1262 = (tmp1260 * tmp1260) + (tmp1261 * tmp1261);
      if(tmp1262 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1262, 0.5);
      }
      tmp1264 = sqrt(tmp1262);
    }
    tmp1266 = tmp1264;
  }
  else
  {
    tmp1266 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3361]] /* trafo_g19_4071.U2Pu variable */) = tmp1266;
  threadData->lastEquationSolved = 5058;
}

/*
equation index: 5059
type: SIMPLE_ASSIGN
$DER.g19.lambdaQ1Pu = if g19.running.value then g19.RQ1PPu * g19.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* der(g19.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2100]] /* g19.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5059;
}

/*
equation index: 5060
type: SIMPLE_ASSIGN
g19.iStatorPu.re = if g19.running.value then g19.rTfoPu * g19.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 5060;
}

/*
equation index: 5061
type: SIMPLE_ASSIGN
g19.iStatorPu.im = if g19.running.value then g19.rTfoPu * g19.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 5061;
}

/*
equation index: 5062
type: SIMPLE_ASSIGN
g19.IStatorPu = if g19.running.value then if g19.iStatorPu.re == 0.0 and g19.iStatorPu.im == 0.0 then 0.0 else (g19.iStatorPu.re ^ 2.0 + g19.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5062};
  modelica_real tmp1267;
  modelica_real tmp1268;
  modelica_real tmp1269;
  modelica_boolean tmp1270;
  modelica_real tmp1271;
  modelica_boolean tmp1272;
  modelica_real tmp1273;
  tmp1272 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1272)
  {
    tmp1270 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) == 0.0));
    if(tmp1270)
    {
      tmp1271 = 0.0;
    }
    else
    {
      tmp1267 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */);
      tmp1268 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */);
      tmp1269 = (tmp1267 * tmp1267) + (tmp1268 * tmp1268);
      if(tmp1269 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1269, 0.5);
      }
      tmp1271 = sqrt(tmp1269);
    }
    tmp1273 = tmp1271;
  }
  else
  {
    tmp1273 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* g19.IStatorPu variable */) = tmp1273;
  threadData->lastEquationSolved = 5062;
}

/*
equation index: 5063
type: SIMPLE_ASSIGN
g19.uStatorPu.re = if g19.running.value then (g19.terminal.V.re + (-100.0) * (g19.terminal.i.re * g19.RTfoPu - g19.terminal.i.im * g19.XTfoPu) / g19.SNom) / g19.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */),"g19.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5063;
}

/*
equation index: 5064
type: SIMPLE_ASSIGN
g19.uPu.re = if g19.running.value then g19.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1882]] /* g19.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 5064;
}

/*
equation index: 5065
type: SIMPLE_ASSIGN
$DER.g19.lambdaQ2Pu = if g19.running.value then g19.RQ2PPu * g19.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* der(g19.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2101]] /* g19.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5065;
}

/*
equation index: 5066
type: SIMPLE_ASSIGN
$DER.g19.lambdaDPu = if g19.running.value then g19.RDPPu * g19.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* der(g19.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* g19.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5066;
}

/*
equation index: 5067
type: SIMPLE_ASSIGN
g19.cePu = if g19.running.value then g19.lambdaqPu * g19.idPu - g19.lambdadPu * g19.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 5067;
}

/*
equation index: 5068
type: SIMPLE_ASSIGN
g19.PePu = if g19.running.value then g19.cePu * g19.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1846]] /* g19.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 5068;
}

/*
equation index: 5069
type: SIMPLE_ASSIGN
g19.thetaInternal.value = if g19.running.value then Modelica.Math.atan3(g19.udPu, g19.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* g19.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 5069;
}

/*
equation index: 5070
type: SIMPLE_ASSIGN
g19.uStatorPu.im = if g19.running.value then (g19.terminal.V.im + (-100.0) * (g19.terminal.i.re * g19.XTfoPu + g19.terminal.i.im * g19.RTfoPu) / g19.SNom) / g19.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */),"g19.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5070;
}

/*
equation index: 5071
type: SIMPLE_ASSIGN
g19.sStatorPu.im = if g19.running.value then g19.uStatorPu.im * g19.iStatorPu.re - g19.uStatorPu.re * g19.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* g19.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 5071;
}

/*
equation index: 5072
type: SIMPLE_ASSIGN
g19.QStatorPu = if g19.running.value then -g19.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1850]] /* g19.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* g19.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5072;
}

/*
equation index: 5073
type: SIMPLE_ASSIGN
g19.QStatorPuQNom = if g19.running.value then 100.0 * g19.QStatorPu / g19.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1851]] /* g19.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1850]] /* g19.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2096]] /* g19.QNomAlt PARAM */),"g19.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5073;
}

/*
equation index: 5074
type: SIMPLE_ASSIGN
g19.sStatorPu.re = if g19.running.value then g19.uStatorPu.re * g19.iStatorPu.re + g19.uStatorPu.im * g19.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1874]] /* g19.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5074;
}

/*
equation index: 5075
type: SIMPLE_ASSIGN
g19.QGenPu = if g19.running.value then g19.terminal.V.re * g19.terminal.i.im - g19.terminal.V.im * g19.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1849]] /* g19.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 5075;
}

/*
equation index: 5076
type: SIMPLE_ASSIGN
g19.QGen = if g19.running.value then 100.0 * g19.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1848]] /* g19.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1849]] /* g19.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5076;
}

/*
equation index: 5077
type: SIMPLE_ASSIGN
g19.UPu = if g19.running.value then (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5077};
  modelica_real tmp1274;
  modelica_real tmp1275;
  modelica_real tmp1276;
  modelica_boolean tmp1277;
  modelica_real tmp1278;
  tmp1277 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1277)
  {
    tmp1274 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
    tmp1275 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
    tmp1276 = (tmp1274 * tmp1274) + (tmp1275 * tmp1275);
    if(tmp1276 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1276, 0.5);
    }
    tmp1278 = sqrt(tmp1276);
  }
  else
  {
    tmp1278 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1852]] /* g19.UPu variable */) = tmp1278;
  threadData->lastEquationSolved = 5077;
}

/*
equation index: 5078
type: SIMPLE_ASSIGN
g19.uPu.im = if g19.running.value then g19.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* g19.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 5078;
}

/*
equation index: 5079
type: SIMPLE_ASSIGN
trafo_g19_4071.U1Pu = if trafo_g19_4071.running.value then if g19.terminal.V.re == 0.0 and g19.terminal.V.im == 0.0 then 0.0 else (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5079};
  modelica_real tmp1279;
  modelica_real tmp1280;
  modelica_real tmp1281;
  modelica_boolean tmp1282;
  modelica_real tmp1283;
  modelica_boolean tmp1284;
  modelica_real tmp1285;
  tmp1284 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp1284)
  {
    tmp1282 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0));
    if(tmp1282)
    {
      tmp1283 = 0.0;
    }
    else
    {
      tmp1279 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
      tmp1280 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
      tmp1281 = (tmp1279 * tmp1279) + (tmp1280 * tmp1280);
      if(tmp1281 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1281, 0.5);
      }
      tmp1283 = sqrt(tmp1281);
    }
    tmp1285 = tmp1283;
  }
  else
  {
    tmp1285 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3360]] /* trafo_g19_4071.U1Pu variable */) = tmp1285;
  threadData->lastEquationSolved = 5079;
}

/*
equation index: 5080
type: SIMPLE_ASSIGN
trafo_g19_4071.Q1Pu = g19.terminal.V.re * g19.terminal.i.im - g19.terminal.V.im * g19.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3358]] /* trafo_g19_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)));
  threadData->lastEquationSolved = 5080;
}

/*
equation index: 5081
type: SIMPLE_ASSIGN
trafo_g19_4071.P1Pu = (-g19.terminal.V.re) * g19.terminal.i.re - g19.terminal.V.im * g19.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3356]] /* trafo_g19_4071.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)));
  threadData->lastEquationSolved = 5081;
}

/*
equation index: 5082
type: SIMPLE_ASSIGN
bus_BG19.UPhase = Modelica.Math.atan3(g19.terminal.V.im, g19.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* bus_BG19.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5082;
}

/*
equation index: 5083
type: SIMPLE_ASSIGN
bus_BG19.UPu = if g19.terminal.V.re == 0.0 and g19.terminal.V.im == 0.0 then 0.0 else (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5083};
  modelica_real tmp1286;
  modelica_real tmp1287;
  modelica_real tmp1288;
  modelica_boolean tmp1289;
  modelica_real tmp1290;
  tmp1289 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0));
  if(tmp1289)
  {
    tmp1290 = 0.0;
  }
  else
  {
    tmp1286 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
    tmp1287 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
    tmp1288 = (tmp1286 * tmp1286) + (tmp1287 * tmp1287);
    if(tmp1288 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1288, 0.5);
    }
    tmp1290 = sqrt(tmp1288);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* bus_BG19.UPu variable */) = tmp1290;
  threadData->lastEquationSolved = 5083;
}

/*
equation index: 5084
type: SIMPLE_ASSIGN
bus_BG19.U = bus_BG19.UPu * bus_BG19.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* bus_BG19.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* bus_BG19.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* bus_BG19.UNom PARAM */));
  threadData->lastEquationSolved = 5084;
}

/*
equation index: 5085
type: SIMPLE_ASSIGN
trafo_g19_4071.Q2Pu = line_4071_4072a.terminal1.V.im * trafo_g19_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * trafo_g19_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3359]] /* trafo_g19_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5085;
}

/*
equation index: 5086
type: SIMPLE_ASSIGN
trafo_g19_4071.P2Pu = line_4071_4072a.terminal1.V.re * trafo_g19_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * trafo_g19_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3357]] /* trafo_g19_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5086;
}

/*
equation index: 5087
type: SIMPLE_ASSIGN
trafo_71_4071.U2Pu = if trafo_71_4071.running.value then if line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal1.V.re ^ 2.0 + line_4071_4072a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5087};
  modelica_real tmp1291;
  modelica_real tmp1292;
  modelica_real tmp1293;
  modelica_boolean tmp1294;
  modelica_real tmp1295;
  modelica_boolean tmp1296;
  modelica_real tmp1297;
  tmp1296 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp1296)
  {
    tmp1294 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0));
    if(tmp1294)
    {
      tmp1295 = 0.0;
    }
    else
    {
      tmp1291 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
      tmp1292 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
      tmp1293 = (tmp1291 * tmp1291) + (tmp1292 * tmp1292);
      if(tmp1293 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1293, 0.5);
      }
      tmp1295 = sqrt(tmp1293);
    }
    tmp1297 = tmp1295;
  }
  else
  {
    tmp1297 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3269]] /* trafo_71_4071.U2Pu variable */) = tmp1297;
  threadData->lastEquationSolved = 5087;
}

/*
equation index: 5088
type: SIMPLE_ASSIGN
trafo_71_4071.U1Pu = if trafo_71_4071.running.value then if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5088};
  modelica_real tmp1298;
  modelica_real tmp1299;
  modelica_real tmp1300;
  modelica_boolean tmp1301;
  modelica_real tmp1302;
  modelica_boolean tmp1303;
  modelica_real tmp1304;
  tmp1303 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp1303)
  {
    tmp1301 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
    if(tmp1301)
    {
      tmp1302 = 0.0;
    }
    else
    {
      tmp1298 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
      tmp1299 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
      tmp1300 = (tmp1298 * tmp1298) + (tmp1299 * tmp1299);
      if(tmp1300 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1300, 0.5);
      }
      tmp1302 = sqrt(tmp1300);
    }
    tmp1304 = tmp1302;
  }
  else
  {
    tmp1304 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3268]] /* trafo_71_4071.U1Pu variable */) = tmp1304;
  threadData->lastEquationSolved = 5088;
}

/*
equation index: 5089
type: SIMPLE_ASSIGN
trafo_71_4071.Q1Pu = load_71.terminal.V.im * trafo_71_4071.terminal1.i.re - load_71.terminal.V.re * trafo_71_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3266]] /* trafo_71_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5089;
}

/*
equation index: 5090
type: SIMPLE_ASSIGN
trafo_71_4071.P1Pu = load_71.terminal.V.re * trafo_71_4071.terminal1.i.re + load_71.terminal.V.im * trafo_71_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3264]] /* trafo_71_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5090;
}

/*
equation index: 5091
type: SIMPLE_ASSIGN
load_71.UPu.value = if load_71.running.value then (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5091};
  modelica_real tmp1305;
  modelica_real tmp1306;
  modelica_real tmp1307;
  modelica_boolean tmp1308;
  modelica_real tmp1309;
  tmp1308 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */);
  if(tmp1308)
  {
    tmp1305 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
    tmp1306 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
    tmp1307 = (tmp1305 * tmp1305) + (tmp1306 * tmp1306);
    if(tmp1307 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1307, 0.5);
    }
    tmp1309 = sqrt(tmp1307);
  }
  else
  {
    tmp1309 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2914]] /* load_71.UPu.value variable */) = tmp1309;
  threadData->lastEquationSolved = 5091;
}

/*
equation index: 5092
type: SIMPLE_ASSIGN
bus_B71.UPhase = Modelica.Math.atan3(load_71.terminal.V.im, load_71.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bus_B71.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5092;
}

/*
equation index: 5093
type: SIMPLE_ASSIGN
bus_B71.UPu = if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5093};
  modelica_real tmp1310;
  modelica_real tmp1311;
  modelica_real tmp1312;
  modelica_boolean tmp1313;
  modelica_real tmp1314;
  tmp1313 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
  if(tmp1313)
  {
    tmp1314 = 0.0;
  }
  else
  {
    tmp1310 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
    tmp1311 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
    tmp1312 = (tmp1310 * tmp1310) + (tmp1311 * tmp1311);
    if(tmp1312 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1312, 0.5);
    }
    tmp1314 = sqrt(tmp1312);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* bus_B71.UPu variable */) = tmp1314;
  threadData->lastEquationSolved = 5093;
}

/*
equation index: 5094
type: SIMPLE_ASSIGN
bus_B71.U = bus_B71.UPu * bus_B71.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bus_B71.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* bus_B71.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* bus_B71.UNom PARAM */));
  threadData->lastEquationSolved = 5094;
}

/*
equation index: 5095
type: SIMPLE_ASSIGN
trafo_71_4071.Q2Pu = line_4071_4072a.terminal1.V.im * trafo_71_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * trafo_71_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3267]] /* trafo_71_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5095;
}

/*
equation index: 5096
type: SIMPLE_ASSIGN
trafo_71_4071.P2Pu = line_4071_4072a.terminal1.V.re * trafo_71_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * trafo_71_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3265]] /* trafo_71_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5096;
}

/*
equation index: 5097
type: SIMPLE_ASSIGN
bus_4071.UPu = shunt_4071.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* bus_4071.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */);
  threadData->lastEquationSolved = 5097;
}

/*
equation index: 5098
type: SIMPLE_ASSIGN
bus_4071.U = bus_4071.UPu * bus_4071.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* bus_4071.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* bus_4071.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* bus_4071.UNom PARAM */));
  threadData->lastEquationSolved = 5098;
}

/*
equation index: 5099
type: SIMPLE_ASSIGN
line_4071_4072a.Q1Pu = line_4071_4072a.terminal1.V.im * line_4071_4072a.terminal1.i.re - line_4071_4072a.terminal1.V.re * line_4071_4072a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2754]] /* line_4071_4072a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5099;
}

/*
equation index: 5100
type: SIMPLE_ASSIGN
line_4071_4072a.P1Pu = line_4071_4072a.terminal1.V.re * line_4071_4072a.terminal1.i.re + line_4071_4072a.terminal1.V.im * line_4071_4072a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2752]] /* line_4071_4072a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5100;
}

/*
equation index: 5101
type: SIMPLE_ASSIGN
trafo_g20_4072.U2Pu = if trafo_g20_4072.running.value then if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5101};
  modelica_real tmp1315;
  modelica_real tmp1316;
  modelica_real tmp1317;
  modelica_boolean tmp1318;
  modelica_real tmp1319;
  modelica_boolean tmp1320;
  modelica_real tmp1321;
  tmp1320 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp1320)
  {
    tmp1318 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
    if(tmp1318)
    {
      tmp1319 = 0.0;
    }
    else
    {
      tmp1315 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
      tmp1316 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
      tmp1317 = (tmp1315 * tmp1315) + (tmp1316 * tmp1316);
      if(tmp1317 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1317, 0.5);
      }
      tmp1319 = sqrt(tmp1317);
    }
    tmp1321 = tmp1319;
  }
  else
  {
    tmp1321 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3377]] /* trafo_g20_4072.U2Pu variable */) = tmp1321;
  threadData->lastEquationSolved = 5101;
}

/*
equation index: 5102
type: SIMPLE_ASSIGN
g20.uPu.re = if g20.running.value then trafo_g20_4072.terminal1.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1926]] /* g20.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */):0.0);
  threadData->lastEquationSolved = 5102;
}

/*
equation index: 5103
type: SIMPLE_ASSIGN
$DER.g20.lambdaQ1Pu = if g20.running.value then g20.RQ1PPu * g20.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(g20.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* g20.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5103;
}

/*
equation index: 5104
type: SIMPLE_ASSIGN
g20.iStatorPu.im = if g20.running.value then g20.rTfoPu * g20.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 5104;
}

/*
equation index: 5105
type: SIMPLE_ASSIGN
$DER.g20.lambdaQ2Pu = if g20.running.value then g20.RQ2PPu * g20.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(g20.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2202]] /* g20.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5105;
}

/*
equation index: 5106
type: SIMPLE_ASSIGN
$DER.g20.lambdaDPu = if g20.running.value then g20.RDPPu * g20.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* der(g20.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* g20.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 5106;
}

/*
equation index: 5107
type: SIMPLE_ASSIGN
g20.iStatorPu.re = if g20.running.value then g20.rTfoPu * g20.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 5107;
}

/*
equation index: 5108
type: SIMPLE_ASSIGN
g20.IStatorPu = if g20.running.value then if g20.iStatorPu.re == 0.0 and g20.iStatorPu.im == 0.0 then 0.0 else (g20.iStatorPu.re ^ 2.0 + g20.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5108};
  modelica_real tmp1322;
  modelica_real tmp1323;
  modelica_real tmp1324;
  modelica_boolean tmp1325;
  modelica_real tmp1326;
  modelica_boolean tmp1327;
  modelica_real tmp1328;
  tmp1327 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1327)
  {
    tmp1325 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) == 0.0));
    if(tmp1325)
    {
      tmp1326 = 0.0;
    }
    else
    {
      tmp1322 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */);
      tmp1323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */);
      tmp1324 = (tmp1322 * tmp1322) + (tmp1323 * tmp1323);
      if(tmp1324 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1324, 0.5);
      }
      tmp1326 = sqrt(tmp1324);
    }
    tmp1328 = tmp1326;
  }
  else
  {
    tmp1328 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* g20.IStatorPu variable */) = tmp1328;
  threadData->lastEquationSolved = 5108;
}

/*
equation index: 5109
type: SIMPLE_ASSIGN
g20.uStatorPu.re = if g20.running.value then (trafo_g20_4072.terminal1.V.re + (-100.0) * (g20.terminal.i.re * g20.RTfoPu - g20.terminal.i.im * g20.XTfoPu) / g20.SNom) / g20.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */),"g20.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5109;
}

/*
equation index: 5110
type: SIMPLE_ASSIGN
g20.cePu = if g20.running.value then g20.lambdaqPu * g20.idPu - g20.lambdadPu * g20.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 5110;
}

/*
equation index: 5111
type: SIMPLE_ASSIGN
g20.PePu = if g20.running.value then g20.cePu * g20.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1892]] /* g20.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 5111;
}

/*
equation index: 5112
type: SIMPLE_ASSIGN
g20.thetaInternal.value = if g20.running.value then Modelica.Math.atan3(g20.udPu, g20.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1924]] /* g20.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 5112;
}

/*
equation index: 5113
type: SIMPLE_ASSIGN
g20.uStatorPu.im = if g20.running.value then (trafo_g20_4072.terminal1.V.im + (-100.0) * (g20.terminal.i.re * g20.XTfoPu + g20.terminal.i.im * g20.RTfoPu) / g20.SNom) / g20.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */),"g20.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5113;
}

/*
equation index: 5114
type: SIMPLE_ASSIGN
g20.sStatorPu.im = if g20.running.value then g20.uStatorPu.im * g20.iStatorPu.re - g20.uStatorPu.re * g20.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1919]] /* g20.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 5114;
}

/*
equation index: 5115
type: SIMPLE_ASSIGN
g20.QStatorPu = if g20.running.value then -g20.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1896]] /* g20.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1919]] /* g20.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5115;
}

/*
equation index: 5116
type: SIMPLE_ASSIGN
g20.QStatorPuQNom = if g20.running.value then 100.0 * g20.QStatorPu / g20.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1897]] /* g20.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1896]] /* g20.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* g20.QNomAlt PARAM */),"g20.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5116;
}

/*
equation index: 5117
type: SIMPLE_ASSIGN
g20.sStatorPu.re = if g20.running.value then g20.uStatorPu.re * g20.iStatorPu.re + g20.uStatorPu.im * g20.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1920]] /* g20.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5117;
}

/*
equation index: 5118
type: SIMPLE_ASSIGN
g20.QGenPu = if g20.running.value then trafo_g20_4072.terminal1.V.re * g20.terminal.i.im - trafo_g20_4072.terminal1.V.im * g20.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1895]] /* g20.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 5118;
}

/*
equation index: 5119
type: SIMPLE_ASSIGN
g20.QGen = if g20.running.value then 100.0 * g20.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1894]] /* g20.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1895]] /* g20.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5119;
}

/*
equation index: 5120
type: SIMPLE_ASSIGN
g20.UPu = if g20.running.value then (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5120};
  modelica_real tmp1329;
  modelica_real tmp1330;
  modelica_real tmp1331;
  modelica_boolean tmp1332;
  modelica_real tmp1333;
  tmp1332 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1332)
  {
    tmp1329 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
    tmp1330 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
    tmp1331 = (tmp1329 * tmp1329) + (tmp1330 * tmp1330);
    if(tmp1331 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1331, 0.5);
    }
    tmp1333 = sqrt(tmp1331);
  }
  else
  {
    tmp1333 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1898]] /* g20.UPu variable */) = tmp1333;
  threadData->lastEquationSolved = 5120;
}

/*
equation index: 5121
type: SIMPLE_ASSIGN
g20.uPu.im = if g20.running.value then trafo_g20_4072.terminal1.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1925]] /* g20.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */):0.0);
  threadData->lastEquationSolved = 5121;
}

/*
equation index: 5122
type: SIMPLE_ASSIGN
trafo_g20_4072.U1Pu = if trafo_g20_4072.running.value then if trafo_g20_4072.terminal1.V.re == 0.0 and trafo_g20_4072.terminal1.V.im == 0.0 then 0.0 else (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5122};
  modelica_real tmp1334;
  modelica_real tmp1335;
  modelica_real tmp1336;
  modelica_boolean tmp1337;
  modelica_real tmp1338;
  modelica_boolean tmp1339;
  modelica_real tmp1340;
  tmp1339 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp1339)
  {
    tmp1337 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0));
    if(tmp1337)
    {
      tmp1338 = 0.0;
    }
    else
    {
      tmp1334 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
      tmp1335 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
      tmp1336 = (tmp1334 * tmp1334) + (tmp1335 * tmp1335);
      if(tmp1336 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1336, 0.5);
      }
      tmp1338 = sqrt(tmp1336);
    }
    tmp1340 = tmp1338;
  }
  else
  {
    tmp1340 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3376]] /* trafo_g20_4072.U1Pu variable */) = tmp1340;
  threadData->lastEquationSolved = 5122;
}

/*
equation index: 5123
type: SIMPLE_ASSIGN
trafo_g20_4072.Q1Pu = trafo_g20_4072.terminal1.V.re * g20.terminal.i.im - trafo_g20_4072.terminal1.V.im * g20.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3374]] /* trafo_g20_4072.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)));
  threadData->lastEquationSolved = 5123;
}

/*
equation index: 5124
type: SIMPLE_ASSIGN
trafo_g20_4072.P1Pu = (-trafo_g20_4072.terminal1.V.re) * g20.terminal.i.re - trafo_g20_4072.terminal1.V.im * g20.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3372]] /* trafo_g20_4072.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)));
  threadData->lastEquationSolved = 5124;
}

/*
equation index: 5125
type: SIMPLE_ASSIGN
bus_BG20.UPhase = Modelica.Math.atan3(trafo_g20_4072.terminal1.V.im, trafo_g20_4072.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* bus_BG20.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5125;
}

/*
equation index: 5126
type: SIMPLE_ASSIGN
bus_BG20.UPu = if trafo_g20_4072.terminal1.V.re == 0.0 and trafo_g20_4072.terminal1.V.im == 0.0 then 0.0 else (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5126};
  modelica_real tmp1341;
  modelica_real tmp1342;
  modelica_real tmp1343;
  modelica_boolean tmp1344;
  modelica_real tmp1345;
  tmp1344 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0));
  if(tmp1344)
  {
    tmp1345 = 0.0;
  }
  else
  {
    tmp1341 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
    tmp1342 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
    tmp1343 = (tmp1341 * tmp1341) + (tmp1342 * tmp1342);
    if(tmp1343 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1343, 0.5);
    }
    tmp1345 = sqrt(tmp1343);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* bus_BG20.UPu variable */) = tmp1345;
  threadData->lastEquationSolved = 5126;
}

/*
equation index: 5127
type: SIMPLE_ASSIGN
bus_BG20.U = bus_BG20.UPu * bus_BG20.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* bus_BG20.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* bus_BG20.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* bus_BG20.UNom PARAM */));
  threadData->lastEquationSolved = 5127;
}

/*
equation index: 5128
type: SIMPLE_ASSIGN
trafo_g20_4072.Q2Pu = line_4071_4072a.terminal2.V.im * trafo_g20_4072.terminal2.i.re - line_4071_4072a.terminal2.V.re * trafo_g20_4072.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3375]] /* trafo_g20_4072.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5128;
}

/*
equation index: 5129
type: SIMPLE_ASSIGN
trafo_g20_4072.P2Pu = line_4071_4072a.terminal2.V.re * trafo_g20_4072.terminal2.i.re + line_4071_4072a.terminal2.V.im * trafo_g20_4072.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3373]] /* trafo_g20_4072.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5129;
}

/*
equation index: 5130
type: SIMPLE_ASSIGN
trafo_72_4072.U2Pu = if trafo_72_4072.running.value then if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5130};
  modelica_real tmp1346;
  modelica_real tmp1347;
  modelica_real tmp1348;
  modelica_boolean tmp1349;
  modelica_real tmp1350;
  modelica_boolean tmp1351;
  modelica_real tmp1352;
  tmp1351 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp1351)
  {
    tmp1349 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
    if(tmp1349)
    {
      tmp1350 = 0.0;
    }
    else
    {
      tmp1346 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
      tmp1347 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
      tmp1348 = (tmp1346 * tmp1346) + (tmp1347 * tmp1347);
      if(tmp1348 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1348, 0.5);
      }
      tmp1350 = sqrt(tmp1348);
    }
    tmp1352 = tmp1350;
  }
  else
  {
    tmp1352 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3279]] /* trafo_72_4072.U2Pu variable */) = tmp1352;
  threadData->lastEquationSolved = 5130;
}

/*
equation index: 5131
type: SIMPLE_ASSIGN
trafo_72_4072.U1Pu = if trafo_72_4072.running.value then if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5131};
  modelica_real tmp1353;
  modelica_real tmp1354;
  modelica_real tmp1355;
  modelica_boolean tmp1356;
  modelica_real tmp1357;
  modelica_boolean tmp1358;
  modelica_real tmp1359;
  tmp1358 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp1358)
  {
    tmp1356 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
    if(tmp1356)
    {
      tmp1357 = 0.0;
    }
    else
    {
      tmp1353 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
      tmp1354 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
      tmp1355 = (tmp1353 * tmp1353) + (tmp1354 * tmp1354);
      if(tmp1355 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1355, 0.5);
      }
      tmp1357 = sqrt(tmp1355);
    }
    tmp1359 = tmp1357;
  }
  else
  {
    tmp1359 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3278]] /* trafo_72_4072.U1Pu variable */) = tmp1359;
  threadData->lastEquationSolved = 5131;
}

/*
equation index: 5132
type: SIMPLE_ASSIGN
trafo_72_4072.Q1Pu = load_72.terminal.V.im * trafo_72_4072.terminal1.i.re - load_72.terminal.V.re * trafo_72_4072.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3276]] /* trafo_72_4072.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5132;
}

/*
equation index: 5133
type: SIMPLE_ASSIGN
trafo_72_4072.P1Pu = load_72.terminal.V.re * trafo_72_4072.terminal1.i.re + load_72.terminal.V.im * trafo_72_4072.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3274]] /* trafo_72_4072.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5133;
}

/*
equation index: 5134
type: SIMPLE_ASSIGN
load_72.UPu.value = if load_72.running.value then (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5134};
  modelica_real tmp1360;
  modelica_real tmp1361;
  modelica_real tmp1362;
  modelica_boolean tmp1363;
  modelica_real tmp1364;
  tmp1363 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */);
  if(tmp1363)
  {
    tmp1360 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
    tmp1361 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
    tmp1362 = (tmp1360 * tmp1360) + (tmp1361 * tmp1361);
    if(tmp1362 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1362, 0.5);
    }
    tmp1364 = sqrt(tmp1362);
  }
  else
  {
    tmp1364 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2921]] /* load_72.UPu.value variable */) = tmp1364;
  threadData->lastEquationSolved = 5134;
}

/*
equation index: 5135
type: SIMPLE_ASSIGN
bus_B72.UPhase = Modelica.Math.atan3(load_72.terminal.V.im, load_72.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* bus_B72.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5135;
}

/*
equation index: 5136
type: SIMPLE_ASSIGN
bus_B72.UPu = if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5136};
  modelica_real tmp1365;
  modelica_real tmp1366;
  modelica_real tmp1367;
  modelica_boolean tmp1368;
  modelica_real tmp1369;
  tmp1368 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
  if(tmp1368)
  {
    tmp1369 = 0.0;
  }
  else
  {
    tmp1365 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
    tmp1366 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
    tmp1367 = (tmp1365 * tmp1365) + (tmp1366 * tmp1366);
    if(tmp1367 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1367, 0.5);
    }
    tmp1369 = sqrt(tmp1367);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bus_B72.UPu variable */) = tmp1369;
  threadData->lastEquationSolved = 5136;
}

/*
equation index: 5137
type: SIMPLE_ASSIGN
bus_B72.U = bus_B72.UPu * bus_B72.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* bus_B72.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bus_B72.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* bus_B72.UNom PARAM */));
  threadData->lastEquationSolved = 5137;
}

/*
equation index: 5138
type: SIMPLE_ASSIGN
trafo_72_4072.Q2Pu = line_4071_4072a.terminal2.V.im * trafo_72_4072.terminal2.i.re - line_4071_4072a.terminal2.V.re * trafo_72_4072.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3277]] /* trafo_72_4072.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5138;
}

/*
equation index: 5139
type: SIMPLE_ASSIGN
trafo_72_4072.P2Pu = line_4071_4072a.terminal2.V.re * trafo_72_4072.terminal2.i.re + line_4071_4072a.terminal2.V.im * trafo_72_4072.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3275]] /* trafo_72_4072.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5139;
}

/*
equation index: 5140
type: SIMPLE_ASSIGN
line_4071_4072b.Q2Pu = line_4071_4072a.terminal2.V.im * line_4071_4072b.terminal2.i.re - line_4071_4072a.terminal2.V.re * line_4071_4072b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2767]] /* line_4071_4072b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5140;
}

/*
equation index: 5141
type: SIMPLE_ASSIGN
line_4071_4072b.P2Pu = line_4071_4072a.terminal2.V.re * line_4071_4072b.terminal2.i.re + line_4071_4072a.terminal2.V.im * line_4071_4072b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2765]] /* line_4071_4072b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5141;
}

/*
equation index: 5142
type: SIMPLE_ASSIGN
line_4071_4072b.Q1Pu = line_4071_4072a.terminal1.V.im * line_4071_4072b.terminal1.i.re - line_4071_4072a.terminal1.V.re * line_4071_4072b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2766]] /* line_4071_4072b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5142;
}

/*
equation index: 5143
type: SIMPLE_ASSIGN
line_4071_4072b.P1Pu = line_4071_4072a.terminal1.V.re * line_4071_4072b.terminal1.i.re + line_4071_4072a.terminal1.V.im * line_4071_4072b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2764]] /* line_4071_4072b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5143;
}

/*
equation index: 5144
type: SIMPLE_ASSIGN
line_4071_4072a.Q2Pu = line_4071_4072a.terminal2.V.im * line_4071_4072a.terminal2.i.re - line_4071_4072a.terminal2.V.re * line_4071_4072a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2755]] /* line_4071_4072a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5144;
}

/*
equation index: 5145
type: SIMPLE_ASSIGN
line_4071_4072a.P2Pu = line_4071_4072a.terminal2.V.re * line_4071_4072a.terminal2.i.re + line_4071_4072a.terminal2.V.im * line_4071_4072a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2753]] /* line_4071_4072a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5145;
}

/*
equation index: 5146
type: SIMPLE_ASSIGN
bus_4072.UPhase = Modelica.Math.atan3(line_4071_4072a.terminal2.V.im, line_4071_4072a.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* bus_4072.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5146;
}

/*
equation index: 5147
type: SIMPLE_ASSIGN
bus_4072.UPu = if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5147};
  modelica_real tmp1370;
  modelica_real tmp1371;
  modelica_real tmp1372;
  modelica_boolean tmp1373;
  modelica_real tmp1374;
  tmp1373 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
  if(tmp1373)
  {
    tmp1374 = 0.0;
  }
  else
  {
    tmp1370 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
    tmp1371 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
    tmp1372 = (tmp1370 * tmp1370) + (tmp1371 * tmp1371);
    if(tmp1372 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1372, 0.5);
    }
    tmp1374 = sqrt(tmp1372);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* bus_4072.UPu variable */) = tmp1374;
  threadData->lastEquationSolved = 5147;
}

/*
equation index: 5148
type: SIMPLE_ASSIGN
bus_4072.U = bus_4072.UPu * bus_4072.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* bus_4072.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* bus_4072.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* bus_4072.UNom PARAM */));
  threadData->lastEquationSolved = 5148;
}

/*
equation index: 5149
type: SIMPLE_ASSIGN
line_4012_4071.Q2Pu = line_4071_4072a.terminal1.V.im * line_4012_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * line_4012_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2517]] /* line_4012_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5149;
}

/*
equation index: 5150
type: SIMPLE_ASSIGN
line_4012_4071.P2Pu = line_4071_4072a.terminal1.V.re * line_4012_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * line_4012_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2515]] /* line_4012_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5150;
}

/*
equation index: 5151
type: SIMPLE_ASSIGN
line_4012_4071.Q1Pu = line_4012_4022.terminal1.V.im * line_4012_4071.terminal1.i.re - line_4012_4022.terminal1.V.re * line_4012_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2516]] /* line_4012_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5151;
}

/*
equation index: 5152
type: SIMPLE_ASSIGN
line_4012_4071.P1Pu = line_4012_4022.terminal1.V.re * line_4012_4071.terminal1.i.re + line_4012_4022.terminal1.V.im * line_4012_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2514]] /* line_4012_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5152;
}

/*
equation index: 5153
type: SIMPLE_ASSIGN
line_4011_4071.Q2Pu = line_4071_4072a.terminal1.V.im * line_4011_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * line_4011_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2497]] /* line_4011_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5153;
}

/*
equation index: 5154
type: SIMPLE_ASSIGN
line_4011_4071.P2Pu = line_4071_4072a.terminal1.V.re * line_4011_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * line_4011_4071.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2495]] /* line_4011_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5154;
}

/*
equation index: 5155
type: SIMPLE_ASSIGN
line_4011_4071.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4071.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2496]] /* line_4011_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5155;
}

/*
equation index: 5156
type: SIMPLE_ASSIGN
line_4011_4071.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4071.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4071.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2494]] /* line_4011_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5156;
}

/*
equation index: 5157
type: SIMPLE_ASSIGN
bus_4071.UPhase = Modelica.Math.atan3(line_4071_4072a.terminal1.V.im, line_4071_4072a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* bus_4071.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5157;
}

/*
equation index: 5158
type: SIMPLE_ASSIGN
line_4011_4021.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4021.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4021.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2480]] /* line_4011_4021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5158;
}

/*
equation index: 5159
type: SIMPLE_ASSIGN
line_4011_4021.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4021.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4021.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2478]] /* line_4011_4021.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5159;
}

/*
equation index: 5160
type: SIMPLE_ASSIGN
line_4011_4012.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4012.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2472]] /* line_4011_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5160;
}

/*
equation index: 5161
type: SIMPLE_ASSIGN
line_4011_4012.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4012.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4012.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2470]] /* line_4011_4012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5161;
}

/*
equation index: 5162
type: SIMPLE_ASSIGN
bus_4021.UPhase = Modelica.Math.atan3(line_4021_4032.terminal1.V.im, line_4021_4032.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* bus_4021.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5162;
}

/*
equation index: 5163
type: SIMPLE_ASSIGN
bus_4021.UPu = if line_4021_4032.terminal1.V.re == 0.0 and line_4021_4032.terminal1.V.im == 0.0 then 0.0 else (line_4021_4032.terminal1.V.re ^ 2.0 + line_4021_4032.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5163};
  modelica_real tmp1375;
  modelica_real tmp1376;
  modelica_real tmp1377;
  modelica_boolean tmp1378;
  modelica_real tmp1379;
  tmp1378 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0));
  if(tmp1378)
  {
    tmp1379 = 0.0;
  }
  else
  {
    tmp1375 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */);
    tmp1376 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */);
    tmp1377 = (tmp1375 * tmp1375) + (tmp1376 * tmp1376);
    if(tmp1377 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1377, 0.5);
    }
    tmp1379 = sqrt(tmp1377);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* bus_4021.UPu variable */) = tmp1379;
  threadData->lastEquationSolved = 5163;
}

/*
equation index: 5164
type: SIMPLE_ASSIGN
bus_4021.U = bus_4021.UPu * bus_4021.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* bus_4021.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* bus_4021.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* bus_4021.UNom PARAM */));
  threadData->lastEquationSolved = 5164;
}

/*
equation index: 5165
type: SIMPLE_ASSIGN
bus_4042.UPhase = Modelica.Math.atan3(line_4042_4043.terminal1.V.im, line_4042_4043.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* bus_4042.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5165;
}

/*
equation index: 5166
type: SIMPLE_ASSIGN
bus_4042.UPu = if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5166};
  modelica_real tmp1380;
  modelica_real tmp1381;
  modelica_real tmp1382;
  modelica_boolean tmp1383;
  modelica_real tmp1384;
  tmp1383 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
  if(tmp1383)
  {
    tmp1384 = 0.0;
  }
  else
  {
    tmp1380 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
    tmp1381 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
    tmp1382 = (tmp1380 * tmp1380) + (tmp1381 * tmp1381);
    if(tmp1382 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1382, 0.5);
    }
    tmp1384 = sqrt(tmp1382);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* bus_4042.UPu variable */) = tmp1384;
  threadData->lastEquationSolved = 5166;
}

/*
equation index: 5167
type: SIMPLE_ASSIGN
bus_4042.U = bus_4042.UPu * bus_4042.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* bus_4042.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* bus_4042.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* bus_4042.UNom PARAM */));
  threadData->lastEquationSolved = 5167;
}

/*
equation index: 5168
type: SIMPLE_ASSIGN
bus_1042.UPhase = Modelica.Math.atan3(line_1042_1045.terminal1.V.im, line_1042_1045.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* bus_1042.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5168;
}

/*
equation index: 5169
type: SIMPLE_ASSIGN
bus_1042.UPu = if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_1042
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* bus_1042.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* check_UPu_bus_1042 variable */));
  threadData->lastEquationSolved = 5169;
}

/*
equation index: 5170
type: SIMPLE_ASSIGN
bus_1042.U = bus_1042.UPu * bus_1042.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* bus_1042.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* bus_1042.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* bus_1042.UNom PARAM */));
  threadData->lastEquationSolved = 5170;
}

/*
equation index: 5171
type: SIMPLE_ASSIGN
trafo_g6_1042.Q2Pu = line_1042_1045.terminal1.V.im * trafo_g6_1042.terminal2.i.re - line_1042_1045.terminal1.V.re * trafo_g6_1042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3417]] /* trafo_g6_1042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5171;
}

/*
equation index: 5172
type: SIMPLE_ASSIGN
trafo_g6_1042.P2Pu = line_1042_1045.terminal1.V.re * trafo_g6_1042.terminal2.i.re + line_1042_1045.terminal1.V.im * trafo_g6_1042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3415]] /* trafo_g6_1042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5172;
}

/*
equation index: 5173
type: SIMPLE_ASSIGN
load_05.UPu.value = if load_05.running.value then (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5173};
  modelica_real tmp1385;
  modelica_real tmp1386;
  modelica_real tmp1387;
  modelica_boolean tmp1388;
  modelica_real tmp1389;
  tmp1388 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */);
  if(tmp1388)
  {
    tmp1385 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
    tmp1386 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
    tmp1387 = (tmp1385 * tmp1385) + (tmp1386 * tmp1386);
    if(tmp1387 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1387, 0.5);
    }
    tmp1389 = sqrt(tmp1387);
  }
  else
  {
    tmp1389 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2802]] /* load_05.UPu.value variable */) = tmp1389;
  threadData->lastEquationSolved = 5173;
}

/*
equation index: 5174
type: SIMPLE_ASSIGN
bus_B05.UPhase = Modelica.Math.atan3(load_05.terminal.V.im, load_05.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* bus_B05.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5174;
}

/*
equation index: 5175
type: SIMPLE_ASSIGN
bus_B05.UPu = if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5175};
  modelica_real tmp1390;
  modelica_real tmp1391;
  modelica_real tmp1392;
  modelica_boolean tmp1393;
  modelica_real tmp1394;
  tmp1393 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
  if(tmp1393)
  {
    tmp1394 = 0.0;
  }
  else
  {
    tmp1390 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
    tmp1391 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
    tmp1392 = (tmp1390 * tmp1390) + (tmp1391 * tmp1391);
    if(tmp1392 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1392, 0.5);
    }
    tmp1394 = sqrt(tmp1392);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* bus_B05.UPu variable */) = tmp1394;
  threadData->lastEquationSolved = 5175;
}

/*
equation index: 5176
type: SIMPLE_ASSIGN
bus_B05.U = bus_B05.UPu * bus_B05.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* bus_B05.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* bus_B05.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* bus_B05.UNom PARAM */));
  threadData->lastEquationSolved = 5176;
}

/*
equation index: 5177
type: SIMPLE_ASSIGN
bus_4062.UPhase = Modelica.Math.atan3(line_4062_4063b.terminal1.V.im, line_4062_4063b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* bus_4062.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5177;
}

/*
equation index: 5178
type: SIMPLE_ASSIGN
bus_4062.UPu = if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_4062
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* bus_4062.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* check_UPu_bus_4062 variable */));
  threadData->lastEquationSolved = 5178;
}

/*
equation index: 5179
type: SIMPLE_ASSIGN
bus_4062.U = bus_4062.UPu * bus_4062.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* bus_4062.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* bus_4062.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* bus_4062.UNom PARAM */));
  threadData->lastEquationSolved = 5179;
}

/*
equation index: 5180
type: SIMPLE_ASSIGN
line_4041_4061.Q2Pu = line_4061_4062.terminal1.V.im * line_4041_4061.terminal2.i.re - line_4061_4062.terminal1.V.re * line_4041_4061.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2613]] /* line_4041_4061.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5180;
}

/*
equation index: 5181
type: SIMPLE_ASSIGN
line_4041_4061.P2Pu = line_4061_4062.terminal1.V.re * line_4041_4061.terminal2.i.re + line_4061_4062.terminal1.V.im * line_4041_4061.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2611]] /* line_4041_4061.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5181;
}

/*
equation index: 5182
type: SIMPLE_ASSIGN
bus_4061.UPhase = Modelica.Math.atan3(line_4061_4062.terminal1.V.im, line_4061_4062.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* bus_4061.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5182;
}

/*
equation index: 5183
type: SIMPLE_ASSIGN
bus_4061.UPu = if line_4061_4062.terminal1.V.re == 0.0 and line_4061_4062.terminal1.V.im == 0.0 then 0.0 else (line_4061_4062.terminal1.V.re ^ 2.0 + line_4061_4062.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5183};
  modelica_real tmp1395;
  modelica_real tmp1396;
  modelica_real tmp1397;
  modelica_boolean tmp1398;
  modelica_real tmp1399;
  tmp1398 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0));
  if(tmp1398)
  {
    tmp1399 = 0.0;
  }
  else
  {
    tmp1395 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */);
    tmp1396 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */);
    tmp1397 = (tmp1395 * tmp1395) + (tmp1396 * tmp1396);
    if(tmp1397 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1397, 0.5);
    }
    tmp1399 = sqrt(tmp1397);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* bus_4061.UPu variable */) = tmp1399;
  threadData->lastEquationSolved = 5183;
}

/*
equation index: 5184
type: SIMPLE_ASSIGN
bus_4061.U = bus_4061.UPu * bus_4061.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* bus_4061.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* bus_4061.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* bus_4061.UNom PARAM */));
  threadData->lastEquationSolved = 5184;
}

/*
equation index: 5185
type: SIMPLE_ASSIGN
load_41.UPu.value = if load_41.running.value then (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5185};
  modelica_real tmp1400;
  modelica_real tmp1401;
  modelica_real tmp1402;
  modelica_boolean tmp1403;
  modelica_real tmp1404;
  tmp1403 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */);
  if(tmp1403)
  {
    tmp1400 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
    tmp1401 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
    tmp1402 = (tmp1400 * tmp1400) + (tmp1401 * tmp1401);
    if(tmp1402 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1402, 0.5);
    }
    tmp1404 = sqrt(tmp1402);
  }
  else
  {
    tmp1404 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2851]] /* load_41.UPu.value variable */) = tmp1404;
  threadData->lastEquationSolved = 5185;
}

/*
equation index: 5186
type: SIMPLE_ASSIGN
bus_B41.UPhase = Modelica.Math.atan3(load_41.terminal.V.im, load_41.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* bus_B41.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5186;
}

/*
equation index: 5187
type: SIMPLE_ASSIGN
bus_B41.UPu = if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5187};
  modelica_real tmp1405;
  modelica_real tmp1406;
  modelica_real tmp1407;
  modelica_boolean tmp1408;
  modelica_real tmp1409;
  tmp1408 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
  if(tmp1408)
  {
    tmp1409 = 0.0;
  }
  else
  {
    tmp1405 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
    tmp1406 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
    tmp1407 = (tmp1405 * tmp1405) + (tmp1406 * tmp1406);
    if(tmp1407 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1407, 0.5);
    }
    tmp1409 = sqrt(tmp1407);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* bus_B41.UPu variable */) = tmp1409;
  threadData->lastEquationSolved = 5187;
}

/*
equation index: 5188
type: SIMPLE_ASSIGN
bus_B41.U = bus_B41.UPu * bus_B41.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* bus_B41.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* bus_B41.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* bus_B41.UNom PARAM */));
  threadData->lastEquationSolved = 5188;
}

/*
equation index: 5189
type: SIMPLE_ASSIGN
line_4012_4022.Q2Pu = line_4022_4031b.terminal1.V.im * line_4012_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * line_4012_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2507]] /* line_4012_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5189;
}

/*
equation index: 5190
type: SIMPLE_ASSIGN
line_4012_4022.P2Pu = line_4022_4031b.terminal1.V.re * line_4012_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * line_4012_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2505]] /* line_4012_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5190;
}

/*
equation index: 5191
type: SIMPLE_ASSIGN
line_4011_4022.Q2Pu = line_4022_4031b.terminal1.V.im * line_4011_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * line_4011_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2489]] /* line_4011_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5191;
}

/*
equation index: 5192
type: SIMPLE_ASSIGN
line_4011_4022.P2Pu = line_4022_4031b.terminal1.V.re * line_4011_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * line_4011_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2487]] /* line_4011_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5192;
}

/*
equation index: 5193
type: SIMPLE_ASSIGN
line_4011_4022.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4022.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2488]] /* line_4011_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 5193;
}

/*
equation index: 5194
type: SIMPLE_ASSIGN
line_4011_4022.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4022.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2486]] /* line_4011_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 5194;
}

/*
equation index: 5195
type: SIMPLE_ASSIGN
line_4011_4012.Q2Pu = line_4012_4022.terminal1.V.im * line_4011_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * line_4011_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2473]] /* line_4011_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 5195;
}

/*
equation index: 5196
type: SIMPLE_ASSIGN
line_4011_4012.P2Pu = line_4012_4022.terminal1.V.re * line_4011_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * line_4011_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2471]] /* line_4011_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 5196;
}

/*
equation index: 5197
type: SIMPLE_ASSIGN
bus_4022.UPhase = Modelica.Math.atan3(line_4022_4031b.terminal1.V.im, line_4022_4031b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* bus_4022.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5197;
}

/*
equation index: 5198
type: SIMPLE_ASSIGN
bus_4022.UPu = if line_4022_4031b.terminal1.V.re == 0.0 and line_4022_4031b.terminal1.V.im == 0.0 then 0.0 else (line_4022_4031b.terminal1.V.re ^ 2.0 + line_4022_4031b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5198};
  modelica_real tmp1410;
  modelica_real tmp1411;
  modelica_real tmp1412;
  modelica_boolean tmp1413;
  modelica_real tmp1414;
  tmp1413 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0));
  if(tmp1413)
  {
    tmp1414 = 0.0;
  }
  else
  {
    tmp1410 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */);
    tmp1411 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */);
    tmp1412 = (tmp1410 * tmp1410) + (tmp1411 * tmp1411);
    if(tmp1412 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1412, 0.5);
    }
    tmp1414 = sqrt(tmp1412);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* bus_4022.UPu variable */) = tmp1414;
  threadData->lastEquationSolved = 5198;
}

/*
equation index: 5199
type: SIMPLE_ASSIGN
bus_4022.U = bus_4022.UPu * bus_4022.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* bus_4022.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* bus_4022.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* bus_4022.UNom PARAM */));
  threadData->lastEquationSolved = 5199;
}

/*
equation index: 5200
type: SIMPLE_ASSIGN
bus_4031.UPhase = Modelica.Math.atan3(line_4031_4041b.terminal1.V.im, line_4031_4041b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bus_4031.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5200;
}

/*
equation index: 5201
type: SIMPLE_ASSIGN
bus_4031.UPu = if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5201};
  modelica_real tmp1415;
  modelica_real tmp1416;
  modelica_real tmp1417;
  modelica_boolean tmp1418;
  modelica_real tmp1419;
  tmp1418 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
  if(tmp1418)
  {
    tmp1419 = 0.0;
  }
  else
  {
    tmp1415 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
    tmp1416 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
    tmp1417 = (tmp1415 * tmp1415) + (tmp1416 * tmp1416);
    if(tmp1417 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1417, 0.5);
    }
    tmp1419 = sqrt(tmp1417);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bus_4031.UPu variable */) = tmp1419;
  threadData->lastEquationSolved = 5201;
}

/*
equation index: 5202
type: SIMPLE_ASSIGN
bus_4031.U = bus_4031.UPu * bus_4031.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bus_4031.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bus_4031.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* bus_4031.UNom PARAM */));
  threadData->lastEquationSolved = 5202;
}

/*
equation index: 5203
type: SIMPLE_ASSIGN
g12.cePu = if g12.running.value then g12.lambdaqPu * g12.idPu - g12.lambdadPu * g12.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 5203;
}

/*
equation index: 5204
type: SIMPLE_ASSIGN
g12.PePu = if g12.running.value then g12.cePu * g12.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1524]] /* g12.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 5204;
}

/*
equation index: 5205
type: SIMPLE_ASSIGN
g12.thetaInternal.value = if g12.running.value then Modelica.Math.atan3(g12.udPu, g12.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1558]] /* g12.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 5205;
}

/*
equation index: 5206
type: SIMPLE_ASSIGN
g12.uStatorPu.im = if g12.running.value then (g12.terminal.V.im + (-100.0) * (g12.terminal.i.re * g12.XTfoPu + g12.terminal.i.im * g12.RTfoPu) / g12.SNom) / g12.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */),"g12.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 5206;
}

/*
equation index: 5207
type: SIMPLE_ASSIGN
g12.sStatorPu.im = if g12.running.value then g12.uStatorPu.im * g12.iStatorPu.re - g12.uStatorPu.re * g12.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* g12.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 5207;
}

/*
equation index: 5208
type: SIMPLE_ASSIGN
g12.QStatorPu = if g12.running.value then -g12.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* g12.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* g12.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5208;
}

/*
equation index: 5209
type: SIMPLE_ASSIGN
g12.QStatorPuQNom = if g12.running.value then 100.0 * g12.QStatorPu / g12.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1529]] /* g12.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* g12.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* g12.QNomAlt PARAM */),"g12.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5209;
}

/*
equation index: 5210
type: SIMPLE_ASSIGN
g12.sStatorPu.re = if g12.running.value then g12.uStatorPu.re * g12.iStatorPu.re + g12.uStatorPu.im * g12.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1552]] /* g12.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 5210;
}

/*
equation index: 5211
type: SIMPLE_ASSIGN
g12.QGenPu = if g12.running.value then g12.terminal.V.re * g12.terminal.i.im - g12.terminal.V.im * g12.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* g12.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 5211;
}

/*
equation index: 5212
type: SIMPLE_ASSIGN
g12.QGen = if g12.running.value then 100.0 * g12.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1526]] /* g12.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* g12.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5212;
}

/*
equation index: 5213
type: SIMPLE_ASSIGN
g12.UPu = if g12.running.value then (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5213};
  modelica_real tmp1420;
  modelica_real tmp1421;
  modelica_real tmp1422;
  modelica_boolean tmp1423;
  modelica_real tmp1424;
  tmp1423 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1423)
  {
    tmp1420 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
    tmp1421 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
    tmp1422 = (tmp1420 * tmp1420) + (tmp1421 * tmp1421);
    if(tmp1422 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1422, 0.5);
    }
    tmp1424 = sqrt(tmp1422);
  }
  else
  {
    tmp1424 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1530]] /* g12.UPu variable */) = tmp1424;
  threadData->lastEquationSolved = 5213;
}

/*
equation index: 5214
type: SIMPLE_ASSIGN
g12.uPu.im = if g12.running.value then g12.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1559]] /* g12.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 5214;
}

/*
equation index: 5215
type: SIMPLE_ASSIGN
trafo_g12_4031.U1Pu = if trafo_g12_4031.running.value then if g12.terminal.V.re == 0.0 and g12.terminal.V.im == 0.0 then 0.0 else (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5215};
  modelica_real tmp1425;
  modelica_real tmp1426;
  modelica_real tmp1427;
  modelica_boolean tmp1428;
  modelica_real tmp1429;
  modelica_boolean tmp1430;
  modelica_real tmp1431;
  tmp1430 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp1430)
  {
    tmp1428 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0));
    if(tmp1428)
    {
      tmp1429 = 0.0;
    }
    else
    {
      tmp1425 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
      tmp1426 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
      tmp1427 = (tmp1425 * tmp1425) + (tmp1426 * tmp1426);
      if(tmp1427 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1427, 0.5);
      }
      tmp1429 = sqrt(tmp1427);
    }
    tmp1431 = tmp1429;
  }
  else
  {
    tmp1431 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3304]] /* trafo_g12_4031.U1Pu variable */) = tmp1431;
  threadData->lastEquationSolved = 5215;
}

/*
equation index: 5216
type: SIMPLE_ASSIGN
trafo_g12_4031.Q1Pu = g12.terminal.V.re * g12.terminal.i.im - g12.terminal.V.im * g12.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3302]] /* trafo_g12_4031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)));
  threadData->lastEquationSolved = 5216;
}

/*
equation index: 5217
type: SIMPLE_ASSIGN
trafo_g12_4031.P1Pu = (-g12.terminal.V.re) * g12.terminal.i.re - g12.terminal.V.im * g12.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3300]] /* trafo_g12_4031.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)));
  threadData->lastEquationSolved = 5217;
}

/*
equation index: 5218
type: SIMPLE_ASSIGN
bus_BG12.UPhase = Modelica.Math.atan3(g12.terminal.V.im, g12.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* bus_BG12.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5218;
}

/*
equation index: 5219
type: SIMPLE_ASSIGN
bus_BG12.UPu = if g12.terminal.V.re == 0.0 and g12.terminal.V.im == 0.0 then 0.0 else (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5219};
  modelica_real tmp1432;
  modelica_real tmp1433;
  modelica_real tmp1434;
  modelica_boolean tmp1435;
  modelica_real tmp1436;
  tmp1435 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0));
  if(tmp1435)
  {
    tmp1436 = 0.0;
  }
  else
  {
    tmp1432 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
    tmp1433 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
    tmp1434 = (tmp1432 * tmp1432) + (tmp1433 * tmp1433);
    if(tmp1434 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1434, 0.5);
    }
    tmp1436 = sqrt(tmp1434);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* bus_BG12.UPu variable */) = tmp1436;
  threadData->lastEquationSolved = 5219;
}

/*
equation index: 5220
type: SIMPLE_ASSIGN
bus_BG12.U = bus_BG12.UPu * bus_BG12.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* bus_BG12.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* bus_BG12.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* bus_BG12.UNom PARAM */));
  threadData->lastEquationSolved = 5220;
}

/*
equation index: 5221
type: SIMPLE_ASSIGN
bus_4012.UPhase = Modelica.Math.atan3(line_4012_4022.terminal1.V.im, line_4012_4022.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* bus_4012.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5221;
}

/*
equation index: 5222
type: SIMPLE_ASSIGN
bus_4012.UPu = if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_4012
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* bus_4012.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* check_UPu_bus_4012 variable */));
  threadData->lastEquationSolved = 5222;
}

/*
equation index: 5223
type: SIMPLE_ASSIGN
bus_4012.U = bus_4012.UPu * bus_4012.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* bus_4012.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* bus_4012.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* bus_4012.UNom PARAM */));
  threadData->lastEquationSolved = 5223;
}

/*
equation index: 5224
type: SIMPLE_ASSIGN
bus_4011.UPhase = Modelica.Math.atan3(line_4011_4071.terminal1.V.im, line_4011_4071.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* bus_4011.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5224;
}

/*
equation index: 5225
type: SIMPLE_ASSIGN
bus_4011.UPu = if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5225};
  modelica_real tmp1437;
  modelica_real tmp1438;
  modelica_real tmp1439;
  modelica_boolean tmp1440;
  modelica_real tmp1441;
  tmp1440 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
  if(tmp1440)
  {
    tmp1441 = 0.0;
  }
  else
  {
    tmp1437 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
    tmp1438 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
    tmp1439 = (tmp1437 * tmp1437) + (tmp1438 * tmp1438);
    if(tmp1439 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1439, 0.5);
    }
    tmp1441 = sqrt(tmp1439);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* bus_4011.UPu variable */) = tmp1441;
  threadData->lastEquationSolved = 5225;
}

/*
equation index: 5226
type: SIMPLE_ASSIGN
bus_4011.U = bus_4011.UPu * bus_4011.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* bus_4011.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* bus_4011.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* bus_4011.UNom PARAM */));
  threadData->lastEquationSolved = 5226;
}

/*
equation index: 5227
type: SIMPLE_ASSIGN
bus_4032.UPhase = Modelica.Math.atan3(line_4032_4044.terminal1.V.im, line_4032_4044.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* bus_4032.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 5227;
}

/*
equation index: 5228
type: SIMPLE_ASSIGN
bus_4032.UPu = if line_4032_4044.terminal1.V.re == 0.0 and line_4032_4044.terminal1.V.im == 0.0 then 0.0 else (line_4032_4044.terminal1.V.re ^ 2.0 + line_4032_4044.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5228};
  modelica_real tmp1442;
  modelica_real tmp1443;
  modelica_real tmp1444;
  modelica_boolean tmp1445;
  modelica_real tmp1446;
  tmp1445 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) == 0.0));
  if(tmp1445)
  {
    tmp1446 = 0.0;
  }
  else
  {
    tmp1442 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */);
    tmp1443 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */);
    tmp1444 = (tmp1442 * tmp1442) + (tmp1443 * tmp1443);
    if(tmp1444 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1444, 0.5);
    }
    tmp1446 = sqrt(tmp1444);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* bus_4032.UPu variable */) = tmp1446;
  threadData->lastEquationSolved = 5228;
}

/*
equation index: 5229
type: SIMPLE_ASSIGN
bus_4032.U = bus_4032.UPu * bus_4032.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* bus_4032.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* bus_4032.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* bus_4032.UNom PARAM */));
  threadData->lastEquationSolved = 5229;
}

/*
equation index: 5230
type: SIMPLE_ASSIGN
$PRE.disconnection.state1.value = $START.disconnection.state1.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5230};
  (data->simulationInfo->booleanVarsPre[469] /* disconnection.state1.value DISCRETE */) = (data->modelData->booleanVarsData[469] /* disconnection.state1.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 5230;
}

/*
equation index: 5231
type: SIMPLE_ASSIGN
disconnection.state1.value = $PRE.disconnection.state1.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5231};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[469] /* disconnection.state1.value DISCRETE */);
  threadData->lastEquationSolved = 5231;
}

/*
equation index: 5232
type: SIMPLE_ASSIGN
$whenCondition367 = not disconnection.state1.value and not $PRE.line_4032_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5232};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[297]] /* $whenCondition367 DISCRETE */) = ((!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */)) && (!(data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 5232;
}

/*
equation index: 5233
type: SIMPLE_ASSIGN
$whenCondition368 = disconnection.state1.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5233};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[298]] /* $whenCondition368 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */);
  threadData->lastEquationSolved = 5233;
}

/*
equation index: 5234
type: SIMPLE_ASSIGN
goverNordic_g20.Pm0Pu = g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2194]] /* g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5234;
}

/*
equation index: 5235
type: SIMPLE_ASSIGN
$START.goverNordic_g20.PGenPu = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5235};
  ((modelica_real *)((data->modelData->realVarsData[2274] /* goverNordic_g20.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2274] /* goverNordic_g20.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2274].info /* goverNordic_g20.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */));
  threadData->lastEquationSolved = 5235;
}

/*
equation index: 5236
type: SIMPLE_ASSIGN
goverNordic_g20.PGenPu = if g20.running.value then (-trafo_g20_4072.terminal1.V.re) * g20.terminal.i.re - trafo_g20_4072.terminal1.V.im * g20.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5236;
}

/*
equation index: 5237
type: SIMPLE_ASSIGN
goverNordic_g20.perUnitP.y = goverNordic_g20.perUnitP.k * goverNordic_g20.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2290]] /* goverNordic_g20.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* goverNordic_g20.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */));
  threadData->lastEquationSolved = 5237;
}

/*
equation index: 5238
type: SIMPLE_ASSIGN
g20.PGen = if g20.running.value then 100.0 * goverNordic_g20.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1891]] /* g20.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5238;
}

/*
equation index: 5239
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.Y0 = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* goverNordic_g20.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5239;
}

/*
equation index: 5240
type: SIMPLE_ASSIGN
$START.goverNordic_g20.limRateLimFirstOrder.limIntegrator.y = goverNordic_g20.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5240};
  ((modelica_real *)((data->modelData->realVarsData[198] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* goverNordic_g20.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[198] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[198].info /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5240;
}

/*
equation index: 5241
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g20.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* goverNordic_g20.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5241;
}

/*
equation index: 5242
type: SIMPLE_ASSIGN
goverNordic_g20.firstOrder1.y_start = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* goverNordic_g20.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5242;
}

/*
equation index: 5243
type: SIMPLE_ASSIGN
$START.goverNordic_g20.firstOrder1.y = goverNordic_g20.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5243};
  ((modelica_real *)((data->modelData->realVarsData[196] /* goverNordic_g20.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* goverNordic_g20.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[196] /* goverNordic_g20.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[196].info /* goverNordic_g20.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5243;
}

/*
equation index: 5244
type: SIMPLE_ASSIGN
goverNordic_g20.firstOrder1.y = $START.goverNordic_g20.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[196] /* goverNordic_g20.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5244;
}

/*
equation index: 5245
type: SIMPLE_ASSIGN
$DER.goverNordic_g20.firstOrder1.y = (goverNordic_g20.firstOrder1.k * goverNordic_g20.perUnitP.y - goverNordic_g20.firstOrder1.y) / goverNordic_g20.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* der(goverNordic_g20.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* goverNordic_g20.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2290]] /* goverNordic_g20.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* goverNordic_g20.firstOrder1.T PARAM */),"goverNordic_g20.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5245;
}

/*
equation index: 5246
type: SIMPLE_ASSIGN
goverNordic_g20.const.k = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* goverNordic_g20.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5246;
}

/*
equation index: 5247
type: SIMPLE_ASSIGN
goverNordic_g20.dP.y = goverNordic_g20.const.k - goverNordic_g20.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2278]] /* goverNordic_g20.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* goverNordic_g20.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5247;
}

/*
equation index: 5248
type: SIMPLE_ASSIGN
goverNordic_g20.dOmegaPlusDroop.y = goverNordic_g20.dOmegaPlusDroop.k1 * goverNordic_g20.dOmega.y + goverNordic_g20.dOmegaPlusDroop.k2 * goverNordic_g20.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* goverNordic_g20.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2276]] /* goverNordic_g20.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* goverNordic_g20.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2278]] /* goverNordic_g20.dP.y variable */));
  threadData->lastEquationSolved = 5248;
}

/*
equation index: 5249
type: SIMPLE_ASSIGN
goverNordic_g20.govKi.y = goverNordic_g20.govKi.k * goverNordic_g20.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2281]] /* goverNordic_g20.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* goverNordic_g20.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5249;
}

/*
equation index: 5250
type: SIMPLE_ASSIGN
$DER.goverNordic_g20.govInt.y = goverNordic_g20.govInt.k * goverNordic_g20.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* der(goverNordic_g20.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* goverNordic_g20.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2281]] /* goverNordic_g20.govKi.y variable */));
  threadData->lastEquationSolved = 5250;
}

/*
equation index: 5251
type: SIMPLE_ASSIGN
goverNordic_g20.govKp.y = goverNordic_g20.govKp.k * goverNordic_g20.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2282]] /* goverNordic_g20.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* goverNordic_g20.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5251;
}

/*
equation index: 5252
type: SIMPLE_ASSIGN
goverNordic_g20.govInt.y_start = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* goverNordic_g20.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5252;
}

/*
equation index: 5253
type: SIMPLE_ASSIGN
$START.goverNordic_g20.govInt.y = goverNordic_g20.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5253};
  ((modelica_real *)((data->modelData->realVarsData[197] /* goverNordic_g20.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* goverNordic_g20.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* goverNordic_g20.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[197] /* goverNordic_g20.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[197].info /* goverNordic_g20.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* goverNordic_g20.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5253;
}

/*
equation index: 5254
type: SIMPLE_ASSIGN
goverNordic_g20.waterFlow.y_start = goverNordic_g20.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* goverNordic_g20.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* goverNordic_g20.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5254;
}

/*
equation index: 5255
type: SIMPLE_ASSIGN
$START.goverNordic_g20.waterFlow.y = goverNordic_g20.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5255};
  ((modelica_real *)((data->modelData->realVarsData[199] /* goverNordic_g20.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* goverNordic_g20.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[199] /* goverNordic_g20.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[199].info /* goverNordic_g20.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5255;
}

/*
equation index: 5256
type: SIMPLE_ASSIGN
vrNordic_g20.Us0Pu = g20.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5628]] /* vrNordic_g20.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2219]] /* g20.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5256;
}

/*
equation index: 5257
type: SIMPLE_ASSIGN
$START.vrNordic_g20.UsPu = vrNordic_g20.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5257};
  ((modelica_real *)((data->modelData->realVarsData[3903] /* vrNordic_g20.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5628]] /* vrNordic_g20.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3903] /* vrNordic_g20.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3903].info /* vrNordic_g20.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */));
  threadData->lastEquationSolved = 5257;
}

/*
equation index: 5258
type: SIMPLE_ASSIGN
vrNordic_g20.UsPu = if g20.running.value then if g20.uStatorPu.re == 0.0 and g20.uStatorPu.im == 0.0 then 0.0 else (g20.uStatorPu.re ^ 2.0 + g20.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5258};
  modelica_real tmp1447;
  modelica_real tmp1448;
  modelica_real tmp1449;
  modelica_boolean tmp1450;
  modelica_real tmp1451;
  modelica_boolean tmp1452;
  modelica_real tmp1453;
  tmp1452 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1452)
  {
    tmp1450 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) == 0.0));
    if(tmp1450)
    {
      tmp1451 = 0.0;
    }
    else
    {
      tmp1447 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */);
      tmp1448 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */);
      tmp1449 = (tmp1447 * tmp1447) + (tmp1448 * tmp1448);
      if(tmp1449 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1449, 0.5);
      }
      tmp1451 = sqrt(tmp1449);
    }
    tmp1453 = tmp1451;
  }
  else
  {
    tmp1453 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */) = tmp1453;
  threadData->lastEquationSolved = 5258;
}

/*
equation index: 5259
type: SIMPLE_ASSIGN
vrNordic_g20.Ir0Pu = g20.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5623]] /* vrNordic_g20.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2158]] /* g20.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5259;
}

/*
equation index: 5260
type: SIMPLE_ASSIGN
$START.vrNordic_g20.IrPu = vrNordic_g20.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5260};
  ((modelica_real *)((data->modelData->realVarsData[3902] /* vrNordic_g20.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5623]] /* vrNordic_g20.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3902] /* vrNordic_g20.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3902].info /* vrNordic_g20.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */));
  threadData->lastEquationSolved = 5260;
}

/*
equation index: 5261
type: SIMPLE_ASSIGN
vrNordic_g20.IrPu = if g20.running.value then g20.RfPPu * g20.ifPu / (g20.rTfoPu * g20.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* g20.Kuf PARAM */)),"g20.rTfoPu * g20.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5261;
}

/*
equation index: 5262
type: SIMPLE_ASSIGN
vrNordic_g20.dIf.y = vrNordic_g20.IrPu - vrNordic_g20.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5634]] /* vrNordic_g20.const2.k PARAM */);
  threadData->lastEquationSolved = 5262;
}

/*
equation index: 5263
type: SIMPLE_ASSIGN
vrNordic_g20.overExcitationLimitation.y = if vrNordic_g20.dIf.y < -0.1 then -1.0 else if vrNordic_g20.dIf.y < 0.0 then 0.0 else if vrNordic_g20.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g20.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5263};
  modelica_boolean tmp1454;
  modelica_boolean tmp1455;
  modelica_boolean tmp1456;
  modelica_boolean tmp1457;
  modelica_real tmp1458;
  modelica_boolean tmp1459;
  modelica_real tmp1460;
  tmp1454 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */),-0.1);
  tmp1459 = (modelica_boolean)tmp1454;
  if(tmp1459)
  {
    tmp1460 = -1.0;
  }
  else
  {
    tmp1455 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */),0.0);
    tmp1457 = (modelica_boolean)tmp1455;
    if(tmp1457)
    {
      tmp1458 = 0.0;
    }
    else
    {
      tmp1456 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5688]] /* vrNordic_g20.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1458 = (tmp1456?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */));
    }
    tmp1460 = tmp1458;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */) = tmp1460;
  threadData->lastEquationSolved = 5263;
}

/*
equation index: 5264
type: SIMPLE_ASSIGN
vrNordic_g20.gain1.y = vrNordic_g20.gain1.k * vrNordic_g20.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3911]] /* vrNordic_g20.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5640]] /* vrNordic_g20.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */));
  threadData->lastEquationSolved = 5264;
}

/*
equation index: 5265
type: SIMPLE_ASSIGN
vrNordic_g20.Efd0Pu = g20.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5621]] /* vrNordic_g20.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* g20.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5265;
}

/*
equation index: 5266
type: SIMPLE_ASSIGN
$START.vrNordic_g20.limIntegrator.y = vrNordic_g20.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5266};
  ((modelica_real *)((data->modelData->realVarsData[318] /* vrNordic_g20.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5621]] /* vrNordic_g20.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[318] /* vrNordic_g20.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[318].info /* vrNordic_g20.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5266;
}

/*
equation index: 5267
type: SIMPLE_ASSIGN
vrNordic_g20.UsRef0Pu = vrNordic_g20.Efd0Pu / vrNordic_g20.KTgr + vrNordic_g20.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5629]] /* vrNordic_g20.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5621]] /* vrNordic_g20.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5626]] /* vrNordic_g20.KTgr PARAM */),"vrNordic_g20.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5628]] /* vrNordic_g20.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5267;
}

/*
equation index: 5268
type: SIMPLE_ASSIGN
vrNordic_g20.const1.k = vrNordic_g20.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5633]] /* vrNordic_g20.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5629]] /* vrNordic_g20.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5268;
}

/*
equation index: 5269
type: SIMPLE_ASSIGN
vrNordic_g20.dU.y = vrNordic_g20.const1.k - vrNordic_g20.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3907]] /* vrNordic_g20.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5633]] /* vrNordic_g20.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */);
  threadData->lastEquationSolved = 5269;
}

/*
equation index: 5270
type: SIMPLE_ASSIGN
vrNordic_g20.add.y = vrNordic_g20.add.k1 * vrNordic_g20.dU.y + vrNordic_g20.add.k2 * vrNordic_g20.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5630]] /* vrNordic_g20.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3907]] /* vrNordic_g20.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5631]] /* vrNordic_g20.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3921]] /* vrNordic_g20.limiter.y variable */));
  threadData->lastEquationSolved = 5270;
}

/*
equation index: 5271
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.u_start = vrNordic_g20.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5653]] /* vrNordic_g20.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5621]] /* vrNordic_g20.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5271;
}

/*
equation index: 5272
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.Y0 = if vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag.u_start * vrNordic_g20.leadLag.b[2] / vrNordic_g20.leadLag.a_end else if vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5644]] /* vrNordic_g20.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5653]] /* vrNordic_g20.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5649]] /* vrNordic_g20.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */),"vrNordic_g20.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5655]] /* vrNordic_g20.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5272;
}

/*
equation index: 5273
type: SIMPLE_ASSIGN
$START.vrNordic_g20.leadLag.y = vrNordic_g20.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5273};
  ((modelica_real *)((data->modelData->realVarsData[3914] /* vrNordic_g20.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5644]] /* vrNordic_g20.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3914] /* vrNordic_g20.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3914].info /* vrNordic_g20.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */));
  threadData->lastEquationSolved = 5273;
}

/*
equation index: 5274
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.X0[1] = if vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag.u_start / vrNordic_g20.leadLag.a_end else if vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5643]] /* vrNordic_g20.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5653]] /* vrNordic_g20.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */),"vrNordic_g20.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[736]] /* vrNordic_g20.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5654]] /* vrNordic_g20.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5274;
}

/*
equation index: 5275
type: SIMPLE_ASSIGN
$START.vrNordic_g20.leadLag.x_scaled[1] = vrNordic_g20.leadLag.X0[1] * vrNordic_g20.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5275};
  ((modelica_real *)((data->modelData->realVarsData[315] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5643]] /* vrNordic_g20.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[315] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[315].info /* vrNordic_g20.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5275;
}

/*
equation index: 5276
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.x_scaled[1] = $START.vrNordic_g20.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[315] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5276;
}

/*
equation index: 5277
type: SIMPLE_ASSIGN
$START.vrNordic_g20.leadLag.x[1] = vrNordic_g20.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5277};
  ((modelica_real *)((data->modelData->realVarsData[3913] /* vrNordic_g20.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5643]] /* vrNordic_g20.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3913] /* vrNordic_g20.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3913].info /* vrNordic_g20.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5277;
}

/*
equation index: 5278
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.x[1] = vrNordic_g20.leadLag.x_scaled[1] / vrNordic_g20.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */),"vrNordic_g20.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5278;
}

/*
equation index: 5279
type: SIMPLE_ASSIGN
vrNordic_g20.limIntegrator.y_start = vrNordic_g20.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5685]] /* vrNordic_g20.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5621]] /* vrNordic_g20.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5279;
}

/*
equation index: 5280
type: SIMPLE_ASSIGN
goverNordic_g19.Pm0Pu = g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2093]] /* g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5280;
}

/*
equation index: 5281
type: SIMPLE_ASSIGN
$START.goverNordic_g19.PGenPu = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5281};
  ((modelica_real *)((data->modelData->realVarsData[2256] /* goverNordic_g19.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2256] /* goverNordic_g19.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2256].info /* goverNordic_g19.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */));
  threadData->lastEquationSolved = 5281;
}

/*
equation index: 5282
type: SIMPLE_ASSIGN
goverNordic_g19.PGenPu = if g19.running.value then (-g19.terminal.V.re) * g19.terminal.i.re - g19.terminal.V.im * g19.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5282;
}

/*
equation index: 5283
type: SIMPLE_ASSIGN
goverNordic_g19.perUnitP.y = goverNordic_g19.perUnitP.k * goverNordic_g19.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* goverNordic_g19.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* goverNordic_g19.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */));
  threadData->lastEquationSolved = 5283;
}

/*
equation index: 5284
type: SIMPLE_ASSIGN
g19.PGen = if g19.running.value then 100.0 * goverNordic_g19.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* g19.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5284;
}

/*
equation index: 5285
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.Y0 = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* goverNordic_g19.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5285;
}

/*
equation index: 5286
type: SIMPLE_ASSIGN
$START.goverNordic_g19.limRateLimFirstOrder.limIntegrator.y = goverNordic_g19.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5286};
  ((modelica_real *)((data->modelData->realVarsData[194] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* goverNordic_g19.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[194] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[194].info /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5286;
}

/*
equation index: 5287
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g19.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2930]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* goverNordic_g19.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5287;
}

/*
equation index: 5288
type: SIMPLE_ASSIGN
goverNordic_g19.firstOrder1.y_start = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* goverNordic_g19.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5288;
}

/*
equation index: 5289
type: SIMPLE_ASSIGN
$START.goverNordic_g19.firstOrder1.y = goverNordic_g19.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5289};
  ((modelica_real *)((data->modelData->realVarsData[192] /* goverNordic_g19.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* goverNordic_g19.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[192] /* goverNordic_g19.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[192].info /* goverNordic_g19.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5289;
}

/*
equation index: 5290
type: SIMPLE_ASSIGN
goverNordic_g19.firstOrder1.y = $START.goverNordic_g19.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[192] /* goverNordic_g19.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5290;
}

/*
equation index: 5291
type: SIMPLE_ASSIGN
$DER.goverNordic_g19.firstOrder1.y = (goverNordic_g19.firstOrder1.k * goverNordic_g19.perUnitP.y - goverNordic_g19.firstOrder1.y) / goverNordic_g19.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* der(goverNordic_g19.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* goverNordic_g19.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* goverNordic_g19.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* goverNordic_g19.firstOrder1.T PARAM */),"goverNordic_g19.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5291;
}

/*
equation index: 5292
type: SIMPLE_ASSIGN
goverNordic_g19.const.k = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* goverNordic_g19.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5292;
}

/*
equation index: 5293
type: SIMPLE_ASSIGN
goverNordic_g19.dP.y = goverNordic_g19.const.k - goverNordic_g19.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2260]] /* goverNordic_g19.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* goverNordic_g19.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5293;
}

/*
equation index: 5294
type: SIMPLE_ASSIGN
goverNordic_g19.dOmegaPlusDroop.y = goverNordic_g19.dOmegaPlusDroop.k1 * goverNordic_g19.dOmega.y + goverNordic_g19.dOmegaPlusDroop.k2 * goverNordic_g19.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* goverNordic_g19.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2258]] /* goverNordic_g19.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* goverNordic_g19.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2260]] /* goverNordic_g19.dP.y variable */));
  threadData->lastEquationSolved = 5294;
}

/*
equation index: 5295
type: SIMPLE_ASSIGN
goverNordic_g19.govKi.y = goverNordic_g19.govKi.k * goverNordic_g19.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2263]] /* goverNordic_g19.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* goverNordic_g19.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5295;
}

/*
equation index: 5296
type: SIMPLE_ASSIGN
$DER.goverNordic_g19.govInt.y = goverNordic_g19.govInt.k * goverNordic_g19.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* der(goverNordic_g19.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* goverNordic_g19.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2263]] /* goverNordic_g19.govKi.y variable */));
  threadData->lastEquationSolved = 5296;
}

/*
equation index: 5297
type: SIMPLE_ASSIGN
goverNordic_g19.govKp.y = goverNordic_g19.govKp.k * goverNordic_g19.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2264]] /* goverNordic_g19.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* goverNordic_g19.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5297;
}

/*
equation index: 5298
type: SIMPLE_ASSIGN
goverNordic_g19.govInt.y_start = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* goverNordic_g19.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5298;
}

/*
equation index: 5299
type: SIMPLE_ASSIGN
$START.goverNordic_g19.govInt.y = goverNordic_g19.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5299};
  ((modelica_real *)((data->modelData->realVarsData[193] /* goverNordic_g19.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* goverNordic_g19.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* goverNordic_g19.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[193] /* goverNordic_g19.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[193].info /* goverNordic_g19.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* goverNordic_g19.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5299;
}

/*
equation index: 5300
type: SIMPLE_ASSIGN
goverNordic_g19.waterFlow.y_start = goverNordic_g19.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* goverNordic_g19.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* goverNordic_g19.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5300;
}

/*
equation index: 5301
type: SIMPLE_ASSIGN
$START.goverNordic_g19.waterFlow.y = goverNordic_g19.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5301};
  ((modelica_real *)((data->modelData->realVarsData[195] /* goverNordic_g19.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* goverNordic_g19.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[195] /* goverNordic_g19.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[195].info /* goverNordic_g19.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5301;
}

/*
equation index: 5302
type: SIMPLE_ASSIGN
vrNordic_g19.Us0Pu = g19.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5549]] /* vrNordic_g19.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2118]] /* g19.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5302;
}

/*
equation index: 5303
type: SIMPLE_ASSIGN
$START.vrNordic_g19.UsPu = vrNordic_g19.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5303};
  ((modelica_real *)((data->modelData->realVarsData[3879] /* vrNordic_g19.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5549]] /* vrNordic_g19.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3879] /* vrNordic_g19.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3879].info /* vrNordic_g19.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */));
  threadData->lastEquationSolved = 5303;
}

/*
equation index: 5304
type: SIMPLE_ASSIGN
vrNordic_g19.UsPu = if g19.running.value then if g19.uStatorPu.re == 0.0 and g19.uStatorPu.im == 0.0 then 0.0 else (g19.uStatorPu.re ^ 2.0 + g19.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5304};
  modelica_real tmp1461;
  modelica_real tmp1462;
  modelica_real tmp1463;
  modelica_boolean tmp1464;
  modelica_real tmp1465;
  modelica_boolean tmp1466;
  modelica_real tmp1467;
  tmp1466 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1466)
  {
    tmp1464 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) == 0.0));
    if(tmp1464)
    {
      tmp1465 = 0.0;
    }
    else
    {
      tmp1461 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */);
      tmp1462 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */);
      tmp1463 = (tmp1461 * tmp1461) + (tmp1462 * tmp1462);
      if(tmp1463 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1463, 0.5);
      }
      tmp1465 = sqrt(tmp1463);
    }
    tmp1467 = tmp1465;
  }
  else
  {
    tmp1467 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */) = tmp1467;
  threadData->lastEquationSolved = 5304;
}

/*
equation index: 5305
type: SIMPLE_ASSIGN
vrNordic_g19.Ir0Pu = g19.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5544]] /* vrNordic_g19.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2057]] /* g19.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5305;
}

/*
equation index: 5306
type: SIMPLE_ASSIGN
$START.vrNordic_g19.IrPu = vrNordic_g19.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5306};
  ((modelica_real *)((data->modelData->realVarsData[3878] /* vrNordic_g19.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5544]] /* vrNordic_g19.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3878] /* vrNordic_g19.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3878].info /* vrNordic_g19.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */));
  threadData->lastEquationSolved = 5306;
}

/*
equation index: 5307
type: SIMPLE_ASSIGN
vrNordic_g19.IrPu = if g19.running.value then g19.RfPPu * g19.ifPu / (g19.rTfoPu * g19.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* g19.Kuf PARAM */)),"g19.rTfoPu * g19.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5307;
}

/*
equation index: 5308
type: SIMPLE_ASSIGN
vrNordic_g19.dIf.y = vrNordic_g19.IrPu - vrNordic_g19.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5555]] /* vrNordic_g19.const2.k PARAM */);
  threadData->lastEquationSolved = 5308;
}

/*
equation index: 5309
type: SIMPLE_ASSIGN
vrNordic_g19.overExcitationLimitation.y = if vrNordic_g19.dIf.y < -0.1 then -1.0 else if vrNordic_g19.dIf.y < 0.0 then 0.0 else if vrNordic_g19.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g19.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5309};
  modelica_boolean tmp1468;
  modelica_boolean tmp1469;
  modelica_boolean tmp1470;
  modelica_boolean tmp1471;
  modelica_real tmp1472;
  modelica_boolean tmp1473;
  modelica_real tmp1474;
  tmp1468 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */),-0.1);
  tmp1473 = (modelica_boolean)tmp1468;
  if(tmp1473)
  {
    tmp1474 = -1.0;
  }
  else
  {
    tmp1469 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */),0.0);
    tmp1471 = (modelica_boolean)tmp1469;
    if(tmp1471)
    {
      tmp1472 = 0.0;
    }
    else
    {
      tmp1470 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5609]] /* vrNordic_g19.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1472 = (tmp1470?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */));
    }
    tmp1474 = tmp1472;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */) = tmp1474;
  threadData->lastEquationSolved = 5309;
}

/*
equation index: 5310
type: SIMPLE_ASSIGN
vrNordic_g19.gain1.y = vrNordic_g19.gain1.k * vrNordic_g19.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3887]] /* vrNordic_g19.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5561]] /* vrNordic_g19.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */));
  threadData->lastEquationSolved = 5310;
}

/*
equation index: 5311
type: SIMPLE_ASSIGN
vrNordic_g19.Efd0Pu = g19.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5542]] /* vrNordic_g19.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2055]] /* g19.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5311;
}

/*
equation index: 5312
type: SIMPLE_ASSIGN
$START.vrNordic_g19.limIntegrator.y = vrNordic_g19.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5312};
  ((modelica_real *)((data->modelData->realVarsData[312] /* vrNordic_g19.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5542]] /* vrNordic_g19.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[312] /* vrNordic_g19.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[312].info /* vrNordic_g19.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5312;
}

/*
equation index: 5313
type: SIMPLE_ASSIGN
vrNordic_g19.UsRef0Pu = vrNordic_g19.Efd0Pu / vrNordic_g19.KTgr + vrNordic_g19.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5550]] /* vrNordic_g19.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5542]] /* vrNordic_g19.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5547]] /* vrNordic_g19.KTgr PARAM */),"vrNordic_g19.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5549]] /* vrNordic_g19.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5313;
}

/*
equation index: 5314
type: SIMPLE_ASSIGN
vrNordic_g19.const1.k = vrNordic_g19.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5554]] /* vrNordic_g19.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5550]] /* vrNordic_g19.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5314;
}

/*
equation index: 5315
type: SIMPLE_ASSIGN
vrNordic_g19.dU.y = vrNordic_g19.const1.k - vrNordic_g19.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3883]] /* vrNordic_g19.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5554]] /* vrNordic_g19.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */);
  threadData->lastEquationSolved = 5315;
}

/*
equation index: 5316
type: SIMPLE_ASSIGN
vrNordic_g19.add.y = vrNordic_g19.add.k1 * vrNordic_g19.dU.y + vrNordic_g19.add.k2 * vrNordic_g19.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5551]] /* vrNordic_g19.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3883]] /* vrNordic_g19.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5552]] /* vrNordic_g19.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* vrNordic_g19.limiter.y variable */));
  threadData->lastEquationSolved = 5316;
}

/*
equation index: 5317
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.u_start = vrNordic_g19.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5574]] /* vrNordic_g19.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5542]] /* vrNordic_g19.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5317;
}

/*
equation index: 5318
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.Y0 = if vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag.u_start * vrNordic_g19.leadLag.b[2] / vrNordic_g19.leadLag.a_end else if vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5565]] /* vrNordic_g19.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5574]] /* vrNordic_g19.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5570]] /* vrNordic_g19.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */),"vrNordic_g19.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5576]] /* vrNordic_g19.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5318;
}

/*
equation index: 5319
type: SIMPLE_ASSIGN
$START.vrNordic_g19.leadLag.y = vrNordic_g19.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5319};
  ((modelica_real *)((data->modelData->realVarsData[3890] /* vrNordic_g19.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5565]] /* vrNordic_g19.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3890] /* vrNordic_g19.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3890].info /* vrNordic_g19.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */));
  threadData->lastEquationSolved = 5319;
}

/*
equation index: 5320
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.X0[1] = if vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag.u_start / vrNordic_g19.leadLag.a_end else if vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5564]] /* vrNordic_g19.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5574]] /* vrNordic_g19.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */),"vrNordic_g19.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[720]] /* vrNordic_g19.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5575]] /* vrNordic_g19.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5320;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_6(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_4863,
    MyNordic_initialized_TestCase_initialized_eqFunction_4864,
    MyNordic_initialized_TestCase_initialized_eqFunction_4865,
    MyNordic_initialized_TestCase_initialized_eqFunction_4866,
    MyNordic_initialized_TestCase_initialized_eqFunction_4867,
    MyNordic_initialized_TestCase_initialized_eqFunction_4868,
    MyNordic_initialized_TestCase_initialized_eqFunction_4869,
    MyNordic_initialized_TestCase_initialized_eqFunction_4870,
    MyNordic_initialized_TestCase_initialized_eqFunction_4871,
    MyNordic_initialized_TestCase_initialized_eqFunction_4872,
    MyNordic_initialized_TestCase_initialized_eqFunction_4873,
    MyNordic_initialized_TestCase_initialized_eqFunction_4874,
    MyNordic_initialized_TestCase_initialized_eqFunction_4875,
    MyNordic_initialized_TestCase_initialized_eqFunction_4876,
    MyNordic_initialized_TestCase_initialized_eqFunction_4877,
    MyNordic_initialized_TestCase_initialized_eqFunction_4878,
    MyNordic_initialized_TestCase_initialized_eqFunction_4879,
    MyNordic_initialized_TestCase_initialized_eqFunction_4880,
    MyNordic_initialized_TestCase_initialized_eqFunction_4881,
    MyNordic_initialized_TestCase_initialized_eqFunction_4882,
    MyNordic_initialized_TestCase_initialized_eqFunction_4883,
    MyNordic_initialized_TestCase_initialized_eqFunction_4884,
    MyNordic_initialized_TestCase_initialized_eqFunction_4885,
    MyNordic_initialized_TestCase_initialized_eqFunction_4886,
    MyNordic_initialized_TestCase_initialized_eqFunction_4887,
    MyNordic_initialized_TestCase_initialized_eqFunction_4888,
    MyNordic_initialized_TestCase_initialized_eqFunction_4889,
    MyNordic_initialized_TestCase_initialized_eqFunction_4890,
    MyNordic_initialized_TestCase_initialized_eqFunction_4891,
    MyNordic_initialized_TestCase_initialized_eqFunction_4892,
    MyNordic_initialized_TestCase_initialized_eqFunction_4893,
    MyNordic_initialized_TestCase_initialized_eqFunction_4894,
    MyNordic_initialized_TestCase_initialized_eqFunction_4895,
    MyNordic_initialized_TestCase_initialized_eqFunction_4896,
    MyNordic_initialized_TestCase_initialized_eqFunction_4897,
    MyNordic_initialized_TestCase_initialized_eqFunction_4898,
    MyNordic_initialized_TestCase_initialized_eqFunction_4899,
    MyNordic_initialized_TestCase_initialized_eqFunction_4900,
    MyNordic_initialized_TestCase_initialized_eqFunction_4901,
    MyNordic_initialized_TestCase_initialized_eqFunction_4902,
    MyNordic_initialized_TestCase_initialized_eqFunction_4903,
    MyNordic_initialized_TestCase_initialized_eqFunction_4904,
    MyNordic_initialized_TestCase_initialized_eqFunction_4905,
    MyNordic_initialized_TestCase_initialized_eqFunction_4906,
    MyNordic_initialized_TestCase_initialized_eqFunction_4907,
    MyNordic_initialized_TestCase_initialized_eqFunction_4908,
    MyNordic_initialized_TestCase_initialized_eqFunction_4909,
    MyNordic_initialized_TestCase_initialized_eqFunction_4910,
    MyNordic_initialized_TestCase_initialized_eqFunction_4911,
    MyNordic_initialized_TestCase_initialized_eqFunction_4912,
    MyNordic_initialized_TestCase_initialized_eqFunction_4913,
    MyNordic_initialized_TestCase_initialized_eqFunction_4914,
    MyNordic_initialized_TestCase_initialized_eqFunction_4915,
    MyNordic_initialized_TestCase_initialized_eqFunction_4916,
    MyNordic_initialized_TestCase_initialized_eqFunction_4917,
    MyNordic_initialized_TestCase_initialized_eqFunction_4918,
    MyNordic_initialized_TestCase_initialized_eqFunction_4919,
    MyNordic_initialized_TestCase_initialized_eqFunction_4920,
    MyNordic_initialized_TestCase_initialized_eqFunction_4921,
    MyNordic_initialized_TestCase_initialized_eqFunction_4922,
    MyNordic_initialized_TestCase_initialized_eqFunction_4923,
    MyNordic_initialized_TestCase_initialized_eqFunction_4924,
    MyNordic_initialized_TestCase_initialized_eqFunction_4925,
    MyNordic_initialized_TestCase_initialized_eqFunction_4926,
    MyNordic_initialized_TestCase_initialized_eqFunction_4927,
    MyNordic_initialized_TestCase_initialized_eqFunction_4928,
    MyNordic_initialized_TestCase_initialized_eqFunction_4929,
    MyNordic_initialized_TestCase_initialized_eqFunction_4930,
    MyNordic_initialized_TestCase_initialized_eqFunction_4931,
    MyNordic_initialized_TestCase_initialized_eqFunction_4932,
    MyNordic_initialized_TestCase_initialized_eqFunction_4933,
    MyNordic_initialized_TestCase_initialized_eqFunction_4934,
    MyNordic_initialized_TestCase_initialized_eqFunction_4935,
    MyNordic_initialized_TestCase_initialized_eqFunction_4936,
    MyNordic_initialized_TestCase_initialized_eqFunction_4937,
    MyNordic_initialized_TestCase_initialized_eqFunction_4938,
    MyNordic_initialized_TestCase_initialized_eqFunction_4939,
    MyNordic_initialized_TestCase_initialized_eqFunction_4940,
    MyNordic_initialized_TestCase_initialized_eqFunction_4941,
    MyNordic_initialized_TestCase_initialized_eqFunction_4942,
    MyNordic_initialized_TestCase_initialized_eqFunction_4943,
    MyNordic_initialized_TestCase_initialized_eqFunction_4944,
    MyNordic_initialized_TestCase_initialized_eqFunction_4945,
    MyNordic_initialized_TestCase_initialized_eqFunction_4946,
    MyNordic_initialized_TestCase_initialized_eqFunction_4947,
    MyNordic_initialized_TestCase_initialized_eqFunction_4948,
    MyNordic_initialized_TestCase_initialized_eqFunction_4949,
    MyNordic_initialized_TestCase_initialized_eqFunction_4950,
    MyNordic_initialized_TestCase_initialized_eqFunction_4951,
    MyNordic_initialized_TestCase_initialized_eqFunction_4952,
    MyNordic_initialized_TestCase_initialized_eqFunction_4953,
    MyNordic_initialized_TestCase_initialized_eqFunction_4954,
    MyNordic_initialized_TestCase_initialized_eqFunction_4955,
    MyNordic_initialized_TestCase_initialized_eqFunction_4956,
    MyNordic_initialized_TestCase_initialized_eqFunction_4957,
    MyNordic_initialized_TestCase_initialized_eqFunction_4958,
    MyNordic_initialized_TestCase_initialized_eqFunction_4959,
    MyNordic_initialized_TestCase_initialized_eqFunction_4960,
    MyNordic_initialized_TestCase_initialized_eqFunction_4961,
    MyNordic_initialized_TestCase_initialized_eqFunction_4962,
    MyNordic_initialized_TestCase_initialized_eqFunction_4963,
    MyNordic_initialized_TestCase_initialized_eqFunction_4964,
    MyNordic_initialized_TestCase_initialized_eqFunction_4965,
    MyNordic_initialized_TestCase_initialized_eqFunction_4966,
    MyNordic_initialized_TestCase_initialized_eqFunction_4967,
    MyNordic_initialized_TestCase_initialized_eqFunction_4968,
    MyNordic_initialized_TestCase_initialized_eqFunction_4969,
    MyNordic_initialized_TestCase_initialized_eqFunction_4970,
    MyNordic_initialized_TestCase_initialized_eqFunction_4971,
    MyNordic_initialized_TestCase_initialized_eqFunction_4972,
    MyNordic_initialized_TestCase_initialized_eqFunction_4973,
    MyNordic_initialized_TestCase_initialized_eqFunction_4974,
    MyNordic_initialized_TestCase_initialized_eqFunction_4975,
    MyNordic_initialized_TestCase_initialized_eqFunction_4976,
    MyNordic_initialized_TestCase_initialized_eqFunction_4977,
    MyNordic_initialized_TestCase_initialized_eqFunction_4978,
    MyNordic_initialized_TestCase_initialized_eqFunction_4979,
    MyNordic_initialized_TestCase_initialized_eqFunction_4980,
    MyNordic_initialized_TestCase_initialized_eqFunction_4981,
    MyNordic_initialized_TestCase_initialized_eqFunction_4982,
    MyNordic_initialized_TestCase_initialized_eqFunction_4983,
    MyNordic_initialized_TestCase_initialized_eqFunction_4984,
    MyNordic_initialized_TestCase_initialized_eqFunction_4985,
    MyNordic_initialized_TestCase_initialized_eqFunction_4986,
    MyNordic_initialized_TestCase_initialized_eqFunction_4987,
    MyNordic_initialized_TestCase_initialized_eqFunction_4988,
    MyNordic_initialized_TestCase_initialized_eqFunction_4989,
    MyNordic_initialized_TestCase_initialized_eqFunction_4990,
    MyNordic_initialized_TestCase_initialized_eqFunction_4991,
    MyNordic_initialized_TestCase_initialized_eqFunction_4992,
    MyNordic_initialized_TestCase_initialized_eqFunction_4993,
    MyNordic_initialized_TestCase_initialized_eqFunction_4994,
    MyNordic_initialized_TestCase_initialized_eqFunction_4995,
    MyNordic_initialized_TestCase_initialized_eqFunction_4996,
    MyNordic_initialized_TestCase_initialized_eqFunction_4997,
    MyNordic_initialized_TestCase_initialized_eqFunction_4998,
    MyNordic_initialized_TestCase_initialized_eqFunction_4999,
    MyNordic_initialized_TestCase_initialized_eqFunction_5000,
    MyNordic_initialized_TestCase_initialized_eqFunction_5001,
    MyNordic_initialized_TestCase_initialized_eqFunction_5002,
    MyNordic_initialized_TestCase_initialized_eqFunction_5003,
    MyNordic_initialized_TestCase_initialized_eqFunction_5004,
    MyNordic_initialized_TestCase_initialized_eqFunction_5005,
    MyNordic_initialized_TestCase_initialized_eqFunction_5006,
    MyNordic_initialized_TestCase_initialized_eqFunction_5007,
    MyNordic_initialized_TestCase_initialized_eqFunction_5008,
    MyNordic_initialized_TestCase_initialized_eqFunction_5009,
    MyNordic_initialized_TestCase_initialized_eqFunction_5010,
    MyNordic_initialized_TestCase_initialized_eqFunction_5011,
    MyNordic_initialized_TestCase_initialized_eqFunction_5012,
    MyNordic_initialized_TestCase_initialized_eqFunction_5013,
    MyNordic_initialized_TestCase_initialized_eqFunction_5014,
    MyNordic_initialized_TestCase_initialized_eqFunction_5015,
    MyNordic_initialized_TestCase_initialized_eqFunction_5016,
    MyNordic_initialized_TestCase_initialized_eqFunction_5017,
    MyNordic_initialized_TestCase_initialized_eqFunction_5018,
    MyNordic_initialized_TestCase_initialized_eqFunction_5019,
    MyNordic_initialized_TestCase_initialized_eqFunction_5020,
    MyNordic_initialized_TestCase_initialized_eqFunction_5021,
    MyNordic_initialized_TestCase_initialized_eqFunction_5022,
    MyNordic_initialized_TestCase_initialized_eqFunction_5023,
    MyNordic_initialized_TestCase_initialized_eqFunction_5024,
    MyNordic_initialized_TestCase_initialized_eqFunction_5025,
    MyNordic_initialized_TestCase_initialized_eqFunction_5026,
    MyNordic_initialized_TestCase_initialized_eqFunction_5027,
    MyNordic_initialized_TestCase_initialized_eqFunction_5028,
    MyNordic_initialized_TestCase_initialized_eqFunction_5029,
    MyNordic_initialized_TestCase_initialized_eqFunction_5030,
    MyNordic_initialized_TestCase_initialized_eqFunction_5031,
    MyNordic_initialized_TestCase_initialized_eqFunction_5032,
    MyNordic_initialized_TestCase_initialized_eqFunction_5033,
    MyNordic_initialized_TestCase_initialized_eqFunction_5034,
    MyNordic_initialized_TestCase_initialized_eqFunction_5035,
    MyNordic_initialized_TestCase_initialized_eqFunction_5036,
    MyNordic_initialized_TestCase_initialized_eqFunction_5037,
    MyNordic_initialized_TestCase_initialized_eqFunction_5038,
    MyNordic_initialized_TestCase_initialized_eqFunction_5039,
    MyNordic_initialized_TestCase_initialized_eqFunction_5040,
    MyNordic_initialized_TestCase_initialized_eqFunction_5041,
    MyNordic_initialized_TestCase_initialized_eqFunction_5042,
    MyNordic_initialized_TestCase_initialized_eqFunction_5043,
    MyNordic_initialized_TestCase_initialized_eqFunction_5044,
    MyNordic_initialized_TestCase_initialized_eqFunction_5045,
    MyNordic_initialized_TestCase_initialized_eqFunction_5046,
    MyNordic_initialized_TestCase_initialized_eqFunction_5047,
    MyNordic_initialized_TestCase_initialized_eqFunction_5048,
    MyNordic_initialized_TestCase_initialized_eqFunction_5049,
    MyNordic_initialized_TestCase_initialized_eqFunction_5050,
    MyNordic_initialized_TestCase_initialized_eqFunction_5051,
    MyNordic_initialized_TestCase_initialized_eqFunction_5052,
    MyNordic_initialized_TestCase_initialized_eqFunction_5053,
    MyNordic_initialized_TestCase_initialized_eqFunction_5054,
    MyNordic_initialized_TestCase_initialized_eqFunction_5055,
    MyNordic_initialized_TestCase_initialized_eqFunction_5056,
    MyNordic_initialized_TestCase_initialized_eqFunction_5057,
    MyNordic_initialized_TestCase_initialized_eqFunction_5058,
    MyNordic_initialized_TestCase_initialized_eqFunction_5059,
    MyNordic_initialized_TestCase_initialized_eqFunction_5060,
    MyNordic_initialized_TestCase_initialized_eqFunction_5061,
    MyNordic_initialized_TestCase_initialized_eqFunction_5062,
    MyNordic_initialized_TestCase_initialized_eqFunction_5063,
    MyNordic_initialized_TestCase_initialized_eqFunction_5064,
    MyNordic_initialized_TestCase_initialized_eqFunction_5065,
    MyNordic_initialized_TestCase_initialized_eqFunction_5066,
    MyNordic_initialized_TestCase_initialized_eqFunction_5067,
    MyNordic_initialized_TestCase_initialized_eqFunction_5068,
    MyNordic_initialized_TestCase_initialized_eqFunction_5069,
    MyNordic_initialized_TestCase_initialized_eqFunction_5070,
    MyNordic_initialized_TestCase_initialized_eqFunction_5071,
    MyNordic_initialized_TestCase_initialized_eqFunction_5072,
    MyNordic_initialized_TestCase_initialized_eqFunction_5073,
    MyNordic_initialized_TestCase_initialized_eqFunction_5074,
    MyNordic_initialized_TestCase_initialized_eqFunction_5075,
    MyNordic_initialized_TestCase_initialized_eqFunction_5076,
    MyNordic_initialized_TestCase_initialized_eqFunction_5077,
    MyNordic_initialized_TestCase_initialized_eqFunction_5078,
    MyNordic_initialized_TestCase_initialized_eqFunction_5079,
    MyNordic_initialized_TestCase_initialized_eqFunction_5080,
    MyNordic_initialized_TestCase_initialized_eqFunction_5081,
    MyNordic_initialized_TestCase_initialized_eqFunction_5082,
    MyNordic_initialized_TestCase_initialized_eqFunction_5083,
    MyNordic_initialized_TestCase_initialized_eqFunction_5084,
    MyNordic_initialized_TestCase_initialized_eqFunction_5085,
    MyNordic_initialized_TestCase_initialized_eqFunction_5086,
    MyNordic_initialized_TestCase_initialized_eqFunction_5087,
    MyNordic_initialized_TestCase_initialized_eqFunction_5088,
    MyNordic_initialized_TestCase_initialized_eqFunction_5089,
    MyNordic_initialized_TestCase_initialized_eqFunction_5090,
    MyNordic_initialized_TestCase_initialized_eqFunction_5091,
    MyNordic_initialized_TestCase_initialized_eqFunction_5092,
    MyNordic_initialized_TestCase_initialized_eqFunction_5093,
    MyNordic_initialized_TestCase_initialized_eqFunction_5094,
    MyNordic_initialized_TestCase_initialized_eqFunction_5095,
    MyNordic_initialized_TestCase_initialized_eqFunction_5096,
    MyNordic_initialized_TestCase_initialized_eqFunction_5097,
    MyNordic_initialized_TestCase_initialized_eqFunction_5098,
    MyNordic_initialized_TestCase_initialized_eqFunction_5099,
    MyNordic_initialized_TestCase_initialized_eqFunction_5100,
    MyNordic_initialized_TestCase_initialized_eqFunction_5101,
    MyNordic_initialized_TestCase_initialized_eqFunction_5102,
    MyNordic_initialized_TestCase_initialized_eqFunction_5103,
    MyNordic_initialized_TestCase_initialized_eqFunction_5104,
    MyNordic_initialized_TestCase_initialized_eqFunction_5105,
    MyNordic_initialized_TestCase_initialized_eqFunction_5106,
    MyNordic_initialized_TestCase_initialized_eqFunction_5107,
    MyNordic_initialized_TestCase_initialized_eqFunction_5108,
    MyNordic_initialized_TestCase_initialized_eqFunction_5109,
    MyNordic_initialized_TestCase_initialized_eqFunction_5110,
    MyNordic_initialized_TestCase_initialized_eqFunction_5111,
    MyNordic_initialized_TestCase_initialized_eqFunction_5112,
    MyNordic_initialized_TestCase_initialized_eqFunction_5113,
    MyNordic_initialized_TestCase_initialized_eqFunction_5114,
    MyNordic_initialized_TestCase_initialized_eqFunction_5115,
    MyNordic_initialized_TestCase_initialized_eqFunction_5116,
    MyNordic_initialized_TestCase_initialized_eqFunction_5117,
    MyNordic_initialized_TestCase_initialized_eqFunction_5118,
    MyNordic_initialized_TestCase_initialized_eqFunction_5119,
    MyNordic_initialized_TestCase_initialized_eqFunction_5120,
    MyNordic_initialized_TestCase_initialized_eqFunction_5121,
    MyNordic_initialized_TestCase_initialized_eqFunction_5122,
    MyNordic_initialized_TestCase_initialized_eqFunction_5123,
    MyNordic_initialized_TestCase_initialized_eqFunction_5124,
    MyNordic_initialized_TestCase_initialized_eqFunction_5125,
    MyNordic_initialized_TestCase_initialized_eqFunction_5126,
    MyNordic_initialized_TestCase_initialized_eqFunction_5127,
    MyNordic_initialized_TestCase_initialized_eqFunction_5128,
    MyNordic_initialized_TestCase_initialized_eqFunction_5129,
    MyNordic_initialized_TestCase_initialized_eqFunction_5130,
    MyNordic_initialized_TestCase_initialized_eqFunction_5131,
    MyNordic_initialized_TestCase_initialized_eqFunction_5132,
    MyNordic_initialized_TestCase_initialized_eqFunction_5133,
    MyNordic_initialized_TestCase_initialized_eqFunction_5134,
    MyNordic_initialized_TestCase_initialized_eqFunction_5135,
    MyNordic_initialized_TestCase_initialized_eqFunction_5136,
    MyNordic_initialized_TestCase_initialized_eqFunction_5137,
    MyNordic_initialized_TestCase_initialized_eqFunction_5138,
    MyNordic_initialized_TestCase_initialized_eqFunction_5139,
    MyNordic_initialized_TestCase_initialized_eqFunction_5140,
    MyNordic_initialized_TestCase_initialized_eqFunction_5141,
    MyNordic_initialized_TestCase_initialized_eqFunction_5142,
    MyNordic_initialized_TestCase_initialized_eqFunction_5143,
    MyNordic_initialized_TestCase_initialized_eqFunction_5144,
    MyNordic_initialized_TestCase_initialized_eqFunction_5145,
    MyNordic_initialized_TestCase_initialized_eqFunction_5146,
    MyNordic_initialized_TestCase_initialized_eqFunction_5147,
    MyNordic_initialized_TestCase_initialized_eqFunction_5148,
    MyNordic_initialized_TestCase_initialized_eqFunction_5149,
    MyNordic_initialized_TestCase_initialized_eqFunction_5150,
    MyNordic_initialized_TestCase_initialized_eqFunction_5151,
    MyNordic_initialized_TestCase_initialized_eqFunction_5152,
    MyNordic_initialized_TestCase_initialized_eqFunction_5153,
    MyNordic_initialized_TestCase_initialized_eqFunction_5154,
    MyNordic_initialized_TestCase_initialized_eqFunction_5155,
    MyNordic_initialized_TestCase_initialized_eqFunction_5156,
    MyNordic_initialized_TestCase_initialized_eqFunction_5157,
    MyNordic_initialized_TestCase_initialized_eqFunction_5158,
    MyNordic_initialized_TestCase_initialized_eqFunction_5159,
    MyNordic_initialized_TestCase_initialized_eqFunction_5160,
    MyNordic_initialized_TestCase_initialized_eqFunction_5161,
    MyNordic_initialized_TestCase_initialized_eqFunction_5162,
    MyNordic_initialized_TestCase_initialized_eqFunction_5163,
    MyNordic_initialized_TestCase_initialized_eqFunction_5164,
    MyNordic_initialized_TestCase_initialized_eqFunction_5165,
    MyNordic_initialized_TestCase_initialized_eqFunction_5166,
    MyNordic_initialized_TestCase_initialized_eqFunction_5167,
    MyNordic_initialized_TestCase_initialized_eqFunction_5168,
    MyNordic_initialized_TestCase_initialized_eqFunction_5169,
    MyNordic_initialized_TestCase_initialized_eqFunction_5170,
    MyNordic_initialized_TestCase_initialized_eqFunction_5171,
    MyNordic_initialized_TestCase_initialized_eqFunction_5172,
    MyNordic_initialized_TestCase_initialized_eqFunction_5173,
    MyNordic_initialized_TestCase_initialized_eqFunction_5174,
    MyNordic_initialized_TestCase_initialized_eqFunction_5175,
    MyNordic_initialized_TestCase_initialized_eqFunction_5176,
    MyNordic_initialized_TestCase_initialized_eqFunction_5177,
    MyNordic_initialized_TestCase_initialized_eqFunction_5178,
    MyNordic_initialized_TestCase_initialized_eqFunction_5179,
    MyNordic_initialized_TestCase_initialized_eqFunction_5180,
    MyNordic_initialized_TestCase_initialized_eqFunction_5181,
    MyNordic_initialized_TestCase_initialized_eqFunction_5182,
    MyNordic_initialized_TestCase_initialized_eqFunction_5183,
    MyNordic_initialized_TestCase_initialized_eqFunction_5184,
    MyNordic_initialized_TestCase_initialized_eqFunction_5185,
    MyNordic_initialized_TestCase_initialized_eqFunction_5186,
    MyNordic_initialized_TestCase_initialized_eqFunction_5187,
    MyNordic_initialized_TestCase_initialized_eqFunction_5188,
    MyNordic_initialized_TestCase_initialized_eqFunction_5189,
    MyNordic_initialized_TestCase_initialized_eqFunction_5190,
    MyNordic_initialized_TestCase_initialized_eqFunction_5191,
    MyNordic_initialized_TestCase_initialized_eqFunction_5192,
    MyNordic_initialized_TestCase_initialized_eqFunction_5193,
    MyNordic_initialized_TestCase_initialized_eqFunction_5194,
    MyNordic_initialized_TestCase_initialized_eqFunction_5195,
    MyNordic_initialized_TestCase_initialized_eqFunction_5196,
    MyNordic_initialized_TestCase_initialized_eqFunction_5197,
    MyNordic_initialized_TestCase_initialized_eqFunction_5198,
    MyNordic_initialized_TestCase_initialized_eqFunction_5199,
    MyNordic_initialized_TestCase_initialized_eqFunction_5200,
    MyNordic_initialized_TestCase_initialized_eqFunction_5201,
    MyNordic_initialized_TestCase_initialized_eqFunction_5202,
    MyNordic_initialized_TestCase_initialized_eqFunction_5203,
    MyNordic_initialized_TestCase_initialized_eqFunction_5204,
    MyNordic_initialized_TestCase_initialized_eqFunction_5205,
    MyNordic_initialized_TestCase_initialized_eqFunction_5206,
    MyNordic_initialized_TestCase_initialized_eqFunction_5207,
    MyNordic_initialized_TestCase_initialized_eqFunction_5208,
    MyNordic_initialized_TestCase_initialized_eqFunction_5209,
    MyNordic_initialized_TestCase_initialized_eqFunction_5210,
    MyNordic_initialized_TestCase_initialized_eqFunction_5211,
    MyNordic_initialized_TestCase_initialized_eqFunction_5212,
    MyNordic_initialized_TestCase_initialized_eqFunction_5213,
    MyNordic_initialized_TestCase_initialized_eqFunction_5214,
    MyNordic_initialized_TestCase_initialized_eqFunction_5215,
    MyNordic_initialized_TestCase_initialized_eqFunction_5216,
    MyNordic_initialized_TestCase_initialized_eqFunction_5217,
    MyNordic_initialized_TestCase_initialized_eqFunction_5218,
    MyNordic_initialized_TestCase_initialized_eqFunction_5219,
    MyNordic_initialized_TestCase_initialized_eqFunction_5220,
    MyNordic_initialized_TestCase_initialized_eqFunction_5221,
    MyNordic_initialized_TestCase_initialized_eqFunction_5222,
    MyNordic_initialized_TestCase_initialized_eqFunction_5223,
    MyNordic_initialized_TestCase_initialized_eqFunction_5224,
    MyNordic_initialized_TestCase_initialized_eqFunction_5225,
    MyNordic_initialized_TestCase_initialized_eqFunction_5226,
    MyNordic_initialized_TestCase_initialized_eqFunction_5227,
    MyNordic_initialized_TestCase_initialized_eqFunction_5228,
    MyNordic_initialized_TestCase_initialized_eqFunction_5229,
    MyNordic_initialized_TestCase_initialized_eqFunction_5230,
    MyNordic_initialized_TestCase_initialized_eqFunction_5231,
    MyNordic_initialized_TestCase_initialized_eqFunction_5232,
    MyNordic_initialized_TestCase_initialized_eqFunction_5233,
    MyNordic_initialized_TestCase_initialized_eqFunction_5234,
    MyNordic_initialized_TestCase_initialized_eqFunction_5235,
    MyNordic_initialized_TestCase_initialized_eqFunction_5236,
    MyNordic_initialized_TestCase_initialized_eqFunction_5237,
    MyNordic_initialized_TestCase_initialized_eqFunction_5238,
    MyNordic_initialized_TestCase_initialized_eqFunction_5239,
    MyNordic_initialized_TestCase_initialized_eqFunction_5240,
    MyNordic_initialized_TestCase_initialized_eqFunction_5241,
    MyNordic_initialized_TestCase_initialized_eqFunction_5242,
    MyNordic_initialized_TestCase_initialized_eqFunction_5243,
    MyNordic_initialized_TestCase_initialized_eqFunction_5244,
    MyNordic_initialized_TestCase_initialized_eqFunction_5245,
    MyNordic_initialized_TestCase_initialized_eqFunction_5246,
    MyNordic_initialized_TestCase_initialized_eqFunction_5247,
    MyNordic_initialized_TestCase_initialized_eqFunction_5248,
    MyNordic_initialized_TestCase_initialized_eqFunction_5249,
    MyNordic_initialized_TestCase_initialized_eqFunction_5250,
    MyNordic_initialized_TestCase_initialized_eqFunction_5251,
    MyNordic_initialized_TestCase_initialized_eqFunction_5252,
    MyNordic_initialized_TestCase_initialized_eqFunction_5253,
    MyNordic_initialized_TestCase_initialized_eqFunction_5254,
    MyNordic_initialized_TestCase_initialized_eqFunction_5255,
    MyNordic_initialized_TestCase_initialized_eqFunction_5256,
    MyNordic_initialized_TestCase_initialized_eqFunction_5257,
    MyNordic_initialized_TestCase_initialized_eqFunction_5258,
    MyNordic_initialized_TestCase_initialized_eqFunction_5259,
    MyNordic_initialized_TestCase_initialized_eqFunction_5260,
    MyNordic_initialized_TestCase_initialized_eqFunction_5261,
    MyNordic_initialized_TestCase_initialized_eqFunction_5262,
    MyNordic_initialized_TestCase_initialized_eqFunction_5263,
    MyNordic_initialized_TestCase_initialized_eqFunction_5264,
    MyNordic_initialized_TestCase_initialized_eqFunction_5265,
    MyNordic_initialized_TestCase_initialized_eqFunction_5266,
    MyNordic_initialized_TestCase_initialized_eqFunction_5267,
    MyNordic_initialized_TestCase_initialized_eqFunction_5268,
    MyNordic_initialized_TestCase_initialized_eqFunction_5269,
    MyNordic_initialized_TestCase_initialized_eqFunction_5270,
    MyNordic_initialized_TestCase_initialized_eqFunction_5271,
    MyNordic_initialized_TestCase_initialized_eqFunction_5272,
    MyNordic_initialized_TestCase_initialized_eqFunction_5273,
    MyNordic_initialized_TestCase_initialized_eqFunction_5274,
    MyNordic_initialized_TestCase_initialized_eqFunction_5275,
    MyNordic_initialized_TestCase_initialized_eqFunction_5276,
    MyNordic_initialized_TestCase_initialized_eqFunction_5277,
    MyNordic_initialized_TestCase_initialized_eqFunction_5278,
    MyNordic_initialized_TestCase_initialized_eqFunction_5279,
    MyNordic_initialized_TestCase_initialized_eqFunction_5280,
    MyNordic_initialized_TestCase_initialized_eqFunction_5281,
    MyNordic_initialized_TestCase_initialized_eqFunction_5282,
    MyNordic_initialized_TestCase_initialized_eqFunction_5283,
    MyNordic_initialized_TestCase_initialized_eqFunction_5284,
    MyNordic_initialized_TestCase_initialized_eqFunction_5285,
    MyNordic_initialized_TestCase_initialized_eqFunction_5286,
    MyNordic_initialized_TestCase_initialized_eqFunction_5287,
    MyNordic_initialized_TestCase_initialized_eqFunction_5288,
    MyNordic_initialized_TestCase_initialized_eqFunction_5289,
    MyNordic_initialized_TestCase_initialized_eqFunction_5290,
    MyNordic_initialized_TestCase_initialized_eqFunction_5291,
    MyNordic_initialized_TestCase_initialized_eqFunction_5292,
    MyNordic_initialized_TestCase_initialized_eqFunction_5293,
    MyNordic_initialized_TestCase_initialized_eqFunction_5294,
    MyNordic_initialized_TestCase_initialized_eqFunction_5295,
    MyNordic_initialized_TestCase_initialized_eqFunction_5296,
    MyNordic_initialized_TestCase_initialized_eqFunction_5297,
    MyNordic_initialized_TestCase_initialized_eqFunction_5298,
    MyNordic_initialized_TestCase_initialized_eqFunction_5299,
    MyNordic_initialized_TestCase_initialized_eqFunction_5300,
    MyNordic_initialized_TestCase_initialized_eqFunction_5301,
    MyNordic_initialized_TestCase_initialized_eqFunction_5302,
    MyNordic_initialized_TestCase_initialized_eqFunction_5303,
    MyNordic_initialized_TestCase_initialized_eqFunction_5304,
    MyNordic_initialized_TestCase_initialized_eqFunction_5305,
    MyNordic_initialized_TestCase_initialized_eqFunction_5306,
    MyNordic_initialized_TestCase_initialized_eqFunction_5307,
    MyNordic_initialized_TestCase_initialized_eqFunction_5308,
    MyNordic_initialized_TestCase_initialized_eqFunction_5309,
    MyNordic_initialized_TestCase_initialized_eqFunction_5310,
    MyNordic_initialized_TestCase_initialized_eqFunction_5311,
    MyNordic_initialized_TestCase_initialized_eqFunction_5312,
    MyNordic_initialized_TestCase_initialized_eqFunction_5313,
    MyNordic_initialized_TestCase_initialized_eqFunction_5314,
    MyNordic_initialized_TestCase_initialized_eqFunction_5315,
    MyNordic_initialized_TestCase_initialized_eqFunction_5316,
    MyNordic_initialized_TestCase_initialized_eqFunction_5317,
    MyNordic_initialized_TestCase_initialized_eqFunction_5318,
    MyNordic_initialized_TestCase_initialized_eqFunction_5319,
    MyNordic_initialized_TestCase_initialized_eqFunction_5320
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif