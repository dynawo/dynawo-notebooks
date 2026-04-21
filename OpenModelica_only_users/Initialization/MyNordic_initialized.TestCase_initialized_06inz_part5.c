#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4405
type: SIMPLE_ASSIGN
trafo_42_4042.P1Pu = load_42.terminal.V.re * trafo_42_4042.terminal1.i.re + load_42.terminal.V.im * trafo_42_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* trafo_42_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4405;
}

/*
equation index: 4406
type: SIMPLE_ASSIGN
load_42.UPu.value = if load_42.running.value then (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4406};
  modelica_real tmp488;
  modelica_real tmp489;
  modelica_real tmp490;
  modelica_boolean tmp491;
  modelica_real tmp492;
  tmp491 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */);
  if(tmp491)
  {
    tmp488 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
    tmp489 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
    tmp490 = (tmp488 * tmp488) + (tmp489 * tmp489);
    if(tmp490 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp490, 0.5);
    }
    tmp492 = sqrt(tmp490);
  }
  else
  {
    tmp492 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2858]] /* load_42.UPu.value variable */) = tmp492;
  threadData->lastEquationSolved = 4406;
}

/*
equation index: 4407
type: SIMPLE_ASSIGN
bus_B42.UPhase = Modelica.Math.atan3(load_42.terminal.V.im, load_42.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* bus_B42.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4407;
}

/*
equation index: 4408
type: SIMPLE_ASSIGN
bus_B42.UPu = if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4408};
  modelica_real tmp493;
  modelica_real tmp494;
  modelica_real tmp495;
  modelica_boolean tmp496;
  modelica_real tmp497;
  tmp496 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
  if(tmp496)
  {
    tmp497 = 0.0;
  }
  else
  {
    tmp493 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
    tmp494 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
    tmp495 = (tmp493 * tmp493) + (tmp494 * tmp494);
    if(tmp495 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp495, 0.5);
    }
    tmp497 = sqrt(tmp495);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* bus_B42.UPu variable */) = tmp497;
  threadData->lastEquationSolved = 4408;
}

/*
equation index: 4409
type: SIMPLE_ASSIGN
bus_B42.U = bus_B42.UPu * bus_B42.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* bus_B42.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* bus_B42.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* bus_B42.UNom PARAM */));
  threadData->lastEquationSolved = 4409;
}

/*
equation index: 4410
type: SIMPLE_ASSIGN
trafo_42_4042.Q2Pu = line_4042_4043.terminal1.V.im * trafo_42_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * trafo_42_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* trafo_42_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4410;
}

/*
equation index: 4411
type: SIMPLE_ASSIGN
trafo_42_4042.P2Pu = line_4042_4043.terminal1.V.re * trafo_42_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * trafo_42_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* trafo_42_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4411;
}

/*
equation index: 4412
type: SIMPLE_ASSIGN
trafo_g11_4021.U2Pu = if trafo_g11_4021.running.value then if line_4021_4032.terminal1.V.re == 0.0 and line_4021_4032.terminal1.V.im == 0.0 then 0.0 else (line_4021_4032.terminal1.V.re ^ 2.0 + line_4021_4032.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4412};
  modelica_real tmp498;
  modelica_real tmp499;
  modelica_real tmp500;
  modelica_boolean tmp501;
  modelica_real tmp502;
  modelica_boolean tmp503;
  modelica_real tmp504;
  tmp503 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp503)
  {
    tmp501 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0));
    if(tmp501)
    {
      tmp502 = 0.0;
    }
    else
    {
      tmp498 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */);
      tmp499 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */);
      tmp500 = (tmp498 * tmp498) + (tmp499 * tmp499);
      if(tmp500 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp500, 0.5);
      }
      tmp502 = sqrt(tmp500);
    }
    tmp504 = tmp502;
  }
  else
  {
    tmp504 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3297]] /* trafo_g11_4021.U2Pu variable */) = tmp504;
  threadData->lastEquationSolved = 4412;
}

/*
equation index: 4413
type: SIMPLE_ASSIGN
g11.uPu.im = if g11.running.value then g11.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1513]] /* g11.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4413;
}

/*
equation index: 4414
type: SIMPLE_ASSIGN
$DER.g11.lambdaDPu = if g11.running.value then g11.RDPPu * g11.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* der(g11.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* g11.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4414;
}

/*
equation index: 4415
type: SIMPLE_ASSIGN
$DER.g11.lambdaQ2Pu = if g11.running.value then g11.RQ2PPu * g11.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* der(g11.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* g11.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4415;
}

/*
equation index: 4416
type: SIMPLE_ASSIGN
$DER.g11.lambdaQ1Pu = if g11.running.value then g11.RQ1PPu * g11.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* der(g11.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* g11.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4416;
}

/*
equation index: 4417
type: SIMPLE_ASSIGN
g11.iStatorPu.re = if g11.running.value then g11.rTfoPu * g11.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4417;
}

/*
equation index: 4418
type: SIMPLE_ASSIGN
g11.iStatorPu.im = if g11.running.value then g11.rTfoPu * g11.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4418;
}

/*
equation index: 4419
type: SIMPLE_ASSIGN
g11.IStatorPu = if g11.running.value then if g11.iStatorPu.re == 0.0 and g11.iStatorPu.im == 0.0 then 0.0 else (g11.iStatorPu.re ^ 2.0 + g11.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4419};
  modelica_real tmp505;
  modelica_real tmp506;
  modelica_real tmp507;
  modelica_boolean tmp508;
  modelica_real tmp509;
  modelica_boolean tmp510;
  modelica_real tmp511;
  tmp510 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp510)
  {
    tmp508 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) == 0.0));
    if(tmp508)
    {
      tmp509 = 0.0;
    }
    else
    {
      tmp505 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */);
      tmp506 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */);
      tmp507 = (tmp505 * tmp505) + (tmp506 * tmp506);
      if(tmp507 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp507, 0.5);
      }
      tmp509 = sqrt(tmp507);
    }
    tmp511 = tmp509;
  }
  else
  {
    tmp511 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1474]] /* g11.IStatorPu variable */) = tmp511;
  threadData->lastEquationSolved = 4419;
}

/*
equation index: 4420
type: SIMPLE_ASSIGN
g11.uStatorPu.im = if g11.running.value then (g11.terminal.V.im + (-100.0) * (g11.terminal.i.re * g11.XTfoPu + g11.terminal.i.im * g11.RTfoPu) / g11.SNom) / g11.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */),"g11.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4420;
}

/*
equation index: 4421
type: SIMPLE_ASSIGN
g11.cePu = if g11.running.value then g11.lambdaqPu * g11.idPu - g11.lambdadPu * g11.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4421;
}

/*
equation index: 4422
type: SIMPLE_ASSIGN
g11.PePu = if g11.running.value then g11.cePu * g11.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1478]] /* g11.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4422;
}

/*
equation index: 4423
type: SIMPLE_ASSIGN
g11.thetaInternal.value = if g11.running.value then Modelica.Math.atan3(g11.udPu, g11.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1512]] /* g11.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4423;
}

/*
equation index: 4424
type: SIMPLE_ASSIGN
g11.uStatorPu.re = if g11.running.value then (g11.terminal.V.re + (-100.0) * (g11.terminal.i.re * g11.RTfoPu - g11.terminal.i.im * g11.XTfoPu) / g11.SNom) / g11.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */),"g11.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4424;
}

/*
equation index: 4425
type: SIMPLE_ASSIGN
g11.sStatorPu.im = if g11.running.value then g11.uStatorPu.im * g11.iStatorPu.re - g11.uStatorPu.re * g11.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1505]] /* g11.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4425;
}

/*
equation index: 4426
type: SIMPLE_ASSIGN
g11.QStatorPu = if g11.running.value then -g11.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1482]] /* g11.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1505]] /* g11.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4426;
}

/*
equation index: 4427
type: SIMPLE_ASSIGN
g11.QStatorPuQNom = if g11.running.value then 100.0 * g11.QStatorPu / g11.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1483]] /* g11.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1482]] /* g11.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* g11.QNomAlt PARAM */),"g11.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4427;
}

/*
equation index: 4428
type: SIMPLE_ASSIGN
g11.sStatorPu.re = if g11.running.value then g11.uStatorPu.re * g11.iStatorPu.re + g11.uStatorPu.im * g11.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1506]] /* g11.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4428;
}

/*
equation index: 4429
type: SIMPLE_ASSIGN
g11.QGenPu = if g11.running.value then g11.terminal.V.re * g11.terminal.i.im - g11.terminal.V.im * g11.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1481]] /* g11.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4429;
}

/*
equation index: 4430
type: SIMPLE_ASSIGN
g11.QGen = if g11.running.value then 100.0 * g11.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1480]] /* g11.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1481]] /* g11.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4430;
}

/*
equation index: 4431
type: SIMPLE_ASSIGN
g11.UPu = if g11.running.value then (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4431};
  modelica_real tmp512;
  modelica_real tmp513;
  modelica_real tmp514;
  modelica_boolean tmp515;
  modelica_real tmp516;
  tmp515 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp515)
  {
    tmp512 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
    tmp513 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
    tmp514 = (tmp512 * tmp512) + (tmp513 * tmp513);
    if(tmp514 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp514, 0.5);
    }
    tmp516 = sqrt(tmp514);
  }
  else
  {
    tmp516 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1484]] /* g11.UPu variable */) = tmp516;
  threadData->lastEquationSolved = 4431;
}

/*
equation index: 4432
type: SIMPLE_ASSIGN
g11.uPu.re = if g11.running.value then g11.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1514]] /* g11.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4432;
}

/*
equation index: 4433
type: SIMPLE_ASSIGN
trafo_g11_4021.U1Pu = if trafo_g11_4021.running.value then if g11.terminal.V.re == 0.0 and g11.terminal.V.im == 0.0 then 0.0 else (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4433};
  modelica_real tmp517;
  modelica_real tmp518;
  modelica_real tmp519;
  modelica_boolean tmp520;
  modelica_real tmp521;
  modelica_boolean tmp522;
  modelica_real tmp523;
  tmp522 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp522)
  {
    tmp520 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0));
    if(tmp520)
    {
      tmp521 = 0.0;
    }
    else
    {
      tmp517 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
      tmp518 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
      tmp519 = (tmp517 * tmp517) + (tmp518 * tmp518);
      if(tmp519 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp519, 0.5);
      }
      tmp521 = sqrt(tmp519);
    }
    tmp523 = tmp521;
  }
  else
  {
    tmp523 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3296]] /* trafo_g11_4021.U1Pu variable */) = tmp523;
  threadData->lastEquationSolved = 4433;
}

/*
equation index: 4434
type: SIMPLE_ASSIGN
trafo_g11_4021.Q1Pu = g11.terminal.V.re * g11.terminal.i.im - g11.terminal.V.im * g11.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3294]] /* trafo_g11_4021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4434;
}

/*
equation index: 4435
type: SIMPLE_ASSIGN
trafo_g11_4021.P1Pu = (-g11.terminal.V.re) * g11.terminal.i.re - g11.terminal.V.im * g11.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3292]] /* trafo_g11_4021.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4435;
}

/*
equation index: 4436
type: SIMPLE_ASSIGN
bus_BG11.UPhase = Modelica.Math.atan3(g11.terminal.V.im, g11.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* bus_BG11.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4436;
}

/*
equation index: 4437
type: SIMPLE_ASSIGN
bus_BG11.UPu = if g11.terminal.V.re == 0.0 and g11.terminal.V.im == 0.0 then 0.0 else (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4437};
  modelica_real tmp524;
  modelica_real tmp525;
  modelica_real tmp526;
  modelica_boolean tmp527;
  modelica_real tmp528;
  tmp527 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0));
  if(tmp527)
  {
    tmp528 = 0.0;
  }
  else
  {
    tmp524 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
    tmp525 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
    tmp526 = (tmp524 * tmp524) + (tmp525 * tmp525);
    if(tmp526 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp526, 0.5);
    }
    tmp528 = sqrt(tmp526);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* bus_BG11.UPu variable */) = tmp528;
  threadData->lastEquationSolved = 4437;
}

/*
equation index: 4438
type: SIMPLE_ASSIGN
bus_BG11.U = bus_BG11.UPu * bus_BG11.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* bus_BG11.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* bus_BG11.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* bus_BG11.UNom PARAM */));
  threadData->lastEquationSolved = 4438;
}

/*
equation index: 4439
type: SIMPLE_ASSIGN
trafo_g11_4021.Q2Pu = line_4021_4032.terminal1.V.im * trafo_g11_4021.terminal2.i.re - line_4021_4032.terminal1.V.re * trafo_g11_4021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3295]] /* trafo_g11_4021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4439;
}

/*
equation index: 4440
type: SIMPLE_ASSIGN
trafo_g11_4021.P2Pu = line_4021_4032.terminal1.V.re * trafo_g11_4021.terminal2.i.re + line_4021_4032.terminal1.V.im * trafo_g11_4021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3293]] /* trafo_g11_4021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4440;
}

/*
equation index: 4441
type: SIMPLE_ASSIGN
line_4021_4042.Q1Pu = line_4021_4032.terminal1.V.im * line_4021_4042.terminal1.i.re - line_4021_4032.terminal1.V.re * line_4021_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2534]] /* line_4021_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4441;
}

/*
equation index: 4442
type: SIMPLE_ASSIGN
line_4021_4042.P1Pu = line_4021_4032.terminal1.V.re * line_4021_4042.terminal1.i.re + line_4021_4032.terminal1.V.im * line_4021_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2532]] /* line_4021_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4442;
}

/*
equation index: 4443
type: SIMPLE_ASSIGN
line_4021_4032.Q1Pu = line_4021_4032.terminal1.V.im * line_4021_4032.terminal1.i.re - line_4021_4032.terminal1.V.re * line_4021_4032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2524]] /* line_4021_4032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4443;
}

/*
equation index: 4444
type: SIMPLE_ASSIGN
line_4021_4032.P1Pu = line_4021_4032.terminal1.V.re * line_4021_4032.terminal1.i.re + line_4021_4032.terminal1.V.im * line_4021_4032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2522]] /* line_4021_4032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4444;
}

/*
equation index: 4445
type: SIMPLE_ASSIGN
trafo_1045_4045b.U1Pu = if trafo_1045_4045b.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4445};
  modelica_real tmp529;
  modelica_real tmp530;
  modelica_real tmp531;
  modelica_boolean tmp532;
  modelica_real tmp533;
  modelica_boolean tmp534;
  modelica_real tmp535;
  tmp534 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp534)
  {
    tmp532 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp532)
    {
      tmp533 = 0.0;
    }
    else
    {
      tmp529 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp530 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp531 = (tmp529 * tmp529) + (tmp530 * tmp530);
      if(tmp531 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp531, 0.5);
      }
      tmp533 = sqrt(tmp531);
    }
    tmp535 = tmp533;
  }
  else
  {
    tmp535 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* trafo_1045_4045b.U1Pu variable */) = tmp535;
  threadData->lastEquationSolved = 4445;
}

/*
equation index: 4446
type: SIMPLE_ASSIGN
trafo_1045_4045b.Q1Pu = line_1042_1045.terminal2.V.im * trafo_1045_4045b.terminal1.i.re - line_1042_1045.terminal2.V.re * trafo_1045_4045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* trafo_1045_4045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4446;
}

/*
equation index: 4447
type: SIMPLE_ASSIGN
trafo_1045_4045b.P1Pu = line_1042_1045.terminal2.V.re * trafo_1045_4045b.terminal1.i.re + line_1042_1045.terminal2.V.im * trafo_1045_4045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* trafo_1045_4045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4447;
}

/*
equation index: 4448
type: SIMPLE_ASSIGN
check_UPu_bus_4062 = (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4448};
  modelica_real tmp536;
  modelica_real tmp537;
  modelica_real tmp538;
  tmp536 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
  tmp537 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
  tmp538 = (tmp536 * tmp536) + (tmp537 * tmp537);
  if(tmp538 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp538, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* check_UPu_bus_4062 variable */) = sqrt(tmp538);
  threadData->lastEquationSolved = 4448;
}

/*
equation index: 4449
type: SIMPLE_ASSIGN
trafo_g17_4062.U2Pu = if trafo_g17_4062.running.value then if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4449};
  modelica_real tmp539;
  modelica_real tmp540;
  modelica_real tmp541;
  modelica_boolean tmp542;
  modelica_real tmp543;
  modelica_boolean tmp544;
  modelica_real tmp545;
  tmp544 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp544)
  {
    tmp542 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0));
    if(tmp542)
    {
      tmp543 = 0.0;
    }
    else
    {
      tmp539 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
      tmp540 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
      tmp541 = (tmp539 * tmp539) + (tmp540 * tmp540);
      if(tmp541 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp541, 0.5);
      }
      tmp543 = sqrt(tmp541);
    }
    tmp545 = tmp543;
  }
  else
  {
    tmp545 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3345]] /* trafo_g17_4062.U2Pu variable */) = tmp545;
  threadData->lastEquationSolved = 4449;
}

/*
equation index: 4450
type: SIMPLE_ASSIGN
g17.uPu.re = if g17.running.value then g17.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* g17.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4450;
}

/*
equation index: 4451
type: SIMPLE_ASSIGN
g17.iStatorPu.im = if g17.running.value then g17.rTfoPu * g17.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4451;
}

/*
equation index: 4452
type: SIMPLE_ASSIGN
$DER.g17.lambdaQ2Pu = if g17.running.value then g17.RQ2PPu * g17.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* der(g17.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* g17.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4452;
}

/*
equation index: 4453
type: SIMPLE_ASSIGN
$DER.g17.lambdaQ1Pu = if g17.running.value then g17.RQ1PPu * g17.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* der(g17.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* g17.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4453;
}

/*
equation index: 4454
type: SIMPLE_ASSIGN
$DER.g17.lambdaDPu = if g17.running.value then g17.RDPPu * g17.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* der(g17.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* g17.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4454;
}

/*
equation index: 4455
type: SIMPLE_ASSIGN
g17.iStatorPu.re = if g17.running.value then g17.rTfoPu * g17.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4455;
}

/*
equation index: 4456
type: SIMPLE_ASSIGN
g17.IStatorPu = if g17.running.value then if g17.iStatorPu.re == 0.0 and g17.iStatorPu.im == 0.0 then 0.0 else (g17.iStatorPu.re ^ 2.0 + g17.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4456};
  modelica_real tmp546;
  modelica_real tmp547;
  modelica_real tmp548;
  modelica_boolean tmp549;
  modelica_real tmp550;
  modelica_boolean tmp551;
  modelica_real tmp552;
  tmp551 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp551)
  {
    tmp549 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) == 0.0));
    if(tmp549)
    {
      tmp550 = 0.0;
    }
    else
    {
      tmp546 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */);
      tmp547 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */);
      tmp548 = (tmp546 * tmp546) + (tmp547 * tmp547);
      if(tmp548 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp548, 0.5);
      }
      tmp550 = sqrt(tmp548);
    }
    tmp552 = tmp550;
  }
  else
  {
    tmp552 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* g17.IStatorPu variable */) = tmp552;
  threadData->lastEquationSolved = 4456;
}

/*
equation index: 4457
type: SIMPLE_ASSIGN
g17.uStatorPu.re = if g17.running.value then (g17.terminal.V.re + (-100.0) * (g17.terminal.i.re * g17.RTfoPu - g17.terminal.i.im * g17.XTfoPu) / g17.SNom) / g17.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */),"g17.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4457;
}

/*
equation index: 4458
type: SIMPLE_ASSIGN
g17.cePu = if g17.running.value then g17.lambdaqPu * g17.idPu - g17.lambdadPu * g17.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4458;
}

/*
equation index: 4459
type: SIMPLE_ASSIGN
g17.PePu = if g17.running.value then g17.cePu * g17.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* g17.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4459;
}

/*
equation index: 4460
type: SIMPLE_ASSIGN
g17.thetaInternal.value = if g17.running.value then Modelica.Math.atan3(g17.udPu, g17.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* g17.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4460;
}

/*
equation index: 4461
type: SIMPLE_ASSIGN
g17.uStatorPu.im = if g17.running.value then (g17.terminal.V.im + (-100.0) * (g17.terminal.i.re * g17.XTfoPu + g17.terminal.i.im * g17.RTfoPu) / g17.SNom) / g17.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */),"g17.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4461;
}

/*
equation index: 4462
type: SIMPLE_ASSIGN
g17.sStatorPu.im = if g17.running.value then g17.uStatorPu.im * g17.iStatorPu.re - g17.uStatorPu.re * g17.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* g17.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4462;
}

/*
equation index: 4463
type: SIMPLE_ASSIGN
g17.QStatorPu = if g17.running.value then -g17.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* g17.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* g17.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4463;
}

/*
equation index: 4464
type: SIMPLE_ASSIGN
g17.QStatorPuQNom = if g17.running.value then 100.0 * g17.QStatorPu / g17.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* g17.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* g17.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* g17.QNomAlt PARAM */),"g17.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4464;
}

/*
equation index: 4465
type: SIMPLE_ASSIGN
g17.sStatorPu.re = if g17.running.value then g17.uStatorPu.re * g17.iStatorPu.re + g17.uStatorPu.im * g17.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1782]] /* g17.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4465;
}

/*
equation index: 4466
type: SIMPLE_ASSIGN
g17.QGenPu = if g17.running.value then g17.terminal.V.re * g17.terminal.i.im - g17.terminal.V.im * g17.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1757]] /* g17.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4466;
}

/*
equation index: 4467
type: SIMPLE_ASSIGN
g17.QGen = if g17.running.value then 100.0 * g17.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1756]] /* g17.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1757]] /* g17.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4467;
}

/*
equation index: 4468
type: SIMPLE_ASSIGN
g17.UPu = if g17.running.value then (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4468};
  modelica_real tmp553;
  modelica_real tmp554;
  modelica_real tmp555;
  modelica_boolean tmp556;
  modelica_real tmp557;
  tmp556 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp556)
  {
    tmp553 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
    tmp554 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
    tmp555 = (tmp553 * tmp553) + (tmp554 * tmp554);
    if(tmp555 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp555, 0.5);
    }
    tmp557 = sqrt(tmp555);
  }
  else
  {
    tmp557 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* g17.UPu variable */) = tmp557;
  threadData->lastEquationSolved = 4468;
}

/*
equation index: 4469
type: SIMPLE_ASSIGN
g17.uPu.im = if g17.running.value then g17.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* g17.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4469;
}

/*
equation index: 4470
type: SIMPLE_ASSIGN
trafo_g17_4062.U1Pu = if trafo_g17_4062.running.value then if g17.terminal.V.re == 0.0 and g17.terminal.V.im == 0.0 then 0.0 else (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4470};
  modelica_real tmp558;
  modelica_real tmp559;
  modelica_real tmp560;
  modelica_boolean tmp561;
  modelica_real tmp562;
  modelica_boolean tmp563;
  modelica_real tmp564;
  tmp563 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp563)
  {
    tmp561 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0));
    if(tmp561)
    {
      tmp562 = 0.0;
    }
    else
    {
      tmp558 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
      tmp559 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
      tmp560 = (tmp558 * tmp558) + (tmp559 * tmp559);
      if(tmp560 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp560, 0.5);
      }
      tmp562 = sqrt(tmp560);
    }
    tmp564 = tmp562;
  }
  else
  {
    tmp564 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3344]] /* trafo_g17_4062.U1Pu variable */) = tmp564;
  threadData->lastEquationSolved = 4470;
}

/*
equation index: 4471
type: SIMPLE_ASSIGN
trafo_g17_4062.Q1Pu = g17.terminal.V.re * g17.terminal.i.im - g17.terminal.V.im * g17.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3342]] /* trafo_g17_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4471;
}

/*
equation index: 4472
type: SIMPLE_ASSIGN
trafo_g17_4062.P1Pu = (-g17.terminal.V.re) * g17.terminal.i.re - g17.terminal.V.im * g17.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3340]] /* trafo_g17_4062.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4472;
}

/*
equation index: 4473
type: SIMPLE_ASSIGN
bus_BG17.UPhase = Modelica.Math.atan3(g17.terminal.V.im, g17.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* bus_BG17.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4473;
}

/*
equation index: 4474
type: SIMPLE_ASSIGN
bus_BG17.UPu = if g17.terminal.V.re == 0.0 and g17.terminal.V.im == 0.0 then 0.0 else (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4474};
  modelica_real tmp565;
  modelica_real tmp566;
  modelica_real tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  tmp568 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0));
  if(tmp568)
  {
    tmp569 = 0.0;
  }
  else
  {
    tmp565 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
    tmp566 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
    tmp567 = (tmp565 * tmp565) + (tmp566 * tmp566);
    if(tmp567 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp567, 0.5);
    }
    tmp569 = sqrt(tmp567);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* bus_BG17.UPu variable */) = tmp569;
  threadData->lastEquationSolved = 4474;
}

/*
equation index: 4475
type: SIMPLE_ASSIGN
bus_BG17.U = bus_BG17.UPu * bus_BG17.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* bus_BG17.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* bus_BG17.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* bus_BG17.UNom PARAM */));
  threadData->lastEquationSolved = 4475;
}

/*
equation index: 4476
type: SIMPLE_ASSIGN
trafo_g17_4062.Q2Pu = line_4062_4063b.terminal1.V.im * trafo_g17_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * trafo_g17_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3343]] /* trafo_g17_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4476;
}

/*
equation index: 4477
type: SIMPLE_ASSIGN
trafo_g17_4062.P2Pu = line_4062_4063b.terminal1.V.re * trafo_g17_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * trafo_g17_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3341]] /* trafo_g17_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4477;
}

/*
equation index: 4478
type: SIMPLE_ASSIGN
trafo_62_4062.U2Pu = if trafo_62_4062.running.value then if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4478};
  modelica_real tmp570;
  modelica_real tmp571;
  modelica_real tmp572;
  modelica_boolean tmp573;
  modelica_real tmp574;
  modelica_boolean tmp575;
  modelica_real tmp576;
  tmp575 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp575)
  {
    tmp573 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0));
    if(tmp573)
    {
      tmp574 = 0.0;
    }
    else
    {
      tmp570 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
      tmp571 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
      tmp572 = (tmp570 * tmp570) + (tmp571 * tmp571);
      if(tmp572 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp572, 0.5);
      }
      tmp574 = sqrt(tmp572);
    }
    tmp576 = tmp574;
  }
  else
  {
    tmp576 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3249]] /* trafo_62_4062.U2Pu variable */) = tmp576;
  threadData->lastEquationSolved = 4478;
}

/*
equation index: 4479
type: SIMPLE_ASSIGN
trafo_62_4062.U1Pu = if trafo_62_4062.running.value then if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4479};
  modelica_real tmp577;
  modelica_real tmp578;
  modelica_real tmp579;
  modelica_boolean tmp580;
  modelica_real tmp581;
  modelica_boolean tmp582;
  modelica_real tmp583;
  tmp582 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp582)
  {
    tmp580 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
    if(tmp580)
    {
      tmp581 = 0.0;
    }
    else
    {
      tmp577 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
      tmp578 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
      tmp579 = (tmp577 * tmp577) + (tmp578 * tmp578);
      if(tmp579 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp579, 0.5);
      }
      tmp581 = sqrt(tmp579);
    }
    tmp583 = tmp581;
  }
  else
  {
    tmp583 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3248]] /* trafo_62_4062.U1Pu variable */) = tmp583;
  threadData->lastEquationSolved = 4479;
}

/*
equation index: 4480
type: SIMPLE_ASSIGN
trafo_62_4062.Q1Pu = load_62.terminal.V.im * trafo_62_4062.terminal1.i.re - load_62.terminal.V.re * trafo_62_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3246]] /* trafo_62_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4480;
}

/*
equation index: 4481
type: SIMPLE_ASSIGN
trafo_62_4062.P1Pu = load_62.terminal.V.re * trafo_62_4062.terminal1.i.re + load_62.terminal.V.im * trafo_62_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* trafo_62_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4481;
}

/*
equation index: 4482
type: SIMPLE_ASSIGN
load_62.UPu.value = if load_62.running.value then (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4482};
  modelica_real tmp584;
  modelica_real tmp585;
  modelica_real tmp586;
  modelica_boolean tmp587;
  modelica_real tmp588;
  tmp587 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */);
  if(tmp587)
  {
    tmp584 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
    tmp585 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
    tmp586 = (tmp584 * tmp584) + (tmp585 * tmp585);
    if(tmp586 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp586, 0.5);
    }
    tmp588 = sqrt(tmp586);
  }
  else
  {
    tmp588 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2900]] /* load_62.UPu.value variable */) = tmp588;
  threadData->lastEquationSolved = 4482;
}

/*
equation index: 4483
type: SIMPLE_ASSIGN
bus_B62.UPhase = Modelica.Math.atan3(load_62.terminal.V.im, load_62.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bus_B62.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4483;
}

/*
equation index: 4484
type: SIMPLE_ASSIGN
bus_B62.UPu = if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4484};
  modelica_real tmp589;
  modelica_real tmp590;
  modelica_real tmp591;
  modelica_boolean tmp592;
  modelica_real tmp593;
  tmp592 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
  if(tmp592)
  {
    tmp593 = 0.0;
  }
  else
  {
    tmp589 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
    tmp590 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
    tmp591 = (tmp589 * tmp589) + (tmp590 * tmp590);
    if(tmp591 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp591, 0.5);
    }
    tmp593 = sqrt(tmp591);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bus_B62.UPu variable */) = tmp593;
  threadData->lastEquationSolved = 4484;
}

/*
equation index: 4485
type: SIMPLE_ASSIGN
bus_B62.U = bus_B62.UPu * bus_B62.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bus_B62.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bus_B62.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* bus_B62.UNom PARAM */));
  threadData->lastEquationSolved = 4485;
}

/*
equation index: 4486
type: SIMPLE_ASSIGN
trafo_62_4062.Q2Pu = line_4062_4063b.terminal1.V.im * trafo_62_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * trafo_62_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3247]] /* trafo_62_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4486;
}

/*
equation index: 4487
type: SIMPLE_ASSIGN
trafo_62_4062.P2Pu = line_4062_4063b.terminal1.V.re * trafo_62_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * trafo_62_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* trafo_62_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4487;
}

/*
equation index: 4488
type: SIMPLE_ASSIGN
trafo_g18_4063.U2Pu = if trafo_g18_4063.running.value then if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4488};
  modelica_real tmp594;
  modelica_real tmp595;
  modelica_real tmp596;
  modelica_boolean tmp597;
  modelica_real tmp598;
  modelica_boolean tmp599;
  modelica_real tmp600;
  tmp599 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp599)
  {
    tmp597 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
    if(tmp597)
    {
      tmp598 = 0.0;
    }
    else
    {
      tmp594 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
      tmp595 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
      tmp596 = (tmp594 * tmp594) + (tmp595 * tmp595);
      if(tmp596 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp596, 0.5);
      }
      tmp598 = sqrt(tmp596);
    }
    tmp600 = tmp598;
  }
  else
  {
    tmp600 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3353]] /* trafo_g18_4063.U2Pu variable */) = tmp600;
  threadData->lastEquationSolved = 4488;
}

/*
equation index: 4489
type: SIMPLE_ASSIGN
g18.iStatorPu.re = if g18.running.value then g18.rTfoPu * g18.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4489;
}

/*
equation index: 4490
type: SIMPLE_ASSIGN
g18.iStatorPu.im = if g18.running.value then g18.rTfoPu * g18.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4490;
}

/*
equation index: 4491
type: SIMPLE_ASSIGN
g18.IStatorPu = if g18.running.value then if g18.iStatorPu.re == 0.0 and g18.iStatorPu.im == 0.0 then 0.0 else (g18.iStatorPu.re ^ 2.0 + g18.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4491};
  modelica_real tmp601;
  modelica_real tmp602;
  modelica_real tmp603;
  modelica_boolean tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_real tmp607;
  tmp606 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp606)
  {
    tmp604 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) == 0.0));
    if(tmp604)
    {
      tmp605 = 0.0;
    }
    else
    {
      tmp601 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */);
      tmp602 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */);
      tmp603 = (tmp601 * tmp601) + (tmp602 * tmp602);
      if(tmp603 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp603, 0.5);
      }
      tmp605 = sqrt(tmp603);
    }
    tmp607 = tmp605;
  }
  else
  {
    tmp607 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* g18.IStatorPu variable */) = tmp607;
  threadData->lastEquationSolved = 4491;
}

/*
equation index: 4492
type: SIMPLE_ASSIGN
g18.uStatorPu.re = if g18.running.value then (g18.terminal.V.re + (-100.0) * (g18.terminal.i.re * g18.RTfoPu - g18.terminal.i.im * g18.XTfoPu) / g18.SNom) / g18.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */),"g18.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4492;
}

/*
equation index: 4493
type: SIMPLE_ASSIGN
g18.uPu.re = if g18.running.value then g18.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1836]] /* g18.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4493;
}

/*
equation index: 4494
type: SIMPLE_ASSIGN
$DER.g18.lambdaDPu = if g18.running.value then g18.RDPPu * g18.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* der(g18.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1996]] /* g18.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4494;
}

/*
equation index: 4495
type: SIMPLE_ASSIGN
$DER.g18.lambdaQ2Pu = if g18.running.value then g18.RQ2PPu * g18.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* der(g18.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1998]] /* g18.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4495;
}

/*
equation index: 4496
type: SIMPLE_ASSIGN
$DER.g18.lambdaQ1Pu = if g18.running.value then g18.RQ1PPu * g18.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* der(g18.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1997]] /* g18.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4496;
}

/*
equation index: 4497
type: SIMPLE_ASSIGN
g18.cePu = if g18.running.value then g18.lambdaqPu * g18.idPu - g18.lambdadPu * g18.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4497;
}

/*
equation index: 4498
type: SIMPLE_ASSIGN
g18.PePu = if g18.running.value then g18.cePu * g18.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1800]] /* g18.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4498;
}

/*
equation index: 4499
type: SIMPLE_ASSIGN
g18.thetaInternal.value = if g18.running.value then Modelica.Math.atan3(g18.udPu, g18.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1834]] /* g18.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4499;
}

/*
equation index: 4500
type: SIMPLE_ASSIGN
g18.uStatorPu.im = if g18.running.value then (g18.terminal.V.im + (-100.0) * (g18.terminal.i.re * g18.XTfoPu + g18.terminal.i.im * g18.RTfoPu) / g18.SNom) / g18.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */),"g18.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4500;
}

/*
equation index: 4501
type: SIMPLE_ASSIGN
g18.sStatorPu.im = if g18.running.value then g18.uStatorPu.im * g18.iStatorPu.re - g18.uStatorPu.re * g18.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* g18.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4501;
}

/*
equation index: 4502
type: SIMPLE_ASSIGN
g18.QStatorPu = if g18.running.value then -g18.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* g18.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* g18.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4502;
}

/*
equation index: 4503
type: SIMPLE_ASSIGN
g18.QStatorPuQNom = if g18.running.value then 100.0 * g18.QStatorPu / g18.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1805]] /* g18.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* g18.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* g18.QNomAlt PARAM */),"g18.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4503;
}

/*
equation index: 4504
type: SIMPLE_ASSIGN
g18.sStatorPu.re = if g18.running.value then g18.uStatorPu.re * g18.iStatorPu.re + g18.uStatorPu.im * g18.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1828]] /* g18.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4504;
}

/*
equation index: 4505
type: SIMPLE_ASSIGN
g18.QGenPu = if g18.running.value then g18.terminal.V.re * g18.terminal.i.im - g18.terminal.V.im * g18.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* g18.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4505;
}

/*
equation index: 4506
type: SIMPLE_ASSIGN
g18.QGen = if g18.running.value then 100.0 * g18.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* g18.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* g18.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4506;
}

/*
equation index: 4507
type: SIMPLE_ASSIGN
g18.UPu = if g18.running.value then (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4507};
  modelica_real tmp608;
  modelica_real tmp609;
  modelica_real tmp610;
  modelica_boolean tmp611;
  modelica_real tmp612;
  tmp611 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp611)
  {
    tmp608 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
    tmp609 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
    tmp610 = (tmp608 * tmp608) + (tmp609 * tmp609);
    if(tmp610 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp610, 0.5);
    }
    tmp612 = sqrt(tmp610);
  }
  else
  {
    tmp612 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* g18.UPu variable */) = tmp612;
  threadData->lastEquationSolved = 4507;
}

/*
equation index: 4508
type: SIMPLE_ASSIGN
g18.uPu.im = if g18.running.value then g18.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1835]] /* g18.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4508;
}

/*
equation index: 4509
type: SIMPLE_ASSIGN
trafo_g18_4063.U1Pu = if trafo_g18_4063.running.value then if g18.terminal.V.re == 0.0 and g18.terminal.V.im == 0.0 then 0.0 else (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4509};
  modelica_real tmp613;
  modelica_real tmp614;
  modelica_real tmp615;
  modelica_boolean tmp616;
  modelica_real tmp617;
  modelica_boolean tmp618;
  modelica_real tmp619;
  tmp618 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp618)
  {
    tmp616 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0));
    if(tmp616)
    {
      tmp617 = 0.0;
    }
    else
    {
      tmp613 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
      tmp614 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
      tmp615 = (tmp613 * tmp613) + (tmp614 * tmp614);
      if(tmp615 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp615, 0.5);
      }
      tmp617 = sqrt(tmp615);
    }
    tmp619 = tmp617;
  }
  else
  {
    tmp619 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3352]] /* trafo_g18_4063.U1Pu variable */) = tmp619;
  threadData->lastEquationSolved = 4509;
}

/*
equation index: 4510
type: SIMPLE_ASSIGN
trafo_g18_4063.Q1Pu = g18.terminal.V.re * g18.terminal.i.im - g18.terminal.V.im * g18.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3350]] /* trafo_g18_4063.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4510;
}

/*
equation index: 4511
type: SIMPLE_ASSIGN
trafo_g18_4063.P1Pu = (-g18.terminal.V.re) * g18.terminal.i.re - g18.terminal.V.im * g18.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3348]] /* trafo_g18_4063.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4511;
}

/*
equation index: 4512
type: SIMPLE_ASSIGN
bus_BG18.UPhase = Modelica.Math.atan3(g18.terminal.V.im, g18.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* bus_BG18.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4512;
}

/*
equation index: 4513
type: SIMPLE_ASSIGN
bus_BG18.UPu = if g18.terminal.V.re == 0.0 and g18.terminal.V.im == 0.0 then 0.0 else (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4513};
  modelica_real tmp620;
  modelica_real tmp621;
  modelica_real tmp622;
  modelica_boolean tmp623;
  modelica_real tmp624;
  tmp623 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0));
  if(tmp623)
  {
    tmp624 = 0.0;
  }
  else
  {
    tmp620 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
    tmp621 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
    tmp622 = (tmp620 * tmp620) + (tmp621 * tmp621);
    if(tmp622 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp622, 0.5);
    }
    tmp624 = sqrt(tmp622);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* bus_BG18.UPu variable */) = tmp624;
  threadData->lastEquationSolved = 4513;
}

/*
equation index: 4514
type: SIMPLE_ASSIGN
bus_BG18.U = bus_BG18.UPu * bus_BG18.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* bus_BG18.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* bus_BG18.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* bus_BG18.UNom PARAM */));
  threadData->lastEquationSolved = 4514;
}

/*
equation index: 4515
type: SIMPLE_ASSIGN
trafo_g18_4063.Q2Pu = line_4062_4063b.terminal2.V.im * trafo_g18_4063.terminal2.i.re - line_4062_4063b.terminal2.V.re * trafo_g18_4063.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3351]] /* trafo_g18_4063.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4515;
}

/*
equation index: 4516
type: SIMPLE_ASSIGN
trafo_g18_4063.P2Pu = line_4062_4063b.terminal2.V.re * trafo_g18_4063.terminal2.i.re + line_4062_4063b.terminal2.V.im * trafo_g18_4063.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3349]] /* trafo_g18_4063.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4516;
}

/*
equation index: 4517
type: SIMPLE_ASSIGN
trafo_63_4063.U2Pu = if trafo_63_4063.running.value then if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4517};
  modelica_real tmp625;
  modelica_real tmp626;
  modelica_real tmp627;
  modelica_boolean tmp628;
  modelica_real tmp629;
  modelica_boolean tmp630;
  modelica_real tmp631;
  tmp630 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp630)
  {
    tmp628 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
    if(tmp628)
    {
      tmp629 = 0.0;
    }
    else
    {
      tmp625 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
      tmp626 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
      tmp627 = (tmp625 * tmp625) + (tmp626 * tmp626);
      if(tmp627 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp627, 0.5);
      }
      tmp629 = sqrt(tmp627);
    }
    tmp631 = tmp629;
  }
  else
  {
    tmp631 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3259]] /* trafo_63_4063.U2Pu variable */) = tmp631;
  threadData->lastEquationSolved = 4517;
}

/*
equation index: 4518
type: SIMPLE_ASSIGN
trafo_63_4063.U1Pu = if trafo_63_4063.running.value then if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4518};
  modelica_real tmp632;
  modelica_real tmp633;
  modelica_real tmp634;
  modelica_boolean tmp635;
  modelica_real tmp636;
  modelica_boolean tmp637;
  modelica_real tmp638;
  tmp637 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp637)
  {
    tmp635 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
    if(tmp635)
    {
      tmp636 = 0.0;
    }
    else
    {
      tmp632 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
      tmp633 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
      tmp634 = (tmp632 * tmp632) + (tmp633 * tmp633);
      if(tmp634 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp634, 0.5);
      }
      tmp636 = sqrt(tmp634);
    }
    tmp638 = tmp636;
  }
  else
  {
    tmp638 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3258]] /* trafo_63_4063.U1Pu variable */) = tmp638;
  threadData->lastEquationSolved = 4518;
}

/*
equation index: 4519
type: SIMPLE_ASSIGN
trafo_63_4063.Q1Pu = load_63.terminal.V.im * trafo_63_4063.terminal1.i.re - load_63.terminal.V.re * trafo_63_4063.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3256]] /* trafo_63_4063.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4519;
}

/*
equation index: 4520
type: SIMPLE_ASSIGN
trafo_63_4063.P1Pu = load_63.terminal.V.re * trafo_63_4063.terminal1.i.re + load_63.terminal.V.im * trafo_63_4063.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3254]] /* trafo_63_4063.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4520;
}

/*
equation index: 4521
type: SIMPLE_ASSIGN
load_63.UPu.value = if load_63.running.value then (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4521};
  modelica_real tmp639;
  modelica_real tmp640;
  modelica_real tmp641;
  modelica_boolean tmp642;
  modelica_real tmp643;
  tmp642 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */);
  if(tmp642)
  {
    tmp639 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
    tmp640 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
    tmp641 = (tmp639 * tmp639) + (tmp640 * tmp640);
    if(tmp641 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp641, 0.5);
    }
    tmp643 = sqrt(tmp641);
  }
  else
  {
    tmp643 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2907]] /* load_63.UPu.value variable */) = tmp643;
  threadData->lastEquationSolved = 4521;
}

/*
equation index: 4522
type: SIMPLE_ASSIGN
bus_B63.UPhase = Modelica.Math.atan3(load_63.terminal.V.im, load_63.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bus_B63.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4522;
}

/*
equation index: 4523
type: SIMPLE_ASSIGN
bus_B63.UPu = if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4523};
  modelica_real tmp644;
  modelica_real tmp645;
  modelica_real tmp646;
  modelica_boolean tmp647;
  modelica_real tmp648;
  tmp647 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
  if(tmp647)
  {
    tmp648 = 0.0;
  }
  else
  {
    tmp644 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
    tmp645 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
    tmp646 = (tmp644 * tmp644) + (tmp645 * tmp645);
    if(tmp646 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp646, 0.5);
    }
    tmp648 = sqrt(tmp646);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bus_B63.UPu variable */) = tmp648;
  threadData->lastEquationSolved = 4523;
}

/*
equation index: 4524
type: SIMPLE_ASSIGN
bus_B63.U = bus_B63.UPu * bus_B63.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bus_B63.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bus_B63.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* bus_B63.UNom PARAM */));
  threadData->lastEquationSolved = 4524;
}

/*
equation index: 4525
type: SIMPLE_ASSIGN
trafo_63_4063.Q2Pu = line_4062_4063b.terminal2.V.im * trafo_63_4063.terminal2.i.re - line_4062_4063b.terminal2.V.re * trafo_63_4063.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3257]] /* trafo_63_4063.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4525;
}

/*
equation index: 4526
type: SIMPLE_ASSIGN
trafo_63_4063.P2Pu = line_4062_4063b.terminal2.V.re * trafo_63_4063.terminal2.i.re + line_4062_4063b.terminal2.V.im * trafo_63_4063.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3255]] /* trafo_63_4063.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4526;
}

/*
equation index: 4527
type: SIMPLE_ASSIGN
line_4062_4063b.Q2Pu = line_4062_4063b.terminal2.V.im * line_4062_4063b.terminal2.i.re - line_4062_4063b.terminal2.V.re * line_4062_4063b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2743]] /* line_4062_4063b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4527;
}

/*
equation index: 4528
type: SIMPLE_ASSIGN
line_4062_4063b.P2Pu = line_4062_4063b.terminal2.V.re * line_4062_4063b.terminal2.i.re + line_4062_4063b.terminal2.V.im * line_4062_4063b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2741]] /* line_4062_4063b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4528;
}

/*
equation index: 4529
type: SIMPLE_ASSIGN
line_4062_4063b.Q1Pu = line_4062_4063b.terminal1.V.im * line_4062_4063b.terminal1.i.re - line_4062_4063b.terminal1.V.re * line_4062_4063b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2742]] /* line_4062_4063b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4529;
}

/*
equation index: 4530
type: SIMPLE_ASSIGN
line_4062_4063b.P1Pu = line_4062_4063b.terminal1.V.re * line_4062_4063b.terminal1.i.re + line_4062_4063b.terminal1.V.im * line_4062_4063b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* line_4062_4063b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4530;
}

/*
equation index: 4531
type: SIMPLE_ASSIGN
line_4062_4063a.Q2Pu = line_4062_4063b.terminal2.V.im * line_4062_4063a.terminal2.i.re - line_4062_4063b.terminal2.V.re * line_4062_4063a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2735]] /* line_4062_4063a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4531;
}

/*
equation index: 4532
type: SIMPLE_ASSIGN
line_4062_4063a.P2Pu = line_4062_4063b.terminal2.V.re * line_4062_4063a.terminal2.i.re + line_4062_4063b.terminal2.V.im * line_4062_4063a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2733]] /* line_4062_4063a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4532;
}

/*
equation index: 4533
type: SIMPLE_ASSIGN
line_4062_4063a.Q1Pu = line_4062_4063b.terminal1.V.im * line_4062_4063a.terminal1.i.re - line_4062_4063b.terminal1.V.re * line_4062_4063a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2734]] /* line_4062_4063a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4533;
}

/*
equation index: 4534
type: SIMPLE_ASSIGN
line_4062_4063a.P1Pu = line_4062_4063b.terminal1.V.re * line_4062_4063a.terminal1.i.re + line_4062_4063b.terminal1.V.im * line_4062_4063a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2732]] /* line_4062_4063a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4534;
}

/*
equation index: 4535
type: SIMPLE_ASSIGN
bus_4063.UPhase = Modelica.Math.atan3(line_4062_4063b.terminal2.V.im, line_4062_4063b.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* bus_4063.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4535;
}

/*
equation index: 4536
type: SIMPLE_ASSIGN
bus_4063.UPu = if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4536};
  modelica_real tmp649;
  modelica_real tmp650;
  modelica_real tmp651;
  modelica_boolean tmp652;
  modelica_real tmp653;
  tmp652 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
  if(tmp652)
  {
    tmp653 = 0.0;
  }
  else
  {
    tmp649 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
    tmp650 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
    tmp651 = (tmp649 * tmp649) + (tmp650 * tmp650);
    if(tmp651 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp651, 0.5);
    }
    tmp653 = sqrt(tmp651);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* bus_4063.UPu variable */) = tmp653;
  threadData->lastEquationSolved = 4536;
}

/*
equation index: 4537
type: SIMPLE_ASSIGN
bus_4063.U = bus_4063.UPu * bus_4063.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* bus_4063.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* bus_4063.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* bus_4063.UNom PARAM */));
  threadData->lastEquationSolved = 4537;
}

/*
equation index: 4538
type: SIMPLE_ASSIGN
line_4061_4062.Q2Pu = line_4062_4063b.terminal1.V.im * line_4061_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * line_4061_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2725]] /* line_4061_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4538;
}

/*
equation index: 4539
type: SIMPLE_ASSIGN
line_4061_4062.P2Pu = line_4062_4063b.terminal1.V.re * line_4061_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * line_4061_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* line_4061_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4539;
}

/*
equation index: 4540
type: SIMPLE_ASSIGN
line_4045_4062.Q2Pu = line_4062_4063b.terminal1.V.im * line_4045_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * line_4045_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2705]] /* line_4045_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4540;
}

/*
equation index: 4541
type: SIMPLE_ASSIGN
line_4045_4062.P2Pu = line_4062_4063b.terminal1.V.re * line_4045_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * line_4045_4062.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2703]] /* line_4045_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4541;
}

/*
equation index: 4542
type: SIMPLE_ASSIGN
trafo_1045_4045b.U2Pu = if trafo_1045_4045b.running.value then if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4542};
  modelica_real tmp654;
  modelica_real tmp655;
  modelica_real tmp656;
  modelica_boolean tmp657;
  modelica_real tmp658;
  modelica_boolean tmp659;
  modelica_real tmp660;
  tmp659 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp659)
  {
    tmp657 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
    if(tmp657)
    {
      tmp658 = 0.0;
    }
    else
    {
      tmp654 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
      tmp655 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
      tmp656 = (tmp654 * tmp654) + (tmp655 * tmp655);
      if(tmp656 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp656, 0.5);
      }
      tmp658 = sqrt(tmp656);
    }
    tmp660 = tmp658;
  }
  else
  {
    tmp660 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3049]] /* trafo_1045_4045b.U2Pu variable */) = tmp660;
  threadData->lastEquationSolved = 4542;
}

/*
equation index: 4543
type: SIMPLE_ASSIGN
trafo_1045_4045a.U2Pu = if trafo_1045_4045a.running.value then if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4543};
  modelica_real tmp661;
  modelica_real tmp662;
  modelica_real tmp663;
  modelica_boolean tmp664;
  modelica_real tmp665;
  modelica_boolean tmp666;
  modelica_real tmp667;
  tmp666 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp666)
  {
    tmp664 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
    if(tmp664)
    {
      tmp665 = 0.0;
    }
    else
    {
      tmp661 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
      tmp662 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
      tmp663 = (tmp661 * tmp661) + (tmp662 * tmp662);
      if(tmp663 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp663, 0.5);
      }
      tmp665 = sqrt(tmp663);
    }
    tmp667 = tmp665;
  }
  else
  {
    tmp667 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3039]] /* trafo_1045_4045a.U2Pu variable */) = tmp667;
  threadData->lastEquationSolved = 4543;
}

/*
equation index: 4544
type: SIMPLE_ASSIGN
line_4045_4062.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4062.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2704]] /* line_4045_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4544;
}

/*
equation index: 4545
type: SIMPLE_ASSIGN
line_4045_4062.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4062.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2702]] /* line_4045_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4545;
}

/*
equation index: 4546
type: SIMPLE_ASSIGN
g16.iStatorPu.re = if g16.running.value then g16.rTfoPu * g16.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4546;
}

/*
equation index: 4547
type: SIMPLE_ASSIGN
$DER.g16.lambdaDPu = if g16.running.value then g16.RDPPu * g16.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* der(g16.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1790]] /* g16.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4547;
}

/*
equation index: 4548
type: SIMPLE_ASSIGN
g16.uPu.re = if g16.running.value then g16.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* g16.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4548;
}

/*
equation index: 4549
type: SIMPLE_ASSIGN
g16.UPu = if g16.running.value then (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4549};
  modelica_real tmp668;
  modelica_real tmp669;
  modelica_real tmp670;
  modelica_boolean tmp671;
  modelica_real tmp672;
  tmp671 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp671)
  {
    tmp668 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
    tmp669 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
    tmp670 = (tmp668 * tmp668) + (tmp669 * tmp669);
    if(tmp670 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp670, 0.5);
    }
    tmp672 = sqrt(tmp670);
  }
  else
  {
    tmp672 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1714]] /* g16.UPu variable */) = tmp672;
  threadData->lastEquationSolved = 4549;
}

/*
equation index: 4550
type: SIMPLE_ASSIGN
g16.uPu.im = if g16.running.value then g16.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1743]] /* g16.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4550;
}

/*
equation index: 4551
type: SIMPLE_ASSIGN
trafo_g16_4051.U1Pu = if trafo_g16_4051.running.value then if g16.terminal.V.re == 0.0 and g16.terminal.V.im == 0.0 then 0.0 else (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4551};
  modelica_real tmp673;
  modelica_real tmp674;
  modelica_real tmp675;
  modelica_boolean tmp676;
  modelica_real tmp677;
  modelica_boolean tmp678;
  modelica_real tmp679;
  tmp678 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp678)
  {
    tmp676 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0));
    if(tmp676)
    {
      tmp677 = 0.0;
    }
    else
    {
      tmp673 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
      tmp674 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
      tmp675 = (tmp673 * tmp673) + (tmp674 * tmp674);
      if(tmp675 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp675, 0.5);
      }
      tmp677 = sqrt(tmp675);
    }
    tmp679 = tmp677;
  }
  else
  {
    tmp679 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3336]] /* trafo_g16_4051.U1Pu variable */) = tmp679;
  threadData->lastEquationSolved = 4551;
}

/*
equation index: 4552
type: SIMPLE_ASSIGN
bus_BG16.UPhase = Modelica.Math.atan3(g16.terminal.V.im, g16.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* bus_BG16.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4552;
}

/*
equation index: 4553
type: SIMPLE_ASSIGN
bus_BG16.UPu = if g16.terminal.V.re == 0.0 and g16.terminal.V.im == 0.0 then 0.0 else (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4553};
  modelica_real tmp680;
  modelica_real tmp681;
  modelica_real tmp682;
  modelica_boolean tmp683;
  modelica_real tmp684;
  tmp683 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0));
  if(tmp683)
  {
    tmp684 = 0.0;
  }
  else
  {
    tmp680 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
    tmp681 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
    tmp682 = (tmp680 * tmp680) + (tmp681 * tmp681);
    if(tmp682 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp682, 0.5);
    }
    tmp684 = sqrt(tmp682);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* bus_BG16.UPu variable */) = tmp684;
  threadData->lastEquationSolved = 4553;
}

/*
equation index: 4554
type: SIMPLE_ASSIGN
bus_BG16.U = bus_BG16.UPu * bus_BG16.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* bus_BG16.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* bus_BG16.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* bus_BG16.UNom PARAM */));
  threadData->lastEquationSolved = 4554;
}

/*
equation index: 4555
type: SIMPLE_ASSIGN
g16.thetaInternal.value = if g16.running.value then Modelica.Math.atan3(g16.udPu, g16.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* g16.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4555;
}

/*
equation index: 4556
type: SIMPLE_ASSIGN
g16.cePu = if g16.running.value then g16.lambdaqPu * g16.idPu - g16.lambdadPu * g16.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4556;
}

/*
equation index: 4557
type: SIMPLE_ASSIGN
g16.PePu = if g16.running.value then g16.cePu * g16.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* g16.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4557;
}

/*
equation index: 4558
type: SIMPLE_ASSIGN
$DER.g16.lambdaQ2Pu = if g16.running.value then g16.RQ2PPu * g16.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(g16.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* g16.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4558;
}

/*
equation index: 4559
type: SIMPLE_ASSIGN
$DER.g16.lambdaQ1Pu = if g16.running.value then g16.RQ1PPu * g16.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(g16.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1791]] /* g16.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4559;
}

/*
equation index: 4560
type: SIMPLE_ASSIGN
g16.iStatorPu.im = if g16.running.value then g16.rTfoPu * g16.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4560;
}

/*
equation index: 4561
type: SIMPLE_ASSIGN
g16.IStatorPu = if g16.running.value then if g16.iStatorPu.re == 0.0 and g16.iStatorPu.im == 0.0 then 0.0 else (g16.iStatorPu.re ^ 2.0 + g16.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4561};
  modelica_real tmp685;
  modelica_real tmp686;
  modelica_real tmp687;
  modelica_boolean tmp688;
  modelica_real tmp689;
  modelica_boolean tmp690;
  modelica_real tmp691;
  tmp690 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp690)
  {
    tmp688 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) == 0.0));
    if(tmp688)
    {
      tmp689 = 0.0;
    }
    else
    {
      tmp685 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */);
      tmp686 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */);
      tmp687 = (tmp685 * tmp685) + (tmp686 * tmp686);
      if(tmp687 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp687, 0.5);
      }
      tmp689 = sqrt(tmp687);
    }
    tmp691 = tmp689;
  }
  else
  {
    tmp691 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1704]] /* g16.IStatorPu variable */) = tmp691;
  threadData->lastEquationSolved = 4561;
}

/*
equation index: 4562
type: SIMPLE_ASSIGN
g16.uStatorPu.im = if g16.running.value then (g16.terminal.V.im + (-100.0) * (g16.terminal.i.re * g16.XTfoPu + g16.terminal.i.im * g16.RTfoPu) / g16.SNom) / g16.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */),"g16.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4562;
}

/*
equation index: 4563
type: SIMPLE_ASSIGN
g16.uStatorPu.re = if g16.running.value then (g16.terminal.V.re + (-100.0) * (g16.terminal.i.re * g16.RTfoPu - g16.terminal.i.im * g16.XTfoPu) / g16.SNom) / g16.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */),"g16.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4563;
}

/*
equation index: 4564
type: SIMPLE_ASSIGN
g16.sStatorPu.im = if g16.running.value then g16.uStatorPu.im * g16.iStatorPu.re - g16.uStatorPu.re * g16.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* g16.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4564;
}

/*
equation index: 4565
type: SIMPLE_ASSIGN
g16.QStatorPu = if g16.running.value then -g16.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1712]] /* g16.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* g16.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4565;
}

/*
equation index: 4566
type: SIMPLE_ASSIGN
g16.QStatorPuQNom = if g16.running.value then 100.0 * g16.QStatorPu / g16.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1713]] /* g16.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1712]] /* g16.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* g16.QNomAlt PARAM */),"g16.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4566;
}

/*
equation index: 4567
type: SIMPLE_ASSIGN
g16.sStatorPu.re = if g16.running.value then g16.uStatorPu.re * g16.iStatorPu.re + g16.uStatorPu.im * g16.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1736]] /* g16.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4567;
}

/*
equation index: 4568
type: SIMPLE_ASSIGN
g16.QGenPu = if g16.running.value then g16.terminal.V.re * g16.terminal.i.im - g16.terminal.V.im * g16.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1711]] /* g16.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4568;
}

/*
equation index: 4569
type: SIMPLE_ASSIGN
g16.QGen = if g16.running.value then 100.0 * g16.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* g16.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1711]] /* g16.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4569;
}

/*
equation index: 4570
type: SIMPLE_ASSIGN
trafo_g16_4051.Q1Pu = g16.terminal.V.re * g16.terminal.i.im - g16.terminal.V.im * g16.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3334]] /* trafo_g16_4051.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4570;
}

/*
equation index: 4571
type: SIMPLE_ASSIGN
trafo_g16_4051.P1Pu = (-g16.terminal.V.re) * g16.terminal.i.re - g16.terminal.V.im * g16.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3332]] /* trafo_g16_4051.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4571;
}

/*
equation index: 4572
type: SIMPLE_ASSIGN
trafo_g16_4051.U2Pu = if trafo_g16_4051.running.value then if line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal2.V.re ^ 2.0 + line_4045_4051b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4572};
  modelica_real tmp692;
  modelica_real tmp693;
  modelica_real tmp694;
  modelica_boolean tmp695;
  modelica_real tmp696;
  modelica_boolean tmp697;
  modelica_real tmp698;
  tmp697 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp697)
  {
    tmp695 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0));
    if(tmp695)
    {
      tmp696 = 0.0;
    }
    else
    {
      tmp692 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
      tmp693 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
      tmp694 = (tmp692 * tmp692) + (tmp693 * tmp693);
      if(tmp694 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp694, 0.5);
      }
      tmp696 = sqrt(tmp694);
    }
    tmp698 = tmp696;
  }
  else
  {
    tmp698 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3337]] /* trafo_g16_4051.U2Pu variable */) = tmp698;
  threadData->lastEquationSolved = 4572;
}

/*
equation index: 4573
type: SIMPLE_ASSIGN
trafo_g16_4051.Q2Pu = line_4045_4051b.terminal2.V.im * trafo_g16_4051.terminal2.i.re - line_4045_4051b.terminal2.V.re * trafo_g16_4051.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3335]] /* trafo_g16_4051.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4573;
}

/*
equation index: 4574
type: SIMPLE_ASSIGN
trafo_g16_4051.P2Pu = line_4045_4051b.terminal2.V.re * trafo_g16_4051.terminal2.i.re + line_4045_4051b.terminal2.V.im * trafo_g16_4051.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3333]] /* trafo_g16_4051.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4574;
}

/*
equation index: 4575
type: SIMPLE_ASSIGN
trafo_51_4051.U2Pu = if trafo_51_4051.running.value then if line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal2.V.re ^ 2.0 + line_4045_4051b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4575};
  modelica_real tmp699;
  modelica_real tmp700;
  modelica_real tmp701;
  modelica_boolean tmp702;
  modelica_real tmp703;
  modelica_boolean tmp704;
  modelica_real tmp705;
  tmp704 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp704)
  {
    tmp702 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0));
    if(tmp702)
    {
      tmp703 = 0.0;
    }
    else
    {
      tmp699 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
      tmp700 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
      tmp701 = (tmp699 * tmp699) + (tmp700 * tmp700);
      if(tmp701 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp701, 0.5);
      }
      tmp703 = sqrt(tmp701);
    }
    tmp705 = tmp703;
  }
  else
  {
    tmp705 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3219]] /* trafo_51_4051.U2Pu variable */) = tmp705;
  threadData->lastEquationSolved = 4575;
}

/*
equation index: 4576
type: SIMPLE_ASSIGN
trafo_51_4051.U1Pu = if trafo_51_4051.running.value then if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4576};
  modelica_real tmp706;
  modelica_real tmp707;
  modelica_real tmp708;
  modelica_boolean tmp709;
  modelica_real tmp710;
  modelica_boolean tmp711;
  modelica_real tmp712;
  tmp711 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp711)
  {
    tmp709 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
    if(tmp709)
    {
      tmp710 = 0.0;
    }
    else
    {
      tmp706 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
      tmp707 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
      tmp708 = (tmp706 * tmp706) + (tmp707 * tmp707);
      if(tmp708 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp708, 0.5);
      }
      tmp710 = sqrt(tmp708);
    }
    tmp712 = tmp710;
  }
  else
  {
    tmp712 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3218]] /* trafo_51_4051.U1Pu variable */) = tmp712;
  threadData->lastEquationSolved = 4576;
}

/*
equation index: 4577
type: SIMPLE_ASSIGN
trafo_51_4051.Q1Pu = load_51.terminal.V.im * trafo_51_4051.terminal1.i.re - load_51.terminal.V.re * trafo_51_4051.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3216]] /* trafo_51_4051.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4577;
}

/*
equation index: 4578
type: SIMPLE_ASSIGN
trafo_51_4051.P1Pu = load_51.terminal.V.re * trafo_51_4051.terminal1.i.re + load_51.terminal.V.im * trafo_51_4051.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3214]] /* trafo_51_4051.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4578;
}

/*
equation index: 4579
type: SIMPLE_ASSIGN
load_51.UPu.value = if load_51.running.value then (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4579};
  modelica_real tmp713;
  modelica_real tmp714;
  modelica_real tmp715;
  modelica_boolean tmp716;
  modelica_real tmp717;
  tmp716 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */);
  if(tmp716)
  {
    tmp713 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
    tmp714 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
    tmp715 = (tmp713 * tmp713) + (tmp714 * tmp714);
    if(tmp715 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp715, 0.5);
    }
    tmp717 = sqrt(tmp715);
  }
  else
  {
    tmp717 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2886]] /* load_51.UPu.value variable */) = tmp717;
  threadData->lastEquationSolved = 4579;
}

/*
equation index: 4580
type: SIMPLE_ASSIGN
bus_B51.UPhase = Modelica.Math.atan3(load_51.terminal.V.im, load_51.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* bus_B51.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4580;
}

/*
equation index: 4581
type: SIMPLE_ASSIGN
bus_B51.UPu = if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4581};
  modelica_real tmp718;
  modelica_real tmp719;
  modelica_real tmp720;
  modelica_boolean tmp721;
  modelica_real tmp722;
  tmp721 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
  if(tmp721)
  {
    tmp722 = 0.0;
  }
  else
  {
    tmp718 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
    tmp719 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
    tmp720 = (tmp718 * tmp718) + (tmp719 * tmp719);
    if(tmp720 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp720, 0.5);
    }
    tmp722 = sqrt(tmp720);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* bus_B51.UPu variable */) = tmp722;
  threadData->lastEquationSolved = 4581;
}

/*
equation index: 4582
type: SIMPLE_ASSIGN
bus_B51.U = bus_B51.UPu * bus_B51.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* bus_B51.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* bus_B51.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* bus_B51.UNom PARAM */));
  threadData->lastEquationSolved = 4582;
}

/*
equation index: 4583
type: SIMPLE_ASSIGN
trafo_51_4051.Q2Pu = line_4045_4051b.terminal2.V.im * trafo_51_4051.terminal2.i.re - line_4045_4051b.terminal2.V.re * trafo_51_4051.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* trafo_51_4051.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4583;
}

/*
equation index: 4584
type: SIMPLE_ASSIGN
trafo_51_4051.P2Pu = line_4045_4051b.terminal2.V.re * trafo_51_4051.terminal2.i.re + line_4045_4051b.terminal2.V.im * trafo_51_4051.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3215]] /* trafo_51_4051.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4584;
}

/*
equation index: 4585
type: SIMPLE_ASSIGN
bus_4051.UPu = shunt_4051.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* bus_4051.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */);
  threadData->lastEquationSolved = 4585;
}

/*
equation index: 4586
type: SIMPLE_ASSIGN
bus_4051.U = bus_4051.UPu * bus_4051.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* bus_4051.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* bus_4051.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* bus_4051.UNom PARAM */));
  threadData->lastEquationSolved = 4586;
}

/*
equation index: 4587
type: SIMPLE_ASSIGN
line_4045_4051b.Q2Pu = line_4045_4051b.terminal2.V.im * line_4045_4051b.terminal2.i.re - line_4045_4051b.terminal2.V.re * line_4045_4051b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2693]] /* line_4045_4051b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4587;
}

/*
equation index: 4588
type: SIMPLE_ASSIGN
line_4045_4051b.P2Pu = line_4045_4051b.terminal2.V.re * line_4045_4051b.terminal2.i.re + line_4045_4051b.terminal2.V.im * line_4045_4051b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2691]] /* line_4045_4051b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4588;
}

/*
equation index: 4589
type: SIMPLE_ASSIGN
line_4045_4051b.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4051b.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4051b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2692]] /* line_4045_4051b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4589;
}

/*
equation index: 4590
type: SIMPLE_ASSIGN
line_4045_4051b.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4051b.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4051b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2690]] /* line_4045_4051b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4590;
}

/*
equation index: 4591
type: SIMPLE_ASSIGN
line_4045_4051a.Q2Pu = line_4045_4051b.terminal2.V.im * line_4045_4051a.terminal2.i.re - line_4045_4051b.terminal2.V.re * line_4045_4051a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2685]] /* line_4045_4051a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4591;
}

/*
equation index: 4592
type: SIMPLE_ASSIGN
line_4045_4051a.P2Pu = line_4045_4051b.terminal2.V.re * line_4045_4051a.terminal2.i.re + line_4045_4051b.terminal2.V.im * line_4045_4051a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2683]] /* line_4045_4051a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4592;
}

/*
equation index: 4593
type: SIMPLE_ASSIGN
line_4045_4051a.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4051a.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4051a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2684]] /* line_4045_4051a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4593;
}

/*
equation index: 4594
type: SIMPLE_ASSIGN
line_4045_4051a.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4051a.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4051a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2682]] /* line_4045_4051a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4594;
}

/*
equation index: 4595
type: SIMPLE_ASSIGN
bus_4051.UPhase = Modelica.Math.atan3(line_4045_4051b.terminal2.V.im, line_4045_4051b.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* bus_4051.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4595;
}

/*
equation index: 4596
type: SIMPLE_ASSIGN
line_4044_4045a.Q2Pu = line_4045_4051b.terminal1.V.im * line_4044_4045a.terminal2.i.re - line_4045_4051b.terminal1.V.re * line_4044_4045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2667]] /* line_4044_4045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4596;
}

/*
equation index: 4597
type: SIMPLE_ASSIGN
line_4044_4045a.P2Pu = line_4045_4051b.terminal1.V.re * line_4044_4045a.terminal2.i.re + line_4045_4051b.terminal1.V.im * line_4044_4045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2665]] /* line_4044_4045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4597;
}

/*
equation index: 4598
type: SIMPLE_ASSIGN
bus_4045.UPhase = Modelica.Math.atan3(line_4045_4051b.terminal1.V.im, line_4045_4051b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* bus_4045.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4598;
}

/*
equation index: 4599
type: SIMPLE_ASSIGN
bus_4045.UPu = if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4599};
  modelica_real tmp723;
  modelica_real tmp724;
  modelica_real tmp725;
  modelica_boolean tmp726;
  modelica_real tmp727;
  tmp726 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
  if(tmp726)
  {
    tmp727 = 0.0;
  }
  else
  {
    tmp723 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
    tmp724 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
    tmp725 = (tmp723 * tmp723) + (tmp724 * tmp724);
    if(tmp725 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp725, 0.5);
    }
    tmp727 = sqrt(tmp725);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* bus_4045.UPu variable */) = tmp727;
  threadData->lastEquationSolved = 4599;
}

/*
equation index: 4600
type: SIMPLE_ASSIGN
bus_4045.U = bus_4045.UPu * bus_4045.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* bus_4045.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* bus_4045.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* bus_4045.UNom PARAM */));
  threadData->lastEquationSolved = 4600;
}

/*
equation index: 4601
type: SIMPLE_ASSIGN
trafo_1045_4045b.Q2Pu = line_4045_4051b.terminal1.V.im * trafo_1045_4045b.terminal2.i.re - line_4045_4051b.terminal1.V.re * trafo_1045_4045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* trafo_1045_4045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4601;
}

/*
equation index: 4602
type: SIMPLE_ASSIGN
trafo_1045_4045b.P2Pu = line_4045_4051b.terminal1.V.re * trafo_1045_4045b.terminal2.i.re + line_4045_4051b.terminal1.V.im * trafo_1045_4045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* trafo_1045_4045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4602;
}

/*
equation index: 4603
type: SIMPLE_ASSIGN
trafo_1045_4045a.U1Pu = if trafo_1045_4045a.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4603};
  modelica_real tmp728;
  modelica_real tmp729;
  modelica_real tmp730;
  modelica_boolean tmp731;
  modelica_real tmp732;
  modelica_boolean tmp733;
  modelica_real tmp734;
  tmp733 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp733)
  {
    tmp731 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp731)
    {
      tmp732 = 0.0;
    }
    else
    {
      tmp728 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp729 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp730 = (tmp728 * tmp728) + (tmp729 * tmp729);
      if(tmp730 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp730, 0.5);
      }
      tmp732 = sqrt(tmp730);
    }
    tmp734 = tmp732;
  }
  else
  {
    tmp734 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3038]] /* trafo_1045_4045a.U1Pu variable */) = tmp734;
  threadData->lastEquationSolved = 4603;
}

/*
equation index: 4604
type: SIMPLE_ASSIGN
trafo_1045_4045a.Q1Pu = line_1042_1045.terminal2.V.im * trafo_1045_4045a.terminal1.i.re - line_1042_1045.terminal2.V.re * trafo_1045_4045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* trafo_1045_4045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4604;
}

/*
equation index: 4605
type: SIMPLE_ASSIGN
trafo_1045_4045a.P1Pu = line_1042_1045.terminal2.V.re * trafo_1045_4045a.terminal1.i.re + line_1042_1045.terminal2.V.im * trafo_1045_4045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* trafo_1045_4045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4605;
}

/*
equation index: 4606
type: SIMPLE_ASSIGN
trafo_5_1045.U2Pu = if trafo_5_1045.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4606};
  modelica_real tmp735;
  modelica_real tmp736;
  modelica_real tmp737;
  modelica_boolean tmp738;
  modelica_real tmp739;
  modelica_boolean tmp740;
  modelica_real tmp741;
  tmp740 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp740)
  {
    tmp738 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp738)
    {
      tmp739 = 0.0;
    }
    else
    {
      tmp735 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp736 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp737 = (tmp735 * tmp735) + (tmp736 * tmp736);
      if(tmp737 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp737, 0.5);
      }
      tmp739 = sqrt(tmp737);
    }
    tmp741 = tmp739;
  }
  else
  {
    tmp741 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3229]] /* trafo_5_1045.U2Pu variable */) = tmp741;
  threadData->lastEquationSolved = 4606;
}

/*
equation index: 4607
type: SIMPLE_ASSIGN
trafo_5_1045.Q2Pu = line_1042_1045.terminal2.V.im * trafo_5_1045.terminal2.i.re - line_1042_1045.terminal2.V.re * trafo_5_1045.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* trafo_5_1045.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4607;
}

/*
equation index: 4608
type: SIMPLE_ASSIGN
trafo_5_1045.P2Pu = line_1042_1045.terminal2.V.re * trafo_5_1045.terminal2.i.re + line_1042_1045.terminal2.V.im * trafo_5_1045.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* trafo_5_1045.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4608;
}

/*
equation index: 4609
type: SIMPLE_ASSIGN
bus_1045.UPu = shunt_1045.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* bus_1045.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */);
  threadData->lastEquationSolved = 4609;
}

/*
equation index: 4610
type: SIMPLE_ASSIGN
bus_1045.U = bus_1045.UPu * bus_1045.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* bus_1045.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* bus_1045.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* bus_1045.UNom PARAM */));
  threadData->lastEquationSolved = 4610;
}

/*
equation index: 4611
type: SIMPLE_ASSIGN
line_1042_1045.Q2Pu = line_1042_1045.terminal2.V.im * line_1042_1045.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1042_1045.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2421]] /* line_1042_1045.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4611;
}

/*
equation index: 4612
type: SIMPLE_ASSIGN
line_1042_1045.P2Pu = line_1042_1045.terminal2.V.re * line_1042_1045.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1042_1045.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2419]] /* line_1042_1045.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4612;
}

/*
equation index: 4613
type: SIMPLE_ASSIGN
check_UPu_bus_1042 = (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4613};
  modelica_real tmp742;
  modelica_real tmp743;
  modelica_real tmp744;
  tmp742 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
  tmp743 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
  tmp744 = (tmp742 * tmp742) + (tmp743 * tmp743);
  if(tmp744 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp744, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* check_UPu_bus_1042 variable */) = sqrt(tmp744);
  threadData->lastEquationSolved = 4613;
}

/*
equation index: 4614
type: SIMPLE_ASSIGN
trafo_g6_1042.U2Pu = if trafo_g6_1042.running.value then if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4614};
  modelica_real tmp745;
  modelica_real tmp746;
  modelica_real tmp747;
  modelica_boolean tmp748;
  modelica_real tmp749;
  modelica_boolean tmp750;
  modelica_real tmp751;
  tmp750 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp750)
  {
    tmp748 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0));
    if(tmp748)
    {
      tmp749 = 0.0;
    }
    else
    {
      tmp745 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
      tmp746 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
      tmp747 = (tmp745 * tmp745) + (tmp746 * tmp746);
      if(tmp747 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp747, 0.5);
      }
      tmp749 = sqrt(tmp747);
    }
    tmp751 = tmp749;
  }
  else
  {
    tmp751 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3419]] /* trafo_g6_1042.U2Pu variable */) = tmp751;
  threadData->lastEquationSolved = 4614;
}

/*
equation index: 4615
type: SIMPLE_ASSIGN
trafo_2_1042.U2Pu = if trafo_2_1042.running.value then if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4615};
  modelica_real tmp752;
  modelica_real tmp753;
  modelica_real tmp754;
  modelica_boolean tmp755;
  modelica_real tmp756;
  modelica_boolean tmp757;
  modelica_real tmp758;
  tmp757 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp757)
  {
    tmp755 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0));
    if(tmp755)
    {
      tmp756 = 0.0;
    }
    else
    {
      tmp752 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
      tmp753 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
      tmp754 = (tmp752 * tmp752) + (tmp753 * tmp753);
      if(tmp754 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp754, 0.5);
      }
      tmp756 = sqrt(tmp754);
    }
    tmp758 = tmp756;
  }
  else
  {
    tmp758 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3119]] /* trafo_2_1042.U2Pu variable */) = tmp758;
  threadData->lastEquationSolved = 4615;
}

/*
equation index: 4616
type: SIMPLE_ASSIGN
trafo_2_1042.U1Pu = if trafo_2_1042.running.value then if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4616};
  modelica_real tmp759;
  modelica_real tmp760;
  modelica_real tmp761;
  modelica_boolean tmp762;
  modelica_real tmp763;
  modelica_boolean tmp764;
  modelica_real tmp765;
  tmp764 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp764)
  {
    tmp762 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
    if(tmp762)
    {
      tmp763 = 0.0;
    }
    else
    {
      tmp759 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
      tmp760 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
      tmp761 = (tmp759 * tmp759) + (tmp760 * tmp760);
      if(tmp761 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp761, 0.5);
      }
      tmp763 = sqrt(tmp761);
    }
    tmp765 = tmp763;
  }
  else
  {
    tmp765 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3118]] /* trafo_2_1042.U1Pu variable */) = tmp765;
  threadData->lastEquationSolved = 4616;
}

/*
equation index: 4617
type: SIMPLE_ASSIGN
load_02.UPu.value = if load_02.running.value then (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4617};
  modelica_real tmp766;
  modelica_real tmp767;
  modelica_real tmp768;
  modelica_boolean tmp769;
  modelica_real tmp770;
  tmp769 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */);
  if(tmp769)
  {
    tmp766 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
    tmp767 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
    tmp768 = (tmp766 * tmp766) + (tmp767 * tmp767);
    if(tmp768 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp768, 0.5);
    }
    tmp770 = sqrt(tmp768);
  }
  else
  {
    tmp770 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2781]] /* load_02.UPu.value variable */) = tmp770;
  threadData->lastEquationSolved = 4617;
}

/*
equation index: 4618
type: SIMPLE_ASSIGN
trafo_2_1042.Q1Pu = load_02.terminal.V.im * trafo_2_1042.terminal1.i.re - load_02.terminal.V.re * trafo_2_1042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3116]] /* trafo_2_1042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4618;
}

/*
equation index: 4619
type: SIMPLE_ASSIGN
trafo_2_1042.P1Pu = load_02.terminal.V.re * trafo_2_1042.terminal1.i.re + load_02.terminal.V.im * trafo_2_1042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3114]] /* trafo_2_1042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4619;
}

/*
equation index: 4620
type: SIMPLE_ASSIGN
bus_B02.UPhase = Modelica.Math.atan3(load_02.terminal.V.im, load_02.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* bus_B02.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4620;
}

/*
equation index: 4621
type: SIMPLE_ASSIGN
bus_B02.UPu = if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4621};
  modelica_real tmp771;
  modelica_real tmp772;
  modelica_real tmp773;
  modelica_boolean tmp774;
  modelica_real tmp775;
  tmp774 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
  if(tmp774)
  {
    tmp775 = 0.0;
  }
  else
  {
    tmp771 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
    tmp772 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
    tmp773 = (tmp771 * tmp771) + (tmp772 * tmp772);
    if(tmp773 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp773, 0.5);
    }
    tmp775 = sqrt(tmp773);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* bus_B02.UPu variable */) = tmp775;
  threadData->lastEquationSolved = 4621;
}

/*
equation index: 4622
type: SIMPLE_ASSIGN
bus_B02.U = bus_B02.UPu * bus_B02.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* bus_B02.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* bus_B02.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* bus_B02.UNom PARAM */));
  threadData->lastEquationSolved = 4622;
}

/*
equation index: 4623
type: SIMPLE_ASSIGN
trafo_2_1042.Q2Pu = line_1042_1045.terminal1.V.im * trafo_2_1042.terminal2.i.re - line_1042_1045.terminal1.V.re * trafo_2_1042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3117]] /* trafo_2_1042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4623;
}

/*
equation index: 4624
type: SIMPLE_ASSIGN
trafo_2_1042.P2Pu = line_1042_1045.terminal1.V.re * trafo_2_1042.terminal2.i.re + line_1042_1045.terminal1.V.im * trafo_2_1042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3115]] /* trafo_2_1042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4624;
}

/*
equation index: 4625
type: SIMPLE_ASSIGN
line_1042_1045.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1045.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1045.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2420]] /* line_1042_1045.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4625;
}

/*
equation index: 4626
type: SIMPLE_ASSIGN
line_1042_1045.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1045.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1045.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2418]] /* line_1042_1045.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4626;
}

/*
equation index: 4627
type: SIMPLE_ASSIGN
line_1042_1044b.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1044b.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2412]] /* line_1042_1044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4627;
}

/*
equation index: 4628
type: SIMPLE_ASSIGN
line_1042_1044b.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1044b.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2410]] /* line_1042_1044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4628;
}

/*
equation index: 4629
type: SIMPLE_ASSIGN
trafo_1044_4044b.U1Pu = if trafo_1044_4044b.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4629};
  modelica_real tmp776;
  modelica_real tmp777;
  modelica_real tmp778;
  modelica_boolean tmp779;
  modelica_real tmp780;
  modelica_boolean tmp781;
  modelica_real tmp782;
  tmp781 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp781)
  {
    tmp779 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp779)
    {
      tmp780 = 0.0;
    }
    else
    {
      tmp776 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp777 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp778 = (tmp776 * tmp776) + (tmp777 * tmp777);
      if(tmp778 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp778, 0.5);
      }
      tmp780 = sqrt(tmp778);
    }
    tmp782 = tmp780;
  }
  else
  {
    tmp782 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* trafo_1044_4044b.U1Pu variable */) = tmp782;
  threadData->lastEquationSolved = 4629;
}

/*
equation index: 4630
type: SIMPLE_ASSIGN
trafo_1044_4044b.Q1Pu = line_1043_1044a.terminal2.V.im * trafo_1044_4044b.terminal1.i.re - line_1043_1044a.terminal2.V.re * trafo_1044_4044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3026]] /* trafo_1044_4044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4630;
}

/*
equation index: 4631
type: SIMPLE_ASSIGN
trafo_1044_4044b.P1Pu = line_1043_1044a.terminal2.V.re * trafo_1044_4044b.terminal1.i.re + line_1043_1044a.terminal2.V.im * trafo_1044_4044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3024]] /* trafo_1044_4044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4631;
}

/*
equation index: 4632
type: SIMPLE_ASSIGN
trafo_1044_4044b.U2Pu = if trafo_1044_4044b.running.value then if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4632};
  modelica_real tmp783;
  modelica_real tmp784;
  modelica_real tmp785;
  modelica_boolean tmp786;
  modelica_real tmp787;
  modelica_boolean tmp788;
  modelica_real tmp789;
  tmp788 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp788)
  {
    tmp786 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
    if(tmp786)
    {
      tmp787 = 0.0;
    }
    else
    {
      tmp783 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
      tmp784 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
      tmp785 = (tmp783 * tmp783) + (tmp784 * tmp784);
      if(tmp785 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp785, 0.5);
      }
      tmp787 = sqrt(tmp785);
    }
    tmp789 = tmp787;
  }
  else
  {
    tmp789 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* trafo_1044_4044b.U2Pu variable */) = tmp789;
  threadData->lastEquationSolved = 4632;
}

/*
equation index: 4633
type: SIMPLE_ASSIGN
trafo_1044_4044a.U2Pu = if trafo_1044_4044a.running.value then if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4633};
  modelica_real tmp790;
  modelica_real tmp791;
  modelica_real tmp792;
  modelica_boolean tmp793;
  modelica_real tmp794;
  modelica_boolean tmp795;
  modelica_real tmp796;
  tmp795 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp795)
  {
    tmp793 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
    if(tmp793)
    {
      tmp794 = 0.0;
    }
    else
    {
      tmp790 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
      tmp791 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
      tmp792 = (tmp790 * tmp790) + (tmp791 * tmp791);
      if(tmp792 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp792, 0.5);
      }
      tmp794 = sqrt(tmp792);
    }
    tmp796 = tmp794;
  }
  else
  {
    tmp796 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3019]] /* trafo_1044_4044a.U2Pu variable */) = tmp796;
  threadData->lastEquationSolved = 4633;
}

/*
equation index: 4634
type: SIMPLE_ASSIGN
line_4044_4045b.Q2Pu = line_4045_4051b.terminal1.V.im * line_4044_4045b.terminal2.i.re - line_4045_4051b.terminal1.V.re * line_4044_4045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2677]] /* line_4044_4045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4634;
}

/*
equation index: 4635
type: SIMPLE_ASSIGN
line_4044_4045b.P2Pu = line_4045_4051b.terminal1.V.re * line_4044_4045b.terminal2.i.re + line_4045_4051b.terminal1.V.im * line_4044_4045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2675]] /* line_4044_4045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4635;
}

/*
equation index: 4636
type: SIMPLE_ASSIGN
line_4044_4045b.Q1Pu = line_4044_4045a.terminal1.V.im * line_4044_4045b.terminal1.i.re - line_4044_4045a.terminal1.V.re * line_4044_4045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2676]] /* line_4044_4045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4636;
}

/*
equation index: 4637
type: SIMPLE_ASSIGN
line_4044_4045b.P1Pu = line_4044_4045a.terminal1.V.re * line_4044_4045b.terminal1.i.re + line_4044_4045a.terminal1.V.im * line_4044_4045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2674]] /* line_4044_4045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4637;
}

/*
equation index: 4638
type: SIMPLE_ASSIGN
line_4044_4045a.Q1Pu = line_4044_4045a.terminal1.V.im * line_4044_4045a.terminal1.i.re - line_4044_4045a.terminal1.V.re * line_4044_4045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2666]] /* line_4044_4045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4638;
}

/*
equation index: 4639
type: SIMPLE_ASSIGN
line_4044_4045a.P1Pu = line_4044_4045a.terminal1.V.re * line_4044_4045a.terminal1.i.re + line_4044_4045a.terminal1.V.im * line_4044_4045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2664]] /* line_4044_4045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4639;
}

/*
equation index: 4640
type: SIMPLE_ASSIGN
trafo_1044_4044a.U1Pu = if trafo_1044_4044a.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4640};
  modelica_real tmp797;
  modelica_real tmp798;
  modelica_real tmp799;
  modelica_boolean tmp800;
  modelica_real tmp801;
  modelica_boolean tmp802;
  modelica_real tmp803;
  tmp802 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp802)
  {
    tmp800 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp800)
    {
      tmp801 = 0.0;
    }
    else
    {
      tmp797 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp798 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp799 = (tmp797 * tmp797) + (tmp798 * tmp798);
      if(tmp799 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp799, 0.5);
      }
      tmp801 = sqrt(tmp799);
    }
    tmp803 = tmp801;
  }
  else
  {
    tmp803 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3018]] /* trafo_1044_4044a.U1Pu variable */) = tmp803;
  threadData->lastEquationSolved = 4640;
}

/*
equation index: 4641
type: SIMPLE_ASSIGN
trafo_1044_4044a.Q1Pu = line_1043_1044a.terminal2.V.im * trafo_1044_4044a.terminal1.i.re - line_1043_1044a.terminal2.V.re * trafo_1044_4044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* trafo_1044_4044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4641;
}

/*
equation index: 4642
type: SIMPLE_ASSIGN
trafo_1044_4044a.P1Pu = line_1043_1044a.terminal2.V.re * trafo_1044_4044a.terminal1.i.re + line_1043_1044a.terminal2.V.im * trafo_1044_4044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* trafo_1044_4044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4642;
}

/*
equation index: 4643
type: SIMPLE_ASSIGN
trafo_1044_4044a.Q2Pu = line_4044_4045a.terminal1.V.im * trafo_1044_4044a.terminal2.i.re - line_4044_4045a.terminal1.V.re * trafo_1044_4044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3017]] /* trafo_1044_4044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4643;
}

/*
equation index: 4644
type: SIMPLE_ASSIGN
trafo_1044_4044a.P2Pu = line_4044_4045a.terminal1.V.re * trafo_1044_4044a.terminal2.i.re + line_4044_4045a.terminal1.V.im * trafo_1044_4044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* trafo_1044_4044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4644;
}

/*
equation index: 4645
type: SIMPLE_ASSIGN
trafo_4_1044.U2Pu = if trafo_4_1044.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4645};
  modelica_real tmp804;
  modelica_real tmp805;
  modelica_real tmp806;
  modelica_boolean tmp807;
  modelica_real tmp808;
  modelica_boolean tmp809;
  modelica_real tmp810;
  tmp809 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp809)
  {
    tmp807 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp807)
    {
      tmp808 = 0.0;
    }
    else
    {
      tmp804 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp805 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp806 = (tmp804 * tmp804) + (tmp805 * tmp805);
      if(tmp806 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp806, 0.5);
      }
      tmp808 = sqrt(tmp806);
    }
    tmp810 = tmp808;
  }
  else
  {
    tmp810 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3209]] /* trafo_4_1044.U2Pu variable */) = tmp810;
  threadData->lastEquationSolved = 4645;
}

/*
equation index: 4646
type: SIMPLE_ASSIGN
trafo_4_1044.U1Pu = if trafo_4_1044.running.value then if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4646};
  modelica_real tmp811;
  modelica_real tmp812;
  modelica_real tmp813;
  modelica_boolean tmp814;
  modelica_real tmp815;
  modelica_boolean tmp816;
  modelica_real tmp817;
  tmp816 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp816)
  {
    tmp814 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
    if(tmp814)
    {
      tmp815 = 0.0;
    }
    else
    {
      tmp811 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
      tmp812 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
      tmp813 = (tmp811 * tmp811) + (tmp812 * tmp812);
      if(tmp813 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp813, 0.5);
      }
      tmp815 = sqrt(tmp813);
    }
    tmp817 = tmp815;
  }
  else
  {
    tmp817 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3208]] /* trafo_4_1044.U1Pu variable */) = tmp817;
  threadData->lastEquationSolved = 4646;
}

/*
equation index: 4647
type: SIMPLE_ASSIGN
trafo_4_1044.Q1Pu = load_04.terminal.V.im * trafo_4_1044.terminal1.i.re - load_04.terminal.V.re * trafo_4_1044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3206]] /* trafo_4_1044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4647;
}

/*
equation index: 4648
type: SIMPLE_ASSIGN
trafo_4_1044.P1Pu = load_04.terminal.V.re * trafo_4_1044.terminal1.i.re + load_04.terminal.V.im * trafo_4_1044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3204]] /* trafo_4_1044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4648;
}

/*
equation index: 4649
type: SIMPLE_ASSIGN
load_04.UPu.value = if load_04.running.value then (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4649};
  modelica_real tmp818;
  modelica_real tmp819;
  modelica_real tmp820;
  modelica_boolean tmp821;
  modelica_real tmp822;
  tmp821 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */);
  if(tmp821)
  {
    tmp818 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
    tmp819 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
    tmp820 = (tmp818 * tmp818) + (tmp819 * tmp819);
    if(tmp820 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp820, 0.5);
    }
    tmp822 = sqrt(tmp820);
  }
  else
  {
    tmp822 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2795]] /* load_04.UPu.value variable */) = tmp822;
  threadData->lastEquationSolved = 4649;
}

/*
equation index: 4650
type: SIMPLE_ASSIGN
bus_B04.UPhase = Modelica.Math.atan3(load_04.terminal.V.im, load_04.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* bus_B04.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4650;
}

/*
equation index: 4651
type: SIMPLE_ASSIGN
bus_B04.UPu = if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4651};
  modelica_real tmp823;
  modelica_real tmp824;
  modelica_real tmp825;
  modelica_boolean tmp826;
  modelica_real tmp827;
  tmp826 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
  if(tmp826)
  {
    tmp827 = 0.0;
  }
  else
  {
    tmp823 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
    tmp824 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
    tmp825 = (tmp823 * tmp823) + (tmp824 * tmp824);
    if(tmp825 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp825, 0.5);
    }
    tmp827 = sqrt(tmp825);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* bus_B04.UPu variable */) = tmp827;
  threadData->lastEquationSolved = 4651;
}

/*
equation index: 4652
type: SIMPLE_ASSIGN
bus_B04.U = bus_B04.UPu * bus_B04.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* bus_B04.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* bus_B04.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* bus_B04.UNom PARAM */));
  threadData->lastEquationSolved = 4652;
}

/*
equation index: 4653
type: SIMPLE_ASSIGN
trafo_4_1044.Q2Pu = line_1043_1044a.terminal2.V.im * trafo_4_1044.terminal2.i.re - line_1043_1044a.terminal2.V.re * trafo_4_1044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3207]] /* trafo_4_1044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4653;
}

/*
equation index: 4654
type: SIMPLE_ASSIGN
trafo_4_1044.P2Pu = line_1043_1044a.terminal2.V.re * trafo_4_1044.terminal2.i.re + line_1043_1044a.terminal2.V.im * trafo_4_1044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3205]] /* trafo_4_1044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4654;
}

/*
equation index: 4655
type: SIMPLE_ASSIGN
bus_1044.UPu = shunt_1044.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* bus_1044.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */);
  threadData->lastEquationSolved = 4655;
}

/*
equation index: 4656
type: SIMPLE_ASSIGN
bus_1044.U = bus_1044.UPu * bus_1044.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* bus_1044.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* bus_1044.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* bus_1044.UNom PARAM */));
  threadData->lastEquationSolved = 4656;
}

/*
equation index: 4657
type: SIMPLE_ASSIGN
line_1042_1044b.Q2Pu = line_1043_1044a.terminal2.V.im * line_1042_1044b.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1042_1044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2413]] /* line_1042_1044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4657;
}

/*
equation index: 4658
type: SIMPLE_ASSIGN
line_1042_1044b.P2Pu = line_1043_1044a.terminal2.V.re * line_1042_1044b.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1042_1044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2411]] /* line_1042_1044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4658;
}

/*
equation index: 4659
type: SIMPLE_ASSIGN
bus_1044.UPhase = Modelica.Math.atan3(line_1043_1044a.terminal2.V.im, line_1043_1044a.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* bus_1044.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4659;
}

/*
equation index: 4660
type: SIMPLE_ASSIGN
line_1042_1044a.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1044a.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2404]] /* line_1042_1044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4660;
}

/*
equation index: 4661
type: SIMPLE_ASSIGN
line_1042_1044a.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1044a.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2402]] /* line_1042_1044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4661;
}

/*
equation index: 4662
type: SIMPLE_ASSIGN
line_1042_1044a.Q2Pu = line_1043_1044a.terminal2.V.im * line_1042_1044a.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1042_1044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2405]] /* line_1042_1044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4662;
}

/*
equation index: 4663
type: SIMPLE_ASSIGN
line_1042_1044a.P2Pu = line_1043_1044a.terminal2.V.re * line_1042_1044a.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1042_1044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2403]] /* line_1042_1044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4663;
}

/*
equation index: 4664
type: SIMPLE_ASSIGN
trafo_g7_1043.U2Pu = if trafo_g7_1043.running.value then if line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal1.V.re ^ 2.0 + line_1043_1044a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4664};
  modelica_real tmp828;
  modelica_real tmp829;
  modelica_real tmp830;
  modelica_boolean tmp831;
  modelica_real tmp832;
  modelica_boolean tmp833;
  modelica_real tmp834;
  tmp833 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp833)
  {
    tmp831 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0));
    if(tmp831)
    {
      tmp832 = 0.0;
    }
    else
    {
      tmp828 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
      tmp829 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
      tmp830 = (tmp828 * tmp828) + (tmp829 * tmp829);
      if(tmp830 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp830, 0.5);
      }
      tmp832 = sqrt(tmp830);
    }
    tmp834 = tmp832;
  }
  else
  {
    tmp834 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3427]] /* trafo_g7_1043.U2Pu variable */) = tmp834;
  threadData->lastEquationSolved = 4664;
}

/*
equation index: 4665
type: SIMPLE_ASSIGN
g07.uPu.im = if g07.running.value then g07.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* g07.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4665;
}

/*
equation index: 4666
type: SIMPLE_ASSIGN
g07.iStatorPu.im = if g07.running.value then g07.rTfoPu * g07.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4666;
}

/*
equation index: 4667
type: SIMPLE_ASSIGN
$DER.g07.lambdaDPu = if g07.running.value then g07.RDPPu * g07.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* der(g07.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[875]] /* g07.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4667;
}

/*
equation index: 4668
type: SIMPLE_ASSIGN
$DER.g07.lambdaQ1Pu = if g07.running.value then g07.RQ1PPu * g07.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* der(g07.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[876]] /* g07.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4668;
}

/*
equation index: 4669
type: SIMPLE_ASSIGN
$DER.g07.lambdaQ2Pu = if g07.running.value then g07.RQ2PPu * g07.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* der(g07.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* g07.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4669;
}

/*
equation index: 4670
type: SIMPLE_ASSIGN
g07.iStatorPu.re = if g07.running.value then g07.rTfoPu * g07.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4670;
}

/*
equation index: 4671
type: SIMPLE_ASSIGN
g07.IStatorPu = if g07.running.value then if g07.iStatorPu.re == 0.0 and g07.iStatorPu.im == 0.0 then 0.0 else (g07.iStatorPu.re ^ 2.0 + g07.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4671};
  modelica_real tmp835;
  modelica_real tmp836;
  modelica_real tmp837;
  modelica_boolean tmp838;
  modelica_real tmp839;
  modelica_boolean tmp840;
  modelica_real tmp841;
  tmp840 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp840)
  {
    tmp838 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) == 0.0));
    if(tmp838)
    {
      tmp839 = 0.0;
    }
    else
    {
      tmp835 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */);
      tmp836 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */);
      tmp837 = (tmp835 * tmp835) + (tmp836 * tmp836);
      if(tmp837 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp837, 0.5);
      }
      tmp839 = sqrt(tmp837);
    }
    tmp841 = tmp839;
  }
  else
  {
    tmp841 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* g07.IStatorPu variable */) = tmp841;
  threadData->lastEquationSolved = 4671;
}

/*
equation index: 4672
type: SIMPLE_ASSIGN
g07.uStatorPu.im = if g07.running.value then (g07.terminal.V.im + (-100.0) * (g07.terminal.i.re * g07.XTfoPu + g07.terminal.i.im * g07.RTfoPu) / g07.SNom) / g07.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */),"g07.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4672;
}

/*
equation index: 4673
type: SIMPLE_ASSIGN
g07.cePu = if g07.running.value then g07.lambdaqPu * g07.idPu - g07.lambdadPu * g07.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4673;
}

/*
equation index: 4674
type: SIMPLE_ASSIGN
g07.PePu = if g07.running.value then g07.cePu * g07.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1294]] /* g07.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4674;
}

/*
equation index: 4675
type: SIMPLE_ASSIGN
g07.thetaInternal.value = if g07.running.value then Modelica.Math.atan3(g07.udPu, g07.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* g07.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4675;
}

/*
equation index: 4676
type: SIMPLE_ASSIGN
g07.uStatorPu.re = if g07.running.value then (g07.terminal.V.re + (-100.0) * (g07.terminal.i.re * g07.RTfoPu - g07.terminal.i.im * g07.XTfoPu) / g07.SNom) / g07.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */),"g07.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4676;
}

/*
equation index: 4677
type: SIMPLE_ASSIGN
g07.sStatorPu.im = if g07.running.value then g07.uStatorPu.im * g07.iStatorPu.re - g07.uStatorPu.re * g07.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1321]] /* g07.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4677;
}

/*
equation index: 4678
type: SIMPLE_ASSIGN
g07.QStatorPu = if g07.running.value then -g07.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1298]] /* g07.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1321]] /* g07.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4678;
}

/*
equation index: 4679
type: SIMPLE_ASSIGN
g07.QStatorPuQNom = if g07.running.value then 100.0 * g07.QStatorPu / g07.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1299]] /* g07.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1298]] /* g07.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* g07.QNomAlt PARAM */),"g07.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4679;
}

/*
equation index: 4680
type: SIMPLE_ASSIGN
g07.sStatorPu.re = if g07.running.value then g07.uStatorPu.re * g07.iStatorPu.re + g07.uStatorPu.im * g07.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1322]] /* g07.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4680;
}

/*
equation index: 4681
type: SIMPLE_ASSIGN
g07.QGenPu = if g07.running.value then g07.terminal.V.re * g07.terminal.i.im - g07.terminal.V.im * g07.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* g07.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4681;
}

/*
equation index: 4682
type: SIMPLE_ASSIGN
g07.QGen = if g07.running.value then 100.0 * g07.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1296]] /* g07.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* g07.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4682;
}

/*
equation index: 4683
type: SIMPLE_ASSIGN
g07.UPu = if g07.running.value then (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4683};
  modelica_real tmp842;
  modelica_real tmp843;
  modelica_real tmp844;
  modelica_boolean tmp845;
  modelica_real tmp846;
  tmp845 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp845)
  {
    tmp842 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
    tmp843 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
    tmp844 = (tmp842 * tmp842) + (tmp843 * tmp843);
    if(tmp844 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp844, 0.5);
    }
    tmp846 = sqrt(tmp844);
  }
  else
  {
    tmp846 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1300]] /* g07.UPu variable */) = tmp846;
  threadData->lastEquationSolved = 4683;
}

/*
equation index: 4684
type: SIMPLE_ASSIGN
g07.uPu.re = if g07.running.value then g07.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* g07.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4684;
}

/*
equation index: 4685
type: SIMPLE_ASSIGN
trafo_g7_1043.U1Pu = if trafo_g7_1043.running.value then if g07.terminal.V.re == 0.0 and g07.terminal.V.im == 0.0 then 0.0 else (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4685};
  modelica_real tmp847;
  modelica_real tmp848;
  modelica_real tmp849;
  modelica_boolean tmp850;
  modelica_real tmp851;
  modelica_boolean tmp852;
  modelica_real tmp853;
  tmp852 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp852)
  {
    tmp850 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0));
    if(tmp850)
    {
      tmp851 = 0.0;
    }
    else
    {
      tmp847 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
      tmp848 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
      tmp849 = (tmp847 * tmp847) + (tmp848 * tmp848);
      if(tmp849 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp849, 0.5);
      }
      tmp851 = sqrt(tmp849);
    }
    tmp853 = tmp851;
  }
  else
  {
    tmp853 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3426]] /* trafo_g7_1043.U1Pu variable */) = tmp853;
  threadData->lastEquationSolved = 4685;
}

/*
equation index: 4686
type: SIMPLE_ASSIGN
trafo_g7_1043.Q1Pu = g07.terminal.V.re * g07.terminal.i.im - g07.terminal.V.im * g07.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3424]] /* trafo_g7_1043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4686;
}

/*
equation index: 4687
type: SIMPLE_ASSIGN
trafo_g7_1043.P1Pu = (-g07.terminal.V.re) * g07.terminal.i.re - g07.terminal.V.im * g07.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3422]] /* trafo_g7_1043.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4687;
}

/*
equation index: 4688
type: SIMPLE_ASSIGN
bus_BG07.UPhase = Modelica.Math.atan3(g07.terminal.V.im, g07.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* bus_BG07.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4688;
}

/*
equation index: 4689
type: SIMPLE_ASSIGN
bus_BG07.UPu = if g07.terminal.V.re == 0.0 and g07.terminal.V.im == 0.0 then 0.0 else (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4689};
  modelica_real tmp854;
  modelica_real tmp855;
  modelica_real tmp856;
  modelica_boolean tmp857;
  modelica_real tmp858;
  tmp857 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0));
  if(tmp857)
  {
    tmp858 = 0.0;
  }
  else
  {
    tmp854 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
    tmp855 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
    tmp856 = (tmp854 * tmp854) + (tmp855 * tmp855);
    if(tmp856 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp856, 0.5);
    }
    tmp858 = sqrt(tmp856);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* bus_BG07.UPu variable */) = tmp858;
  threadData->lastEquationSolved = 4689;
}

/*
equation index: 4690
type: SIMPLE_ASSIGN
bus_BG07.U = bus_BG07.UPu * bus_BG07.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* bus_BG07.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* bus_BG07.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* bus_BG07.UNom PARAM */));
  threadData->lastEquationSolved = 4690;
}

/*
equation index: 4691
type: SIMPLE_ASSIGN
trafo_g7_1043.Q2Pu = line_1043_1044a.terminal1.V.im * trafo_g7_1043.terminal2.i.re - line_1043_1044a.terminal1.V.re * trafo_g7_1043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3425]] /* trafo_g7_1043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4691;
}

/*
equation index: 4692
type: SIMPLE_ASSIGN
trafo_g7_1043.P2Pu = line_1043_1044a.terminal1.V.re * trafo_g7_1043.terminal2.i.re + line_1043_1044a.terminal1.V.im * trafo_g7_1043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3423]] /* trafo_g7_1043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4692;
}

/*
equation index: 4693
type: SIMPLE_ASSIGN
trafo_3_1043.U2Pu = if trafo_3_1043.running.value then if line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal1.V.re ^ 2.0 + line_1043_1044a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4693};
  modelica_real tmp859;
  modelica_real tmp860;
  modelica_real tmp861;
  modelica_boolean tmp862;
  modelica_real tmp863;
  modelica_boolean tmp864;
  modelica_real tmp865;
  tmp864 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp864)
  {
    tmp862 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0));
    if(tmp862)
    {
      tmp863 = 0.0;
    }
    else
    {
      tmp859 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
      tmp860 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
      tmp861 = (tmp859 * tmp859) + (tmp860 * tmp860);
      if(tmp861 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp861, 0.5);
      }
      tmp863 = sqrt(tmp861);
    }
    tmp865 = tmp863;
  }
  else
  {
    tmp865 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3149]] /* trafo_3_1043.U2Pu variable */) = tmp865;
  threadData->lastEquationSolved = 4693;
}

/*
equation index: 4694
type: SIMPLE_ASSIGN
bus_1043.UPu = shunt_1043.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* bus_1043.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */);
  threadData->lastEquationSolved = 4694;
}

/*
equation index: 4695
type: SIMPLE_ASSIGN
bus_1043.U = bus_1043.UPu * bus_1043.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* bus_1043.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* bus_1043.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* bus_1043.UNom PARAM */));
  threadData->lastEquationSolved = 4695;
}

/*
equation index: 4696
type: SIMPLE_ASSIGN
line_1043_1044b.Q2Pu = line_1043_1044a.terminal2.V.im * line_1043_1044b.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1043_1044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2445]] /* line_1043_1044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4696;
}

/*
equation index: 4697
type: SIMPLE_ASSIGN
line_1043_1044b.P2Pu = line_1043_1044a.terminal2.V.re * line_1043_1044b.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1043_1044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2443]] /* line_1043_1044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4697;
}

/*
equation index: 4698
type: SIMPLE_ASSIGN
line_1043_1044b.Q1Pu = line_1043_1044a.terminal1.V.im * line_1043_1044b.terminal1.i.re - line_1043_1044a.terminal1.V.re * line_1043_1044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2444]] /* line_1043_1044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4698;
}

/*
equation index: 4699
type: SIMPLE_ASSIGN
line_1043_1044b.P1Pu = line_1043_1044a.terminal1.V.re * line_1043_1044b.terminal1.i.re + line_1043_1044a.terminal1.V.im * line_1043_1044b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2442]] /* line_1043_1044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4699;
}

/*
equation index: 4700
type: SIMPLE_ASSIGN
line_1043_1044a.Q2Pu = line_1043_1044a.terminal2.V.im * line_1043_1044a.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1043_1044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2433]] /* line_1043_1044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4700;
}

/*
equation index: 4701
type: SIMPLE_ASSIGN
line_1043_1044a.P2Pu = line_1043_1044a.terminal2.V.re * line_1043_1044a.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1043_1044a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2431]] /* line_1043_1044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4701;
}

/*
equation index: 4702
type: SIMPLE_ASSIGN
line_1043_1044a.Q1Pu = line_1043_1044a.terminal1.V.im * line_1043_1044a.terminal1.i.re - line_1043_1044a.terminal1.V.re * line_1043_1044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2432]] /* line_1043_1044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4702;
}

/*
equation index: 4703
type: SIMPLE_ASSIGN
line_1043_1044a.P1Pu = line_1043_1044a.terminal1.V.re * line_1043_1044a.terminal1.i.re + line_1043_1044a.terminal1.V.im * line_1043_1044a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2430]] /* line_1043_1044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4703;
}

/*
equation index: 4704
type: SIMPLE_ASSIGN
line_1041_1043b.Q2Pu = line_1043_1044a.terminal1.V.im * line_1041_1043b.terminal2.i.re - line_1043_1044a.terminal1.V.re * line_1041_1043b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2381]] /* line_1041_1043b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4704;
}

/*
equation index: 4705
type: SIMPLE_ASSIGN
line_1041_1043b.P2Pu = line_1043_1044a.terminal1.V.re * line_1041_1043b.terminal2.i.re + line_1043_1044a.terminal1.V.im * line_1041_1043b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* line_1041_1043b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4705;
}

/*
equation index: 4706
type: SIMPLE_ASSIGN
check_UPu_bus_1041 = (line_1041_1043a.terminal1.V.re ^ 2.0 + line_1041_1043a.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4706};
  modelica_real tmp866;
  modelica_real tmp867;
  modelica_real tmp868;
  tmp866 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
  tmp867 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
  tmp868 = (tmp866 * tmp866) + (tmp867 * tmp867);
  if(tmp868 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp868, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* check_UPu_bus_1041 variable */) = sqrt(tmp868);
  threadData->lastEquationSolved = 4706;
}

/*
equation index: 4707
type: SIMPLE_ASSIGN
trafo_1_1041.U2Pu = if trafo_1_1041.running.value then if line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0 then 0.0 else (line_1041_1043a.terminal1.V.re ^ 2.0 + line_1041_1043a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4707};
  modelica_real tmp869;
  modelica_real tmp870;
  modelica_real tmp871;
  modelica_boolean tmp872;
  modelica_real tmp873;
  modelica_boolean tmp874;
  modelica_real tmp875;
  tmp874 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp874)
  {
    tmp872 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0));
    if(tmp872)
    {
      tmp873 = 0.0;
    }
    else
    {
      tmp869 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
      tmp870 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
      tmp871 = (tmp869 * tmp869) + (tmp870 * tmp870);
      if(tmp871 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp871, 0.5);
      }
      tmp873 = sqrt(tmp871);
    }
    tmp875 = tmp873;
  }
  else
  {
    tmp875 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3089]] /* trafo_1_1041.U2Pu variable */) = tmp875;
  threadData->lastEquationSolved = 4707;
}

/*
equation index: 4708
type: SIMPLE_ASSIGN
trafo_1_1041.U1Pu = if trafo_1_1041.running.value then if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4708};
  modelica_real tmp876;
  modelica_real tmp877;
  modelica_real tmp878;
  modelica_boolean tmp879;
  modelica_real tmp880;
  modelica_boolean tmp881;
  modelica_real tmp882;
  tmp881 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp881)
  {
    tmp879 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
    if(tmp879)
    {
      tmp880 = 0.0;
    }
    else
    {
      tmp876 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
      tmp877 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
      tmp878 = (tmp876 * tmp876) + (tmp877 * tmp877);
      if(tmp878 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp878, 0.5);
      }
      tmp880 = sqrt(tmp878);
    }
    tmp882 = tmp880;
  }
  else
  {
    tmp882 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3088]] /* trafo_1_1041.U1Pu variable */) = tmp882;
  threadData->lastEquationSolved = 4708;
}

/*
equation index: 4709
type: SIMPLE_ASSIGN
trafo_1_1041.Q1Pu = load_01.terminal.V.im * trafo_1_1041.terminal1.i.re - load_01.terminal.V.re * trafo_1_1041.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3086]] /* trafo_1_1041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4709;
}

/*
equation index: 4710
type: SIMPLE_ASSIGN
trafo_1_1041.P1Pu = load_01.terminal.V.re * trafo_1_1041.terminal1.i.re + load_01.terminal.V.im * trafo_1_1041.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3084]] /* trafo_1_1041.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4710;
}

/*
equation index: 4711
type: SIMPLE_ASSIGN
load_01.UPu.value = if load_01.running.value then (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4711};
  modelica_real tmp883;
  modelica_real tmp884;
  modelica_real tmp885;
  modelica_boolean tmp886;
  modelica_real tmp887;
  tmp886 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */);
  if(tmp886)
  {
    tmp883 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
    tmp884 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
    tmp885 = (tmp883 * tmp883) + (tmp884 * tmp884);
    if(tmp885 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp885, 0.5);
    }
    tmp887 = sqrt(tmp885);
  }
  else
  {
    tmp887 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2774]] /* load_01.UPu.value variable */) = tmp887;
  threadData->lastEquationSolved = 4711;
}

/*
equation index: 4712
type: SIMPLE_ASSIGN
bus_B01.UPhase = Modelica.Math.atan3(load_01.terminal.V.im, load_01.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* bus_B01.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4712;
}

/*
equation index: 4713
type: SIMPLE_ASSIGN
bus_B01.UPu = if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4713};
  modelica_real tmp888;
  modelica_real tmp889;
  modelica_real tmp890;
  modelica_boolean tmp891;
  modelica_real tmp892;
  tmp891 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
  if(tmp891)
  {
    tmp892 = 0.0;
  }
  else
  {
    tmp888 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
    tmp889 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
    tmp890 = (tmp888 * tmp888) + (tmp889 * tmp889);
    if(tmp890 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp890, 0.5);
    }
    tmp892 = sqrt(tmp890);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* bus_B01.UPu variable */) = tmp892;
  threadData->lastEquationSolved = 4713;
}

/*
equation index: 4714
type: SIMPLE_ASSIGN
bus_B01.U = bus_B01.UPu * bus_B01.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* bus_B01.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* bus_B01.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* bus_B01.UNom PARAM */));
  threadData->lastEquationSolved = 4714;
}

/*
equation index: 4715
type: SIMPLE_ASSIGN
trafo_1_1041.Q2Pu = line_1041_1043a.terminal1.V.im * trafo_1_1041.terminal2.i.re - line_1041_1043a.terminal1.V.re * trafo_1_1041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3087]] /* trafo_1_1041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4715;
}

/*
equation index: 4716
type: SIMPLE_ASSIGN
trafo_1_1041.P2Pu = line_1041_1043a.terminal1.V.re * trafo_1_1041.terminal2.i.re + line_1041_1043a.terminal1.V.im * trafo_1_1041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3085]] /* trafo_1_1041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4716;
}

/*
equation index: 4717
type: SIMPLE_ASSIGN
line_1041_1045b.Q2Pu = line_1042_1045.terminal2.V.im * line_1041_1045b.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1041_1045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2397]] /* line_1041_1045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4717;
}

/*
equation index: 4718
type: SIMPLE_ASSIGN
line_1041_1045b.P2Pu = line_1042_1045.terminal2.V.re * line_1041_1045b.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1041_1045b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2395]] /* line_1041_1045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4718;
}

/*
equation index: 4719
type: SIMPLE_ASSIGN
line_1041_1045b.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1045b.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2396]] /* line_1041_1045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4719;
}

/*
equation index: 4720
type: SIMPLE_ASSIGN
line_1041_1045b.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1045b.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1045b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2394]] /* line_1041_1045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4720;
}

/*
equation index: 4721
type: SIMPLE_ASSIGN
line_1041_1045a.Q2Pu = line_1042_1045.terminal2.V.im * line_1041_1045a.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1041_1045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2389]] /* line_1041_1045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4721;
}

/*
equation index: 4722
type: SIMPLE_ASSIGN
line_1041_1045a.P2Pu = line_1042_1045.terminal2.V.re * line_1041_1045a.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1041_1045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2387]] /* line_1041_1045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4722;
}

/*
equation index: 4723
type: SIMPLE_ASSIGN
line_1041_1045a.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1045a.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2388]] /* line_1041_1045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4723;
}

/*
equation index: 4724
type: SIMPLE_ASSIGN
line_1041_1045a.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1045a.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1045a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2386]] /* line_1041_1045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4724;
}

/*
equation index: 4725
type: SIMPLE_ASSIGN
line_1041_1043b.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1043b.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1043b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2380]] /* line_1041_1043b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4725;
}

/*
equation index: 4726
type: SIMPLE_ASSIGN
line_1041_1043b.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1043b.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1043b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2378]] /* line_1041_1043b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4726;
}

/*
equation index: 4727
type: SIMPLE_ASSIGN
line_1041_1043a.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1043a.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1043a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2370]] /* line_1041_1043a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4727;
}

/*
equation index: 4728
type: SIMPLE_ASSIGN
line_1041_1043a.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1043a.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1043a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2368]] /* line_1041_1043a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4728;
}

/*
equation index: 4729
type: SIMPLE_ASSIGN
line_1041_1043a.Q2Pu = line_1043_1044a.terminal1.V.im * line_1041_1043a.terminal2.i.re - line_1043_1044a.terminal1.V.re * line_1041_1043a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2371]] /* line_1041_1043a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4729;
}

/*
equation index: 4730
type: SIMPLE_ASSIGN
line_1041_1043a.P2Pu = line_1043_1044a.terminal1.V.re * line_1041_1043a.terminal2.i.re + line_1043_1044a.terminal1.V.im * line_1041_1043a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2369]] /* line_1041_1043a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4730;
}

/*
equation index: 4731
type: SIMPLE_ASSIGN
trafo_3_1043.U1Pu = if trafo_3_1043.running.value then if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  modelica_real tmp893;
  modelica_real tmp894;
  modelica_real tmp895;
  modelica_boolean tmp896;
  modelica_real tmp897;
  modelica_boolean tmp898;
  modelica_real tmp899;
  tmp898 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp898)
  {
    tmp896 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
    if(tmp896)
    {
      tmp897 = 0.0;
    }
    else
    {
      tmp893 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
      tmp894 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
      tmp895 = (tmp893 * tmp893) + (tmp894 * tmp894);
      if(tmp895 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp895, 0.5);
      }
      tmp897 = sqrt(tmp895);
    }
    tmp899 = tmp897;
  }
  else
  {
    tmp899 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3148]] /* trafo_3_1043.U1Pu variable */) = tmp899;
  threadData->lastEquationSolved = 4731;
}

/*
equation index: 4732
type: SIMPLE_ASSIGN
trafo_3_1043.Q1Pu = load_03.terminal.V.im * trafo_3_1043.terminal1.i.re - load_03.terminal.V.re * trafo_3_1043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3146]] /* trafo_3_1043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4732;
}

/*
equation index: 4733
type: SIMPLE_ASSIGN
trafo_3_1043.P1Pu = load_03.terminal.V.re * trafo_3_1043.terminal1.i.re + load_03.terminal.V.im * trafo_3_1043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3144]] /* trafo_3_1043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4733;
}

/*
equation index: 4734
type: SIMPLE_ASSIGN
load_03.UPu.value = if load_03.running.value then (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4734};
  modelica_real tmp900;
  modelica_real tmp901;
  modelica_real tmp902;
  modelica_boolean tmp903;
  modelica_real tmp904;
  tmp903 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */);
  if(tmp903)
  {
    tmp900 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
    tmp901 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
    tmp902 = (tmp900 * tmp900) + (tmp901 * tmp901);
    if(tmp902 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp902, 0.5);
    }
    tmp904 = sqrt(tmp902);
  }
  else
  {
    tmp904 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2788]] /* load_03.UPu.value variable */) = tmp904;
  threadData->lastEquationSolved = 4734;
}

/*
equation index: 4735
type: SIMPLE_ASSIGN
trafo_3_1043.Q2Pu = line_1043_1044a.terminal1.V.im * trafo_3_1043.terminal2.i.re - line_1043_1044a.terminal1.V.re * trafo_3_1043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3147]] /* trafo_3_1043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4735;
}

/*
equation index: 4736
type: SIMPLE_ASSIGN
trafo_3_1043.P2Pu = line_1043_1044a.terminal1.V.re * trafo_3_1043.terminal2.i.re + line_1043_1044a.terminal1.V.im * trafo_3_1043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3145]] /* trafo_3_1043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4736;
}

/*
equation index: 4737
type: SIMPLE_ASSIGN
bus_B03.UPhase = Modelica.Math.atan3(load_03.terminal.V.im, load_03.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* bus_B03.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4737;
}

/*
equation index: 4738
type: SIMPLE_ASSIGN
bus_B03.UPu = if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4738};
  modelica_real tmp905;
  modelica_real tmp906;
  modelica_real tmp907;
  modelica_boolean tmp908;
  modelica_real tmp909;
  tmp908 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
  if(tmp908)
  {
    tmp909 = 0.0;
  }
  else
  {
    tmp905 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
    tmp906 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
    tmp907 = (tmp905 * tmp905) + (tmp906 * tmp906);
    if(tmp907 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp907, 0.5);
    }
    tmp909 = sqrt(tmp907);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* bus_B03.UPu variable */) = tmp909;
  threadData->lastEquationSolved = 4738;
}

/*
equation index: 4739
type: SIMPLE_ASSIGN
bus_B03.U = bus_B03.UPu * bus_B03.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* bus_B03.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* bus_B03.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* bus_B03.UNom PARAM */));
  threadData->lastEquationSolved = 4739;
}

/*
equation index: 4740
type: SIMPLE_ASSIGN
bus_1043.UPhase = Modelica.Math.atan3(line_1043_1044a.terminal1.V.im, line_1043_1044a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* bus_1043.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4740;
}

/*
equation index: 4741
type: SIMPLE_ASSIGN
bus_1041.UPhase = Modelica.Math.atan3(line_1041_1043a.terminal1.V.im, line_1041_1043a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* bus_1041.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4741;
}

/*
equation index: 4742
type: SIMPLE_ASSIGN
bus_1041.UPu = if line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_1041
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* bus_1041.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* check_UPu_bus_1041 variable */));
  threadData->lastEquationSolved = 4742;
}

/*
equation index: 4743
type: SIMPLE_ASSIGN
bus_1041.U = bus_1041.UPu * bus_1041.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* bus_1041.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* bus_1041.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* bus_1041.UNom PARAM */));
  threadData->lastEquationSolved = 4743;
}

/*
equation index: 4744
type: SIMPLE_ASSIGN
bus_1045.UPhase = Modelica.Math.atan3(line_1042_1045.terminal2.V.im, line_1042_1045.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* bus_1045.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4744;
}

/*
equation index: 4745
type: SIMPLE_ASSIGN
trafo_1045_4045a.Q2Pu = line_4045_4051b.terminal1.V.im * trafo_1045_4045a.terminal2.i.re - line_4045_4051b.terminal1.V.re * trafo_1045_4045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3037]] /* trafo_1045_4045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4745;
}

/*
equation index: 4746
type: SIMPLE_ASSIGN
trafo_1045_4045a.P2Pu = line_4045_4051b.terminal1.V.re * trafo_1045_4045a.terminal2.i.re + line_4045_4051b.terminal1.V.im * trafo_1045_4045a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* trafo_1045_4045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4746;
}

/*
equation index: 4747
type: SIMPLE_ASSIGN
line_4043_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4043_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4043_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2641]] /* line_4043_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4747;
}

/*
equation index: 4748
type: SIMPLE_ASSIGN
line_4043_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4043_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4043_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2639]] /* line_4043_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4748;
}

/*
equation index: 4749
type: SIMPLE_ASSIGN
trafo_43_4043.U2Pu = if trafo_43_4043.running.value then if line_4043_4046.terminal1.V.re == 0.0 and line_4043_4046.terminal1.V.im == 0.0 then 0.0 else (line_4043_4046.terminal1.V.re ^ 2.0 + line_4043_4046.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  modelica_real tmp910;
  modelica_real tmp911;
  modelica_real tmp912;
  modelica_boolean tmp913;
  modelica_real tmp914;
  modelica_boolean tmp915;
  modelica_real tmp916;
  tmp915 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp915)
  {
    tmp913 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0));
    if(tmp913)
    {
      tmp914 = 0.0;
    }
    else
    {
      tmp910 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */);
      tmp911 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */);
      tmp912 = (tmp910 * tmp910) + (tmp911 * tmp911);
      if(tmp912 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp912, 0.5);
      }
      tmp914 = sqrt(tmp912);
    }
    tmp916 = tmp914;
  }
  else
  {
    tmp916 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* trafo_43_4043.U2Pu variable */) = tmp916;
  threadData->lastEquationSolved = 4749;
}

/*
equation index: 4750
type: SIMPLE_ASSIGN
trafo_43_4043.U1Pu = if trafo_43_4043.running.value then if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4750};
  modelica_real tmp917;
  modelica_real tmp918;
  modelica_real tmp919;
  modelica_boolean tmp920;
  modelica_real tmp921;
  modelica_boolean tmp922;
  modelica_real tmp923;
  tmp922 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp922)
  {
    tmp920 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
    if(tmp920)
    {
      tmp921 = 0.0;
    }
    else
    {
      tmp917 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
      tmp918 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
      tmp919 = (tmp917 * tmp917) + (tmp918 * tmp918);
      if(tmp919 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp919, 0.5);
      }
      tmp921 = sqrt(tmp919);
    }
    tmp923 = tmp921;
  }
  else
  {
    tmp923 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* trafo_43_4043.U1Pu variable */) = tmp923;
  threadData->lastEquationSolved = 4750;
}

/*
equation index: 4751
type: SIMPLE_ASSIGN
trafo_43_4043.Q1Pu = load_43.terminal.V.im * trafo_43_4043.terminal1.i.re - load_43.terminal.V.re * trafo_43_4043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3176]] /* trafo_43_4043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4751;
}

/*
equation index: 4752
type: SIMPLE_ASSIGN
trafo_43_4043.P1Pu = load_43.terminal.V.re * trafo_43_4043.terminal1.i.re + load_43.terminal.V.im * trafo_43_4043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3174]] /* trafo_43_4043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4752;
}

/*
equation index: 4753
type: SIMPLE_ASSIGN
load_43.UPu.value = if load_43.running.value then (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4753};
  modelica_real tmp924;
  modelica_real tmp925;
  modelica_real tmp926;
  modelica_boolean tmp927;
  modelica_real tmp928;
  tmp927 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */);
  if(tmp927)
  {
    tmp924 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
    tmp925 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
    tmp926 = (tmp924 * tmp924) + (tmp925 * tmp925);
    if(tmp926 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp926, 0.5);
    }
    tmp928 = sqrt(tmp926);
  }
  else
  {
    tmp928 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2865]] /* load_43.UPu.value variable */) = tmp928;
  threadData->lastEquationSolved = 4753;
}

/*
equation index: 4754
type: SIMPLE_ASSIGN
bus_B43.UPhase = Modelica.Math.atan3(load_43.terminal.V.im, load_43.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* bus_B43.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4754;
}

/*
equation index: 4755
type: SIMPLE_ASSIGN
bus_B43.UPu = if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4755};
  modelica_real tmp929;
  modelica_real tmp930;
  modelica_real tmp931;
  modelica_boolean tmp932;
  modelica_real tmp933;
  tmp932 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
  if(tmp932)
  {
    tmp933 = 0.0;
  }
  else
  {
    tmp929 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
    tmp930 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
    tmp931 = (tmp929 * tmp929) + (tmp930 * tmp930);
    if(tmp931 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp931, 0.5);
    }
    tmp933 = sqrt(tmp931);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* bus_B43.UPu variable */) = tmp933;
  threadData->lastEquationSolved = 4755;
}

/*
equation index: 4756
type: SIMPLE_ASSIGN
bus_B43.U = bus_B43.UPu * bus_B43.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* bus_B43.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* bus_B43.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* bus_B43.UNom PARAM */));
  threadData->lastEquationSolved = 4756;
}

/*
equation index: 4757
type: SIMPLE_ASSIGN
trafo_43_4043.Q2Pu = line_4043_4046.terminal1.V.im * trafo_43_4043.terminal2.i.re - line_4043_4046.terminal1.V.re * trafo_43_4043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* trafo_43_4043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4757;
}

/*
equation index: 4758
type: SIMPLE_ASSIGN
trafo_43_4043.P2Pu = line_4043_4046.terminal1.V.re * trafo_43_4043.terminal2.i.re + line_4043_4046.terminal1.V.im * trafo_43_4043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3175]] /* trafo_43_4043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4758;
}

/*
equation index: 4759
type: SIMPLE_ASSIGN
bus_4043.UPu = shunt_4043.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* bus_4043.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */);
  threadData->lastEquationSolved = 4759;
}

/*
equation index: 4760
type: SIMPLE_ASSIGN
bus_4043.U = bus_4043.UPu * bus_4043.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* bus_4043.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* bus_4043.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* bus_4043.UNom PARAM */));
  threadData->lastEquationSolved = 4760;
}

/*
equation index: 4761
type: SIMPLE_ASSIGN
line_4043_4046.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4046.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4046.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2648]] /* line_4043_4046.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4761;
}

/*
equation index: 4762
type: SIMPLE_ASSIGN
line_4043_4046.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4046.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4046.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2646]] /* line_4043_4046.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4762;
}

/*
equation index: 4763
type: SIMPLE_ASSIGN
trafo_g15_4047.U2Pu = if trafo_g15_4047.running.value then if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4763};
  modelica_real tmp934;
  modelica_real tmp935;
  modelica_real tmp936;
  modelica_boolean tmp937;
  modelica_real tmp938;
  modelica_boolean tmp939;
  modelica_real tmp940;
  tmp939 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp939)
  {
    tmp937 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
    if(tmp937)
    {
      tmp938 = 0.0;
    }
    else
    {
      tmp934 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
      tmp935 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
      tmp936 = (tmp934 * tmp934) + (tmp935 * tmp935);
      if(tmp936 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp936, 0.5);
      }
      tmp938 = sqrt(tmp936);
    }
    tmp940 = tmp938;
  }
  else
  {
    tmp940 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3329]] /* trafo_g15_4047.U2Pu variable */) = tmp940;
  threadData->lastEquationSolved = 4763;
}

/*
equation index: 4764
type: SIMPLE_ASSIGN
$DER.g15.lambdaQ1Pu = if g15.running.value then g15.RQ1PPu * g15.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* der(g15.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* g15.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4764;
}

/*
equation index: 4765
type: SIMPLE_ASSIGN
g15.iStatorPu.re = if g15.running.value then g15.rTfoPu * g15.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4765;
}

/*
equation index: 4766
type: SIMPLE_ASSIGN
g15.iStatorPu.im = if g15.running.value then g15.rTfoPu * g15.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4766;
}

/*
equation index: 4767
type: SIMPLE_ASSIGN
g15.IStatorPu = if g15.running.value then if g15.iStatorPu.re == 0.0 and g15.iStatorPu.im == 0.0 then 0.0 else (g15.iStatorPu.re ^ 2.0 + g15.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4767};
  modelica_real tmp941;
  modelica_real tmp942;
  modelica_real tmp943;
  modelica_boolean tmp944;
  modelica_real tmp945;
  modelica_boolean tmp946;
  modelica_real tmp947;
  tmp946 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp946)
  {
    tmp944 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) == 0.0));
    if(tmp944)
    {
      tmp945 = 0.0;
    }
    else
    {
      tmp941 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */);
      tmp942 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */);
      tmp943 = (tmp941 * tmp941) + (tmp942 * tmp942);
      if(tmp943 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp943, 0.5);
      }
      tmp945 = sqrt(tmp943);
    }
    tmp947 = tmp945;
  }
  else
  {
    tmp947 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1658]] /* g15.IStatorPu variable */) = tmp947;
  threadData->lastEquationSolved = 4767;
}

/*
equation index: 4768
type: SIMPLE_ASSIGN
g15.uStatorPu.im = if g15.running.value then (g15.terminal.V.im + (-100.0) * (g15.terminal.i.re * g15.XTfoPu + g15.terminal.i.im * g15.RTfoPu) / g15.SNom) / g15.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */),"g15.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4768;
}

/*
equation index: 4769
type: SIMPLE_ASSIGN
g15.uPu.im = if g15.running.value then g15.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1697]] /* g15.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4769;
}

/*
equation index: 4770
type: SIMPLE_ASSIGN
$DER.g15.lambdaDPu = if g15.running.value then g15.RDPPu * g15.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(g15.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* g15.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4770;
}

/*
equation index: 4771
type: SIMPLE_ASSIGN
$DER.g15.lambdaQ2Pu = if g15.running.value then g15.RQ2PPu * g15.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* der(g15.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* g15.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4771;
}

/*
equation index: 4772
type: SIMPLE_ASSIGN
g15.cePu = if g15.running.value then g15.lambdaqPu * g15.idPu - g15.lambdadPu * g15.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4772;
}

/*
equation index: 4773
type: SIMPLE_ASSIGN
g15.PePu = if g15.running.value then g15.cePu * g15.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1662]] /* g15.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4773;
}

/*
equation index: 4774
type: SIMPLE_ASSIGN
g15.thetaInternal.value = if g15.running.value then Modelica.Math.atan3(g15.udPu, g15.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1696]] /* g15.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4774;
}

/*
equation index: 4775
type: SIMPLE_ASSIGN
g15.uStatorPu.re = if g15.running.value then (g15.terminal.V.re + (-100.0) * (g15.terminal.i.re * g15.RTfoPu - g15.terminal.i.im * g15.XTfoPu) / g15.SNom) / g15.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */),"g15.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4775;
}

/*
equation index: 4776
type: SIMPLE_ASSIGN
g15.sStatorPu.im = if g15.running.value then g15.uStatorPu.im * g15.iStatorPu.re - g15.uStatorPu.re * g15.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1689]] /* g15.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4776;
}

/*
equation index: 4777
type: SIMPLE_ASSIGN
g15.QStatorPu = if g15.running.value then -g15.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* g15.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1689]] /* g15.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4777;
}

/*
equation index: 4778
type: SIMPLE_ASSIGN
g15.QStatorPuQNom = if g15.running.value then 100.0 * g15.QStatorPu / g15.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* g15.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* g15.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* g15.QNomAlt PARAM */),"g15.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4778;
}

/*
equation index: 4779
type: SIMPLE_ASSIGN
g15.sStatorPu.re = if g15.running.value then g15.uStatorPu.re * g15.iStatorPu.re + g15.uStatorPu.im * g15.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1690]] /* g15.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4779;
}

/*
equation index: 4780
type: SIMPLE_ASSIGN
g15.QGenPu = if g15.running.value then g15.terminal.V.re * g15.terminal.i.im - g15.terminal.V.im * g15.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* g15.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4780;
}

/*
equation index: 4781
type: SIMPLE_ASSIGN
g15.QGen = if g15.running.value then 100.0 * g15.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1664]] /* g15.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* g15.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4781;
}

/*
equation index: 4782
type: SIMPLE_ASSIGN
g15.UPu = if g15.running.value then (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4782};
  modelica_real tmp948;
  modelica_real tmp949;
  modelica_real tmp950;
  modelica_boolean tmp951;
  modelica_real tmp952;
  tmp951 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp951)
  {
    tmp948 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
    tmp949 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
    tmp950 = (tmp948 * tmp948) + (tmp949 * tmp949);
    if(tmp950 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp950, 0.5);
    }
    tmp952 = sqrt(tmp950);
  }
  else
  {
    tmp952 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* g15.UPu variable */) = tmp952;
  threadData->lastEquationSolved = 4782;
}

/*
equation index: 4783
type: SIMPLE_ASSIGN
g15.uPu.re = if g15.running.value then g15.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1698]] /* g15.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4783;
}

/*
equation index: 4784
type: SIMPLE_ASSIGN
trafo_g15_4047.U1Pu = if trafo_g15_4047.running.value then if g15.terminal.V.re == 0.0 and g15.terminal.V.im == 0.0 then 0.0 else (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4784};
  modelica_real tmp953;
  modelica_real tmp954;
  modelica_real tmp955;
  modelica_boolean tmp956;
  modelica_real tmp957;
  modelica_boolean tmp958;
  modelica_real tmp959;
  tmp958 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp958)
  {
    tmp956 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0));
    if(tmp956)
    {
      tmp957 = 0.0;
    }
    else
    {
      tmp953 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
      tmp954 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
      tmp955 = (tmp953 * tmp953) + (tmp954 * tmp954);
      if(tmp955 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp955, 0.5);
      }
      tmp957 = sqrt(tmp955);
    }
    tmp959 = tmp957;
  }
  else
  {
    tmp959 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3328]] /* trafo_g15_4047.U1Pu variable */) = tmp959;
  threadData->lastEquationSolved = 4784;
}

/*
equation index: 4785
type: SIMPLE_ASSIGN
trafo_g15_4047.Q1Pu = g15.terminal.V.re * g15.terminal.i.im - g15.terminal.V.im * g15.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3326]] /* trafo_g15_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4785;
}

/*
equation index: 4786
type: SIMPLE_ASSIGN
trafo_g15_4047.P1Pu = (-g15.terminal.V.re) * g15.terminal.i.re - g15.terminal.V.im * g15.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3324]] /* trafo_g15_4047.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4786;
}

/*
equation index: 4787
type: SIMPLE_ASSIGN
bus_BG15.UPhase = Modelica.Math.atan3(g15.terminal.V.im, g15.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* bus_BG15.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4787;
}

/*
equation index: 4788
type: SIMPLE_ASSIGN
bus_BG15.UPu = if g15.terminal.V.re == 0.0 and g15.terminal.V.im == 0.0 then 0.0 else (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4788};
  modelica_real tmp960;
  modelica_real tmp961;
  modelica_real tmp962;
  modelica_boolean tmp963;
  modelica_real tmp964;
  tmp963 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0));
  if(tmp963)
  {
    tmp964 = 0.0;
  }
  else
  {
    tmp960 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
    tmp961 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
    tmp962 = (tmp960 * tmp960) + (tmp961 * tmp961);
    if(tmp962 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp962, 0.5);
    }
    tmp964 = sqrt(tmp962);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* bus_BG15.UPu variable */) = tmp964;
  threadData->lastEquationSolved = 4788;
}

/*
equation index: 4789
type: SIMPLE_ASSIGN
bus_BG15.U = bus_BG15.UPu * bus_BG15.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* bus_BG15.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* bus_BG15.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* bus_BG15.UNom PARAM */));
  threadData->lastEquationSolved = 4789;
}

/*
equation index: 4790
type: SIMPLE_ASSIGN
trafo_g15_4047.Q2Pu = line_4046_4047.terminal2.V.im * trafo_g15_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * trafo_g15_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3327]] /* trafo_g15_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4790;
}

/*
equation index: 4791
type: SIMPLE_ASSIGN
trafo_g15_4047.P2Pu = line_4046_4047.terminal2.V.re * trafo_g15_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * trafo_g15_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3325]] /* trafo_g15_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4791;
}

/*
equation index: 4792
type: SIMPLE_ASSIGN
trafo_47_4047.U2Pu = if trafo_47_4047.running.value then if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4792};
  modelica_real tmp965;
  modelica_real tmp966;
  modelica_real tmp967;
  modelica_boolean tmp968;
  modelica_real tmp969;
  modelica_boolean tmp970;
  modelica_real tmp971;
  tmp970 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp970)
  {
    tmp968 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
    if(tmp968)
    {
      tmp969 = 0.0;
    }
    else
    {
      tmp965 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
      tmp966 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
      tmp967 = (tmp965 * tmp965) + (tmp966 * tmp966);
      if(tmp967 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp967, 0.5);
      }
      tmp969 = sqrt(tmp967);
    }
    tmp971 = tmp969;
  }
  else
  {
    tmp971 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* trafo_47_4047.U2Pu variable */) = tmp971;
  threadData->lastEquationSolved = 4792;
}

/*
equation index: 4793
type: SIMPLE_ASSIGN
trafo_47_4047.U1Pu = if trafo_47_4047.running.value then if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4793};
  modelica_real tmp972;
  modelica_real tmp973;
  modelica_real tmp974;
  modelica_boolean tmp975;
  modelica_real tmp976;
  modelica_boolean tmp977;
  modelica_real tmp978;
  tmp977 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp977)
  {
    tmp975 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
    if(tmp975)
    {
      tmp976 = 0.0;
    }
    else
    {
      tmp972 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
      tmp973 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
      tmp974 = (tmp972 * tmp972) + (tmp973 * tmp973);
      if(tmp974 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp974, 0.5);
      }
      tmp976 = sqrt(tmp974);
    }
    tmp978 = tmp976;
  }
  else
  {
    tmp978 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* trafo_47_4047.U1Pu variable */) = tmp978;
  threadData->lastEquationSolved = 4793;
}

/*
equation index: 4794
type: SIMPLE_ASSIGN
trafo_47_4047.Q1Pu = load_47.terminal.V.im * trafo_47_4047.terminal1.i.re - load_47.terminal.V.re * trafo_47_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* trafo_47_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4794;
}

/*
equation index: 4795
type: SIMPLE_ASSIGN
trafo_47_4047.P1Pu = load_47.terminal.V.re * trafo_47_4047.terminal1.i.re + load_47.terminal.V.im * trafo_47_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* trafo_47_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4795;
}

/*
equation index: 4796
type: SIMPLE_ASSIGN
trafo_47_4047.Q2Pu = line_4046_4047.terminal2.V.im * trafo_47_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * trafo_47_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* trafo_47_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4796;
}

/*
equation index: 4797
type: SIMPLE_ASSIGN
trafo_47_4047.P2Pu = line_4046_4047.terminal2.V.re * trafo_47_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * trafo_47_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* trafo_47_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4797;
}

/*
equation index: 4798
type: SIMPLE_ASSIGN
line_4046_4047.Q2Pu = line_4046_4047.terminal2.V.im * line_4046_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * line_4046_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2713]] /* line_4046_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4798;
}

/*
equation index: 4799
type: SIMPLE_ASSIGN
line_4046_4047.P2Pu = line_4046_4047.terminal2.V.re * line_4046_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * line_4046_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2711]] /* line_4046_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4799;
}

/*
equation index: 4800
type: SIMPLE_ASSIGN
trafo_46_4046.U2Pu = if trafo_46_4046.running.value then if line_4046_4047.terminal1.V.re == 0.0 and line_4046_4047.terminal1.V.im == 0.0 then 0.0 else (line_4046_4047.terminal1.V.re ^ 2.0 + line_4046_4047.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4800};
  modelica_real tmp979;
  modelica_real tmp980;
  modelica_real tmp981;
  modelica_boolean tmp982;
  modelica_real tmp983;
  modelica_boolean tmp984;
  modelica_real tmp985;
  tmp984 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp984)
  {
    tmp982 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0));
    if(tmp982)
    {
      tmp983 = 0.0;
    }
    else
    {
      tmp979 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */);
      tmp980 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */);
      tmp981 = (tmp979 * tmp979) + (tmp980 * tmp980);
      if(tmp981 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp981, 0.5);
      }
      tmp983 = sqrt(tmp981);
    }
    tmp985 = tmp983;
  }
  else
  {
    tmp985 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3189]] /* trafo_46_4046.U2Pu variable */) = tmp985;
  threadData->lastEquationSolved = 4800;
}

/*
equation index: 4801
type: SIMPLE_ASSIGN
trafo_46_4046.U1Pu = if trafo_46_4046.running.value then if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4801};
  modelica_real tmp986;
  modelica_real tmp987;
  modelica_real tmp988;
  modelica_boolean tmp989;
  modelica_real tmp990;
  modelica_boolean tmp991;
  modelica_real tmp992;
  tmp991 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp991)
  {
    tmp989 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
    if(tmp989)
    {
      tmp990 = 0.0;
    }
    else
    {
      tmp986 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
      tmp987 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
      tmp988 = (tmp986 * tmp986) + (tmp987 * tmp987);
      if(tmp988 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp988, 0.5);
      }
      tmp990 = sqrt(tmp988);
    }
    tmp992 = tmp990;
  }
  else
  {
    tmp992 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3188]] /* trafo_46_4046.U1Pu variable */) = tmp992;
  threadData->lastEquationSolved = 4801;
}

/*
equation index: 4802
type: SIMPLE_ASSIGN
trafo_46_4046.Q1Pu = load_46.terminal.V.im * trafo_46_4046.terminal1.i.re - load_46.terminal.V.re * trafo_46_4046.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* trafo_46_4046.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4802;
}

/*
equation index: 4803
type: SIMPLE_ASSIGN
trafo_46_4046.P1Pu = load_46.terminal.V.re * trafo_46_4046.terminal1.i.re + load_46.terminal.V.im * trafo_46_4046.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* trafo_46_4046.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4803;
}

/*
equation index: 4804
type: SIMPLE_ASSIGN
load_46.UPu.value = if load_46.running.value then (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4804};
  modelica_real tmp993;
  modelica_real tmp994;
  modelica_real tmp995;
  modelica_boolean tmp996;
  modelica_real tmp997;
  tmp996 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */);
  if(tmp996)
  {
    tmp993 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
    tmp994 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
    tmp995 = (tmp993 * tmp993) + (tmp994 * tmp994);
    if(tmp995 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp995, 0.5);
    }
    tmp997 = sqrt(tmp995);
  }
  else
  {
    tmp997 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2872]] /* load_46.UPu.value variable */) = tmp997;
  threadData->lastEquationSolved = 4804;
}

/*
equation index: 4805
type: SIMPLE_ASSIGN
bus_B46.UPhase = Modelica.Math.atan3(load_46.terminal.V.im, load_46.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* bus_B46.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4805;
}

/*
equation index: 4806
type: SIMPLE_ASSIGN
bus_B46.UPu = if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4806};
  modelica_real tmp998;
  modelica_real tmp999;
  modelica_real tmp1000;
  modelica_boolean tmp1001;
  modelica_real tmp1002;
  tmp1001 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
  if(tmp1001)
  {
    tmp1002 = 0.0;
  }
  else
  {
    tmp998 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
    tmp999 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
    tmp1000 = (tmp998 * tmp998) + (tmp999 * tmp999);
    if(tmp1000 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1000, 0.5);
    }
    tmp1002 = sqrt(tmp1000);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* bus_B46.UPu variable */) = tmp1002;
  threadData->lastEquationSolved = 4806;
}

/*
equation index: 4807
type: SIMPLE_ASSIGN
bus_B46.U = bus_B46.UPu * bus_B46.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* bus_B46.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* bus_B46.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* bus_B46.UNom PARAM */));
  threadData->lastEquationSolved = 4807;
}

/*
equation index: 4808
type: SIMPLE_ASSIGN
trafo_46_4046.Q2Pu = line_4046_4047.terminal1.V.im * trafo_46_4046.terminal2.i.re - line_4046_4047.terminal1.V.re * trafo_46_4046.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3187]] /* trafo_46_4046.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4808;
}

/*
equation index: 4809
type: SIMPLE_ASSIGN
trafo_46_4046.P2Pu = line_4046_4047.terminal1.V.re * trafo_46_4046.terminal2.i.re + line_4046_4047.terminal1.V.im * trafo_46_4046.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* trafo_46_4046.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4809;
}

/*
equation index: 4810
type: SIMPLE_ASSIGN
line_4046_4047.Q1Pu = line_4046_4047.terminal1.V.im * line_4046_4047.terminal1.i.re - line_4046_4047.terminal1.V.re * line_4046_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2712]] /* line_4046_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4810;
}

/*
equation index: 4811
type: SIMPLE_ASSIGN
line_4046_4047.P1Pu = line_4046_4047.terminal1.V.re * line_4046_4047.terminal1.i.re + line_4046_4047.terminal1.V.im * line_4046_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2710]] /* line_4046_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4811;
}

/*
equation index: 4812
type: SIMPLE_ASSIGN
line_4043_4047.Q2Pu = line_4046_4047.terminal2.V.im * line_4043_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * line_4043_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2659]] /* line_4043_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4812;
}

/*
equation index: 4813
type: SIMPLE_ASSIGN
line_4043_4047.P2Pu = line_4046_4047.terminal2.V.re * line_4043_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * line_4043_4047.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2657]] /* line_4043_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4813;
}

/*
equation index: 4814
type: SIMPLE_ASSIGN
line_4043_4047.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4047.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2658]] /* line_4043_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4814;
}

/*
equation index: 4815
type: SIMPLE_ASSIGN
line_4043_4047.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4047.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4047.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2656]] /* line_4043_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4815;
}

/*
equation index: 4816
type: SIMPLE_ASSIGN
line_4043_4046.Q2Pu = line_4046_4047.terminal1.V.im * line_4043_4046.terminal2.i.re - line_4046_4047.terminal1.V.re * line_4043_4046.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2649]] /* line_4043_4046.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4816;
}

/*
equation index: 4817
type: SIMPLE_ASSIGN
line_4043_4046.P2Pu = line_4046_4047.terminal1.V.re * line_4043_4046.terminal2.i.re + line_4046_4047.terminal1.V.im * line_4043_4046.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2647]] /* line_4043_4046.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4817;
}

/*
equation index: 4818
type: SIMPLE_ASSIGN
bus_4046.UPhase = Modelica.Math.atan3(line_4046_4047.terminal1.V.im, line_4046_4047.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* bus_4046.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4818;
}

/*
equation index: 4819
type: SIMPLE_ASSIGN
bus_4046.UPu = shunt_4046.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* bus_4046.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */);
  threadData->lastEquationSolved = 4819;
}

/*
equation index: 4820
type: SIMPLE_ASSIGN
bus_4046.U = bus_4046.UPu * bus_4046.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* bus_4046.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* bus_4046.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* bus_4046.UNom PARAM */));
  threadData->lastEquationSolved = 4820;
}

/*
equation index: 4821
type: SIMPLE_ASSIGN
line_4043_4044.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4044.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2640]] /* line_4043_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4821;
}

/*
equation index: 4822
type: SIMPLE_ASSIGN
line_4043_4044.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4044.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2638]] /* line_4043_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4822;
}

/*
equation index: 4823
type: SIMPLE_ASSIGN
line_4042_4043.Q1Pu = line_4042_4043.terminal1.V.im * line_4042_4043.terminal1.i.re - line_4042_4043.terminal1.V.re * line_4042_4043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2622]] /* line_4042_4043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4823;
}

/*
equation index: 4824
type: SIMPLE_ASSIGN
line_4042_4043.P1Pu = line_4042_4043.terminal1.V.re * line_4042_4043.terminal1.i.re + line_4042_4043.terminal1.V.im * line_4042_4043.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2620]] /* line_4042_4043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4824;
}

/*
equation index: 4825
type: SIMPLE_ASSIGN
line_4042_4043.Q2Pu = line_4043_4046.terminal1.V.im * line_4042_4043.terminal2.i.re - line_4043_4046.terminal1.V.re * line_4042_4043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2623]] /* line_4042_4043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4825;
}

/*
equation index: 4826
type: SIMPLE_ASSIGN
line_4042_4043.P2Pu = line_4043_4046.terminal1.V.re * line_4042_4043.terminal2.i.re + line_4043_4046.terminal1.V.im * line_4042_4043.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2621]] /* line_4042_4043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4826;
}

/*
equation index: 4827
type: SIMPLE_ASSIGN
bus_4043.UPhase = Modelica.Math.atan3(line_4043_4046.terminal1.V.im, line_4043_4046.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* bus_4043.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4827;
}

/*
equation index: 4828
type: SIMPLE_ASSIGN
bus_4047.UPhase = Modelica.Math.atan3(line_4046_4047.terminal2.V.im, line_4046_4047.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* bus_4047.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4828;
}

/*
equation index: 4829
type: SIMPLE_ASSIGN
bus_4047.UPu = if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4829};
  modelica_real tmp1003;
  modelica_real tmp1004;
  modelica_real tmp1005;
  modelica_boolean tmp1006;
  modelica_real tmp1007;
  tmp1006 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
  if(tmp1006)
  {
    tmp1007 = 0.0;
  }
  else
  {
    tmp1003 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
    tmp1004 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
    tmp1005 = (tmp1003 * tmp1003) + (tmp1004 * tmp1004);
    if(tmp1005 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1005, 0.5);
    }
    tmp1007 = sqrt(tmp1005);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* bus_4047.UPu variable */) = tmp1007;
  threadData->lastEquationSolved = 4829;
}

/*
equation index: 4830
type: SIMPLE_ASSIGN
bus_4047.U = bus_4047.UPu * bus_4047.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* bus_4047.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* bus_4047.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* bus_4047.UNom PARAM */));
  threadData->lastEquationSolved = 4830;
}

/*
equation index: 4831
type: SIMPLE_ASSIGN
load_47.UPu.value = if load_47.running.value then (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4831};
  modelica_real tmp1008;
  modelica_real tmp1009;
  modelica_real tmp1010;
  modelica_boolean tmp1011;
  modelica_real tmp1012;
  tmp1011 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */);
  if(tmp1011)
  {
    tmp1008 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
    tmp1009 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
    tmp1010 = (tmp1008 * tmp1008) + (tmp1009 * tmp1009);
    if(tmp1010 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1010, 0.5);
    }
    tmp1012 = sqrt(tmp1010);
  }
  else
  {
    tmp1012 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2879]] /* load_47.UPu.value variable */) = tmp1012;
  threadData->lastEquationSolved = 4831;
}

/*
equation index: 4832
type: SIMPLE_ASSIGN
bus_B47.UPhase = Modelica.Math.atan3(load_47.terminal.V.im, load_47.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* bus_B47.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4832;
}

/*
equation index: 4833
type: SIMPLE_ASSIGN
bus_B47.UPu = if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4833};
  modelica_real tmp1013;
  modelica_real tmp1014;
  modelica_real tmp1015;
  modelica_boolean tmp1016;
  modelica_real tmp1017;
  tmp1016 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
  if(tmp1016)
  {
    tmp1017 = 0.0;
  }
  else
  {
    tmp1013 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
    tmp1014 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
    tmp1015 = (tmp1013 * tmp1013) + (tmp1014 * tmp1014);
    if(tmp1015 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1015, 0.5);
    }
    tmp1017 = sqrt(tmp1015);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* bus_B47.UPu variable */) = tmp1017;
  threadData->lastEquationSolved = 4833;
}

/*
equation index: 4834
type: SIMPLE_ASSIGN
bus_B47.U = bus_B47.UPu * bus_B47.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* bus_B47.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* bus_B47.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* bus_B47.UNom PARAM */));
  threadData->lastEquationSolved = 4834;
}

/*
equation index: 4835
type: SIMPLE_ASSIGN
line_4042_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4042_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4042_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2633]] /* line_4042_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4835;
}

/*
equation index: 4836
type: SIMPLE_ASSIGN
line_4042_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4042_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4042_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2631]] /* line_4042_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4836;
}

/*
equation index: 4837
type: SIMPLE_ASSIGN
line_4042_4044.Q1Pu = line_4042_4043.terminal1.V.im * line_4042_4044.terminal1.i.re - line_4042_4043.terminal1.V.re * line_4042_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2632]] /* line_4042_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4837;
}

/*
equation index: 4838
type: SIMPLE_ASSIGN
line_4042_4044.P1Pu = line_4042_4043.terminal1.V.re * line_4042_4044.terminal1.i.re + line_4042_4043.terminal1.V.im * line_4042_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2630]] /* line_4042_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4838;
}

/*
equation index: 4839
type: SIMPLE_ASSIGN
line_4041_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4041_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4041_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2605]] /* line_4041_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4839;
}

/*
equation index: 4840
type: SIMPLE_ASSIGN
line_4041_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4041_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4041_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2603]] /* line_4041_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4840;
}

/*
equation index: 4841
type: SIMPLE_ASSIGN
line_4041_4044.Q1Pu = line_4041_4061.terminal1.V.im * line_4041_4044.terminal1.i.re - line_4041_4061.terminal1.V.re * line_4041_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2604]] /* line_4041_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4841;
}

/*
equation index: 4842
type: SIMPLE_ASSIGN
line_4041_4044.P1Pu = line_4041_4061.terminal1.V.re * line_4041_4044.terminal1.i.re + line_4041_4061.terminal1.V.im * line_4041_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2602]] /* line_4041_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4842;
}

/*
equation index: 4843
type: SIMPLE_ASSIGN
line_4032_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4032_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4032_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2595]] /* line_4032_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4843;
}

/*
equation index: 4844
type: SIMPLE_ASSIGN
line_4032_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4032_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4032_4044.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2593]] /* line_4032_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4844;
}

/*
equation index: 4845
type: SIMPLE_ASSIGN
line_4032_4044.Q1Pu = line_4032_4044.terminal1.V.im * line_4032_4044.terminal1.i.re - line_4032_4044.terminal1.V.re * line_4032_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2594]] /* line_4032_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4845;
}

/*
equation index: 4846
type: SIMPLE_ASSIGN
line_4032_4044.P1Pu = line_4032_4044.terminal1.V.re * line_4032_4044.terminal1.i.re + line_4032_4044.terminal1.V.im * line_4032_4044.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2592]] /* line_4032_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4846;
}

/*
equation index: 4847
type: SIMPLE_ASSIGN
bus_4044.UPhase = Modelica.Math.atan3(line_4044_4045a.terminal1.V.im, line_4044_4045a.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* bus_4044.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4847;
}

/*
equation index: 4848
type: SIMPLE_ASSIGN
bus_4044.UPu = if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4848};
  modelica_real tmp1018;
  modelica_real tmp1019;
  modelica_real tmp1020;
  modelica_boolean tmp1021;
  modelica_real tmp1022;
  tmp1021 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
  if(tmp1021)
  {
    tmp1022 = 0.0;
  }
  else
  {
    tmp1018 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
    tmp1019 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
    tmp1020 = (tmp1018 * tmp1018) + (tmp1019 * tmp1019);
    if(tmp1020 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1020, 0.5);
    }
    tmp1022 = sqrt(tmp1020);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* bus_4044.UPu variable */) = tmp1022;
  threadData->lastEquationSolved = 4848;
}

/*
equation index: 4849
type: SIMPLE_ASSIGN
bus_4044.U = bus_4044.UPu * bus_4044.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* bus_4044.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* bus_4044.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* bus_4044.UNom PARAM */));
  threadData->lastEquationSolved = 4849;
}

/*
equation index: 4850
type: SIMPLE_ASSIGN
trafo_1044_4044b.Q2Pu = line_4044_4045a.terminal1.V.im * trafo_1044_4044b.terminal2.i.re - line_4044_4045a.terminal1.V.re * trafo_1044_4044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3027]] /* trafo_1044_4044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4850;
}

/*
equation index: 4851
type: SIMPLE_ASSIGN
trafo_1044_4044b.P2Pu = line_4044_4045a.terminal1.V.re * trafo_1044_4044b.terminal2.i.re + line_4044_4045a.terminal1.V.im * trafo_1044_4044b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3025]] /* trafo_1044_4044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4851;
}

/*
equation index: 4852
type: SIMPLE_ASSIGN
line_4032_4042.Q1Pu = line_4032_4044.terminal1.V.im * line_4032_4042.terminal1.i.re - line_4032_4044.terminal1.V.re * line_4032_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2586]] /* line_4032_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4852;
}

/*
equation index: 4853
type: SIMPLE_ASSIGN
line_4032_4042.P1Pu = line_4032_4044.terminal1.V.re * line_4032_4042.terminal1.i.re + line_4032_4044.terminal1.V.im * line_4032_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2584]] /* line_4032_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4853;
}

/*
equation index: 4854
type: SIMPLE_ASSIGN
line_4032_4042.Q2Pu = line_4042_4043.terminal1.V.im * line_4032_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * line_4032_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2587]] /* line_4032_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4854;
}

/*
equation index: 4855
type: SIMPLE_ASSIGN
line_4032_4042.P2Pu = line_4042_4043.terminal1.V.re * line_4032_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * line_4032_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2585]] /* line_4032_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4855;
}

/*
equation index: 4856
type: SIMPLE_ASSIGN
line_4021_4042.Q2Pu = line_4042_4043.terminal1.V.im * line_4021_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * line_4021_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2535]] /* line_4021_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4856;
}

/*
equation index: 4857
type: SIMPLE_ASSIGN
line_4021_4042.P2Pu = line_4042_4043.terminal1.V.re * line_4021_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * line_4021_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2533]] /* line_4021_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4857;
}

/*
equation index: 4858
type: SIMPLE_ASSIGN
line_4031_4032.Q2Pu = line_4032_4044.terminal1.V.im * line_4031_4032.terminal2.i.re - line_4032_4044.terminal1.V.re * line_4031_4032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2561]] /* line_4031_4032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4858;
}

/*
equation index: 4859
type: SIMPLE_ASSIGN
line_4031_4032.P2Pu = line_4032_4044.terminal1.V.re * line_4031_4032.terminal2.i.re + line_4032_4044.terminal1.V.im * line_4031_4032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2559]] /* line_4031_4032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4859;
}

/*
equation index: 4860
type: SIMPLE_ASSIGN
line_4031_4032.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4032.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2560]] /* line_4031_4032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4860;
}

/*
equation index: 4861
type: SIMPLE_ASSIGN
line_4031_4032.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4032.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2558]] /* line_4031_4032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4861;
}

/*
equation index: 4862
type: SIMPLE_ASSIGN
line_4021_4032.Q2Pu = line_4032_4044.terminal1.V.im * line_4021_4032.terminal2.i.re - line_4032_4044.terminal1.V.re * line_4021_4032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2525]] /* line_4021_4032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4862;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_5(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_4405,
    MyNordic_initialized_TestCase_initialized_eqFunction_4406,
    MyNordic_initialized_TestCase_initialized_eqFunction_4407,
    MyNordic_initialized_TestCase_initialized_eqFunction_4408,
    MyNordic_initialized_TestCase_initialized_eqFunction_4409,
    MyNordic_initialized_TestCase_initialized_eqFunction_4410,
    MyNordic_initialized_TestCase_initialized_eqFunction_4411,
    MyNordic_initialized_TestCase_initialized_eqFunction_4412,
    MyNordic_initialized_TestCase_initialized_eqFunction_4413,
    MyNordic_initialized_TestCase_initialized_eqFunction_4414,
    MyNordic_initialized_TestCase_initialized_eqFunction_4415,
    MyNordic_initialized_TestCase_initialized_eqFunction_4416,
    MyNordic_initialized_TestCase_initialized_eqFunction_4417,
    MyNordic_initialized_TestCase_initialized_eqFunction_4418,
    MyNordic_initialized_TestCase_initialized_eqFunction_4419,
    MyNordic_initialized_TestCase_initialized_eqFunction_4420,
    MyNordic_initialized_TestCase_initialized_eqFunction_4421,
    MyNordic_initialized_TestCase_initialized_eqFunction_4422,
    MyNordic_initialized_TestCase_initialized_eqFunction_4423,
    MyNordic_initialized_TestCase_initialized_eqFunction_4424,
    MyNordic_initialized_TestCase_initialized_eqFunction_4425,
    MyNordic_initialized_TestCase_initialized_eqFunction_4426,
    MyNordic_initialized_TestCase_initialized_eqFunction_4427,
    MyNordic_initialized_TestCase_initialized_eqFunction_4428,
    MyNordic_initialized_TestCase_initialized_eqFunction_4429,
    MyNordic_initialized_TestCase_initialized_eqFunction_4430,
    MyNordic_initialized_TestCase_initialized_eqFunction_4431,
    MyNordic_initialized_TestCase_initialized_eqFunction_4432,
    MyNordic_initialized_TestCase_initialized_eqFunction_4433,
    MyNordic_initialized_TestCase_initialized_eqFunction_4434,
    MyNordic_initialized_TestCase_initialized_eqFunction_4435,
    MyNordic_initialized_TestCase_initialized_eqFunction_4436,
    MyNordic_initialized_TestCase_initialized_eqFunction_4437,
    MyNordic_initialized_TestCase_initialized_eqFunction_4438,
    MyNordic_initialized_TestCase_initialized_eqFunction_4439,
    MyNordic_initialized_TestCase_initialized_eqFunction_4440,
    MyNordic_initialized_TestCase_initialized_eqFunction_4441,
    MyNordic_initialized_TestCase_initialized_eqFunction_4442,
    MyNordic_initialized_TestCase_initialized_eqFunction_4443,
    MyNordic_initialized_TestCase_initialized_eqFunction_4444,
    MyNordic_initialized_TestCase_initialized_eqFunction_4445,
    MyNordic_initialized_TestCase_initialized_eqFunction_4446,
    MyNordic_initialized_TestCase_initialized_eqFunction_4447,
    MyNordic_initialized_TestCase_initialized_eqFunction_4448,
    MyNordic_initialized_TestCase_initialized_eqFunction_4449,
    MyNordic_initialized_TestCase_initialized_eqFunction_4450,
    MyNordic_initialized_TestCase_initialized_eqFunction_4451,
    MyNordic_initialized_TestCase_initialized_eqFunction_4452,
    MyNordic_initialized_TestCase_initialized_eqFunction_4453,
    MyNordic_initialized_TestCase_initialized_eqFunction_4454,
    MyNordic_initialized_TestCase_initialized_eqFunction_4455,
    MyNordic_initialized_TestCase_initialized_eqFunction_4456,
    MyNordic_initialized_TestCase_initialized_eqFunction_4457,
    MyNordic_initialized_TestCase_initialized_eqFunction_4458,
    MyNordic_initialized_TestCase_initialized_eqFunction_4459,
    MyNordic_initialized_TestCase_initialized_eqFunction_4460,
    MyNordic_initialized_TestCase_initialized_eqFunction_4461,
    MyNordic_initialized_TestCase_initialized_eqFunction_4462,
    MyNordic_initialized_TestCase_initialized_eqFunction_4463,
    MyNordic_initialized_TestCase_initialized_eqFunction_4464,
    MyNordic_initialized_TestCase_initialized_eqFunction_4465,
    MyNordic_initialized_TestCase_initialized_eqFunction_4466,
    MyNordic_initialized_TestCase_initialized_eqFunction_4467,
    MyNordic_initialized_TestCase_initialized_eqFunction_4468,
    MyNordic_initialized_TestCase_initialized_eqFunction_4469,
    MyNordic_initialized_TestCase_initialized_eqFunction_4470,
    MyNordic_initialized_TestCase_initialized_eqFunction_4471,
    MyNordic_initialized_TestCase_initialized_eqFunction_4472,
    MyNordic_initialized_TestCase_initialized_eqFunction_4473,
    MyNordic_initialized_TestCase_initialized_eqFunction_4474,
    MyNordic_initialized_TestCase_initialized_eqFunction_4475,
    MyNordic_initialized_TestCase_initialized_eqFunction_4476,
    MyNordic_initialized_TestCase_initialized_eqFunction_4477,
    MyNordic_initialized_TestCase_initialized_eqFunction_4478,
    MyNordic_initialized_TestCase_initialized_eqFunction_4479,
    MyNordic_initialized_TestCase_initialized_eqFunction_4480,
    MyNordic_initialized_TestCase_initialized_eqFunction_4481,
    MyNordic_initialized_TestCase_initialized_eqFunction_4482,
    MyNordic_initialized_TestCase_initialized_eqFunction_4483,
    MyNordic_initialized_TestCase_initialized_eqFunction_4484,
    MyNordic_initialized_TestCase_initialized_eqFunction_4485,
    MyNordic_initialized_TestCase_initialized_eqFunction_4486,
    MyNordic_initialized_TestCase_initialized_eqFunction_4487,
    MyNordic_initialized_TestCase_initialized_eqFunction_4488,
    MyNordic_initialized_TestCase_initialized_eqFunction_4489,
    MyNordic_initialized_TestCase_initialized_eqFunction_4490,
    MyNordic_initialized_TestCase_initialized_eqFunction_4491,
    MyNordic_initialized_TestCase_initialized_eqFunction_4492,
    MyNordic_initialized_TestCase_initialized_eqFunction_4493,
    MyNordic_initialized_TestCase_initialized_eqFunction_4494,
    MyNordic_initialized_TestCase_initialized_eqFunction_4495,
    MyNordic_initialized_TestCase_initialized_eqFunction_4496,
    MyNordic_initialized_TestCase_initialized_eqFunction_4497,
    MyNordic_initialized_TestCase_initialized_eqFunction_4498,
    MyNordic_initialized_TestCase_initialized_eqFunction_4499,
    MyNordic_initialized_TestCase_initialized_eqFunction_4500,
    MyNordic_initialized_TestCase_initialized_eqFunction_4501,
    MyNordic_initialized_TestCase_initialized_eqFunction_4502,
    MyNordic_initialized_TestCase_initialized_eqFunction_4503,
    MyNordic_initialized_TestCase_initialized_eqFunction_4504,
    MyNordic_initialized_TestCase_initialized_eqFunction_4505,
    MyNordic_initialized_TestCase_initialized_eqFunction_4506,
    MyNordic_initialized_TestCase_initialized_eqFunction_4507,
    MyNordic_initialized_TestCase_initialized_eqFunction_4508,
    MyNordic_initialized_TestCase_initialized_eqFunction_4509,
    MyNordic_initialized_TestCase_initialized_eqFunction_4510,
    MyNordic_initialized_TestCase_initialized_eqFunction_4511,
    MyNordic_initialized_TestCase_initialized_eqFunction_4512,
    MyNordic_initialized_TestCase_initialized_eqFunction_4513,
    MyNordic_initialized_TestCase_initialized_eqFunction_4514,
    MyNordic_initialized_TestCase_initialized_eqFunction_4515,
    MyNordic_initialized_TestCase_initialized_eqFunction_4516,
    MyNordic_initialized_TestCase_initialized_eqFunction_4517,
    MyNordic_initialized_TestCase_initialized_eqFunction_4518,
    MyNordic_initialized_TestCase_initialized_eqFunction_4519,
    MyNordic_initialized_TestCase_initialized_eqFunction_4520,
    MyNordic_initialized_TestCase_initialized_eqFunction_4521,
    MyNordic_initialized_TestCase_initialized_eqFunction_4522,
    MyNordic_initialized_TestCase_initialized_eqFunction_4523,
    MyNordic_initialized_TestCase_initialized_eqFunction_4524,
    MyNordic_initialized_TestCase_initialized_eqFunction_4525,
    MyNordic_initialized_TestCase_initialized_eqFunction_4526,
    MyNordic_initialized_TestCase_initialized_eqFunction_4527,
    MyNordic_initialized_TestCase_initialized_eqFunction_4528,
    MyNordic_initialized_TestCase_initialized_eqFunction_4529,
    MyNordic_initialized_TestCase_initialized_eqFunction_4530,
    MyNordic_initialized_TestCase_initialized_eqFunction_4531,
    MyNordic_initialized_TestCase_initialized_eqFunction_4532,
    MyNordic_initialized_TestCase_initialized_eqFunction_4533,
    MyNordic_initialized_TestCase_initialized_eqFunction_4534,
    MyNordic_initialized_TestCase_initialized_eqFunction_4535,
    MyNordic_initialized_TestCase_initialized_eqFunction_4536,
    MyNordic_initialized_TestCase_initialized_eqFunction_4537,
    MyNordic_initialized_TestCase_initialized_eqFunction_4538,
    MyNordic_initialized_TestCase_initialized_eqFunction_4539,
    MyNordic_initialized_TestCase_initialized_eqFunction_4540,
    MyNordic_initialized_TestCase_initialized_eqFunction_4541,
    MyNordic_initialized_TestCase_initialized_eqFunction_4542,
    MyNordic_initialized_TestCase_initialized_eqFunction_4543,
    MyNordic_initialized_TestCase_initialized_eqFunction_4544,
    MyNordic_initialized_TestCase_initialized_eqFunction_4545,
    MyNordic_initialized_TestCase_initialized_eqFunction_4546,
    MyNordic_initialized_TestCase_initialized_eqFunction_4547,
    MyNordic_initialized_TestCase_initialized_eqFunction_4548,
    MyNordic_initialized_TestCase_initialized_eqFunction_4549,
    MyNordic_initialized_TestCase_initialized_eqFunction_4550,
    MyNordic_initialized_TestCase_initialized_eqFunction_4551,
    MyNordic_initialized_TestCase_initialized_eqFunction_4552,
    MyNordic_initialized_TestCase_initialized_eqFunction_4553,
    MyNordic_initialized_TestCase_initialized_eqFunction_4554,
    MyNordic_initialized_TestCase_initialized_eqFunction_4555,
    MyNordic_initialized_TestCase_initialized_eqFunction_4556,
    MyNordic_initialized_TestCase_initialized_eqFunction_4557,
    MyNordic_initialized_TestCase_initialized_eqFunction_4558,
    MyNordic_initialized_TestCase_initialized_eqFunction_4559,
    MyNordic_initialized_TestCase_initialized_eqFunction_4560,
    MyNordic_initialized_TestCase_initialized_eqFunction_4561,
    MyNordic_initialized_TestCase_initialized_eqFunction_4562,
    MyNordic_initialized_TestCase_initialized_eqFunction_4563,
    MyNordic_initialized_TestCase_initialized_eqFunction_4564,
    MyNordic_initialized_TestCase_initialized_eqFunction_4565,
    MyNordic_initialized_TestCase_initialized_eqFunction_4566,
    MyNordic_initialized_TestCase_initialized_eqFunction_4567,
    MyNordic_initialized_TestCase_initialized_eqFunction_4568,
    MyNordic_initialized_TestCase_initialized_eqFunction_4569,
    MyNordic_initialized_TestCase_initialized_eqFunction_4570,
    MyNordic_initialized_TestCase_initialized_eqFunction_4571,
    MyNordic_initialized_TestCase_initialized_eqFunction_4572,
    MyNordic_initialized_TestCase_initialized_eqFunction_4573,
    MyNordic_initialized_TestCase_initialized_eqFunction_4574,
    MyNordic_initialized_TestCase_initialized_eqFunction_4575,
    MyNordic_initialized_TestCase_initialized_eqFunction_4576,
    MyNordic_initialized_TestCase_initialized_eqFunction_4577,
    MyNordic_initialized_TestCase_initialized_eqFunction_4578,
    MyNordic_initialized_TestCase_initialized_eqFunction_4579,
    MyNordic_initialized_TestCase_initialized_eqFunction_4580,
    MyNordic_initialized_TestCase_initialized_eqFunction_4581,
    MyNordic_initialized_TestCase_initialized_eqFunction_4582,
    MyNordic_initialized_TestCase_initialized_eqFunction_4583,
    MyNordic_initialized_TestCase_initialized_eqFunction_4584,
    MyNordic_initialized_TestCase_initialized_eqFunction_4585,
    MyNordic_initialized_TestCase_initialized_eqFunction_4586,
    MyNordic_initialized_TestCase_initialized_eqFunction_4587,
    MyNordic_initialized_TestCase_initialized_eqFunction_4588,
    MyNordic_initialized_TestCase_initialized_eqFunction_4589,
    MyNordic_initialized_TestCase_initialized_eqFunction_4590,
    MyNordic_initialized_TestCase_initialized_eqFunction_4591,
    MyNordic_initialized_TestCase_initialized_eqFunction_4592,
    MyNordic_initialized_TestCase_initialized_eqFunction_4593,
    MyNordic_initialized_TestCase_initialized_eqFunction_4594,
    MyNordic_initialized_TestCase_initialized_eqFunction_4595,
    MyNordic_initialized_TestCase_initialized_eqFunction_4596,
    MyNordic_initialized_TestCase_initialized_eqFunction_4597,
    MyNordic_initialized_TestCase_initialized_eqFunction_4598,
    MyNordic_initialized_TestCase_initialized_eqFunction_4599,
    MyNordic_initialized_TestCase_initialized_eqFunction_4600,
    MyNordic_initialized_TestCase_initialized_eqFunction_4601,
    MyNordic_initialized_TestCase_initialized_eqFunction_4602,
    MyNordic_initialized_TestCase_initialized_eqFunction_4603,
    MyNordic_initialized_TestCase_initialized_eqFunction_4604,
    MyNordic_initialized_TestCase_initialized_eqFunction_4605,
    MyNordic_initialized_TestCase_initialized_eqFunction_4606,
    MyNordic_initialized_TestCase_initialized_eqFunction_4607,
    MyNordic_initialized_TestCase_initialized_eqFunction_4608,
    MyNordic_initialized_TestCase_initialized_eqFunction_4609,
    MyNordic_initialized_TestCase_initialized_eqFunction_4610,
    MyNordic_initialized_TestCase_initialized_eqFunction_4611,
    MyNordic_initialized_TestCase_initialized_eqFunction_4612,
    MyNordic_initialized_TestCase_initialized_eqFunction_4613,
    MyNordic_initialized_TestCase_initialized_eqFunction_4614,
    MyNordic_initialized_TestCase_initialized_eqFunction_4615,
    MyNordic_initialized_TestCase_initialized_eqFunction_4616,
    MyNordic_initialized_TestCase_initialized_eqFunction_4617,
    MyNordic_initialized_TestCase_initialized_eqFunction_4618,
    MyNordic_initialized_TestCase_initialized_eqFunction_4619,
    MyNordic_initialized_TestCase_initialized_eqFunction_4620,
    MyNordic_initialized_TestCase_initialized_eqFunction_4621,
    MyNordic_initialized_TestCase_initialized_eqFunction_4622,
    MyNordic_initialized_TestCase_initialized_eqFunction_4623,
    MyNordic_initialized_TestCase_initialized_eqFunction_4624,
    MyNordic_initialized_TestCase_initialized_eqFunction_4625,
    MyNordic_initialized_TestCase_initialized_eqFunction_4626,
    MyNordic_initialized_TestCase_initialized_eqFunction_4627,
    MyNordic_initialized_TestCase_initialized_eqFunction_4628,
    MyNordic_initialized_TestCase_initialized_eqFunction_4629,
    MyNordic_initialized_TestCase_initialized_eqFunction_4630,
    MyNordic_initialized_TestCase_initialized_eqFunction_4631,
    MyNordic_initialized_TestCase_initialized_eqFunction_4632,
    MyNordic_initialized_TestCase_initialized_eqFunction_4633,
    MyNordic_initialized_TestCase_initialized_eqFunction_4634,
    MyNordic_initialized_TestCase_initialized_eqFunction_4635,
    MyNordic_initialized_TestCase_initialized_eqFunction_4636,
    MyNordic_initialized_TestCase_initialized_eqFunction_4637,
    MyNordic_initialized_TestCase_initialized_eqFunction_4638,
    MyNordic_initialized_TestCase_initialized_eqFunction_4639,
    MyNordic_initialized_TestCase_initialized_eqFunction_4640,
    MyNordic_initialized_TestCase_initialized_eqFunction_4641,
    MyNordic_initialized_TestCase_initialized_eqFunction_4642,
    MyNordic_initialized_TestCase_initialized_eqFunction_4643,
    MyNordic_initialized_TestCase_initialized_eqFunction_4644,
    MyNordic_initialized_TestCase_initialized_eqFunction_4645,
    MyNordic_initialized_TestCase_initialized_eqFunction_4646,
    MyNordic_initialized_TestCase_initialized_eqFunction_4647,
    MyNordic_initialized_TestCase_initialized_eqFunction_4648,
    MyNordic_initialized_TestCase_initialized_eqFunction_4649,
    MyNordic_initialized_TestCase_initialized_eqFunction_4650,
    MyNordic_initialized_TestCase_initialized_eqFunction_4651,
    MyNordic_initialized_TestCase_initialized_eqFunction_4652,
    MyNordic_initialized_TestCase_initialized_eqFunction_4653,
    MyNordic_initialized_TestCase_initialized_eqFunction_4654,
    MyNordic_initialized_TestCase_initialized_eqFunction_4655,
    MyNordic_initialized_TestCase_initialized_eqFunction_4656,
    MyNordic_initialized_TestCase_initialized_eqFunction_4657,
    MyNordic_initialized_TestCase_initialized_eqFunction_4658,
    MyNordic_initialized_TestCase_initialized_eqFunction_4659,
    MyNordic_initialized_TestCase_initialized_eqFunction_4660,
    MyNordic_initialized_TestCase_initialized_eqFunction_4661,
    MyNordic_initialized_TestCase_initialized_eqFunction_4662,
    MyNordic_initialized_TestCase_initialized_eqFunction_4663,
    MyNordic_initialized_TestCase_initialized_eqFunction_4664,
    MyNordic_initialized_TestCase_initialized_eqFunction_4665,
    MyNordic_initialized_TestCase_initialized_eqFunction_4666,
    MyNordic_initialized_TestCase_initialized_eqFunction_4667,
    MyNordic_initialized_TestCase_initialized_eqFunction_4668,
    MyNordic_initialized_TestCase_initialized_eqFunction_4669,
    MyNordic_initialized_TestCase_initialized_eqFunction_4670,
    MyNordic_initialized_TestCase_initialized_eqFunction_4671,
    MyNordic_initialized_TestCase_initialized_eqFunction_4672,
    MyNordic_initialized_TestCase_initialized_eqFunction_4673,
    MyNordic_initialized_TestCase_initialized_eqFunction_4674,
    MyNordic_initialized_TestCase_initialized_eqFunction_4675,
    MyNordic_initialized_TestCase_initialized_eqFunction_4676,
    MyNordic_initialized_TestCase_initialized_eqFunction_4677,
    MyNordic_initialized_TestCase_initialized_eqFunction_4678,
    MyNordic_initialized_TestCase_initialized_eqFunction_4679,
    MyNordic_initialized_TestCase_initialized_eqFunction_4680,
    MyNordic_initialized_TestCase_initialized_eqFunction_4681,
    MyNordic_initialized_TestCase_initialized_eqFunction_4682,
    MyNordic_initialized_TestCase_initialized_eqFunction_4683,
    MyNordic_initialized_TestCase_initialized_eqFunction_4684,
    MyNordic_initialized_TestCase_initialized_eqFunction_4685,
    MyNordic_initialized_TestCase_initialized_eqFunction_4686,
    MyNordic_initialized_TestCase_initialized_eqFunction_4687,
    MyNordic_initialized_TestCase_initialized_eqFunction_4688,
    MyNordic_initialized_TestCase_initialized_eqFunction_4689,
    MyNordic_initialized_TestCase_initialized_eqFunction_4690,
    MyNordic_initialized_TestCase_initialized_eqFunction_4691,
    MyNordic_initialized_TestCase_initialized_eqFunction_4692,
    MyNordic_initialized_TestCase_initialized_eqFunction_4693,
    MyNordic_initialized_TestCase_initialized_eqFunction_4694,
    MyNordic_initialized_TestCase_initialized_eqFunction_4695,
    MyNordic_initialized_TestCase_initialized_eqFunction_4696,
    MyNordic_initialized_TestCase_initialized_eqFunction_4697,
    MyNordic_initialized_TestCase_initialized_eqFunction_4698,
    MyNordic_initialized_TestCase_initialized_eqFunction_4699,
    MyNordic_initialized_TestCase_initialized_eqFunction_4700,
    MyNordic_initialized_TestCase_initialized_eqFunction_4701,
    MyNordic_initialized_TestCase_initialized_eqFunction_4702,
    MyNordic_initialized_TestCase_initialized_eqFunction_4703,
    MyNordic_initialized_TestCase_initialized_eqFunction_4704,
    MyNordic_initialized_TestCase_initialized_eqFunction_4705,
    MyNordic_initialized_TestCase_initialized_eqFunction_4706,
    MyNordic_initialized_TestCase_initialized_eqFunction_4707,
    MyNordic_initialized_TestCase_initialized_eqFunction_4708,
    MyNordic_initialized_TestCase_initialized_eqFunction_4709,
    MyNordic_initialized_TestCase_initialized_eqFunction_4710,
    MyNordic_initialized_TestCase_initialized_eqFunction_4711,
    MyNordic_initialized_TestCase_initialized_eqFunction_4712,
    MyNordic_initialized_TestCase_initialized_eqFunction_4713,
    MyNordic_initialized_TestCase_initialized_eqFunction_4714,
    MyNordic_initialized_TestCase_initialized_eqFunction_4715,
    MyNordic_initialized_TestCase_initialized_eqFunction_4716,
    MyNordic_initialized_TestCase_initialized_eqFunction_4717,
    MyNordic_initialized_TestCase_initialized_eqFunction_4718,
    MyNordic_initialized_TestCase_initialized_eqFunction_4719,
    MyNordic_initialized_TestCase_initialized_eqFunction_4720,
    MyNordic_initialized_TestCase_initialized_eqFunction_4721,
    MyNordic_initialized_TestCase_initialized_eqFunction_4722,
    MyNordic_initialized_TestCase_initialized_eqFunction_4723,
    MyNordic_initialized_TestCase_initialized_eqFunction_4724,
    MyNordic_initialized_TestCase_initialized_eqFunction_4725,
    MyNordic_initialized_TestCase_initialized_eqFunction_4726,
    MyNordic_initialized_TestCase_initialized_eqFunction_4727,
    MyNordic_initialized_TestCase_initialized_eqFunction_4728,
    MyNordic_initialized_TestCase_initialized_eqFunction_4729,
    MyNordic_initialized_TestCase_initialized_eqFunction_4730,
    MyNordic_initialized_TestCase_initialized_eqFunction_4731,
    MyNordic_initialized_TestCase_initialized_eqFunction_4732,
    MyNordic_initialized_TestCase_initialized_eqFunction_4733,
    MyNordic_initialized_TestCase_initialized_eqFunction_4734,
    MyNordic_initialized_TestCase_initialized_eqFunction_4735,
    MyNordic_initialized_TestCase_initialized_eqFunction_4736,
    MyNordic_initialized_TestCase_initialized_eqFunction_4737,
    MyNordic_initialized_TestCase_initialized_eqFunction_4738,
    MyNordic_initialized_TestCase_initialized_eqFunction_4739,
    MyNordic_initialized_TestCase_initialized_eqFunction_4740,
    MyNordic_initialized_TestCase_initialized_eqFunction_4741,
    MyNordic_initialized_TestCase_initialized_eqFunction_4742,
    MyNordic_initialized_TestCase_initialized_eqFunction_4743,
    MyNordic_initialized_TestCase_initialized_eqFunction_4744,
    MyNordic_initialized_TestCase_initialized_eqFunction_4745,
    MyNordic_initialized_TestCase_initialized_eqFunction_4746,
    MyNordic_initialized_TestCase_initialized_eqFunction_4747,
    MyNordic_initialized_TestCase_initialized_eqFunction_4748,
    MyNordic_initialized_TestCase_initialized_eqFunction_4749,
    MyNordic_initialized_TestCase_initialized_eqFunction_4750,
    MyNordic_initialized_TestCase_initialized_eqFunction_4751,
    MyNordic_initialized_TestCase_initialized_eqFunction_4752,
    MyNordic_initialized_TestCase_initialized_eqFunction_4753,
    MyNordic_initialized_TestCase_initialized_eqFunction_4754,
    MyNordic_initialized_TestCase_initialized_eqFunction_4755,
    MyNordic_initialized_TestCase_initialized_eqFunction_4756,
    MyNordic_initialized_TestCase_initialized_eqFunction_4757,
    MyNordic_initialized_TestCase_initialized_eqFunction_4758,
    MyNordic_initialized_TestCase_initialized_eqFunction_4759,
    MyNordic_initialized_TestCase_initialized_eqFunction_4760,
    MyNordic_initialized_TestCase_initialized_eqFunction_4761,
    MyNordic_initialized_TestCase_initialized_eqFunction_4762,
    MyNordic_initialized_TestCase_initialized_eqFunction_4763,
    MyNordic_initialized_TestCase_initialized_eqFunction_4764,
    MyNordic_initialized_TestCase_initialized_eqFunction_4765,
    MyNordic_initialized_TestCase_initialized_eqFunction_4766,
    MyNordic_initialized_TestCase_initialized_eqFunction_4767,
    MyNordic_initialized_TestCase_initialized_eqFunction_4768,
    MyNordic_initialized_TestCase_initialized_eqFunction_4769,
    MyNordic_initialized_TestCase_initialized_eqFunction_4770,
    MyNordic_initialized_TestCase_initialized_eqFunction_4771,
    MyNordic_initialized_TestCase_initialized_eqFunction_4772,
    MyNordic_initialized_TestCase_initialized_eqFunction_4773,
    MyNordic_initialized_TestCase_initialized_eqFunction_4774,
    MyNordic_initialized_TestCase_initialized_eqFunction_4775,
    MyNordic_initialized_TestCase_initialized_eqFunction_4776,
    MyNordic_initialized_TestCase_initialized_eqFunction_4777,
    MyNordic_initialized_TestCase_initialized_eqFunction_4778,
    MyNordic_initialized_TestCase_initialized_eqFunction_4779,
    MyNordic_initialized_TestCase_initialized_eqFunction_4780,
    MyNordic_initialized_TestCase_initialized_eqFunction_4781,
    MyNordic_initialized_TestCase_initialized_eqFunction_4782,
    MyNordic_initialized_TestCase_initialized_eqFunction_4783,
    MyNordic_initialized_TestCase_initialized_eqFunction_4784,
    MyNordic_initialized_TestCase_initialized_eqFunction_4785,
    MyNordic_initialized_TestCase_initialized_eqFunction_4786,
    MyNordic_initialized_TestCase_initialized_eqFunction_4787,
    MyNordic_initialized_TestCase_initialized_eqFunction_4788,
    MyNordic_initialized_TestCase_initialized_eqFunction_4789,
    MyNordic_initialized_TestCase_initialized_eqFunction_4790,
    MyNordic_initialized_TestCase_initialized_eqFunction_4791,
    MyNordic_initialized_TestCase_initialized_eqFunction_4792,
    MyNordic_initialized_TestCase_initialized_eqFunction_4793,
    MyNordic_initialized_TestCase_initialized_eqFunction_4794,
    MyNordic_initialized_TestCase_initialized_eqFunction_4795,
    MyNordic_initialized_TestCase_initialized_eqFunction_4796,
    MyNordic_initialized_TestCase_initialized_eqFunction_4797,
    MyNordic_initialized_TestCase_initialized_eqFunction_4798,
    MyNordic_initialized_TestCase_initialized_eqFunction_4799,
    MyNordic_initialized_TestCase_initialized_eqFunction_4800,
    MyNordic_initialized_TestCase_initialized_eqFunction_4801,
    MyNordic_initialized_TestCase_initialized_eqFunction_4802,
    MyNordic_initialized_TestCase_initialized_eqFunction_4803,
    MyNordic_initialized_TestCase_initialized_eqFunction_4804,
    MyNordic_initialized_TestCase_initialized_eqFunction_4805,
    MyNordic_initialized_TestCase_initialized_eqFunction_4806,
    MyNordic_initialized_TestCase_initialized_eqFunction_4807,
    MyNordic_initialized_TestCase_initialized_eqFunction_4808,
    MyNordic_initialized_TestCase_initialized_eqFunction_4809,
    MyNordic_initialized_TestCase_initialized_eqFunction_4810,
    MyNordic_initialized_TestCase_initialized_eqFunction_4811,
    MyNordic_initialized_TestCase_initialized_eqFunction_4812,
    MyNordic_initialized_TestCase_initialized_eqFunction_4813,
    MyNordic_initialized_TestCase_initialized_eqFunction_4814,
    MyNordic_initialized_TestCase_initialized_eqFunction_4815,
    MyNordic_initialized_TestCase_initialized_eqFunction_4816,
    MyNordic_initialized_TestCase_initialized_eqFunction_4817,
    MyNordic_initialized_TestCase_initialized_eqFunction_4818,
    MyNordic_initialized_TestCase_initialized_eqFunction_4819,
    MyNordic_initialized_TestCase_initialized_eqFunction_4820,
    MyNordic_initialized_TestCase_initialized_eqFunction_4821,
    MyNordic_initialized_TestCase_initialized_eqFunction_4822,
    MyNordic_initialized_TestCase_initialized_eqFunction_4823,
    MyNordic_initialized_TestCase_initialized_eqFunction_4824,
    MyNordic_initialized_TestCase_initialized_eqFunction_4825,
    MyNordic_initialized_TestCase_initialized_eqFunction_4826,
    MyNordic_initialized_TestCase_initialized_eqFunction_4827,
    MyNordic_initialized_TestCase_initialized_eqFunction_4828,
    MyNordic_initialized_TestCase_initialized_eqFunction_4829,
    MyNordic_initialized_TestCase_initialized_eqFunction_4830,
    MyNordic_initialized_TestCase_initialized_eqFunction_4831,
    MyNordic_initialized_TestCase_initialized_eqFunction_4832,
    MyNordic_initialized_TestCase_initialized_eqFunction_4833,
    MyNordic_initialized_TestCase_initialized_eqFunction_4834,
    MyNordic_initialized_TestCase_initialized_eqFunction_4835,
    MyNordic_initialized_TestCase_initialized_eqFunction_4836,
    MyNordic_initialized_TestCase_initialized_eqFunction_4837,
    MyNordic_initialized_TestCase_initialized_eqFunction_4838,
    MyNordic_initialized_TestCase_initialized_eqFunction_4839,
    MyNordic_initialized_TestCase_initialized_eqFunction_4840,
    MyNordic_initialized_TestCase_initialized_eqFunction_4841,
    MyNordic_initialized_TestCase_initialized_eqFunction_4842,
    MyNordic_initialized_TestCase_initialized_eqFunction_4843,
    MyNordic_initialized_TestCase_initialized_eqFunction_4844,
    MyNordic_initialized_TestCase_initialized_eqFunction_4845,
    MyNordic_initialized_TestCase_initialized_eqFunction_4846,
    MyNordic_initialized_TestCase_initialized_eqFunction_4847,
    MyNordic_initialized_TestCase_initialized_eqFunction_4848,
    MyNordic_initialized_TestCase_initialized_eqFunction_4849,
    MyNordic_initialized_TestCase_initialized_eqFunction_4850,
    MyNordic_initialized_TestCase_initialized_eqFunction_4851,
    MyNordic_initialized_TestCase_initialized_eqFunction_4852,
    MyNordic_initialized_TestCase_initialized_eqFunction_4853,
    MyNordic_initialized_TestCase_initialized_eqFunction_4854,
    MyNordic_initialized_TestCase_initialized_eqFunction_4855,
    MyNordic_initialized_TestCase_initialized_eqFunction_4856,
    MyNordic_initialized_TestCase_initialized_eqFunction_4857,
    MyNordic_initialized_TestCase_initialized_eqFunction_4858,
    MyNordic_initialized_TestCase_initialized_eqFunction_4859,
    MyNordic_initialized_TestCase_initialized_eqFunction_4860,
    MyNordic_initialized_TestCase_initialized_eqFunction_4861,
    MyNordic_initialized_TestCase_initialized_eqFunction_4862
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif