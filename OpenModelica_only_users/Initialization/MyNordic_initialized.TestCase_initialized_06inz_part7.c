#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5321
type: SIMPLE_ASSIGN
$START.vrNordic_g19.leadLag.x_scaled[1] = vrNordic_g19.leadLag.X0[1] * vrNordic_g19.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5321};
  ((modelica_real *)((data->modelData->realVarsData[309] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5564]] /* vrNordic_g19.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[309] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[309].info /* vrNordic_g19.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5321;
}

/*
equation index: 5322
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.x_scaled[1] = $START.vrNordic_g19.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[309] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5322;
}

/*
equation index: 5323
type: SIMPLE_ASSIGN
$START.vrNordic_g19.leadLag.x[1] = vrNordic_g19.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5323};
  ((modelica_real *)((data->modelData->realVarsData[3889] /* vrNordic_g19.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5564]] /* vrNordic_g19.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3889] /* vrNordic_g19.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3889].info /* vrNordic_g19.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5323;
}

/*
equation index: 5324
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.x[1] = vrNordic_g19.leadLag.x_scaled[1] / vrNordic_g19.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */),"vrNordic_g19.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5324;
}

/*
equation index: 5325
type: SIMPLE_ASSIGN
vrNordic_g19.limIntegrator.y_start = vrNordic_g19.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5606]] /* vrNordic_g19.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5542]] /* vrNordic_g19.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5325;
}

/*
equation index: 5326
type: SIMPLE_ASSIGN
goverNordic_g18.Pm0Pu = g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1990]] /* g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5326;
}

/*
equation index: 5327
type: SIMPLE_ASSIGN
$START.goverNordic_g18.PGenPu = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5327};
  ((modelica_real *)((data->modelData->realVarsData[2238] /* goverNordic_g18.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2238] /* goverNordic_g18.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2238].info /* goverNordic_g18.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */));
  threadData->lastEquationSolved = 5327;
}

/*
equation index: 5328
type: SIMPLE_ASSIGN
goverNordic_g18.PGenPu = if g18.running.value then (-g18.terminal.V.re) * g18.terminal.i.re - g18.terminal.V.im * g18.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5328;
}

/*
equation index: 5329
type: SIMPLE_ASSIGN
goverNordic_g18.perUnitP.y = goverNordic_g18.perUnitP.k * goverNordic_g18.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* goverNordic_g18.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* goverNordic_g18.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */));
  threadData->lastEquationSolved = 5329;
}

/*
equation index: 5330
type: SIMPLE_ASSIGN
g18.PGen = if g18.running.value then 100.0 * goverNordic_g18.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* g18.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5330;
}

/*
equation index: 5331
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.Y0 = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2887]] /* goverNordic_g18.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5331;
}

/*
equation index: 5332
type: SIMPLE_ASSIGN
$START.goverNordic_g18.limRateLimFirstOrder.limIntegrator.y = goverNordic_g18.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5332};
  ((modelica_real *)((data->modelData->realVarsData[190] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2887]] /* goverNordic_g18.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[190] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[190].info /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5332;
}

/*
equation index: 5333
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g18.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2887]] /* goverNordic_g18.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5333;
}

/*
equation index: 5334
type: SIMPLE_ASSIGN
goverNordic_g18.firstOrder1.y_start = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2877]] /* goverNordic_g18.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5334;
}

/*
equation index: 5335
type: SIMPLE_ASSIGN
$START.goverNordic_g18.firstOrder1.y = goverNordic_g18.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5335};
  ((modelica_real *)((data->modelData->realVarsData[188] /* goverNordic_g18.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2877]] /* goverNordic_g18.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[188] /* goverNordic_g18.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[188].info /* goverNordic_g18.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5335;
}

/*
equation index: 5336
type: SIMPLE_ASSIGN
goverNordic_g18.firstOrder1.y = $START.goverNordic_g18.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[188] /* goverNordic_g18.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5336;
}

/*
equation index: 5337
type: SIMPLE_ASSIGN
$DER.goverNordic_g18.firstOrder1.y = (goverNordic_g18.firstOrder1.k * goverNordic_g18.perUnitP.y - goverNordic_g18.firstOrder1.y) / goverNordic_g18.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* der(goverNordic_g18.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* goverNordic_g18.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* goverNordic_g18.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* goverNordic_g18.firstOrder1.T PARAM */),"goverNordic_g18.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5337;
}

/*
equation index: 5338
type: SIMPLE_ASSIGN
goverNordic_g18.const.k = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2870]] /* goverNordic_g18.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5338;
}

/*
equation index: 5339
type: SIMPLE_ASSIGN
goverNordic_g18.dP.y = goverNordic_g18.const.k - goverNordic_g18.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2242]] /* goverNordic_g18.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2870]] /* goverNordic_g18.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5339;
}

/*
equation index: 5340
type: SIMPLE_ASSIGN
goverNordic_g18.dOmegaPlusDroop.y = goverNordic_g18.dOmegaPlusDroop.k1 * goverNordic_g18.dOmega.y + goverNordic_g18.dOmegaPlusDroop.k2 * goverNordic_g18.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2873]] /* goverNordic_g18.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2240]] /* goverNordic_g18.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* goverNordic_g18.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2242]] /* goverNordic_g18.dP.y variable */));
  threadData->lastEquationSolved = 5340;
}

/*
equation index: 5341
type: SIMPLE_ASSIGN
goverNordic_g18.govKi.y = goverNordic_g18.govKi.k * goverNordic_g18.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2245]] /* goverNordic_g18.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* goverNordic_g18.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5341;
}

/*
equation index: 5342
type: SIMPLE_ASSIGN
$DER.goverNordic_g18.govInt.y = goverNordic_g18.govInt.k * goverNordic_g18.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* der(goverNordic_g18.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2878]] /* goverNordic_g18.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2245]] /* goverNordic_g18.govKi.y variable */));
  threadData->lastEquationSolved = 5342;
}

/*
equation index: 5343
type: SIMPLE_ASSIGN
goverNordic_g18.govKp.y = goverNordic_g18.govKp.k * goverNordic_g18.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2246]] /* goverNordic_g18.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2881]] /* goverNordic_g18.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5343;
}

/*
equation index: 5344
type: SIMPLE_ASSIGN
goverNordic_g18.govInt.y_start = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* goverNordic_g18.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5344;
}

/*
equation index: 5345
type: SIMPLE_ASSIGN
$START.goverNordic_g18.govInt.y = goverNordic_g18.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5345};
  ((modelica_real *)((data->modelData->realVarsData[189] /* goverNordic_g18.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* goverNordic_g18.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* goverNordic_g18.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[189] /* goverNordic_g18.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[189].info /* goverNordic_g18.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* goverNordic_g18.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5345;
}

/*
equation index: 5346
type: SIMPLE_ASSIGN
goverNordic_g18.waterFlow.y_start = goverNordic_g18.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5346};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* goverNordic_g18.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2869]] /* goverNordic_g18.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5346;
}

/*
equation index: 5347
type: SIMPLE_ASSIGN
$START.goverNordic_g18.waterFlow.y = goverNordic_g18.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5347};
  ((modelica_real *)((data->modelData->realVarsData[191] /* goverNordic_g18.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* goverNordic_g18.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[191] /* goverNordic_g18.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[191].info /* goverNordic_g18.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5347;
}

/*
equation index: 5348
type: SIMPLE_ASSIGN
vrNordic_g18.Us0Pu = g18.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5470]] /* vrNordic_g18.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2015]] /* g18.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5348;
}

/*
equation index: 5349
type: SIMPLE_ASSIGN
$START.vrNordic_g18.UsPu = vrNordic_g18.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5349};
  ((modelica_real *)((data->modelData->realVarsData[3855] /* vrNordic_g18.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5470]] /* vrNordic_g18.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3855] /* vrNordic_g18.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3855].info /* vrNordic_g18.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */));
  threadData->lastEquationSolved = 5349;
}

/*
equation index: 5350
type: SIMPLE_ASSIGN
vrNordic_g18.UsPu = if g18.running.value then if g18.uStatorPu.re == 0.0 and g18.uStatorPu.im == 0.0 then 0.0 else (g18.uStatorPu.re ^ 2.0 + g18.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5350};
  modelica_real tmp1475;
  modelica_real tmp1476;
  modelica_real tmp1477;
  modelica_boolean tmp1478;
  modelica_real tmp1479;
  modelica_boolean tmp1480;
  modelica_real tmp1481;
  tmp1480 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1480)
  {
    tmp1478 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) == 0.0));
    if(tmp1478)
    {
      tmp1479 = 0.0;
    }
    else
    {
      tmp1475 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */);
      tmp1476 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */);
      tmp1477 = (tmp1475 * tmp1475) + (tmp1476 * tmp1476);
      if(tmp1477 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1477, 0.5);
      }
      tmp1479 = sqrt(tmp1477);
    }
    tmp1481 = tmp1479;
  }
  else
  {
    tmp1481 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */) = tmp1481;
  threadData->lastEquationSolved = 5350;
}

/*
equation index: 5351
type: SIMPLE_ASSIGN
vrNordic_g18.Ir0Pu = g18.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5465]] /* vrNordic_g18.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* g18.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5351;
}

/*
equation index: 5352
type: SIMPLE_ASSIGN
$START.vrNordic_g18.IrPu = vrNordic_g18.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5352};
  ((modelica_real *)((data->modelData->realVarsData[3854] /* vrNordic_g18.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5465]] /* vrNordic_g18.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3854] /* vrNordic_g18.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3854].info /* vrNordic_g18.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */));
  threadData->lastEquationSolved = 5352;
}

/*
equation index: 5353
type: SIMPLE_ASSIGN
vrNordic_g18.IrPu = if g18.running.value then g18.RfPPu * g18.ifPu / (g18.rTfoPu * g18.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* g18.Kuf PARAM */)),"g18.rTfoPu * g18.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5353;
}

/*
equation index: 5354
type: SIMPLE_ASSIGN
vrNordic_g18.dIf.y = vrNordic_g18.IrPu - vrNordic_g18.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5476]] /* vrNordic_g18.const2.k PARAM */);
  threadData->lastEquationSolved = 5354;
}

/*
equation index: 5355
type: SIMPLE_ASSIGN
vrNordic_g18.overExcitationLimitation.y = if vrNordic_g18.dIf.y < -0.1 then -1.0 else if vrNordic_g18.dIf.y < 0.0 then 0.0 else if vrNordic_g18.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g18.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5355};
  modelica_boolean tmp1482;
  modelica_boolean tmp1483;
  modelica_boolean tmp1484;
  modelica_boolean tmp1485;
  modelica_real tmp1486;
  modelica_boolean tmp1487;
  modelica_real tmp1488;
  tmp1482 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */),-0.1);
  tmp1487 = (modelica_boolean)tmp1482;
  if(tmp1487)
  {
    tmp1488 = -1.0;
  }
  else
  {
    tmp1483 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */),0.0);
    tmp1485 = (modelica_boolean)tmp1483;
    if(tmp1485)
    {
      tmp1486 = 0.0;
    }
    else
    {
      tmp1484 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5530]] /* vrNordic_g18.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1486 = (tmp1484?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */));
    }
    tmp1488 = tmp1486;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */) = tmp1488;
  threadData->lastEquationSolved = 5355;
}

/*
equation index: 5356
type: SIMPLE_ASSIGN
vrNordic_g18.gain1.y = vrNordic_g18.gain1.k * vrNordic_g18.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3863]] /* vrNordic_g18.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5482]] /* vrNordic_g18.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */));
  threadData->lastEquationSolved = 5356;
}

/*
equation index: 5357
type: SIMPLE_ASSIGN
vrNordic_g18.Efd0Pu = g18.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5463]] /* vrNordic_g18.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* g18.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5357;
}

/*
equation index: 5358
type: SIMPLE_ASSIGN
$START.vrNordic_g18.limIntegrator.y = vrNordic_g18.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5358};
  ((modelica_real *)((data->modelData->realVarsData[306] /* vrNordic_g18.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5463]] /* vrNordic_g18.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[306] /* vrNordic_g18.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[306].info /* vrNordic_g18.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5358;
}

/*
equation index: 5359
type: SIMPLE_ASSIGN
vrNordic_g18.UsRef0Pu = vrNordic_g18.Efd0Pu / vrNordic_g18.KTgr + vrNordic_g18.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5471]] /* vrNordic_g18.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5463]] /* vrNordic_g18.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5468]] /* vrNordic_g18.KTgr PARAM */),"vrNordic_g18.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5470]] /* vrNordic_g18.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5359;
}

/*
equation index: 5360
type: SIMPLE_ASSIGN
vrNordic_g18.const1.k = vrNordic_g18.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5475]] /* vrNordic_g18.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5471]] /* vrNordic_g18.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5360;
}

/*
equation index: 5361
type: SIMPLE_ASSIGN
vrNordic_g18.dU.y = vrNordic_g18.const1.k - vrNordic_g18.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vrNordic_g18.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5475]] /* vrNordic_g18.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */);
  threadData->lastEquationSolved = 5361;
}

/*
equation index: 5362
type: SIMPLE_ASSIGN
vrNordic_g18.add.y = vrNordic_g18.add.k1 * vrNordic_g18.dU.y + vrNordic_g18.add.k2 * vrNordic_g18.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5472]] /* vrNordic_g18.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vrNordic_g18.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5473]] /* vrNordic_g18.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3873]] /* vrNordic_g18.limiter.y variable */));
  threadData->lastEquationSolved = 5362;
}

/*
equation index: 5363
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.u_start = vrNordic_g18.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5495]] /* vrNordic_g18.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5463]] /* vrNordic_g18.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5363;
}

/*
equation index: 5364
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.Y0 = if vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag.u_start * vrNordic_g18.leadLag.b[2] / vrNordic_g18.leadLag.a_end else if vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5486]] /* vrNordic_g18.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5495]] /* vrNordic_g18.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5491]] /* vrNordic_g18.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */),"vrNordic_g18.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5497]] /* vrNordic_g18.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5364;
}

/*
equation index: 5365
type: SIMPLE_ASSIGN
$START.vrNordic_g18.leadLag.y = vrNordic_g18.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5365};
  ((modelica_real *)((data->modelData->realVarsData[3866] /* vrNordic_g18.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5486]] /* vrNordic_g18.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3866] /* vrNordic_g18.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3866].info /* vrNordic_g18.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */));
  threadData->lastEquationSolved = 5365;
}

/*
equation index: 5366
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.X0[1] = if vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag.u_start / vrNordic_g18.leadLag.a_end else if vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5485]] /* vrNordic_g18.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5495]] /* vrNordic_g18.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */),"vrNordic_g18.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[704]] /* vrNordic_g18.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5496]] /* vrNordic_g18.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5366;
}

/*
equation index: 5367
type: SIMPLE_ASSIGN
$START.vrNordic_g18.leadLag.x_scaled[1] = vrNordic_g18.leadLag.X0[1] * vrNordic_g18.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5367};
  ((modelica_real *)((data->modelData->realVarsData[303] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5485]] /* vrNordic_g18.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[303] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[303].info /* vrNordic_g18.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5367;
}

/*
equation index: 5368
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.x_scaled[1] = $START.vrNordic_g18.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[303] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5368;
}

/*
equation index: 5369
type: SIMPLE_ASSIGN
$START.vrNordic_g18.leadLag.x[1] = vrNordic_g18.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5369};
  ((modelica_real *)((data->modelData->realVarsData[3865] /* vrNordic_g18.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5485]] /* vrNordic_g18.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3865] /* vrNordic_g18.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3865].info /* vrNordic_g18.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5369;
}

/*
equation index: 5370
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.x[1] = vrNordic_g18.leadLag.x_scaled[1] / vrNordic_g18.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */),"vrNordic_g18.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5370;
}

/*
equation index: 5371
type: SIMPLE_ASSIGN
vrNordic_g18.limIntegrator.y_start = vrNordic_g18.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5527]] /* vrNordic_g18.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5463]] /* vrNordic_g18.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5371;
}

/*
equation index: 5372
type: SIMPLE_ASSIGN
goverNordic_g17.Pm0Pu = g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1887]] /* g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5372;
}

/*
equation index: 5373
type: SIMPLE_ASSIGN
$START.goverNordic_g17.PGenPu = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5373};
  ((modelica_real *)((data->modelData->realVarsData[2220] /* goverNordic_g17.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2220] /* goverNordic_g17.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2220].info /* goverNordic_g17.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */));
  threadData->lastEquationSolved = 5373;
}

/*
equation index: 5374
type: SIMPLE_ASSIGN
goverNordic_g17.PGenPu = if g17.running.value then (-g17.terminal.V.re) * g17.terminal.i.re - g17.terminal.V.im * g17.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5374;
}

/*
equation index: 5375
type: SIMPLE_ASSIGN
goverNordic_g17.perUnitP.y = goverNordic_g17.perUnitP.k * goverNordic_g17.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2236]] /* goverNordic_g17.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* goverNordic_g17.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */));
  threadData->lastEquationSolved = 5375;
}

/*
equation index: 5376
type: SIMPLE_ASSIGN
g17.PGen = if g17.running.value then 100.0 * goverNordic_g17.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1753]] /* g17.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5376;
}

/*
equation index: 5377
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.Y0 = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* goverNordic_g17.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5377;
}

/*
equation index: 5378
type: SIMPLE_ASSIGN
$START.goverNordic_g17.limRateLimFirstOrder.limIntegrator.y = goverNordic_g17.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5378};
  ((modelica_real *)((data->modelData->realVarsData[186] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* goverNordic_g17.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[186] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[186].info /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5378;
}

/*
equation index: 5379
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g17.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2858]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* goverNordic_g17.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5379;
}

/*
equation index: 5380
type: SIMPLE_ASSIGN
goverNordic_g17.firstOrder1.y_start = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* goverNordic_g17.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5380;
}

/*
equation index: 5381
type: SIMPLE_ASSIGN
$START.goverNordic_g17.firstOrder1.y = goverNordic_g17.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5381};
  ((modelica_real *)((data->modelData->realVarsData[184] /* goverNordic_g17.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* goverNordic_g17.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[184] /* goverNordic_g17.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[184].info /* goverNordic_g17.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5381;
}

/*
equation index: 5382
type: SIMPLE_ASSIGN
goverNordic_g17.firstOrder1.y = $START.goverNordic_g17.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[184] /* goverNordic_g17.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5382;
}

/*
equation index: 5383
type: SIMPLE_ASSIGN
$DER.goverNordic_g17.firstOrder1.y = (goverNordic_g17.firstOrder1.k * goverNordic_g17.perUnitP.y - goverNordic_g17.firstOrder1.y) / goverNordic_g17.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* der(goverNordic_g17.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* goverNordic_g17.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2236]] /* goverNordic_g17.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* goverNordic_g17.firstOrder1.T PARAM */),"goverNordic_g17.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5383;
}

/*
equation index: 5384
type: SIMPLE_ASSIGN
goverNordic_g17.const.k = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* goverNordic_g17.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5384;
}

/*
equation index: 5385
type: SIMPLE_ASSIGN
goverNordic_g17.dP.y = goverNordic_g17.const.k - goverNordic_g17.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2224]] /* goverNordic_g17.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* goverNordic_g17.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5385;
}

/*
equation index: 5386
type: SIMPLE_ASSIGN
goverNordic_g17.dOmegaPlusDroop.y = goverNordic_g17.dOmegaPlusDroop.k1 * goverNordic_g17.dOmega.y + goverNordic_g17.dOmegaPlusDroop.k2 * goverNordic_g17.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* goverNordic_g17.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2222]] /* goverNordic_g17.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* goverNordic_g17.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2224]] /* goverNordic_g17.dP.y variable */));
  threadData->lastEquationSolved = 5386;
}

/*
equation index: 5387
type: SIMPLE_ASSIGN
goverNordic_g17.govKi.y = goverNordic_g17.govKi.k * goverNordic_g17.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2227]] /* goverNordic_g17.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* goverNordic_g17.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5387;
}

/*
equation index: 5388
type: SIMPLE_ASSIGN
$DER.goverNordic_g17.govInt.y = goverNordic_g17.govInt.k * goverNordic_g17.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* der(goverNordic_g17.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* goverNordic_g17.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2227]] /* goverNordic_g17.govKi.y variable */));
  threadData->lastEquationSolved = 5388;
}

/*
equation index: 5389
type: SIMPLE_ASSIGN
goverNordic_g17.govKp.y = goverNordic_g17.govKp.k * goverNordic_g17.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* goverNordic_g17.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* goverNordic_g17.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5389;
}

/*
equation index: 5390
type: SIMPLE_ASSIGN
goverNordic_g17.govInt.y_start = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* goverNordic_g17.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5390;
}

/*
equation index: 5391
type: SIMPLE_ASSIGN
$START.goverNordic_g17.govInt.y = goverNordic_g17.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5391};
  ((modelica_real *)((data->modelData->realVarsData[185] /* goverNordic_g17.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* goverNordic_g17.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* goverNordic_g17.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[185] /* goverNordic_g17.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[185].info /* goverNordic_g17.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* goverNordic_g17.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5391;
}

/*
equation index: 5392
type: SIMPLE_ASSIGN
goverNordic_g17.waterFlow.y_start = goverNordic_g17.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2864]] /* goverNordic_g17.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* goverNordic_g17.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5392;
}

/*
equation index: 5393
type: SIMPLE_ASSIGN
$START.goverNordic_g17.waterFlow.y = goverNordic_g17.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5393};
  ((modelica_real *)((data->modelData->realVarsData[187] /* goverNordic_g17.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2864]] /* goverNordic_g17.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[187] /* goverNordic_g17.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[187].info /* goverNordic_g17.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5393;
}

/*
equation index: 5394
type: SIMPLE_ASSIGN
vrNordic_g17.Us0Pu = g17.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5391]] /* vrNordic_g17.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* g17.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5394;
}

/*
equation index: 5395
type: SIMPLE_ASSIGN
$START.vrNordic_g17.UsPu = vrNordic_g17.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5395};
  ((modelica_real *)((data->modelData->realVarsData[3831] /* vrNordic_g17.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5391]] /* vrNordic_g17.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3831] /* vrNordic_g17.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3831].info /* vrNordic_g17.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */));
  threadData->lastEquationSolved = 5395;
}

/*
equation index: 5396
type: SIMPLE_ASSIGN
vrNordic_g17.UsPu = if g17.running.value then if g17.uStatorPu.re == 0.0 and g17.uStatorPu.im == 0.0 then 0.0 else (g17.uStatorPu.re ^ 2.0 + g17.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5396};
  modelica_real tmp1489;
  modelica_real tmp1490;
  modelica_real tmp1491;
  modelica_boolean tmp1492;
  modelica_real tmp1493;
  modelica_boolean tmp1494;
  modelica_real tmp1495;
  tmp1494 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1494)
  {
    tmp1492 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) == 0.0));
    if(tmp1492)
    {
      tmp1493 = 0.0;
    }
    else
    {
      tmp1489 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */);
      tmp1490 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */);
      tmp1491 = (tmp1489 * tmp1489) + (tmp1490 * tmp1490);
      if(tmp1491 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1491, 0.5);
      }
      tmp1493 = sqrt(tmp1491);
    }
    tmp1495 = tmp1493;
  }
  else
  {
    tmp1495 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */) = tmp1495;
  threadData->lastEquationSolved = 5396;
}

/*
equation index: 5397
type: SIMPLE_ASSIGN
vrNordic_g17.Ir0Pu = g17.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5386]] /* vrNordic_g17.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1851]] /* g17.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5397;
}

/*
equation index: 5398
type: SIMPLE_ASSIGN
$START.vrNordic_g17.IrPu = vrNordic_g17.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5398};
  ((modelica_real *)((data->modelData->realVarsData[3830] /* vrNordic_g17.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5386]] /* vrNordic_g17.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3830] /* vrNordic_g17.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3830].info /* vrNordic_g17.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */));
  threadData->lastEquationSolved = 5398;
}

/*
equation index: 5399
type: SIMPLE_ASSIGN
vrNordic_g17.IrPu = if g17.running.value then g17.RfPPu * g17.ifPu / (g17.rTfoPu * g17.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* g17.Kuf PARAM */)),"g17.rTfoPu * g17.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5399;
}

/*
equation index: 5400
type: SIMPLE_ASSIGN
vrNordic_g17.dIf.y = vrNordic_g17.IrPu - vrNordic_g17.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5397]] /* vrNordic_g17.const2.k PARAM */);
  threadData->lastEquationSolved = 5400;
}

/*
equation index: 5401
type: SIMPLE_ASSIGN
vrNordic_g17.overExcitationLimitation.y = if vrNordic_g17.dIf.y < -0.1 then -1.0 else if vrNordic_g17.dIf.y < 0.0 then 0.0 else if vrNordic_g17.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g17.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5401};
  modelica_boolean tmp1496;
  modelica_boolean tmp1497;
  modelica_boolean tmp1498;
  modelica_boolean tmp1499;
  modelica_real tmp1500;
  modelica_boolean tmp1501;
  modelica_real tmp1502;
  tmp1496 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */),-0.1);
  tmp1501 = (modelica_boolean)tmp1496;
  if(tmp1501)
  {
    tmp1502 = -1.0;
  }
  else
  {
    tmp1497 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */),0.0);
    tmp1499 = (modelica_boolean)tmp1497;
    if(tmp1499)
    {
      tmp1500 = 0.0;
    }
    else
    {
      tmp1498 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5451]] /* vrNordic_g17.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1500 = (tmp1498?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */));
    }
    tmp1502 = tmp1500;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */) = tmp1502;
  threadData->lastEquationSolved = 5401;
}

/*
equation index: 5402
type: SIMPLE_ASSIGN
vrNordic_g17.gain1.y = vrNordic_g17.gain1.k * vrNordic_g17.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3839]] /* vrNordic_g17.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5403]] /* vrNordic_g17.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */));
  threadData->lastEquationSolved = 5402;
}

/*
equation index: 5403
type: SIMPLE_ASSIGN
vrNordic_g17.Efd0Pu = g17.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5384]] /* vrNordic_g17.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1849]] /* g17.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5403;
}

/*
equation index: 5404
type: SIMPLE_ASSIGN
$START.vrNordic_g17.limIntegrator.y = vrNordic_g17.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5404};
  ((modelica_real *)((data->modelData->realVarsData[300] /* vrNordic_g17.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5384]] /* vrNordic_g17.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[300] /* vrNordic_g17.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[300].info /* vrNordic_g17.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5404;
}

/*
equation index: 5405
type: SIMPLE_ASSIGN
vrNordic_g17.UsRef0Pu = vrNordic_g17.Efd0Pu / vrNordic_g17.KTgr + vrNordic_g17.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5392]] /* vrNordic_g17.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5384]] /* vrNordic_g17.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5389]] /* vrNordic_g17.KTgr PARAM */),"vrNordic_g17.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5391]] /* vrNordic_g17.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5405;
}

/*
equation index: 5406
type: SIMPLE_ASSIGN
vrNordic_g17.const1.k = vrNordic_g17.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5396]] /* vrNordic_g17.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5392]] /* vrNordic_g17.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5406;
}

/*
equation index: 5407
type: SIMPLE_ASSIGN
vrNordic_g17.dU.y = vrNordic_g17.const1.k - vrNordic_g17.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3835]] /* vrNordic_g17.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5396]] /* vrNordic_g17.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */);
  threadData->lastEquationSolved = 5407;
}

/*
equation index: 5408
type: SIMPLE_ASSIGN
vrNordic_g17.add.y = vrNordic_g17.add.k1 * vrNordic_g17.dU.y + vrNordic_g17.add.k2 * vrNordic_g17.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5393]] /* vrNordic_g17.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3835]] /* vrNordic_g17.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5394]] /* vrNordic_g17.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* vrNordic_g17.limiter.y variable */));
  threadData->lastEquationSolved = 5408;
}

/*
equation index: 5409
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.u_start = vrNordic_g17.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5416]] /* vrNordic_g17.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5384]] /* vrNordic_g17.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5409;
}

/*
equation index: 5410
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.Y0 = if vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag.u_start * vrNordic_g17.leadLag.b[2] / vrNordic_g17.leadLag.a_end else if vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5407]] /* vrNordic_g17.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5416]] /* vrNordic_g17.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5412]] /* vrNordic_g17.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */),"vrNordic_g17.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5418]] /* vrNordic_g17.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5410;
}

/*
equation index: 5411
type: SIMPLE_ASSIGN
$START.vrNordic_g17.leadLag.y = vrNordic_g17.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5411};
  ((modelica_real *)((data->modelData->realVarsData[3842] /* vrNordic_g17.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5407]] /* vrNordic_g17.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3842] /* vrNordic_g17.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3842].info /* vrNordic_g17.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */));
  threadData->lastEquationSolved = 5411;
}

/*
equation index: 5412
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.X0[1] = if vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag.u_start / vrNordic_g17.leadLag.a_end else if vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5406]] /* vrNordic_g17.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5416]] /* vrNordic_g17.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */),"vrNordic_g17.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[688]] /* vrNordic_g17.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5417]] /* vrNordic_g17.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5412;
}

/*
equation index: 5413
type: SIMPLE_ASSIGN
$START.vrNordic_g17.leadLag.x_scaled[1] = vrNordic_g17.leadLag.X0[1] * vrNordic_g17.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5413};
  ((modelica_real *)((data->modelData->realVarsData[297] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5406]] /* vrNordic_g17.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[297] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[297].info /* vrNordic_g17.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5413;
}

/*
equation index: 5414
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.x_scaled[1] = $START.vrNordic_g17.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[297] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5414;
}

/*
equation index: 5415
type: SIMPLE_ASSIGN
$START.vrNordic_g17.leadLag.x[1] = vrNordic_g17.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5415};
  ((modelica_real *)((data->modelData->realVarsData[3841] /* vrNordic_g17.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5406]] /* vrNordic_g17.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3841] /* vrNordic_g17.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3841].info /* vrNordic_g17.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5415;
}

/*
equation index: 5416
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.x[1] = vrNordic_g17.leadLag.x_scaled[1] / vrNordic_g17.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */),"vrNordic_g17.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5416;
}

/*
equation index: 5417
type: SIMPLE_ASSIGN
vrNordic_g17.limIntegrator.y_start = vrNordic_g17.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5448]] /* vrNordic_g17.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5384]] /* vrNordic_g17.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5417;
}

/*
equation index: 5418
type: SIMPLE_ASSIGN
goverNordic_g16.Pm0Pu = g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5418;
}

/*
equation index: 5419
type: SIMPLE_ASSIGN
$START.goverNordic_g16.PGenPu = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5419};
  ((modelica_real *)((data->modelData->realVarsData[2202] /* goverNordic_g16.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2202] /* goverNordic_g16.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2202].info /* goverNordic_g16.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */));
  threadData->lastEquationSolved = 5419;
}

/*
equation index: 5420
type: SIMPLE_ASSIGN
goverNordic_g16.PGenPu = if g16.running.value then (-g16.terminal.V.re) * g16.terminal.i.re - g16.terminal.V.im * g16.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5420;
}

/*
equation index: 5421
type: SIMPLE_ASSIGN
goverNordic_g16.perUnitP.y = goverNordic_g16.perUnitP.k * goverNordic_g16.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2218]] /* goverNordic_g16.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* goverNordic_g16.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */));
  threadData->lastEquationSolved = 5421;
}

/*
equation index: 5422
type: SIMPLE_ASSIGN
g16.PGen = if g16.running.value then 100.0 * goverNordic_g16.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* g16.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5422;
}

/*
equation index: 5423
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.Y0 = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* goverNordic_g16.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5423;
}

/*
equation index: 5424
type: SIMPLE_ASSIGN
$START.goverNordic_g16.limRateLimFirstOrder.limIntegrator.y = goverNordic_g16.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5424};
  ((modelica_real *)((data->modelData->realVarsData[182] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* goverNordic_g16.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[182] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[182].info /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5424;
}

/*
equation index: 5425
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g16.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* goverNordic_g16.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5425;
}

/*
equation index: 5426
type: SIMPLE_ASSIGN
goverNordic_g16.firstOrder1.y_start = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* goverNordic_g16.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5426;
}

/*
equation index: 5427
type: SIMPLE_ASSIGN
$START.goverNordic_g16.firstOrder1.y = goverNordic_g16.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5427};
  ((modelica_real *)((data->modelData->realVarsData[180] /* goverNordic_g16.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* goverNordic_g16.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[180] /* goverNordic_g16.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[180].info /* goverNordic_g16.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5427;
}

/*
equation index: 5428
type: SIMPLE_ASSIGN
goverNordic_g16.firstOrder1.y = $START.goverNordic_g16.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[180] /* goverNordic_g16.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5428;
}

/*
equation index: 5429
type: SIMPLE_ASSIGN
$DER.goverNordic_g16.firstOrder1.y = (goverNordic_g16.firstOrder1.k * goverNordic_g16.perUnitP.y - goverNordic_g16.firstOrder1.y) / goverNordic_g16.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* der(goverNordic_g16.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* goverNordic_g16.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2218]] /* goverNordic_g16.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* goverNordic_g16.firstOrder1.T PARAM */),"goverNordic_g16.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5429;
}

/*
equation index: 5430
type: SIMPLE_ASSIGN
goverNordic_g16.const.k = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* goverNordic_g16.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5430;
}

/*
equation index: 5431
type: SIMPLE_ASSIGN
goverNordic_g16.dP.y = goverNordic_g16.const.k - goverNordic_g16.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2206]] /* goverNordic_g16.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* goverNordic_g16.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5431;
}

/*
equation index: 5432
type: SIMPLE_ASSIGN
goverNordic_g16.dOmegaPlusDroop.y = goverNordic_g16.dOmegaPlusDroop.k1 * goverNordic_g16.dOmega.y + goverNordic_g16.dOmegaPlusDroop.k2 * goverNordic_g16.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2801]] /* goverNordic_g16.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2204]] /* goverNordic_g16.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* goverNordic_g16.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2206]] /* goverNordic_g16.dP.y variable */));
  threadData->lastEquationSolved = 5432;
}

/*
equation index: 5433
type: SIMPLE_ASSIGN
goverNordic_g16.govKi.y = goverNordic_g16.govKi.k * goverNordic_g16.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2209]] /* goverNordic_g16.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* goverNordic_g16.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5433;
}

/*
equation index: 5434
type: SIMPLE_ASSIGN
$DER.goverNordic_g16.govInt.y = goverNordic_g16.govInt.k * goverNordic_g16.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* der(goverNordic_g16.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* goverNordic_g16.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2209]] /* goverNordic_g16.govKi.y variable */));
  threadData->lastEquationSolved = 5434;
}

/*
equation index: 5435
type: SIMPLE_ASSIGN
goverNordic_g16.govKp.y = goverNordic_g16.govKp.k * goverNordic_g16.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2210]] /* goverNordic_g16.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* goverNordic_g16.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5435;
}

/*
equation index: 5436
type: SIMPLE_ASSIGN
goverNordic_g16.govInt.y_start = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* goverNordic_g16.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5436;
}

/*
equation index: 5437
type: SIMPLE_ASSIGN
$START.goverNordic_g16.govInt.y = goverNordic_g16.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5437};
  ((modelica_real *)((data->modelData->realVarsData[181] /* goverNordic_g16.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* goverNordic_g16.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* goverNordic_g16.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[181] /* goverNordic_g16.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[181].info /* goverNordic_g16.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* goverNordic_g16.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5437;
}

/*
equation index: 5438
type: SIMPLE_ASSIGN
goverNordic_g16.waterFlow.y_start = goverNordic_g16.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* goverNordic_g16.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* goverNordic_g16.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5438;
}

/*
equation index: 5439
type: SIMPLE_ASSIGN
$START.goverNordic_g16.waterFlow.y = goverNordic_g16.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5439};
  ((modelica_real *)((data->modelData->realVarsData[183] /* goverNordic_g16.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* goverNordic_g16.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[183] /* goverNordic_g16.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[183].info /* goverNordic_g16.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5439;
}

/*
equation index: 5440
type: SIMPLE_ASSIGN
vrNordic_g16.Us0Pu = g16.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5312]] /* vrNordic_g16.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1809]] /* g16.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5440;
}

/*
equation index: 5441
type: SIMPLE_ASSIGN
$START.vrNordic_g16.UsPu = vrNordic_g16.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5441};
  ((modelica_real *)((data->modelData->realVarsData[3807] /* vrNordic_g16.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5312]] /* vrNordic_g16.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3807] /* vrNordic_g16.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3807].info /* vrNordic_g16.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */));
  threadData->lastEquationSolved = 5441;
}

/*
equation index: 5442
type: SIMPLE_ASSIGN
vrNordic_g16.UsPu = if g16.running.value then if g16.uStatorPu.re == 0.0 and g16.uStatorPu.im == 0.0 then 0.0 else (g16.uStatorPu.re ^ 2.0 + g16.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5442};
  modelica_real tmp1503;
  modelica_real tmp1504;
  modelica_real tmp1505;
  modelica_boolean tmp1506;
  modelica_real tmp1507;
  modelica_boolean tmp1508;
  modelica_real tmp1509;
  tmp1508 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1508)
  {
    tmp1506 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) == 0.0));
    if(tmp1506)
    {
      tmp1507 = 0.0;
    }
    else
    {
      tmp1503 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */);
      tmp1504 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */);
      tmp1505 = (tmp1503 * tmp1503) + (tmp1504 * tmp1504);
      if(tmp1505 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1505, 0.5);
      }
      tmp1507 = sqrt(tmp1505);
    }
    tmp1509 = tmp1507;
  }
  else
  {
    tmp1509 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */) = tmp1509;
  threadData->lastEquationSolved = 5442;
}

/*
equation index: 5443
type: SIMPLE_ASSIGN
vrNordic_g16.Ir0Pu = g16.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5307]] /* vrNordic_g16.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* g16.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5443;
}

/*
equation index: 5444
type: SIMPLE_ASSIGN
$START.vrNordic_g16.IrPu = vrNordic_g16.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5444};
  ((modelica_real *)((data->modelData->realVarsData[3806] /* vrNordic_g16.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5307]] /* vrNordic_g16.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3806] /* vrNordic_g16.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3806].info /* vrNordic_g16.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */));
  threadData->lastEquationSolved = 5444;
}

/*
equation index: 5445
type: SIMPLE_ASSIGN
vrNordic_g16.IrPu = if g16.running.value then g16.RfPPu * g16.ifPu / (g16.rTfoPu * g16.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* g16.Kuf PARAM */)),"g16.rTfoPu * g16.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5445;
}

/*
equation index: 5446
type: SIMPLE_ASSIGN
vrNordic_g16.dIf.y = vrNordic_g16.IrPu - vrNordic_g16.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5318]] /* vrNordic_g16.const2.k PARAM */);
  threadData->lastEquationSolved = 5446;
}

/*
equation index: 5447
type: SIMPLE_ASSIGN
vrNordic_g16.overExcitationLimitation.y = if vrNordic_g16.dIf.y < -0.1 then -1.0 else if vrNordic_g16.dIf.y < 0.0 then 0.0 else if vrNordic_g16.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g16.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5447};
  modelica_boolean tmp1510;
  modelica_boolean tmp1511;
  modelica_boolean tmp1512;
  modelica_boolean tmp1513;
  modelica_real tmp1514;
  modelica_boolean tmp1515;
  modelica_real tmp1516;
  tmp1510 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */),-0.1);
  tmp1515 = (modelica_boolean)tmp1510;
  if(tmp1515)
  {
    tmp1516 = -1.0;
  }
  else
  {
    tmp1511 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */),0.0);
    tmp1513 = (modelica_boolean)tmp1511;
    if(tmp1513)
    {
      tmp1514 = 0.0;
    }
    else
    {
      tmp1512 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5372]] /* vrNordic_g16.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1514 = (tmp1512?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */));
    }
    tmp1516 = tmp1514;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */) = tmp1516;
  threadData->lastEquationSolved = 5447;
}

/*
equation index: 5448
type: SIMPLE_ASSIGN
vrNordic_g16.gain1.y = vrNordic_g16.gain1.k * vrNordic_g16.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3815]] /* vrNordic_g16.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5324]] /* vrNordic_g16.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */));
  threadData->lastEquationSolved = 5448;
}

/*
equation index: 5449
type: SIMPLE_ASSIGN
vrNordic_g16.Efd0Pu = g16.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5305]] /* vrNordic_g16.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* g16.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5449;
}

/*
equation index: 5450
type: SIMPLE_ASSIGN
$START.vrNordic_g16.limIntegrator.y = vrNordic_g16.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5450};
  ((modelica_real *)((data->modelData->realVarsData[294] /* vrNordic_g16.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5305]] /* vrNordic_g16.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[294] /* vrNordic_g16.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[294].info /* vrNordic_g16.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5450;
}

/*
equation index: 5451
type: SIMPLE_ASSIGN
vrNordic_g16.UsRef0Pu = vrNordic_g16.Efd0Pu / vrNordic_g16.KTgr + vrNordic_g16.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5313]] /* vrNordic_g16.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5305]] /* vrNordic_g16.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5310]] /* vrNordic_g16.KTgr PARAM */),"vrNordic_g16.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5312]] /* vrNordic_g16.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5451;
}

/*
equation index: 5452
type: SIMPLE_ASSIGN
vrNordic_g16.const1.k = vrNordic_g16.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5317]] /* vrNordic_g16.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5313]] /* vrNordic_g16.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5452;
}

/*
equation index: 5453
type: SIMPLE_ASSIGN
vrNordic_g16.dU.y = vrNordic_g16.const1.k - vrNordic_g16.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3811]] /* vrNordic_g16.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5317]] /* vrNordic_g16.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */);
  threadData->lastEquationSolved = 5453;
}

/*
equation index: 5454
type: SIMPLE_ASSIGN
vrNordic_g16.add.y = vrNordic_g16.add.k1 * vrNordic_g16.dU.y + vrNordic_g16.add.k2 * vrNordic_g16.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5314]] /* vrNordic_g16.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3811]] /* vrNordic_g16.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5315]] /* vrNordic_g16.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3825]] /* vrNordic_g16.limiter.y variable */));
  threadData->lastEquationSolved = 5454;
}

/*
equation index: 5455
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.u_start = vrNordic_g16.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5337]] /* vrNordic_g16.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5305]] /* vrNordic_g16.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5455;
}

/*
equation index: 5456
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.Y0 = if vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag.u_start * vrNordic_g16.leadLag.b[2] / vrNordic_g16.leadLag.a_end else if vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5328]] /* vrNordic_g16.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5337]] /* vrNordic_g16.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5333]] /* vrNordic_g16.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */),"vrNordic_g16.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5339]] /* vrNordic_g16.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5456;
}

/*
equation index: 5457
type: SIMPLE_ASSIGN
$START.vrNordic_g16.leadLag.y = vrNordic_g16.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5457};
  ((modelica_real *)((data->modelData->realVarsData[3818] /* vrNordic_g16.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5328]] /* vrNordic_g16.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3818] /* vrNordic_g16.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3818].info /* vrNordic_g16.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */));
  threadData->lastEquationSolved = 5457;
}

/*
equation index: 5458
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.X0[1] = if vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag.u_start / vrNordic_g16.leadLag.a_end else if vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5327]] /* vrNordic_g16.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5337]] /* vrNordic_g16.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */),"vrNordic_g16.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[672]] /* vrNordic_g16.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5338]] /* vrNordic_g16.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5458;
}

/*
equation index: 5459
type: SIMPLE_ASSIGN
$START.vrNordic_g16.leadLag.x_scaled[1] = vrNordic_g16.leadLag.X0[1] * vrNordic_g16.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5459};
  ((modelica_real *)((data->modelData->realVarsData[291] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5327]] /* vrNordic_g16.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[291] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[291].info /* vrNordic_g16.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5459;
}

/*
equation index: 5460
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.x_scaled[1] = $START.vrNordic_g16.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[291] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5460;
}

/*
equation index: 5461
type: SIMPLE_ASSIGN
$START.vrNordic_g16.leadLag.x[1] = vrNordic_g16.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5461};
  ((modelica_real *)((data->modelData->realVarsData[3817] /* vrNordic_g16.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5327]] /* vrNordic_g16.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3817] /* vrNordic_g16.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3817].info /* vrNordic_g16.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5461;
}

/*
equation index: 5462
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.x[1] = vrNordic_g16.leadLag.x_scaled[1] / vrNordic_g16.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */),"vrNordic_g16.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5462;
}

/*
equation index: 5463
type: SIMPLE_ASSIGN
vrNordic_g16.limIntegrator.y_start = vrNordic_g16.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5369]] /* vrNordic_g16.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5305]] /* vrNordic_g16.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5463;
}

/*
equation index: 5464
type: SIMPLE_ASSIGN
goverNordic_g15.Pm0Pu = g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5464;
}

/*
equation index: 5465
type: SIMPLE_ASSIGN
$START.goverNordic_g15.PGenPu = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5465};
  ((modelica_real *)((data->modelData->realVarsData[2184] /* goverNordic_g15.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2184] /* goverNordic_g15.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2184].info /* goverNordic_g15.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */));
  threadData->lastEquationSolved = 5465;
}

/*
equation index: 5466
type: SIMPLE_ASSIGN
goverNordic_g15.PGenPu = if g15.running.value then (-g15.terminal.V.re) * g15.terminal.i.re - g15.terminal.V.im * g15.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5466;
}

/*
equation index: 5467
type: SIMPLE_ASSIGN
goverNordic_g15.perUnitP.y = goverNordic_g15.perUnitP.k * goverNordic_g15.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2200]] /* goverNordic_g15.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* goverNordic_g15.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */));
  threadData->lastEquationSolved = 5467;
}

/*
equation index: 5468
type: SIMPLE_ASSIGN
g15.PGen = if g15.running.value then 100.0 * goverNordic_g15.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1661]] /* g15.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5468;
}

/*
equation index: 5469
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.Y0 = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* goverNordic_g15.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5469;
}

/*
equation index: 5470
type: SIMPLE_ASSIGN
$START.goverNordic_g15.limRateLimFirstOrder.limIntegrator.y = goverNordic_g15.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5470};
  ((modelica_real *)((data->modelData->realVarsData[178] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* goverNordic_g15.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[178] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[178].info /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5470;
}

/*
equation index: 5471
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g15.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* goverNordic_g15.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5471;
}

/*
equation index: 5472
type: SIMPLE_ASSIGN
goverNordic_g15.firstOrder1.y_start = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* goverNordic_g15.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5472;
}

/*
equation index: 5473
type: SIMPLE_ASSIGN
$START.goverNordic_g15.firstOrder1.y = goverNordic_g15.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5473};
  ((modelica_real *)((data->modelData->realVarsData[176] /* goverNordic_g15.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* goverNordic_g15.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[176] /* goverNordic_g15.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[176].info /* goverNordic_g15.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5473;
}

/*
equation index: 5474
type: SIMPLE_ASSIGN
goverNordic_g15.firstOrder1.y = $START.goverNordic_g15.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[176] /* goverNordic_g15.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5474;
}

/*
equation index: 5475
type: SIMPLE_ASSIGN
$DER.goverNordic_g15.firstOrder1.y = (goverNordic_g15.firstOrder1.k * goverNordic_g15.perUnitP.y - goverNordic_g15.firstOrder1.y) / goverNordic_g15.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* der(goverNordic_g15.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* goverNordic_g15.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2200]] /* goverNordic_g15.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* goverNordic_g15.firstOrder1.T PARAM */),"goverNordic_g15.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5475;
}

/*
equation index: 5476
type: SIMPLE_ASSIGN
goverNordic_g15.const.k = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2762]] /* goverNordic_g15.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5476;
}

/*
equation index: 5477
type: SIMPLE_ASSIGN
goverNordic_g15.dP.y = goverNordic_g15.const.k - goverNordic_g15.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2188]] /* goverNordic_g15.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2762]] /* goverNordic_g15.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5477;
}

/*
equation index: 5478
type: SIMPLE_ASSIGN
goverNordic_g15.dOmegaPlusDroop.y = goverNordic_g15.dOmegaPlusDroop.k1 * goverNordic_g15.dOmega.y + goverNordic_g15.dOmegaPlusDroop.k2 * goverNordic_g15.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* goverNordic_g15.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* goverNordic_g15.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* goverNordic_g15.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2188]] /* goverNordic_g15.dP.y variable */));
  threadData->lastEquationSolved = 5478;
}

/*
equation index: 5479
type: SIMPLE_ASSIGN
goverNordic_g15.govKi.y = goverNordic_g15.govKi.k * goverNordic_g15.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2191]] /* goverNordic_g15.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* goverNordic_g15.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5479;
}

/*
equation index: 5480
type: SIMPLE_ASSIGN
$DER.goverNordic_g15.govInt.y = goverNordic_g15.govInt.k * goverNordic_g15.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* der(goverNordic_g15.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2770]] /* goverNordic_g15.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2191]] /* goverNordic_g15.govKi.y variable */));
  threadData->lastEquationSolved = 5480;
}

/*
equation index: 5481
type: SIMPLE_ASSIGN
goverNordic_g15.govKp.y = goverNordic_g15.govKp.k * goverNordic_g15.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2192]] /* goverNordic_g15.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* goverNordic_g15.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5481;
}

/*
equation index: 5482
type: SIMPLE_ASSIGN
goverNordic_g15.govInt.y_start = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2771]] /* goverNordic_g15.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5482;
}

/*
equation index: 5483
type: SIMPLE_ASSIGN
$START.goverNordic_g15.govInt.y = goverNordic_g15.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5483};
  ((modelica_real *)((data->modelData->realVarsData[177] /* goverNordic_g15.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2771]] /* goverNordic_g15.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* goverNordic_g15.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[177] /* goverNordic_g15.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[177].info /* goverNordic_g15.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* goverNordic_g15.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5483;
}

/*
equation index: 5484
type: SIMPLE_ASSIGN
goverNordic_g15.waterFlow.y_start = goverNordic_g15.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* goverNordic_g15.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* goverNordic_g15.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5484;
}

/*
equation index: 5485
type: SIMPLE_ASSIGN
$START.goverNordic_g15.waterFlow.y = goverNordic_g15.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5485};
  ((modelica_real *)((data->modelData->realVarsData[179] /* goverNordic_g15.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* goverNordic_g15.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[179] /* goverNordic_g15.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[179].info /* goverNordic_g15.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5485;
}

/*
equation index: 5486
type: SIMPLE_ASSIGN
vrNordic_g15.Us0Pu = g15.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5233]] /* vrNordic_g15.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1706]] /* g15.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5486;
}

/*
equation index: 5487
type: SIMPLE_ASSIGN
$START.vrNordic_g15.UsPu = vrNordic_g15.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5487};
  ((modelica_real *)((data->modelData->realVarsData[3783] /* vrNordic_g15.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5233]] /* vrNordic_g15.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3783] /* vrNordic_g15.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3783].info /* vrNordic_g15.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */));
  threadData->lastEquationSolved = 5487;
}

/*
equation index: 5488
type: SIMPLE_ASSIGN
vrNordic_g15.UsPu = if g15.running.value then if g15.uStatorPu.re == 0.0 and g15.uStatorPu.im == 0.0 then 0.0 else (g15.uStatorPu.re ^ 2.0 + g15.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5488};
  modelica_real tmp1517;
  modelica_real tmp1518;
  modelica_real tmp1519;
  modelica_boolean tmp1520;
  modelica_real tmp1521;
  modelica_boolean tmp1522;
  modelica_real tmp1523;
  tmp1522 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1522)
  {
    tmp1520 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) == 0.0));
    if(tmp1520)
    {
      tmp1521 = 0.0;
    }
    else
    {
      tmp1517 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */);
      tmp1518 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */);
      tmp1519 = (tmp1517 * tmp1517) + (tmp1518 * tmp1518);
      if(tmp1519 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1519, 0.5);
      }
      tmp1521 = sqrt(tmp1519);
    }
    tmp1523 = tmp1521;
  }
  else
  {
    tmp1523 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */) = tmp1523;
  threadData->lastEquationSolved = 5488;
}

/*
equation index: 5489
type: SIMPLE_ASSIGN
vrNordic_g15.Ir0Pu = g15.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5228]] /* vrNordic_g15.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1645]] /* g15.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5489;
}

/*
equation index: 5490
type: SIMPLE_ASSIGN
$START.vrNordic_g15.IrPu = vrNordic_g15.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5490};
  ((modelica_real *)((data->modelData->realVarsData[3782] /* vrNordic_g15.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5228]] /* vrNordic_g15.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3782] /* vrNordic_g15.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3782].info /* vrNordic_g15.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */));
  threadData->lastEquationSolved = 5490;
}

/*
equation index: 5491
type: SIMPLE_ASSIGN
vrNordic_g15.IrPu = if g15.running.value then g15.RfPPu * g15.ifPu / (g15.rTfoPu * g15.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1650]] /* g15.Kuf PARAM */)),"g15.rTfoPu * g15.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5491;
}

/*
equation index: 5492
type: SIMPLE_ASSIGN
vrNordic_g15.dIf.y = vrNordic_g15.IrPu - vrNordic_g15.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5239]] /* vrNordic_g15.const2.k PARAM */);
  threadData->lastEquationSolved = 5492;
}

/*
equation index: 5493
type: SIMPLE_ASSIGN
vrNordic_g15.overExcitationLimitation.y = if vrNordic_g15.dIf.y < -0.1 then -1.0 else if vrNordic_g15.dIf.y < 0.0 then 0.0 else if vrNordic_g15.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g15.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5493};
  modelica_boolean tmp1524;
  modelica_boolean tmp1525;
  modelica_boolean tmp1526;
  modelica_boolean tmp1527;
  modelica_real tmp1528;
  modelica_boolean tmp1529;
  modelica_real tmp1530;
  tmp1524 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */),-0.1);
  tmp1529 = (modelica_boolean)tmp1524;
  if(tmp1529)
  {
    tmp1530 = -1.0;
  }
  else
  {
    tmp1525 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */),0.0);
    tmp1527 = (modelica_boolean)tmp1525;
    if(tmp1527)
    {
      tmp1528 = 0.0;
    }
    else
    {
      tmp1526 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5293]] /* vrNordic_g15.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1528 = (tmp1526?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */));
    }
    tmp1530 = tmp1528;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */) = tmp1530;
  threadData->lastEquationSolved = 5493;
}

/*
equation index: 5494
type: SIMPLE_ASSIGN
vrNordic_g15.gain1.y = vrNordic_g15.gain1.k * vrNordic_g15.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3791]] /* vrNordic_g15.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5245]] /* vrNordic_g15.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */));
  threadData->lastEquationSolved = 5494;
}

/*
equation index: 5495
type: SIMPLE_ASSIGN
vrNordic_g15.Efd0Pu = g15.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5226]] /* vrNordic_g15.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1643]] /* g15.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5495;
}

/*
equation index: 5496
type: SIMPLE_ASSIGN
$START.vrNordic_g15.limIntegrator.y = vrNordic_g15.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5496};
  ((modelica_real *)((data->modelData->realVarsData[288] /* vrNordic_g15.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5226]] /* vrNordic_g15.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[288] /* vrNordic_g15.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[288].info /* vrNordic_g15.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5496;
}

/*
equation index: 5497
type: SIMPLE_ASSIGN
vrNordic_g15.UsRef0Pu = vrNordic_g15.Efd0Pu / vrNordic_g15.KTgr + vrNordic_g15.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5234]] /* vrNordic_g15.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5226]] /* vrNordic_g15.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5231]] /* vrNordic_g15.KTgr PARAM */),"vrNordic_g15.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5233]] /* vrNordic_g15.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5497;
}

/*
equation index: 5498
type: SIMPLE_ASSIGN
vrNordic_g15.const1.k = vrNordic_g15.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5238]] /* vrNordic_g15.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5234]] /* vrNordic_g15.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5498;
}

/*
equation index: 5499
type: SIMPLE_ASSIGN
vrNordic_g15.dU.y = vrNordic_g15.const1.k - vrNordic_g15.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3787]] /* vrNordic_g15.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5238]] /* vrNordic_g15.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */);
  threadData->lastEquationSolved = 5499;
}

/*
equation index: 5500
type: SIMPLE_ASSIGN
vrNordic_g15.add.y = vrNordic_g15.add.k1 * vrNordic_g15.dU.y + vrNordic_g15.add.k2 * vrNordic_g15.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5235]] /* vrNordic_g15.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3787]] /* vrNordic_g15.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5236]] /* vrNordic_g15.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3801]] /* vrNordic_g15.limiter.y variable */));
  threadData->lastEquationSolved = 5500;
}

/*
equation index: 5501
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.u_start = vrNordic_g15.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5258]] /* vrNordic_g15.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5226]] /* vrNordic_g15.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5501;
}

/*
equation index: 5502
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.Y0 = if vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag.u_start * vrNordic_g15.leadLag.b[2] / vrNordic_g15.leadLag.a_end else if vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5249]] /* vrNordic_g15.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5258]] /* vrNordic_g15.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5254]] /* vrNordic_g15.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */),"vrNordic_g15.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5260]] /* vrNordic_g15.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5502;
}

/*
equation index: 5503
type: SIMPLE_ASSIGN
$START.vrNordic_g15.leadLag.y = vrNordic_g15.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5503};
  ((modelica_real *)((data->modelData->realVarsData[3794] /* vrNordic_g15.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5249]] /* vrNordic_g15.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3794] /* vrNordic_g15.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3794].info /* vrNordic_g15.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */));
  threadData->lastEquationSolved = 5503;
}

/*
equation index: 5504
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.X0[1] = if vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag.u_start / vrNordic_g15.leadLag.a_end else if vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5248]] /* vrNordic_g15.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5258]] /* vrNordic_g15.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */),"vrNordic_g15.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[656]] /* vrNordic_g15.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5259]] /* vrNordic_g15.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5504;
}

/*
equation index: 5505
type: SIMPLE_ASSIGN
$START.vrNordic_g15.leadLag.x_scaled[1] = vrNordic_g15.leadLag.X0[1] * vrNordic_g15.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5505};
  ((modelica_real *)((data->modelData->realVarsData[285] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5248]] /* vrNordic_g15.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[285] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[285].info /* vrNordic_g15.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5505;
}

/*
equation index: 5506
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.x_scaled[1] = $START.vrNordic_g15.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[285] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5506;
}

/*
equation index: 5507
type: SIMPLE_ASSIGN
$START.vrNordic_g15.leadLag.x[1] = vrNordic_g15.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5507};
  ((modelica_real *)((data->modelData->realVarsData[3793] /* vrNordic_g15.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5248]] /* vrNordic_g15.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3793] /* vrNordic_g15.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3793].info /* vrNordic_g15.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5507;
}

/*
equation index: 5508
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.x[1] = vrNordic_g15.leadLag.x_scaled[1] / vrNordic_g15.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */),"vrNordic_g15.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5508;
}

/*
equation index: 5509
type: SIMPLE_ASSIGN
vrNordic_g15.limIntegrator.y_start = vrNordic_g15.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5290]] /* vrNordic_g15.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5226]] /* vrNordic_g15.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5509;
}

/*
equation index: 5510
type: SIMPLE_ASSIGN
goverNordic_g14.Pm0Pu = g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1578]] /* g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5510;
}

/*
equation index: 5511
type: SIMPLE_ASSIGN
$START.goverNordic_g14.PGenPu = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5511};
  ((modelica_real *)((data->modelData->realVarsData[2166] /* goverNordic_g14.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2166] /* goverNordic_g14.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2166].info /* goverNordic_g14.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */));
  threadData->lastEquationSolved = 5511;
}

/*
equation index: 5512
type: SIMPLE_ASSIGN
goverNordic_g14.PGenPu = if g14.running.value then (-g14.terminal.V.re) * g14.terminal.i.re - g14.terminal.V.im * g14.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5512;
}

/*
equation index: 5513
type: SIMPLE_ASSIGN
goverNordic_g14.perUnitP.y = goverNordic_g14.perUnitP.k * goverNordic_g14.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2182]] /* goverNordic_g14.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* goverNordic_g14.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */));
  threadData->lastEquationSolved = 5513;
}

/*
equation index: 5514
type: SIMPLE_ASSIGN
g14.PGen = if g14.running.value then 100.0 * goverNordic_g14.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1615]] /* g14.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5514;
}

/*
equation index: 5515
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.Y0 = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* goverNordic_g14.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5515;
}

/*
equation index: 5516
type: SIMPLE_ASSIGN
$START.goverNordic_g14.limRateLimFirstOrder.limIntegrator.y = goverNordic_g14.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5516};
  ((modelica_real *)((data->modelData->realVarsData[174] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* goverNordic_g14.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[174] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[174].info /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5516;
}

/*
equation index: 5517
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g14.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* goverNordic_g14.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5517;
}

/*
equation index: 5518
type: SIMPLE_ASSIGN
goverNordic_g14.firstOrder1.y_start = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2733]] /* goverNordic_g14.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5518;
}

/*
equation index: 5519
type: SIMPLE_ASSIGN
$START.goverNordic_g14.firstOrder1.y = goverNordic_g14.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5519};
  ((modelica_real *)((data->modelData->realVarsData[172] /* goverNordic_g14.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2733]] /* goverNordic_g14.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[172] /* goverNordic_g14.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[172].info /* goverNordic_g14.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5519;
}

/*
equation index: 5520
type: SIMPLE_ASSIGN
goverNordic_g14.firstOrder1.y = $START.goverNordic_g14.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[172] /* goverNordic_g14.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5520;
}

/*
equation index: 5521
type: SIMPLE_ASSIGN
$DER.goverNordic_g14.firstOrder1.y = (goverNordic_g14.firstOrder1.k * goverNordic_g14.perUnitP.y - goverNordic_g14.firstOrder1.y) / goverNordic_g14.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* der(goverNordic_g14.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2732]] /* goverNordic_g14.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2182]] /* goverNordic_g14.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* goverNordic_g14.firstOrder1.T PARAM */),"goverNordic_g14.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5521;
}

/*
equation index: 5522
type: SIMPLE_ASSIGN
goverNordic_g14.const.k = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2726]] /* goverNordic_g14.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5522;
}

/*
equation index: 5523
type: SIMPLE_ASSIGN
goverNordic_g14.dP.y = goverNordic_g14.const.k - goverNordic_g14.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2170]] /* goverNordic_g14.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2726]] /* goverNordic_g14.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5523;
}

/*
equation index: 5524
type: SIMPLE_ASSIGN
goverNordic_g14.dOmegaPlusDroop.y = goverNordic_g14.dOmegaPlusDroop.k1 * goverNordic_g14.dOmega.y + goverNordic_g14.dOmegaPlusDroop.k2 * goverNordic_g14.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* goverNordic_g14.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2168]] /* goverNordic_g14.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* goverNordic_g14.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2170]] /* goverNordic_g14.dP.y variable */));
  threadData->lastEquationSolved = 5524;
}

/*
equation index: 5525
type: SIMPLE_ASSIGN
goverNordic_g14.govKi.y = goverNordic_g14.govKi.k * goverNordic_g14.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2173]] /* goverNordic_g14.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* goverNordic_g14.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5525;
}

/*
equation index: 5526
type: SIMPLE_ASSIGN
$DER.goverNordic_g14.govInt.y = goverNordic_g14.govInt.k * goverNordic_g14.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* der(goverNordic_g14.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* goverNordic_g14.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2173]] /* goverNordic_g14.govKi.y variable */));
  threadData->lastEquationSolved = 5526;
}

/*
equation index: 5527
type: SIMPLE_ASSIGN
goverNordic_g14.govKp.y = goverNordic_g14.govKp.k * goverNordic_g14.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2174]] /* goverNordic_g14.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* goverNordic_g14.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5527;
}

/*
equation index: 5528
type: SIMPLE_ASSIGN
goverNordic_g14.govInt.y_start = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2735]] /* goverNordic_g14.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5528;
}

/*
equation index: 5529
type: SIMPLE_ASSIGN
$START.goverNordic_g14.govInt.y = goverNordic_g14.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5529};
  ((modelica_real *)((data->modelData->realVarsData[173] /* goverNordic_g14.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2735]] /* goverNordic_g14.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* goverNordic_g14.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[173] /* goverNordic_g14.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[173].info /* goverNordic_g14.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* goverNordic_g14.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5529;
}

/*
equation index: 5530
type: SIMPLE_ASSIGN
goverNordic_g14.waterFlow.y_start = goverNordic_g14.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2756]] /* goverNordic_g14.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* goverNordic_g14.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5530;
}

/*
equation index: 5531
type: SIMPLE_ASSIGN
$START.goverNordic_g14.waterFlow.y = goverNordic_g14.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5531};
  ((modelica_real *)((data->modelData->realVarsData[175] /* goverNordic_g14.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2756]] /* goverNordic_g14.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[175] /* goverNordic_g14.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[175].info /* goverNordic_g14.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5531;
}

/*
equation index: 5532
type: SIMPLE_ASSIGN
vrNordic_g14.Us0Pu = g14.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5154]] /* vrNordic_g14.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1603]] /* g14.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5532;
}

/*
equation index: 5533
type: SIMPLE_ASSIGN
$START.vrNordic_g14.UsPu = vrNordic_g14.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5533};
  ((modelica_real *)((data->modelData->realVarsData[3759] /* vrNordic_g14.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5154]] /* vrNordic_g14.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3759] /* vrNordic_g14.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3759].info /* vrNordic_g14.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */));
  threadData->lastEquationSolved = 5533;
}

/*
equation index: 5534
type: SIMPLE_ASSIGN
vrNordic_g14.UsPu = if g14.running.value then if g14.uStatorPu.re == 0.0 and g14.uStatorPu.im == 0.0 then 0.0 else (g14.uStatorPu.re ^ 2.0 + g14.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5534};
  modelica_real tmp1531;
  modelica_real tmp1532;
  modelica_real tmp1533;
  modelica_boolean tmp1534;
  modelica_real tmp1535;
  modelica_boolean tmp1536;
  modelica_real tmp1537;
  tmp1536 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1536)
  {
    tmp1534 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) == 0.0));
    if(tmp1534)
    {
      tmp1535 = 0.0;
    }
    else
    {
      tmp1531 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */);
      tmp1532 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */);
      tmp1533 = (tmp1531 * tmp1531) + (tmp1532 * tmp1532);
      if(tmp1533 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1533, 0.5);
      }
      tmp1535 = sqrt(tmp1533);
    }
    tmp1537 = tmp1535;
  }
  else
  {
    tmp1537 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */) = tmp1537;
  threadData->lastEquationSolved = 5534;
}

/*
equation index: 5535
type: SIMPLE_ASSIGN
vrNordic_g14.Ir0Pu = g14.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5149]] /* vrNordic_g14.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1542]] /* g14.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5535;
}

/*
equation index: 5536
type: SIMPLE_ASSIGN
$START.vrNordic_g14.IrPu = vrNordic_g14.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5536};
  ((modelica_real *)((data->modelData->realVarsData[3758] /* vrNordic_g14.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5149]] /* vrNordic_g14.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3758] /* vrNordic_g14.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3758].info /* vrNordic_g14.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */));
  threadData->lastEquationSolved = 5536;
}

/*
equation index: 5537
type: SIMPLE_ASSIGN
vrNordic_g14.IrPu = if g14.running.value then g14.RfPPu * g14.ifPu / (g14.rTfoPu * g14.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* g14.Kuf PARAM */)),"g14.rTfoPu * g14.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5537;
}

/*
equation index: 5538
type: SIMPLE_ASSIGN
vrNordic_g14.dIf.y = vrNordic_g14.IrPu - vrNordic_g14.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5160]] /* vrNordic_g14.const2.k PARAM */);
  threadData->lastEquationSolved = 5538;
}

/*
equation index: 5539
type: SIMPLE_ASSIGN
vrNordic_g14.overExcitationLimitation.y = if vrNordic_g14.dIf.y < -0.1 then -1.0 else if vrNordic_g14.dIf.y < 0.0 then 0.0 else if vrNordic_g14.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g14.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5539};
  modelica_boolean tmp1538;
  modelica_boolean tmp1539;
  modelica_boolean tmp1540;
  modelica_boolean tmp1541;
  modelica_real tmp1542;
  modelica_boolean tmp1543;
  modelica_real tmp1544;
  tmp1538 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */),-0.1);
  tmp1543 = (modelica_boolean)tmp1538;
  if(tmp1543)
  {
    tmp1544 = -1.0;
  }
  else
  {
    tmp1539 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */),0.0);
    tmp1541 = (modelica_boolean)tmp1539;
    if(tmp1541)
    {
      tmp1542 = 0.0;
    }
    else
    {
      tmp1540 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5214]] /* vrNordic_g14.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1542 = (tmp1540?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */));
    }
    tmp1544 = tmp1542;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */) = tmp1544;
  threadData->lastEquationSolved = 5539;
}

/*
equation index: 5540
type: SIMPLE_ASSIGN
vrNordic_g14.gain1.y = vrNordic_g14.gain1.k * vrNordic_g14.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3767]] /* vrNordic_g14.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5166]] /* vrNordic_g14.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */));
  threadData->lastEquationSolved = 5540;
}

/*
equation index: 5541
type: SIMPLE_ASSIGN
vrNordic_g14.Efd0Pu = g14.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5147]] /* vrNordic_g14.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1540]] /* g14.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5541;
}

/*
equation index: 5542
type: SIMPLE_ASSIGN
$START.vrNordic_g14.limIntegrator.y = vrNordic_g14.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5542};
  ((modelica_real *)((data->modelData->realVarsData[282] /* vrNordic_g14.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5147]] /* vrNordic_g14.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[282] /* vrNordic_g14.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[282].info /* vrNordic_g14.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5542;
}

/*
equation index: 5543
type: SIMPLE_ASSIGN
vrNordic_g14.UsRef0Pu = vrNordic_g14.Efd0Pu / vrNordic_g14.KTgr + vrNordic_g14.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5155]] /* vrNordic_g14.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5147]] /* vrNordic_g14.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5152]] /* vrNordic_g14.KTgr PARAM */),"vrNordic_g14.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5154]] /* vrNordic_g14.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5543;
}

/*
equation index: 5544
type: SIMPLE_ASSIGN
vrNordic_g14.const1.k = vrNordic_g14.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5159]] /* vrNordic_g14.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5155]] /* vrNordic_g14.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5544;
}

/*
equation index: 5545
type: SIMPLE_ASSIGN
vrNordic_g14.dU.y = vrNordic_g14.const1.k - vrNordic_g14.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* vrNordic_g14.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5159]] /* vrNordic_g14.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */);
  threadData->lastEquationSolved = 5545;
}

/*
equation index: 5546
type: SIMPLE_ASSIGN
vrNordic_g14.add.y = vrNordic_g14.add.k1 * vrNordic_g14.dU.y + vrNordic_g14.add.k2 * vrNordic_g14.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5156]] /* vrNordic_g14.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* vrNordic_g14.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5157]] /* vrNordic_g14.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3777]] /* vrNordic_g14.limiter.y variable */));
  threadData->lastEquationSolved = 5546;
}

/*
equation index: 5547
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.u_start = vrNordic_g14.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5179]] /* vrNordic_g14.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5147]] /* vrNordic_g14.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5547;
}

/*
equation index: 5548
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.Y0 = if vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag.u_start * vrNordic_g14.leadLag.b[2] / vrNordic_g14.leadLag.a_end else if vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5170]] /* vrNordic_g14.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5179]] /* vrNordic_g14.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5175]] /* vrNordic_g14.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */),"vrNordic_g14.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5181]] /* vrNordic_g14.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5548;
}

/*
equation index: 5549
type: SIMPLE_ASSIGN
$START.vrNordic_g14.leadLag.y = vrNordic_g14.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5549};
  ((modelica_real *)((data->modelData->realVarsData[3770] /* vrNordic_g14.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5170]] /* vrNordic_g14.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3770] /* vrNordic_g14.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3770].info /* vrNordic_g14.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */));
  threadData->lastEquationSolved = 5549;
}

/*
equation index: 5550
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.X0[1] = if vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag.u_start / vrNordic_g14.leadLag.a_end else if vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5169]] /* vrNordic_g14.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5179]] /* vrNordic_g14.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */),"vrNordic_g14.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[640]] /* vrNordic_g14.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5180]] /* vrNordic_g14.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5550;
}

/*
equation index: 5551
type: SIMPLE_ASSIGN
$START.vrNordic_g14.leadLag.x_scaled[1] = vrNordic_g14.leadLag.X0[1] * vrNordic_g14.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5551};
  ((modelica_real *)((data->modelData->realVarsData[279] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5169]] /* vrNordic_g14.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[279] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[279].info /* vrNordic_g14.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5551;
}

/*
equation index: 5552
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.x_scaled[1] = $START.vrNordic_g14.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[279] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5552;
}

/*
equation index: 5553
type: SIMPLE_ASSIGN
$START.vrNordic_g14.leadLag.x[1] = vrNordic_g14.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5553};
  ((modelica_real *)((data->modelData->realVarsData[3769] /* vrNordic_g14.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5169]] /* vrNordic_g14.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3769] /* vrNordic_g14.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3769].info /* vrNordic_g14.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5553;
}

/*
equation index: 5554
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.x[1] = vrNordic_g14.leadLag.x_scaled[1] / vrNordic_g14.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */),"vrNordic_g14.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5554;
}

/*
equation index: 5555
type: SIMPLE_ASSIGN
vrNordic_g14.limIntegrator.y_start = vrNordic_g14.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5211]] /* vrNordic_g14.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5147]] /* vrNordic_g14.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5555;
}

/*
equation index: 5556
type: SIMPLE_ASSIGN
goverNordic_g13.Pm0Pu = g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1477]] /* g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5556;
}

/*
equation index: 5557
type: SIMPLE_ASSIGN
$START.goverNordic_g13.PGenPu = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5557};
  ((modelica_real *)((data->modelData->realVarsData[2148] /* goverNordic_g13.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2148] /* goverNordic_g13.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2148].info /* goverNordic_g13.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */));
  threadData->lastEquationSolved = 5557;
}

/*
equation index: 5558
type: SIMPLE_ASSIGN
goverNordic_g13.PGenPu = if g13.running.value then (-g13.terminal.V.re) * g13.terminal.i.re - g13.terminal.V.im * g13.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5558;
}

/*
equation index: 5559
type: SIMPLE_ASSIGN
goverNordic_g13.perUnitP.y = goverNordic_g13.perUnitP.k * goverNordic_g13.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2164]] /* goverNordic_g13.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* goverNordic_g13.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */));
  threadData->lastEquationSolved = 5559;
}

/*
equation index: 5560
type: SIMPLE_ASSIGN
g13.PGen = if g13.running.value then 100.0 * goverNordic_g13.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1569]] /* g13.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5560;
}

/*
equation index: 5561
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.Y0 = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* goverNordic_g13.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5561;
}

/*
equation index: 5562
type: SIMPLE_ASSIGN
$START.goverNordic_g13.limRateLimFirstOrder.limIntegrator.y = goverNordic_g13.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5562};
  ((modelica_real *)((data->modelData->realVarsData[170] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* goverNordic_g13.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[170] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[170].info /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5562;
}

/*
equation index: 5563
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g13.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* goverNordic_g13.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5563;
}

/*
equation index: 5564
type: SIMPLE_ASSIGN
goverNordic_g13.firstOrder1.y_start = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* goverNordic_g13.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5564;
}

/*
equation index: 5565
type: SIMPLE_ASSIGN
$START.goverNordic_g13.firstOrder1.y = goverNordic_g13.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5565};
  ((modelica_real *)((data->modelData->realVarsData[168] /* goverNordic_g13.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* goverNordic_g13.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[168] /* goverNordic_g13.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[168].info /* goverNordic_g13.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5565;
}

/*
equation index: 5566
type: SIMPLE_ASSIGN
goverNordic_g13.firstOrder1.y = $START.goverNordic_g13.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[168] /* goverNordic_g13.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5566;
}

/*
equation index: 5567
type: SIMPLE_ASSIGN
$DER.goverNordic_g13.firstOrder1.y = (goverNordic_g13.firstOrder1.k * goverNordic_g13.perUnitP.y - goverNordic_g13.firstOrder1.y) / goverNordic_g13.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* der(goverNordic_g13.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* goverNordic_g13.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2164]] /* goverNordic_g13.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* goverNordic_g13.firstOrder1.T PARAM */),"goverNordic_g13.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5567;
}

/*
equation index: 5568
type: SIMPLE_ASSIGN
goverNordic_g13.const.k = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* goverNordic_g13.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5568;
}

/*
equation index: 5569
type: SIMPLE_ASSIGN
goverNordic_g13.dP.y = goverNordic_g13.const.k - goverNordic_g13.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2152]] /* goverNordic_g13.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* goverNordic_g13.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5569;
}

/*
equation index: 5570
type: SIMPLE_ASSIGN
goverNordic_g13.dOmegaPlusDroop.y = goverNordic_g13.dOmegaPlusDroop.k1 * goverNordic_g13.dOmega.y + goverNordic_g13.dOmegaPlusDroop.k2 * goverNordic_g13.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* goverNordic_g13.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2150]] /* goverNordic_g13.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* goverNordic_g13.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2152]] /* goverNordic_g13.dP.y variable */));
  threadData->lastEquationSolved = 5570;
}

/*
equation index: 5571
type: SIMPLE_ASSIGN
goverNordic_g13.govKi.y = goverNordic_g13.govKi.k * goverNordic_g13.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* goverNordic_g13.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* goverNordic_g13.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5571;
}

/*
equation index: 5572
type: SIMPLE_ASSIGN
$DER.goverNordic_g13.govInt.y = goverNordic_g13.govInt.k * goverNordic_g13.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* der(goverNordic_g13.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* goverNordic_g13.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* goverNordic_g13.govKi.y variable */));
  threadData->lastEquationSolved = 5572;
}

/*
equation index: 5573
type: SIMPLE_ASSIGN
goverNordic_g13.govKp.y = goverNordic_g13.govKp.k * goverNordic_g13.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* goverNordic_g13.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2701]] /* goverNordic_g13.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5573;
}

/*
equation index: 5574
type: SIMPLE_ASSIGN
goverNordic_g13.govInt.y_start = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* goverNordic_g13.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5574;
}

/*
equation index: 5575
type: SIMPLE_ASSIGN
$START.goverNordic_g13.govInt.y = goverNordic_g13.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5575};
  ((modelica_real *)((data->modelData->realVarsData[169] /* goverNordic_g13.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* goverNordic_g13.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* goverNordic_g13.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[169] /* goverNordic_g13.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[169].info /* goverNordic_g13.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* goverNordic_g13.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5575;
}

/*
equation index: 5576
type: SIMPLE_ASSIGN
goverNordic_g13.waterFlow.y_start = goverNordic_g13.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* goverNordic_g13.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* goverNordic_g13.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5576;
}

/*
equation index: 5577
type: SIMPLE_ASSIGN
$START.goverNordic_g13.waterFlow.y = goverNordic_g13.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5577};
  ((modelica_real *)((data->modelData->realVarsData[171] /* goverNordic_g13.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* goverNordic_g13.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[171] /* goverNordic_g13.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[171].info /* goverNordic_g13.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5577;
}

/*
equation index: 5578
type: SIMPLE_ASSIGN
vrNordic_g13.Us0Pu = g13.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5075]] /* vrNordic_g13.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* g13.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5578;
}

/*
equation index: 5579
type: SIMPLE_ASSIGN
$START.vrNordic_g13.UsPu = vrNordic_g13.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5579};
  ((modelica_real *)((data->modelData->realVarsData[3735] /* vrNordic_g13.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5075]] /* vrNordic_g13.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3735] /* vrNordic_g13.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3735].info /* vrNordic_g13.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */));
  threadData->lastEquationSolved = 5579;
}

/*
equation index: 5580
type: SIMPLE_ASSIGN
vrNordic_g13.UsPu = if g13.running.value then if g13.uStatorPu.re == 0.0 and g13.uStatorPu.im == 0.0 then 0.0 else (g13.uStatorPu.re ^ 2.0 + g13.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5580};
  modelica_real tmp1545;
  modelica_real tmp1546;
  modelica_real tmp1547;
  modelica_boolean tmp1548;
  modelica_real tmp1549;
  modelica_boolean tmp1550;
  modelica_real tmp1551;
  tmp1550 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1550)
  {
    tmp1548 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) == 0.0));
    if(tmp1548)
    {
      tmp1549 = 0.0;
    }
    else
    {
      tmp1545 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */);
      tmp1546 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */);
      tmp1547 = (tmp1545 * tmp1545) + (tmp1546 * tmp1546);
      if(tmp1547 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1547, 0.5);
      }
      tmp1549 = sqrt(tmp1547);
    }
    tmp1551 = tmp1549;
  }
  else
  {
    tmp1551 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */) = tmp1551;
  threadData->lastEquationSolved = 5580;
}

/*
equation index: 5581
type: SIMPLE_ASSIGN
vrNordic_g13.Ir0Pu = g13.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5070]] /* vrNordic_g13.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* g13.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5581;
}

/*
equation index: 5582
type: SIMPLE_ASSIGN
$START.vrNordic_g13.IrPu = vrNordic_g13.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5582};
  ((modelica_real *)((data->modelData->realVarsData[3734] /* vrNordic_g13.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5070]] /* vrNordic_g13.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3734] /* vrNordic_g13.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3734].info /* vrNordic_g13.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */));
  threadData->lastEquationSolved = 5582;
}

/*
equation index: 5583
type: SIMPLE_ASSIGN
vrNordic_g13.IrPu = if g13.running.value then g13.RfPPu * g13.ifPu / (g13.rTfoPu * g13.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* g13.Kuf PARAM */)),"g13.rTfoPu * g13.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5583;
}

/*
equation index: 5584
type: SIMPLE_ASSIGN
vrNordic_g13.dIf.y = vrNordic_g13.IrPu - vrNordic_g13.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5081]] /* vrNordic_g13.const2.k PARAM */);
  threadData->lastEquationSolved = 5584;
}

/*
equation index: 5585
type: SIMPLE_ASSIGN
vrNordic_g13.overExcitationLimitation.y = if vrNordic_g13.dIf.y < -0.1 then -1.0 else if vrNordic_g13.dIf.y < 0.0 then 0.0 else if vrNordic_g13.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g13.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5585};
  modelica_boolean tmp1552;
  modelica_boolean tmp1553;
  modelica_boolean tmp1554;
  modelica_boolean tmp1555;
  modelica_real tmp1556;
  modelica_boolean tmp1557;
  modelica_real tmp1558;
  tmp1552 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */),-0.1);
  tmp1557 = (modelica_boolean)tmp1552;
  if(tmp1557)
  {
    tmp1558 = -1.0;
  }
  else
  {
    tmp1553 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */),0.0);
    tmp1555 = (modelica_boolean)tmp1553;
    if(tmp1555)
    {
      tmp1556 = 0.0;
    }
    else
    {
      tmp1554 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5135]] /* vrNordic_g13.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1556 = (tmp1554?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */));
    }
    tmp1558 = tmp1556;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */) = tmp1558;
  threadData->lastEquationSolved = 5585;
}

/*
equation index: 5586
type: SIMPLE_ASSIGN
vrNordic_g13.gain1.y = vrNordic_g13.gain1.k * vrNordic_g13.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vrNordic_g13.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5087]] /* vrNordic_g13.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */));
  threadData->lastEquationSolved = 5586;
}

/*
equation index: 5587
type: SIMPLE_ASSIGN
vrNordic_g13.Efd0Pu = g13.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5068]] /* vrNordic_g13.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* g13.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5587;
}

/*
equation index: 5588
type: SIMPLE_ASSIGN
$START.vrNordic_g13.limIntegrator.y = vrNordic_g13.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5588};
  ((modelica_real *)((data->modelData->realVarsData[276] /* vrNordic_g13.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5068]] /* vrNordic_g13.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[276] /* vrNordic_g13.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[276].info /* vrNordic_g13.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5588;
}

/*
equation index: 5589
type: SIMPLE_ASSIGN
vrNordic_g13.UsRef0Pu = vrNordic_g13.Efd0Pu / vrNordic_g13.KTgr + vrNordic_g13.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5076]] /* vrNordic_g13.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5068]] /* vrNordic_g13.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5073]] /* vrNordic_g13.KTgr PARAM */),"vrNordic_g13.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5075]] /* vrNordic_g13.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5589;
}

/*
equation index: 5590
type: SIMPLE_ASSIGN
vrNordic_g13.const1.k = vrNordic_g13.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5080]] /* vrNordic_g13.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5076]] /* vrNordic_g13.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5590;
}

/*
equation index: 5591
type: SIMPLE_ASSIGN
vrNordic_g13.dU.y = vrNordic_g13.const1.k - vrNordic_g13.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vrNordic_g13.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5080]] /* vrNordic_g13.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */);
  threadData->lastEquationSolved = 5591;
}

/*
equation index: 5592
type: SIMPLE_ASSIGN
vrNordic_g13.add.y = vrNordic_g13.add.k1 * vrNordic_g13.dU.y + vrNordic_g13.add.k2 * vrNordic_g13.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5077]] /* vrNordic_g13.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vrNordic_g13.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5078]] /* vrNordic_g13.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vrNordic_g13.limiter.y variable */));
  threadData->lastEquationSolved = 5592;
}

/*
equation index: 5593
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.u_start = vrNordic_g13.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5100]] /* vrNordic_g13.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5068]] /* vrNordic_g13.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5593;
}

/*
equation index: 5594
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.Y0 = if vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag.u_start * vrNordic_g13.leadLag.b[2] / vrNordic_g13.leadLag.a_end else if vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5091]] /* vrNordic_g13.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5100]] /* vrNordic_g13.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5096]] /* vrNordic_g13.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */),"vrNordic_g13.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5102]] /* vrNordic_g13.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5594;
}

/*
equation index: 5595
type: SIMPLE_ASSIGN
$START.vrNordic_g13.leadLag.y = vrNordic_g13.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5595};
  ((modelica_real *)((data->modelData->realVarsData[3746] /* vrNordic_g13.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5091]] /* vrNordic_g13.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3746] /* vrNordic_g13.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3746].info /* vrNordic_g13.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */));
  threadData->lastEquationSolved = 5595;
}

/*
equation index: 5596
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.X0[1] = if vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag.u_start / vrNordic_g13.leadLag.a_end else if vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5090]] /* vrNordic_g13.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5100]] /* vrNordic_g13.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */),"vrNordic_g13.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[624]] /* vrNordic_g13.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5101]] /* vrNordic_g13.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5596;
}

/*
equation index: 5597
type: SIMPLE_ASSIGN
$START.vrNordic_g13.leadLag.x_scaled[1] = vrNordic_g13.leadLag.X0[1] * vrNordic_g13.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5597};
  ((modelica_real *)((data->modelData->realVarsData[273] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5090]] /* vrNordic_g13.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[273] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[273].info /* vrNordic_g13.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5597;
}

/*
equation index: 5598
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.x_scaled[1] = $START.vrNordic_g13.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[273] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5598;
}

/*
equation index: 5599
type: SIMPLE_ASSIGN
$START.vrNordic_g13.leadLag.x[1] = vrNordic_g13.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5599};
  ((modelica_real *)((data->modelData->realVarsData[3745] /* vrNordic_g13.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5090]] /* vrNordic_g13.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3745] /* vrNordic_g13.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3745].info /* vrNordic_g13.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5599;
}

/*
equation index: 5600
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.x[1] = vrNordic_g13.leadLag.x_scaled[1] / vrNordic_g13.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */),"vrNordic_g13.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5600;
}

/*
equation index: 5601
type: SIMPLE_ASSIGN
vrNordic_g13.limIntegrator.y_start = vrNordic_g13.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5132]] /* vrNordic_g13.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5068]] /* vrNordic_g13.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5601;
}

/*
equation index: 5602
type: SIMPLE_ASSIGN
goverNordic_g12.Pm0Pu = g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5602;
}

/*
equation index: 5603
type: SIMPLE_ASSIGN
$START.goverNordic_g12.PGenPu = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5603};
  ((modelica_real *)((data->modelData->realVarsData[2130] /* goverNordic_g12.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2130] /* goverNordic_g12.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2130].info /* goverNordic_g12.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */));
  threadData->lastEquationSolved = 5603;
}

/*
equation index: 5604
type: SIMPLE_ASSIGN
goverNordic_g12.PGenPu = if g12.running.value then (-g12.terminal.V.re) * g12.terminal.i.re - g12.terminal.V.im * g12.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5604;
}

/*
equation index: 5605
type: SIMPLE_ASSIGN
goverNordic_g12.perUnitP.y = goverNordic_g12.perUnitP.k * goverNordic_g12.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2146]] /* goverNordic_g12.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* goverNordic_g12.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */));
  threadData->lastEquationSolved = 5605;
}

/*
equation index: 5606
type: SIMPLE_ASSIGN
g12.PGen = if g12.running.value then 100.0 * goverNordic_g12.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1523]] /* g12.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5606;
}

/*
equation index: 5607
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.Y0 = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* goverNordic_g12.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5607;
}

/*
equation index: 5608
type: SIMPLE_ASSIGN
$START.goverNordic_g12.limRateLimFirstOrder.limIntegrator.y = goverNordic_g12.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5608};
  ((modelica_real *)((data->modelData->realVarsData[166] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* goverNordic_g12.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[166] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[166].info /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5608;
}

/*
equation index: 5609
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g12.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* goverNordic_g12.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5609;
}

/*
equation index: 5610
type: SIMPLE_ASSIGN
goverNordic_g12.firstOrder1.y_start = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* goverNordic_g12.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5610;
}

/*
equation index: 5611
type: SIMPLE_ASSIGN
$START.goverNordic_g12.firstOrder1.y = goverNordic_g12.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5611};
  ((modelica_real *)((data->modelData->realVarsData[164] /* goverNordic_g12.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* goverNordic_g12.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[164] /* goverNordic_g12.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[164].info /* goverNordic_g12.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5611;
}

/*
equation index: 5612
type: SIMPLE_ASSIGN
goverNordic_g12.firstOrder1.y = $START.goverNordic_g12.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[164] /* goverNordic_g12.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5612;
}

/*
equation index: 5613
type: SIMPLE_ASSIGN
$DER.goverNordic_g12.firstOrder1.y = (goverNordic_g12.firstOrder1.k * goverNordic_g12.perUnitP.y - goverNordic_g12.firstOrder1.y) / goverNordic_g12.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(goverNordic_g12.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2660]] /* goverNordic_g12.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2146]] /* goverNordic_g12.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2659]] /* goverNordic_g12.firstOrder1.T PARAM */),"goverNordic_g12.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5613;
}

/*
equation index: 5614
type: SIMPLE_ASSIGN
goverNordic_g12.const.k = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* goverNordic_g12.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5614;
}

/*
equation index: 5615
type: SIMPLE_ASSIGN
goverNordic_g12.dP.y = goverNordic_g12.const.k - goverNordic_g12.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2134]] /* goverNordic_g12.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* goverNordic_g12.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5615;
}

/*
equation index: 5616
type: SIMPLE_ASSIGN
goverNordic_g12.dOmegaPlusDroop.y = goverNordic_g12.dOmegaPlusDroop.k1 * goverNordic_g12.dOmega.y + goverNordic_g12.dOmegaPlusDroop.k2 * goverNordic_g12.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* goverNordic_g12.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* goverNordic_g12.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2658]] /* goverNordic_g12.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2134]] /* goverNordic_g12.dP.y variable */));
  threadData->lastEquationSolved = 5616;
}

/*
equation index: 5617
type: SIMPLE_ASSIGN
goverNordic_g12.govKi.y = goverNordic_g12.govKi.k * goverNordic_g12.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* goverNordic_g12.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2664]] /* goverNordic_g12.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5617;
}

/*
equation index: 5618
type: SIMPLE_ASSIGN
$DER.goverNordic_g12.govInt.y = goverNordic_g12.govInt.k * goverNordic_g12.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* der(goverNordic_g12.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2662]] /* goverNordic_g12.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* goverNordic_g12.govKi.y variable */));
  threadData->lastEquationSolved = 5618;
}

/*
equation index: 5619
type: SIMPLE_ASSIGN
goverNordic_g12.govKp.y = goverNordic_g12.govKp.k * goverNordic_g12.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* goverNordic_g12.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* goverNordic_g12.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5619;
}

/*
equation index: 5620
type: SIMPLE_ASSIGN
goverNordic_g12.govInt.y_start = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* goverNordic_g12.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5620;
}

/*
equation index: 5621
type: SIMPLE_ASSIGN
$START.goverNordic_g12.govInt.y = goverNordic_g12.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5621};
  ((modelica_real *)((data->modelData->realVarsData[165] /* goverNordic_g12.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* goverNordic_g12.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* goverNordic_g12.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[165] /* goverNordic_g12.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[165].info /* goverNordic_g12.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* goverNordic_g12.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5621;
}

/*
equation index: 5622
type: SIMPLE_ASSIGN
goverNordic_g12.waterFlow.y_start = goverNordic_g12.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* goverNordic_g12.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* goverNordic_g12.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5622;
}

/*
equation index: 5623
type: SIMPLE_ASSIGN
$START.goverNordic_g12.waterFlow.y = goverNordic_g12.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5623};
  ((modelica_real *)((data->modelData->realVarsData[167] /* goverNordic_g12.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* goverNordic_g12.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[167] /* goverNordic_g12.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[167].info /* goverNordic_g12.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5623;
}

/*
equation index: 5624
type: SIMPLE_ASSIGN
vrNordic_g12.Us0Pu = g12.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4996]] /* vrNordic_g12.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* g12.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5624;
}

/*
equation index: 5625
type: SIMPLE_ASSIGN
$START.vrNordic_g12.UsPu = vrNordic_g12.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5625};
  ((modelica_real *)((data->modelData->realVarsData[3711] /* vrNordic_g12.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4996]] /* vrNordic_g12.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3711] /* vrNordic_g12.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3711].info /* vrNordic_g12.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */));
  threadData->lastEquationSolved = 5625;
}

/*
equation index: 5626
type: SIMPLE_ASSIGN
vrNordic_g12.UsPu = if g12.running.value then if g12.uStatorPu.re == 0.0 and g12.uStatorPu.im == 0.0 then 0.0 else (g12.uStatorPu.re ^ 2.0 + g12.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5626};
  modelica_real tmp1559;
  modelica_real tmp1560;
  modelica_real tmp1561;
  modelica_boolean tmp1562;
  modelica_real tmp1563;
  modelica_boolean tmp1564;
  modelica_real tmp1565;
  tmp1564 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1564)
  {
    tmp1562 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) == 0.0));
    if(tmp1562)
    {
      tmp1563 = 0.0;
    }
    else
    {
      tmp1559 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */);
      tmp1560 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */);
      tmp1561 = (tmp1559 * tmp1559) + (tmp1560 * tmp1560);
      if(tmp1561 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1561, 0.5);
      }
      tmp1563 = sqrt(tmp1561);
    }
    tmp1565 = tmp1563;
  }
  else
  {
    tmp1565 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */) = tmp1565;
  threadData->lastEquationSolved = 5626;
}

/*
equation index: 5627
type: SIMPLE_ASSIGN
vrNordic_g12.Ir0Pu = g12.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4991]] /* vrNordic_g12.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1340]] /* g12.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5627;
}

/*
equation index: 5628
type: SIMPLE_ASSIGN
$START.vrNordic_g12.IrPu = vrNordic_g12.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5628};
  ((modelica_real *)((data->modelData->realVarsData[3710] /* vrNordic_g12.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4991]] /* vrNordic_g12.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3710] /* vrNordic_g12.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3710].info /* vrNordic_g12.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */));
  threadData->lastEquationSolved = 5628;
}

/*
equation index: 5629
type: SIMPLE_ASSIGN
vrNordic_g12.IrPu = if g12.running.value then g12.RfPPu * g12.ifPu / (g12.rTfoPu * g12.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* g12.Kuf PARAM */)),"g12.rTfoPu * g12.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5629;
}

/*
equation index: 5630
type: SIMPLE_ASSIGN
vrNordic_g12.dIf.y = vrNordic_g12.IrPu - vrNordic_g12.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5002]] /* vrNordic_g12.const2.k PARAM */);
  threadData->lastEquationSolved = 5630;
}

/*
equation index: 5631
type: SIMPLE_ASSIGN
vrNordic_g12.overExcitationLimitation.y = if vrNordic_g12.dIf.y < -0.1 then -1.0 else if vrNordic_g12.dIf.y < 0.0 then 0.0 else if vrNordic_g12.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g12.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5631};
  modelica_boolean tmp1566;
  modelica_boolean tmp1567;
  modelica_boolean tmp1568;
  modelica_boolean tmp1569;
  modelica_real tmp1570;
  modelica_boolean tmp1571;
  modelica_real tmp1572;
  tmp1566 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */),-0.1);
  tmp1571 = (modelica_boolean)tmp1566;
  if(tmp1571)
  {
    tmp1572 = -1.0;
  }
  else
  {
    tmp1567 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */),0.0);
    tmp1569 = (modelica_boolean)tmp1567;
    if(tmp1569)
    {
      tmp1570 = 0.0;
    }
    else
    {
      tmp1568 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5056]] /* vrNordic_g12.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1570 = (tmp1568?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */));
    }
    tmp1572 = tmp1570;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */) = tmp1572;
  threadData->lastEquationSolved = 5631;
}

/*
equation index: 5632
type: SIMPLE_ASSIGN
vrNordic_g12.gain1.y = vrNordic_g12.gain1.k * vrNordic_g12.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3719]] /* vrNordic_g12.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5008]] /* vrNordic_g12.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */));
  threadData->lastEquationSolved = 5632;
}

/*
equation index: 5633
type: SIMPLE_ASSIGN
vrNordic_g12.Efd0Pu = g12.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4989]] /* vrNordic_g12.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* g12.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5633;
}

/*
equation index: 5634
type: SIMPLE_ASSIGN
$START.vrNordic_g12.limIntegrator.y = vrNordic_g12.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5634};
  ((modelica_real *)((data->modelData->realVarsData[270] /* vrNordic_g12.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4989]] /* vrNordic_g12.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[270] /* vrNordic_g12.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[270].info /* vrNordic_g12.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5634;
}

/*
equation index: 5635
type: SIMPLE_ASSIGN
vrNordic_g12.UsRef0Pu = vrNordic_g12.Efd0Pu / vrNordic_g12.KTgr + vrNordic_g12.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4997]] /* vrNordic_g12.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4989]] /* vrNordic_g12.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4994]] /* vrNordic_g12.KTgr PARAM */),"vrNordic_g12.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4996]] /* vrNordic_g12.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5635;
}

/*
equation index: 5636
type: SIMPLE_ASSIGN
vrNordic_g12.const1.k = vrNordic_g12.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5001]] /* vrNordic_g12.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4997]] /* vrNordic_g12.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5636;
}

/*
equation index: 5637
type: SIMPLE_ASSIGN
vrNordic_g12.dU.y = vrNordic_g12.const1.k - vrNordic_g12.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* vrNordic_g12.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5001]] /* vrNordic_g12.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */);
  threadData->lastEquationSolved = 5637;
}

/*
equation index: 5638
type: SIMPLE_ASSIGN
vrNordic_g12.add.y = vrNordic_g12.add.k1 * vrNordic_g12.dU.y + vrNordic_g12.add.k2 * vrNordic_g12.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4998]] /* vrNordic_g12.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* vrNordic_g12.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4999]] /* vrNordic_g12.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* vrNordic_g12.limiter.y variable */));
  threadData->lastEquationSolved = 5638;
}

/*
equation index: 5639
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.u_start = vrNordic_g12.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5021]] /* vrNordic_g12.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4989]] /* vrNordic_g12.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5639;
}

/*
equation index: 5640
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.Y0 = if vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag.u_start * vrNordic_g12.leadLag.b[2] / vrNordic_g12.leadLag.a_end else if vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5012]] /* vrNordic_g12.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5021]] /* vrNordic_g12.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5017]] /* vrNordic_g12.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */),"vrNordic_g12.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5023]] /* vrNordic_g12.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5640;
}

/*
equation index: 5641
type: SIMPLE_ASSIGN
$START.vrNordic_g12.leadLag.y = vrNordic_g12.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5641};
  ((modelica_real *)((data->modelData->realVarsData[3722] /* vrNordic_g12.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5012]] /* vrNordic_g12.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3722] /* vrNordic_g12.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3722].info /* vrNordic_g12.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */));
  threadData->lastEquationSolved = 5641;
}

/*
equation index: 5642
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.X0[1] = if vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag.u_start / vrNordic_g12.leadLag.a_end else if vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5011]] /* vrNordic_g12.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5021]] /* vrNordic_g12.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */),"vrNordic_g12.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[608]] /* vrNordic_g12.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5022]] /* vrNordic_g12.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5642;
}

/*
equation index: 5643
type: SIMPLE_ASSIGN
$START.vrNordic_g12.leadLag.x_scaled[1] = vrNordic_g12.leadLag.X0[1] * vrNordic_g12.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5643};
  ((modelica_real *)((data->modelData->realVarsData[267] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5011]] /* vrNordic_g12.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[267] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[267].info /* vrNordic_g12.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5643;
}

/*
equation index: 5644
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.x_scaled[1] = $START.vrNordic_g12.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[267] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5644;
}

/*
equation index: 5645
type: SIMPLE_ASSIGN
$START.vrNordic_g12.leadLag.x[1] = vrNordic_g12.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5645};
  ((modelica_real *)((data->modelData->realVarsData[3721] /* vrNordic_g12.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5011]] /* vrNordic_g12.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3721] /* vrNordic_g12.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3721].info /* vrNordic_g12.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5645;
}

/*
equation index: 5646
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.x[1] = vrNordic_g12.leadLag.x_scaled[1] / vrNordic_g12.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */),"vrNordic_g12.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5646;
}

/*
equation index: 5647
type: SIMPLE_ASSIGN
vrNordic_g12.limIntegrator.y_start = vrNordic_g12.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5053]] /* vrNordic_g12.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4989]] /* vrNordic_g12.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5647;
}

/*
equation index: 5648
type: SIMPLE_ASSIGN
goverNordic_g11.Pm0Pu = g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5648;
}

/*
equation index: 5649
type: SIMPLE_ASSIGN
$START.goverNordic_g11.PGenPu = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5649};
  ((modelica_real *)((data->modelData->realVarsData[2112] /* goverNordic_g11.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2112] /* goverNordic_g11.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2112].info /* goverNordic_g11.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */));
  threadData->lastEquationSolved = 5649;
}

/*
equation index: 5650
type: SIMPLE_ASSIGN
goverNordic_g11.PGenPu = if g11.running.value then (-g11.terminal.V.re) * g11.terminal.i.re - g11.terminal.V.im * g11.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5650;
}

/*
equation index: 5651
type: SIMPLE_ASSIGN
goverNordic_g11.perUnitP.y = goverNordic_g11.perUnitP.k * goverNordic_g11.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* goverNordic_g11.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2646]] /* goverNordic_g11.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */));
  threadData->lastEquationSolved = 5651;
}

/*
equation index: 5652
type: SIMPLE_ASSIGN
g11.PGen = if g11.running.value then 100.0 * goverNordic_g11.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1477]] /* g11.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5652;
}

/*
equation index: 5653
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.Y0 = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2635]] /* goverNordic_g11.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5653;
}

/*
equation index: 5654
type: SIMPLE_ASSIGN
$START.goverNordic_g11.limRateLimFirstOrder.limIntegrator.y = goverNordic_g11.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5654};
  ((modelica_real *)((data->modelData->realVarsData[162] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2635]] /* goverNordic_g11.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[162] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[162].info /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5654;
}

/*
equation index: 5655
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g11.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2635]] /* goverNordic_g11.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5655;
}

/*
equation index: 5656
type: SIMPLE_ASSIGN
goverNordic_g11.firstOrder1.y_start = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2625]] /* goverNordic_g11.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5656;
}

/*
equation index: 5657
type: SIMPLE_ASSIGN
$START.goverNordic_g11.firstOrder1.y = goverNordic_g11.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5657};
  ((modelica_real *)((data->modelData->realVarsData[160] /* goverNordic_g11.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2625]] /* goverNordic_g11.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[160] /* goverNordic_g11.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[160].info /* goverNordic_g11.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5657;
}

/*
equation index: 5658
type: SIMPLE_ASSIGN
goverNordic_g11.firstOrder1.y = $START.goverNordic_g11.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[160] /* goverNordic_g11.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5658;
}

/*
equation index: 5659
type: SIMPLE_ASSIGN
$DER.goverNordic_g11.firstOrder1.y = (goverNordic_g11.firstOrder1.k * goverNordic_g11.perUnitP.y - goverNordic_g11.firstOrder1.y) / goverNordic_g11.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(goverNordic_g11.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2624]] /* goverNordic_g11.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* goverNordic_g11.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2623]] /* goverNordic_g11.firstOrder1.T PARAM */),"goverNordic_g11.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5659;
}

/*
equation index: 5660
type: SIMPLE_ASSIGN
goverNordic_g11.const.k = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* goverNordic_g11.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5660;
}

/*
equation index: 5661
type: SIMPLE_ASSIGN
goverNordic_g11.dP.y = goverNordic_g11.const.k - goverNordic_g11.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2116]] /* goverNordic_g11.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* goverNordic_g11.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5661;
}

/*
equation index: 5662
type: SIMPLE_ASSIGN
goverNordic_g11.dOmegaPlusDroop.y = goverNordic_g11.dOmegaPlusDroop.k1 * goverNordic_g11.dOmega.y + goverNordic_g11.dOmegaPlusDroop.k2 * goverNordic_g11.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* goverNordic_g11.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2114]] /* goverNordic_g11.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* goverNordic_g11.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2116]] /* goverNordic_g11.dP.y variable */));
  threadData->lastEquationSolved = 5662;
}

/*
equation index: 5663
type: SIMPLE_ASSIGN
goverNordic_g11.govKi.y = goverNordic_g11.govKi.k * goverNordic_g11.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* goverNordic_g11.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* goverNordic_g11.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5663;
}

/*
equation index: 5664
type: SIMPLE_ASSIGN
$DER.goverNordic_g11.govInt.y = goverNordic_g11.govInt.k * goverNordic_g11.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(goverNordic_g11.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* goverNordic_g11.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* goverNordic_g11.govKi.y variable */));
  threadData->lastEquationSolved = 5664;
}

/*
equation index: 5665
type: SIMPLE_ASSIGN
goverNordic_g11.govKp.y = goverNordic_g11.govKp.k * goverNordic_g11.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* goverNordic_g11.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2629]] /* goverNordic_g11.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5665;
}

/*
equation index: 5666
type: SIMPLE_ASSIGN
goverNordic_g11.govInt.y_start = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2627]] /* goverNordic_g11.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5666;
}

/*
equation index: 5667
type: SIMPLE_ASSIGN
$START.goverNordic_g11.govInt.y = goverNordic_g11.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5667};
  ((modelica_real *)((data->modelData->realVarsData[161] /* goverNordic_g11.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2627]] /* goverNordic_g11.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* goverNordic_g11.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[161] /* goverNordic_g11.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[161].info /* goverNordic_g11.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* goverNordic_g11.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5667;
}

/*
equation index: 5668
type: SIMPLE_ASSIGN
goverNordic_g11.waterFlow.y_start = goverNordic_g11.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* goverNordic_g11.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* goverNordic_g11.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5668;
}

/*
equation index: 5669
type: SIMPLE_ASSIGN
$START.goverNordic_g11.waterFlow.y = goverNordic_g11.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5669};
  ((modelica_real *)((data->modelData->realVarsData[163] /* goverNordic_g11.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* goverNordic_g11.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[163] /* goverNordic_g11.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[163].info /* goverNordic_g11.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5669;
}

/*
equation index: 5670
type: SIMPLE_ASSIGN
vrNordic_g11.Us0Pu = g11.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4917]] /* vrNordic_g11.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* g11.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5670;
}

/*
equation index: 5671
type: SIMPLE_ASSIGN
$START.vrNordic_g11.UsPu = vrNordic_g11.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5671};
  ((modelica_real *)((data->modelData->realVarsData[3687] /* vrNordic_g11.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4917]] /* vrNordic_g11.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3687] /* vrNordic_g11.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3687].info /* vrNordic_g11.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */));
  threadData->lastEquationSolved = 5671;
}

/*
equation index: 5672
type: SIMPLE_ASSIGN
vrNordic_g11.UsPu = if g11.running.value then if g11.uStatorPu.re == 0.0 and g11.uStatorPu.im == 0.0 then 0.0 else (g11.uStatorPu.re ^ 2.0 + g11.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5672};
  modelica_real tmp1573;
  modelica_real tmp1574;
  modelica_real tmp1575;
  modelica_boolean tmp1576;
  modelica_real tmp1577;
  modelica_boolean tmp1578;
  modelica_real tmp1579;
  tmp1578 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1578)
  {
    tmp1576 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) == 0.0));
    if(tmp1576)
    {
      tmp1577 = 0.0;
    }
    else
    {
      tmp1573 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */);
      tmp1574 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */);
      tmp1575 = (tmp1573 * tmp1573) + (tmp1574 * tmp1574);
      if(tmp1575 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1575, 0.5);
      }
      tmp1577 = sqrt(tmp1575);
    }
    tmp1579 = tmp1577;
  }
  else
  {
    tmp1579 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */) = tmp1579;
  threadData->lastEquationSolved = 5672;
}

/*
equation index: 5673
type: SIMPLE_ASSIGN
vrNordic_g11.Ir0Pu = g11.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4912]] /* vrNordic_g11.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* g11.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5673;
}

/*
equation index: 5674
type: SIMPLE_ASSIGN
$START.vrNordic_g11.IrPu = vrNordic_g11.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5674};
  ((modelica_real *)((data->modelData->realVarsData[3686] /* vrNordic_g11.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4912]] /* vrNordic_g11.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3686] /* vrNordic_g11.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3686].info /* vrNordic_g11.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */));
  threadData->lastEquationSolved = 5674;
}

/*
equation index: 5675
type: SIMPLE_ASSIGN
vrNordic_g11.IrPu = if g11.running.value then g11.RfPPu * g11.ifPu / (g11.rTfoPu * g11.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* g11.Kuf PARAM */)),"g11.rTfoPu * g11.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5675;
}

/*
equation index: 5676
type: SIMPLE_ASSIGN
vrNordic_g11.dIf.y = vrNordic_g11.IrPu - vrNordic_g11.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4923]] /* vrNordic_g11.const2.k PARAM */);
  threadData->lastEquationSolved = 5676;
}

/*
equation index: 5677
type: SIMPLE_ASSIGN
vrNordic_g11.overExcitationLimitation.y = if vrNordic_g11.dIf.y < -0.1 then -1.0 else if vrNordic_g11.dIf.y < 0.0 then 0.0 else if vrNordic_g11.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g11.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5677};
  modelica_boolean tmp1580;
  modelica_boolean tmp1581;
  modelica_boolean tmp1582;
  modelica_boolean tmp1583;
  modelica_real tmp1584;
  modelica_boolean tmp1585;
  modelica_real tmp1586;
  tmp1580 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */),-0.1);
  tmp1585 = (modelica_boolean)tmp1580;
  if(tmp1585)
  {
    tmp1586 = -1.0;
  }
  else
  {
    tmp1581 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */),0.0);
    tmp1583 = (modelica_boolean)tmp1581;
    if(tmp1583)
    {
      tmp1584 = 0.0;
    }
    else
    {
      tmp1582 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4977]] /* vrNordic_g11.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1584 = (tmp1582?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */));
    }
    tmp1586 = tmp1584;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */) = tmp1586;
  threadData->lastEquationSolved = 5677;
}

/*
equation index: 5678
type: SIMPLE_ASSIGN
vrNordic_g11.gain1.y = vrNordic_g11.gain1.k * vrNordic_g11.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3695]] /* vrNordic_g11.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4929]] /* vrNordic_g11.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */));
  threadData->lastEquationSolved = 5678;
}

/*
equation index: 5679
type: SIMPLE_ASSIGN
vrNordic_g11.Efd0Pu = g11.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4910]] /* vrNordic_g11.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* g11.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5679;
}

/*
equation index: 5680
type: SIMPLE_ASSIGN
$START.vrNordic_g11.limIntegrator.y = vrNordic_g11.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5680};
  ((modelica_real *)((data->modelData->realVarsData[264] /* vrNordic_g11.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4910]] /* vrNordic_g11.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[264] /* vrNordic_g11.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[264].info /* vrNordic_g11.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5680;
}

/*
equation index: 5681
type: SIMPLE_ASSIGN
vrNordic_g11.UsRef0Pu = vrNordic_g11.Efd0Pu / vrNordic_g11.KTgr + vrNordic_g11.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4918]] /* vrNordic_g11.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4910]] /* vrNordic_g11.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4915]] /* vrNordic_g11.KTgr PARAM */),"vrNordic_g11.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4917]] /* vrNordic_g11.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5681;
}

/*
equation index: 5682
type: SIMPLE_ASSIGN
vrNordic_g11.const1.k = vrNordic_g11.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4922]] /* vrNordic_g11.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4918]] /* vrNordic_g11.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5682;
}

/*
equation index: 5683
type: SIMPLE_ASSIGN
vrNordic_g11.dU.y = vrNordic_g11.const1.k - vrNordic_g11.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3691]] /* vrNordic_g11.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4922]] /* vrNordic_g11.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */);
  threadData->lastEquationSolved = 5683;
}

/*
equation index: 5684
type: SIMPLE_ASSIGN
vrNordic_g11.add.y = vrNordic_g11.add.k1 * vrNordic_g11.dU.y + vrNordic_g11.add.k2 * vrNordic_g11.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4919]] /* vrNordic_g11.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3691]] /* vrNordic_g11.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4920]] /* vrNordic_g11.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3705]] /* vrNordic_g11.limiter.y variable */));
  threadData->lastEquationSolved = 5684;
}

/*
equation index: 5685
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.u_start = vrNordic_g11.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4942]] /* vrNordic_g11.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4910]] /* vrNordic_g11.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5685;
}

/*
equation index: 5686
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.Y0 = if vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag.u_start * vrNordic_g11.leadLag.b[2] / vrNordic_g11.leadLag.a_end else if vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4933]] /* vrNordic_g11.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4942]] /* vrNordic_g11.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4938]] /* vrNordic_g11.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */),"vrNordic_g11.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4944]] /* vrNordic_g11.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5686;
}

/*
equation index: 5687
type: SIMPLE_ASSIGN
$START.vrNordic_g11.leadLag.y = vrNordic_g11.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5687};
  ((modelica_real *)((data->modelData->realVarsData[3698] /* vrNordic_g11.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4933]] /* vrNordic_g11.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3698] /* vrNordic_g11.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3698].info /* vrNordic_g11.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */));
  threadData->lastEquationSolved = 5687;
}

/*
equation index: 5688
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.X0[1] = if vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag.u_start / vrNordic_g11.leadLag.a_end else if vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4932]] /* vrNordic_g11.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4942]] /* vrNordic_g11.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */),"vrNordic_g11.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[592]] /* vrNordic_g11.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4943]] /* vrNordic_g11.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5688;
}

/*
equation index: 5689
type: SIMPLE_ASSIGN
$START.vrNordic_g11.leadLag.x_scaled[1] = vrNordic_g11.leadLag.X0[1] * vrNordic_g11.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5689};
  ((modelica_real *)((data->modelData->realVarsData[261] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4932]] /* vrNordic_g11.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[261] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[261].info /* vrNordic_g11.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5689;
}

/*
equation index: 5690
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.x_scaled[1] = $START.vrNordic_g11.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[261] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5690;
}

/*
equation index: 5691
type: SIMPLE_ASSIGN
$START.vrNordic_g11.leadLag.x[1] = vrNordic_g11.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5691};
  ((modelica_real *)((data->modelData->realVarsData[3697] /* vrNordic_g11.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4932]] /* vrNordic_g11.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3697] /* vrNordic_g11.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3697].info /* vrNordic_g11.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5691;
}

/*
equation index: 5692
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.x[1] = vrNordic_g11.leadLag.x_scaled[1] / vrNordic_g11.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */),"vrNordic_g11.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5692;
}

/*
equation index: 5693
type: SIMPLE_ASSIGN
vrNordic_g11.limIntegrator.y_start = vrNordic_g11.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4974]] /* vrNordic_g11.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4910]] /* vrNordic_g11.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5693;
}

/*
equation index: 5694
type: SIMPLE_ASSIGN
goverNordic_g10.Pm0Pu = g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5694;
}

/*
equation index: 5695
type: SIMPLE_ASSIGN
$START.goverNordic_g10.PGenPu = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5695};
  ((modelica_real *)((data->modelData->realVarsData[2094] /* goverNordic_g10.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2094] /* goverNordic_g10.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2094].info /* goverNordic_g10.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */));
  threadData->lastEquationSolved = 5695;
}

/*
equation index: 5696
type: SIMPLE_ASSIGN
goverNordic_g10.PGenPu = if g10.running.value then (-g10.terminal.V.re) * g10.terminal.i.re - g10.terminal.V.im * g10.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5696;
}

/*
equation index: 5697
type: SIMPLE_ASSIGN
goverNordic_g10.perUnitP.y = goverNordic_g10.perUnitP.k * goverNordic_g10.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* goverNordic_g10.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2610]] /* goverNordic_g10.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */));
  threadData->lastEquationSolved = 5697;
}

/*
equation index: 5698
type: SIMPLE_ASSIGN
g10.PGen = if g10.running.value then 100.0 * goverNordic_g10.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1431]] /* g10.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5698;
}

/*
equation index: 5699
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.Y0 = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2599]] /* goverNordic_g10.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5699;
}

/*
equation index: 5700
type: SIMPLE_ASSIGN
$START.goverNordic_g10.limRateLimFirstOrder.limIntegrator.y = goverNordic_g10.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5700};
  ((modelica_real *)((data->modelData->realVarsData[158] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2599]] /* goverNordic_g10.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[158] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[158].info /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5700;
}

/*
equation index: 5701
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g10.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2606]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2599]] /* goverNordic_g10.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5701;
}

/*
equation index: 5702
type: SIMPLE_ASSIGN
goverNordic_g10.firstOrder1.y_start = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2589]] /* goverNordic_g10.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5702;
}

/*
equation index: 5703
type: SIMPLE_ASSIGN
$START.goverNordic_g10.firstOrder1.y = goverNordic_g10.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5703};
  ((modelica_real *)((data->modelData->realVarsData[156] /* goverNordic_g10.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2589]] /* goverNordic_g10.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[156] /* goverNordic_g10.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[156].info /* goverNordic_g10.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5703;
}

/*
equation index: 5704
type: SIMPLE_ASSIGN
goverNordic_g10.firstOrder1.y = $START.goverNordic_g10.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[156] /* goverNordic_g10.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5704;
}

/*
equation index: 5705
type: SIMPLE_ASSIGN
$DER.goverNordic_g10.firstOrder1.y = (goverNordic_g10.firstOrder1.k * goverNordic_g10.perUnitP.y - goverNordic_g10.firstOrder1.y) / goverNordic_g10.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* der(goverNordic_g10.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2588]] /* goverNordic_g10.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* goverNordic_g10.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2587]] /* goverNordic_g10.firstOrder1.T PARAM */),"goverNordic_g10.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5705;
}

/*
equation index: 5706
type: SIMPLE_ASSIGN
goverNordic_g10.const.k = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* goverNordic_g10.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5706;
}

/*
equation index: 5707
type: SIMPLE_ASSIGN
goverNordic_g10.dP.y = goverNordic_g10.const.k - goverNordic_g10.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2098]] /* goverNordic_g10.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* goverNordic_g10.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5707;
}

/*
equation index: 5708
type: SIMPLE_ASSIGN
goverNordic_g10.dOmegaPlusDroop.y = goverNordic_g10.dOmegaPlusDroop.k1 * goverNordic_g10.dOmega.y + goverNordic_g10.dOmegaPlusDroop.k2 * goverNordic_g10.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* goverNordic_g10.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* goverNordic_g10.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2586]] /* goverNordic_g10.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2098]] /* goverNordic_g10.dP.y variable */));
  threadData->lastEquationSolved = 5708;
}

/*
equation index: 5709
type: SIMPLE_ASSIGN
goverNordic_g10.govKi.y = goverNordic_g10.govKi.k * goverNordic_g10.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* goverNordic_g10.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* goverNordic_g10.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5709;
}

/*
equation index: 5710
type: SIMPLE_ASSIGN
$DER.goverNordic_g10.govInt.y = goverNordic_g10.govInt.k * goverNordic_g10.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* der(goverNordic_g10.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* goverNordic_g10.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* goverNordic_g10.govKi.y variable */));
  threadData->lastEquationSolved = 5710;
}

/*
equation index: 5711
type: SIMPLE_ASSIGN
goverNordic_g10.govKp.y = goverNordic_g10.govKp.k * goverNordic_g10.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2102]] /* goverNordic_g10.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* goverNordic_g10.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5711;
}

/*
equation index: 5712
type: SIMPLE_ASSIGN
goverNordic_g10.govInt.y_start = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* goverNordic_g10.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5712;
}

/*
equation index: 5713
type: SIMPLE_ASSIGN
$START.goverNordic_g10.govInt.y = goverNordic_g10.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5713};
  ((modelica_real *)((data->modelData->realVarsData[157] /* goverNordic_g10.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* goverNordic_g10.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* goverNordic_g10.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[157] /* goverNordic_g10.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[157].info /* goverNordic_g10.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* goverNordic_g10.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5713;
}

/*
equation index: 5714
type: SIMPLE_ASSIGN
goverNordic_g10.waterFlow.y_start = goverNordic_g10.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* goverNordic_g10.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* goverNordic_g10.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5714;
}

/*
equation index: 5715
type: SIMPLE_ASSIGN
$START.goverNordic_g10.waterFlow.y = goverNordic_g10.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5715};
  ((modelica_real *)((data->modelData->realVarsData[159] /* goverNordic_g10.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* goverNordic_g10.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[159] /* goverNordic_g10.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[159].info /* goverNordic_g10.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5715;
}

/*
equation index: 5716
type: SIMPLE_ASSIGN
vrNordic_g10.Us0Pu = g10.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4838]] /* vrNordic_g10.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* g10.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5716;
}

/*
equation index: 5717
type: SIMPLE_ASSIGN
$START.vrNordic_g10.UsPu = vrNordic_g10.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5717};
  ((modelica_real *)((data->modelData->realVarsData[3663] /* vrNordic_g10.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4838]] /* vrNordic_g10.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3663] /* vrNordic_g10.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3663].info /* vrNordic_g10.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */));
  threadData->lastEquationSolved = 5717;
}

/*
equation index: 5718
type: SIMPLE_ASSIGN
vrNordic_g10.UsPu = if g10.running.value then if g10.uStatorPu.re == 0.0 and g10.uStatorPu.im == 0.0 then 0.0 else (g10.uStatorPu.re ^ 2.0 + g10.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5718};
  modelica_real tmp1587;
  modelica_real tmp1588;
  modelica_real tmp1589;
  modelica_boolean tmp1590;
  modelica_real tmp1591;
  modelica_boolean tmp1592;
  modelica_real tmp1593;
  tmp1592 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1592)
  {
    tmp1590 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) == 0.0));
    if(tmp1590)
    {
      tmp1591 = 0.0;
    }
    else
    {
      tmp1587 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */);
      tmp1588 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */);
      tmp1589 = (tmp1587 * tmp1587) + (tmp1588 * tmp1588);
      if(tmp1589 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1589, 0.5);
      }
      tmp1591 = sqrt(tmp1589);
    }
    tmp1593 = tmp1591;
  }
  else
  {
    tmp1593 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */) = tmp1593;
  threadData->lastEquationSolved = 5718;
}

/*
equation index: 5719
type: SIMPLE_ASSIGN
vrNordic_g10.Ir0Pu = g10.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4833]] /* vrNordic_g10.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* g10.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5719;
}

/*
equation index: 5720
type: SIMPLE_ASSIGN
$START.vrNordic_g10.IrPu = vrNordic_g10.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5720};
  ((modelica_real *)((data->modelData->realVarsData[3662] /* vrNordic_g10.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4833]] /* vrNordic_g10.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3662] /* vrNordic_g10.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3662].info /* vrNordic_g10.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */));
  threadData->lastEquationSolved = 5720;
}

/*
equation index: 5721
type: SIMPLE_ASSIGN
vrNordic_g10.IrPu = if g10.running.value then g10.RfPPu * g10.ifPu / (g10.rTfoPu * g10.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* g10.Kuf PARAM */)),"g10.rTfoPu * g10.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5721;
}

/*
equation index: 5722
type: SIMPLE_ASSIGN
vrNordic_g10.dIf.y = vrNordic_g10.IrPu - vrNordic_g10.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4844]] /* vrNordic_g10.const2.k PARAM */);
  threadData->lastEquationSolved = 5722;
}

/*
equation index: 5723
type: SIMPLE_ASSIGN
vrNordic_g10.overExcitationLimitation.y = if vrNordic_g10.dIf.y < -0.1 then -1.0 else if vrNordic_g10.dIf.y < 0.0 then 0.0 else if vrNordic_g10.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g10.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5723};
  modelica_boolean tmp1594;
  modelica_boolean tmp1595;
  modelica_boolean tmp1596;
  modelica_boolean tmp1597;
  modelica_real tmp1598;
  modelica_boolean tmp1599;
  modelica_real tmp1600;
  tmp1594 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */),-0.1);
  tmp1599 = (modelica_boolean)tmp1594;
  if(tmp1599)
  {
    tmp1600 = -1.0;
  }
  else
  {
    tmp1595 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */),0.0);
    tmp1597 = (modelica_boolean)tmp1595;
    if(tmp1597)
    {
      tmp1598 = 0.0;
    }
    else
    {
      tmp1596 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4898]] /* vrNordic_g10.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1598 = (tmp1596?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */));
    }
    tmp1600 = tmp1598;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */) = tmp1600;
  threadData->lastEquationSolved = 5723;
}

/*
equation index: 5724
type: SIMPLE_ASSIGN
vrNordic_g10.gain1.y = vrNordic_g10.gain1.k * vrNordic_g10.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* vrNordic_g10.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4850]] /* vrNordic_g10.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */));
  threadData->lastEquationSolved = 5724;
}

/*
equation index: 5725
type: SIMPLE_ASSIGN
vrNordic_g10.Efd0Pu = g10.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4831]] /* vrNordic_g10.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* g10.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5725;
}

/*
equation index: 5726
type: SIMPLE_ASSIGN
$START.vrNordic_g10.limIntegrator.y = vrNordic_g10.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5726};
  ((modelica_real *)((data->modelData->realVarsData[258] /* vrNordic_g10.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4831]] /* vrNordic_g10.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[258] /* vrNordic_g10.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[258].info /* vrNordic_g10.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5726;
}

/*
equation index: 5727
type: SIMPLE_ASSIGN
vrNordic_g10.UsRef0Pu = vrNordic_g10.Efd0Pu / vrNordic_g10.KTgr + vrNordic_g10.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4839]] /* vrNordic_g10.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4831]] /* vrNordic_g10.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4836]] /* vrNordic_g10.KTgr PARAM */),"vrNordic_g10.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4838]] /* vrNordic_g10.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5727;
}

/*
equation index: 5728
type: SIMPLE_ASSIGN
vrNordic_g10.const1.k = vrNordic_g10.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4843]] /* vrNordic_g10.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4839]] /* vrNordic_g10.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5728;
}

/*
equation index: 5729
type: SIMPLE_ASSIGN
vrNordic_g10.dU.y = vrNordic_g10.const1.k - vrNordic_g10.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* vrNordic_g10.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4843]] /* vrNordic_g10.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */);
  threadData->lastEquationSolved = 5729;
}

/*
equation index: 5730
type: SIMPLE_ASSIGN
vrNordic_g10.add.y = vrNordic_g10.add.k1 * vrNordic_g10.dU.y + vrNordic_g10.add.k2 * vrNordic_g10.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4840]] /* vrNordic_g10.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* vrNordic_g10.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4841]] /* vrNordic_g10.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3681]] /* vrNordic_g10.limiter.y variable */));
  threadData->lastEquationSolved = 5730;
}

/*
equation index: 5731
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.u_start = vrNordic_g10.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4863]] /* vrNordic_g10.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4831]] /* vrNordic_g10.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5731;
}

/*
equation index: 5732
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.Y0 = if vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag.u_start * vrNordic_g10.leadLag.b[2] / vrNordic_g10.leadLag.a_end else if vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4854]] /* vrNordic_g10.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4863]] /* vrNordic_g10.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4859]] /* vrNordic_g10.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */),"vrNordic_g10.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4865]] /* vrNordic_g10.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5732;
}

/*
equation index: 5733
type: SIMPLE_ASSIGN
$START.vrNordic_g10.leadLag.y = vrNordic_g10.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5733};
  ((modelica_real *)((data->modelData->realVarsData[3674] /* vrNordic_g10.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4854]] /* vrNordic_g10.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3674] /* vrNordic_g10.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3674].info /* vrNordic_g10.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */));
  threadData->lastEquationSolved = 5733;
}

/*
equation index: 5734
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.X0[1] = if vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag.u_start / vrNordic_g10.leadLag.a_end else if vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4853]] /* vrNordic_g10.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4863]] /* vrNordic_g10.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */),"vrNordic_g10.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[576]] /* vrNordic_g10.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4864]] /* vrNordic_g10.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5734;
}

/*
equation index: 5735
type: SIMPLE_ASSIGN
$START.vrNordic_g10.leadLag.x_scaled[1] = vrNordic_g10.leadLag.X0[1] * vrNordic_g10.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5735};
  ((modelica_real *)((data->modelData->realVarsData[255] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4853]] /* vrNordic_g10.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[255] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[255].info /* vrNordic_g10.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5735;
}

/*
equation index: 5736
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.x_scaled[1] = $START.vrNordic_g10.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[255] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5736;
}

/*
equation index: 5737
type: SIMPLE_ASSIGN
$START.vrNordic_g10.leadLag.x[1] = vrNordic_g10.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5737};
  ((modelica_real *)((data->modelData->realVarsData[3673] /* vrNordic_g10.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4853]] /* vrNordic_g10.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3673] /* vrNordic_g10.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3673].info /* vrNordic_g10.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5737;
}

/*
equation index: 5738
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.x[1] = vrNordic_g10.leadLag.x_scaled[1] / vrNordic_g10.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */),"vrNordic_g10.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5738;
}

/*
equation index: 5739
type: SIMPLE_ASSIGN
vrNordic_g10.limIntegrator.y_start = vrNordic_g10.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5739};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4895]] /* vrNordic_g10.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4831]] /* vrNordic_g10.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5739;
}

/*
equation index: 5740
type: SIMPLE_ASSIGN
goverNordic_g09.Pm0Pu = g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5740;
}

/*
equation index: 5741
type: SIMPLE_ASSIGN
$START.goverNordic_g09.PGenPu = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5741};
  ((modelica_real *)((data->modelData->realVarsData[2076] /* goverNordic_g09.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2076] /* goverNordic_g09.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2076].info /* goverNordic_g09.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */));
  threadData->lastEquationSolved = 5741;
}

/*
equation index: 5742
type: SIMPLE_ASSIGN
goverNordic_g09.PGenPu = if g09.running.value then (-g09.terminal.V.re) * g09.terminal.i.re - g09.terminal.V.im * g09.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5742;
}

/*
equation index: 5743
type: SIMPLE_ASSIGN
goverNordic_g09.perUnitP.y = goverNordic_g09.perUnitP.k * goverNordic_g09.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2092]] /* goverNordic_g09.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2574]] /* goverNordic_g09.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */));
  threadData->lastEquationSolved = 5743;
}

/*
equation index: 5744
type: SIMPLE_ASSIGN
g09.PGen = if g09.running.value then 100.0 * goverNordic_g09.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1385]] /* g09.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5744;
}

/*
equation index: 5745
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.Y0 = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2563]] /* goverNordic_g09.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5745;
}

/*
equation index: 5746
type: SIMPLE_ASSIGN
$START.goverNordic_g09.limRateLimFirstOrder.limIntegrator.y = goverNordic_g09.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5746};
  ((modelica_real *)((data->modelData->realVarsData[154] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2563]] /* goverNordic_g09.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[154] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[154].info /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5746;
}

/*
equation index: 5747
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g09.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2570]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2563]] /* goverNordic_g09.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5747;
}

/*
equation index: 5748
type: SIMPLE_ASSIGN
goverNordic_g09.firstOrder1.y_start = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* goverNordic_g09.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5748;
}

/*
equation index: 5749
type: SIMPLE_ASSIGN
$START.goverNordic_g09.firstOrder1.y = goverNordic_g09.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5749};
  ((modelica_real *)((data->modelData->realVarsData[152] /* goverNordic_g09.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* goverNordic_g09.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[152] /* goverNordic_g09.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[152].info /* goverNordic_g09.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5749;
}

/*
equation index: 5750
type: SIMPLE_ASSIGN
goverNordic_g09.firstOrder1.y = $START.goverNordic_g09.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[152] /* goverNordic_g09.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5750;
}

/*
equation index: 5751
type: SIMPLE_ASSIGN
$DER.goverNordic_g09.firstOrder1.y = (goverNordic_g09.firstOrder1.k * goverNordic_g09.perUnitP.y - goverNordic_g09.firstOrder1.y) / goverNordic_g09.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* der(goverNordic_g09.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* goverNordic_g09.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2092]] /* goverNordic_g09.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2551]] /* goverNordic_g09.firstOrder1.T PARAM */),"goverNordic_g09.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5751;
}

/*
equation index: 5752
type: SIMPLE_ASSIGN
goverNordic_g09.const.k = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* goverNordic_g09.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5752;
}

/*
equation index: 5753
type: SIMPLE_ASSIGN
goverNordic_g09.dP.y = goverNordic_g09.const.k - goverNordic_g09.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2080]] /* goverNordic_g09.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* goverNordic_g09.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5753;
}

/*
equation index: 5754
type: SIMPLE_ASSIGN
goverNordic_g09.dOmegaPlusDroop.y = goverNordic_g09.dOmegaPlusDroop.k1 * goverNordic_g09.dOmega.y + goverNordic_g09.dOmegaPlusDroop.k2 * goverNordic_g09.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* goverNordic_g09.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2078]] /* goverNordic_g09.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* goverNordic_g09.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2080]] /* goverNordic_g09.dP.y variable */));
  threadData->lastEquationSolved = 5754;
}

/*
equation index: 5755
type: SIMPLE_ASSIGN
goverNordic_g09.govKi.y = goverNordic_g09.govKi.k * goverNordic_g09.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2083]] /* goverNordic_g09.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* goverNordic_g09.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5755;
}

/*
equation index: 5756
type: SIMPLE_ASSIGN
$DER.goverNordic_g09.govInt.y = goverNordic_g09.govInt.k * goverNordic_g09.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* der(goverNordic_g09.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2554]] /* goverNordic_g09.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2083]] /* goverNordic_g09.govKi.y variable */));
  threadData->lastEquationSolved = 5756;
}

/*
equation index: 5757
type: SIMPLE_ASSIGN
goverNordic_g09.govKp.y = goverNordic_g09.govKp.k * goverNordic_g09.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2084]] /* goverNordic_g09.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* goverNordic_g09.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5757;
}

/*
equation index: 5758
type: SIMPLE_ASSIGN
goverNordic_g09.govInt.y_start = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* goverNordic_g09.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5758;
}

/*
equation index: 5759
type: SIMPLE_ASSIGN
$START.goverNordic_g09.govInt.y = goverNordic_g09.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5759};
  ((modelica_real *)((data->modelData->realVarsData[153] /* goverNordic_g09.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* goverNordic_g09.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* goverNordic_g09.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[153] /* goverNordic_g09.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[153].info /* goverNordic_g09.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* goverNordic_g09.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5759;
}

/*
equation index: 5760
type: SIMPLE_ASSIGN
goverNordic_g09.waterFlow.y_start = goverNordic_g09.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2576]] /* goverNordic_g09.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* goverNordic_g09.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5760;
}

/*
equation index: 5761
type: SIMPLE_ASSIGN
$START.goverNordic_g09.waterFlow.y = goverNordic_g09.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5761};
  ((modelica_real *)((data->modelData->realVarsData[155] /* goverNordic_g09.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2576]] /* goverNordic_g09.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[155] /* goverNordic_g09.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[155].info /* goverNordic_g09.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5761;
}

/*
equation index: 5762
type: SIMPLE_ASSIGN
vrNordic_g09.Us0Pu = g09.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5762};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4759]] /* vrNordic_g09.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* g09.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5762;
}

/*
equation index: 5763
type: SIMPLE_ASSIGN
$START.vrNordic_g09.UsPu = vrNordic_g09.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5763};
  ((modelica_real *)((data->modelData->realVarsData[3639] /* vrNordic_g09.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4759]] /* vrNordic_g09.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3639] /* vrNordic_g09.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3639].info /* vrNordic_g09.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */));
  threadData->lastEquationSolved = 5763;
}

/*
equation index: 5764
type: SIMPLE_ASSIGN
vrNordic_g09.UsPu = if g09.running.value then if g09.uStatorPu.re == 0.0 and g09.uStatorPu.im == 0.0 then 0.0 else (g09.uStatorPu.re ^ 2.0 + g09.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5764};
  modelica_real tmp1601;
  modelica_real tmp1602;
  modelica_real tmp1603;
  modelica_boolean tmp1604;
  modelica_real tmp1605;
  modelica_boolean tmp1606;
  modelica_real tmp1607;
  tmp1606 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1606)
  {
    tmp1604 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) == 0.0));
    if(tmp1604)
    {
      tmp1605 = 0.0;
    }
    else
    {
      tmp1601 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */);
      tmp1602 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */);
      tmp1603 = (tmp1601 * tmp1601) + (tmp1602 * tmp1602);
      if(tmp1603 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1603, 0.5);
      }
      tmp1605 = sqrt(tmp1603);
    }
    tmp1607 = tmp1605;
  }
  else
  {
    tmp1607 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */) = tmp1607;
  threadData->lastEquationSolved = 5764;
}

/*
equation index: 5765
type: SIMPLE_ASSIGN
vrNordic_g09.Ir0Pu = g09.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4754]] /* vrNordic_g09.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* g09.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5765;
}

/*
equation index: 5766
type: SIMPLE_ASSIGN
$START.vrNordic_g09.IrPu = vrNordic_g09.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5766};
  ((modelica_real *)((data->modelData->realVarsData[3638] /* vrNordic_g09.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4754]] /* vrNordic_g09.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3638] /* vrNordic_g09.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3638].info /* vrNordic_g09.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */));
  threadData->lastEquationSolved = 5766;
}

/*
equation index: 5767
type: SIMPLE_ASSIGN
vrNordic_g09.IrPu = if g09.running.value then g09.RfPPu * g09.ifPu / (g09.rTfoPu * g09.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* g09.Kuf PARAM */)),"g09.rTfoPu * g09.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5767;
}

/*
equation index: 5768
type: SIMPLE_ASSIGN
vrNordic_g09.dIf.y = vrNordic_g09.IrPu - vrNordic_g09.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4765]] /* vrNordic_g09.const2.k PARAM */);
  threadData->lastEquationSolved = 5768;
}

/*
equation index: 5769
type: SIMPLE_ASSIGN
vrNordic_g09.overExcitationLimitation.y = if vrNordic_g09.dIf.y < -0.1 then -1.0 else if vrNordic_g09.dIf.y < 0.0 then 0.0 else if vrNordic_g09.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g09.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5769};
  modelica_boolean tmp1608;
  modelica_boolean tmp1609;
  modelica_boolean tmp1610;
  modelica_boolean tmp1611;
  modelica_real tmp1612;
  modelica_boolean tmp1613;
  modelica_real tmp1614;
  tmp1608 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */),-0.1);
  tmp1613 = (modelica_boolean)tmp1608;
  if(tmp1613)
  {
    tmp1614 = -1.0;
  }
  else
  {
    tmp1609 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */),0.0);
    tmp1611 = (modelica_boolean)tmp1609;
    if(tmp1611)
    {
      tmp1612 = 0.0;
    }
    else
    {
      tmp1610 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4819]] /* vrNordic_g09.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1612 = (tmp1610?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */));
    }
    tmp1614 = tmp1612;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */) = tmp1614;
  threadData->lastEquationSolved = 5769;
}

/*
equation index: 5770
type: SIMPLE_ASSIGN
vrNordic_g09.gain1.y = vrNordic_g09.gain1.k * vrNordic_g09.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3647]] /* vrNordic_g09.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4771]] /* vrNordic_g09.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */));
  threadData->lastEquationSolved = 5770;
}

/*
equation index: 5771
type: SIMPLE_ASSIGN
vrNordic_g09.Efd0Pu = g09.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4752]] /* vrNordic_g09.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* g09.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5771;
}

/*
equation index: 5772
type: SIMPLE_ASSIGN
$START.vrNordic_g09.limIntegrator.y = vrNordic_g09.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5772};
  ((modelica_real *)((data->modelData->realVarsData[252] /* vrNordic_g09.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4752]] /* vrNordic_g09.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[252] /* vrNordic_g09.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[252].info /* vrNordic_g09.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5772;
}

/*
equation index: 5773
type: SIMPLE_ASSIGN
vrNordic_g09.UsRef0Pu = vrNordic_g09.Efd0Pu / vrNordic_g09.KTgr + vrNordic_g09.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4760]] /* vrNordic_g09.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4752]] /* vrNordic_g09.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4757]] /* vrNordic_g09.KTgr PARAM */),"vrNordic_g09.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4759]] /* vrNordic_g09.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5773;
}

/*
equation index: 5774
type: SIMPLE_ASSIGN
vrNordic_g09.const1.k = vrNordic_g09.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4764]] /* vrNordic_g09.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4760]] /* vrNordic_g09.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5774;
}

/*
equation index: 5775
type: SIMPLE_ASSIGN
vrNordic_g09.dU.y = vrNordic_g09.const1.k - vrNordic_g09.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3643]] /* vrNordic_g09.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4764]] /* vrNordic_g09.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */);
  threadData->lastEquationSolved = 5775;
}

/*
equation index: 5776
type: SIMPLE_ASSIGN
vrNordic_g09.add.y = vrNordic_g09.add.k1 * vrNordic_g09.dU.y + vrNordic_g09.add.k2 * vrNordic_g09.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4761]] /* vrNordic_g09.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3643]] /* vrNordic_g09.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4762]] /* vrNordic_g09.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* vrNordic_g09.limiter.y variable */));
  threadData->lastEquationSolved = 5776;
}

/*
equation index: 5777
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.u_start = vrNordic_g09.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4784]] /* vrNordic_g09.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4752]] /* vrNordic_g09.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5777;
}

/*
equation index: 5778
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.Y0 = if vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag.u_start * vrNordic_g09.leadLag.b[2] / vrNordic_g09.leadLag.a_end else if vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4775]] /* vrNordic_g09.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4784]] /* vrNordic_g09.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4780]] /* vrNordic_g09.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */),"vrNordic_g09.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4786]] /* vrNordic_g09.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5778;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_7(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_5321,
    MyNordic_initialized_TestCase_initialized_eqFunction_5322,
    MyNordic_initialized_TestCase_initialized_eqFunction_5323,
    MyNordic_initialized_TestCase_initialized_eqFunction_5324,
    MyNordic_initialized_TestCase_initialized_eqFunction_5325,
    MyNordic_initialized_TestCase_initialized_eqFunction_5326,
    MyNordic_initialized_TestCase_initialized_eqFunction_5327,
    MyNordic_initialized_TestCase_initialized_eqFunction_5328,
    MyNordic_initialized_TestCase_initialized_eqFunction_5329,
    MyNordic_initialized_TestCase_initialized_eqFunction_5330,
    MyNordic_initialized_TestCase_initialized_eqFunction_5331,
    MyNordic_initialized_TestCase_initialized_eqFunction_5332,
    MyNordic_initialized_TestCase_initialized_eqFunction_5333,
    MyNordic_initialized_TestCase_initialized_eqFunction_5334,
    MyNordic_initialized_TestCase_initialized_eqFunction_5335,
    MyNordic_initialized_TestCase_initialized_eqFunction_5336,
    MyNordic_initialized_TestCase_initialized_eqFunction_5337,
    MyNordic_initialized_TestCase_initialized_eqFunction_5338,
    MyNordic_initialized_TestCase_initialized_eqFunction_5339,
    MyNordic_initialized_TestCase_initialized_eqFunction_5340,
    MyNordic_initialized_TestCase_initialized_eqFunction_5341,
    MyNordic_initialized_TestCase_initialized_eqFunction_5342,
    MyNordic_initialized_TestCase_initialized_eqFunction_5343,
    MyNordic_initialized_TestCase_initialized_eqFunction_5344,
    MyNordic_initialized_TestCase_initialized_eqFunction_5345,
    MyNordic_initialized_TestCase_initialized_eqFunction_5346,
    MyNordic_initialized_TestCase_initialized_eqFunction_5347,
    MyNordic_initialized_TestCase_initialized_eqFunction_5348,
    MyNordic_initialized_TestCase_initialized_eqFunction_5349,
    MyNordic_initialized_TestCase_initialized_eqFunction_5350,
    MyNordic_initialized_TestCase_initialized_eqFunction_5351,
    MyNordic_initialized_TestCase_initialized_eqFunction_5352,
    MyNordic_initialized_TestCase_initialized_eqFunction_5353,
    MyNordic_initialized_TestCase_initialized_eqFunction_5354,
    MyNordic_initialized_TestCase_initialized_eqFunction_5355,
    MyNordic_initialized_TestCase_initialized_eqFunction_5356,
    MyNordic_initialized_TestCase_initialized_eqFunction_5357,
    MyNordic_initialized_TestCase_initialized_eqFunction_5358,
    MyNordic_initialized_TestCase_initialized_eqFunction_5359,
    MyNordic_initialized_TestCase_initialized_eqFunction_5360,
    MyNordic_initialized_TestCase_initialized_eqFunction_5361,
    MyNordic_initialized_TestCase_initialized_eqFunction_5362,
    MyNordic_initialized_TestCase_initialized_eqFunction_5363,
    MyNordic_initialized_TestCase_initialized_eqFunction_5364,
    MyNordic_initialized_TestCase_initialized_eqFunction_5365,
    MyNordic_initialized_TestCase_initialized_eqFunction_5366,
    MyNordic_initialized_TestCase_initialized_eqFunction_5367,
    MyNordic_initialized_TestCase_initialized_eqFunction_5368,
    MyNordic_initialized_TestCase_initialized_eqFunction_5369,
    MyNordic_initialized_TestCase_initialized_eqFunction_5370,
    MyNordic_initialized_TestCase_initialized_eqFunction_5371,
    MyNordic_initialized_TestCase_initialized_eqFunction_5372,
    MyNordic_initialized_TestCase_initialized_eqFunction_5373,
    MyNordic_initialized_TestCase_initialized_eqFunction_5374,
    MyNordic_initialized_TestCase_initialized_eqFunction_5375,
    MyNordic_initialized_TestCase_initialized_eqFunction_5376,
    MyNordic_initialized_TestCase_initialized_eqFunction_5377,
    MyNordic_initialized_TestCase_initialized_eqFunction_5378,
    MyNordic_initialized_TestCase_initialized_eqFunction_5379,
    MyNordic_initialized_TestCase_initialized_eqFunction_5380,
    MyNordic_initialized_TestCase_initialized_eqFunction_5381,
    MyNordic_initialized_TestCase_initialized_eqFunction_5382,
    MyNordic_initialized_TestCase_initialized_eqFunction_5383,
    MyNordic_initialized_TestCase_initialized_eqFunction_5384,
    MyNordic_initialized_TestCase_initialized_eqFunction_5385,
    MyNordic_initialized_TestCase_initialized_eqFunction_5386,
    MyNordic_initialized_TestCase_initialized_eqFunction_5387,
    MyNordic_initialized_TestCase_initialized_eqFunction_5388,
    MyNordic_initialized_TestCase_initialized_eqFunction_5389,
    MyNordic_initialized_TestCase_initialized_eqFunction_5390,
    MyNordic_initialized_TestCase_initialized_eqFunction_5391,
    MyNordic_initialized_TestCase_initialized_eqFunction_5392,
    MyNordic_initialized_TestCase_initialized_eqFunction_5393,
    MyNordic_initialized_TestCase_initialized_eqFunction_5394,
    MyNordic_initialized_TestCase_initialized_eqFunction_5395,
    MyNordic_initialized_TestCase_initialized_eqFunction_5396,
    MyNordic_initialized_TestCase_initialized_eqFunction_5397,
    MyNordic_initialized_TestCase_initialized_eqFunction_5398,
    MyNordic_initialized_TestCase_initialized_eqFunction_5399,
    MyNordic_initialized_TestCase_initialized_eqFunction_5400,
    MyNordic_initialized_TestCase_initialized_eqFunction_5401,
    MyNordic_initialized_TestCase_initialized_eqFunction_5402,
    MyNordic_initialized_TestCase_initialized_eqFunction_5403,
    MyNordic_initialized_TestCase_initialized_eqFunction_5404,
    MyNordic_initialized_TestCase_initialized_eqFunction_5405,
    MyNordic_initialized_TestCase_initialized_eqFunction_5406,
    MyNordic_initialized_TestCase_initialized_eqFunction_5407,
    MyNordic_initialized_TestCase_initialized_eqFunction_5408,
    MyNordic_initialized_TestCase_initialized_eqFunction_5409,
    MyNordic_initialized_TestCase_initialized_eqFunction_5410,
    MyNordic_initialized_TestCase_initialized_eqFunction_5411,
    MyNordic_initialized_TestCase_initialized_eqFunction_5412,
    MyNordic_initialized_TestCase_initialized_eqFunction_5413,
    MyNordic_initialized_TestCase_initialized_eqFunction_5414,
    MyNordic_initialized_TestCase_initialized_eqFunction_5415,
    MyNordic_initialized_TestCase_initialized_eqFunction_5416,
    MyNordic_initialized_TestCase_initialized_eqFunction_5417,
    MyNordic_initialized_TestCase_initialized_eqFunction_5418,
    MyNordic_initialized_TestCase_initialized_eqFunction_5419,
    MyNordic_initialized_TestCase_initialized_eqFunction_5420,
    MyNordic_initialized_TestCase_initialized_eqFunction_5421,
    MyNordic_initialized_TestCase_initialized_eqFunction_5422,
    MyNordic_initialized_TestCase_initialized_eqFunction_5423,
    MyNordic_initialized_TestCase_initialized_eqFunction_5424,
    MyNordic_initialized_TestCase_initialized_eqFunction_5425,
    MyNordic_initialized_TestCase_initialized_eqFunction_5426,
    MyNordic_initialized_TestCase_initialized_eqFunction_5427,
    MyNordic_initialized_TestCase_initialized_eqFunction_5428,
    MyNordic_initialized_TestCase_initialized_eqFunction_5429,
    MyNordic_initialized_TestCase_initialized_eqFunction_5430,
    MyNordic_initialized_TestCase_initialized_eqFunction_5431,
    MyNordic_initialized_TestCase_initialized_eqFunction_5432,
    MyNordic_initialized_TestCase_initialized_eqFunction_5433,
    MyNordic_initialized_TestCase_initialized_eqFunction_5434,
    MyNordic_initialized_TestCase_initialized_eqFunction_5435,
    MyNordic_initialized_TestCase_initialized_eqFunction_5436,
    MyNordic_initialized_TestCase_initialized_eqFunction_5437,
    MyNordic_initialized_TestCase_initialized_eqFunction_5438,
    MyNordic_initialized_TestCase_initialized_eqFunction_5439,
    MyNordic_initialized_TestCase_initialized_eqFunction_5440,
    MyNordic_initialized_TestCase_initialized_eqFunction_5441,
    MyNordic_initialized_TestCase_initialized_eqFunction_5442,
    MyNordic_initialized_TestCase_initialized_eqFunction_5443,
    MyNordic_initialized_TestCase_initialized_eqFunction_5444,
    MyNordic_initialized_TestCase_initialized_eqFunction_5445,
    MyNordic_initialized_TestCase_initialized_eqFunction_5446,
    MyNordic_initialized_TestCase_initialized_eqFunction_5447,
    MyNordic_initialized_TestCase_initialized_eqFunction_5448,
    MyNordic_initialized_TestCase_initialized_eqFunction_5449,
    MyNordic_initialized_TestCase_initialized_eqFunction_5450,
    MyNordic_initialized_TestCase_initialized_eqFunction_5451,
    MyNordic_initialized_TestCase_initialized_eqFunction_5452,
    MyNordic_initialized_TestCase_initialized_eqFunction_5453,
    MyNordic_initialized_TestCase_initialized_eqFunction_5454,
    MyNordic_initialized_TestCase_initialized_eqFunction_5455,
    MyNordic_initialized_TestCase_initialized_eqFunction_5456,
    MyNordic_initialized_TestCase_initialized_eqFunction_5457,
    MyNordic_initialized_TestCase_initialized_eqFunction_5458,
    MyNordic_initialized_TestCase_initialized_eqFunction_5459,
    MyNordic_initialized_TestCase_initialized_eqFunction_5460,
    MyNordic_initialized_TestCase_initialized_eqFunction_5461,
    MyNordic_initialized_TestCase_initialized_eqFunction_5462,
    MyNordic_initialized_TestCase_initialized_eqFunction_5463,
    MyNordic_initialized_TestCase_initialized_eqFunction_5464,
    MyNordic_initialized_TestCase_initialized_eqFunction_5465,
    MyNordic_initialized_TestCase_initialized_eqFunction_5466,
    MyNordic_initialized_TestCase_initialized_eqFunction_5467,
    MyNordic_initialized_TestCase_initialized_eqFunction_5468,
    MyNordic_initialized_TestCase_initialized_eqFunction_5469,
    MyNordic_initialized_TestCase_initialized_eqFunction_5470,
    MyNordic_initialized_TestCase_initialized_eqFunction_5471,
    MyNordic_initialized_TestCase_initialized_eqFunction_5472,
    MyNordic_initialized_TestCase_initialized_eqFunction_5473,
    MyNordic_initialized_TestCase_initialized_eqFunction_5474,
    MyNordic_initialized_TestCase_initialized_eqFunction_5475,
    MyNordic_initialized_TestCase_initialized_eqFunction_5476,
    MyNordic_initialized_TestCase_initialized_eqFunction_5477,
    MyNordic_initialized_TestCase_initialized_eqFunction_5478,
    MyNordic_initialized_TestCase_initialized_eqFunction_5479,
    MyNordic_initialized_TestCase_initialized_eqFunction_5480,
    MyNordic_initialized_TestCase_initialized_eqFunction_5481,
    MyNordic_initialized_TestCase_initialized_eqFunction_5482,
    MyNordic_initialized_TestCase_initialized_eqFunction_5483,
    MyNordic_initialized_TestCase_initialized_eqFunction_5484,
    MyNordic_initialized_TestCase_initialized_eqFunction_5485,
    MyNordic_initialized_TestCase_initialized_eqFunction_5486,
    MyNordic_initialized_TestCase_initialized_eqFunction_5487,
    MyNordic_initialized_TestCase_initialized_eqFunction_5488,
    MyNordic_initialized_TestCase_initialized_eqFunction_5489,
    MyNordic_initialized_TestCase_initialized_eqFunction_5490,
    MyNordic_initialized_TestCase_initialized_eqFunction_5491,
    MyNordic_initialized_TestCase_initialized_eqFunction_5492,
    MyNordic_initialized_TestCase_initialized_eqFunction_5493,
    MyNordic_initialized_TestCase_initialized_eqFunction_5494,
    MyNordic_initialized_TestCase_initialized_eqFunction_5495,
    MyNordic_initialized_TestCase_initialized_eqFunction_5496,
    MyNordic_initialized_TestCase_initialized_eqFunction_5497,
    MyNordic_initialized_TestCase_initialized_eqFunction_5498,
    MyNordic_initialized_TestCase_initialized_eqFunction_5499,
    MyNordic_initialized_TestCase_initialized_eqFunction_5500,
    MyNordic_initialized_TestCase_initialized_eqFunction_5501,
    MyNordic_initialized_TestCase_initialized_eqFunction_5502,
    MyNordic_initialized_TestCase_initialized_eqFunction_5503,
    MyNordic_initialized_TestCase_initialized_eqFunction_5504,
    MyNordic_initialized_TestCase_initialized_eqFunction_5505,
    MyNordic_initialized_TestCase_initialized_eqFunction_5506,
    MyNordic_initialized_TestCase_initialized_eqFunction_5507,
    MyNordic_initialized_TestCase_initialized_eqFunction_5508,
    MyNordic_initialized_TestCase_initialized_eqFunction_5509,
    MyNordic_initialized_TestCase_initialized_eqFunction_5510,
    MyNordic_initialized_TestCase_initialized_eqFunction_5511,
    MyNordic_initialized_TestCase_initialized_eqFunction_5512,
    MyNordic_initialized_TestCase_initialized_eqFunction_5513,
    MyNordic_initialized_TestCase_initialized_eqFunction_5514,
    MyNordic_initialized_TestCase_initialized_eqFunction_5515,
    MyNordic_initialized_TestCase_initialized_eqFunction_5516,
    MyNordic_initialized_TestCase_initialized_eqFunction_5517,
    MyNordic_initialized_TestCase_initialized_eqFunction_5518,
    MyNordic_initialized_TestCase_initialized_eqFunction_5519,
    MyNordic_initialized_TestCase_initialized_eqFunction_5520,
    MyNordic_initialized_TestCase_initialized_eqFunction_5521,
    MyNordic_initialized_TestCase_initialized_eqFunction_5522,
    MyNordic_initialized_TestCase_initialized_eqFunction_5523,
    MyNordic_initialized_TestCase_initialized_eqFunction_5524,
    MyNordic_initialized_TestCase_initialized_eqFunction_5525,
    MyNordic_initialized_TestCase_initialized_eqFunction_5526,
    MyNordic_initialized_TestCase_initialized_eqFunction_5527,
    MyNordic_initialized_TestCase_initialized_eqFunction_5528,
    MyNordic_initialized_TestCase_initialized_eqFunction_5529,
    MyNordic_initialized_TestCase_initialized_eqFunction_5530,
    MyNordic_initialized_TestCase_initialized_eqFunction_5531,
    MyNordic_initialized_TestCase_initialized_eqFunction_5532,
    MyNordic_initialized_TestCase_initialized_eqFunction_5533,
    MyNordic_initialized_TestCase_initialized_eqFunction_5534,
    MyNordic_initialized_TestCase_initialized_eqFunction_5535,
    MyNordic_initialized_TestCase_initialized_eqFunction_5536,
    MyNordic_initialized_TestCase_initialized_eqFunction_5537,
    MyNordic_initialized_TestCase_initialized_eqFunction_5538,
    MyNordic_initialized_TestCase_initialized_eqFunction_5539,
    MyNordic_initialized_TestCase_initialized_eqFunction_5540,
    MyNordic_initialized_TestCase_initialized_eqFunction_5541,
    MyNordic_initialized_TestCase_initialized_eqFunction_5542,
    MyNordic_initialized_TestCase_initialized_eqFunction_5543,
    MyNordic_initialized_TestCase_initialized_eqFunction_5544,
    MyNordic_initialized_TestCase_initialized_eqFunction_5545,
    MyNordic_initialized_TestCase_initialized_eqFunction_5546,
    MyNordic_initialized_TestCase_initialized_eqFunction_5547,
    MyNordic_initialized_TestCase_initialized_eqFunction_5548,
    MyNordic_initialized_TestCase_initialized_eqFunction_5549,
    MyNordic_initialized_TestCase_initialized_eqFunction_5550,
    MyNordic_initialized_TestCase_initialized_eqFunction_5551,
    MyNordic_initialized_TestCase_initialized_eqFunction_5552,
    MyNordic_initialized_TestCase_initialized_eqFunction_5553,
    MyNordic_initialized_TestCase_initialized_eqFunction_5554,
    MyNordic_initialized_TestCase_initialized_eqFunction_5555,
    MyNordic_initialized_TestCase_initialized_eqFunction_5556,
    MyNordic_initialized_TestCase_initialized_eqFunction_5557,
    MyNordic_initialized_TestCase_initialized_eqFunction_5558,
    MyNordic_initialized_TestCase_initialized_eqFunction_5559,
    MyNordic_initialized_TestCase_initialized_eqFunction_5560,
    MyNordic_initialized_TestCase_initialized_eqFunction_5561,
    MyNordic_initialized_TestCase_initialized_eqFunction_5562,
    MyNordic_initialized_TestCase_initialized_eqFunction_5563,
    MyNordic_initialized_TestCase_initialized_eqFunction_5564,
    MyNordic_initialized_TestCase_initialized_eqFunction_5565,
    MyNordic_initialized_TestCase_initialized_eqFunction_5566,
    MyNordic_initialized_TestCase_initialized_eqFunction_5567,
    MyNordic_initialized_TestCase_initialized_eqFunction_5568,
    MyNordic_initialized_TestCase_initialized_eqFunction_5569,
    MyNordic_initialized_TestCase_initialized_eqFunction_5570,
    MyNordic_initialized_TestCase_initialized_eqFunction_5571,
    MyNordic_initialized_TestCase_initialized_eqFunction_5572,
    MyNordic_initialized_TestCase_initialized_eqFunction_5573,
    MyNordic_initialized_TestCase_initialized_eqFunction_5574,
    MyNordic_initialized_TestCase_initialized_eqFunction_5575,
    MyNordic_initialized_TestCase_initialized_eqFunction_5576,
    MyNordic_initialized_TestCase_initialized_eqFunction_5577,
    MyNordic_initialized_TestCase_initialized_eqFunction_5578,
    MyNordic_initialized_TestCase_initialized_eqFunction_5579,
    MyNordic_initialized_TestCase_initialized_eqFunction_5580,
    MyNordic_initialized_TestCase_initialized_eqFunction_5581,
    MyNordic_initialized_TestCase_initialized_eqFunction_5582,
    MyNordic_initialized_TestCase_initialized_eqFunction_5583,
    MyNordic_initialized_TestCase_initialized_eqFunction_5584,
    MyNordic_initialized_TestCase_initialized_eqFunction_5585,
    MyNordic_initialized_TestCase_initialized_eqFunction_5586,
    MyNordic_initialized_TestCase_initialized_eqFunction_5587,
    MyNordic_initialized_TestCase_initialized_eqFunction_5588,
    MyNordic_initialized_TestCase_initialized_eqFunction_5589,
    MyNordic_initialized_TestCase_initialized_eqFunction_5590,
    MyNordic_initialized_TestCase_initialized_eqFunction_5591,
    MyNordic_initialized_TestCase_initialized_eqFunction_5592,
    MyNordic_initialized_TestCase_initialized_eqFunction_5593,
    MyNordic_initialized_TestCase_initialized_eqFunction_5594,
    MyNordic_initialized_TestCase_initialized_eqFunction_5595,
    MyNordic_initialized_TestCase_initialized_eqFunction_5596,
    MyNordic_initialized_TestCase_initialized_eqFunction_5597,
    MyNordic_initialized_TestCase_initialized_eqFunction_5598,
    MyNordic_initialized_TestCase_initialized_eqFunction_5599,
    MyNordic_initialized_TestCase_initialized_eqFunction_5600,
    MyNordic_initialized_TestCase_initialized_eqFunction_5601,
    MyNordic_initialized_TestCase_initialized_eqFunction_5602,
    MyNordic_initialized_TestCase_initialized_eqFunction_5603,
    MyNordic_initialized_TestCase_initialized_eqFunction_5604,
    MyNordic_initialized_TestCase_initialized_eqFunction_5605,
    MyNordic_initialized_TestCase_initialized_eqFunction_5606,
    MyNordic_initialized_TestCase_initialized_eqFunction_5607,
    MyNordic_initialized_TestCase_initialized_eqFunction_5608,
    MyNordic_initialized_TestCase_initialized_eqFunction_5609,
    MyNordic_initialized_TestCase_initialized_eqFunction_5610,
    MyNordic_initialized_TestCase_initialized_eqFunction_5611,
    MyNordic_initialized_TestCase_initialized_eqFunction_5612,
    MyNordic_initialized_TestCase_initialized_eqFunction_5613,
    MyNordic_initialized_TestCase_initialized_eqFunction_5614,
    MyNordic_initialized_TestCase_initialized_eqFunction_5615,
    MyNordic_initialized_TestCase_initialized_eqFunction_5616,
    MyNordic_initialized_TestCase_initialized_eqFunction_5617,
    MyNordic_initialized_TestCase_initialized_eqFunction_5618,
    MyNordic_initialized_TestCase_initialized_eqFunction_5619,
    MyNordic_initialized_TestCase_initialized_eqFunction_5620,
    MyNordic_initialized_TestCase_initialized_eqFunction_5621,
    MyNordic_initialized_TestCase_initialized_eqFunction_5622,
    MyNordic_initialized_TestCase_initialized_eqFunction_5623,
    MyNordic_initialized_TestCase_initialized_eqFunction_5624,
    MyNordic_initialized_TestCase_initialized_eqFunction_5625,
    MyNordic_initialized_TestCase_initialized_eqFunction_5626,
    MyNordic_initialized_TestCase_initialized_eqFunction_5627,
    MyNordic_initialized_TestCase_initialized_eqFunction_5628,
    MyNordic_initialized_TestCase_initialized_eqFunction_5629,
    MyNordic_initialized_TestCase_initialized_eqFunction_5630,
    MyNordic_initialized_TestCase_initialized_eqFunction_5631,
    MyNordic_initialized_TestCase_initialized_eqFunction_5632,
    MyNordic_initialized_TestCase_initialized_eqFunction_5633,
    MyNordic_initialized_TestCase_initialized_eqFunction_5634,
    MyNordic_initialized_TestCase_initialized_eqFunction_5635,
    MyNordic_initialized_TestCase_initialized_eqFunction_5636,
    MyNordic_initialized_TestCase_initialized_eqFunction_5637,
    MyNordic_initialized_TestCase_initialized_eqFunction_5638,
    MyNordic_initialized_TestCase_initialized_eqFunction_5639,
    MyNordic_initialized_TestCase_initialized_eqFunction_5640,
    MyNordic_initialized_TestCase_initialized_eqFunction_5641,
    MyNordic_initialized_TestCase_initialized_eqFunction_5642,
    MyNordic_initialized_TestCase_initialized_eqFunction_5643,
    MyNordic_initialized_TestCase_initialized_eqFunction_5644,
    MyNordic_initialized_TestCase_initialized_eqFunction_5645,
    MyNordic_initialized_TestCase_initialized_eqFunction_5646,
    MyNordic_initialized_TestCase_initialized_eqFunction_5647,
    MyNordic_initialized_TestCase_initialized_eqFunction_5648,
    MyNordic_initialized_TestCase_initialized_eqFunction_5649,
    MyNordic_initialized_TestCase_initialized_eqFunction_5650,
    MyNordic_initialized_TestCase_initialized_eqFunction_5651,
    MyNordic_initialized_TestCase_initialized_eqFunction_5652,
    MyNordic_initialized_TestCase_initialized_eqFunction_5653,
    MyNordic_initialized_TestCase_initialized_eqFunction_5654,
    MyNordic_initialized_TestCase_initialized_eqFunction_5655,
    MyNordic_initialized_TestCase_initialized_eqFunction_5656,
    MyNordic_initialized_TestCase_initialized_eqFunction_5657,
    MyNordic_initialized_TestCase_initialized_eqFunction_5658,
    MyNordic_initialized_TestCase_initialized_eqFunction_5659,
    MyNordic_initialized_TestCase_initialized_eqFunction_5660,
    MyNordic_initialized_TestCase_initialized_eqFunction_5661,
    MyNordic_initialized_TestCase_initialized_eqFunction_5662,
    MyNordic_initialized_TestCase_initialized_eqFunction_5663,
    MyNordic_initialized_TestCase_initialized_eqFunction_5664,
    MyNordic_initialized_TestCase_initialized_eqFunction_5665,
    MyNordic_initialized_TestCase_initialized_eqFunction_5666,
    MyNordic_initialized_TestCase_initialized_eqFunction_5667,
    MyNordic_initialized_TestCase_initialized_eqFunction_5668,
    MyNordic_initialized_TestCase_initialized_eqFunction_5669,
    MyNordic_initialized_TestCase_initialized_eqFunction_5670,
    MyNordic_initialized_TestCase_initialized_eqFunction_5671,
    MyNordic_initialized_TestCase_initialized_eqFunction_5672,
    MyNordic_initialized_TestCase_initialized_eqFunction_5673,
    MyNordic_initialized_TestCase_initialized_eqFunction_5674,
    MyNordic_initialized_TestCase_initialized_eqFunction_5675,
    MyNordic_initialized_TestCase_initialized_eqFunction_5676,
    MyNordic_initialized_TestCase_initialized_eqFunction_5677,
    MyNordic_initialized_TestCase_initialized_eqFunction_5678,
    MyNordic_initialized_TestCase_initialized_eqFunction_5679,
    MyNordic_initialized_TestCase_initialized_eqFunction_5680,
    MyNordic_initialized_TestCase_initialized_eqFunction_5681,
    MyNordic_initialized_TestCase_initialized_eqFunction_5682,
    MyNordic_initialized_TestCase_initialized_eqFunction_5683,
    MyNordic_initialized_TestCase_initialized_eqFunction_5684,
    MyNordic_initialized_TestCase_initialized_eqFunction_5685,
    MyNordic_initialized_TestCase_initialized_eqFunction_5686,
    MyNordic_initialized_TestCase_initialized_eqFunction_5687,
    MyNordic_initialized_TestCase_initialized_eqFunction_5688,
    MyNordic_initialized_TestCase_initialized_eqFunction_5689,
    MyNordic_initialized_TestCase_initialized_eqFunction_5690,
    MyNordic_initialized_TestCase_initialized_eqFunction_5691,
    MyNordic_initialized_TestCase_initialized_eqFunction_5692,
    MyNordic_initialized_TestCase_initialized_eqFunction_5693,
    MyNordic_initialized_TestCase_initialized_eqFunction_5694,
    MyNordic_initialized_TestCase_initialized_eqFunction_5695,
    MyNordic_initialized_TestCase_initialized_eqFunction_5696,
    MyNordic_initialized_TestCase_initialized_eqFunction_5697,
    MyNordic_initialized_TestCase_initialized_eqFunction_5698,
    MyNordic_initialized_TestCase_initialized_eqFunction_5699,
    MyNordic_initialized_TestCase_initialized_eqFunction_5700,
    MyNordic_initialized_TestCase_initialized_eqFunction_5701,
    MyNordic_initialized_TestCase_initialized_eqFunction_5702,
    MyNordic_initialized_TestCase_initialized_eqFunction_5703,
    MyNordic_initialized_TestCase_initialized_eqFunction_5704,
    MyNordic_initialized_TestCase_initialized_eqFunction_5705,
    MyNordic_initialized_TestCase_initialized_eqFunction_5706,
    MyNordic_initialized_TestCase_initialized_eqFunction_5707,
    MyNordic_initialized_TestCase_initialized_eqFunction_5708,
    MyNordic_initialized_TestCase_initialized_eqFunction_5709,
    MyNordic_initialized_TestCase_initialized_eqFunction_5710,
    MyNordic_initialized_TestCase_initialized_eqFunction_5711,
    MyNordic_initialized_TestCase_initialized_eqFunction_5712,
    MyNordic_initialized_TestCase_initialized_eqFunction_5713,
    MyNordic_initialized_TestCase_initialized_eqFunction_5714,
    MyNordic_initialized_TestCase_initialized_eqFunction_5715,
    MyNordic_initialized_TestCase_initialized_eqFunction_5716,
    MyNordic_initialized_TestCase_initialized_eqFunction_5717,
    MyNordic_initialized_TestCase_initialized_eqFunction_5718,
    MyNordic_initialized_TestCase_initialized_eqFunction_5719,
    MyNordic_initialized_TestCase_initialized_eqFunction_5720,
    MyNordic_initialized_TestCase_initialized_eqFunction_5721,
    MyNordic_initialized_TestCase_initialized_eqFunction_5722,
    MyNordic_initialized_TestCase_initialized_eqFunction_5723,
    MyNordic_initialized_TestCase_initialized_eqFunction_5724,
    MyNordic_initialized_TestCase_initialized_eqFunction_5725,
    MyNordic_initialized_TestCase_initialized_eqFunction_5726,
    MyNordic_initialized_TestCase_initialized_eqFunction_5727,
    MyNordic_initialized_TestCase_initialized_eqFunction_5728,
    MyNordic_initialized_TestCase_initialized_eqFunction_5729,
    MyNordic_initialized_TestCase_initialized_eqFunction_5730,
    MyNordic_initialized_TestCase_initialized_eqFunction_5731,
    MyNordic_initialized_TestCase_initialized_eqFunction_5732,
    MyNordic_initialized_TestCase_initialized_eqFunction_5733,
    MyNordic_initialized_TestCase_initialized_eqFunction_5734,
    MyNordic_initialized_TestCase_initialized_eqFunction_5735,
    MyNordic_initialized_TestCase_initialized_eqFunction_5736,
    MyNordic_initialized_TestCase_initialized_eqFunction_5737,
    MyNordic_initialized_TestCase_initialized_eqFunction_5738,
    MyNordic_initialized_TestCase_initialized_eqFunction_5739,
    MyNordic_initialized_TestCase_initialized_eqFunction_5740,
    MyNordic_initialized_TestCase_initialized_eqFunction_5741,
    MyNordic_initialized_TestCase_initialized_eqFunction_5742,
    MyNordic_initialized_TestCase_initialized_eqFunction_5743,
    MyNordic_initialized_TestCase_initialized_eqFunction_5744,
    MyNordic_initialized_TestCase_initialized_eqFunction_5745,
    MyNordic_initialized_TestCase_initialized_eqFunction_5746,
    MyNordic_initialized_TestCase_initialized_eqFunction_5747,
    MyNordic_initialized_TestCase_initialized_eqFunction_5748,
    MyNordic_initialized_TestCase_initialized_eqFunction_5749,
    MyNordic_initialized_TestCase_initialized_eqFunction_5750,
    MyNordic_initialized_TestCase_initialized_eqFunction_5751,
    MyNordic_initialized_TestCase_initialized_eqFunction_5752,
    MyNordic_initialized_TestCase_initialized_eqFunction_5753,
    MyNordic_initialized_TestCase_initialized_eqFunction_5754,
    MyNordic_initialized_TestCase_initialized_eqFunction_5755,
    MyNordic_initialized_TestCase_initialized_eqFunction_5756,
    MyNordic_initialized_TestCase_initialized_eqFunction_5757,
    MyNordic_initialized_TestCase_initialized_eqFunction_5758,
    MyNordic_initialized_TestCase_initialized_eqFunction_5759,
    MyNordic_initialized_TestCase_initialized_eqFunction_5760,
    MyNordic_initialized_TestCase_initialized_eqFunction_5761,
    MyNordic_initialized_TestCase_initialized_eqFunction_5762,
    MyNordic_initialized_TestCase_initialized_eqFunction_5763,
    MyNordic_initialized_TestCase_initialized_eqFunction_5764,
    MyNordic_initialized_TestCase_initialized_eqFunction_5765,
    MyNordic_initialized_TestCase_initialized_eqFunction_5766,
    MyNordic_initialized_TestCase_initialized_eqFunction_5767,
    MyNordic_initialized_TestCase_initialized_eqFunction_5768,
    MyNordic_initialized_TestCase_initialized_eqFunction_5769,
    MyNordic_initialized_TestCase_initialized_eqFunction_5770,
    MyNordic_initialized_TestCase_initialized_eqFunction_5771,
    MyNordic_initialized_TestCase_initialized_eqFunction_5772,
    MyNordic_initialized_TestCase_initialized_eqFunction_5773,
    MyNordic_initialized_TestCase_initialized_eqFunction_5774,
    MyNordic_initialized_TestCase_initialized_eqFunction_5775,
    MyNordic_initialized_TestCase_initialized_eqFunction_5776,
    MyNordic_initialized_TestCase_initialized_eqFunction_5777,
    MyNordic_initialized_TestCase_initialized_eqFunction_5778
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif