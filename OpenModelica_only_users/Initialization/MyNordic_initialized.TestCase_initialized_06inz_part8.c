#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5779
type: SIMPLE_ASSIGN
$START.vrNordic_g09.leadLag.y = vrNordic_g09.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5779};
  ((modelica_real *)((data->modelData->realVarsData[3650] /* vrNordic_g09.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4775]] /* vrNordic_g09.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3650] /* vrNordic_g09.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3650].info /* vrNordic_g09.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */));
  threadData->lastEquationSolved = 5779;
}

/*
equation index: 5780
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.X0[1] = if vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag.u_start / vrNordic_g09.leadLag.a_end else if vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4774]] /* vrNordic_g09.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4784]] /* vrNordic_g09.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */),"vrNordic_g09.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[560]] /* vrNordic_g09.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4785]] /* vrNordic_g09.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5780;
}

/*
equation index: 5781
type: SIMPLE_ASSIGN
$START.vrNordic_g09.leadLag.x_scaled[1] = vrNordic_g09.leadLag.X0[1] * vrNordic_g09.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5781};
  ((modelica_real *)((data->modelData->realVarsData[249] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4774]] /* vrNordic_g09.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[249] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[249].info /* vrNordic_g09.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5781;
}

/*
equation index: 5782
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.x_scaled[1] = $START.vrNordic_g09.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[249] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5782;
}

/*
equation index: 5783
type: SIMPLE_ASSIGN
$START.vrNordic_g09.leadLag.x[1] = vrNordic_g09.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5783};
  ((modelica_real *)((data->modelData->realVarsData[3649] /* vrNordic_g09.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4774]] /* vrNordic_g09.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3649] /* vrNordic_g09.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3649].info /* vrNordic_g09.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5783;
}

/*
equation index: 5784
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.x[1] = vrNordic_g09.leadLag.x_scaled[1] / vrNordic_g09.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */),"vrNordic_g09.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5784;
}

/*
equation index: 5785
type: SIMPLE_ASSIGN
vrNordic_g09.limIntegrator.y_start = vrNordic_g09.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4816]] /* vrNordic_g09.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4752]] /* vrNordic_g09.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5785;
}

/*
equation index: 5786
type: SIMPLE_ASSIGN
goverNordic_g08.Pm0Pu = g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5786;
}

/*
equation index: 5787
type: SIMPLE_ASSIGN
$START.goverNordic_g08.PGenPu = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5787};
  ((modelica_real *)((data->modelData->realVarsData[2058] /* goverNordic_g08.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2058] /* goverNordic_g08.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2058].info /* goverNordic_g08.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */));
  threadData->lastEquationSolved = 5787;
}

/*
equation index: 5788
type: SIMPLE_ASSIGN
goverNordic_g08.PGenPu = if g08.running.value then (-g08.terminal.V.re) * g08.terminal.i.re - g08.terminal.V.im * g08.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5788;
}

/*
equation index: 5789
type: SIMPLE_ASSIGN
goverNordic_g08.perUnitP.y = goverNordic_g08.perUnitP.k * goverNordic_g08.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2074]] /* goverNordic_g08.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* goverNordic_g08.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */));
  threadData->lastEquationSolved = 5789;
}

/*
equation index: 5790
type: SIMPLE_ASSIGN
g08.PGen = if g08.running.value then 100.0 * goverNordic_g08.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* g08.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5790;
}

/*
equation index: 5791
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.Y0 = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* goverNordic_g08.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5791;
}

/*
equation index: 5792
type: SIMPLE_ASSIGN
$START.goverNordic_g08.limRateLimFirstOrder.limIntegrator.y = goverNordic_g08.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5792};
  ((modelica_real *)((data->modelData->realVarsData[150] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* goverNordic_g08.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[150] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[150].info /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5792;
}

/*
equation index: 5793
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g08.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2534]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* goverNordic_g08.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5793;
}

/*
equation index: 5794
type: SIMPLE_ASSIGN
goverNordic_g08.firstOrder1.y_start = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* goverNordic_g08.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5794;
}

/*
equation index: 5795
type: SIMPLE_ASSIGN
$START.goverNordic_g08.firstOrder1.y = goverNordic_g08.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5795};
  ((modelica_real *)((data->modelData->realVarsData[148] /* goverNordic_g08.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* goverNordic_g08.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[148] /* goverNordic_g08.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[148].info /* goverNordic_g08.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5795;
}

/*
equation index: 5796
type: SIMPLE_ASSIGN
goverNordic_g08.firstOrder1.y = $START.goverNordic_g08.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[148] /* goverNordic_g08.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5796;
}

/*
equation index: 5797
type: SIMPLE_ASSIGN
$DER.goverNordic_g08.firstOrder1.y = (goverNordic_g08.firstOrder1.k * goverNordic_g08.perUnitP.y - goverNordic_g08.firstOrder1.y) / goverNordic_g08.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* der(goverNordic_g08.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* goverNordic_g08.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2074]] /* goverNordic_g08.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* goverNordic_g08.firstOrder1.T PARAM */),"goverNordic_g08.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5797;
}

/*
equation index: 5798
type: SIMPLE_ASSIGN
goverNordic_g08.const.k = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5798};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* goverNordic_g08.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5798;
}

/*
equation index: 5799
type: SIMPLE_ASSIGN
goverNordic_g08.dP.y = goverNordic_g08.const.k - goverNordic_g08.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2062]] /* goverNordic_g08.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* goverNordic_g08.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5799;
}

/*
equation index: 5800
type: SIMPLE_ASSIGN
goverNordic_g08.dOmegaPlusDroop.y = goverNordic_g08.dOmegaPlusDroop.k1 * goverNordic_g08.dOmega.y + goverNordic_g08.dOmegaPlusDroop.k2 * goverNordic_g08.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2513]] /* goverNordic_g08.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2060]] /* goverNordic_g08.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* goverNordic_g08.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2062]] /* goverNordic_g08.dP.y variable */));
  threadData->lastEquationSolved = 5800;
}

/*
equation index: 5801
type: SIMPLE_ASSIGN
goverNordic_g08.govKi.y = goverNordic_g08.govKi.k * goverNordic_g08.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2065]] /* goverNordic_g08.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* goverNordic_g08.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5801;
}

/*
equation index: 5802
type: SIMPLE_ASSIGN
$DER.goverNordic_g08.govInt.y = goverNordic_g08.govInt.k * goverNordic_g08.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* der(goverNordic_g08.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* goverNordic_g08.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2065]] /* goverNordic_g08.govKi.y variable */));
  threadData->lastEquationSolved = 5802;
}

/*
equation index: 5803
type: SIMPLE_ASSIGN
goverNordic_g08.govKp.y = goverNordic_g08.govKp.k * goverNordic_g08.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2066]] /* goverNordic_g08.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* goverNordic_g08.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5803;
}

/*
equation index: 5804
type: SIMPLE_ASSIGN
goverNordic_g08.govInt.y_start = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* goverNordic_g08.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5804;
}

/*
equation index: 5805
type: SIMPLE_ASSIGN
$START.goverNordic_g08.govInt.y = goverNordic_g08.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5805};
  ((modelica_real *)((data->modelData->realVarsData[149] /* goverNordic_g08.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* goverNordic_g08.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* goverNordic_g08.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[149] /* goverNordic_g08.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[149].info /* goverNordic_g08.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* goverNordic_g08.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5805;
}

/*
equation index: 5806
type: SIMPLE_ASSIGN
goverNordic_g08.waterFlow.y_start = goverNordic_g08.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* goverNordic_g08.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* goverNordic_g08.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5806;
}

/*
equation index: 5807
type: SIMPLE_ASSIGN
$START.goverNordic_g08.waterFlow.y = goverNordic_g08.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5807};
  ((modelica_real *)((data->modelData->realVarsData[151] /* goverNordic_g08.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* goverNordic_g08.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[151] /* goverNordic_g08.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[151].info /* goverNordic_g08.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5807;
}

/*
equation index: 5808
type: SIMPLE_ASSIGN
vrNordic_g08.Us0Pu = g08.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4680]] /* vrNordic_g08.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* g08.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5808;
}

/*
equation index: 5809
type: SIMPLE_ASSIGN
$START.vrNordic_g08.UsPu = vrNordic_g08.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5809};
  ((modelica_real *)((data->modelData->realVarsData[3615] /* vrNordic_g08.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4680]] /* vrNordic_g08.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3615] /* vrNordic_g08.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3615].info /* vrNordic_g08.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */));
  threadData->lastEquationSolved = 5809;
}

/*
equation index: 5810
type: SIMPLE_ASSIGN
vrNordic_g08.UsPu = if g08.running.value then if g08.uStatorPu.re == 0.0 and g08.uStatorPu.im == 0.0 then 0.0 else (g08.uStatorPu.re ^ 2.0 + g08.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5810};
  modelica_real tmp1615;
  modelica_real tmp1616;
  modelica_real tmp1617;
  modelica_boolean tmp1618;
  modelica_real tmp1619;
  modelica_boolean tmp1620;
  modelica_real tmp1621;
  tmp1620 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp1620)
  {
    tmp1618 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) == 0.0));
    if(tmp1618)
    {
      tmp1619 = 0.0;
    }
    else
    {
      tmp1615 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */);
      tmp1616 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */);
      tmp1617 = (tmp1615 * tmp1615) + (tmp1616 * tmp1616);
      if(tmp1617 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1617, 0.5);
      }
      tmp1619 = sqrt(tmp1617);
    }
    tmp1621 = tmp1619;
  }
  else
  {
    tmp1621 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */) = tmp1621;
  threadData->lastEquationSolved = 5810;
}

/*
equation index: 5811
type: SIMPLE_ASSIGN
vrNordic_g08.Ir0Pu = g08.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4675]] /* vrNordic_g08.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[936]] /* g08.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5811;
}

/*
equation index: 5812
type: SIMPLE_ASSIGN
$START.vrNordic_g08.IrPu = vrNordic_g08.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5812};
  ((modelica_real *)((data->modelData->realVarsData[3614] /* vrNordic_g08.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4675]] /* vrNordic_g08.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3614] /* vrNordic_g08.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3614].info /* vrNordic_g08.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */));
  threadData->lastEquationSolved = 5812;
}

/*
equation index: 5813
type: SIMPLE_ASSIGN
vrNordic_g08.IrPu = if g08.running.value then g08.RfPPu * g08.ifPu / (g08.rTfoPu * g08.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* g08.Kuf PARAM */)),"g08.rTfoPu * g08.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5813;
}

/*
equation index: 5814
type: SIMPLE_ASSIGN
vrNordic_g08.dIf.y = vrNordic_g08.IrPu - vrNordic_g08.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4686]] /* vrNordic_g08.const2.k PARAM */);
  threadData->lastEquationSolved = 5814;
}

/*
equation index: 5815
type: SIMPLE_ASSIGN
vrNordic_g08.overExcitationLimitation.y = if vrNordic_g08.dIf.y < -0.1 then -1.0 else if vrNordic_g08.dIf.y < 0.0 then 0.0 else if vrNordic_g08.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g08.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5815};
  modelica_boolean tmp1622;
  modelica_boolean tmp1623;
  modelica_boolean tmp1624;
  modelica_boolean tmp1625;
  modelica_real tmp1626;
  modelica_boolean tmp1627;
  modelica_real tmp1628;
  tmp1622 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */),-0.1);
  tmp1627 = (modelica_boolean)tmp1622;
  if(tmp1627)
  {
    tmp1628 = -1.0;
  }
  else
  {
    tmp1623 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */),0.0);
    tmp1625 = (modelica_boolean)tmp1623;
    if(tmp1625)
    {
      tmp1626 = 0.0;
    }
    else
    {
      tmp1624 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4740]] /* vrNordic_g08.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1626 = (tmp1624?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */));
    }
    tmp1628 = tmp1626;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */) = tmp1628;
  threadData->lastEquationSolved = 5815;
}

/*
equation index: 5816
type: SIMPLE_ASSIGN
vrNordic_g08.gain1.y = vrNordic_g08.gain1.k * vrNordic_g08.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3623]] /* vrNordic_g08.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4692]] /* vrNordic_g08.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */));
  threadData->lastEquationSolved = 5816;
}

/*
equation index: 5817
type: SIMPLE_ASSIGN
vrNordic_g08.Efd0Pu = g08.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4673]] /* vrNordic_g08.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* g08.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5817;
}

/*
equation index: 5818
type: SIMPLE_ASSIGN
$START.vrNordic_g08.limIntegrator.y = vrNordic_g08.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5818};
  ((modelica_real *)((data->modelData->realVarsData[246] /* vrNordic_g08.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4673]] /* vrNordic_g08.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[246] /* vrNordic_g08.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[246].info /* vrNordic_g08.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5818;
}

/*
equation index: 5819
type: SIMPLE_ASSIGN
vrNordic_g08.UsRef0Pu = vrNordic_g08.Efd0Pu / vrNordic_g08.KTgr + vrNordic_g08.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5819};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4681]] /* vrNordic_g08.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4673]] /* vrNordic_g08.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4678]] /* vrNordic_g08.KTgr PARAM */),"vrNordic_g08.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4680]] /* vrNordic_g08.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5819;
}

/*
equation index: 5820
type: SIMPLE_ASSIGN
vrNordic_g08.const1.k = vrNordic_g08.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4685]] /* vrNordic_g08.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4681]] /* vrNordic_g08.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5820;
}

/*
equation index: 5821
type: SIMPLE_ASSIGN
vrNordic_g08.dU.y = vrNordic_g08.const1.k - vrNordic_g08.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3619]] /* vrNordic_g08.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4685]] /* vrNordic_g08.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */);
  threadData->lastEquationSolved = 5821;
}

/*
equation index: 5822
type: SIMPLE_ASSIGN
vrNordic_g08.add.y = vrNordic_g08.add.k1 * vrNordic_g08.dU.y + vrNordic_g08.add.k2 * vrNordic_g08.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4682]] /* vrNordic_g08.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3619]] /* vrNordic_g08.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4683]] /* vrNordic_g08.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3633]] /* vrNordic_g08.limiter.y variable */));
  threadData->lastEquationSolved = 5822;
}

/*
equation index: 5823
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.u_start = vrNordic_g08.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4705]] /* vrNordic_g08.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4673]] /* vrNordic_g08.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5823;
}

/*
equation index: 5824
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.Y0 = if vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag.u_start * vrNordic_g08.leadLag.b[2] / vrNordic_g08.leadLag.a_end else if vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4696]] /* vrNordic_g08.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4705]] /* vrNordic_g08.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4701]] /* vrNordic_g08.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */),"vrNordic_g08.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4707]] /* vrNordic_g08.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5824;
}

/*
equation index: 5825
type: SIMPLE_ASSIGN
$START.vrNordic_g08.leadLag.y = vrNordic_g08.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5825};
  ((modelica_real *)((data->modelData->realVarsData[3626] /* vrNordic_g08.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4696]] /* vrNordic_g08.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3626] /* vrNordic_g08.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3626].info /* vrNordic_g08.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */));
  threadData->lastEquationSolved = 5825;
}

/*
equation index: 5826
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.X0[1] = if vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag.u_start / vrNordic_g08.leadLag.a_end else if vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4695]] /* vrNordic_g08.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4705]] /* vrNordic_g08.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */),"vrNordic_g08.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[544]] /* vrNordic_g08.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4706]] /* vrNordic_g08.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5826;
}

/*
equation index: 5827
type: SIMPLE_ASSIGN
$START.vrNordic_g08.leadLag.x_scaled[1] = vrNordic_g08.leadLag.X0[1] * vrNordic_g08.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5827};
  ((modelica_real *)((data->modelData->realVarsData[243] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4695]] /* vrNordic_g08.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[243] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[243].info /* vrNordic_g08.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5827;
}

/*
equation index: 5828
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.x_scaled[1] = $START.vrNordic_g08.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[243] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5828;
}

/*
equation index: 5829
type: SIMPLE_ASSIGN
$START.vrNordic_g08.leadLag.x[1] = vrNordic_g08.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5829};
  ((modelica_real *)((data->modelData->realVarsData[3625] /* vrNordic_g08.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4695]] /* vrNordic_g08.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3625] /* vrNordic_g08.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3625].info /* vrNordic_g08.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5829;
}

/*
equation index: 5830
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.x[1] = vrNordic_g08.leadLag.x_scaled[1] / vrNordic_g08.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */),"vrNordic_g08.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5830;
}

/*
equation index: 5831
type: SIMPLE_ASSIGN
vrNordic_g08.limIntegrator.y_start = vrNordic_g08.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4737]] /* vrNordic_g08.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4673]] /* vrNordic_g08.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5831;
}

/*
equation index: 5832
type: SIMPLE_ASSIGN
goverNordic_g07.Pm0Pu = g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5832;
}

/*
equation index: 5833
type: SIMPLE_ASSIGN
$START.goverNordic_g07.PGenPu = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5833};
  ((modelica_real *)((data->modelData->realVarsData[2040] /* goverNordic_g07.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2040] /* goverNordic_g07.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2040].info /* goverNordic_g07.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */));
  threadData->lastEquationSolved = 5833;
}

/*
equation index: 5834
type: SIMPLE_ASSIGN
goverNordic_g07.PGenPu = if g07.running.value then (-g07.terminal.V.re) * g07.terminal.i.re - g07.terminal.V.im * g07.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5834;
}

/*
equation index: 5835
type: SIMPLE_ASSIGN
goverNordic_g07.perUnitP.y = goverNordic_g07.perUnitP.k * goverNordic_g07.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* goverNordic_g07.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* goverNordic_g07.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */));
  threadData->lastEquationSolved = 5835;
}

/*
equation index: 5836
type: SIMPLE_ASSIGN
g07.PGen = if g07.running.value then 100.0 * goverNordic_g07.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1293]] /* g07.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5836;
}

/*
equation index: 5837
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.Y0 = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* goverNordic_g07.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5837;
}

/*
equation index: 5838
type: SIMPLE_ASSIGN
$START.goverNordic_g07.limRateLimFirstOrder.limIntegrator.y = goverNordic_g07.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5838};
  ((modelica_real *)((data->modelData->realVarsData[146] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* goverNordic_g07.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[146] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[146].info /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5838;
}

/*
equation index: 5839
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g07.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* goverNordic_g07.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5839;
}

/*
equation index: 5840
type: SIMPLE_ASSIGN
goverNordic_g07.firstOrder1.y_start = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2481]] /* goverNordic_g07.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5840;
}

/*
equation index: 5841
type: SIMPLE_ASSIGN
$START.goverNordic_g07.firstOrder1.y = goverNordic_g07.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5841};
  ((modelica_real *)((data->modelData->realVarsData[144] /* goverNordic_g07.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2481]] /* goverNordic_g07.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[144] /* goverNordic_g07.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[144].info /* goverNordic_g07.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5841;
}

/*
equation index: 5842
type: SIMPLE_ASSIGN
goverNordic_g07.firstOrder1.y = $START.goverNordic_g07.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[144] /* goverNordic_g07.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5842;
}

/*
equation index: 5843
type: SIMPLE_ASSIGN
$DER.goverNordic_g07.firstOrder1.y = (goverNordic_g07.firstOrder1.k * goverNordic_g07.perUnitP.y - goverNordic_g07.firstOrder1.y) / goverNordic_g07.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* der(goverNordic_g07.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2480]] /* goverNordic_g07.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* goverNordic_g07.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2479]] /* goverNordic_g07.firstOrder1.T PARAM */),"goverNordic_g07.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5843;
}

/*
equation index: 5844
type: SIMPLE_ASSIGN
goverNordic_g07.const.k = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2474]] /* goverNordic_g07.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5844;
}

/*
equation index: 5845
type: SIMPLE_ASSIGN
goverNordic_g07.dP.y = goverNordic_g07.const.k - goverNordic_g07.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2044]] /* goverNordic_g07.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2474]] /* goverNordic_g07.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5845;
}

/*
equation index: 5846
type: SIMPLE_ASSIGN
goverNordic_g07.dOmegaPlusDroop.y = goverNordic_g07.dOmegaPlusDroop.k1 * goverNordic_g07.dOmega.y + goverNordic_g07.dOmegaPlusDroop.k2 * goverNordic_g07.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2477]] /* goverNordic_g07.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2042]] /* goverNordic_g07.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2478]] /* goverNordic_g07.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2044]] /* goverNordic_g07.dP.y variable */));
  threadData->lastEquationSolved = 5846;
}

/*
equation index: 5847
type: SIMPLE_ASSIGN
goverNordic_g07.govKi.y = goverNordic_g07.govKi.k * goverNordic_g07.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2047]] /* goverNordic_g07.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* goverNordic_g07.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5847;
}

/*
equation index: 5848
type: SIMPLE_ASSIGN
$DER.goverNordic_g07.govInt.y = goverNordic_g07.govInt.k * goverNordic_g07.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* der(goverNordic_g07.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2482]] /* goverNordic_g07.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2047]] /* goverNordic_g07.govKi.y variable */));
  threadData->lastEquationSolved = 5848;
}

/*
equation index: 5849
type: SIMPLE_ASSIGN
goverNordic_g07.govKp.y = goverNordic_g07.govKp.k * goverNordic_g07.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2048]] /* goverNordic_g07.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* goverNordic_g07.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5849;
}

/*
equation index: 5850
type: SIMPLE_ASSIGN
goverNordic_g07.govInt.y_start = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* goverNordic_g07.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5850;
}

/*
equation index: 5851
type: SIMPLE_ASSIGN
$START.goverNordic_g07.govInt.y = goverNordic_g07.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5851};
  ((modelica_real *)((data->modelData->realVarsData[145] /* goverNordic_g07.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* goverNordic_g07.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* goverNordic_g07.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[145] /* goverNordic_g07.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[145].info /* goverNordic_g07.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* goverNordic_g07.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5851;
}

/*
equation index: 5852
type: SIMPLE_ASSIGN
goverNordic_g07.waterFlow.y_start = goverNordic_g07.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2504]] /* goverNordic_g07.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* goverNordic_g07.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5852;
}

/*
equation index: 5853
type: SIMPLE_ASSIGN
$START.goverNordic_g07.waterFlow.y = goverNordic_g07.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5853};
  ((modelica_real *)((data->modelData->realVarsData[147] /* goverNordic_g07.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2504]] /* goverNordic_g07.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[147] /* goverNordic_g07.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* goverNordic_g07.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5853;
}

/*
equation index: 5854
type: SIMPLE_ASSIGN
vrNordic_g07.Us0Pu = g07.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4601]] /* vrNordic_g07.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* g07.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5854;
}

/*
equation index: 5855
type: SIMPLE_ASSIGN
$START.vrNordic_g07.UsPu = vrNordic_g07.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5855};
  ((modelica_real *)((data->modelData->realVarsData[3591] /* vrNordic_g07.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4601]] /* vrNordic_g07.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3591] /* vrNordic_g07.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3591].info /* vrNordic_g07.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */));
  threadData->lastEquationSolved = 5855;
}

/*
equation index: 5856
type: SIMPLE_ASSIGN
vrNordic_g07.UsPu = if g07.running.value then if g07.uStatorPu.re == 0.0 and g07.uStatorPu.im == 0.0 then 0.0 else (g07.uStatorPu.re ^ 2.0 + g07.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5856};
  modelica_real tmp1629;
  modelica_real tmp1630;
  modelica_real tmp1631;
  modelica_boolean tmp1632;
  modelica_real tmp1633;
  modelica_boolean tmp1634;
  modelica_real tmp1635;
  tmp1634 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp1634)
  {
    tmp1632 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) == 0.0));
    if(tmp1632)
    {
      tmp1633 = 0.0;
    }
    else
    {
      tmp1629 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */);
      tmp1630 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */);
      tmp1631 = (tmp1629 * tmp1629) + (tmp1630 * tmp1630);
      if(tmp1631 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1631, 0.5);
      }
      tmp1633 = sqrt(tmp1631);
    }
    tmp1635 = tmp1633;
  }
  else
  {
    tmp1635 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */) = tmp1635;
  threadData->lastEquationSolved = 5856;
}

/*
equation index: 5857
type: SIMPLE_ASSIGN
vrNordic_g07.Ir0Pu = g07.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4596]] /* vrNordic_g07.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* g07.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5857;
}

/*
equation index: 5858
type: SIMPLE_ASSIGN
$START.vrNordic_g07.IrPu = vrNordic_g07.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5858};
  ((modelica_real *)((data->modelData->realVarsData[3590] /* vrNordic_g07.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4596]] /* vrNordic_g07.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3590] /* vrNordic_g07.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3590].info /* vrNordic_g07.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */));
  threadData->lastEquationSolved = 5858;
}

/*
equation index: 5859
type: SIMPLE_ASSIGN
vrNordic_g07.IrPu = if g07.running.value then g07.RfPPu * g07.ifPu / (g07.rTfoPu * g07.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* g07.Kuf PARAM */)),"g07.rTfoPu * g07.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5859;
}

/*
equation index: 5860
type: SIMPLE_ASSIGN
vrNordic_g07.dIf.y = vrNordic_g07.IrPu - vrNordic_g07.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4607]] /* vrNordic_g07.const2.k PARAM */);
  threadData->lastEquationSolved = 5860;
}

/*
equation index: 5861
type: SIMPLE_ASSIGN
vrNordic_g07.overExcitationLimitation.y = if vrNordic_g07.dIf.y < -0.1 then -1.0 else if vrNordic_g07.dIf.y < 0.0 then 0.0 else if vrNordic_g07.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g07.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5861};
  modelica_boolean tmp1636;
  modelica_boolean tmp1637;
  modelica_boolean tmp1638;
  modelica_boolean tmp1639;
  modelica_real tmp1640;
  modelica_boolean tmp1641;
  modelica_real tmp1642;
  tmp1636 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */),-0.1);
  tmp1641 = (modelica_boolean)tmp1636;
  if(tmp1641)
  {
    tmp1642 = -1.0;
  }
  else
  {
    tmp1637 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */),0.0);
    tmp1639 = (modelica_boolean)tmp1637;
    if(tmp1639)
    {
      tmp1640 = 0.0;
    }
    else
    {
      tmp1638 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4661]] /* vrNordic_g07.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1640 = (tmp1638?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */));
    }
    tmp1642 = tmp1640;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */) = tmp1642;
  threadData->lastEquationSolved = 5861;
}

/*
equation index: 5862
type: SIMPLE_ASSIGN
vrNordic_g07.gain1.y = vrNordic_g07.gain1.k * vrNordic_g07.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3599]] /* vrNordic_g07.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4613]] /* vrNordic_g07.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */));
  threadData->lastEquationSolved = 5862;
}

/*
equation index: 5863
type: SIMPLE_ASSIGN
vrNordic_g07.Efd0Pu = g07.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4594]] /* vrNordic_g07.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* g07.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5863;
}

/*
equation index: 5864
type: SIMPLE_ASSIGN
$START.vrNordic_g07.limIntegrator.y = vrNordic_g07.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5864};
  ((modelica_real *)((data->modelData->realVarsData[240] /* vrNordic_g07.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4594]] /* vrNordic_g07.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[240] /* vrNordic_g07.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[240].info /* vrNordic_g07.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5864;
}

/*
equation index: 5865
type: SIMPLE_ASSIGN
vrNordic_g07.UsRef0Pu = vrNordic_g07.Efd0Pu / vrNordic_g07.KTgr + vrNordic_g07.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4602]] /* vrNordic_g07.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4594]] /* vrNordic_g07.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4599]] /* vrNordic_g07.KTgr PARAM */),"vrNordic_g07.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4601]] /* vrNordic_g07.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5865;
}

/*
equation index: 5866
type: SIMPLE_ASSIGN
vrNordic_g07.const1.k = vrNordic_g07.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4606]] /* vrNordic_g07.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4602]] /* vrNordic_g07.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5866;
}

/*
equation index: 5867
type: SIMPLE_ASSIGN
vrNordic_g07.dU.y = vrNordic_g07.const1.k - vrNordic_g07.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3595]] /* vrNordic_g07.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4606]] /* vrNordic_g07.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */);
  threadData->lastEquationSolved = 5867;
}

/*
equation index: 5868
type: SIMPLE_ASSIGN
vrNordic_g07.add.y = vrNordic_g07.add.k1 * vrNordic_g07.dU.y + vrNordic_g07.add.k2 * vrNordic_g07.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4603]] /* vrNordic_g07.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3595]] /* vrNordic_g07.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4604]] /* vrNordic_g07.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3609]] /* vrNordic_g07.limiter.y variable */));
  threadData->lastEquationSolved = 5868;
}

/*
equation index: 5869
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.u_start = vrNordic_g07.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5869};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4626]] /* vrNordic_g07.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4594]] /* vrNordic_g07.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5869;
}

/*
equation index: 5870
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.Y0 = if vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag.u_start * vrNordic_g07.leadLag.b[2] / vrNordic_g07.leadLag.a_end else if vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4617]] /* vrNordic_g07.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4626]] /* vrNordic_g07.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4622]] /* vrNordic_g07.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */),"vrNordic_g07.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4628]] /* vrNordic_g07.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5870;
}

/*
equation index: 5871
type: SIMPLE_ASSIGN
$START.vrNordic_g07.leadLag.y = vrNordic_g07.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5871};
  ((modelica_real *)((data->modelData->realVarsData[3602] /* vrNordic_g07.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4617]] /* vrNordic_g07.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3602] /* vrNordic_g07.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3602].info /* vrNordic_g07.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */));
  threadData->lastEquationSolved = 5871;
}

/*
equation index: 5872
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.X0[1] = if vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag.u_start / vrNordic_g07.leadLag.a_end else if vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4616]] /* vrNordic_g07.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4626]] /* vrNordic_g07.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */),"vrNordic_g07.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[528]] /* vrNordic_g07.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4627]] /* vrNordic_g07.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5872;
}

/*
equation index: 5873
type: SIMPLE_ASSIGN
$START.vrNordic_g07.leadLag.x_scaled[1] = vrNordic_g07.leadLag.X0[1] * vrNordic_g07.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5873};
  ((modelica_real *)((data->modelData->realVarsData[237] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4616]] /* vrNordic_g07.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[237] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[237].info /* vrNordic_g07.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5873;
}

/*
equation index: 5874
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.x_scaled[1] = $START.vrNordic_g07.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[237] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5874;
}

/*
equation index: 5875
type: SIMPLE_ASSIGN
$START.vrNordic_g07.leadLag.x[1] = vrNordic_g07.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5875};
  ((modelica_real *)((data->modelData->realVarsData[3601] /* vrNordic_g07.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4616]] /* vrNordic_g07.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3601] /* vrNordic_g07.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3601].info /* vrNordic_g07.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5875;
}

/*
equation index: 5876
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.x[1] = vrNordic_g07.leadLag.x_scaled[1] / vrNordic_g07.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */),"vrNordic_g07.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5876;
}

/*
equation index: 5877
type: SIMPLE_ASSIGN
vrNordic_g07.limIntegrator.y_start = vrNordic_g07.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4658]] /* vrNordic_g07.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4594]] /* vrNordic_g07.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5877;
}

/*
equation index: 5878
type: SIMPLE_ASSIGN
goverNordic_g06.Pm0Pu = g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5878};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5878;
}

/*
equation index: 5879
type: SIMPLE_ASSIGN
$START.goverNordic_g06.PGenPu = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5879};
  ((modelica_real *)((data->modelData->realVarsData[2022] /* goverNordic_g06.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2022] /* goverNordic_g06.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2022].info /* goverNordic_g06.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */));
  threadData->lastEquationSolved = 5879;
}

/*
equation index: 5880
type: SIMPLE_ASSIGN
goverNordic_g06.PGenPu = if g06.running.value then (-g06.terminal.V.re) * g06.terminal.i.re - g06.terminal.V.im * g06.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5880;
}

/*
equation index: 5881
type: SIMPLE_ASSIGN
goverNordic_g06.perUnitP.y = goverNordic_g06.perUnitP.k * goverNordic_g06.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2038]] /* goverNordic_g06.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2466]] /* goverNordic_g06.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */));
  threadData->lastEquationSolved = 5881;
}

/*
equation index: 5882
type: SIMPLE_ASSIGN
g06.PGen = if g06.running.value then 100.0 * goverNordic_g06.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* g06.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5882;
}

/*
equation index: 5883
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.Y0 = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* goverNordic_g06.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5883;
}

/*
equation index: 5884
type: SIMPLE_ASSIGN
$START.goverNordic_g06.limRateLimFirstOrder.limIntegrator.y = goverNordic_g06.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5884};
  ((modelica_real *)((data->modelData->realVarsData[142] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* goverNordic_g06.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[142] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[142].info /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5884;
}

/*
equation index: 5885
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g06.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* goverNordic_g06.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5885;
}

/*
equation index: 5886
type: SIMPLE_ASSIGN
goverNordic_g06.firstOrder1.y_start = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5886};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* goverNordic_g06.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5886;
}

/*
equation index: 5887
type: SIMPLE_ASSIGN
$START.goverNordic_g06.firstOrder1.y = goverNordic_g06.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5887};
  ((modelica_real *)((data->modelData->realVarsData[140] /* goverNordic_g06.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* goverNordic_g06.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[140] /* goverNordic_g06.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* goverNordic_g06.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5887;
}

/*
equation index: 5888
type: SIMPLE_ASSIGN
goverNordic_g06.firstOrder1.y = $START.goverNordic_g06.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[140] /* goverNordic_g06.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5888;
}

/*
equation index: 5889
type: SIMPLE_ASSIGN
$DER.goverNordic_g06.firstOrder1.y = (goverNordic_g06.firstOrder1.k * goverNordic_g06.perUnitP.y - goverNordic_g06.firstOrder1.y) / goverNordic_g06.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* der(goverNordic_g06.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* goverNordic_g06.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2038]] /* goverNordic_g06.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* goverNordic_g06.firstOrder1.T PARAM */),"goverNordic_g06.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5889;
}

/*
equation index: 5890
type: SIMPLE_ASSIGN
goverNordic_g06.const.k = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* goverNordic_g06.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5890;
}

/*
equation index: 5891
type: SIMPLE_ASSIGN
goverNordic_g06.dP.y = goverNordic_g06.const.k - goverNordic_g06.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2026]] /* goverNordic_g06.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* goverNordic_g06.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5891;
}

/*
equation index: 5892
type: SIMPLE_ASSIGN
goverNordic_g06.dOmegaPlusDroop.y = goverNordic_g06.dOmegaPlusDroop.k1 * goverNordic_g06.dOmega.y + goverNordic_g06.dOmegaPlusDroop.k2 * goverNordic_g06.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* goverNordic_g06.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2024]] /* goverNordic_g06.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2442]] /* goverNordic_g06.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2026]] /* goverNordic_g06.dP.y variable */));
  threadData->lastEquationSolved = 5892;
}

/*
equation index: 5893
type: SIMPLE_ASSIGN
goverNordic_g06.govKi.y = goverNordic_g06.govKi.k * goverNordic_g06.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2029]] /* goverNordic_g06.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2448]] /* goverNordic_g06.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5893;
}

/*
equation index: 5894
type: SIMPLE_ASSIGN
$DER.goverNordic_g06.govInt.y = goverNordic_g06.govInt.k * goverNordic_g06.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* der(goverNordic_g06.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2446]] /* goverNordic_g06.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2029]] /* goverNordic_g06.govKi.y variable */));
  threadData->lastEquationSolved = 5894;
}

/*
equation index: 5895
type: SIMPLE_ASSIGN
goverNordic_g06.govKp.y = goverNordic_g06.govKp.k * goverNordic_g06.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2030]] /* goverNordic_g06.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* goverNordic_g06.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5895;
}

/*
equation index: 5896
type: SIMPLE_ASSIGN
goverNordic_g06.govInt.y_start = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2447]] /* goverNordic_g06.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5896;
}

/*
equation index: 5897
type: SIMPLE_ASSIGN
$START.goverNordic_g06.govInt.y = goverNordic_g06.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5897};
  ((modelica_real *)((data->modelData->realVarsData[141] /* goverNordic_g06.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2447]] /* goverNordic_g06.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* goverNordic_g06.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[141] /* goverNordic_g06.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[141].info /* goverNordic_g06.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* goverNordic_g06.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5897;
}

/*
equation index: 5898
type: SIMPLE_ASSIGN
goverNordic_g06.waterFlow.y_start = goverNordic_g06.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2468]] /* goverNordic_g06.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* goverNordic_g06.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5898;
}

/*
equation index: 5899
type: SIMPLE_ASSIGN
$START.goverNordic_g06.waterFlow.y = goverNordic_g06.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5899};
  ((modelica_real *)((data->modelData->realVarsData[143] /* goverNordic_g06.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2468]] /* goverNordic_g06.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[143] /* goverNordic_g06.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[143].info /* goverNordic_g06.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5899;
}

/*
equation index: 5900
type: SIMPLE_ASSIGN
vrNordic_g06.Us0Pu = g06.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4522]] /* vrNordic_g06.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* g06.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5900;
}

/*
equation index: 5901
type: SIMPLE_ASSIGN
$START.vrNordic_g06.UsPu = vrNordic_g06.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5901};
  ((modelica_real *)((data->modelData->realVarsData[3567] /* vrNordic_g06.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4522]] /* vrNordic_g06.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3567] /* vrNordic_g06.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3567].info /* vrNordic_g06.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */));
  threadData->lastEquationSolved = 5901;
}

/*
equation index: 5902
type: SIMPLE_ASSIGN
vrNordic_g06.UsPu = if g06.running.value then if g06.uStatorPu.re == 0.0 and g06.uStatorPu.im == 0.0 then 0.0 else (g06.uStatorPu.re ^ 2.0 + g06.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5902};
  modelica_real tmp1643;
  modelica_real tmp1644;
  modelica_real tmp1645;
  modelica_boolean tmp1646;
  modelica_real tmp1647;
  modelica_boolean tmp1648;
  modelica_real tmp1649;
  tmp1648 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp1648)
  {
    tmp1646 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) == 0.0));
    if(tmp1646)
    {
      tmp1647 = 0.0;
    }
    else
    {
      tmp1643 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */);
      tmp1644 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */);
      tmp1645 = (tmp1643 * tmp1643) + (tmp1644 * tmp1644);
      if(tmp1645 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1645, 0.5);
      }
      tmp1647 = sqrt(tmp1645);
    }
    tmp1649 = tmp1647;
  }
  else
  {
    tmp1649 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */) = tmp1649;
  threadData->lastEquationSolved = 5902;
}

/*
equation index: 5903
type: SIMPLE_ASSIGN
vrNordic_g06.Ir0Pu = g06.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4517]] /* vrNordic_g06.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* g06.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5903;
}

/*
equation index: 5904
type: SIMPLE_ASSIGN
$START.vrNordic_g06.IrPu = vrNordic_g06.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5904};
  ((modelica_real *)((data->modelData->realVarsData[3566] /* vrNordic_g06.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4517]] /* vrNordic_g06.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3566] /* vrNordic_g06.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3566].info /* vrNordic_g06.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */));
  threadData->lastEquationSolved = 5904;
}

/*
equation index: 5905
type: SIMPLE_ASSIGN
vrNordic_g06.IrPu = if g06.running.value then g06.RfPPu * g06.ifPu / (g06.rTfoPu * g06.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* g06.Kuf PARAM */)),"g06.rTfoPu * g06.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5905;
}

/*
equation index: 5906
type: SIMPLE_ASSIGN
vrNordic_g06.dIf.y = vrNordic_g06.IrPu - vrNordic_g06.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4528]] /* vrNordic_g06.const2.k PARAM */);
  threadData->lastEquationSolved = 5906;
}

/*
equation index: 5907
type: SIMPLE_ASSIGN
vrNordic_g06.overExcitationLimitation.y = if vrNordic_g06.dIf.y < -0.1 then -1.0 else if vrNordic_g06.dIf.y < 0.0 then 0.0 else if vrNordic_g06.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g06.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5907};
  modelica_boolean tmp1650;
  modelica_boolean tmp1651;
  modelica_boolean tmp1652;
  modelica_boolean tmp1653;
  modelica_real tmp1654;
  modelica_boolean tmp1655;
  modelica_real tmp1656;
  tmp1650 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */),-0.1);
  tmp1655 = (modelica_boolean)tmp1650;
  if(tmp1655)
  {
    tmp1656 = -1.0;
  }
  else
  {
    tmp1651 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */),0.0);
    tmp1653 = (modelica_boolean)tmp1651;
    if(tmp1653)
    {
      tmp1654 = 0.0;
    }
    else
    {
      tmp1652 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4582]] /* vrNordic_g06.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1654 = (tmp1652?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */));
    }
    tmp1656 = tmp1654;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */) = tmp1656;
  threadData->lastEquationSolved = 5907;
}

/*
equation index: 5908
type: SIMPLE_ASSIGN
vrNordic_g06.gain1.y = vrNordic_g06.gain1.k * vrNordic_g06.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3575]] /* vrNordic_g06.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4534]] /* vrNordic_g06.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */));
  threadData->lastEquationSolved = 5908;
}

/*
equation index: 5909
type: SIMPLE_ASSIGN
vrNordic_g06.Efd0Pu = g06.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4515]] /* vrNordic_g06.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* g06.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5909;
}

/*
equation index: 5910
type: SIMPLE_ASSIGN
$START.vrNordic_g06.limIntegrator.y = vrNordic_g06.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5910};
  ((modelica_real *)((data->modelData->realVarsData[234] /* vrNordic_g06.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4515]] /* vrNordic_g06.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[234] /* vrNordic_g06.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[234].info /* vrNordic_g06.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5910;
}

/*
equation index: 5911
type: SIMPLE_ASSIGN
vrNordic_g06.UsRef0Pu = vrNordic_g06.Efd0Pu / vrNordic_g06.KTgr + vrNordic_g06.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4523]] /* vrNordic_g06.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4515]] /* vrNordic_g06.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4520]] /* vrNordic_g06.KTgr PARAM */),"vrNordic_g06.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4522]] /* vrNordic_g06.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5911;
}

/*
equation index: 5912
type: SIMPLE_ASSIGN
vrNordic_g06.const1.k = vrNordic_g06.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4527]] /* vrNordic_g06.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4523]] /* vrNordic_g06.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5912;
}

/*
equation index: 5913
type: SIMPLE_ASSIGN
vrNordic_g06.dU.y = vrNordic_g06.const1.k - vrNordic_g06.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3571]] /* vrNordic_g06.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4527]] /* vrNordic_g06.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */);
  threadData->lastEquationSolved = 5913;
}

/*
equation index: 5914
type: SIMPLE_ASSIGN
vrNordic_g06.add.y = vrNordic_g06.add.k1 * vrNordic_g06.dU.y + vrNordic_g06.add.k2 * vrNordic_g06.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4524]] /* vrNordic_g06.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3571]] /* vrNordic_g06.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4525]] /* vrNordic_g06.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3585]] /* vrNordic_g06.limiter.y variable */));
  threadData->lastEquationSolved = 5914;
}

/*
equation index: 5915
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.u_start = vrNordic_g06.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4547]] /* vrNordic_g06.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4515]] /* vrNordic_g06.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5915;
}

/*
equation index: 5916
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.Y0 = if vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag.u_start * vrNordic_g06.leadLag.b[2] / vrNordic_g06.leadLag.a_end else if vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5916};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4538]] /* vrNordic_g06.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4547]] /* vrNordic_g06.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4543]] /* vrNordic_g06.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */),"vrNordic_g06.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4549]] /* vrNordic_g06.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5916;
}

/*
equation index: 5917
type: SIMPLE_ASSIGN
$START.vrNordic_g06.leadLag.y = vrNordic_g06.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5917};
  ((modelica_real *)((data->modelData->realVarsData[3578] /* vrNordic_g06.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4538]] /* vrNordic_g06.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3578] /* vrNordic_g06.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3578].info /* vrNordic_g06.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */));
  threadData->lastEquationSolved = 5917;
}

/*
equation index: 5918
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.X0[1] = if vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag.u_start / vrNordic_g06.leadLag.a_end else if vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4537]] /* vrNordic_g06.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4547]] /* vrNordic_g06.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */),"vrNordic_g06.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[512]] /* vrNordic_g06.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4548]] /* vrNordic_g06.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5918;
}

/*
equation index: 5919
type: SIMPLE_ASSIGN
$START.vrNordic_g06.leadLag.x_scaled[1] = vrNordic_g06.leadLag.X0[1] * vrNordic_g06.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5919};
  ((modelica_real *)((data->modelData->realVarsData[231] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4537]] /* vrNordic_g06.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[231] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[231].info /* vrNordic_g06.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5919;
}

/*
equation index: 5920
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.x_scaled[1] = $START.vrNordic_g06.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[231] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5920;
}

/*
equation index: 5921
type: SIMPLE_ASSIGN
$START.vrNordic_g06.leadLag.x[1] = vrNordic_g06.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5921};
  ((modelica_real *)((data->modelData->realVarsData[3577] /* vrNordic_g06.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4537]] /* vrNordic_g06.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3577] /* vrNordic_g06.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3577].info /* vrNordic_g06.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5921;
}

/*
equation index: 5922
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.x[1] = vrNordic_g06.leadLag.x_scaled[1] / vrNordic_g06.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */),"vrNordic_g06.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5922;
}

/*
equation index: 5923
type: SIMPLE_ASSIGN
vrNordic_g06.limIntegrator.y_start = vrNordic_g06.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4579]] /* vrNordic_g06.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4515]] /* vrNordic_g06.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5923;
}

/*
equation index: 5924
type: SIMPLE_ASSIGN
goverNordic_g05.Pm0Pu = g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5924;
}

/*
equation index: 5925
type: SIMPLE_ASSIGN
$START.goverNordic_g05.PGenPu = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5925};
  ((modelica_real *)((data->modelData->realVarsData[2004] /* goverNordic_g05.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[2004] /* goverNordic_g05.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2004].info /* goverNordic_g05.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */));
  threadData->lastEquationSolved = 5925;
}

/*
equation index: 5926
type: SIMPLE_ASSIGN
goverNordic_g05.PGenPu = if g05.running.value then (-g05.terminal.V.re) * g05.terminal.i.re - g05.terminal.V.im * g05.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5926;
}

/*
equation index: 5927
type: SIMPLE_ASSIGN
goverNordic_g05.perUnitP.y = goverNordic_g05.perUnitP.k * goverNordic_g05.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2020]] /* goverNordic_g05.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* goverNordic_g05.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */));
  threadData->lastEquationSolved = 5927;
}

/*
equation index: 5928
type: SIMPLE_ASSIGN
g05.PGen = if g05.running.value then 100.0 * goverNordic_g05.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* g05.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5928;
}

/*
equation index: 5929
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.Y0 = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* goverNordic_g05.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5929;
}

/*
equation index: 5930
type: SIMPLE_ASSIGN
$START.goverNordic_g05.limRateLimFirstOrder.limIntegrator.y = goverNordic_g05.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5930};
  ((modelica_real *)((data->modelData->realVarsData[138] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* goverNordic_g05.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[138] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5930;
}

/*
equation index: 5931
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g05.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2426]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* goverNordic_g05.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5931;
}

/*
equation index: 5932
type: SIMPLE_ASSIGN
goverNordic_g05.firstOrder1.y_start = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* goverNordic_g05.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5932;
}

/*
equation index: 5933
type: SIMPLE_ASSIGN
$START.goverNordic_g05.firstOrder1.y = goverNordic_g05.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5933};
  ((modelica_real *)((data->modelData->realVarsData[136] /* goverNordic_g05.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* goverNordic_g05.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[136] /* goverNordic_g05.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[136].info /* goverNordic_g05.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5933;
}

/*
equation index: 5934
type: SIMPLE_ASSIGN
goverNordic_g05.firstOrder1.y = $START.goverNordic_g05.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[136] /* goverNordic_g05.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5934;
}

/*
equation index: 5935
type: SIMPLE_ASSIGN
$DER.goverNordic_g05.firstOrder1.y = (goverNordic_g05.firstOrder1.k * goverNordic_g05.perUnitP.y - goverNordic_g05.firstOrder1.y) / goverNordic_g05.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* der(goverNordic_g05.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2408]] /* goverNordic_g05.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2020]] /* goverNordic_g05.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* goverNordic_g05.firstOrder1.T PARAM */),"goverNordic_g05.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5935;
}

/*
equation index: 5936
type: SIMPLE_ASSIGN
goverNordic_g05.const.k = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2402]] /* goverNordic_g05.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5936;
}

/*
equation index: 5937
type: SIMPLE_ASSIGN
goverNordic_g05.dP.y = goverNordic_g05.const.k - goverNordic_g05.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2008]] /* goverNordic_g05.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2402]] /* goverNordic_g05.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5937;
}

/*
equation index: 5938
type: SIMPLE_ASSIGN
goverNordic_g05.dOmegaPlusDroop.y = goverNordic_g05.dOmegaPlusDroop.k1 * goverNordic_g05.dOmega.y + goverNordic_g05.dOmegaPlusDroop.k2 * goverNordic_g05.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* goverNordic_g05.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2006]] /* goverNordic_g05.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2406]] /* goverNordic_g05.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2008]] /* goverNordic_g05.dP.y variable */));
  threadData->lastEquationSolved = 5938;
}

/*
equation index: 5939
type: SIMPLE_ASSIGN
goverNordic_g05.govKi.y = goverNordic_g05.govKi.k * goverNordic_g05.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2011]] /* goverNordic_g05.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* goverNordic_g05.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5939;
}

/*
equation index: 5940
type: SIMPLE_ASSIGN
$DER.goverNordic_g05.govInt.y = goverNordic_g05.govInt.k * goverNordic_g05.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* der(goverNordic_g05.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* goverNordic_g05.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2011]] /* goverNordic_g05.govKi.y variable */));
  threadData->lastEquationSolved = 5940;
}

/*
equation index: 5941
type: SIMPLE_ASSIGN
goverNordic_g05.govKp.y = goverNordic_g05.govKp.k * goverNordic_g05.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2012]] /* goverNordic_g05.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2413]] /* goverNordic_g05.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5941;
}

/*
equation index: 5942
type: SIMPLE_ASSIGN
goverNordic_g05.govInt.y_start = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2411]] /* goverNordic_g05.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5942;
}

/*
equation index: 5943
type: SIMPLE_ASSIGN
$START.goverNordic_g05.govInt.y = goverNordic_g05.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5943};
  ((modelica_real *)((data->modelData->realVarsData[137] /* goverNordic_g05.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2411]] /* goverNordic_g05.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* goverNordic_g05.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[137] /* goverNordic_g05.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* goverNordic_g05.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* goverNordic_g05.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5943;
}

/*
equation index: 5944
type: SIMPLE_ASSIGN
goverNordic_g05.waterFlow.y_start = goverNordic_g05.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* goverNordic_g05.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* goverNordic_g05.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5944;
}

/*
equation index: 5945
type: SIMPLE_ASSIGN
$START.goverNordic_g05.waterFlow.y = goverNordic_g05.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5945};
  ((modelica_real *)((data->modelData->realVarsData[139] /* goverNordic_g05.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* goverNordic_g05.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[139] /* goverNordic_g05.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* goverNordic_g05.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5945;
}

/*
equation index: 5946
type: SIMPLE_ASSIGN
vrNordic_g05.Us0Pu = g05.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4443]] /* vrNordic_g05.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* g05.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5946;
}

/*
equation index: 5947
type: SIMPLE_ASSIGN
$START.vrNordic_g05.UsPu = vrNordic_g05.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5947};
  ((modelica_real *)((data->modelData->realVarsData[3543] /* vrNordic_g05.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4443]] /* vrNordic_g05.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3543] /* vrNordic_g05.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3543].info /* vrNordic_g05.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */));
  threadData->lastEquationSolved = 5947;
}

/*
equation index: 5948
type: SIMPLE_ASSIGN
vrNordic_g05.UsPu = if g05.running.value then if g05.uStatorPu.re == 0.0 and g05.uStatorPu.im == 0.0 then 0.0 else (g05.uStatorPu.re ^ 2.0 + g05.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5948};
  modelica_real tmp1657;
  modelica_real tmp1658;
  modelica_real tmp1659;
  modelica_boolean tmp1660;
  modelica_real tmp1661;
  modelica_boolean tmp1662;
  modelica_real tmp1663;
  tmp1662 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp1662)
  {
    tmp1660 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) == 0.0));
    if(tmp1660)
    {
      tmp1661 = 0.0;
    }
    else
    {
      tmp1657 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */);
      tmp1658 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */);
      tmp1659 = (tmp1657 * tmp1657) + (tmp1658 * tmp1658);
      if(tmp1659 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1659, 0.5);
      }
      tmp1661 = sqrt(tmp1659);
    }
    tmp1663 = tmp1661;
  }
  else
  {
    tmp1663 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */) = tmp1663;
  threadData->lastEquationSolved = 5948;
}

/*
equation index: 5949
type: SIMPLE_ASSIGN
vrNordic_g05.Ir0Pu = g05.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4438]] /* vrNordic_g05.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* g05.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5949;
}

/*
equation index: 5950
type: SIMPLE_ASSIGN
$START.vrNordic_g05.IrPu = vrNordic_g05.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5950};
  ((modelica_real *)((data->modelData->realVarsData[3542] /* vrNordic_g05.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4438]] /* vrNordic_g05.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3542] /* vrNordic_g05.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3542].info /* vrNordic_g05.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */));
  threadData->lastEquationSolved = 5950;
}

/*
equation index: 5951
type: SIMPLE_ASSIGN
vrNordic_g05.IrPu = if g05.running.value then g05.RfPPu * g05.ifPu / (g05.rTfoPu * g05.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* g05.Kuf PARAM */)),"g05.rTfoPu * g05.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5951;
}

/*
equation index: 5952
type: SIMPLE_ASSIGN
vrNordic_g05.dIf.y = vrNordic_g05.IrPu - vrNordic_g05.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4449]] /* vrNordic_g05.const2.k PARAM */);
  threadData->lastEquationSolved = 5952;
}

/*
equation index: 5953
type: SIMPLE_ASSIGN
vrNordic_g05.overExcitationLimitation.y = if vrNordic_g05.dIf.y < -0.1 then -1.0 else if vrNordic_g05.dIf.y < 0.0 then 0.0 else if vrNordic_g05.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g05.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5953};
  modelica_boolean tmp1664;
  modelica_boolean tmp1665;
  modelica_boolean tmp1666;
  modelica_boolean tmp1667;
  modelica_real tmp1668;
  modelica_boolean tmp1669;
  modelica_real tmp1670;
  tmp1664 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */),-0.1);
  tmp1669 = (modelica_boolean)tmp1664;
  if(tmp1669)
  {
    tmp1670 = -1.0;
  }
  else
  {
    tmp1665 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */),0.0);
    tmp1667 = (modelica_boolean)tmp1665;
    if(tmp1667)
    {
      tmp1668 = 0.0;
    }
    else
    {
      tmp1666 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4503]] /* vrNordic_g05.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1668 = (tmp1666?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */));
    }
    tmp1670 = tmp1668;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */) = tmp1670;
  threadData->lastEquationSolved = 5953;
}

/*
equation index: 5954
type: SIMPLE_ASSIGN
vrNordic_g05.gain1.y = vrNordic_g05.gain1.k * vrNordic_g05.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3551]] /* vrNordic_g05.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4455]] /* vrNordic_g05.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */));
  threadData->lastEquationSolved = 5954;
}

/*
equation index: 5955
type: SIMPLE_ASSIGN
vrNordic_g05.Efd0Pu = g05.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4436]] /* vrNordic_g05.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* g05.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5955;
}

/*
equation index: 5956
type: SIMPLE_ASSIGN
$START.vrNordic_g05.limIntegrator.y = vrNordic_g05.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5956};
  ((modelica_real *)((data->modelData->realVarsData[228] /* vrNordic_g05.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4436]] /* vrNordic_g05.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[228] /* vrNordic_g05.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[228].info /* vrNordic_g05.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5956;
}

/*
equation index: 5957
type: SIMPLE_ASSIGN
vrNordic_g05.UsRef0Pu = vrNordic_g05.Efd0Pu / vrNordic_g05.KTgr + vrNordic_g05.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4444]] /* vrNordic_g05.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4436]] /* vrNordic_g05.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4441]] /* vrNordic_g05.KTgr PARAM */),"vrNordic_g05.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4443]] /* vrNordic_g05.Us0Pu PARAM */);
  threadData->lastEquationSolved = 5957;
}

/*
equation index: 5958
type: SIMPLE_ASSIGN
vrNordic_g05.const1.k = vrNordic_g05.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4448]] /* vrNordic_g05.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4444]] /* vrNordic_g05.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 5958;
}

/*
equation index: 5959
type: SIMPLE_ASSIGN
vrNordic_g05.dU.y = vrNordic_g05.const1.k - vrNordic_g05.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3547]] /* vrNordic_g05.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4448]] /* vrNordic_g05.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */);
  threadData->lastEquationSolved = 5959;
}

/*
equation index: 5960
type: SIMPLE_ASSIGN
vrNordic_g05.add.y = vrNordic_g05.add.k1 * vrNordic_g05.dU.y + vrNordic_g05.add.k2 * vrNordic_g05.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4445]] /* vrNordic_g05.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3547]] /* vrNordic_g05.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4446]] /* vrNordic_g05.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3561]] /* vrNordic_g05.limiter.y variable */));
  threadData->lastEquationSolved = 5960;
}

/*
equation index: 5961
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.u_start = vrNordic_g05.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4468]] /* vrNordic_g05.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4436]] /* vrNordic_g05.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5961;
}

/*
equation index: 5962
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.Y0 = if vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag.u_start * vrNordic_g05.leadLag.b[2] / vrNordic_g05.leadLag.a_end else if vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4459]] /* vrNordic_g05.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4468]] /* vrNordic_g05.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4464]] /* vrNordic_g05.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */),"vrNordic_g05.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4470]] /* vrNordic_g05.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 5962;
}

/*
equation index: 5963
type: SIMPLE_ASSIGN
$START.vrNordic_g05.leadLag.y = vrNordic_g05.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5963};
  ((modelica_real *)((data->modelData->realVarsData[3554] /* vrNordic_g05.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4459]] /* vrNordic_g05.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3554] /* vrNordic_g05.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3554].info /* vrNordic_g05.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */));
  threadData->lastEquationSolved = 5963;
}

/*
equation index: 5964
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.X0[1] = if vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag.u_start / vrNordic_g05.leadLag.a_end else if vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4458]] /* vrNordic_g05.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4468]] /* vrNordic_g05.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */),"vrNordic_g05.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[496]] /* vrNordic_g05.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4469]] /* vrNordic_g05.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 5964;
}

/*
equation index: 5965
type: SIMPLE_ASSIGN
$START.vrNordic_g05.leadLag.x_scaled[1] = vrNordic_g05.leadLag.X0[1] * vrNordic_g05.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5965};
  ((modelica_real *)((data->modelData->realVarsData[225] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4458]] /* vrNordic_g05.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[225] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[225].info /* vrNordic_g05.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 5965;
}

/*
equation index: 5966
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.x_scaled[1] = $START.vrNordic_g05.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[225] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5966;
}

/*
equation index: 5967
type: SIMPLE_ASSIGN
$START.vrNordic_g05.leadLag.x[1] = vrNordic_g05.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5967};
  ((modelica_real *)((data->modelData->realVarsData[3553] /* vrNordic_g05.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4458]] /* vrNordic_g05.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3553] /* vrNordic_g05.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3553].info /* vrNordic_g05.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 5967;
}

/*
equation index: 5968
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.x[1] = vrNordic_g05.leadLag.x_scaled[1] / vrNordic_g05.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */),"vrNordic_g05.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 5968;
}

/*
equation index: 5969
type: SIMPLE_ASSIGN
vrNordic_g05.limIntegrator.y_start = vrNordic_g05.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4500]] /* vrNordic_g05.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4436]] /* vrNordic_g05.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 5969;
}

/*
equation index: 5970
type: SIMPLE_ASSIGN
goverNordic_g04.Pm0Pu = g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5970;
}

/*
equation index: 5971
type: SIMPLE_ASSIGN
$START.goverNordic_g04.PGenPu = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5971};
  ((modelica_real *)((data->modelData->realVarsData[1986] /* goverNordic_g04.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[1986] /* goverNordic_g04.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1986].info /* goverNordic_g04.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */));
  threadData->lastEquationSolved = 5971;
}

/*
equation index: 5972
type: SIMPLE_ASSIGN
goverNordic_g04.PGenPu = if g04.running.value then (-g04.terminal.V.re) * g04.terminal.i.re - g04.terminal.V.im * g04.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 5972;
}

/*
equation index: 5973
type: SIMPLE_ASSIGN
goverNordic_g04.perUnitP.y = goverNordic_g04.perUnitP.k * goverNordic_g04.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2002]] /* goverNordic_g04.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* goverNordic_g04.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */));
  threadData->lastEquationSolved = 5973;
}

/*
equation index: 5974
type: SIMPLE_ASSIGN
g04.PGen = if g04.running.value then 100.0 * goverNordic_g04.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* g04.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 5974;
}

/*
equation index: 5975
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.Y0 = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2383]] /* goverNordic_g04.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5975;
}

/*
equation index: 5976
type: SIMPLE_ASSIGN
$START.goverNordic_g04.limRateLimFirstOrder.limIntegrator.y = goverNordic_g04.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5976};
  ((modelica_real *)((data->modelData->realVarsData[134] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2383]] /* goverNordic_g04.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[134] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 5976;
}

/*
equation index: 5977
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g04.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2383]] /* goverNordic_g04.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 5977;
}

/*
equation index: 5978
type: SIMPLE_ASSIGN
goverNordic_g04.firstOrder1.y_start = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2373]] /* goverNordic_g04.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5978;
}

/*
equation index: 5979
type: SIMPLE_ASSIGN
$START.goverNordic_g04.firstOrder1.y = goverNordic_g04.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5979};
  ((modelica_real *)((data->modelData->realVarsData[132] /* goverNordic_g04.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2373]] /* goverNordic_g04.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[132] /* goverNordic_g04.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* goverNordic_g04.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 5979;
}

/*
equation index: 5980
type: SIMPLE_ASSIGN
goverNordic_g04.firstOrder1.y = $START.goverNordic_g04.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[132] /* goverNordic_g04.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 5980;
}

/*
equation index: 5981
type: SIMPLE_ASSIGN
$DER.goverNordic_g04.firstOrder1.y = (goverNordic_g04.firstOrder1.k * goverNordic_g04.perUnitP.y - goverNordic_g04.firstOrder1.y) / goverNordic_g04.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(goverNordic_g04.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* goverNordic_g04.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2002]] /* goverNordic_g04.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2371]] /* goverNordic_g04.firstOrder1.T PARAM */),"goverNordic_g04.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 5981;
}

/*
equation index: 5982
type: SIMPLE_ASSIGN
goverNordic_g04.const.k = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* goverNordic_g04.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5982;
}

/*
equation index: 5983
type: SIMPLE_ASSIGN
goverNordic_g04.dP.y = goverNordic_g04.const.k - goverNordic_g04.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1990]] /* goverNordic_g04.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* goverNordic_g04.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 5983;
}

/*
equation index: 5984
type: SIMPLE_ASSIGN
goverNordic_g04.dOmegaPlusDroop.y = goverNordic_g04.dOmegaPlusDroop.k1 * goverNordic_g04.dOmega.y + goverNordic_g04.dOmegaPlusDroop.k2 * goverNordic_g04.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2369]] /* goverNordic_g04.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1988]] /* goverNordic_g04.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* goverNordic_g04.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1990]] /* goverNordic_g04.dP.y variable */));
  threadData->lastEquationSolved = 5984;
}

/*
equation index: 5985
type: SIMPLE_ASSIGN
goverNordic_g04.govKi.y = goverNordic_g04.govKi.k * goverNordic_g04.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1993]] /* goverNordic_g04.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2376]] /* goverNordic_g04.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5985;
}

/*
equation index: 5986
type: SIMPLE_ASSIGN
$DER.goverNordic_g04.govInt.y = goverNordic_g04.govInt.k * goverNordic_g04.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(goverNordic_g04.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2374]] /* goverNordic_g04.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1993]] /* goverNordic_g04.govKi.y variable */));
  threadData->lastEquationSolved = 5986;
}

/*
equation index: 5987
type: SIMPLE_ASSIGN
goverNordic_g04.govKp.y = goverNordic_g04.govKp.k * goverNordic_g04.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1994]] /* goverNordic_g04.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2377]] /* goverNordic_g04.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 5987;
}

/*
equation index: 5988
type: SIMPLE_ASSIGN
goverNordic_g04.govInt.y_start = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2375]] /* goverNordic_g04.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5988;
}

/*
equation index: 5989
type: SIMPLE_ASSIGN
$START.goverNordic_g04.govInt.y = goverNordic_g04.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5989};
  ((modelica_real *)((data->modelData->realVarsData[133] /* goverNordic_g04.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2375]] /* goverNordic_g04.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* goverNordic_g04.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[133] /* goverNordic_g04.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[133].info /* goverNordic_g04.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* goverNordic_g04.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 5989;
}

/*
equation index: 5990
type: SIMPLE_ASSIGN
goverNordic_g04.waterFlow.y_start = goverNordic_g04.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* goverNordic_g04.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* goverNordic_g04.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 5990;
}

/*
equation index: 5991
type: SIMPLE_ASSIGN
$START.goverNordic_g04.waterFlow.y = goverNordic_g04.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5991};
  ((modelica_real *)((data->modelData->realVarsData[135] /* goverNordic_g04.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* goverNordic_g04.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[135] /* goverNordic_g04.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* goverNordic_g04.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 5991;
}

/*
equation index: 5992
type: SIMPLE_ASSIGN
vrNordic_g04.Us0Pu = g04.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4364]] /* vrNordic_g04.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* g04.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 5992;
}

/*
equation index: 5993
type: SIMPLE_ASSIGN
$START.vrNordic_g04.UsPu = vrNordic_g04.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5993};
  ((modelica_real *)((data->modelData->realVarsData[3519] /* vrNordic_g04.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4364]] /* vrNordic_g04.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3519] /* vrNordic_g04.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3519].info /* vrNordic_g04.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */));
  threadData->lastEquationSolved = 5993;
}

/*
equation index: 5994
type: SIMPLE_ASSIGN
vrNordic_g04.UsPu = if g04.running.value then if g04.uStatorPu.re == 0.0 and g04.uStatorPu.im == 0.0 then 0.0 else (g04.uStatorPu.re ^ 2.0 + g04.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5994};
  modelica_real tmp1671;
  modelica_real tmp1672;
  modelica_real tmp1673;
  modelica_boolean tmp1674;
  modelica_real tmp1675;
  modelica_boolean tmp1676;
  modelica_real tmp1677;
  tmp1676 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp1676)
  {
    tmp1674 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) == 0.0));
    if(tmp1674)
    {
      tmp1675 = 0.0;
    }
    else
    {
      tmp1671 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */);
      tmp1672 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */);
      tmp1673 = (tmp1671 * tmp1671) + (tmp1672 * tmp1672);
      if(tmp1673 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1673, 0.5);
      }
      tmp1675 = sqrt(tmp1673);
    }
    tmp1677 = tmp1675;
  }
  else
  {
    tmp1677 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */) = tmp1677;
  threadData->lastEquationSolved = 5994;
}

/*
equation index: 5995
type: SIMPLE_ASSIGN
vrNordic_g04.Ir0Pu = g04.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4359]] /* vrNordic_g04.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* g04.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 5995;
}

/*
equation index: 5996
type: SIMPLE_ASSIGN
$START.vrNordic_g04.IrPu = vrNordic_g04.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5996};
  ((modelica_real *)((data->modelData->realVarsData[3518] /* vrNordic_g04.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4359]] /* vrNordic_g04.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3518] /* vrNordic_g04.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3518].info /* vrNordic_g04.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */));
  threadData->lastEquationSolved = 5996;
}

/*
equation index: 5997
type: SIMPLE_ASSIGN
vrNordic_g04.IrPu = if g04.running.value then g04.RfPPu * g04.ifPu / (g04.rTfoPu * g04.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* g04.Kuf PARAM */)),"g04.rTfoPu * g04.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 5997;
}

/*
equation index: 5998
type: SIMPLE_ASSIGN
vrNordic_g04.dIf.y = vrNordic_g04.IrPu - vrNordic_g04.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4370]] /* vrNordic_g04.const2.k PARAM */);
  threadData->lastEquationSolved = 5998;
}

/*
equation index: 5999
type: SIMPLE_ASSIGN
vrNordic_g04.overExcitationLimitation.y = if vrNordic_g04.dIf.y < -0.1 then -1.0 else if vrNordic_g04.dIf.y < 0.0 then 0.0 else if vrNordic_g04.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g04.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5999};
  modelica_boolean tmp1678;
  modelica_boolean tmp1679;
  modelica_boolean tmp1680;
  modelica_boolean tmp1681;
  modelica_real tmp1682;
  modelica_boolean tmp1683;
  modelica_real tmp1684;
  tmp1678 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */),-0.1);
  tmp1683 = (modelica_boolean)tmp1678;
  if(tmp1683)
  {
    tmp1684 = -1.0;
  }
  else
  {
    tmp1679 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */),0.0);
    tmp1681 = (modelica_boolean)tmp1679;
    if(tmp1681)
    {
      tmp1682 = 0.0;
    }
    else
    {
      tmp1680 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4424]] /* vrNordic_g04.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1682 = (tmp1680?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */));
    }
    tmp1684 = tmp1682;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */) = tmp1684;
  threadData->lastEquationSolved = 5999;
}

/*
equation index: 6000
type: SIMPLE_ASSIGN
vrNordic_g04.gain1.y = vrNordic_g04.gain1.k * vrNordic_g04.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3527]] /* vrNordic_g04.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4376]] /* vrNordic_g04.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */));
  threadData->lastEquationSolved = 6000;
}

/*
equation index: 6001
type: SIMPLE_ASSIGN
vrNordic_g04.Efd0Pu = g04.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4357]] /* vrNordic_g04.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* g04.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6001;
}

/*
equation index: 6002
type: SIMPLE_ASSIGN
$START.vrNordic_g04.limIntegrator.y = vrNordic_g04.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6002};
  ((modelica_real *)((data->modelData->realVarsData[222] /* vrNordic_g04.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4357]] /* vrNordic_g04.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[222] /* vrNordic_g04.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[222].info /* vrNordic_g04.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6002;
}

/*
equation index: 6003
type: SIMPLE_ASSIGN
vrNordic_g04.UsRef0Pu = vrNordic_g04.Efd0Pu / vrNordic_g04.KTgr + vrNordic_g04.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4365]] /* vrNordic_g04.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4357]] /* vrNordic_g04.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4362]] /* vrNordic_g04.KTgr PARAM */),"vrNordic_g04.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4364]] /* vrNordic_g04.Us0Pu PARAM */);
  threadData->lastEquationSolved = 6003;
}

/*
equation index: 6004
type: SIMPLE_ASSIGN
vrNordic_g04.const1.k = vrNordic_g04.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4369]] /* vrNordic_g04.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4365]] /* vrNordic_g04.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 6004;
}

/*
equation index: 6005
type: SIMPLE_ASSIGN
vrNordic_g04.dU.y = vrNordic_g04.const1.k - vrNordic_g04.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* vrNordic_g04.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4369]] /* vrNordic_g04.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */);
  threadData->lastEquationSolved = 6005;
}

/*
equation index: 6006
type: SIMPLE_ASSIGN
vrNordic_g04.add.y = vrNordic_g04.add.k1 * vrNordic_g04.dU.y + vrNordic_g04.add.k2 * vrNordic_g04.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4366]] /* vrNordic_g04.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* vrNordic_g04.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4367]] /* vrNordic_g04.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3537]] /* vrNordic_g04.limiter.y variable */));
  threadData->lastEquationSolved = 6006;
}

/*
equation index: 6007
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.u_start = vrNordic_g04.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4389]] /* vrNordic_g04.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4357]] /* vrNordic_g04.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6007;
}

/*
equation index: 6008
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.Y0 = if vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag.u_start * vrNordic_g04.leadLag.b[2] / vrNordic_g04.leadLag.a_end else if vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4380]] /* vrNordic_g04.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4389]] /* vrNordic_g04.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4385]] /* vrNordic_g04.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */),"vrNordic_g04.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4391]] /* vrNordic_g04.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 6008;
}

/*
equation index: 6009
type: SIMPLE_ASSIGN
$START.vrNordic_g04.leadLag.y = vrNordic_g04.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6009};
  ((modelica_real *)((data->modelData->realVarsData[3530] /* vrNordic_g04.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4380]] /* vrNordic_g04.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3530] /* vrNordic_g04.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3530].info /* vrNordic_g04.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */));
  threadData->lastEquationSolved = 6009;
}

/*
equation index: 6010
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.X0[1] = if vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag.u_start / vrNordic_g04.leadLag.a_end else if vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4379]] /* vrNordic_g04.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4389]] /* vrNordic_g04.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */),"vrNordic_g04.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[480]] /* vrNordic_g04.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4390]] /* vrNordic_g04.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 6010;
}

/*
equation index: 6011
type: SIMPLE_ASSIGN
$START.vrNordic_g04.leadLag.x_scaled[1] = vrNordic_g04.leadLag.X0[1] * vrNordic_g04.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6011};
  ((modelica_real *)((data->modelData->realVarsData[219] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4379]] /* vrNordic_g04.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[219] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[219].info /* vrNordic_g04.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 6011;
}

/*
equation index: 6012
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.x_scaled[1] = $START.vrNordic_g04.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[219] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6012;
}

/*
equation index: 6013
type: SIMPLE_ASSIGN
$START.vrNordic_g04.leadLag.x[1] = vrNordic_g04.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6013};
  ((modelica_real *)((data->modelData->realVarsData[3529] /* vrNordic_g04.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4379]] /* vrNordic_g04.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3529] /* vrNordic_g04.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3529].info /* vrNordic_g04.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 6013;
}

/*
equation index: 6014
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.x[1] = vrNordic_g04.leadLag.x_scaled[1] / vrNordic_g04.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */),"vrNordic_g04.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 6014;
}

/*
equation index: 6015
type: SIMPLE_ASSIGN
vrNordic_g04.limIntegrator.y_start = vrNordic_g04.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4421]] /* vrNordic_g04.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4357]] /* vrNordic_g04.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6015;
}

/*
equation index: 6016
type: SIMPLE_ASSIGN
goverNordic_g03.Pm0Pu = g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6016;
}

/*
equation index: 6017
type: SIMPLE_ASSIGN
$START.goverNordic_g03.PGenPu = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6017};
  ((modelica_real *)((data->modelData->realVarsData[1968] /* goverNordic_g03.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[1968] /* goverNordic_g03.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1968].info /* goverNordic_g03.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */));
  threadData->lastEquationSolved = 6017;
}

/*
equation index: 6018
type: SIMPLE_ASSIGN
goverNordic_g03.PGenPu = if g03.running.value then (-g03.terminal.V.re) * g03.terminal.i.re - g03.terminal.V.im * g03.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 6018;
}

/*
equation index: 6019
type: SIMPLE_ASSIGN
goverNordic_g03.perUnitP.y = goverNordic_g03.perUnitP.k * goverNordic_g03.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1984]] /* goverNordic_g03.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* goverNordic_g03.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */));
  threadData->lastEquationSolved = 6019;
}

/*
equation index: 6020
type: SIMPLE_ASSIGN
g03.PGen = if g03.running.value then 100.0 * goverNordic_g03.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* g03.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 6020;
}

/*
equation index: 6021
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.Y0 = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6021};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2347]] /* goverNordic_g03.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6021;
}

/*
equation index: 6022
type: SIMPLE_ASSIGN
$START.goverNordic_g03.limRateLimFirstOrder.limIntegrator.y = goverNordic_g03.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6022};
  ((modelica_real *)((data->modelData->realVarsData[130] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2347]] /* goverNordic_g03.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[130] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6022;
}

/*
equation index: 6023
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g03.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2354]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2347]] /* goverNordic_g03.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 6023;
}

/*
equation index: 6024
type: SIMPLE_ASSIGN
goverNordic_g03.firstOrder1.y_start = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* goverNordic_g03.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6024;
}

/*
equation index: 6025
type: SIMPLE_ASSIGN
$START.goverNordic_g03.firstOrder1.y = goverNordic_g03.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6025};
  ((modelica_real *)((data->modelData->realVarsData[128] /* goverNordic_g03.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* goverNordic_g03.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[128] /* goverNordic_g03.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* goverNordic_g03.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 6025;
}

/*
equation index: 6026
type: SIMPLE_ASSIGN
goverNordic_g03.firstOrder1.y = $START.goverNordic_g03.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[128] /* goverNordic_g03.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6026;
}

/*
equation index: 6027
type: SIMPLE_ASSIGN
$DER.goverNordic_g03.firstOrder1.y = (goverNordic_g03.firstOrder1.k * goverNordic_g03.perUnitP.y - goverNordic_g03.firstOrder1.y) / goverNordic_g03.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* der(goverNordic_g03.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* goverNordic_g03.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1984]] /* goverNordic_g03.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* goverNordic_g03.firstOrder1.T PARAM */),"goverNordic_g03.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 6027;
}

/*
equation index: 6028
type: SIMPLE_ASSIGN
goverNordic_g03.const.k = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2330]] /* goverNordic_g03.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6028;
}

/*
equation index: 6029
type: SIMPLE_ASSIGN
goverNordic_g03.dP.y = goverNordic_g03.const.k - goverNordic_g03.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1972]] /* goverNordic_g03.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2330]] /* goverNordic_g03.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 6029;
}

/*
equation index: 6030
type: SIMPLE_ASSIGN
goverNordic_g03.dOmegaPlusDroop.y = goverNordic_g03.dOmegaPlusDroop.k1 * goverNordic_g03.dOmega.y + goverNordic_g03.dOmegaPlusDroop.k2 * goverNordic_g03.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2333]] /* goverNordic_g03.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1970]] /* goverNordic_g03.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* goverNordic_g03.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1972]] /* goverNordic_g03.dP.y variable */));
  threadData->lastEquationSolved = 6030;
}

/*
equation index: 6031
type: SIMPLE_ASSIGN
goverNordic_g03.govKi.y = goverNordic_g03.govKi.k * goverNordic_g03.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* goverNordic_g03.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2340]] /* goverNordic_g03.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6031;
}

/*
equation index: 6032
type: SIMPLE_ASSIGN
$DER.goverNordic_g03.govInt.y = goverNordic_g03.govInt.k * goverNordic_g03.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* der(goverNordic_g03.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2338]] /* goverNordic_g03.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* goverNordic_g03.govKi.y variable */));
  threadData->lastEquationSolved = 6032;
}

/*
equation index: 6033
type: SIMPLE_ASSIGN
goverNordic_g03.govKp.y = goverNordic_g03.govKp.k * goverNordic_g03.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* goverNordic_g03.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2341]] /* goverNordic_g03.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6033;
}

/*
equation index: 6034
type: SIMPLE_ASSIGN
goverNordic_g03.govInt.y_start = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2339]] /* goverNordic_g03.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6034;
}

/*
equation index: 6035
type: SIMPLE_ASSIGN
$START.goverNordic_g03.govInt.y = goverNordic_g03.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6035};
  ((modelica_real *)((data->modelData->realVarsData[129] /* goverNordic_g03.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2339]] /* goverNordic_g03.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* goverNordic_g03.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[129] /* goverNordic_g03.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* goverNordic_g03.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* goverNordic_g03.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6035;
}

/*
equation index: 6036
type: SIMPLE_ASSIGN
goverNordic_g03.waterFlow.y_start = goverNordic_g03.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* goverNordic_g03.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* goverNordic_g03.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6036;
}

/*
equation index: 6037
type: SIMPLE_ASSIGN
$START.goverNordic_g03.waterFlow.y = goverNordic_g03.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6037};
  ((modelica_real *)((data->modelData->realVarsData[131] /* goverNordic_g03.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* goverNordic_g03.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[131] /* goverNordic_g03.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* goverNordic_g03.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 6037;
}

/*
equation index: 6038
type: SIMPLE_ASSIGN
vrNordic_g03.Us0Pu = g03.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4285]] /* vrNordic_g03.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* g03.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 6038;
}

/*
equation index: 6039
type: SIMPLE_ASSIGN
$START.vrNordic_g03.UsPu = vrNordic_g03.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6039};
  ((modelica_real *)((data->modelData->realVarsData[3495] /* vrNordic_g03.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4285]] /* vrNordic_g03.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3495] /* vrNordic_g03.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3495].info /* vrNordic_g03.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */));
  threadData->lastEquationSolved = 6039;
}

/*
equation index: 6040
type: SIMPLE_ASSIGN
vrNordic_g03.UsPu = if g03.running.value then if g03.uStatorPu.re == 0.0 and g03.uStatorPu.im == 0.0 then 0.0 else (g03.uStatorPu.re ^ 2.0 + g03.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6040};
  modelica_real tmp1685;
  modelica_real tmp1686;
  modelica_real tmp1687;
  modelica_boolean tmp1688;
  modelica_real tmp1689;
  modelica_boolean tmp1690;
  modelica_real tmp1691;
  tmp1690 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp1690)
  {
    tmp1688 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) == 0.0));
    if(tmp1688)
    {
      tmp1689 = 0.0;
    }
    else
    {
      tmp1685 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */);
      tmp1686 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */);
      tmp1687 = (tmp1685 * tmp1685) + (tmp1686 * tmp1686);
      if(tmp1687 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1687, 0.5);
      }
      tmp1689 = sqrt(tmp1687);
    }
    tmp1691 = tmp1689;
  }
  else
  {
    tmp1691 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */) = tmp1691;
  threadData->lastEquationSolved = 6040;
}

/*
equation index: 6041
type: SIMPLE_ASSIGN
vrNordic_g03.Ir0Pu = g03.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6041};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4280]] /* vrNordic_g03.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* g03.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 6041;
}

/*
equation index: 6042
type: SIMPLE_ASSIGN
$START.vrNordic_g03.IrPu = vrNordic_g03.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6042};
  ((modelica_real *)((data->modelData->realVarsData[3494] /* vrNordic_g03.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4280]] /* vrNordic_g03.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3494] /* vrNordic_g03.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3494].info /* vrNordic_g03.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */));
  threadData->lastEquationSolved = 6042;
}

/*
equation index: 6043
type: SIMPLE_ASSIGN
vrNordic_g03.IrPu = if g03.running.value then g03.RfPPu * g03.ifPu / (g03.rTfoPu * g03.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* g03.Kuf PARAM */)),"g03.rTfoPu * g03.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 6043;
}

/*
equation index: 6044
type: SIMPLE_ASSIGN
vrNordic_g03.dIf.y = vrNordic_g03.IrPu - vrNordic_g03.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4291]] /* vrNordic_g03.const2.k PARAM */);
  threadData->lastEquationSolved = 6044;
}

/*
equation index: 6045
type: SIMPLE_ASSIGN
vrNordic_g03.overExcitationLimitation.y = if vrNordic_g03.dIf.y < -0.1 then -1.0 else if vrNordic_g03.dIf.y < 0.0 then 0.0 else if vrNordic_g03.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g03.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6045};
  modelica_boolean tmp1692;
  modelica_boolean tmp1693;
  modelica_boolean tmp1694;
  modelica_boolean tmp1695;
  modelica_real tmp1696;
  modelica_boolean tmp1697;
  modelica_real tmp1698;
  tmp1692 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */),-0.1);
  tmp1697 = (modelica_boolean)tmp1692;
  if(tmp1697)
  {
    tmp1698 = -1.0;
  }
  else
  {
    tmp1693 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */),0.0);
    tmp1695 = (modelica_boolean)tmp1693;
    if(tmp1695)
    {
      tmp1696 = 0.0;
    }
    else
    {
      tmp1694 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4345]] /* vrNordic_g03.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1696 = (tmp1694?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */));
    }
    tmp1698 = tmp1696;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */) = tmp1698;
  threadData->lastEquationSolved = 6045;
}

/*
equation index: 6046
type: SIMPLE_ASSIGN
vrNordic_g03.gain1.y = vrNordic_g03.gain1.k * vrNordic_g03.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3503]] /* vrNordic_g03.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4297]] /* vrNordic_g03.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */));
  threadData->lastEquationSolved = 6046;
}

/*
equation index: 6047
type: SIMPLE_ASSIGN
vrNordic_g03.Efd0Pu = g03.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6047};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4278]] /* vrNordic_g03.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* g03.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6047;
}

/*
equation index: 6048
type: SIMPLE_ASSIGN
$START.vrNordic_g03.limIntegrator.y = vrNordic_g03.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6048};
  ((modelica_real *)((data->modelData->realVarsData[216] /* vrNordic_g03.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4278]] /* vrNordic_g03.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[216] /* vrNordic_g03.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[216].info /* vrNordic_g03.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6048;
}

/*
equation index: 6049
type: SIMPLE_ASSIGN
vrNordic_g03.UsRef0Pu = vrNordic_g03.Efd0Pu / vrNordic_g03.KTgr + vrNordic_g03.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4286]] /* vrNordic_g03.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4278]] /* vrNordic_g03.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4283]] /* vrNordic_g03.KTgr PARAM */),"vrNordic_g03.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4285]] /* vrNordic_g03.Us0Pu PARAM */);
  threadData->lastEquationSolved = 6049;
}

/*
equation index: 6050
type: SIMPLE_ASSIGN
vrNordic_g03.const1.k = vrNordic_g03.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4290]] /* vrNordic_g03.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4286]] /* vrNordic_g03.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 6050;
}

/*
equation index: 6051
type: SIMPLE_ASSIGN
vrNordic_g03.dU.y = vrNordic_g03.const1.k - vrNordic_g03.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3499]] /* vrNordic_g03.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4290]] /* vrNordic_g03.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */);
  threadData->lastEquationSolved = 6051;
}

/*
equation index: 6052
type: SIMPLE_ASSIGN
vrNordic_g03.add.y = vrNordic_g03.add.k1 * vrNordic_g03.dU.y + vrNordic_g03.add.k2 * vrNordic_g03.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4287]] /* vrNordic_g03.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3499]] /* vrNordic_g03.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4288]] /* vrNordic_g03.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3513]] /* vrNordic_g03.limiter.y variable */));
  threadData->lastEquationSolved = 6052;
}

/*
equation index: 6053
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.u_start = vrNordic_g03.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4310]] /* vrNordic_g03.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4278]] /* vrNordic_g03.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6053;
}

/*
equation index: 6054
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.Y0 = if vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag.u_start * vrNordic_g03.leadLag.b[2] / vrNordic_g03.leadLag.a_end else if vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4301]] /* vrNordic_g03.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4310]] /* vrNordic_g03.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4306]] /* vrNordic_g03.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */),"vrNordic_g03.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4312]] /* vrNordic_g03.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 6054;
}

/*
equation index: 6055
type: SIMPLE_ASSIGN
$START.vrNordic_g03.leadLag.y = vrNordic_g03.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6055};
  ((modelica_real *)((data->modelData->realVarsData[3506] /* vrNordic_g03.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4301]] /* vrNordic_g03.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3506] /* vrNordic_g03.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3506].info /* vrNordic_g03.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */));
  threadData->lastEquationSolved = 6055;
}

/*
equation index: 6056
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.X0[1] = if vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag.u_start / vrNordic_g03.leadLag.a_end else if vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6056};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4300]] /* vrNordic_g03.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4310]] /* vrNordic_g03.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */),"vrNordic_g03.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[464]] /* vrNordic_g03.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4311]] /* vrNordic_g03.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 6056;
}

/*
equation index: 6057
type: SIMPLE_ASSIGN
$START.vrNordic_g03.leadLag.x_scaled[1] = vrNordic_g03.leadLag.X0[1] * vrNordic_g03.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6057};
  ((modelica_real *)((data->modelData->realVarsData[213] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4300]] /* vrNordic_g03.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[213] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[213].info /* vrNordic_g03.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 6057;
}

/*
equation index: 6058
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.x_scaled[1] = $START.vrNordic_g03.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[213] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6058;
}

/*
equation index: 6059
type: SIMPLE_ASSIGN
$START.vrNordic_g03.leadLag.x[1] = vrNordic_g03.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6059};
  ((modelica_real *)((data->modelData->realVarsData[3505] /* vrNordic_g03.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4300]] /* vrNordic_g03.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3505] /* vrNordic_g03.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3505].info /* vrNordic_g03.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 6059;
}

/*
equation index: 6060
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.x[1] = vrNordic_g03.leadLag.x_scaled[1] / vrNordic_g03.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */),"vrNordic_g03.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 6060;
}

/*
equation index: 6061
type: SIMPLE_ASSIGN
vrNordic_g03.limIntegrator.y_start = vrNordic_g03.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4342]] /* vrNordic_g03.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4278]] /* vrNordic_g03.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6061;
}

/*
equation index: 6062
type: SIMPLE_ASSIGN
goverNordic_g02.Pm0Pu = g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6062;
}

/*
equation index: 6063
type: SIMPLE_ASSIGN
$START.goverNordic_g02.PGenPu = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6063};
  ((modelica_real *)((data->modelData->realVarsData[1950] /* goverNordic_g02.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[1950] /* goverNordic_g02.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1950].info /* goverNordic_g02.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */));
  threadData->lastEquationSolved = 6063;
}

/*
equation index: 6064
type: SIMPLE_ASSIGN
goverNordic_g02.PGenPu = if g02.running.value then (-g02.terminal.V.re) * g02.terminal.i.re - g02.terminal.V.im * g02.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 6064;
}

/*
equation index: 6065
type: SIMPLE_ASSIGN
goverNordic_g02.perUnitP.y = goverNordic_g02.perUnitP.k * goverNordic_g02.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1966]] /* goverNordic_g02.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2322]] /* goverNordic_g02.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */));
  threadData->lastEquationSolved = 6065;
}

/*
equation index: 6066
type: SIMPLE_ASSIGN
g02.PGen = if g02.running.value then 100.0 * goverNordic_g02.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* g02.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 6066;
}

/*
equation index: 6067
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.Y0 = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2311]] /* goverNordic_g02.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6067;
}

/*
equation index: 6068
type: SIMPLE_ASSIGN
$START.goverNordic_g02.limRateLimFirstOrder.limIntegrator.y = goverNordic_g02.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6068};
  ((modelica_real *)((data->modelData->realVarsData[126] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2311]] /* goverNordic_g02.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[126] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6068;
}

/*
equation index: 6069
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g02.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2318]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2311]] /* goverNordic_g02.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 6069;
}

/*
equation index: 6070
type: SIMPLE_ASSIGN
goverNordic_g02.firstOrder1.y_start = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* goverNordic_g02.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6070;
}

/*
equation index: 6071
type: SIMPLE_ASSIGN
$START.goverNordic_g02.firstOrder1.y = goverNordic_g02.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6071};
  ((modelica_real *)((data->modelData->realVarsData[124] /* goverNordic_g02.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* goverNordic_g02.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[124] /* goverNordic_g02.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* goverNordic_g02.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 6071;
}

/*
equation index: 6072
type: SIMPLE_ASSIGN
goverNordic_g02.firstOrder1.y = $START.goverNordic_g02.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[124] /* goverNordic_g02.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6072;
}

/*
equation index: 6073
type: SIMPLE_ASSIGN
$DER.goverNordic_g02.firstOrder1.y = (goverNordic_g02.firstOrder1.k * goverNordic_g02.perUnitP.y - goverNordic_g02.firstOrder1.y) / goverNordic_g02.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(goverNordic_g02.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* goverNordic_g02.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1966]] /* goverNordic_g02.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2299]] /* goverNordic_g02.firstOrder1.T PARAM */),"goverNordic_g02.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 6073;
}

/*
equation index: 6074
type: SIMPLE_ASSIGN
goverNordic_g02.const.k = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* goverNordic_g02.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6074;
}

/*
equation index: 6075
type: SIMPLE_ASSIGN
goverNordic_g02.dP.y = goverNordic_g02.const.k - goverNordic_g02.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* goverNordic_g02.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* goverNordic_g02.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 6075;
}

/*
equation index: 6076
type: SIMPLE_ASSIGN
goverNordic_g02.dOmegaPlusDroop.y = goverNordic_g02.dOmegaPlusDroop.k1 * goverNordic_g02.dOmega.y + goverNordic_g02.dOmegaPlusDroop.k2 * goverNordic_g02.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* goverNordic_g02.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1952]] /* goverNordic_g02.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* goverNordic_g02.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* goverNordic_g02.dP.y variable */));
  threadData->lastEquationSolved = 6076;
}

/*
equation index: 6077
type: SIMPLE_ASSIGN
goverNordic_g02.govKi.y = goverNordic_g02.govKi.k * goverNordic_g02.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* goverNordic_g02.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2304]] /* goverNordic_g02.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6077;
}

/*
equation index: 6078
type: SIMPLE_ASSIGN
$DER.goverNordic_g02.govInt.y = goverNordic_g02.govInt.k * goverNordic_g02.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* der(goverNordic_g02.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2302]] /* goverNordic_g02.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* goverNordic_g02.govKi.y variable */));
  threadData->lastEquationSolved = 6078;
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
goverNordic_g02.govKp.y = goverNordic_g02.govKp.k * goverNordic_g02.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* goverNordic_g02.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* goverNordic_g02.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6079;
}

/*
equation index: 6080
type: SIMPLE_ASSIGN
goverNordic_g02.govInt.y_start = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* goverNordic_g02.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6080;
}

/*
equation index: 6081
type: SIMPLE_ASSIGN
$START.goverNordic_g02.govInt.y = goverNordic_g02.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6081};
  ((modelica_real *)((data->modelData->realVarsData[125] /* goverNordic_g02.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* goverNordic_g02.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* goverNordic_g02.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[125] /* goverNordic_g02.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* goverNordic_g02.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* goverNordic_g02.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6081;
}

/*
equation index: 6082
type: SIMPLE_ASSIGN
goverNordic_g02.waterFlow.y_start = goverNordic_g02.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* goverNordic_g02.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* goverNordic_g02.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6082;
}

/*
equation index: 6083
type: SIMPLE_ASSIGN
$START.goverNordic_g02.waterFlow.y = goverNordic_g02.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6083};
  ((modelica_real *)((data->modelData->realVarsData[127] /* goverNordic_g02.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* goverNordic_g02.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[127] /* goverNordic_g02.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* goverNordic_g02.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 6083;
}

/*
equation index: 6084
type: SIMPLE_ASSIGN
vrNordic_g02.Us0Pu = g02.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4206]] /* vrNordic_g02.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* g02.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 6084;
}

/*
equation index: 6085
type: SIMPLE_ASSIGN
$START.vrNordic_g02.UsPu = vrNordic_g02.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6085};
  ((modelica_real *)((data->modelData->realVarsData[3471] /* vrNordic_g02.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4206]] /* vrNordic_g02.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3471] /* vrNordic_g02.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3471].info /* vrNordic_g02.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */));
  threadData->lastEquationSolved = 6085;
}

/*
equation index: 6086
type: SIMPLE_ASSIGN
vrNordic_g02.UsPu = if g02.running.value then if g02.uStatorPu.re == 0.0 and g02.uStatorPu.im == 0.0 then 0.0 else (g02.uStatorPu.re ^ 2.0 + g02.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6086};
  modelica_real tmp1699;
  modelica_real tmp1700;
  modelica_real tmp1701;
  modelica_boolean tmp1702;
  modelica_real tmp1703;
  modelica_boolean tmp1704;
  modelica_real tmp1705;
  tmp1704 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp1704)
  {
    tmp1702 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) == 0.0));
    if(tmp1702)
    {
      tmp1703 = 0.0;
    }
    else
    {
      tmp1699 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */);
      tmp1700 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */);
      tmp1701 = (tmp1699 * tmp1699) + (tmp1700 * tmp1700);
      if(tmp1701 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1701, 0.5);
      }
      tmp1703 = sqrt(tmp1701);
    }
    tmp1705 = tmp1703;
  }
  else
  {
    tmp1705 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */) = tmp1705;
  threadData->lastEquationSolved = 6086;
}

/*
equation index: 6087
type: SIMPLE_ASSIGN
vrNordic_g02.Ir0Pu = g02.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4201]] /* vrNordic_g02.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* g02.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 6087;
}

/*
equation index: 6088
type: SIMPLE_ASSIGN
$START.vrNordic_g02.IrPu = vrNordic_g02.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6088};
  ((modelica_real *)((data->modelData->realVarsData[3470] /* vrNordic_g02.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4201]] /* vrNordic_g02.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3470] /* vrNordic_g02.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3470].info /* vrNordic_g02.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */));
  threadData->lastEquationSolved = 6088;
}

/*
equation index: 6089
type: SIMPLE_ASSIGN
vrNordic_g02.IrPu = if g02.running.value then g02.RfPPu * g02.ifPu / (g02.rTfoPu * g02.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* g02.Kuf PARAM */)),"g02.rTfoPu * g02.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 6089;
}

/*
equation index: 6090
type: SIMPLE_ASSIGN
vrNordic_g02.dIf.y = vrNordic_g02.IrPu - vrNordic_g02.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4212]] /* vrNordic_g02.const2.k PARAM */);
  threadData->lastEquationSolved = 6090;
}

/*
equation index: 6091
type: SIMPLE_ASSIGN
vrNordic_g02.overExcitationLimitation.y = if vrNordic_g02.dIf.y < -0.1 then -1.0 else if vrNordic_g02.dIf.y < 0.0 then 0.0 else if vrNordic_g02.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g02.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6091};
  modelica_boolean tmp1706;
  modelica_boolean tmp1707;
  modelica_boolean tmp1708;
  modelica_boolean tmp1709;
  modelica_real tmp1710;
  modelica_boolean tmp1711;
  modelica_real tmp1712;
  tmp1706 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */),-0.1);
  tmp1711 = (modelica_boolean)tmp1706;
  if(tmp1711)
  {
    tmp1712 = -1.0;
  }
  else
  {
    tmp1707 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */),0.0);
    tmp1709 = (modelica_boolean)tmp1707;
    if(tmp1709)
    {
      tmp1710 = 0.0;
    }
    else
    {
      tmp1708 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4266]] /* vrNordic_g02.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1710 = (tmp1708?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */));
    }
    tmp1712 = tmp1710;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */) = tmp1712;
  threadData->lastEquationSolved = 6091;
}

/*
equation index: 6092
type: SIMPLE_ASSIGN
vrNordic_g02.gain1.y = vrNordic_g02.gain1.k * vrNordic_g02.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3479]] /* vrNordic_g02.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4218]] /* vrNordic_g02.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */));
  threadData->lastEquationSolved = 6092;
}

/*
equation index: 6093
type: SIMPLE_ASSIGN
vrNordic_g02.Efd0Pu = g02.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4199]] /* vrNordic_g02.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* g02.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6093;
}

/*
equation index: 6094
type: SIMPLE_ASSIGN
$START.vrNordic_g02.limIntegrator.y = vrNordic_g02.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6094};
  ((modelica_real *)((data->modelData->realVarsData[210] /* vrNordic_g02.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4199]] /* vrNordic_g02.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[210] /* vrNordic_g02.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[210].info /* vrNordic_g02.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6094;
}

/*
equation index: 6095
type: SIMPLE_ASSIGN
vrNordic_g02.UsRef0Pu = vrNordic_g02.Efd0Pu / vrNordic_g02.KTgr + vrNordic_g02.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4207]] /* vrNordic_g02.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4199]] /* vrNordic_g02.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4204]] /* vrNordic_g02.KTgr PARAM */),"vrNordic_g02.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4206]] /* vrNordic_g02.Us0Pu PARAM */);
  threadData->lastEquationSolved = 6095;
}

/*
equation index: 6096
type: SIMPLE_ASSIGN
vrNordic_g02.const1.k = vrNordic_g02.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4211]] /* vrNordic_g02.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4207]] /* vrNordic_g02.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 6096;
}

/*
equation index: 6097
type: SIMPLE_ASSIGN
vrNordic_g02.dU.y = vrNordic_g02.const1.k - vrNordic_g02.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3475]] /* vrNordic_g02.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4211]] /* vrNordic_g02.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */);
  threadData->lastEquationSolved = 6097;
}

/*
equation index: 6098
type: SIMPLE_ASSIGN
vrNordic_g02.add.y = vrNordic_g02.add.k1 * vrNordic_g02.dU.y + vrNordic_g02.add.k2 * vrNordic_g02.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4208]] /* vrNordic_g02.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3475]] /* vrNordic_g02.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4209]] /* vrNordic_g02.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3489]] /* vrNordic_g02.limiter.y variable */));
  threadData->lastEquationSolved = 6098;
}

/*
equation index: 6099
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.u_start = vrNordic_g02.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4231]] /* vrNordic_g02.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4199]] /* vrNordic_g02.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6099;
}

/*
equation index: 6100
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.Y0 = if vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag.u_start * vrNordic_g02.leadLag.b[2] / vrNordic_g02.leadLag.a_end else if vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4222]] /* vrNordic_g02.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4231]] /* vrNordic_g02.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4227]] /* vrNordic_g02.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */),"vrNordic_g02.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4233]] /* vrNordic_g02.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 6100;
}

/*
equation index: 6101
type: SIMPLE_ASSIGN
$START.vrNordic_g02.leadLag.y = vrNordic_g02.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6101};
  ((modelica_real *)((data->modelData->realVarsData[3482] /* vrNordic_g02.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4222]] /* vrNordic_g02.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3482] /* vrNordic_g02.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3482].info /* vrNordic_g02.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */));
  threadData->lastEquationSolved = 6101;
}

/*
equation index: 6102
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.X0[1] = if vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag.u_start / vrNordic_g02.leadLag.a_end else if vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4221]] /* vrNordic_g02.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4231]] /* vrNordic_g02.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */),"vrNordic_g02.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[448]] /* vrNordic_g02.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4232]] /* vrNordic_g02.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 6102;
}

/*
equation index: 6103
type: SIMPLE_ASSIGN
$START.vrNordic_g02.leadLag.x_scaled[1] = vrNordic_g02.leadLag.X0[1] * vrNordic_g02.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6103};
  ((modelica_real *)((data->modelData->realVarsData[207] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4221]] /* vrNordic_g02.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[207] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[207].info /* vrNordic_g02.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 6103;
}

/*
equation index: 6104
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.x_scaled[1] = $START.vrNordic_g02.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[207] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6104;
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
$START.vrNordic_g02.leadLag.x[1] = vrNordic_g02.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6105};
  ((modelica_real *)((data->modelData->realVarsData[3481] /* vrNordic_g02.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4221]] /* vrNordic_g02.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3481] /* vrNordic_g02.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3481].info /* vrNordic_g02.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 6105;
}

/*
equation index: 6106
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.x[1] = vrNordic_g02.leadLag.x_scaled[1] / vrNordic_g02.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */),"vrNordic_g02.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 6106;
}

/*
equation index: 6107
type: SIMPLE_ASSIGN
vrNordic_g02.limIntegrator.y_start = vrNordic_g02.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4263]] /* vrNordic_g02.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4199]] /* vrNordic_g02.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6107;
}

/*
equation index: 6108
type: SIMPLE_ASSIGN
goverNordic_g01.Pm0Pu = g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6108;
}

/*
equation index: 6109
type: SIMPLE_ASSIGN
$START.goverNordic_g01.PGenPu = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6109};
  ((modelica_real *)((data->modelData->realVarsData[1932] /* goverNordic_g01.PGenPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */) = ((modelica_real *)((data->modelData->realVarsData[1932] /* goverNordic_g01.PGenPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1932].info /* goverNordic_g01.PGenPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */));
  threadData->lastEquationSolved = 6109;
}

/*
equation index: 6110
type: SIMPLE_ASSIGN
goverNordic_g01.PGenPu = if g01.running.value then (-g01.terminal.V.re) * g01.terminal.i.re - g01.terminal.V.im * g01.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 6110;
}

/*
equation index: 6111
type: SIMPLE_ASSIGN
goverNordic_g01.perUnitP.y = goverNordic_g01.perUnitP.k * goverNordic_g01.PGenPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1948]] /* goverNordic_g01.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* goverNordic_g01.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */));
  threadData->lastEquationSolved = 6111;
}

/*
equation index: 6112
type: SIMPLE_ASSIGN
g01.PGen = if g01.running.value then 100.0 * goverNordic_g01.PGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* g01.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 6112;
}

/*
equation index: 6113
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.Y0 = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* goverNordic_g01.limRateLimFirstOrder.Y0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6113;
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
$START.goverNordic_g01.limRateLimFirstOrder.limIntegrator.y = goverNordic_g01.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6114};
  ((modelica_real *)((data->modelData->realVarsData[122] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* goverNordic_g01.limRateLimFirstOrder.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[122] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6114;
}

/*
equation index: 6115
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.y_start = goverNordic_g01.limRateLimFirstOrder.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2282]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* goverNordic_g01.limRateLimFirstOrder.Y0 PARAM */);
  threadData->lastEquationSolved = 6115;
}

/*
equation index: 6116
type: SIMPLE_ASSIGN
goverNordic_g01.firstOrder1.y_start = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* goverNordic_g01.firstOrder1.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6116;
}

/*
equation index: 6117
type: SIMPLE_ASSIGN
$START.goverNordic_g01.firstOrder1.y = goverNordic_g01.firstOrder1.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6117};
  ((modelica_real *)((data->modelData->realVarsData[120] /* goverNordic_g01.firstOrder1.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* goverNordic_g01.firstOrder1.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[120] /* goverNordic_g01.firstOrder1.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* goverNordic_g01.firstOrder1.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */));
  threadData->lastEquationSolved = 6117;
}

/*
equation index: 6118
type: SIMPLE_ASSIGN
goverNordic_g01.firstOrder1.y = $START.goverNordic_g01.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[120] /* goverNordic_g01.firstOrder1.y STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6118;
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
$DER.goverNordic_g01.firstOrder1.y = (goverNordic_g01.firstOrder1.k * goverNordic_g01.perUnitP.y - goverNordic_g01.firstOrder1.y) / goverNordic_g01.firstOrder1.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* der(goverNordic_g01.firstOrder1.y) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* goverNordic_g01.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1948]] /* goverNordic_g01.perUnitP.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* goverNordic_g01.firstOrder1.T PARAM */),"goverNordic_g01.firstOrder1.T",equationIndexes);
  threadData->lastEquationSolved = 6119;
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
goverNordic_g01.const.k = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* goverNordic_g01.const.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6120;
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
goverNordic_g01.dP.y = goverNordic_g01.const.k - goverNordic_g01.firstOrder1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* goverNordic_g01.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* goverNordic_g01.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 6121;
}

/*
equation index: 6122
type: SIMPLE_ASSIGN
goverNordic_g01.dOmegaPlusDroop.y = goverNordic_g01.dOmegaPlusDroop.k1 * goverNordic_g01.dOmega.y + goverNordic_g01.dOmegaPlusDroop.k2 * goverNordic_g01.dP.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* goverNordic_g01.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1934]] /* goverNordic_g01.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* goverNordic_g01.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* goverNordic_g01.dP.y variable */));
  threadData->lastEquationSolved = 6122;
}

/*
equation index: 6123
type: SIMPLE_ASSIGN
goverNordic_g01.govKi.y = goverNordic_g01.govKi.k * goverNordic_g01.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1939]] /* goverNordic_g01.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* goverNordic_g01.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6123;
}

/*
equation index: 6124
type: SIMPLE_ASSIGN
$DER.goverNordic_g01.govInt.y = goverNordic_g01.govInt.k * goverNordic_g01.govKi.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* der(goverNordic_g01.govInt.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* goverNordic_g01.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1939]] /* goverNordic_g01.govKi.y variable */));
  threadData->lastEquationSolved = 6124;
}

/*
equation index: 6125
type: SIMPLE_ASSIGN
goverNordic_g01.govKp.y = goverNordic_g01.govKp.k * goverNordic_g01.dOmegaPlusDroop.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* goverNordic_g01.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* goverNordic_g01.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 6125;
}

/*
equation index: 6126
type: SIMPLE_ASSIGN
goverNordic_g01.govInt.y_start = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* goverNordic_g01.govInt.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6126;
}

/*
equation index: 6127
type: SIMPLE_ASSIGN
$START.goverNordic_g01.govInt.y = goverNordic_g01.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6127};
  ((modelica_real *)((data->modelData->realVarsData[121] /* goverNordic_g01.govInt.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* goverNordic_g01.govInt.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* goverNordic_g01.govInt.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[121] /* goverNordic_g01.govInt.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* goverNordic_g01.govInt.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* goverNordic_g01.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6127;
}

/*
equation index: 6128
type: SIMPLE_ASSIGN
goverNordic_g01.waterFlow.y_start = goverNordic_g01.Pm0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* goverNordic_g01.waterFlow.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* goverNordic_g01.Pm0Pu PARAM */);
  threadData->lastEquationSolved = 6128;
}

/*
equation index: 6129
type: SIMPLE_ASSIGN
$START.goverNordic_g01.waterFlow.y = goverNordic_g01.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6129};
  ((modelica_real *)((data->modelData->realVarsData[123] /* goverNordic_g01.waterFlow.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* goverNordic_g01.waterFlow.y_start PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[123] /* goverNordic_g01.waterFlow.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* goverNordic_g01.waterFlow.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */));
  threadData->lastEquationSolved = 6129;
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
vrNordic_g01.Us0Pu = g01.UStator0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4127]] /* vrNordic_g01.Us0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* g01.UStator0Pu PARAM */);
  threadData->lastEquationSolved = 6130;
}

/*
equation index: 6131
type: SIMPLE_ASSIGN
$START.vrNordic_g01.UsPu = vrNordic_g01.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6131};
  ((modelica_real *)((data->modelData->realVarsData[3447] /* vrNordic_g01.UsPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4127]] /* vrNordic_g01.Us0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3447] /* vrNordic_g01.UsPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3447].info /* vrNordic_g01.UsPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */));
  threadData->lastEquationSolved = 6131;
}

/*
equation index: 6132
type: SIMPLE_ASSIGN
vrNordic_g01.UsPu = if g01.running.value then if g01.uStatorPu.re == 0.0 and g01.uStatorPu.im == 0.0 then 0.0 else (g01.uStatorPu.re ^ 2.0 + g01.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6132};
  modelica_real tmp1713;
  modelica_real tmp1714;
  modelica_real tmp1715;
  modelica_boolean tmp1716;
  modelica_real tmp1717;
  modelica_boolean tmp1718;
  modelica_real tmp1719;
  tmp1718 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp1718)
  {
    tmp1716 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) == 0.0));
    if(tmp1716)
    {
      tmp1717 = 0.0;
    }
    else
    {
      tmp1713 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */);
      tmp1714 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */);
      tmp1715 = (tmp1713 * tmp1713) + (tmp1714 * tmp1714);
      if(tmp1715 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1715, 0.5);
      }
      tmp1717 = sqrt(tmp1715);
    }
    tmp1719 = tmp1717;
  }
  else
  {
    tmp1719 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */) = tmp1719;
  threadData->lastEquationSolved = 6132;
}

/*
equation index: 6133
type: SIMPLE_ASSIGN
vrNordic_g01.Ir0Pu = g01.IRotor0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4122]] /* vrNordic_g01.Ir0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* g01.IRotor0Pu PARAM */);
  threadData->lastEquationSolved = 6133;
}

/*
equation index: 6134
type: SIMPLE_ASSIGN
$START.vrNordic_g01.IrPu = vrNordic_g01.Ir0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6134};
  ((modelica_real *)((data->modelData->realVarsData[3446] /* vrNordic_g01.IrPu variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4122]] /* vrNordic_g01.Ir0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */) = ((modelica_real *)((data->modelData->realVarsData[3446] /* vrNordic_g01.IrPu variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3446].info /* vrNordic_g01.IrPu */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */));
  threadData->lastEquationSolved = 6134;
}

/*
equation index: 6135
type: SIMPLE_ASSIGN
vrNordic_g01.IrPu = if g01.running.value then g01.RfPPu * g01.ifPu / (g01.rTfoPu * g01.Kuf) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* g01.Kuf PARAM */)),"g01.rTfoPu * g01.Kuf",equationIndexes)):0.0);
  threadData->lastEquationSolved = 6135;
}

/*
equation index: 6136
type: SIMPLE_ASSIGN
vrNordic_g01.dIf.y = vrNordic_g01.IrPu - vrNordic_g01.const2.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4133]] /* vrNordic_g01.const2.k PARAM */);
  threadData->lastEquationSolved = 6136;
}

/*
equation index: 6137
type: SIMPLE_ASSIGN
vrNordic_g01.overExcitationLimitation.y = if vrNordic_g01.dIf.y < -0.1 then -1.0 else if vrNordic_g01.dIf.y < 0.0 then 0.0 else if vrNordic_g01.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g01.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6137};
  modelica_boolean tmp1720;
  modelica_boolean tmp1721;
  modelica_boolean tmp1722;
  modelica_boolean tmp1723;
  modelica_real tmp1724;
  modelica_boolean tmp1725;
  modelica_real tmp1726;
  tmp1720 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */),-0.1);
  tmp1725 = (modelica_boolean)tmp1720;
  if(tmp1725)
  {
    tmp1726 = -1.0;
  }
  else
  {
    tmp1721 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */),0.0);
    tmp1723 = (modelica_boolean)tmp1721;
    if(tmp1723)
    {
      tmp1724 = 0.0;
    }
    else
    {
      tmp1722 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4187]] /* vrNordic_g01.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1724 = (tmp1722?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */));
    }
    tmp1726 = tmp1724;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */) = tmp1726;
  threadData->lastEquationSolved = 6137;
}

/*
equation index: 6138
type: SIMPLE_ASSIGN
vrNordic_g01.gain1.y = vrNordic_g01.gain1.k * vrNordic_g01.dIf.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3455]] /* vrNordic_g01.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4139]] /* vrNordic_g01.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */));
  threadData->lastEquationSolved = 6138;
}

/*
equation index: 6139
type: SIMPLE_ASSIGN
vrNordic_g01.Efd0Pu = g01.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4120]] /* vrNordic_g01.Efd0Pu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* g01.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6139;
}

/*
equation index: 6140
type: SIMPLE_ASSIGN
$START.vrNordic_g01.limIntegrator.y = vrNordic_g01.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6140};
  ((modelica_real *)((data->modelData->realVarsData[204] /* vrNordic_g01.limIntegrator.y STATE(1) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4120]] /* vrNordic_g01.Efd0Pu PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[204] /* vrNordic_g01.limIntegrator.y STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[204].info /* vrNordic_g01.limIntegrator.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */));
  threadData->lastEquationSolved = 6140;
}

/*
equation index: 6141
type: SIMPLE_ASSIGN
vrNordic_g01.UsRef0Pu = vrNordic_g01.Efd0Pu / vrNordic_g01.KTgr + vrNordic_g01.Us0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4128]] /* vrNordic_g01.UsRef0Pu PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4120]] /* vrNordic_g01.Efd0Pu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4125]] /* vrNordic_g01.KTgr PARAM */),"vrNordic_g01.KTgr",equationIndexes) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4127]] /* vrNordic_g01.Us0Pu PARAM */);
  threadData->lastEquationSolved = 6141;
}

/*
equation index: 6142
type: SIMPLE_ASSIGN
vrNordic_g01.const1.k = vrNordic_g01.UsRef0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4132]] /* vrNordic_g01.const1.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4128]] /* vrNordic_g01.UsRef0Pu PARAM */);
  threadData->lastEquationSolved = 6142;
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
vrNordic_g01.dU.y = vrNordic_g01.const1.k - vrNordic_g01.UsPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vrNordic_g01.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4132]] /* vrNordic_g01.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */);
  threadData->lastEquationSolved = 6143;
}

/*
equation index: 6144
type: SIMPLE_ASSIGN
vrNordic_g01.add.y = vrNordic_g01.add.k1 * vrNordic_g01.dU.y + vrNordic_g01.add.k2 * vrNordic_g01.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4129]] /* vrNordic_g01.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vrNordic_g01.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4130]] /* vrNordic_g01.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3465]] /* vrNordic_g01.limiter.y variable */));
  threadData->lastEquationSolved = 6144;
}

/*
equation index: 6145
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.u_start = vrNordic_g01.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4152]] /* vrNordic_g01.leadLag.u_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4120]] /* vrNordic_g01.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6145;
}

/*
equation index: 6146
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.Y0 = if vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag.u_start * vrNordic_g01.leadLag.b[2] / vrNordic_g01.leadLag.a_end else if vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag.y_start else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4143]] /* vrNordic_g01.leadLag.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4152]] /* vrNordic_g01.leadLag.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4148]] /* vrNordic_g01.leadLag.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */),"vrNordic_g01.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4154]] /* vrNordic_g01.leadLag.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 6146;
}

/*
equation index: 6147
type: SIMPLE_ASSIGN
$START.vrNordic_g01.leadLag.y = vrNordic_g01.leadLag.Y0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6147};
  ((modelica_real *)((data->modelData->realVarsData[3458] /* vrNordic_g01.leadLag.y variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4143]] /* vrNordic_g01.leadLag.Y0 PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */) = ((modelica_real *)((data->modelData->realVarsData[3458] /* vrNordic_g01.leadLag.y variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3458].info /* vrNordic_g01.leadLag.y */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */));
  threadData->lastEquationSolved = 6147;
}

/*
equation index: 6148
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.X0[1] = if vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag.u_start / vrNordic_g01.leadLag.a_end else if vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag.x_start[1] else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4142]] /* vrNordic_g01.leadLag.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4152]] /* vrNordic_g01.leadLag.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */),"vrNordic_g01.leadLag.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[432]] /* vrNordic_g01.leadLag.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4153]] /* vrNordic_g01.leadLag.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 6148;
}

/*
equation index: 6149
type: SIMPLE_ASSIGN
$START.vrNordic_g01.leadLag.x_scaled[1] = vrNordic_g01.leadLag.X0[1] * vrNordic_g01.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6149};
  ((modelica_real *)((data->modelData->realVarsData[201] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4142]] /* vrNordic_g01.leadLag.X0[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[201] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[201].info /* vrNordic_g01.leadLag.x_scaled[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */));
  threadData->lastEquationSolved = 6149;
}

/*
equation index: 6150
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.x_scaled[1] = $START.vrNordic_g01.leadLag.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[201] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 6150;
}

/*
equation index: 6151
type: SIMPLE_ASSIGN
$START.vrNordic_g01.leadLag.x[1] = vrNordic_g01.leadLag.X0[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6151};
  ((modelica_real *)((data->modelData->realVarsData[3457] /* vrNordic_g01.leadLag.x[1] variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4142]] /* vrNordic_g01.leadLag.X0[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[3457] /* vrNordic_g01.leadLag.x[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3457].info /* vrNordic_g01.leadLag.x[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */));
  threadData->lastEquationSolved = 6151;
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.x[1] = vrNordic_g01.leadLag.x_scaled[1] / vrNordic_g01.leadLag.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */),"vrNordic_g01.leadLag.a_end",equationIndexes);
  threadData->lastEquationSolved = 6152;
}

/*
equation index: 6153
type: SIMPLE_ASSIGN
vrNordic_g01.limIntegrator.y_start = vrNordic_g01.Efd0Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4184]] /* vrNordic_g01.limIntegrator.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4120]] /* vrNordic_g01.Efd0Pu PARAM */);
  threadData->lastEquationSolved = 6153;
}

/*
equation index: 6154
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.y = goverNordic_g20.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6154;
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
goverNordic_g20.govInt.y = goverNordic_g20.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* goverNordic_g20.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* goverNordic_g20.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6155;
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
goverNordic_g20.govOut.y = goverNordic_g20.govOut.k1 * goverNordic_g20.govKp.y + goverNordic_g20.govOut.k2 * goverNordic_g20.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2283]] /* goverNordic_g20.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* goverNordic_g20.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2282]] /* goverNordic_g20.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* goverNordic_g20.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* goverNordic_g20.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6156;
}

/*
equation index: 6157
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.feedback.y = goverNordic_g20.govOut.y - goverNordic_g20.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* goverNordic_g20.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2283]] /* goverNordic_g20.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6157;
}

/*
equation index: 6158
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.gain.y = goverNordic_g20.limRateLimFirstOrder.gain.k * goverNordic_g20.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* goverNordic_g20.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* goverNordic_g20.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6158;
}

/*
equation index: 6159
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g20.limRateLimFirstOrder.gain.y > goverNordic_g20.limRateLimFirstOrder.limiter.uMax then goverNordic_g20.limRateLimFirstOrder.limiter.uMax else if goverNordic_g20.limRateLimFirstOrder.gain.y < goverNordic_g20.limRateLimFirstOrder.limiter.uMin then goverNordic_g20.limRateLimFirstOrder.limiter.uMin else goverNordic_g20.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6159};
  modelica_boolean tmp1727;
  modelica_boolean tmp1728;
  modelica_boolean tmp1729;
  modelica_real tmp1730;
  tmp1727 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1729 = (modelica_boolean)tmp1727;
  if(tmp1729)
  {
    tmp1730 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1728 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1730 = (tmp1728?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */) = tmp1730;
  threadData->lastEquationSolved = 6159;
}

/*
equation index: 6160
type: SIMPLE_ASSIGN
$DER.goverNordic_g20.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g20.limRateLimFirstOrder.limIntegrator.y < goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g20.limRateLimFirstOrder.limIntegrator.y > goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6160};
  modelica_boolean tmp1731;
  modelica_boolean tmp1732;
  modelica_boolean tmp1733;
  modelica_boolean tmp1734;
  tmp1731 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1732 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1733 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1734 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* der(goverNordic_g20.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1731 && tmp1732) || (tmp1733 && tmp1734))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6160;
}

/*
equation index: 6161
type: SIMPLE_ASSIGN
goverNordic_g20.waterFlow.y = goverNordic_g20.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* goverNordic_g20.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6161;
}

/*
equation index: 6162
type: SIMPLE_ASSIGN
goverNordic_g20.flowDivGateOpening.y = goverNordic_g20.waterFlow.y / goverNordic_g20.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2279]] /* goverNordic_g20.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g20.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6162;
}

/*
equation index: 6163
type: SIMPLE_ASSIGN
goverNordic_g20.headWater.y = goverNordic_g20.flowDivGateOpening.y ^ goverNordic_g20.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6163};
  modelica_real tmp1735;
  modelica_real tmp1736;
  modelica_real tmp1737;
  modelica_real tmp1738;
  modelica_real tmp1739;
  modelica_real tmp1740;
  modelica_real tmp1741;
  tmp1735 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2279]] /* goverNordic_g20.flowDivGateOpening.y variable */);
  tmp1736 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* goverNordic_g20.headWater.N PARAM */);
  if(tmp1735 < 0.0 && tmp1736 != 0.0)
  {
    tmp1738 = modf(tmp1736, &tmp1739);
    
    if(tmp1738 > 0.5)
    {
      tmp1738 -= 1.0;
      tmp1739 += 1.0;
    }
    else if(tmp1738 < -0.5)
    {
      tmp1738 += 1.0;
      tmp1739 -= 1.0;
    }
    
    if(fabs(tmp1738) < 1e-10)
      tmp1737 = pow(tmp1735, tmp1739);
    else
    {
      tmp1741 = modf(1.0/tmp1736, &tmp1740);
      if(tmp1741 > 0.5)
      {
        tmp1741 -= 1.0;
        tmp1740 += 1.0;
      }
      else if(tmp1741 < -0.5)
      {
        tmp1741 += 1.0;
        tmp1740 -= 1.0;
      }
      if(fabs(tmp1741) < 1e-10 && ((unsigned long)tmp1740 & 1))
      {
        tmp1737 = -pow(-tmp1735, tmp1738)*pow(tmp1735, tmp1739);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1735, tmp1736);
      }
    }
  }
  else
  {
    tmp1737 = pow(tmp1735, tmp1736);
  }
  if(isnan(tmp1737) || isinf(tmp1737))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1735, tmp1736);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */) = tmp1737;
  threadData->lastEquationSolved = 6163;
}

/*
equation index: 6164
type: SIMPLE_ASSIGN
g20.PmPu = goverNordic_g20.waterFlow.y * goverNordic_g20.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1893]] /* g20.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */));
  threadData->lastEquationSolved = 6164;
}

/*
equation index: 6165
type: SIMPLE_ASSIGN
g20.cmPu = if g20.running.value then g20.PmPu / g20.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1900]] /* g20.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1893]] /* g20.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */),"g20.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6165;
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
$DER.g20.omegaPu = if g20.running.value then 0.5 * (g20.cmPu * g20.PNomTurb / g20.SNom - g20.DPu * (g20.omegaPu - omegaCOI) - g20.cePu) / g20.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(g20.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1900]] /* g20.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2193]] /* g20.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* g20.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */),"g20.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6166;
}

/*
equation index: 6167
type: SIMPLE_ASSIGN
goverNordic_g20.dH.y = goverNordic_g20.const2.k - goverNordic_g20.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2275]] /* goverNordic_g20.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* goverNordic_g20.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */);
  threadData->lastEquationSolved = 6167;
}

/*
equation index: 6168
type: SIMPLE_ASSIGN
$DER.goverNordic_g20.waterFlow.y = goverNordic_g20.waterFlow.k * goverNordic_g20.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* der(goverNordic_g20.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* goverNordic_g20.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2275]] /* goverNordic_g20.dH.y variable */));
  threadData->lastEquationSolved = 6168;
}

/*
equation index: 6169
type: SIMPLE_ASSIGN
vrNordic_g20.timer.y = vrNordic_g20.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5699]] /* vrNordic_g20.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6169;
}

/*
equation index: 6170
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.timer.y = if vrNordic_g20.timer.y < vrNordic_g20.timer.outMin and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y < 0.0 or vrNordic_g20.timer.y > vrNordic_g20.timer.outMax and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6170};
  modelica_boolean tmp1742;
  modelica_boolean tmp1743;
  modelica_boolean tmp1744;
  modelica_boolean tmp1745;
  tmp1742 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */));
  tmp1743 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)),0.0);
  tmp1744 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */));
  tmp1745 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* der(vrNordic_g20.timer.y) STATE_DER */) = (((tmp1742 && tmp1743) || (tmp1744 && tmp1745))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6170;
}

/*
equation index: 6171
type: SIMPLE_ASSIGN
vrNordic_g20.greaterEqualThreshold.y = vrNordic_g20.timer.y >= vrNordic_g20.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6171};
  modelica_boolean tmp1746;
  tmp1746 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1072]] /* vrNordic_g20.greaterEqualThreshold.y DISCRETE */) = tmp1746;
  threadData->lastEquationSolved = 6171;
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
vrNordic_g20.switch.y = if vrNordic_g20.greaterEqualThreshold.y then vrNordic_g20.gain1.y else vrNordic_g20.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1072]] /* vrNordic_g20.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3911]] /* vrNordic_g20.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
  threadData->lastEquationSolved = 6172;
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
vrNordic_g20.min1.y = if vrNordic_g20.switch.y < vrNordic_g20.add.y then vrNordic_g20.switch.y else vrNordic_g20.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6173};
  modelica_boolean tmp1747;
  tmp1747 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3922]] /* vrNordic_g20.min1.y variable */) = (tmp1747?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
  threadData->lastEquationSolved = 6173;
}

/*
equation index: 6174
type: SIMPLE_ASSIGN
vrNordic_g20.kMulDU.y = vrNordic_g20.kMulDU.k * vrNordic_g20.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5642]] /* vrNordic_g20.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3922]] /* vrNordic_g20.min1.y variable */));
  threadData->lastEquationSolved = 6174;
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.y = (vrNordic_g20.leadLag.bb[2] - vrNordic_g20.leadLag.d * vrNordic_g20.leadLag.a[2]) * vrNordic_g20.leadLag.x[1] + vrNordic_g20.leadLag.d * vrNordic_g20.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5651]] /* vrNordic_g20.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5652]] /* vrNordic_g20.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5652]] /* vrNordic_g20.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */));
  threadData->lastEquationSolved = 6175;
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.leadLag.x_scaled[1] = (vrNordic_g20.leadLag.a_end * vrNordic_g20.kMulDU.y - vrNordic_g20.leadLag.a[2] * vrNordic_g20.leadLag.x_scaled[1]) / vrNordic_g20.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* der(vrNordic_g20.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5645]] /* vrNordic_g20.leadLag.a[1] PARAM */),"vrNordic_g20.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6176;
}

/*
equation index: 6177
type: SIMPLE_ASSIGN
vrNordic_g20.limIntegrator.y = vrNordic_g20.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5685]] /* vrNordic_g20.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6177;
}

/*
equation index: 6178
type: SIMPLE_ASSIGN
vrNordic_g20.feedback1.y = vrNordic_g20.leadLag.y - vrNordic_g20.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3909]] /* vrNordic_g20.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6178;
}

/*
equation index: 6179
type: SIMPLE_ASSIGN
vrNordic_g20.gain.y = vrNordic_g20.gain.k * vrNordic_g20.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5639]] /* vrNordic_g20.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3909]] /* vrNordic_g20.feedback1.y variable */));
  threadData->lastEquationSolved = 6179;
}

/*
equation index: 6180
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.limIntegrator.y = if vrNordic_g20.limIntegrator.y < vrNordic_g20.limIntegrator.outMin and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y < 0.0 or vrNordic_g20.limIntegrator.y > vrNordic_g20.limIntegrator.outMax and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y > 0.0 then 0.0 else vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6180};
  modelica_boolean tmp1748;
  modelica_boolean tmp1749;
  modelica_boolean tmp1750;
  modelica_boolean tmp1751;
  tmp1748 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */));
  tmp1749 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)),0.0);
  tmp1750 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */));
  tmp1751 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* der(vrNordic_g20.limIntegrator.y) STATE_DER */) = (((tmp1748 && tmp1749) || (tmp1750 && tmp1751))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)));
  threadData->lastEquationSolved = 6180;
}

/*
equation index: 6181
type: SIMPLE_ASSIGN
g20.ufPu = if g20.running.value then vrNordic_g20.limIntegrator.y * g20.Kuf * g20.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1930]] /* g20.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* g20.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6181;
}

/*
equation index: 6182
type: SIMPLE_ASSIGN
$DER.g20.lambdafPu = if g20.running.value then (g20.RfPPu * g20.ifPu - g20.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* der(g20.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1930]] /* g20.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6182;
}

/*
equation index: 6183
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.y = goverNordic_g19.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2930]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6183;
}

/*
equation index: 6184
type: SIMPLE_ASSIGN
goverNordic_g19.govInt.y = goverNordic_g19.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* goverNordic_g19.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* goverNordic_g19.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6184;
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
goverNordic_g19.govOut.y = goverNordic_g19.govOut.k1 * goverNordic_g19.govKp.y + goverNordic_g19.govOut.k2 * goverNordic_g19.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2265]] /* goverNordic_g19.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* goverNordic_g19.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2264]] /* goverNordic_g19.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* goverNordic_g19.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* goverNordic_g19.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6185;
}

/*
equation index: 6186
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.feedback.y = goverNordic_g19.govOut.y - goverNordic_g19.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2267]] /* goverNordic_g19.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2265]] /* goverNordic_g19.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6186;
}

/*
equation index: 6187
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.gain.y = goverNordic_g19.limRateLimFirstOrder.gain.k * goverNordic_g19.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2926]] /* goverNordic_g19.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2267]] /* goverNordic_g19.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6187;
}

/*
equation index: 6188
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g19.limRateLimFirstOrder.gain.y > goverNordic_g19.limRateLimFirstOrder.limiter.uMax then goverNordic_g19.limRateLimFirstOrder.limiter.uMax else if goverNordic_g19.limRateLimFirstOrder.gain.y < goverNordic_g19.limRateLimFirstOrder.limiter.uMin then goverNordic_g19.limRateLimFirstOrder.limiter.uMin else goverNordic_g19.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6188};
  modelica_boolean tmp1752;
  modelica_boolean tmp1753;
  modelica_boolean tmp1754;
  modelica_real tmp1755;
  tmp1752 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1754 = (modelica_boolean)tmp1752;
  if(tmp1754)
  {
    tmp1755 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1753 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1755 = (tmp1753?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */) = tmp1755;
  threadData->lastEquationSolved = 6188;
}

/*
equation index: 6189
type: SIMPLE_ASSIGN
$DER.goverNordic_g19.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g19.limRateLimFirstOrder.limIntegrator.y < goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g19.limRateLimFirstOrder.limIntegrator.y > goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6189};
  modelica_boolean tmp1756;
  modelica_boolean tmp1757;
  modelica_boolean tmp1758;
  modelica_boolean tmp1759;
  tmp1756 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1757 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1758 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1759 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* der(goverNordic_g19.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1756 && tmp1757) || (tmp1758 && tmp1759))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6189;
}

/*
equation index: 6190
type: SIMPLE_ASSIGN
goverNordic_g19.waterFlow.y = goverNordic_g19.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* goverNordic_g19.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6190;
}

/*
equation index: 6191
type: SIMPLE_ASSIGN
goverNordic_g19.flowDivGateOpening.y = goverNordic_g19.waterFlow.y / goverNordic_g19.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2261]] /* goverNordic_g19.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g19.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6191;
}

/*
equation index: 6192
type: SIMPLE_ASSIGN
goverNordic_g19.headWater.y = goverNordic_g19.flowDivGateOpening.y ^ goverNordic_g19.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6192};
  modelica_real tmp1760;
  modelica_real tmp1761;
  modelica_real tmp1762;
  modelica_real tmp1763;
  modelica_real tmp1764;
  modelica_real tmp1765;
  modelica_real tmp1766;
  tmp1760 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2261]] /* goverNordic_g19.flowDivGateOpening.y variable */);
  tmp1761 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2920]] /* goverNordic_g19.headWater.N PARAM */);
  if(tmp1760 < 0.0 && tmp1761 != 0.0)
  {
    tmp1763 = modf(tmp1761, &tmp1764);
    
    if(tmp1763 > 0.5)
    {
      tmp1763 -= 1.0;
      tmp1764 += 1.0;
    }
    else if(tmp1763 < -0.5)
    {
      tmp1763 += 1.0;
      tmp1764 -= 1.0;
    }
    
    if(fabs(tmp1763) < 1e-10)
      tmp1762 = pow(tmp1760, tmp1764);
    else
    {
      tmp1766 = modf(1.0/tmp1761, &tmp1765);
      if(tmp1766 > 0.5)
      {
        tmp1766 -= 1.0;
        tmp1765 += 1.0;
      }
      else if(tmp1766 < -0.5)
      {
        tmp1766 += 1.0;
        tmp1765 -= 1.0;
      }
      if(fabs(tmp1766) < 1e-10 && ((unsigned long)tmp1765 & 1))
      {
        tmp1762 = -pow(-tmp1760, tmp1763)*pow(tmp1760, tmp1764);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1760, tmp1761);
      }
    }
  }
  else
  {
    tmp1762 = pow(tmp1760, tmp1761);
  }
  if(isnan(tmp1762) || isinf(tmp1762))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1760, tmp1761);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */) = tmp1762;
  threadData->lastEquationSolved = 6192;
}

/*
equation index: 6193
type: SIMPLE_ASSIGN
g19.PmPu = goverNordic_g19.waterFlow.y * goverNordic_g19.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* g19.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */));
  threadData->lastEquationSolved = 6193;
}

/*
equation index: 6194
type: SIMPLE_ASSIGN
g19.cmPu = if g19.running.value then g19.PmPu / g19.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1854]] /* g19.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* g19.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */),"g19.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6194;
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
$DER.g19.omegaPu = if g19.running.value then 0.5 * (g19.cmPu * g19.PNomTurb / g19.SNom - g19.DPu * (g19.omegaPu - omegaCOI) - g19.cePu) / g19.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(g19.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1854]] /* g19.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2092]] /* g19.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2054]] /* g19.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */),"g19.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6195;
}

/*
equation index: 6196
type: SIMPLE_ASSIGN
goverNordic_g19.dH.y = goverNordic_g19.const2.k - goverNordic_g19.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2257]] /* goverNordic_g19.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* goverNordic_g19.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */);
  threadData->lastEquationSolved = 6196;
}

/*
equation index: 6197
type: SIMPLE_ASSIGN
$DER.goverNordic_g19.waterFlow.y = goverNordic_g19.waterFlow.k * goverNordic_g19.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* der(goverNordic_g19.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* goverNordic_g19.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2257]] /* goverNordic_g19.dH.y variable */));
  threadData->lastEquationSolved = 6197;
}

/*
equation index: 6198
type: SIMPLE_ASSIGN
vrNordic_g19.timer.y = vrNordic_g19.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5620]] /* vrNordic_g19.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6198;
}

/*
equation index: 6199
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.timer.y = if vrNordic_g19.timer.y < vrNordic_g19.timer.outMin and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y < 0.0 or vrNordic_g19.timer.y > vrNordic_g19.timer.outMax and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6199};
  modelica_boolean tmp1767;
  modelica_boolean tmp1768;
  modelica_boolean tmp1769;
  modelica_boolean tmp1770;
  tmp1767 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */));
  tmp1768 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)),0.0);
  tmp1769 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */));
  tmp1770 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(vrNordic_g19.timer.y) STATE_DER */) = (((tmp1767 && tmp1768) || (tmp1769 && tmp1770))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6199;
}

/*
equation index: 6200
type: SIMPLE_ASSIGN
vrNordic_g19.greaterEqualThreshold.y = vrNordic_g19.timer.y >= vrNordic_g19.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6200};
  modelica_boolean tmp1771;
  tmp1771 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1069]] /* vrNordic_g19.greaterEqualThreshold.y DISCRETE */) = tmp1771;
  threadData->lastEquationSolved = 6200;
}

/*
equation index: 6201
type: SIMPLE_ASSIGN
vrNordic_g19.switch.y = if vrNordic_g19.greaterEqualThreshold.y then vrNordic_g19.gain1.y else vrNordic_g19.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1069]] /* vrNordic_g19.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3887]] /* vrNordic_g19.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
  threadData->lastEquationSolved = 6201;
}

/*
equation index: 6202
type: SIMPLE_ASSIGN
vrNordic_g19.min1.y = if vrNordic_g19.switch.y < vrNordic_g19.add.y then vrNordic_g19.switch.y else vrNordic_g19.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6202};
  modelica_boolean tmp1772;
  tmp1772 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* vrNordic_g19.min1.y variable */) = (tmp1772?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
  threadData->lastEquationSolved = 6202;
}

/*
equation index: 6203
type: SIMPLE_ASSIGN
vrNordic_g19.kMulDU.y = vrNordic_g19.kMulDU.k * vrNordic_g19.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5563]] /* vrNordic_g19.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* vrNordic_g19.min1.y variable */));
  threadData->lastEquationSolved = 6203;
}

/*
equation index: 6204
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.y = (vrNordic_g19.leadLag.bb[2] - vrNordic_g19.leadLag.d * vrNordic_g19.leadLag.a[2]) * vrNordic_g19.leadLag.x[1] + vrNordic_g19.leadLag.d * vrNordic_g19.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5572]] /* vrNordic_g19.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5573]] /* vrNordic_g19.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5573]] /* vrNordic_g19.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */));
  threadData->lastEquationSolved = 6204;
}

/*
equation index: 6205
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.leadLag.x_scaled[1] = (vrNordic_g19.leadLag.a_end * vrNordic_g19.kMulDU.y - vrNordic_g19.leadLag.a[2] * vrNordic_g19.leadLag.x_scaled[1]) / vrNordic_g19.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* der(vrNordic_g19.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5566]] /* vrNordic_g19.leadLag.a[1] PARAM */),"vrNordic_g19.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6205;
}

/*
equation index: 6206
type: SIMPLE_ASSIGN
vrNordic_g19.limIntegrator.y = vrNordic_g19.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5606]] /* vrNordic_g19.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6206;
}

/*
equation index: 6207
type: SIMPLE_ASSIGN
vrNordic_g19.feedback1.y = vrNordic_g19.leadLag.y - vrNordic_g19.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3885]] /* vrNordic_g19.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6207;
}

/*
equation index: 6208
type: SIMPLE_ASSIGN
vrNordic_g19.gain.y = vrNordic_g19.gain.k * vrNordic_g19.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5560]] /* vrNordic_g19.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3885]] /* vrNordic_g19.feedback1.y variable */));
  threadData->lastEquationSolved = 6208;
}

/*
equation index: 6209
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.limIntegrator.y = if vrNordic_g19.limIntegrator.y < vrNordic_g19.limIntegrator.outMin and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y < 0.0 or vrNordic_g19.limIntegrator.y > vrNordic_g19.limIntegrator.outMax and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y > 0.0 then 0.0 else vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6209};
  modelica_boolean tmp1773;
  modelica_boolean tmp1774;
  modelica_boolean tmp1775;
  modelica_boolean tmp1776;
  tmp1773 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */));
  tmp1774 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)),0.0);
  tmp1775 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */));
  tmp1776 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* der(vrNordic_g19.limIntegrator.y) STATE_DER */) = (((tmp1773 && tmp1774) || (tmp1775 && tmp1776))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)));
  threadData->lastEquationSolved = 6209;
}

/*
equation index: 6210
type: SIMPLE_ASSIGN
g19.ufPu = if g19.running.value then vrNordic_g19.limIntegrator.y * g19.Kuf * g19.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* g19.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* g19.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6210;
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
$DER.g19.lambdafPu = if g19.running.value then (g19.RfPPu * g19.ifPu - g19.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* der(g19.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* g19.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6211;
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.y = goverNordic_g18.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6212;
}

/*
equation index: 6213
type: SIMPLE_ASSIGN
goverNordic_g18.govInt.y = goverNordic_g18.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* goverNordic_g18.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* goverNordic_g18.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6213;
}

/*
equation index: 6214
type: SIMPLE_ASSIGN
goverNordic_g18.govOut.y = goverNordic_g18.govOut.k1 * goverNordic_g18.govKp.y + goverNordic_g18.govOut.k2 * goverNordic_g18.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2247]] /* goverNordic_g18.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* goverNordic_g18.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2246]] /* goverNordic_g18.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* goverNordic_g18.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* goverNordic_g18.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6214;
}

/*
equation index: 6215
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.feedback.y = goverNordic_g18.govOut.y - goverNordic_g18.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2249]] /* goverNordic_g18.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2247]] /* goverNordic_g18.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6215;
}

/*
equation index: 6216
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.gain.y = goverNordic_g18.limRateLimFirstOrder.gain.k * goverNordic_g18.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2890]] /* goverNordic_g18.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2249]] /* goverNordic_g18.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6216;
}

/*
equation index: 6217
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g18.limRateLimFirstOrder.gain.y > goverNordic_g18.limRateLimFirstOrder.limiter.uMax then goverNordic_g18.limRateLimFirstOrder.limiter.uMax else if goverNordic_g18.limRateLimFirstOrder.gain.y < goverNordic_g18.limRateLimFirstOrder.limiter.uMin then goverNordic_g18.limRateLimFirstOrder.limiter.uMin else goverNordic_g18.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6217};
  modelica_boolean tmp1777;
  modelica_boolean tmp1778;
  modelica_boolean tmp1779;
  modelica_real tmp1780;
  tmp1777 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1779 = (modelica_boolean)tmp1777;
  if(tmp1779)
  {
    tmp1780 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1778 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1780 = (tmp1778?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */) = tmp1780;
  threadData->lastEquationSolved = 6217;
}

/*
equation index: 6218
type: SIMPLE_ASSIGN
$DER.goverNordic_g18.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g18.limRateLimFirstOrder.limIntegrator.y < goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g18.limRateLimFirstOrder.limIntegrator.y > goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6218};
  modelica_boolean tmp1781;
  modelica_boolean tmp1782;
  modelica_boolean tmp1783;
  modelica_boolean tmp1784;
  tmp1781 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1782 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1783 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1784 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* der(goverNordic_g18.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1781 && tmp1782) || (tmp1783 && tmp1784))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6218;
}

/*
equation index: 6219
type: SIMPLE_ASSIGN
goverNordic_g18.waterFlow.y = goverNordic_g18.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* goverNordic_g18.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6219;
}

/*
equation index: 6220
type: SIMPLE_ASSIGN
goverNordic_g18.flowDivGateOpening.y = goverNordic_g18.waterFlow.y / goverNordic_g18.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2243]] /* goverNordic_g18.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g18.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6220;
}

/*
equation index: 6221
type: SIMPLE_ASSIGN
goverNordic_g18.headWater.y = goverNordic_g18.flowDivGateOpening.y ^ goverNordic_g18.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6221};
  modelica_real tmp1785;
  modelica_real tmp1786;
  modelica_real tmp1787;
  modelica_real tmp1788;
  modelica_real tmp1789;
  modelica_real tmp1790;
  modelica_real tmp1791;
  tmp1785 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2243]] /* goverNordic_g18.flowDivGateOpening.y variable */);
  tmp1786 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* goverNordic_g18.headWater.N PARAM */);
  if(tmp1785 < 0.0 && tmp1786 != 0.0)
  {
    tmp1788 = modf(tmp1786, &tmp1789);
    
    if(tmp1788 > 0.5)
    {
      tmp1788 -= 1.0;
      tmp1789 += 1.0;
    }
    else if(tmp1788 < -0.5)
    {
      tmp1788 += 1.0;
      tmp1789 -= 1.0;
    }
    
    if(fabs(tmp1788) < 1e-10)
      tmp1787 = pow(tmp1785, tmp1789);
    else
    {
      tmp1791 = modf(1.0/tmp1786, &tmp1790);
      if(tmp1791 > 0.5)
      {
        tmp1791 -= 1.0;
        tmp1790 += 1.0;
      }
      else if(tmp1791 < -0.5)
      {
        tmp1791 += 1.0;
        tmp1790 -= 1.0;
      }
      if(fabs(tmp1791) < 1e-10 && ((unsigned long)tmp1790 & 1))
      {
        tmp1787 = -pow(-tmp1785, tmp1788)*pow(tmp1785, tmp1789);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1785, tmp1786);
      }
    }
  }
  else
  {
    tmp1787 = pow(tmp1785, tmp1786);
  }
  if(isnan(tmp1787) || isinf(tmp1787))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1785, tmp1786);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */) = tmp1787;
  threadData->lastEquationSolved = 6221;
}

/*
equation index: 6222
type: SIMPLE_ASSIGN
g18.PmPu = goverNordic_g18.waterFlow.y * goverNordic_g18.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* g18.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */));
  threadData->lastEquationSolved = 6222;
}

/*
equation index: 6223
type: SIMPLE_ASSIGN
g18.cmPu = if g18.running.value then g18.PmPu / g18.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* g18.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* g18.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */),"g18.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6223;
}

/*
equation index: 6224
type: SIMPLE_ASSIGN
$DER.g18.omegaPu = if g18.running.value then 0.5 * (g18.cmPu * g18.PNomTurb / g18.SNom - g18.DPu * (g18.omegaPu - omegaCOI) - g18.cePu) / g18.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* der(g18.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* g18.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1989]] /* g18.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* g18.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */),"g18.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6224;
}

/*
equation index: 6225
type: SIMPLE_ASSIGN
goverNordic_g18.dH.y = goverNordic_g18.const2.k - goverNordic_g18.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2239]] /* goverNordic_g18.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2872]] /* goverNordic_g18.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */);
  threadData->lastEquationSolved = 6225;
}

/*
equation index: 6226
type: SIMPLE_ASSIGN
$DER.goverNordic_g18.waterFlow.y = goverNordic_g18.waterFlow.k * goverNordic_g18.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* der(goverNordic_g18.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2899]] /* goverNordic_g18.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2239]] /* goverNordic_g18.dH.y variable */));
  threadData->lastEquationSolved = 6226;
}

/*
equation index: 6227
type: SIMPLE_ASSIGN
vrNordic_g18.timer.y = vrNordic_g18.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5541]] /* vrNordic_g18.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6227;
}

/*
equation index: 6228
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.timer.y = if vrNordic_g18.timer.y < vrNordic_g18.timer.outMin and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y < 0.0 or vrNordic_g18.timer.y > vrNordic_g18.timer.outMax and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6228};
  modelica_boolean tmp1792;
  modelica_boolean tmp1793;
  modelica_boolean tmp1794;
  modelica_boolean tmp1795;
  tmp1792 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */));
  tmp1793 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)),0.0);
  tmp1794 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */));
  tmp1795 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* der(vrNordic_g18.timer.y) STATE_DER */) = (((tmp1792 && tmp1793) || (tmp1794 && tmp1795))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6228;
}

/*
equation index: 6229
type: SIMPLE_ASSIGN
vrNordic_g18.greaterEqualThreshold.y = vrNordic_g18.timer.y >= vrNordic_g18.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6229};
  modelica_boolean tmp1796;
  tmp1796 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1066]] /* vrNordic_g18.greaterEqualThreshold.y DISCRETE */) = tmp1796;
  threadData->lastEquationSolved = 6229;
}

/*
equation index: 6230
type: SIMPLE_ASSIGN
vrNordic_g18.switch.y = if vrNordic_g18.greaterEqualThreshold.y then vrNordic_g18.gain1.y else vrNordic_g18.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1066]] /* vrNordic_g18.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3863]] /* vrNordic_g18.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
  threadData->lastEquationSolved = 6230;
}

/*
equation index: 6231
type: SIMPLE_ASSIGN
vrNordic_g18.min1.y = if vrNordic_g18.switch.y < vrNordic_g18.add.y then vrNordic_g18.switch.y else vrNordic_g18.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6231};
  modelica_boolean tmp1797;
  tmp1797 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3874]] /* vrNordic_g18.min1.y variable */) = (tmp1797?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
  threadData->lastEquationSolved = 6231;
}

/*
equation index: 6232
type: SIMPLE_ASSIGN
vrNordic_g18.kMulDU.y = vrNordic_g18.kMulDU.k * vrNordic_g18.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5484]] /* vrNordic_g18.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3874]] /* vrNordic_g18.min1.y variable */));
  threadData->lastEquationSolved = 6232;
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.y = (vrNordic_g18.leadLag.bb[2] - vrNordic_g18.leadLag.d * vrNordic_g18.leadLag.a[2]) * vrNordic_g18.leadLag.x[1] + vrNordic_g18.leadLag.d * vrNordic_g18.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5493]] /* vrNordic_g18.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5494]] /* vrNordic_g18.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5494]] /* vrNordic_g18.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */));
  threadData->lastEquationSolved = 6233;
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.leadLag.x_scaled[1] = (vrNordic_g18.leadLag.a_end * vrNordic_g18.kMulDU.y - vrNordic_g18.leadLag.a[2] * vrNordic_g18.leadLag.x_scaled[1]) / vrNordic_g18.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* der(vrNordic_g18.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5487]] /* vrNordic_g18.leadLag.a[1] PARAM */),"vrNordic_g18.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6234;
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
vrNordic_g18.limIntegrator.y = vrNordic_g18.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5527]] /* vrNordic_g18.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6235;
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
vrNordic_g18.feedback1.y = vrNordic_g18.leadLag.y - vrNordic_g18.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3861]] /* vrNordic_g18.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6236;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_8(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_5779,
    MyNordic_initialized_TestCase_initialized_eqFunction_5780,
    MyNordic_initialized_TestCase_initialized_eqFunction_5781,
    MyNordic_initialized_TestCase_initialized_eqFunction_5782,
    MyNordic_initialized_TestCase_initialized_eqFunction_5783,
    MyNordic_initialized_TestCase_initialized_eqFunction_5784,
    MyNordic_initialized_TestCase_initialized_eqFunction_5785,
    MyNordic_initialized_TestCase_initialized_eqFunction_5786,
    MyNordic_initialized_TestCase_initialized_eqFunction_5787,
    MyNordic_initialized_TestCase_initialized_eqFunction_5788,
    MyNordic_initialized_TestCase_initialized_eqFunction_5789,
    MyNordic_initialized_TestCase_initialized_eqFunction_5790,
    MyNordic_initialized_TestCase_initialized_eqFunction_5791,
    MyNordic_initialized_TestCase_initialized_eqFunction_5792,
    MyNordic_initialized_TestCase_initialized_eqFunction_5793,
    MyNordic_initialized_TestCase_initialized_eqFunction_5794,
    MyNordic_initialized_TestCase_initialized_eqFunction_5795,
    MyNordic_initialized_TestCase_initialized_eqFunction_5796,
    MyNordic_initialized_TestCase_initialized_eqFunction_5797,
    MyNordic_initialized_TestCase_initialized_eqFunction_5798,
    MyNordic_initialized_TestCase_initialized_eqFunction_5799,
    MyNordic_initialized_TestCase_initialized_eqFunction_5800,
    MyNordic_initialized_TestCase_initialized_eqFunction_5801,
    MyNordic_initialized_TestCase_initialized_eqFunction_5802,
    MyNordic_initialized_TestCase_initialized_eqFunction_5803,
    MyNordic_initialized_TestCase_initialized_eqFunction_5804,
    MyNordic_initialized_TestCase_initialized_eqFunction_5805,
    MyNordic_initialized_TestCase_initialized_eqFunction_5806,
    MyNordic_initialized_TestCase_initialized_eqFunction_5807,
    MyNordic_initialized_TestCase_initialized_eqFunction_5808,
    MyNordic_initialized_TestCase_initialized_eqFunction_5809,
    MyNordic_initialized_TestCase_initialized_eqFunction_5810,
    MyNordic_initialized_TestCase_initialized_eqFunction_5811,
    MyNordic_initialized_TestCase_initialized_eqFunction_5812,
    MyNordic_initialized_TestCase_initialized_eqFunction_5813,
    MyNordic_initialized_TestCase_initialized_eqFunction_5814,
    MyNordic_initialized_TestCase_initialized_eqFunction_5815,
    MyNordic_initialized_TestCase_initialized_eqFunction_5816,
    MyNordic_initialized_TestCase_initialized_eqFunction_5817,
    MyNordic_initialized_TestCase_initialized_eqFunction_5818,
    MyNordic_initialized_TestCase_initialized_eqFunction_5819,
    MyNordic_initialized_TestCase_initialized_eqFunction_5820,
    MyNordic_initialized_TestCase_initialized_eqFunction_5821,
    MyNordic_initialized_TestCase_initialized_eqFunction_5822,
    MyNordic_initialized_TestCase_initialized_eqFunction_5823,
    MyNordic_initialized_TestCase_initialized_eqFunction_5824,
    MyNordic_initialized_TestCase_initialized_eqFunction_5825,
    MyNordic_initialized_TestCase_initialized_eqFunction_5826,
    MyNordic_initialized_TestCase_initialized_eqFunction_5827,
    MyNordic_initialized_TestCase_initialized_eqFunction_5828,
    MyNordic_initialized_TestCase_initialized_eqFunction_5829,
    MyNordic_initialized_TestCase_initialized_eqFunction_5830,
    MyNordic_initialized_TestCase_initialized_eqFunction_5831,
    MyNordic_initialized_TestCase_initialized_eqFunction_5832,
    MyNordic_initialized_TestCase_initialized_eqFunction_5833,
    MyNordic_initialized_TestCase_initialized_eqFunction_5834,
    MyNordic_initialized_TestCase_initialized_eqFunction_5835,
    MyNordic_initialized_TestCase_initialized_eqFunction_5836,
    MyNordic_initialized_TestCase_initialized_eqFunction_5837,
    MyNordic_initialized_TestCase_initialized_eqFunction_5838,
    MyNordic_initialized_TestCase_initialized_eqFunction_5839,
    MyNordic_initialized_TestCase_initialized_eqFunction_5840,
    MyNordic_initialized_TestCase_initialized_eqFunction_5841,
    MyNordic_initialized_TestCase_initialized_eqFunction_5842,
    MyNordic_initialized_TestCase_initialized_eqFunction_5843,
    MyNordic_initialized_TestCase_initialized_eqFunction_5844,
    MyNordic_initialized_TestCase_initialized_eqFunction_5845,
    MyNordic_initialized_TestCase_initialized_eqFunction_5846,
    MyNordic_initialized_TestCase_initialized_eqFunction_5847,
    MyNordic_initialized_TestCase_initialized_eqFunction_5848,
    MyNordic_initialized_TestCase_initialized_eqFunction_5849,
    MyNordic_initialized_TestCase_initialized_eqFunction_5850,
    MyNordic_initialized_TestCase_initialized_eqFunction_5851,
    MyNordic_initialized_TestCase_initialized_eqFunction_5852,
    MyNordic_initialized_TestCase_initialized_eqFunction_5853,
    MyNordic_initialized_TestCase_initialized_eqFunction_5854,
    MyNordic_initialized_TestCase_initialized_eqFunction_5855,
    MyNordic_initialized_TestCase_initialized_eqFunction_5856,
    MyNordic_initialized_TestCase_initialized_eqFunction_5857,
    MyNordic_initialized_TestCase_initialized_eqFunction_5858,
    MyNordic_initialized_TestCase_initialized_eqFunction_5859,
    MyNordic_initialized_TestCase_initialized_eqFunction_5860,
    MyNordic_initialized_TestCase_initialized_eqFunction_5861,
    MyNordic_initialized_TestCase_initialized_eqFunction_5862,
    MyNordic_initialized_TestCase_initialized_eqFunction_5863,
    MyNordic_initialized_TestCase_initialized_eqFunction_5864,
    MyNordic_initialized_TestCase_initialized_eqFunction_5865,
    MyNordic_initialized_TestCase_initialized_eqFunction_5866,
    MyNordic_initialized_TestCase_initialized_eqFunction_5867,
    MyNordic_initialized_TestCase_initialized_eqFunction_5868,
    MyNordic_initialized_TestCase_initialized_eqFunction_5869,
    MyNordic_initialized_TestCase_initialized_eqFunction_5870,
    MyNordic_initialized_TestCase_initialized_eqFunction_5871,
    MyNordic_initialized_TestCase_initialized_eqFunction_5872,
    MyNordic_initialized_TestCase_initialized_eqFunction_5873,
    MyNordic_initialized_TestCase_initialized_eqFunction_5874,
    MyNordic_initialized_TestCase_initialized_eqFunction_5875,
    MyNordic_initialized_TestCase_initialized_eqFunction_5876,
    MyNordic_initialized_TestCase_initialized_eqFunction_5877,
    MyNordic_initialized_TestCase_initialized_eqFunction_5878,
    MyNordic_initialized_TestCase_initialized_eqFunction_5879,
    MyNordic_initialized_TestCase_initialized_eqFunction_5880,
    MyNordic_initialized_TestCase_initialized_eqFunction_5881,
    MyNordic_initialized_TestCase_initialized_eqFunction_5882,
    MyNordic_initialized_TestCase_initialized_eqFunction_5883,
    MyNordic_initialized_TestCase_initialized_eqFunction_5884,
    MyNordic_initialized_TestCase_initialized_eqFunction_5885,
    MyNordic_initialized_TestCase_initialized_eqFunction_5886,
    MyNordic_initialized_TestCase_initialized_eqFunction_5887,
    MyNordic_initialized_TestCase_initialized_eqFunction_5888,
    MyNordic_initialized_TestCase_initialized_eqFunction_5889,
    MyNordic_initialized_TestCase_initialized_eqFunction_5890,
    MyNordic_initialized_TestCase_initialized_eqFunction_5891,
    MyNordic_initialized_TestCase_initialized_eqFunction_5892,
    MyNordic_initialized_TestCase_initialized_eqFunction_5893,
    MyNordic_initialized_TestCase_initialized_eqFunction_5894,
    MyNordic_initialized_TestCase_initialized_eqFunction_5895,
    MyNordic_initialized_TestCase_initialized_eqFunction_5896,
    MyNordic_initialized_TestCase_initialized_eqFunction_5897,
    MyNordic_initialized_TestCase_initialized_eqFunction_5898,
    MyNordic_initialized_TestCase_initialized_eqFunction_5899,
    MyNordic_initialized_TestCase_initialized_eqFunction_5900,
    MyNordic_initialized_TestCase_initialized_eqFunction_5901,
    MyNordic_initialized_TestCase_initialized_eqFunction_5902,
    MyNordic_initialized_TestCase_initialized_eqFunction_5903,
    MyNordic_initialized_TestCase_initialized_eqFunction_5904,
    MyNordic_initialized_TestCase_initialized_eqFunction_5905,
    MyNordic_initialized_TestCase_initialized_eqFunction_5906,
    MyNordic_initialized_TestCase_initialized_eqFunction_5907,
    MyNordic_initialized_TestCase_initialized_eqFunction_5908,
    MyNordic_initialized_TestCase_initialized_eqFunction_5909,
    MyNordic_initialized_TestCase_initialized_eqFunction_5910,
    MyNordic_initialized_TestCase_initialized_eqFunction_5911,
    MyNordic_initialized_TestCase_initialized_eqFunction_5912,
    MyNordic_initialized_TestCase_initialized_eqFunction_5913,
    MyNordic_initialized_TestCase_initialized_eqFunction_5914,
    MyNordic_initialized_TestCase_initialized_eqFunction_5915,
    MyNordic_initialized_TestCase_initialized_eqFunction_5916,
    MyNordic_initialized_TestCase_initialized_eqFunction_5917,
    MyNordic_initialized_TestCase_initialized_eqFunction_5918,
    MyNordic_initialized_TestCase_initialized_eqFunction_5919,
    MyNordic_initialized_TestCase_initialized_eqFunction_5920,
    MyNordic_initialized_TestCase_initialized_eqFunction_5921,
    MyNordic_initialized_TestCase_initialized_eqFunction_5922,
    MyNordic_initialized_TestCase_initialized_eqFunction_5923,
    MyNordic_initialized_TestCase_initialized_eqFunction_5924,
    MyNordic_initialized_TestCase_initialized_eqFunction_5925,
    MyNordic_initialized_TestCase_initialized_eqFunction_5926,
    MyNordic_initialized_TestCase_initialized_eqFunction_5927,
    MyNordic_initialized_TestCase_initialized_eqFunction_5928,
    MyNordic_initialized_TestCase_initialized_eqFunction_5929,
    MyNordic_initialized_TestCase_initialized_eqFunction_5930,
    MyNordic_initialized_TestCase_initialized_eqFunction_5931,
    MyNordic_initialized_TestCase_initialized_eqFunction_5932,
    MyNordic_initialized_TestCase_initialized_eqFunction_5933,
    MyNordic_initialized_TestCase_initialized_eqFunction_5934,
    MyNordic_initialized_TestCase_initialized_eqFunction_5935,
    MyNordic_initialized_TestCase_initialized_eqFunction_5936,
    MyNordic_initialized_TestCase_initialized_eqFunction_5937,
    MyNordic_initialized_TestCase_initialized_eqFunction_5938,
    MyNordic_initialized_TestCase_initialized_eqFunction_5939,
    MyNordic_initialized_TestCase_initialized_eqFunction_5940,
    MyNordic_initialized_TestCase_initialized_eqFunction_5941,
    MyNordic_initialized_TestCase_initialized_eqFunction_5942,
    MyNordic_initialized_TestCase_initialized_eqFunction_5943,
    MyNordic_initialized_TestCase_initialized_eqFunction_5944,
    MyNordic_initialized_TestCase_initialized_eqFunction_5945,
    MyNordic_initialized_TestCase_initialized_eqFunction_5946,
    MyNordic_initialized_TestCase_initialized_eqFunction_5947,
    MyNordic_initialized_TestCase_initialized_eqFunction_5948,
    MyNordic_initialized_TestCase_initialized_eqFunction_5949,
    MyNordic_initialized_TestCase_initialized_eqFunction_5950,
    MyNordic_initialized_TestCase_initialized_eqFunction_5951,
    MyNordic_initialized_TestCase_initialized_eqFunction_5952,
    MyNordic_initialized_TestCase_initialized_eqFunction_5953,
    MyNordic_initialized_TestCase_initialized_eqFunction_5954,
    MyNordic_initialized_TestCase_initialized_eqFunction_5955,
    MyNordic_initialized_TestCase_initialized_eqFunction_5956,
    MyNordic_initialized_TestCase_initialized_eqFunction_5957,
    MyNordic_initialized_TestCase_initialized_eqFunction_5958,
    MyNordic_initialized_TestCase_initialized_eqFunction_5959,
    MyNordic_initialized_TestCase_initialized_eqFunction_5960,
    MyNordic_initialized_TestCase_initialized_eqFunction_5961,
    MyNordic_initialized_TestCase_initialized_eqFunction_5962,
    MyNordic_initialized_TestCase_initialized_eqFunction_5963,
    MyNordic_initialized_TestCase_initialized_eqFunction_5964,
    MyNordic_initialized_TestCase_initialized_eqFunction_5965,
    MyNordic_initialized_TestCase_initialized_eqFunction_5966,
    MyNordic_initialized_TestCase_initialized_eqFunction_5967,
    MyNordic_initialized_TestCase_initialized_eqFunction_5968,
    MyNordic_initialized_TestCase_initialized_eqFunction_5969,
    MyNordic_initialized_TestCase_initialized_eqFunction_5970,
    MyNordic_initialized_TestCase_initialized_eqFunction_5971,
    MyNordic_initialized_TestCase_initialized_eqFunction_5972,
    MyNordic_initialized_TestCase_initialized_eqFunction_5973,
    MyNordic_initialized_TestCase_initialized_eqFunction_5974,
    MyNordic_initialized_TestCase_initialized_eqFunction_5975,
    MyNordic_initialized_TestCase_initialized_eqFunction_5976,
    MyNordic_initialized_TestCase_initialized_eqFunction_5977,
    MyNordic_initialized_TestCase_initialized_eqFunction_5978,
    MyNordic_initialized_TestCase_initialized_eqFunction_5979,
    MyNordic_initialized_TestCase_initialized_eqFunction_5980,
    MyNordic_initialized_TestCase_initialized_eqFunction_5981,
    MyNordic_initialized_TestCase_initialized_eqFunction_5982,
    MyNordic_initialized_TestCase_initialized_eqFunction_5983,
    MyNordic_initialized_TestCase_initialized_eqFunction_5984,
    MyNordic_initialized_TestCase_initialized_eqFunction_5985,
    MyNordic_initialized_TestCase_initialized_eqFunction_5986,
    MyNordic_initialized_TestCase_initialized_eqFunction_5987,
    MyNordic_initialized_TestCase_initialized_eqFunction_5988,
    MyNordic_initialized_TestCase_initialized_eqFunction_5989,
    MyNordic_initialized_TestCase_initialized_eqFunction_5990,
    MyNordic_initialized_TestCase_initialized_eqFunction_5991,
    MyNordic_initialized_TestCase_initialized_eqFunction_5992,
    MyNordic_initialized_TestCase_initialized_eqFunction_5993,
    MyNordic_initialized_TestCase_initialized_eqFunction_5994,
    MyNordic_initialized_TestCase_initialized_eqFunction_5995,
    MyNordic_initialized_TestCase_initialized_eqFunction_5996,
    MyNordic_initialized_TestCase_initialized_eqFunction_5997,
    MyNordic_initialized_TestCase_initialized_eqFunction_5998,
    MyNordic_initialized_TestCase_initialized_eqFunction_5999,
    MyNordic_initialized_TestCase_initialized_eqFunction_6000,
    MyNordic_initialized_TestCase_initialized_eqFunction_6001,
    MyNordic_initialized_TestCase_initialized_eqFunction_6002,
    MyNordic_initialized_TestCase_initialized_eqFunction_6003,
    MyNordic_initialized_TestCase_initialized_eqFunction_6004,
    MyNordic_initialized_TestCase_initialized_eqFunction_6005,
    MyNordic_initialized_TestCase_initialized_eqFunction_6006,
    MyNordic_initialized_TestCase_initialized_eqFunction_6007,
    MyNordic_initialized_TestCase_initialized_eqFunction_6008,
    MyNordic_initialized_TestCase_initialized_eqFunction_6009,
    MyNordic_initialized_TestCase_initialized_eqFunction_6010,
    MyNordic_initialized_TestCase_initialized_eqFunction_6011,
    MyNordic_initialized_TestCase_initialized_eqFunction_6012,
    MyNordic_initialized_TestCase_initialized_eqFunction_6013,
    MyNordic_initialized_TestCase_initialized_eqFunction_6014,
    MyNordic_initialized_TestCase_initialized_eqFunction_6015,
    MyNordic_initialized_TestCase_initialized_eqFunction_6016,
    MyNordic_initialized_TestCase_initialized_eqFunction_6017,
    MyNordic_initialized_TestCase_initialized_eqFunction_6018,
    MyNordic_initialized_TestCase_initialized_eqFunction_6019,
    MyNordic_initialized_TestCase_initialized_eqFunction_6020,
    MyNordic_initialized_TestCase_initialized_eqFunction_6021,
    MyNordic_initialized_TestCase_initialized_eqFunction_6022,
    MyNordic_initialized_TestCase_initialized_eqFunction_6023,
    MyNordic_initialized_TestCase_initialized_eqFunction_6024,
    MyNordic_initialized_TestCase_initialized_eqFunction_6025,
    MyNordic_initialized_TestCase_initialized_eqFunction_6026,
    MyNordic_initialized_TestCase_initialized_eqFunction_6027,
    MyNordic_initialized_TestCase_initialized_eqFunction_6028,
    MyNordic_initialized_TestCase_initialized_eqFunction_6029,
    MyNordic_initialized_TestCase_initialized_eqFunction_6030,
    MyNordic_initialized_TestCase_initialized_eqFunction_6031,
    MyNordic_initialized_TestCase_initialized_eqFunction_6032,
    MyNordic_initialized_TestCase_initialized_eqFunction_6033,
    MyNordic_initialized_TestCase_initialized_eqFunction_6034,
    MyNordic_initialized_TestCase_initialized_eqFunction_6035,
    MyNordic_initialized_TestCase_initialized_eqFunction_6036,
    MyNordic_initialized_TestCase_initialized_eqFunction_6037,
    MyNordic_initialized_TestCase_initialized_eqFunction_6038,
    MyNordic_initialized_TestCase_initialized_eqFunction_6039,
    MyNordic_initialized_TestCase_initialized_eqFunction_6040,
    MyNordic_initialized_TestCase_initialized_eqFunction_6041,
    MyNordic_initialized_TestCase_initialized_eqFunction_6042,
    MyNordic_initialized_TestCase_initialized_eqFunction_6043,
    MyNordic_initialized_TestCase_initialized_eqFunction_6044,
    MyNordic_initialized_TestCase_initialized_eqFunction_6045,
    MyNordic_initialized_TestCase_initialized_eqFunction_6046,
    MyNordic_initialized_TestCase_initialized_eqFunction_6047,
    MyNordic_initialized_TestCase_initialized_eqFunction_6048,
    MyNordic_initialized_TestCase_initialized_eqFunction_6049,
    MyNordic_initialized_TestCase_initialized_eqFunction_6050,
    MyNordic_initialized_TestCase_initialized_eqFunction_6051,
    MyNordic_initialized_TestCase_initialized_eqFunction_6052,
    MyNordic_initialized_TestCase_initialized_eqFunction_6053,
    MyNordic_initialized_TestCase_initialized_eqFunction_6054,
    MyNordic_initialized_TestCase_initialized_eqFunction_6055,
    MyNordic_initialized_TestCase_initialized_eqFunction_6056,
    MyNordic_initialized_TestCase_initialized_eqFunction_6057,
    MyNordic_initialized_TestCase_initialized_eqFunction_6058,
    MyNordic_initialized_TestCase_initialized_eqFunction_6059,
    MyNordic_initialized_TestCase_initialized_eqFunction_6060,
    MyNordic_initialized_TestCase_initialized_eqFunction_6061,
    MyNordic_initialized_TestCase_initialized_eqFunction_6062,
    MyNordic_initialized_TestCase_initialized_eqFunction_6063,
    MyNordic_initialized_TestCase_initialized_eqFunction_6064,
    MyNordic_initialized_TestCase_initialized_eqFunction_6065,
    MyNordic_initialized_TestCase_initialized_eqFunction_6066,
    MyNordic_initialized_TestCase_initialized_eqFunction_6067,
    MyNordic_initialized_TestCase_initialized_eqFunction_6068,
    MyNordic_initialized_TestCase_initialized_eqFunction_6069,
    MyNordic_initialized_TestCase_initialized_eqFunction_6070,
    MyNordic_initialized_TestCase_initialized_eqFunction_6071,
    MyNordic_initialized_TestCase_initialized_eqFunction_6072,
    MyNordic_initialized_TestCase_initialized_eqFunction_6073,
    MyNordic_initialized_TestCase_initialized_eqFunction_6074,
    MyNordic_initialized_TestCase_initialized_eqFunction_6075,
    MyNordic_initialized_TestCase_initialized_eqFunction_6076,
    MyNordic_initialized_TestCase_initialized_eqFunction_6077,
    MyNordic_initialized_TestCase_initialized_eqFunction_6078,
    MyNordic_initialized_TestCase_initialized_eqFunction_6079,
    MyNordic_initialized_TestCase_initialized_eqFunction_6080,
    MyNordic_initialized_TestCase_initialized_eqFunction_6081,
    MyNordic_initialized_TestCase_initialized_eqFunction_6082,
    MyNordic_initialized_TestCase_initialized_eqFunction_6083,
    MyNordic_initialized_TestCase_initialized_eqFunction_6084,
    MyNordic_initialized_TestCase_initialized_eqFunction_6085,
    MyNordic_initialized_TestCase_initialized_eqFunction_6086,
    MyNordic_initialized_TestCase_initialized_eqFunction_6087,
    MyNordic_initialized_TestCase_initialized_eqFunction_6088,
    MyNordic_initialized_TestCase_initialized_eqFunction_6089,
    MyNordic_initialized_TestCase_initialized_eqFunction_6090,
    MyNordic_initialized_TestCase_initialized_eqFunction_6091,
    MyNordic_initialized_TestCase_initialized_eqFunction_6092,
    MyNordic_initialized_TestCase_initialized_eqFunction_6093,
    MyNordic_initialized_TestCase_initialized_eqFunction_6094,
    MyNordic_initialized_TestCase_initialized_eqFunction_6095,
    MyNordic_initialized_TestCase_initialized_eqFunction_6096,
    MyNordic_initialized_TestCase_initialized_eqFunction_6097,
    MyNordic_initialized_TestCase_initialized_eqFunction_6098,
    MyNordic_initialized_TestCase_initialized_eqFunction_6099,
    MyNordic_initialized_TestCase_initialized_eqFunction_6100,
    MyNordic_initialized_TestCase_initialized_eqFunction_6101,
    MyNordic_initialized_TestCase_initialized_eqFunction_6102,
    MyNordic_initialized_TestCase_initialized_eqFunction_6103,
    MyNordic_initialized_TestCase_initialized_eqFunction_6104,
    MyNordic_initialized_TestCase_initialized_eqFunction_6105,
    MyNordic_initialized_TestCase_initialized_eqFunction_6106,
    MyNordic_initialized_TestCase_initialized_eqFunction_6107,
    MyNordic_initialized_TestCase_initialized_eqFunction_6108,
    MyNordic_initialized_TestCase_initialized_eqFunction_6109,
    MyNordic_initialized_TestCase_initialized_eqFunction_6110,
    MyNordic_initialized_TestCase_initialized_eqFunction_6111,
    MyNordic_initialized_TestCase_initialized_eqFunction_6112,
    MyNordic_initialized_TestCase_initialized_eqFunction_6113,
    MyNordic_initialized_TestCase_initialized_eqFunction_6114,
    MyNordic_initialized_TestCase_initialized_eqFunction_6115,
    MyNordic_initialized_TestCase_initialized_eqFunction_6116,
    MyNordic_initialized_TestCase_initialized_eqFunction_6117,
    MyNordic_initialized_TestCase_initialized_eqFunction_6118,
    MyNordic_initialized_TestCase_initialized_eqFunction_6119,
    MyNordic_initialized_TestCase_initialized_eqFunction_6120,
    MyNordic_initialized_TestCase_initialized_eqFunction_6121,
    MyNordic_initialized_TestCase_initialized_eqFunction_6122,
    MyNordic_initialized_TestCase_initialized_eqFunction_6123,
    MyNordic_initialized_TestCase_initialized_eqFunction_6124,
    MyNordic_initialized_TestCase_initialized_eqFunction_6125,
    MyNordic_initialized_TestCase_initialized_eqFunction_6126,
    MyNordic_initialized_TestCase_initialized_eqFunction_6127,
    MyNordic_initialized_TestCase_initialized_eqFunction_6128,
    MyNordic_initialized_TestCase_initialized_eqFunction_6129,
    MyNordic_initialized_TestCase_initialized_eqFunction_6130,
    MyNordic_initialized_TestCase_initialized_eqFunction_6131,
    MyNordic_initialized_TestCase_initialized_eqFunction_6132,
    MyNordic_initialized_TestCase_initialized_eqFunction_6133,
    MyNordic_initialized_TestCase_initialized_eqFunction_6134,
    MyNordic_initialized_TestCase_initialized_eqFunction_6135,
    MyNordic_initialized_TestCase_initialized_eqFunction_6136,
    MyNordic_initialized_TestCase_initialized_eqFunction_6137,
    MyNordic_initialized_TestCase_initialized_eqFunction_6138,
    MyNordic_initialized_TestCase_initialized_eqFunction_6139,
    MyNordic_initialized_TestCase_initialized_eqFunction_6140,
    MyNordic_initialized_TestCase_initialized_eqFunction_6141,
    MyNordic_initialized_TestCase_initialized_eqFunction_6142,
    MyNordic_initialized_TestCase_initialized_eqFunction_6143,
    MyNordic_initialized_TestCase_initialized_eqFunction_6144,
    MyNordic_initialized_TestCase_initialized_eqFunction_6145,
    MyNordic_initialized_TestCase_initialized_eqFunction_6146,
    MyNordic_initialized_TestCase_initialized_eqFunction_6147,
    MyNordic_initialized_TestCase_initialized_eqFunction_6148,
    MyNordic_initialized_TestCase_initialized_eqFunction_6149,
    MyNordic_initialized_TestCase_initialized_eqFunction_6150,
    MyNordic_initialized_TestCase_initialized_eqFunction_6151,
    MyNordic_initialized_TestCase_initialized_eqFunction_6152,
    MyNordic_initialized_TestCase_initialized_eqFunction_6153,
    MyNordic_initialized_TestCase_initialized_eqFunction_6154,
    MyNordic_initialized_TestCase_initialized_eqFunction_6155,
    MyNordic_initialized_TestCase_initialized_eqFunction_6156,
    MyNordic_initialized_TestCase_initialized_eqFunction_6157,
    MyNordic_initialized_TestCase_initialized_eqFunction_6158,
    MyNordic_initialized_TestCase_initialized_eqFunction_6159,
    MyNordic_initialized_TestCase_initialized_eqFunction_6160,
    MyNordic_initialized_TestCase_initialized_eqFunction_6161,
    MyNordic_initialized_TestCase_initialized_eqFunction_6162,
    MyNordic_initialized_TestCase_initialized_eqFunction_6163,
    MyNordic_initialized_TestCase_initialized_eqFunction_6164,
    MyNordic_initialized_TestCase_initialized_eqFunction_6165,
    MyNordic_initialized_TestCase_initialized_eqFunction_6166,
    MyNordic_initialized_TestCase_initialized_eqFunction_6167,
    MyNordic_initialized_TestCase_initialized_eqFunction_6168,
    MyNordic_initialized_TestCase_initialized_eqFunction_6169,
    MyNordic_initialized_TestCase_initialized_eqFunction_6170,
    MyNordic_initialized_TestCase_initialized_eqFunction_6171,
    MyNordic_initialized_TestCase_initialized_eqFunction_6172,
    MyNordic_initialized_TestCase_initialized_eqFunction_6173,
    MyNordic_initialized_TestCase_initialized_eqFunction_6174,
    MyNordic_initialized_TestCase_initialized_eqFunction_6175,
    MyNordic_initialized_TestCase_initialized_eqFunction_6176,
    MyNordic_initialized_TestCase_initialized_eqFunction_6177,
    MyNordic_initialized_TestCase_initialized_eqFunction_6178,
    MyNordic_initialized_TestCase_initialized_eqFunction_6179,
    MyNordic_initialized_TestCase_initialized_eqFunction_6180,
    MyNordic_initialized_TestCase_initialized_eqFunction_6181,
    MyNordic_initialized_TestCase_initialized_eqFunction_6182,
    MyNordic_initialized_TestCase_initialized_eqFunction_6183,
    MyNordic_initialized_TestCase_initialized_eqFunction_6184,
    MyNordic_initialized_TestCase_initialized_eqFunction_6185,
    MyNordic_initialized_TestCase_initialized_eqFunction_6186,
    MyNordic_initialized_TestCase_initialized_eqFunction_6187,
    MyNordic_initialized_TestCase_initialized_eqFunction_6188,
    MyNordic_initialized_TestCase_initialized_eqFunction_6189,
    MyNordic_initialized_TestCase_initialized_eqFunction_6190,
    MyNordic_initialized_TestCase_initialized_eqFunction_6191,
    MyNordic_initialized_TestCase_initialized_eqFunction_6192,
    MyNordic_initialized_TestCase_initialized_eqFunction_6193,
    MyNordic_initialized_TestCase_initialized_eqFunction_6194,
    MyNordic_initialized_TestCase_initialized_eqFunction_6195,
    MyNordic_initialized_TestCase_initialized_eqFunction_6196,
    MyNordic_initialized_TestCase_initialized_eqFunction_6197,
    MyNordic_initialized_TestCase_initialized_eqFunction_6198,
    MyNordic_initialized_TestCase_initialized_eqFunction_6199,
    MyNordic_initialized_TestCase_initialized_eqFunction_6200,
    MyNordic_initialized_TestCase_initialized_eqFunction_6201,
    MyNordic_initialized_TestCase_initialized_eqFunction_6202,
    MyNordic_initialized_TestCase_initialized_eqFunction_6203,
    MyNordic_initialized_TestCase_initialized_eqFunction_6204,
    MyNordic_initialized_TestCase_initialized_eqFunction_6205,
    MyNordic_initialized_TestCase_initialized_eqFunction_6206,
    MyNordic_initialized_TestCase_initialized_eqFunction_6207,
    MyNordic_initialized_TestCase_initialized_eqFunction_6208,
    MyNordic_initialized_TestCase_initialized_eqFunction_6209,
    MyNordic_initialized_TestCase_initialized_eqFunction_6210,
    MyNordic_initialized_TestCase_initialized_eqFunction_6211,
    MyNordic_initialized_TestCase_initialized_eqFunction_6212,
    MyNordic_initialized_TestCase_initialized_eqFunction_6213,
    MyNordic_initialized_TestCase_initialized_eqFunction_6214,
    MyNordic_initialized_TestCase_initialized_eqFunction_6215,
    MyNordic_initialized_TestCase_initialized_eqFunction_6216,
    MyNordic_initialized_TestCase_initialized_eqFunction_6217,
    MyNordic_initialized_TestCase_initialized_eqFunction_6218,
    MyNordic_initialized_TestCase_initialized_eqFunction_6219,
    MyNordic_initialized_TestCase_initialized_eqFunction_6220,
    MyNordic_initialized_TestCase_initialized_eqFunction_6221,
    MyNordic_initialized_TestCase_initialized_eqFunction_6222,
    MyNordic_initialized_TestCase_initialized_eqFunction_6223,
    MyNordic_initialized_TestCase_initialized_eqFunction_6224,
    MyNordic_initialized_TestCase_initialized_eqFunction_6225,
    MyNordic_initialized_TestCase_initialized_eqFunction_6226,
    MyNordic_initialized_TestCase_initialized_eqFunction_6227,
    MyNordic_initialized_TestCase_initialized_eqFunction_6228,
    MyNordic_initialized_TestCase_initialized_eqFunction_6229,
    MyNordic_initialized_TestCase_initialized_eqFunction_6230,
    MyNordic_initialized_TestCase_initialized_eqFunction_6231,
    MyNordic_initialized_TestCase_initialized_eqFunction_6232,
    MyNordic_initialized_TestCase_initialized_eqFunction_6233,
    MyNordic_initialized_TestCase_initialized_eqFunction_6234,
    MyNordic_initialized_TestCase_initialized_eqFunction_6235,
    MyNordic_initialized_TestCase_initialized_eqFunction_6236
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif