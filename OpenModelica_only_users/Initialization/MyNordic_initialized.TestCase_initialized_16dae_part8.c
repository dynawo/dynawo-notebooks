#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 17827
type: SIMPLE_ASSIGN
$DAEres623 = if line_4031_4032.running.value then 0.001 * (line_4031_4032.terminal1.i.re + 0.15079679999999998 * line_4031_4041b.terminal1.V.im - line_4031_4032.YPu.re * line_4031_4041b.terminal1.V.re) + (-0.01) * (line_4031_4032.terminal1.i.im + (-0.15079679999999998) * line_4031_4041b.terminal1.V.re - line_4031_4032.YPu.re * line_4031_4041b.terminal1.V.im) - (line_4031_4041b.terminal1.V.re - line_4032_4044.terminal1.V.re) else line_4031_4032.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17827};
  (data->simulationInfo->daeModeData->residualVars[623]) /* $DAEres623 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17827;
}
/*
equation index: 17828
type: SIMPLE_ASSIGN
$DAEres624 = if line_4031_4032.running.value then 0.001 * (line_4031_4032.terminal2.i.re + 0.15079679999999998 * line_4032_4044.terminal1.V.im - line_4031_4032.YPu.re * line_4032_4044.terminal1.V.re) + (-0.01) * (line_4031_4032.terminal2.i.im + (-0.15079679999999998) * line_4032_4044.terminal1.V.re - line_4031_4032.YPu.re * line_4032_4044.terminal1.V.im) - (line_4032_4044.terminal1.V.re - line_4031_4041b.terminal1.V.re) else line_4031_4032.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17828};
  (data->simulationInfo->daeModeData->residualVars[624]) /* $DAEres624 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17828;
}
/*
equation index: 17829
type: SIMPLE_ASSIGN
$whenCondition383 = not pre(line_4022_4031b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17829};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[315]] /* $whenCondition383 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[694] /* line_4022_4031b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17829;
}
/*
equation index: 17830
type: WHEN

when {} then
  line_4022_4031b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17830};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[315]] /* $whenCondition383 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[315] /* $whenCondition383 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17830;
}
/*
equation index: 17832
type: SIMPLE_ASSIGN
$whenCondition385 = not line_4022_4031b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17832};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[317]] /* $whenCondition385 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17832;
}
/*
equation index: 17833
type: SIMPLE_ASSIGN
$whenCondition384 = line_4022_4031b.running.value and not pre(line_4022_4031b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17833};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[316]] /* $whenCondition384 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[694] /* line_4022_4031b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17833;
}
/*
equation index: 17834
type: WHEN

when {$whenCondition385} then
  line_4022_4031b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17834};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[317]] /* $whenCondition385 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[317] /* $whenCondition385 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[68]] /* line_4022_4031b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[316]] /* $whenCondition384 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[316] /* $whenCondition384 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[68]] /* line_4022_4031b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17834;
}
/*
equation index: 17836
type: SIMPLE_ASSIGN
$DAEres378 = if line_4022_4031b.running.value then 0.004 * (line_4022_4031b.terminal1.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4022_4031b.YPu.re * line_4022_4031b.terminal1.V.im) + 0.04 * (line_4022_4031b.terminal1.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4022_4031b.YPu.re * line_4022_4031b.terminal1.V.re) - (line_4022_4031b.terminal1.V.im - line_4031_4041b.terminal1.V.im) else line_4022_4031b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17836};
  (data->simulationInfo->daeModeData->residualVars[378]) /* $DAEres378 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17836;
}
/*
equation index: 17837
type: SIMPLE_ASSIGN
$DAEres1113 = if line_4022_4031b.running.value then 0.004 * (line_4022_4031b.terminal1.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4022_4031b.YPu.re * line_4022_4031b.terminal1.V.re) + (-0.04) * (line_4022_4031b.terminal1.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4022_4031b.YPu.re * line_4022_4031b.terminal1.V.im) - (line_4022_4031b.terminal1.V.re - line_4031_4041b.terminal1.V.re) else line_4022_4031b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17837};
  (data->simulationInfo->daeModeData->residualVars[1113]) /* $DAEres1113 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17837;
}
/*
equation index: 17838
type: SIMPLE_ASSIGN
$DAEres1114 = if line_4022_4031b.running.value then 0.004 * (line_4022_4031b.terminal2.i.re + 0.600672 * line_4031_4041b.terminal1.V.im - line_4022_4031b.YPu.re * line_4031_4041b.terminal1.V.re) + (-0.04) * (line_4022_4031b.terminal2.i.im + (-0.600672) * line_4031_4041b.terminal1.V.re - line_4022_4031b.YPu.re * line_4031_4041b.terminal1.V.im) - (line_4031_4041b.terminal1.V.re - line_4022_4031b.terminal1.V.re) else line_4022_4031b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17838};
  (data->simulationInfo->daeModeData->residualVars[1114]) /* $DAEres1114 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17838;
}
/*
equation index: 17839
type: SIMPLE_ASSIGN
$DAEres1115 = if line_4022_4031b.running.value then 0.004 * (line_4022_4031b.terminal2.i.im + (-0.600672) * line_4031_4041b.terminal1.V.re - line_4022_4031b.YPu.re * line_4031_4041b.terminal1.V.im) + 0.04 * (line_4022_4031b.terminal2.i.re + 0.600672 * line_4031_4041b.terminal1.V.im - line_4022_4031b.YPu.re * line_4031_4041b.terminal1.V.re) - (line_4031_4041b.terminal1.V.im - line_4022_4031b.terminal1.V.im) else line_4022_4031b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17839};
  (data->simulationInfo->daeModeData->residualVars[1115]) /* $DAEres1115 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[694]] /* line_4022_4031b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3202]] /* line_4022_4031b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17839;
}
/*
equation index: 17840
type: SIMPLE_ASSIGN
$whenCondition386 = not pre(line_4022_4031a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17840};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[318]] /* $whenCondition386 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[691] /* line_4022_4031a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17840;
}
/*
equation index: 17841
type: WHEN

when {} then
  line_4022_4031a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17841};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[318]] /* $whenCondition386 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[318] /* $whenCondition386 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17841;
}
/*
equation index: 17843
type: SIMPLE_ASSIGN
$whenCondition388 = not line_4022_4031a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17843};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[320]] /* $whenCondition388 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17843;
}
/*
equation index: 17844
type: SIMPLE_ASSIGN
$whenCondition387 = line_4022_4031a.running.value and not pre(line_4022_4031a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17844};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[319]] /* $whenCondition387 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[691] /* line_4022_4031a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17844;
}
/*
equation index: 17845
type: WHEN

when {$whenCondition388} then
  line_4022_4031a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17845};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[320]] /* $whenCondition388 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[320] /* $whenCondition388 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[67]] /* line_4022_4031a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[319]] /* $whenCondition387 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[319] /* $whenCondition387 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[67]] /* line_4022_4031a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17845;
}
/*
equation index: 17847
type: SIMPLE_ASSIGN
$DAEres377 = if line_4022_4031a.running.value then 0.004 * (line_4022_4031a.terminal1.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4022_4031a.YPu.re * line_4022_4031b.terminal1.V.im) + 0.04 * (line_4022_4031a.terminal1.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4022_4031a.YPu.re * line_4022_4031b.terminal1.V.re) - (line_4022_4031b.terminal1.V.im - line_4031_4041b.terminal1.V.im) else line_4022_4031a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17847};
  (data->simulationInfo->daeModeData->residualVars[377]) /* $DAEres377 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17847;
}
/*
equation index: 17848
type: SIMPLE_ASSIGN
$DAEres1128 = if line_4022_4031a.running.value then 0.004 * (line_4022_4031a.terminal1.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4022_4031a.YPu.re * line_4022_4031b.terminal1.V.re) + (-0.04) * (line_4022_4031a.terminal1.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4022_4031a.YPu.re * line_4022_4031b.terminal1.V.im) - (line_4022_4031b.terminal1.V.re - line_4031_4041b.terminal1.V.re) else line_4022_4031a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17848};
  (data->simulationInfo->daeModeData->residualVars[1128]) /* $DAEres1128 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17848;
}
/*
equation index: 17849
type: SIMPLE_ASSIGN
$DAEres1129 = if line_4022_4031a.running.value then 0.004 * (line_4022_4031a.terminal2.i.im + (-0.600672) * line_4031_4041b.terminal1.V.re - line_4022_4031a.YPu.re * line_4031_4041b.terminal1.V.im) + 0.04 * (line_4022_4031a.terminal2.i.re + 0.600672 * line_4031_4041b.terminal1.V.im - line_4022_4031a.YPu.re * line_4031_4041b.terminal1.V.re) - (line_4031_4041b.terminal1.V.im - line_4022_4031b.terminal1.V.im) else line_4022_4031a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17849};
  (data->simulationInfo->daeModeData->residualVars[1129]) /* $DAEres1129 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17849;
}
/*
equation index: 17850
type: SIMPLE_ASSIGN
$DAEres1130 = if line_4022_4031a.running.value then 0.004 * (line_4022_4031a.terminal2.i.re + 0.600672 * line_4031_4041b.terminal1.V.im - line_4022_4031a.YPu.re * line_4031_4041b.terminal1.V.re) + (-0.04) * (line_4022_4031a.terminal2.i.im + (-0.600672) * line_4031_4041b.terminal1.V.re - line_4022_4031a.YPu.re * line_4031_4041b.terminal1.V.im) - (line_4031_4041b.terminal1.V.re - line_4022_4031b.terminal1.V.re) else line_4022_4031a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17850};
  (data->simulationInfo->daeModeData->residualVars[1130]) /* $DAEres1130 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[691]] /* line_4022_4031a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3194]] /* line_4022_4031a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17850;
}
/*
equation index: 17851
type: SIMPLE_ASSIGN
$whenCondition389 = not pre(line_4021_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17851};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[321]] /* $whenCondition389 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[688] /* line_4021_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17851;
}
/*
equation index: 17852
type: WHEN

when {} then
  line_4021_4042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17852};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[321]] /* $whenCondition389 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[321] /* $whenCondition389 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17852;
}
/*
equation index: 17854
type: SIMPLE_ASSIGN
$whenCondition391 = not line_4021_4042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17854};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[324]] /* $whenCondition391 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17854;
}
/*
equation index: 17855
type: SIMPLE_ASSIGN
$whenCondition390 = line_4021_4042.running.value and not pre(line_4021_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17855};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[323]] /* $whenCondition390 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[688] /* line_4021_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17855;
}
/*
equation index: 17856
type: WHEN

when {$whenCondition391} then
  line_4021_4042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17856};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[324]] /* $whenCondition391 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[324] /* $whenCondition391 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[66]] /* line_4021_4042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[323]] /* $whenCondition390 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[323] /* $whenCondition390 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[66]] /* line_4021_4042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17856;
}
/*
equation index: 17858
type: SIMPLE_ASSIGN
$DAEres658 = if line_4021_4042.running.value then 0.01 * (line_4021_4042.terminal1.i.re + 1.500432 * line_4021_4032.terminal1.V.im - line_4021_4042.YPu.re * line_4021_4032.terminal1.V.re) + (-0.06) * (line_4021_4042.terminal1.i.im + (-1.500432) * line_4021_4032.terminal1.V.re - line_4021_4042.YPu.re * line_4021_4032.terminal1.V.im) - (line_4021_4032.terminal1.V.re - line_4042_4043.terminal1.V.re) else line_4021_4042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17858};
  (data->simulationInfo->daeModeData->residualVars[658]) /* $DAEres658 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) + (-0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17858;
}
/*
equation index: 17859
type: SIMPLE_ASSIGN
$DAEres661 = if line_4021_4042.running.value then 0.01 * (line_4021_4042.terminal1.i.im + (-1.500432) * line_4021_4032.terminal1.V.re - line_4021_4042.YPu.re * line_4021_4032.terminal1.V.im) + 0.06 * (line_4021_4042.terminal1.i.re + 1.500432 * line_4021_4032.terminal1.V.im - line_4021_4042.YPu.re * line_4021_4032.terminal1.V.re) - (line_4021_4032.terminal1.V.im - line_4042_4043.terminal1.V.im) else line_4021_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17859};
  (data->simulationInfo->daeModeData->residualVars[661]) /* $DAEres661 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) + (0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17859;
}
/*
equation index: 17860
type: SIMPLE_ASSIGN
$DAEres662 = if line_4021_4042.running.value then 0.01 * (line_4021_4042.terminal2.i.im + (-1.500432) * line_4042_4043.terminal1.V.re - line_4021_4042.YPu.re * line_4042_4043.terminal1.V.im) + 0.06 * (line_4021_4042.terminal2.i.re + 1.500432 * line_4042_4043.terminal1.V.im - line_4021_4042.YPu.re * line_4042_4043.terminal1.V.re) - (line_4042_4043.terminal1.V.im - line_4021_4032.terminal1.V.im) else line_4021_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17860};
  (data->simulationInfo->daeModeData->residualVars[662]) /* $DAEres662 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) + (0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17860;
}
/*
equation index: 17861
type: SIMPLE_ASSIGN
$DAEres663 = if line_4021_4042.running.value then 0.01 * (line_4021_4042.terminal2.i.re + 1.500432 * line_4042_4043.terminal1.V.im - line_4021_4042.YPu.re * line_4042_4043.terminal1.V.re) + (-0.06) * (line_4021_4042.terminal2.i.im + (-1.500432) * line_4042_4043.terminal1.V.re - line_4021_4042.YPu.re * line_4042_4043.terminal1.V.im) - (line_4042_4043.terminal1.V.re - line_4021_4032.terminal1.V.re) else line_4021_4042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17861};
  (data->simulationInfo->daeModeData->residualVars[663]) /* $DAEres663 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[688]] /* line_4021_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) + (-0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3186]] /* line_4021_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17861;
}
/*
equation index: 17862
type: SIMPLE_ASSIGN
$whenCondition392 = not pre(line_4021_4032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17862};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[325]] /* $whenCondition392 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[685] /* line_4021_4032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17862;
}
/*
equation index: 17863
type: WHEN

when {} then
  line_4021_4032.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17863};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[325]] /* $whenCondition392 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[325] /* $whenCondition392 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17863;
}
/*
equation index: 17865
type: SIMPLE_ASSIGN
$whenCondition394 = not line_4021_4032.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17865};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[327]] /* $whenCondition394 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17865;
}
/*
equation index: 17866
type: SIMPLE_ASSIGN
$whenCondition393 = line_4021_4032.running.value and not pre(line_4021_4032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17866};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[326]] /* $whenCondition393 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[685] /* line_4021_4032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17866;
}
/*
equation index: 17867
type: WHEN

when {$whenCondition394} then
  line_4021_4032.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17867};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[327]] /* $whenCondition394 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[327] /* $whenCondition394 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[65]] /* line_4021_4032.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[326]] /* $whenCondition393 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[326] /* $whenCondition393 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[65]] /* line_4021_4032.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17867;
}
/*
equation index: 17869
type: SIMPLE_ASSIGN
$DAEres1009 = if line_4021_4032.running.value then 0.004 * (line_4021_4032.terminal1.i.re + 0.600672 * line_4021_4032.terminal1.V.im - line_4021_4032.YPu.re * line_4021_4032.terminal1.V.re) + (-0.04) * (line_4021_4032.terminal1.i.im + (-0.600672) * line_4021_4032.terminal1.V.re - line_4021_4032.YPu.re * line_4021_4032.terminal1.V.im) - (line_4021_4032.terminal1.V.re - line_4032_4044.terminal1.V.re) else line_4021_4032.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17869};
  (data->simulationInfo->daeModeData->residualVars[1009]) /* $DAEres1009 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17869;
}
/*
equation index: 17870
type: SIMPLE_ASSIGN
$DAEres1010 = if line_4021_4032.running.value then 0.004 * (line_4021_4032.terminal1.i.im + (-0.600672) * line_4021_4032.terminal1.V.re - line_4021_4032.YPu.re * line_4021_4032.terminal1.V.im) + 0.04 * (line_4021_4032.terminal1.i.re + 0.600672 * line_4021_4032.terminal1.V.im - line_4021_4032.YPu.re * line_4021_4032.terminal1.V.re) - (line_4021_4032.terminal1.V.im - line_4032_4044.terminal1.V.im) else line_4021_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17870};
  (data->simulationInfo->daeModeData->residualVars[1010]) /* $DAEres1010 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17870;
}
/*
equation index: 17871
type: SIMPLE_ASSIGN
$DAEres1014 = if line_4021_4032.running.value then 0.004 * (line_4021_4032.terminal2.i.re + 0.600672 * line_4032_4044.terminal1.V.im - line_4021_4032.YPu.re * line_4032_4044.terminal1.V.re) + (-0.04) * (line_4021_4032.terminal2.i.im + (-0.600672) * line_4032_4044.terminal1.V.re - line_4021_4032.YPu.re * line_4032_4044.terminal1.V.im) - (line_4032_4044.terminal1.V.re - line_4021_4032.terminal1.V.re) else line_4021_4032.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17871};
  (data->simulationInfo->daeModeData->residualVars[1014]) /* $DAEres1014 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17871;
}
/*
equation index: 17872
type: SIMPLE_ASSIGN
$DAEres1015 = if line_4021_4032.running.value then 0.004 * (line_4021_4032.terminal2.i.im + (-0.600672) * line_4032_4044.terminal1.V.re - line_4021_4032.YPu.re * line_4032_4044.terminal1.V.im) + 0.04 * (line_4021_4032.terminal2.i.re + 0.600672 * line_4032_4044.terminal1.V.im - line_4021_4032.YPu.re * line_4032_4044.terminal1.V.re) - (line_4032_4044.terminal1.V.im - line_4021_4032.terminal1.V.im) else line_4021_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17872};
  (data->simulationInfo->daeModeData->residualVars[1015]) /* $DAEres1015 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[685]] /* line_4021_4032.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* line_4021_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17872;
}
/*
equation index: 17873
type: SIMPLE_ASSIGN
$whenCondition395 = not pre(line_4012_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17873};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[328]] /* $whenCondition395 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[682] /* line_4012_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17873;
}
/*
equation index: 17874
type: WHEN

when {} then
  line_4012_4071.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17874};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[328]] /* $whenCondition395 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[328] /* $whenCondition395 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17874;
}
/*
equation index: 17876
type: SIMPLE_ASSIGN
$whenCondition397 = not line_4012_4071.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17876};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[330]] /* $whenCondition397 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17876;
}
/*
equation index: 17877
type: SIMPLE_ASSIGN
$whenCondition396 = line_4012_4071.running.value and not pre(line_4012_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17877};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[329]] /* $whenCondition396 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[682] /* line_4012_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17877;
}
/*
equation index: 17878
type: WHEN

when {$whenCondition397} then
  line_4012_4071.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17878};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[330]] /* $whenCondition397 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[330] /* $whenCondition397 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[64]] /* line_4012_4071.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[329]] /* $whenCondition396 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[329] /* $whenCondition396 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[64]] /* line_4012_4071.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17878;
}
/*
equation index: 17880
type: SIMPLE_ASSIGN
$DAEres538 = if line_4012_4071.running.value then 0.005 * (line_4012_4071.terminal1.i.re + 0.74896 * line_4012_4022.terminal1.V.im - line_4012_4071.YPu.re * line_4012_4022.terminal1.V.re) + (-0.05) * (line_4012_4071.terminal1.i.im + (-0.74896) * line_4012_4022.terminal1.V.re - line_4012_4071.YPu.re * line_4012_4022.terminal1.V.im) - (line_4012_4022.terminal1.V.re - line_4071_4072a.terminal1.V.re) else line_4012_4071.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17880};
  (data->simulationInfo->daeModeData->residualVars[538]) /* $DAEres538 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */) + (0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) + (-0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */) + (-0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17880;
}
/*
equation index: 17881
type: SIMPLE_ASSIGN
$DAEres539 = if line_4012_4071.running.value then 0.005 * (line_4012_4071.terminal1.i.im + (-0.74896) * line_4012_4022.terminal1.V.re - line_4012_4071.YPu.re * line_4012_4022.terminal1.V.im) + 0.05 * (line_4012_4071.terminal1.i.re + 0.74896 * line_4012_4022.terminal1.V.im - line_4012_4071.YPu.re * line_4012_4022.terminal1.V.re) - (line_4012_4022.terminal1.V.im - line_4071_4072a.terminal1.V.im) else line_4012_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17881};
  (data->simulationInfo->daeModeData->residualVars[539]) /* $DAEres539 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */) + (-0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */) + (0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17881;
}
/*
equation index: 17882
type: SIMPLE_ASSIGN
$DAEres598 = if line_4012_4071.running.value then 0.005 * (line_4012_4071.terminal2.i.im + (-0.74896) * line_4071_4072a.terminal1.V.re - line_4012_4071.YPu.re * line_4071_4072a.terminal1.V.im) + 0.05 * (line_4012_4071.terminal2.i.re + 0.74896 * line_4071_4072a.terminal1.V.im - line_4012_4071.YPu.re * line_4071_4072a.terminal1.V.re) - (line_4071_4072a.terminal1.V.im - line_4012_4022.terminal1.V.im) else line_4012_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17882};
  (data->simulationInfo->daeModeData->residualVars[598]) /* $DAEres598 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */) + (-0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */) + (0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17882;
}
/*
equation index: 17883
type: SIMPLE_ASSIGN
$DAEres599 = if line_4012_4071.running.value then 0.005 * (line_4012_4071.terminal2.i.re + 0.74896 * line_4071_4072a.terminal1.V.im - line_4012_4071.YPu.re * line_4071_4072a.terminal1.V.re) + (-0.05) * (line_4012_4071.terminal2.i.im + (-0.74896) * line_4071_4072a.terminal1.V.re - line_4012_4071.YPu.re * line_4071_4072a.terminal1.V.im) - (line_4071_4072a.terminal1.V.re - line_4012_4022.terminal1.V.re) else line_4012_4071.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17883};
  (data->simulationInfo->daeModeData->residualVars[599]) /* $DAEres599 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[682]] /* line_4012_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */) + (0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) + (-0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */) + (-0.74896) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3170]] /* line_4012_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17883;
}
/*
equation index: 17884
type: SIMPLE_ASSIGN
$whenCondition398 = not pre(line_4012_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17884};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[331]] /* $whenCondition398 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[679] /* line_4012_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17884;
}
/*
equation index: 17885
type: WHEN

when {} then
  line_4012_4022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17885};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[331]] /* $whenCondition398 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[331] /* $whenCondition398 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17885;
}
/*
equation index: 17887
type: SIMPLE_ASSIGN
$whenCondition400 = not line_4012_4022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17887};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[335]] /* $whenCondition400 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17887;
}
/*
equation index: 17888
type: SIMPLE_ASSIGN
$whenCondition399 = line_4012_4022.running.value and not pre(line_4012_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17888};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[332]] /* $whenCondition399 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[679] /* line_4012_4022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17888;
}
/*
equation index: 17889
type: WHEN

when {$whenCondition400} then
  line_4012_4022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17889};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[335]] /* $whenCondition400 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[335] /* $whenCondition400 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[63]] /* line_4012_4022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[332]] /* $whenCondition399 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[332] /* $whenCondition399 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[63]] /* line_4012_4022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17889;
}
/*
equation index: 17891
type: SIMPLE_ASSIGN
$DAEres528 = if line_4012_4022.running.value then 0.004 * (line_4012_4022.terminal1.i.im + (-0.52528) * line_4012_4022.terminal1.V.re - line_4012_4022.YPu.re * line_4012_4022.terminal1.V.im) + 0.035 * (line_4012_4022.terminal1.i.re + 0.52528 * line_4012_4022.terminal1.V.im - line_4012_4022.YPu.re * line_4012_4022.terminal1.V.re) - (line_4012_4022.terminal1.V.im - line_4022_4031b.terminal1.V.im) else line_4012_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17891};
  (data->simulationInfo->daeModeData->residualVars[528]) /* $DAEres528 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */) + (-0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) + (0.035) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */) + (0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17891;
}
/*
equation index: 17892
type: SIMPLE_ASSIGN
$DAEres529 = if line_4012_4022.running.value then 0.004 * (line_4012_4022.terminal2.i.im + (-0.52528) * line_4022_4031b.terminal1.V.re - line_4012_4022.YPu.re * line_4022_4031b.terminal1.V.im) + 0.035 * (line_4012_4022.terminal2.i.re + 0.52528 * line_4022_4031b.terminal1.V.im - line_4012_4022.YPu.re * line_4022_4031b.terminal1.V.re) - (line_4022_4031b.terminal1.V.im - line_4012_4022.terminal1.V.im) else line_4012_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17892};
  (data->simulationInfo->daeModeData->residualVars[529]) /* $DAEres529 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */) + (-0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) + (0.035) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */) + (0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17892;
}
/*
equation index: 17893
type: SIMPLE_ASSIGN
$DAEres1109 = if line_4012_4022.running.value then 0.004 * (line_4012_4022.terminal1.i.re + 0.52528 * line_4012_4022.terminal1.V.im - line_4012_4022.YPu.re * line_4012_4022.terminal1.V.re) + (-0.035) * (line_4012_4022.terminal1.i.im + (-0.52528) * line_4012_4022.terminal1.V.re - line_4012_4022.YPu.re * line_4012_4022.terminal1.V.im) - (line_4012_4022.terminal1.V.re - line_4022_4031b.terminal1.V.re) else line_4012_4022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17893};
  (data->simulationInfo->daeModeData->residualVars[1109]) /* $DAEres1109 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */) + (0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) + (-0.035) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */) + (-0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17893;
}
/*
equation index: 17894
type: SIMPLE_ASSIGN
$DAEres1110 = if line_4012_4022.running.value then 0.004 * (line_4012_4022.terminal2.i.re + 0.52528 * line_4022_4031b.terminal1.V.im - line_4012_4022.YPu.re * line_4022_4031b.terminal1.V.re) + (-0.035) * (line_4012_4022.terminal2.i.im + (-0.52528) * line_4022_4031b.terminal1.V.re - line_4012_4022.YPu.re * line_4022_4031b.terminal1.V.im) - (line_4022_4031b.terminal1.V.re - line_4012_4022.terminal1.V.re) else line_4012_4022.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17894};
  (data->simulationInfo->daeModeData->residualVars[1110]) /* $DAEres1110 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[679]] /* line_4012_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */) + (0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) + (-0.035) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */) + (-0.52528) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3162]] /* line_4012_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17894;
}
/*
equation index: 17895
type: SIMPLE_ASSIGN
$whenCondition401 = not pre(line_4011_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17895};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[336]] /* $whenCondition401 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[676] /* line_4011_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17895;
}
/*
equation index: 17896
type: WHEN

when {} then
  line_4011_4071.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17896};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[336]] /* $whenCondition401 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[336] /* $whenCondition401 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17896;
}
/*
equation index: 17898
type: SIMPLE_ASSIGN
$whenCondition403 = not line_4011_4071.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17898};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[338]] /* $whenCondition403 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17898;
}
/*
equation index: 17899
type: SIMPLE_ASSIGN
$whenCondition402 = line_4011_4071.running.value and not pre(line_4011_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17899};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[337]] /* $whenCondition402 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[676] /* line_4011_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17899;
}
/*
equation index: 17900
type: WHEN

when {$whenCondition403} then
  line_4011_4071.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17900};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[338]] /* $whenCondition403 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[338] /* $whenCondition403 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[62]] /* line_4011_4071.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[337]] /* $whenCondition402 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[337] /* $whenCondition402 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[62]] /* line_4011_4071.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17900;
}
/*
equation index: 17902
type: SIMPLE_ASSIGN
$DAEres601 = if line_4011_4071.running.value then 0.005 * (line_4011_4071.terminal1.i.im + (-0.7012) * line_4011_4071.terminal1.V.re - line_4011_4071.YPu.re * line_4011_4071.terminal1.V.im) + 0.045 * (line_4011_4071.terminal1.i.re + 0.7012 * line_4011_4071.terminal1.V.im - line_4011_4071.YPu.re * line_4011_4071.terminal1.V.re) - (line_4011_4071.terminal1.V.im - line_4071_4072a.terminal1.V.im) else line_4011_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17902};
  (data->simulationInfo->daeModeData->residualVars[601]) /* $DAEres601 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */) + (-0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) + (0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */) + (0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17902;
}
/*
equation index: 17903
type: SIMPLE_ASSIGN
$DAEres602 = if line_4011_4071.running.value then 0.005 * (line_4011_4071.terminal2.i.im + (-0.7012) * line_4071_4072a.terminal1.V.re - line_4011_4071.YPu.re * line_4071_4072a.terminal1.V.im) + 0.045 * (line_4011_4071.terminal2.i.re + 0.7012 * line_4071_4072a.terminal1.V.im - line_4011_4071.YPu.re * line_4071_4072a.terminal1.V.re) - (line_4071_4072a.terminal1.V.im - line_4011_4071.terminal1.V.im) else line_4011_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17903};
  (data->simulationInfo->daeModeData->residualVars[602]) /* $DAEres602 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */) + (-0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) + (0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */) + (0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17903;
}
/*
equation index: 17904
type: SIMPLE_ASSIGN
$DAEres611 = if line_4011_4071.running.value then 0.005 * (line_4011_4071.terminal1.i.re + 0.7012 * line_4011_4071.terminal1.V.im - line_4011_4071.YPu.re * line_4011_4071.terminal1.V.re) + (-0.045) * (line_4011_4071.terminal1.i.im + (-0.7012) * line_4011_4071.terminal1.V.re - line_4011_4071.YPu.re * line_4011_4071.terminal1.V.im) - (line_4011_4071.terminal1.V.re - line_4071_4072a.terminal1.V.re) else line_4011_4071.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17904};
  (data->simulationInfo->daeModeData->residualVars[611]) /* $DAEres611 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */) + (0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) + (-0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */) + (-0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17904;
}
/*
equation index: 17905
type: SIMPLE_ASSIGN
$DAEres612 = if line_4011_4071.running.value then 0.005 * (line_4011_4071.terminal2.i.re + 0.7012 * line_4071_4072a.terminal1.V.im - line_4011_4071.YPu.re * line_4071_4072a.terminal1.V.re) + (-0.045) * (line_4011_4071.terminal2.i.im + (-0.7012) * line_4071_4072a.terminal1.V.re - line_4011_4071.YPu.re * line_4071_4072a.terminal1.V.im) - (line_4071_4072a.terminal1.V.re - line_4011_4071.terminal1.V.re) else line_4011_4071.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17905};
  (data->simulationInfo->daeModeData->residualVars[612]) /* $DAEres612 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[676]] /* line_4011_4071.running.value DISCRETE */)?(0.005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */) + (0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) + (-0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */) + (-0.7012) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3154]] /* line_4011_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17905;
}
/*
equation index: 17906
type: SIMPLE_ASSIGN
$whenCondition404 = not pre(line_4011_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17906};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[339]] /* $whenCondition404 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[673] /* line_4011_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17906;
}
/*
equation index: 17907
type: WHEN

when {} then
  line_4011_4022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17907};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[339]] /* $whenCondition404 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[339] /* $whenCondition404 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17907;
}
/*
equation index: 17909
type: SIMPLE_ASSIGN
$whenCondition406 = not line_4011_4022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17909};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[341]] /* $whenCondition406 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17909;
}
/*
equation index: 17910
type: SIMPLE_ASSIGN
$whenCondition405 = line_4011_4022.running.value and not pre(line_4011_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17910};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[340]] /* $whenCondition405 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[673] /* line_4011_4022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17910;
}
/*
equation index: 17911
type: WHEN

when {$whenCondition406} then
  line_4011_4022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17911};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[341]] /* $whenCondition406 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[341] /* $whenCondition406 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[61]] /* line_4011_4022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[340]] /* $whenCondition405 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[340] /* $whenCondition405 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[61]] /* line_4011_4022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17911;
}
/*
equation index: 17913
type: SIMPLE_ASSIGN
$DAEres506 = if line_4011_4022.running.value then 0.004 * (line_4011_4022.terminal1.i.im + (-0.600672) * line_4011_4071.terminal1.V.re - line_4011_4022.YPu.re * line_4011_4071.terminal1.V.im) + 0.04 * (line_4011_4022.terminal1.i.re + 0.600672 * line_4011_4071.terminal1.V.im - line_4011_4022.YPu.re * line_4011_4071.terminal1.V.re) - (line_4011_4071.terminal1.V.im - line_4022_4031b.terminal1.V.im) else line_4011_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17913};
  (data->simulationInfo->daeModeData->residualVars[506]) /* $DAEres506 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17913;
}
/*
equation index: 17914
type: SIMPLE_ASSIGN
$DAEres507 = if line_4011_4022.running.value then 0.004 * (line_4011_4022.terminal1.i.re + 0.600672 * line_4011_4071.terminal1.V.im - line_4011_4022.YPu.re * line_4011_4071.terminal1.V.re) + (-0.04) * (line_4011_4022.terminal1.i.im + (-0.600672) * line_4011_4071.terminal1.V.re - line_4011_4022.YPu.re * line_4011_4071.terminal1.V.im) - (line_4011_4071.terminal1.V.re - line_4022_4031b.terminal1.V.re) else line_4011_4022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17914};
  (data->simulationInfo->daeModeData->residualVars[507]) /* $DAEres507 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17914;
}
/*
equation index: 17915
type: SIMPLE_ASSIGN
$DAEres508 = if line_4011_4022.running.value then 0.004 * (line_4011_4022.terminal2.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4011_4022.YPu.re * line_4022_4031b.terminal1.V.im) + 0.04 * (line_4011_4022.terminal2.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4011_4022.YPu.re * line_4022_4031b.terminal1.V.re) - (line_4022_4031b.terminal1.V.im - line_4011_4071.terminal1.V.im) else line_4011_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17915};
  (data->simulationInfo->daeModeData->residualVars[508]) /* $DAEres508 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17915;
}
/*
equation index: 17916
type: SIMPLE_ASSIGN
$DAEres509 = if line_4011_4022.running.value then 0.004 * (line_4011_4022.terminal2.i.re + 0.600672 * line_4022_4031b.terminal1.V.im - line_4011_4022.YPu.re * line_4022_4031b.terminal1.V.re) + (-0.04) * (line_4011_4022.terminal2.i.im + (-0.600672) * line_4022_4031b.terminal1.V.re - line_4011_4022.YPu.re * line_4022_4031b.terminal1.V.im) - (line_4022_4031b.terminal1.V.re - line_4011_4071.terminal1.V.re) else line_4011_4022.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17916};
  (data->simulationInfo->daeModeData->residualVars[509]) /* $DAEres509 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[673]] /* line_4011_4022.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3146]] /* line_4011_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17916;
}
/*
equation index: 17917
type: SIMPLE_ASSIGN
$whenCondition407 = not pre(line_4011_4021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17917};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[342]] /* $whenCondition407 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[670] /* line_4011_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 17917;
}
/*
equation index: 17918
type: WHEN

when {} then
  line_4011_4021.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17918};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[342]] /* $whenCondition407 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[342] /* $whenCondition407 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17918;
}
/*
equation index: 17920
type: SIMPLE_ASSIGN
$whenCondition409 = not line_4011_4021.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17920};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[344]] /* $whenCondition409 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 17920;
}
/*
equation index: 17921
type: SIMPLE_ASSIGN
$whenCondition408 = line_4011_4021.running.value and not pre(line_4011_4021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17921};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[343]] /* $whenCondition408 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[670] /* line_4011_4021.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17921;
}
/*
equation index: 17922
type: WHEN

when {$whenCondition409} then
  line_4011_4021.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17922};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[344]] /* $whenCondition409 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[344] /* $whenCondition409 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[60]] /* line_4011_4021.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[343]] /* $whenCondition408 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[343] /* $whenCondition408 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[60]] /* line_4011_4021.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17922;
}
/*
equation index: 17924
type: SIMPLE_ASSIGN
$DAEres657 = if line_4011_4021.running.value then 0.006 * (line_4011_4021.terminal1.i.im + (-0.8997440000000001) * line_4011_4071.terminal1.V.re - line_4011_4021.YPu.re * line_4011_4071.terminal1.V.im) + 0.06 * (line_4011_4021.terminal1.i.re + 0.8997440000000001 * line_4011_4071.terminal1.V.im - line_4011_4021.YPu.re * line_4011_4071.terminal1.V.re) - (line_4011_4071.terminal1.V.im - line_4021_4032.terminal1.V.im) else line_4011_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17924};
  (data->simulationInfo->daeModeData->residualVars[657]) /* $DAEres657 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */) + (-0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) + (0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */) + (0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17924;
}
/*
equation index: 17925
type: SIMPLE_ASSIGN
$DAEres1042 = if line_4011_4021.running.value then 0.006 * (line_4011_4021.terminal1.i.re + 0.8997440000000001 * line_4011_4071.terminal1.V.im - line_4011_4021.YPu.re * line_4011_4071.terminal1.V.re) + (-0.06) * (line_4011_4021.terminal1.i.im + (-0.8997440000000001) * line_4011_4071.terminal1.V.re - line_4011_4021.YPu.re * line_4011_4071.terminal1.V.im) - (line_4011_4071.terminal1.V.re - line_4021_4032.terminal1.V.re) else line_4011_4021.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17925};
  (data->simulationInfo->daeModeData->residualVars[1042]) /* $DAEres1042 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */) + (0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) + (-0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */) + (-0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17925;
}
/*
equation index: 17926
type: SIMPLE_ASSIGN
$DAEres1043 = if line_4011_4021.running.value then 0.006 * (line_4011_4021.terminal2.i.re + 0.8997440000000001 * line_4021_4032.terminal1.V.im - line_4011_4021.YPu.re * line_4021_4032.terminal1.V.re) + (-0.06) * (line_4011_4021.terminal2.i.im + (-0.8997440000000001) * line_4021_4032.terminal1.V.re - line_4011_4021.YPu.re * line_4021_4032.terminal1.V.im) - (line_4021_4032.terminal1.V.re - line_4011_4071.terminal1.V.re) else line_4011_4021.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17926};
  (data->simulationInfo->daeModeData->residualVars[1043]) /* $DAEres1043 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */) + (0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) + (-0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */) + (-0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17926;
}
/*
equation index: 17927
type: SIMPLE_ASSIGN
$DAEres1044 = if line_4011_4021.running.value then 0.006 * (line_4011_4021.terminal2.i.im + (-0.8997440000000001) * line_4021_4032.terminal1.V.re - line_4011_4021.YPu.re * line_4021_4032.terminal1.V.im) + 0.06 * (line_4011_4021.terminal2.i.re + 0.8997440000000001 * line_4021_4032.terminal1.V.im - line_4011_4021.YPu.re * line_4021_4032.terminal1.V.re) - (line_4021_4032.terminal1.V.im - line_4011_4071.terminal1.V.im) else line_4011_4021.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17927};
  (data->simulationInfo->daeModeData->residualVars[1044]) /* $DAEres1044 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[670]] /* line_4011_4021.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */) + (-0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)))) + (0.06) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */) + (0.8997440000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3138]] /* line_4011_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17927;
}
/*
equation index: 17928
type: SIMPLE_ASSIGN
$whenCondition410 = not pre(line_4011_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17928};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[346]] /* $whenCondition410 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[667] /* line_4011_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17928;
}
/*
equation index: 17929
type: WHEN

when {} then
  line_4011_4012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17929};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[346]] /* $whenCondition410 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[346] /* $whenCondition410 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17929;
}
/*
equation index: 17931
type: SIMPLE_ASSIGN
$whenCondition412 = not line_4011_4012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17931};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[348]] /* $whenCondition412 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17931;
}
/*
equation index: 17932
type: SIMPLE_ASSIGN
$whenCondition411 = line_4011_4012.running.value and not pre(line_4011_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17932};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[347]] /* $whenCondition411 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[667] /* line_4011_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17932;
}
/*
equation index: 17933
type: WHEN

when {$whenCondition412} then
  line_4011_4012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17933};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[348]] /* $whenCondition412 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[348] /* $whenCondition412 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[59]] /* line_4011_4012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[347]] /* $whenCondition411 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[347] /* $whenCondition411 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[59]] /* line_4011_4012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17933;
}
/*
equation index: 17935
type: SIMPLE_ASSIGN
$DAEres616 = if line_4011_4012.running.value then 0.001 * (line_4011_4012.terminal1.i.im + (-0.1005312) * line_4011_4071.terminal1.V.re - line_4011_4012.YPu.re * line_4011_4071.terminal1.V.im) + 0.008 * (line_4011_4012.terminal1.i.re + 0.1005312 * line_4011_4071.terminal1.V.im - line_4011_4012.YPu.re * line_4011_4071.terminal1.V.re) - (line_4011_4071.terminal1.V.im - line_4012_4022.terminal1.V.im) else line_4011_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17935};
  (data->simulationInfo->daeModeData->residualVars[616]) /* $DAEres616 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */) + (-0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) + (0.008) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */) + (0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17935;
}
/*
equation index: 17936
type: SIMPLE_ASSIGN
$DAEres617 = if line_4011_4012.running.value then 0.001 * (line_4011_4012.terminal1.i.re + 0.1005312 * line_4011_4071.terminal1.V.im - line_4011_4012.YPu.re * line_4011_4071.terminal1.V.re) + (-0.008) * (line_4011_4012.terminal1.i.im + (-0.1005312) * line_4011_4071.terminal1.V.re - line_4011_4012.YPu.re * line_4011_4071.terminal1.V.im) - (line_4011_4071.terminal1.V.re - line_4012_4022.terminal1.V.re) else line_4011_4012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17936};
  (data->simulationInfo->daeModeData->residualVars[617]) /* $DAEres617 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */) + (0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)))) + (-0.008) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */) + (-0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17936;
}
/*
equation index: 17937
type: SIMPLE_ASSIGN
$DAEres618 = if line_4011_4012.running.value then 0.001 * (line_4011_4012.terminal2.i.im + (-0.1005312) * line_4012_4022.terminal1.V.re - line_4011_4012.YPu.re * line_4012_4022.terminal1.V.im) + 0.008 * (line_4011_4012.terminal2.i.re + 0.1005312 * line_4012_4022.terminal1.V.im - line_4011_4012.YPu.re * line_4012_4022.terminal1.V.re) - (line_4012_4022.terminal1.V.im - line_4011_4071.terminal1.V.im) else line_4011_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17937};
  (data->simulationInfo->daeModeData->residualVars[618]) /* $DAEres618 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */) + (-0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) + (0.008) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */) + (0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17937;
}
/*
equation index: 17938
type: SIMPLE_ASSIGN
$DAEres619 = if line_4011_4012.running.value then 0.001 * (line_4011_4012.terminal2.i.re + 0.1005312 * line_4012_4022.terminal1.V.im - line_4011_4012.YPu.re * line_4012_4022.terminal1.V.re) + (-0.008) * (line_4011_4012.terminal2.i.im + (-0.1005312) * line_4012_4022.terminal1.V.re - line_4011_4012.YPu.re * line_4012_4022.terminal1.V.im) - (line_4012_4022.terminal1.V.re - line_4011_4071.terminal1.V.re) else line_4011_4012.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17938};
  (data->simulationInfo->daeModeData->residualVars[619]) /* $DAEres619 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[667]] /* line_4011_4012.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */) + (0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)))) + (-0.008) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */) + (-0.1005312) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* line_4011_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17938;
}
/*
equation index: 17939
type: SIMPLE_ASSIGN
$whenCondition413 = not pre(line_2031_2032b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17939};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[349]] /* $whenCondition413 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[664] /* line_2031_2032b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17939;
}
/*
equation index: 17940
type: WHEN

when {} then
  line_2031_2032b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17940};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[349]] /* $whenCondition413 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[349] /* $whenCondition413 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17940;
}
/*
equation index: 17942
type: SIMPLE_ASSIGN
$whenCondition415 = not line_2031_2032b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17942};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[351]] /* $whenCondition415 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17942;
}
/*
equation index: 17943
type: SIMPLE_ASSIGN
$whenCondition414 = line_2031_2032b.running.value and not pre(line_2031_2032b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17943};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[350]] /* $whenCondition414 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[664] /* line_2031_2032b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17943;
}
/*
equation index: 17944
type: WHEN

when {$whenCondition415} then
  line_2031_2032b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17944};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[351]] /* $whenCondition415 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[351] /* $whenCondition415 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[58]] /* line_2031_2032b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[350]] /* $whenCondition414 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[350] /* $whenCondition414 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[58]] /* line_2031_2032b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17944;
}
/*
equation index: 17946
type: SIMPLE_ASSIGN
$DAEres290 = if line_2031_2032b.running.value then 0.012004132231404958 * (line_2031_2032b.terminal1.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal1.V.re - line_2031_2032b.YPu.re * line_2031_2032b.terminal1.V.im) + 0.09000000000000001 * (line_2031_2032b.terminal1.i.re + 0.0076026719999999996 * line_2031_2032b.terminal1.V.im - line_2031_2032b.YPu.re * line_2031_2032b.terminal1.V.re) - (line_2031_2032b.terminal1.V.im - line_2031_2032b.terminal2.V.im) else line_2031_2032b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17946};
  (data->simulationInfo->daeModeData->residualVars[290]) /* $DAEres290 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17946;
}
/*
equation index: 17947
type: SIMPLE_ASSIGN
$DAEres301 = if line_2031_2032b.running.value then 0.012004132231404958 * (line_2031_2032b.terminal1.i.re + 0.0076026719999999996 * line_2031_2032b.terminal1.V.im - line_2031_2032b.YPu.re * line_2031_2032b.terminal1.V.re) + (-0.09000000000000001) * (line_2031_2032b.terminal1.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal1.V.re - line_2031_2032b.YPu.re * line_2031_2032b.terminal1.V.im) - (line_2031_2032b.terminal1.V.re - line_2031_2032b.terminal2.V.re) else line_2031_2032b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17947};
  (data->simulationInfo->daeModeData->residualVars[301]) /* $DAEres301 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17947;
}
/*
equation index: 17948
type: SIMPLE_ASSIGN
$DAEres302 = if line_2031_2032b.running.value then 0.012004132231404958 * (line_2031_2032b.terminal2.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal2.V.re - line_2031_2032b.YPu.re * line_2031_2032b.terminal2.V.im) + 0.09000000000000001 * (line_2031_2032b.terminal2.i.re + 0.0076026719999999996 * line_2031_2032b.terminal2.V.im - line_2031_2032b.YPu.re * line_2031_2032b.terminal2.V.re) - (line_2031_2032b.terminal2.V.im - line_2031_2032b.terminal1.V.im) else line_2031_2032b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17948};
  (data->simulationInfo->daeModeData->residualVars[302]) /* $DAEres302 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17948;
}
/*
equation index: 17949
type: SIMPLE_ASSIGN
$DAEres303 = if line_2031_2032b.running.value then 0.012004132231404958 * (line_2031_2032b.terminal2.i.re + 0.0076026719999999996 * line_2031_2032b.terminal2.V.im - line_2031_2032b.YPu.re * line_2031_2032b.terminal2.V.re) + (-0.09000000000000001) * (line_2031_2032b.terminal2.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal2.V.re - line_2031_2032b.YPu.re * line_2031_2032b.terminal2.V.im) - (line_2031_2032b.terminal2.V.re - line_2031_2032b.terminal1.V.re) else line_2031_2032b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17949};
  (data->simulationInfo->daeModeData->residualVars[303]) /* $DAEres303 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[664]] /* line_2031_2032b.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3122]] /* line_2031_2032b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17949;
}
/*
equation index: 17950
type: SIMPLE_ASSIGN
$whenCondition416 = not pre(line_2031_2032a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17950};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[352]] /* $whenCondition416 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[661] /* line_2031_2032a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17950;
}
/*
equation index: 17951
type: WHEN

when {} then
  line_2031_2032a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17951};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[352]] /* $whenCondition416 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[352] /* $whenCondition416 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17951;
}
/*
equation index: 17953
type: SIMPLE_ASSIGN
$whenCondition418 = not line_2031_2032a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17953};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[354]] /* $whenCondition418 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17953;
}
/*
equation index: 17954
type: SIMPLE_ASSIGN
$whenCondition417 = line_2031_2032a.running.value and not pre(line_2031_2032a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17954};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[353]] /* $whenCondition417 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[661] /* line_2031_2032a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17954;
}
/*
equation index: 17955
type: WHEN

when {$whenCondition418} then
  line_2031_2032a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17955};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[354]] /* $whenCondition418 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[354] /* $whenCondition418 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[57]] /* line_2031_2032a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[353]] /* $whenCondition417 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[353] /* $whenCondition417 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[57]] /* line_2031_2032a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17955;
}
/*
equation index: 17957
type: SIMPLE_ASSIGN
$DAEres251 = if line_2031_2032a.running.value then 0.012004132231404958 * (line_2031_2032a.terminal1.i.re + 0.0076026719999999996 * line_2031_2032b.terminal1.V.im - line_2031_2032a.YPu.re * line_2031_2032b.terminal1.V.re) + (-0.09000000000000001) * (line_2031_2032a.terminal1.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal1.V.re - line_2031_2032a.YPu.re * line_2031_2032b.terminal1.V.im) - (line_2031_2032b.terminal1.V.re - line_2031_2032b.terminal2.V.re) else line_2031_2032a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17957};
  (data->simulationInfo->daeModeData->residualVars[251]) /* $DAEres251 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17957;
}
/*
equation index: 17958
type: SIMPLE_ASSIGN
$DAEres252 = if line_2031_2032a.running.value then 0.012004132231404958 * (line_2031_2032a.terminal1.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal1.V.re - line_2031_2032a.YPu.re * line_2031_2032b.terminal1.V.im) + 0.09000000000000001 * (line_2031_2032a.terminal1.i.re + 0.0076026719999999996 * line_2031_2032b.terminal1.V.im - line_2031_2032a.YPu.re * line_2031_2032b.terminal1.V.re) - (line_2031_2032b.terminal1.V.im - line_2031_2032b.terminal2.V.im) else line_2031_2032a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17958};
  (data->simulationInfo->daeModeData->residualVars[252]) /* $DAEres252 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17958;
}
/*
equation index: 17959
type: SIMPLE_ASSIGN
$DAEres253 = if line_2031_2032a.running.value then 0.012004132231404958 * (line_2031_2032a.terminal2.i.re + 0.0076026719999999996 * line_2031_2032b.terminal2.V.im - line_2031_2032a.YPu.re * line_2031_2032b.terminal2.V.re) + (-0.09000000000000001) * (line_2031_2032a.terminal2.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal2.V.re - line_2031_2032a.YPu.re * line_2031_2032b.terminal2.V.im) - (line_2031_2032b.terminal2.V.re - line_2031_2032b.terminal1.V.re) else line_2031_2032a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17959};
  (data->simulationInfo->daeModeData->residualVars[253]) /* $DAEres253 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17959;
}
/*
equation index: 17960
type: SIMPLE_ASSIGN
$DAEres291 = if line_2031_2032a.running.value then 0.012004132231404958 * (line_2031_2032a.terminal2.i.im + (-0.0076026719999999996) * line_2031_2032b.terminal2.V.re - line_2031_2032a.YPu.re * line_2031_2032b.terminal2.V.im) + 0.09000000000000001 * (line_2031_2032a.terminal2.i.re + 0.0076026719999999996 * line_2031_2032b.terminal2.V.im - line_2031_2032a.YPu.re * line_2031_2032b.terminal2.V.re) - (line_2031_2032b.terminal2.V.im - line_2031_2032b.terminal1.V.im) else line_2031_2032a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17960};
  (data->simulationInfo->daeModeData->residualVars[291]) /* $DAEres291 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[661]] /* line_2031_2032a.running.value DISCRETE */)?(0.012004132231404958) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */) + (-0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */) + (0.0076026719999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* line_2031_2032a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17960;
}
/*
equation index: 17961
type: SIMPLE_ASSIGN
$whenCondition419 = not pre(line_1043_1044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17961};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[355]] /* $whenCondition419 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[658] /* line_1043_1044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17961;
}
/*
equation index: 17962
type: WHEN

when {} then
  line_1043_1044b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17962};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[355]] /* $whenCondition419 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[355] /* $whenCondition419 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17962;
}
/*
equation index: 17964
type: SIMPLE_ASSIGN
$whenCondition421 = not line_1043_1044b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17964};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[358]] /* $whenCondition421 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17964;
}
/*
equation index: 17965
type: SIMPLE_ASSIGN
$whenCondition420 = line_1043_1044b.running.value and not pre(line_1043_1044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17965};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[357]] /* $whenCondition420 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[658] /* line_1043_1044b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17965;
}
/*
equation index: 17966
type: WHEN

when {$whenCondition421} then
  line_1043_1044b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17966};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[358]] /* $whenCondition421 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[358] /* $whenCondition421 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[56]] /* line_1043_1044b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[357]] /* $whenCondition420 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[357] /* $whenCondition420 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[56]] /* line_1043_1044b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17966;
}
/*
equation index: 17968
type: SIMPLE_ASSIGN
$DAEres803 = if line_1043_1044b.running.value then 0.01 * (line_1043_1044b.terminal1.i.im + (-0.007963956) * line_1043_1044a.terminal1.V.re - line_1043_1044b.YPu.re * line_1043_1044a.terminal1.V.im) + 0.08 * (line_1043_1044b.terminal1.i.re + 0.007963956 * line_1043_1044a.terminal1.V.im - line_1043_1044b.YPu.re * line_1043_1044a.terminal1.V.re) - (line_1043_1044a.terminal1.V.im - line_1043_1044a.terminal2.V.im) else line_1043_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17968};
  (data->simulationInfo->daeModeData->residualVars[803]) /* $DAEres803 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17968;
}
/*
equation index: 17969
type: SIMPLE_ASSIGN
$DAEres993 = if line_1043_1044b.running.value then 0.01 * (line_1043_1044b.terminal2.i.im + (-0.007963956) * line_1043_1044a.terminal2.V.re - line_1043_1044b.YPu.re * line_1043_1044a.terminal2.V.im) + 0.08 * (line_1043_1044b.terminal2.i.re + 0.007963956 * line_1043_1044a.terminal2.V.im - line_1043_1044b.YPu.re * line_1043_1044a.terminal2.V.re) - (line_1043_1044a.terminal2.V.im - line_1043_1044a.terminal1.V.im) else line_1043_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17969};
  (data->simulationInfo->daeModeData->residualVars[993]) /* $DAEres993 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17969;
}
/*
equation index: 17970
type: SIMPLE_ASSIGN
$DAEres994 = if line_1043_1044b.running.value then 0.01 * (line_1043_1044b.terminal1.i.re + 0.007963956 * line_1043_1044a.terminal1.V.im - line_1043_1044b.YPu.re * line_1043_1044a.terminal1.V.re) + (-0.08) * (line_1043_1044b.terminal1.i.im + (-0.007963956) * line_1043_1044a.terminal1.V.re - line_1043_1044b.YPu.re * line_1043_1044a.terminal1.V.im) - (line_1043_1044a.terminal1.V.re - line_1043_1044a.terminal2.V.re) else line_1043_1044b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17970};
  (data->simulationInfo->daeModeData->residualVars[994]) /* $DAEres994 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17970;
}
/*
equation index: 17971
type: SIMPLE_ASSIGN
$DAEres995 = if line_1043_1044b.running.value then 0.01 * (line_1043_1044b.terminal2.i.re + 0.007963956 * line_1043_1044a.terminal2.V.im - line_1043_1044b.YPu.re * line_1043_1044a.terminal2.V.re) + (-0.08) * (line_1043_1044b.terminal2.i.im + (-0.007963956) * line_1043_1044a.terminal2.V.re - line_1043_1044b.YPu.re * line_1043_1044a.terminal2.V.im) - (line_1043_1044a.terminal2.V.re - line_1043_1044a.terminal1.V.re) else line_1043_1044b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17971};
  (data->simulationInfo->daeModeData->residualVars[995]) /* $DAEres995 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[658]] /* line_1043_1044b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3106]] /* line_1043_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17971;
}
/*
equation index: 17972
type: SIMPLE_ASSIGN
$whenCondition422 = not pre(line_1043_1044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17972};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[359]] /* $whenCondition422 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[655] /* line_1043_1044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17972;
}
/*
equation index: 17973
type: WHEN

when {} then
  line_1043_1044a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17973};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[359]] /* $whenCondition422 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[359] /* $whenCondition422 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17973;
}
/*
equation index: 17975
type: SIMPLE_ASSIGN
$whenCondition424 = not line_1043_1044a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17975};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[361]] /* $whenCondition424 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17975;
}
/*
equation index: 17976
type: SIMPLE_ASSIGN
$whenCondition423 = line_1043_1044a.running.value and not pre(line_1043_1044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17976};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[360]] /* $whenCondition423 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[655] /* line_1043_1044a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17976;
}
/*
equation index: 17977
type: WHEN

when {$whenCondition424} then
  line_1043_1044a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17977};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[361]] /* $whenCondition424 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[361] /* $whenCondition424 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[55]] /* line_1043_1044a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[360]] /* $whenCondition423 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[360] /* $whenCondition423 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[55]] /* line_1043_1044a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17977;
}
/*
equation index: 17979
type: SIMPLE_ASSIGN
$DAEres845 = if line_1043_1044a.running.value then 0.01 * (line_1043_1044a.terminal1.i.im + (-0.007963956) * line_1043_1044a.terminal1.V.re - line_1043_1044a.YPu.re * line_1043_1044a.terminal1.V.im) + 0.08 * (line_1043_1044a.terminal1.i.re + 0.007963956 * line_1043_1044a.terminal1.V.im - line_1043_1044a.YPu.re * line_1043_1044a.terminal1.V.re) - (line_1043_1044a.terminal1.V.im - line_1043_1044a.terminal2.V.im) else line_1043_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17979};
  (data->simulationInfo->daeModeData->residualVars[845]) /* $DAEres845 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17979;
}
/*
equation index: 17980
type: SIMPLE_ASSIGN
$DAEres846 = if line_1043_1044a.running.value then 0.01 * (line_1043_1044a.terminal1.i.re + 0.007963956 * line_1043_1044a.terminal1.V.im - line_1043_1044a.YPu.re * line_1043_1044a.terminal1.V.re) + (-0.08) * (line_1043_1044a.terminal1.i.im + (-0.007963956) * line_1043_1044a.terminal1.V.re - line_1043_1044a.YPu.re * line_1043_1044a.terminal1.V.im) - (line_1043_1044a.terminal1.V.re - line_1043_1044a.terminal2.V.re) else line_1043_1044a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17980};
  (data->simulationInfo->daeModeData->residualVars[846]) /* $DAEres846 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17980;
}
/*
equation index: 17981
type: SIMPLE_ASSIGN
$DAEres847 = if line_1043_1044a.running.value then 0.01 * (line_1043_1044a.terminal2.i.im + (-0.007963956) * line_1043_1044a.terminal2.V.re - line_1043_1044a.YPu.re * line_1043_1044a.terminal2.V.im) + 0.08 * (line_1043_1044a.terminal2.i.re + 0.007963956 * line_1043_1044a.terminal2.V.im - line_1043_1044a.YPu.re * line_1043_1044a.terminal2.V.re) - (line_1043_1044a.terminal2.V.im - line_1043_1044a.terminal1.V.im) else line_1043_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17981};
  (data->simulationInfo->daeModeData->residualVars[847]) /* $DAEres847 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17981;
}
/*
equation index: 17982
type: SIMPLE_ASSIGN
$DAEres848 = if line_1043_1044a.running.value then 0.01 * (line_1043_1044a.terminal2.i.re + 0.007963956 * line_1043_1044a.terminal2.V.im - line_1043_1044a.YPu.re * line_1043_1044a.terminal2.V.re) + (-0.08) * (line_1043_1044a.terminal2.i.im + (-0.007963956) * line_1043_1044a.terminal2.V.re - line_1043_1044a.YPu.re * line_1043_1044a.terminal2.V.im) - (line_1043_1044a.terminal2.V.re - line_1043_1044a.terminal1.V.re) else line_1043_1044a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17982};
  (data->simulationInfo->daeModeData->residualVars[848]) /* $DAEres848 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[655]] /* line_1043_1044a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */) + (0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */) + (-0.007963956) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* line_1043_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17982;
}
/*
equation index: 17983
type: SIMPLE_ASSIGN
$whenCondition425 = not pre(line_1042_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17983};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[362]] /* $whenCondition425 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[652] /* line_1042_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17983;
}
/*
equation index: 17984
type: WHEN

when {} then
  line_1042_1045.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17984};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[362]] /* $whenCondition425 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[362] /* $whenCondition425 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17984;
}
/*
equation index: 17986
type: SIMPLE_ASSIGN
$whenCondition427 = not line_1042_1045.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17986};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[364]] /* $whenCondition427 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17986;
}
/*
equation index: 17987
type: SIMPLE_ASSIGN
$whenCondition426 = line_1042_1045.running.value and not pre(line_1042_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17987};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[363]] /* $whenCondition426 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[652] /* line_1042_1045.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17987;
}
/*
equation index: 17988
type: WHEN

when {$whenCondition427} then
  line_1042_1045.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17988};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[364]] /* $whenCondition427 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[364] /* $whenCondition427 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[54]] /* line_1042_1045.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[363]] /* $whenCondition426 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[363] /* $whenCondition426 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[54]] /* line_1042_1045.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17988;
}
/*
equation index: 17990
type: SIMPLE_ASSIGN
$DAEres897 = if line_1042_1045.running.value then 0.049999999999999996 * (line_1042_1045.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1045.YPu.re * line_1042_1045.terminal1.V.re) + (-0.30000000000000004) * (line_1042_1045.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1045.YPu.re * line_1042_1045.terminal1.V.im) - (line_1042_1045.terminal1.V.re - line_1042_1045.terminal2.V.re) else line_1042_1045.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17990};
  (data->simulationInfo->daeModeData->residualVars[897]) /* $DAEres897 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */)?(0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) + (-0.30000000000000004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17990;
}
/*
equation index: 17991
type: SIMPLE_ASSIGN
$DAEres898 = if line_1042_1045.running.value then 0.049999999999999996 * (line_1042_1045.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1045.YPu.re * line_1042_1045.terminal1.V.im) + 0.30000000000000004 * (line_1042_1045.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1045.YPu.re * line_1042_1045.terminal1.V.re) - (line_1042_1045.terminal1.V.im - line_1042_1045.terminal2.V.im) else line_1042_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17991};
  (data->simulationInfo->daeModeData->residualVars[898]) /* $DAEres898 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */)?(0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) + (0.30000000000000004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17991;
}
/*
equation index: 17992
type: SIMPLE_ASSIGN
$DAEres899 = if line_1042_1045.running.value then 0.049999999999999996 * (line_1042_1045.terminal2.i.im + (-0.0299975) * line_1042_1045.terminal2.V.re - line_1042_1045.YPu.re * line_1042_1045.terminal2.V.im) + 0.30000000000000004 * (line_1042_1045.terminal2.i.re + 0.0299975 * line_1042_1045.terminal2.V.im - line_1042_1045.YPu.re * line_1042_1045.terminal2.V.re) - (line_1042_1045.terminal2.V.im - line_1042_1045.terminal1.V.im) else line_1042_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17992};
  (data->simulationInfo->daeModeData->residualVars[899]) /* $DAEres899 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */)?(0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) + (0.30000000000000004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17992;
}
/*
equation index: 17993
type: SIMPLE_ASSIGN
$DAEres978 = if line_1042_1045.running.value then 0.049999999999999996 * (line_1042_1045.terminal2.i.re + 0.0299975 * line_1042_1045.terminal2.V.im - line_1042_1045.YPu.re * line_1042_1045.terminal2.V.re) + (-0.30000000000000004) * (line_1042_1045.terminal2.i.im + (-0.0299975) * line_1042_1045.terminal2.V.re - line_1042_1045.YPu.re * line_1042_1045.terminal2.V.im) - (line_1042_1045.terminal2.V.re - line_1042_1045.terminal1.V.re) else line_1042_1045.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17993};
  (data->simulationInfo->daeModeData->residualVars[978]) /* $DAEres978 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[652]] /* line_1042_1045.running.value DISCRETE */)?(0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) + (-0.30000000000000004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3090]] /* line_1042_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17993;
}
/*
equation index: 17994
type: SIMPLE_ASSIGN
$whenCondition428 = not pre(line_1042_1044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17994};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[365]] /* $whenCondition428 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[649] /* line_1042_1044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17994;
}
/*
equation index: 17995
type: WHEN

when {} then
  line_1042_1044b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17995};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[365]] /* $whenCondition428 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[365] /* $whenCondition428 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17995;
}
/*
equation index: 17997
type: SIMPLE_ASSIGN
$whenCondition430 = not line_1042_1044b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17997};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[368]] /* $whenCondition430 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17997;
}
/*
equation index: 17998
type: SIMPLE_ASSIGN
$whenCondition429 = line_1042_1044b.running.value and not pre(line_1042_1044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17998};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[366]] /* $whenCondition429 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[649] /* line_1042_1044b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17998;
}
/*
equation index: 17999
type: WHEN

when {$whenCondition430} then
  line_1042_1044b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17999};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[368]] /* $whenCondition430 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[368] /* $whenCondition430 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[53]] /* line_1042_1044b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[366]] /* $whenCondition429 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[366] /* $whenCondition429 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[53]] /* line_1042_1044b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17999;
}
/*
equation index: 18001
type: SIMPLE_ASSIGN
$DAEres859 = if line_1042_1044b.running.value then 0.03798816568047337 * (line_1042_1044b.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1044b.YPu.re * line_1042_1045.terminal1.V.im) + 0.28 * (line_1042_1044b.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1044b.YPu.re * line_1042_1045.terminal1.V.re) - (line_1042_1045.terminal1.V.im - line_1043_1044a.terminal2.V.im) else line_1042_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18001};
  (data->simulationInfo->daeModeData->residualVars[859]) /* $DAEres859 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) + (0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18001;
}
/*
equation index: 18002
type: SIMPLE_ASSIGN
$DAEres860 = if line_1042_1044b.running.value then 0.03798816568047337 * (line_1042_1044b.terminal2.i.im + (-0.0299975) * line_1043_1044a.terminal2.V.re - line_1042_1044b.YPu.re * line_1043_1044a.terminal2.V.im) + 0.28 * (line_1042_1044b.terminal2.i.re + 0.0299975 * line_1043_1044a.terminal2.V.im - line_1042_1044b.YPu.re * line_1043_1044a.terminal2.V.re) - (line_1043_1044a.terminal2.V.im - line_1042_1045.terminal1.V.im) else line_1042_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18002};
  (data->simulationInfo->daeModeData->residualVars[860]) /* $DAEres860 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) + (0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18002;
}
/*
equation index: 18003
type: SIMPLE_ASSIGN
$DAEres861 = if line_1042_1044b.running.value then 0.03798816568047337 * (line_1042_1044b.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1044b.YPu.re * line_1042_1045.terminal1.V.re) + (-0.28) * (line_1042_1044b.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1044b.YPu.re * line_1042_1045.terminal1.V.im) - (line_1042_1045.terminal1.V.re - line_1043_1044a.terminal2.V.re) else line_1042_1044b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18003};
  (data->simulationInfo->daeModeData->residualVars[861]) /* $DAEres861 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) + (-0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18003;
}
/*
equation index: 18004
type: SIMPLE_ASSIGN
$DAEres862 = if line_1042_1044b.running.value then 0.03798816568047337 * (line_1042_1044b.terminal2.i.re + 0.0299975 * line_1043_1044a.terminal2.V.im - line_1042_1044b.YPu.re * line_1043_1044a.terminal2.V.re) + (-0.28) * (line_1042_1044b.terminal2.i.im + (-0.0299975) * line_1043_1044a.terminal2.V.re - line_1042_1044b.YPu.re * line_1043_1044a.terminal2.V.im) - (line_1043_1044a.terminal2.V.re - line_1042_1045.terminal1.V.re) else line_1042_1044b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18004};
  (data->simulationInfo->daeModeData->residualVars[862]) /* $DAEres862 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[649]] /* line_1042_1044b.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) + (-0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* line_1042_1044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18004;
}
/*
equation index: 18005
type: SIMPLE_ASSIGN
$whenCondition431 = not pre(line_1042_1044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18005};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[369]] /* $whenCondition431 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[646] /* line_1042_1044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18005;
}
/*
equation index: 18006
type: WHEN

when {} then
  line_1042_1044a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18006};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[369]] /* $whenCondition431 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[369] /* $whenCondition431 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18006;
}
/*
equation index: 18008
type: SIMPLE_ASSIGN
$whenCondition433 = not line_1042_1044a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18008};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[371]] /* $whenCondition433 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18008;
}
/*
equation index: 18009
type: SIMPLE_ASSIGN
$whenCondition432 = line_1042_1044a.running.value and not pre(line_1042_1044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18009};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[370]] /* $whenCondition432 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[646] /* line_1042_1044a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18009;
}
/*
equation index: 18010
type: WHEN

when {$whenCondition433} then
  line_1042_1044a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18010};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[371]] /* $whenCondition433 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[371] /* $whenCondition433 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[52]] /* line_1042_1044a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[370]] /* $whenCondition432 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[370] /* $whenCondition432 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[52]] /* line_1042_1044a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18010;
}
/*
equation index: 18012
type: SIMPLE_ASSIGN
$DAEres985 = if line_1042_1044a.running.value then 0.03798816568047337 * (line_1042_1044a.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1044a.YPu.re * line_1042_1045.terminal1.V.im) + 0.28 * (line_1042_1044a.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1044a.YPu.re * line_1042_1045.terminal1.V.re) - (line_1042_1045.terminal1.V.im - line_1043_1044a.terminal2.V.im) else line_1042_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18012};
  (data->simulationInfo->daeModeData->residualVars[985]) /* $DAEres985 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) + (0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18012;
}
/*
equation index: 18013
type: SIMPLE_ASSIGN
$DAEres986 = if line_1042_1044a.running.value then 0.03798816568047337 * (line_1042_1044a.terminal1.i.re + 0.0299975 * line_1042_1045.terminal1.V.im - line_1042_1044a.YPu.re * line_1042_1045.terminal1.V.re) + (-0.28) * (line_1042_1044a.terminal1.i.im + (-0.0299975) * line_1042_1045.terminal1.V.re - line_1042_1044a.YPu.re * line_1042_1045.terminal1.V.im) - (line_1042_1045.terminal1.V.re - line_1043_1044a.terminal2.V.re) else line_1042_1044a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18013};
  (data->simulationInfo->daeModeData->residualVars[986]) /* $DAEres986 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)))) + (-0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18013;
}
/*
equation index: 18014
type: SIMPLE_ASSIGN
$DAEres987 = if line_1042_1044a.running.value then 0.03798816568047337 * (line_1042_1044a.terminal2.i.im + (-0.0299975) * line_1043_1044a.terminal2.V.re - line_1042_1044a.YPu.re * line_1043_1044a.terminal2.V.im) + 0.28 * (line_1042_1044a.terminal2.i.re + 0.0299975 * line_1043_1044a.terminal2.V.im - line_1042_1044a.YPu.re * line_1043_1044a.terminal2.V.re) - (line_1043_1044a.terminal2.V.im - line_1042_1045.terminal1.V.im) else line_1042_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18014};
  (data->simulationInfo->daeModeData->residualVars[987]) /* $DAEres987 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) + (0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18014;
}
/*
equation index: 18015
type: SIMPLE_ASSIGN
$DAEres988 = if line_1042_1044a.running.value then 0.03798816568047337 * (line_1042_1044a.terminal2.i.re + 0.0299975 * line_1043_1044a.terminal2.V.im - line_1042_1044a.YPu.re * line_1043_1044a.terminal2.V.re) + (-0.28) * (line_1042_1044a.terminal2.i.im + (-0.0299975) * line_1043_1044a.terminal2.V.re - line_1042_1044a.YPu.re * line_1043_1044a.terminal2.V.im) - (line_1043_1044a.terminal2.V.re - line_1042_1045.terminal1.V.re) else line_1042_1044a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18015};
  (data->simulationInfo->daeModeData->residualVars[988]) /* $DAEres988 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[646]] /* line_1042_1044a.running.value DISCRETE */)?(0.03798816568047337) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */) + (0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)))) + (-0.28) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */) + (-0.0299975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* line_1042_1044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18015;
}
/*
equation index: 18016
type: SIMPLE_ASSIGN
$whenCondition434 = not pre(line_1041_1045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18016};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[372]] /* $whenCondition434 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[643] /* line_1041_1045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18016;
}
/*
equation index: 18017
type: WHEN

when {} then
  line_1041_1045b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18017};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[372]] /* $whenCondition434 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[372] /* $whenCondition434 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18017;
}
/*
equation index: 18019
type: SIMPLE_ASSIGN
$whenCondition436 = not line_1041_1045b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18019};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[374]] /* $whenCondition436 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18019;
}
/*
equation index: 18020
type: SIMPLE_ASSIGN
$whenCondition435 = line_1041_1045b.running.value and not pre(line_1041_1045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18020};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[373]] /* $whenCondition435 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[643] /* line_1041_1045b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18020;
}
/*
equation index: 18021
type: WHEN

when {$whenCondition436} then
  line_1041_1045b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18021};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[374]] /* $whenCondition436 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[374] /* $whenCondition436 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[51]] /* line_1041_1045b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[373]] /* $whenCondition435 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[373] /* $whenCondition435 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[51]] /* line_1041_1045b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18021;
}
/*
equation index: 18023
type: SIMPLE_ASSIGN
$DAEres1178 = if line_1041_1045b.running.value then 0.01497041420118343 * (line_1041_1045b.terminal1.i.im + (-0.012476763) * line_1041_1043a.terminal1.V.re - line_1041_1045b.YPu.re * line_1041_1043a.terminal1.V.im) + 0.12000000000000001 * (line_1041_1045b.terminal1.i.re + 0.012476763 * line_1041_1043a.terminal1.V.im - line_1041_1045b.YPu.re * line_1041_1043a.terminal1.V.re) - (line_1041_1043a.terminal1.V.im - line_1042_1045.terminal2.V.im) else line_1041_1045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18023};
  (data->simulationInfo->daeModeData->residualVars[1178]) /* $DAEres1178 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) + (0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18023;
}
/*
equation index: 18024
type: SIMPLE_ASSIGN
$DAEres1179 = if line_1041_1045b.running.value then 0.01497041420118343 * (line_1041_1045b.terminal1.i.re + 0.012476763 * line_1041_1043a.terminal1.V.im - line_1041_1045b.YPu.re * line_1041_1043a.terminal1.V.re) + (-0.12000000000000001) * (line_1041_1045b.terminal1.i.im + (-0.012476763) * line_1041_1043a.terminal1.V.re - line_1041_1045b.YPu.re * line_1041_1043a.terminal1.V.im) - (line_1041_1043a.terminal1.V.re - line_1042_1045.terminal2.V.re) else line_1041_1045b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18024};
  (data->simulationInfo->daeModeData->residualVars[1179]) /* $DAEres1179 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) + (-0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18024;
}
/*
equation index: 18025
type: SIMPLE_ASSIGN
$DAEres1180 = if line_1041_1045b.running.value then 0.01497041420118343 * (line_1041_1045b.terminal2.i.re + 0.012476763 * line_1042_1045.terminal2.V.im - line_1041_1045b.YPu.re * line_1042_1045.terminal2.V.re) + (-0.12000000000000001) * (line_1041_1045b.terminal2.i.im + (-0.012476763) * line_1042_1045.terminal2.V.re - line_1041_1045b.YPu.re * line_1042_1045.terminal2.V.im) - (line_1042_1045.terminal2.V.re - line_1041_1043a.terminal1.V.re) else line_1041_1045b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18025};
  (data->simulationInfo->daeModeData->residualVars[1180]) /* $DAEres1180 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) + (-0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18025;
}
/*
equation index: 18026
type: SIMPLE_ASSIGN
$DAEres1181 = if line_1041_1045b.running.value then 0.01497041420118343 * (line_1041_1045b.terminal2.i.im + (-0.012476763) * line_1042_1045.terminal2.V.re - line_1041_1045b.YPu.re * line_1042_1045.terminal2.V.im) + 0.12000000000000001 * (line_1041_1045b.terminal2.i.re + 0.012476763 * line_1042_1045.terminal2.V.im - line_1041_1045b.YPu.re * line_1042_1045.terminal2.V.re) - (line_1042_1045.terminal2.V.im - line_1041_1043a.terminal1.V.im) else line_1041_1045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18026};
  (data->simulationInfo->daeModeData->residualVars[1181]) /* $DAEres1181 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[643]] /* line_1041_1045b.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) + (0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3066]] /* line_1041_1045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18026;
}
/*
equation index: 18027
type: SIMPLE_ASSIGN
$whenCondition437 = not pre(line_1041_1045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18027};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[375]] /* $whenCondition437 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[640] /* line_1041_1045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18027;
}
/*
equation index: 18028
type: WHEN

when {} then
  line_1041_1045a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18028};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[375]] /* $whenCondition437 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[375] /* $whenCondition437 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18028;
}
/*
equation index: 18030
type: SIMPLE_ASSIGN
$whenCondition439 = not line_1041_1045a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18030};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[377]] /* $whenCondition439 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18030;
}
/*
equation index: 18031
type: SIMPLE_ASSIGN
$whenCondition438 = line_1041_1045a.running.value and not pre(line_1041_1045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18031};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[376]] /* $whenCondition438 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[640] /* line_1041_1045a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18031;
}
/*
equation index: 18032
type: WHEN

when {$whenCondition439} then
  line_1041_1045a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18032};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[377]] /* $whenCondition439 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[377] /* $whenCondition439 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[50]] /* line_1041_1045a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[376]] /* $whenCondition438 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[376] /* $whenCondition438 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[50]] /* line_1041_1045a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18032;
}
/*
equation index: 18034
type: SIMPLE_ASSIGN
$DAEres871 = if line_1041_1045a.running.value then 0.01497041420118343 * (line_1041_1045a.terminal1.i.im + (-0.012476763) * line_1041_1043a.terminal1.V.re - line_1041_1045a.YPu.re * line_1041_1043a.terminal1.V.im) + 0.12000000000000001 * (line_1041_1045a.terminal1.i.re + 0.012476763 * line_1041_1043a.terminal1.V.im - line_1041_1045a.YPu.re * line_1041_1043a.terminal1.V.re) - (line_1041_1043a.terminal1.V.im - line_1042_1045.terminal2.V.im) else line_1041_1045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18034};
  (data->simulationInfo->daeModeData->residualVars[871]) /* $DAEres871 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) + (0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18034;
}
/*
equation index: 18035
type: SIMPLE_ASSIGN
$DAEres872 = if line_1041_1045a.running.value then 0.01497041420118343 * (line_1041_1045a.terminal1.i.re + 0.012476763 * line_1041_1043a.terminal1.V.im - line_1041_1045a.YPu.re * line_1041_1043a.terminal1.V.re) + (-0.12000000000000001) * (line_1041_1045a.terminal1.i.im + (-0.012476763) * line_1041_1043a.terminal1.V.re - line_1041_1045a.YPu.re * line_1041_1043a.terminal1.V.im) - (line_1041_1043a.terminal1.V.re - line_1042_1045.terminal2.V.re) else line_1041_1045a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18035};
  (data->simulationInfo->daeModeData->residualVars[872]) /* $DAEres872 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) + (-0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18035;
}
/*
equation index: 18036
type: SIMPLE_ASSIGN
$DAEres873 = if line_1041_1045a.running.value then 0.01497041420118343 * (line_1041_1045a.terminal2.i.im + (-0.012476763) * line_1042_1045.terminal2.V.re - line_1041_1045a.YPu.re * line_1042_1045.terminal2.V.im) + 0.12000000000000001 * (line_1041_1045a.terminal2.i.re + 0.012476763 * line_1042_1045.terminal2.V.im - line_1041_1045a.YPu.re * line_1042_1045.terminal2.V.re) - (line_1042_1045.terminal2.V.im - line_1041_1043a.terminal1.V.im) else line_1041_1045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18036};
  (data->simulationInfo->daeModeData->residualVars[873]) /* $DAEres873 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) + (0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18036;
}
/*
equation index: 18037
type: SIMPLE_ASSIGN
$DAEres874 = if line_1041_1045a.running.value then 0.01497041420118343 * (line_1041_1045a.terminal2.i.re + 0.012476763 * line_1042_1045.terminal2.V.im - line_1041_1045a.YPu.re * line_1042_1045.terminal2.V.re) + (-0.12000000000000001) * (line_1041_1045a.terminal2.i.im + (-0.012476763) * line_1042_1045.terminal2.V.re - line_1041_1045a.YPu.re * line_1042_1045.terminal2.V.im) - (line_1042_1045.terminal2.V.re - line_1041_1043a.terminal1.V.re) else line_1041_1045a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18037};
  (data->simulationInfo->daeModeData->residualVars[874]) /* $DAEres874 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[640]] /* line_1041_1045a.running.value DISCRETE */)?(0.01497041420118343) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */) + (0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)))) + (-0.12000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */) + (-0.012476763) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3058]] /* line_1041_1045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18037;
}
/*
equation index: 18038
type: SIMPLE_ASSIGN
$whenCondition440 = not pre(line_1041_1043b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18038};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[379]] /* $whenCondition440 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[637] /* line_1041_1043b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18038;
}
/*
equation index: 18039
type: WHEN

when {} then
  line_1041_1043b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18039};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[379]] /* $whenCondition440 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[379] /* $whenCondition440 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18039;
}
/*
equation index: 18041
type: SIMPLE_ASSIGN
$whenCondition442 = not line_1041_1043b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18041};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[381]] /* $whenCondition442 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18041;
}
/*
equation index: 18042
type: SIMPLE_ASSIGN
$whenCondition441 = line_1041_1043b.running.value and not pre(line_1041_1043b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18042};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[380]] /* $whenCondition441 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[637] /* line_1041_1043b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18042;
}
/*
equation index: 18043
type: WHEN

when {$whenCondition442} then
  line_1041_1043b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18043};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[381]] /* $whenCondition442 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[381] /* $whenCondition442 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[49]] /* line_1041_1043b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[380]] /* $whenCondition441 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[380] /* $whenCondition441 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[49]] /* line_1041_1043b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18043;
}
/*
equation index: 18045
type: SIMPLE_ASSIGN
$DAEres799 = if line_1041_1043b.running.value then 0.01 * (line_1041_1043b.terminal1.i.im + (-0.006105632) * line_1041_1043a.terminal1.V.re - line_1041_1043b.YPu.re * line_1041_1043a.terminal1.V.im) + 0.060000000000000005 * (line_1041_1043b.terminal1.i.re + 0.006105632 * line_1041_1043a.terminal1.V.im - line_1041_1043b.YPu.re * line_1041_1043a.terminal1.V.re) - (line_1041_1043a.terminal1.V.im - line_1043_1044a.terminal1.V.im) else line_1041_1043b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18045};
  (data->simulationInfo->daeModeData->residualVars[799]) /* $DAEres799 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) + (0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18045;
}
/*
equation index: 18046
type: SIMPLE_ASSIGN
$DAEres800 = if line_1041_1043b.running.value then 0.01 * (line_1041_1043b.terminal2.i.im + (-0.006105632) * line_1043_1044a.terminal1.V.re - line_1041_1043b.YPu.re * line_1043_1044a.terminal1.V.im) + 0.060000000000000005 * (line_1041_1043b.terminal2.i.re + 0.006105632 * line_1043_1044a.terminal1.V.im - line_1041_1043b.YPu.re * line_1043_1044a.terminal1.V.re) - (line_1043_1044a.terminal1.V.im - line_1041_1043a.terminal1.V.im) else line_1041_1043b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18046};
  (data->simulationInfo->daeModeData->residualVars[800]) /* $DAEres800 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) + (0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18046;
}
/*
equation index: 18047
type: SIMPLE_ASSIGN
$DAEres801 = if line_1041_1043b.running.value then 0.01 * (line_1041_1043b.terminal1.i.re + 0.006105632 * line_1041_1043a.terminal1.V.im - line_1041_1043b.YPu.re * line_1041_1043a.terminal1.V.re) + (-0.060000000000000005) * (line_1041_1043b.terminal1.i.im + (-0.006105632) * line_1041_1043a.terminal1.V.re - line_1041_1043b.YPu.re * line_1041_1043a.terminal1.V.im) - (line_1041_1043a.terminal1.V.re - line_1043_1044a.terminal1.V.re) else line_1041_1043b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18047};
  (data->simulationInfo->daeModeData->residualVars[801]) /* $DAEres801 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) + (-0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18047;
}
/*
equation index: 18048
type: SIMPLE_ASSIGN
$DAEres802 = if line_1041_1043b.running.value then 0.01 * (line_1041_1043b.terminal2.i.re + 0.006105632 * line_1043_1044a.terminal1.V.im - line_1041_1043b.YPu.re * line_1043_1044a.terminal1.V.re) + (-0.060000000000000005) * (line_1041_1043b.terminal2.i.im + (-0.006105632) * line_1043_1044a.terminal1.V.re - line_1041_1043b.YPu.re * line_1043_1044a.terminal1.V.im) - (line_1043_1044a.terminal1.V.re - line_1041_1043a.terminal1.V.re) else line_1041_1043b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18048};
  (data->simulationInfo->daeModeData->residualVars[802]) /* $DAEres802 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[637]] /* line_1041_1043b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) + (-0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* line_1041_1043b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18048;
}
/*
equation index: 18049
type: SIMPLE_ASSIGN
$whenCondition443 = not pre(line_1041_1043a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18049};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[382]] /* $whenCondition443 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[634] /* line_1041_1043a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18049;
}
/*
equation index: 18050
type: WHEN

when {} then
  line_1041_1043a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18050};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[382]] /* $whenCondition443 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[382] /* $whenCondition443 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18050;
}
/*
equation index: 18052
type: SIMPLE_ASSIGN
$whenCondition445 = not line_1041_1043a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18052};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[384]] /* $whenCondition445 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18052;
}
/*
equation index: 18053
type: SIMPLE_ASSIGN
$whenCondition444 = line_1041_1043a.running.value and not pre(line_1041_1043a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18053};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[383]] /* $whenCondition444 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[634] /* line_1041_1043a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18053;
}
/*
equation index: 18054
type: WHEN

when {$whenCondition445} then
  line_1041_1043a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18054};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[384]] /* $whenCondition445 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[384] /* $whenCondition445 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[48]] /* line_1041_1043a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[383]] /* $whenCondition444 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[383] /* $whenCondition444 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[48]] /* line_1041_1043a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18054;
}
/*
equation index: 18056
type: SIMPLE_ASSIGN
$DAEres795 = if line_1041_1043a.running.value then 0.01 * (line_1041_1043a.terminal1.i.im + (-0.006105632) * line_1041_1043a.terminal1.V.re - line_1041_1043a.YPu.re * line_1041_1043a.terminal1.V.im) + 0.060000000000000005 * (line_1041_1043a.terminal1.i.re + 0.006105632 * line_1041_1043a.terminal1.V.im - line_1041_1043a.YPu.re * line_1041_1043a.terminal1.V.re) - (line_1041_1043a.terminal1.V.im - line_1043_1044a.terminal1.V.im) else line_1041_1043a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18056};
  (data->simulationInfo->daeModeData->residualVars[795]) /* $DAEres795 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) + (0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18056;
}
/*
equation index: 18057
type: SIMPLE_ASSIGN
$DAEres796 = if line_1041_1043a.running.value then 0.01 * (line_1041_1043a.terminal1.i.re + 0.006105632 * line_1041_1043a.terminal1.V.im - line_1041_1043a.YPu.re * line_1041_1043a.terminal1.V.re) + (-0.060000000000000005) * (line_1041_1043a.terminal1.i.im + (-0.006105632) * line_1041_1043a.terminal1.V.re - line_1041_1043a.YPu.re * line_1041_1043a.terminal1.V.im) - (line_1041_1043a.terminal1.V.re - line_1043_1044a.terminal1.V.re) else line_1041_1043a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18057};
  (data->simulationInfo->daeModeData->residualVars[796]) /* $DAEres796 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)))) + (-0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18057;
}
/*
equation index: 18058
type: SIMPLE_ASSIGN
$DAEres797 = if line_1041_1043a.running.value then 0.01 * (line_1041_1043a.terminal2.i.im + (-0.006105632) * line_1043_1044a.terminal1.V.re - line_1041_1043a.YPu.re * line_1043_1044a.terminal1.V.im) + 0.060000000000000005 * (line_1041_1043a.terminal2.i.re + 0.006105632 * line_1043_1044a.terminal1.V.im - line_1041_1043a.YPu.re * line_1043_1044a.terminal1.V.re) - (line_1043_1044a.terminal1.V.im - line_1041_1043a.terminal1.V.im) else line_1041_1043a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18058};
  (data->simulationInfo->daeModeData->residualVars[797]) /* $DAEres797 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) + (0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18058;
}
/*
equation index: 18059
type: SIMPLE_ASSIGN
$DAEres798 = if line_1041_1043a.running.value then 0.01 * (line_1041_1043a.terminal2.i.re + 0.006105632 * line_1043_1044a.terminal1.V.im - line_1041_1043a.YPu.re * line_1043_1044a.terminal1.V.re) + (-0.060000000000000005) * (line_1041_1043a.terminal2.i.im + (-0.006105632) * line_1043_1044a.terminal1.V.re - line_1041_1043a.YPu.re * line_1043_1044a.terminal1.V.im) - (line_1043_1044a.terminal1.V.re - line_1041_1043a.terminal1.V.re) else line_1041_1043a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18059};
  (data->simulationInfo->daeModeData->residualVars[798]) /* $DAEres798 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[634]] /* line_1041_1043a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */) + (0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)))) + (-0.060000000000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */) + (-0.006105632) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* line_1041_1043a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18059;
}
/*
equation index: 18060
type: SIMPLE_ASSIGN
$whenCondition446 = not pre(line_1021_1022b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18060};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[385]] /* $whenCondition446 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[631] /* line_1021_1022b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18060;
}
/*
equation index: 18061
type: WHEN

when {} then
  line_1021_1022b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18061};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[385]] /* $whenCondition446 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[385] /* $whenCondition446 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18061;
}
/*
equation index: 18063
type: SIMPLE_ASSIGN
$whenCondition448 = not line_1021_1022b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18063};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[387]] /* $whenCondition448 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18063;
}
/*
equation index: 18064
type: SIMPLE_ASSIGN
$whenCondition447 = line_1021_1022b.running.value and not pre(line_1021_1022b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18064};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[386]] /* $whenCondition447 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[631] /* line_1021_1022b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18064;
}
/*
equation index: 18065
type: WHEN

when {$whenCondition448} then
  line_1021_1022b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18065};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[387]] /* $whenCondition448 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[387] /* $whenCondition448 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[47]] /* line_1021_1022b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[386]] /* $whenCondition447 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[386] /* $whenCondition447 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[47]] /* line_1021_1022b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18065;
}
/*
equation index: 18067
type: SIMPLE_ASSIGN
$DAEres352 = if line_1021_1022b.running.value then 0.030000000000000002 * (line_1021_1022b.terminal1.i.im + (-0.015131415) * line_1021_1022b.terminal1.V.re - line_1021_1022b.YPu.re * line_1021_1022b.terminal1.V.im) + 0.19999999999999998 * (line_1021_1022b.terminal1.i.re + 0.015131415 * line_1021_1022b.terminal1.V.im - line_1021_1022b.YPu.re * line_1021_1022b.terminal1.V.re) - (line_1021_1022b.terminal1.V.im - line_1021_1022b.terminal2.V.im) else line_1021_1022b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18067};
  (data->simulationInfo->daeModeData->residualVars[352]) /* $DAEres352 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)))) + (0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18067;
}
/*
equation index: 18068
type: SIMPLE_ASSIGN
$DAEres353 = if line_1021_1022b.running.value then 0.030000000000000002 * (line_1021_1022b.terminal2.i.im + (-0.015131415) * line_1021_1022b.terminal2.V.re - line_1021_1022b.YPu.re * line_1021_1022b.terminal2.V.im) + 0.19999999999999998 * (line_1021_1022b.terminal2.i.re + 0.015131415 * line_1021_1022b.terminal2.V.im - line_1021_1022b.YPu.re * line_1021_1022b.terminal2.V.re) - (line_1021_1022b.terminal2.V.im - line_1021_1022b.terminal1.V.im) else line_1021_1022b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18068};
  (data->simulationInfo->daeModeData->residualVars[353]) /* $DAEres353 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)))) + (0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18068;
}
/*
equation index: 18069
type: SIMPLE_ASSIGN
$DAEres354 = if line_1021_1022b.running.value then 0.030000000000000002 * (line_1021_1022b.terminal1.i.re + 0.015131415 * line_1021_1022b.terminal1.V.im - line_1021_1022b.YPu.re * line_1021_1022b.terminal1.V.re) + (-0.19999999999999998) * (line_1021_1022b.terminal1.i.im + (-0.015131415) * line_1021_1022b.terminal1.V.re - line_1021_1022b.YPu.re * line_1021_1022b.terminal1.V.im) - (line_1021_1022b.terminal1.V.re - line_1021_1022b.terminal2.V.re) else line_1021_1022b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18069};
  (data->simulationInfo->daeModeData->residualVars[354]) /* $DAEres354 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)))) + (-0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18069;
}
/*
equation index: 18070
type: SIMPLE_ASSIGN
$DAEres361 = if line_1021_1022b.running.value then 0.030000000000000002 * (line_1021_1022b.terminal2.i.re + 0.015131415 * line_1021_1022b.terminal2.V.im - line_1021_1022b.YPu.re * line_1021_1022b.terminal2.V.re) + (-0.19999999999999998) * (line_1021_1022b.terminal2.i.im + (-0.015131415) * line_1021_1022b.terminal2.V.re - line_1021_1022b.YPu.re * line_1021_1022b.terminal2.V.im) - (line_1021_1022b.terminal2.V.re - line_1021_1022b.terminal1.V.re) else line_1021_1022b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18070};
  (data->simulationInfo->daeModeData->residualVars[361]) /* $DAEres361 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[631]] /* line_1021_1022b.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)))) + (-0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* line_1021_1022b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18070;
}
/*
equation index: 18071
type: SIMPLE_ASSIGN
$whenCondition449 = not pre(line_1021_1022a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18071};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[388]] /* $whenCondition449 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[628] /* line_1021_1022a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18071;
}
/*
equation index: 18072
type: WHEN

when {} then
  line_1021_1022a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18072};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[388]] /* $whenCondition449 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[388] /* $whenCondition449 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18072;
}
/*
equation index: 18074
type: SIMPLE_ASSIGN
$whenCondition451 = not line_1021_1022a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18074};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[391]] /* $whenCondition451 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18074;
}
/*
equation index: 18075
type: SIMPLE_ASSIGN
$whenCondition450 = line_1021_1022a.running.value and not pre(line_1021_1022a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18075};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[390]] /* $whenCondition450 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[628] /* line_1021_1022a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18075;
}
/*
equation index: 18076
type: WHEN

when {$whenCondition451} then
  line_1021_1022a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18076};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[391]] /* $whenCondition451 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[391] /* $whenCondition451 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[46]] /* line_1021_1022a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[390]] /* $whenCondition450 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[390] /* $whenCondition450 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[46]] /* line_1021_1022a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18076;
}
/*
equation index: 18078
type: SIMPLE_ASSIGN
$DAEres326 = if line_1021_1022a.running.value then 0.030000000000000002 * (line_1021_1022a.terminal1.i.im + (-0.015131415) * line_1021_1022b.terminal1.V.re - line_1021_1022a.YPu.re * line_1021_1022b.terminal1.V.im) + 0.19999999999999998 * (line_1021_1022a.terminal1.i.re + 0.015131415 * line_1021_1022b.terminal1.V.im - line_1021_1022a.YPu.re * line_1021_1022b.terminal1.V.re) - (line_1021_1022b.terminal1.V.im - line_1021_1022b.terminal2.V.im) else line_1021_1022a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18078};
  (data->simulationInfo->daeModeData->residualVars[326]) /* $DAEres326 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)))) + (0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18078;
}
/*
equation index: 18079
type: SIMPLE_ASSIGN
$DAEres327 = if line_1021_1022a.running.value then 0.030000000000000002 * (line_1021_1022a.terminal1.i.re + 0.015131415 * line_1021_1022b.terminal1.V.im - line_1021_1022a.YPu.re * line_1021_1022b.terminal1.V.re) + (-0.19999999999999998) * (line_1021_1022a.terminal1.i.im + (-0.015131415) * line_1021_1022b.terminal1.V.re - line_1021_1022a.YPu.re * line_1021_1022b.terminal1.V.im) - (line_1021_1022b.terminal1.V.re - line_1021_1022b.terminal2.V.re) else line_1021_1022a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18079};
  (data->simulationInfo->daeModeData->residualVars[327]) /* $DAEres327 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)))) + (-0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18079;
}
/*
equation index: 18080
type: SIMPLE_ASSIGN
$DAEres328 = if line_1021_1022a.running.value then 0.030000000000000002 * (line_1021_1022a.terminal2.i.re + 0.015131415 * line_1021_1022b.terminal2.V.im - line_1021_1022a.YPu.re * line_1021_1022b.terminal2.V.re) + (-0.19999999999999998) * (line_1021_1022a.terminal2.i.im + (-0.015131415) * line_1021_1022b.terminal2.V.re - line_1021_1022a.YPu.re * line_1021_1022b.terminal2.V.im) - (line_1021_1022b.terminal2.V.re - line_1021_1022b.terminal1.V.re) else line_1021_1022a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18080};
  (data->simulationInfo->daeModeData->residualVars[328]) /* $DAEres328 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)))) + (-0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18080;
}
/*
equation index: 18081
type: SIMPLE_ASSIGN
$DAEres329 = if line_1021_1022a.running.value then 0.030000000000000002 * (line_1021_1022a.terminal2.i.im + (-0.015131415) * line_1021_1022b.terminal2.V.re - line_1021_1022a.YPu.re * line_1021_1022b.terminal2.V.im) + 0.19999999999999998 * (line_1021_1022a.terminal2.i.re + 0.015131415 * line_1021_1022b.terminal2.V.im - line_1021_1022a.YPu.re * line_1021_1022b.terminal2.V.re) - (line_1021_1022b.terminal2.V.im - line_1021_1022b.terminal1.V.im) else line_1021_1022a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18081};
  (data->simulationInfo->daeModeData->residualVars[329]) /* $DAEres329 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[628]] /* line_1021_1022a.running.value DISCRETE */)?(0.030000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */) + (-0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)))) + (0.19999999999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */) + (0.015131415) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* line_1021_1022a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18081;
}
/*
equation index: 18082
type: SIMPLE_ASSIGN
$whenCondition452 = not pre(line_1013_1014b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18082};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[392]] /* $whenCondition452 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[625] /* line_1013_1014b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18082;
}
/*
equation index: 18083
type: WHEN

when {} then
  line_1013_1014b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18083};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[392]] /* $whenCondition452 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[392] /* $whenCondition452 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18083;
}
/*
equation index: 18085
type: SIMPLE_ASSIGN
$whenCondition454 = not line_1013_1014b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18085};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[394]] /* $whenCondition454 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18085;
}
/*
equation index: 18086
type: SIMPLE_ASSIGN
$whenCondition453 = line_1013_1014b.running.value and not pre(line_1013_1014b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18086};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[393]] /* $whenCondition453 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[625] /* line_1013_1014b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18086;
}
/*
equation index: 18087
type: WHEN

when {$whenCondition454} then
  line_1013_1014b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18087};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[394]] /* $whenCondition454 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[394] /* $whenCondition454 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[45]] /* line_1013_1014b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[393]] /* $whenCondition453 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[393] /* $whenCondition453 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[45]] /* line_1013_1014b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18087;
}
/*
equation index: 18089
type: SIMPLE_ASSIGN
$DAEres447 = if line_1013_1014b.running.value then 0.006982248520710059 * (line_1013_1014b.terminal1.i.im + (-0.005043805) * line_1013_1014a.terminal1.V.re - line_1013_1014b.YPu.re * line_1013_1014a.terminal1.V.im) + 0.049999999999999996 * (line_1013_1014b.terminal1.i.re + 0.005043805 * line_1013_1014a.terminal1.V.im - line_1013_1014b.YPu.re * line_1013_1014a.terminal1.V.re) - (line_1013_1014a.terminal1.V.im - line_1013_1014a.terminal2.V.im) else line_1013_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18089};
  (data->simulationInfo->daeModeData->residualVars[447]) /* $DAEres447 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) + (0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18089;
}
/*
equation index: 18090
type: SIMPLE_ASSIGN
$DAEres1069 = if line_1013_1014b.running.value then 0.006982248520710059 * (line_1013_1014b.terminal2.i.im + (-0.005043805) * line_1013_1014a.terminal2.V.re - line_1013_1014b.YPu.re * line_1013_1014a.terminal2.V.im) + 0.049999999999999996 * (line_1013_1014b.terminal2.i.re + 0.005043805 * line_1013_1014a.terminal2.V.im - line_1013_1014b.YPu.re * line_1013_1014a.terminal2.V.re) - (line_1013_1014a.terminal2.V.im - line_1013_1014a.terminal1.V.im) else line_1013_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18090};
  (data->simulationInfo->daeModeData->residualVars[1069]) /* $DAEres1069 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) + (0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18090;
}
/*
equation index: 18091
type: SIMPLE_ASSIGN
$DAEres1070 = if line_1013_1014b.running.value then 0.006982248520710059 * (line_1013_1014b.terminal1.i.re + 0.005043805 * line_1013_1014a.terminal1.V.im - line_1013_1014b.YPu.re * line_1013_1014a.terminal1.V.re) + (-0.049999999999999996) * (line_1013_1014b.terminal1.i.im + (-0.005043805) * line_1013_1014a.terminal1.V.re - line_1013_1014b.YPu.re * line_1013_1014a.terminal1.V.im) - (line_1013_1014a.terminal1.V.re - line_1013_1014a.terminal2.V.re) else line_1013_1014b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18091};
  (data->simulationInfo->daeModeData->residualVars[1070]) /* $DAEres1070 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) + (-0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18091;
}
/*
equation index: 18092
type: SIMPLE_ASSIGN
$DAEres1071 = if line_1013_1014b.running.value then 0.006982248520710059 * (line_1013_1014b.terminal2.i.re + 0.005043805 * line_1013_1014a.terminal2.V.im - line_1013_1014b.YPu.re * line_1013_1014a.terminal2.V.re) + (-0.049999999999999996) * (line_1013_1014b.terminal2.i.im + (-0.005043805) * line_1013_1014a.terminal2.V.re - line_1013_1014b.YPu.re * line_1013_1014a.terminal2.V.im) - (line_1013_1014a.terminal2.V.re - line_1013_1014a.terminal1.V.re) else line_1013_1014b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18092};
  (data->simulationInfo->daeModeData->residualVars[1071]) /* $DAEres1071 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[625]] /* line_1013_1014b.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) + (-0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* line_1013_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18092;
}
/*
equation index: 18093
type: SIMPLE_ASSIGN
$whenCondition455 = not pre(line_1013_1014a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18093};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[395]] /* $whenCondition455 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[622] /* line_1013_1014a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18093;
}
/*
equation index: 18094
type: WHEN

when {} then
  line_1013_1014a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18094};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[395]] /* $whenCondition455 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[395] /* $whenCondition455 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18094;
}
/*
equation index: 18096
type: SIMPLE_ASSIGN
$whenCondition457 = not line_1013_1014a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18096};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[397]] /* $whenCondition457 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18096;
}
/*
equation index: 18097
type: SIMPLE_ASSIGN
$whenCondition456 = line_1013_1014a.running.value and not pre(line_1013_1014a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18097};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[396]] /* $whenCondition456 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[622] /* line_1013_1014a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18097;
}
/*
equation index: 18098
type: WHEN

when {$whenCondition457} then
  line_1013_1014a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18098};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[397]] /* $whenCondition457 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[397] /* $whenCondition457 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[44]] /* line_1013_1014a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[396]] /* $whenCondition456 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[396] /* $whenCondition456 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[44]] /* line_1013_1014a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18098;
}
/*
equation index: 18100
type: SIMPLE_ASSIGN
$DAEres443 = if line_1013_1014a.running.value then 0.006982248520710059 * (line_1013_1014a.terminal1.i.im + (-0.005043805) * line_1013_1014a.terminal1.V.re - line_1013_1014a.YPu.re * line_1013_1014a.terminal1.V.im) + 0.049999999999999996 * (line_1013_1014a.terminal1.i.re + 0.005043805 * line_1013_1014a.terminal1.V.im - line_1013_1014a.YPu.re * line_1013_1014a.terminal1.V.re) - (line_1013_1014a.terminal1.V.im - line_1013_1014a.terminal2.V.im) else line_1013_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18100};
  (data->simulationInfo->daeModeData->residualVars[443]) /* $DAEres443 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) + (0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18100;
}
/*
equation index: 18101
type: SIMPLE_ASSIGN
$DAEres444 = if line_1013_1014a.running.value then 0.006982248520710059 * (line_1013_1014a.terminal2.i.im + (-0.005043805) * line_1013_1014a.terminal2.V.re - line_1013_1014a.YPu.re * line_1013_1014a.terminal2.V.im) + 0.049999999999999996 * (line_1013_1014a.terminal2.i.re + 0.005043805 * line_1013_1014a.terminal2.V.im - line_1013_1014a.YPu.re * line_1013_1014a.terminal2.V.re) - (line_1013_1014a.terminal2.V.im - line_1013_1014a.terminal1.V.im) else line_1013_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18101};
  (data->simulationInfo->daeModeData->residualVars[444]) /* $DAEres444 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) + (0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18101;
}
/*
equation index: 18102
type: SIMPLE_ASSIGN
$DAEres445 = if line_1013_1014a.running.value then 0.006982248520710059 * (line_1013_1014a.terminal1.i.re + 0.005043805 * line_1013_1014a.terminal1.V.im - line_1013_1014a.YPu.re * line_1013_1014a.terminal1.V.re) + (-0.049999999999999996) * (line_1013_1014a.terminal1.i.im + (-0.005043805) * line_1013_1014a.terminal1.V.re - line_1013_1014a.YPu.re * line_1013_1014a.terminal1.V.im) - (line_1013_1014a.terminal1.V.re - line_1013_1014a.terminal2.V.re) else line_1013_1014a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18102};
  (data->simulationInfo->daeModeData->residualVars[445]) /* $DAEres445 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) + (-0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18102;
}
/*
equation index: 18103
type: SIMPLE_ASSIGN
$DAEres446 = if line_1013_1014a.running.value then 0.006982248520710059 * (line_1013_1014a.terminal2.i.re + 0.005043805 * line_1013_1014a.terminal2.V.im - line_1013_1014a.YPu.re * line_1013_1014a.terminal2.V.re) + (-0.049999999999999996) * (line_1013_1014a.terminal2.i.im + (-0.005043805) * line_1013_1014a.terminal2.V.re - line_1013_1014a.YPu.re * line_1013_1014a.terminal2.V.im) - (line_1013_1014a.terminal2.V.re - line_1013_1014a.terminal1.V.re) else line_1013_1014a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18103};
  (data->simulationInfo->daeModeData->residualVars[446]) /* $DAEres446 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[622]] /* line_1013_1014a.running.value DISCRETE */)?(0.006982248520710059) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */) + (0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) + (-0.049999999999999996) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */) + (-0.005043805) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* line_1013_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18103;
}
/*
equation index: 18104
type: SIMPLE_ASSIGN
$whenCondition458 = not pre(line_1012_1014b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18104};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[398]] /* $whenCondition458 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[619] /* line_1012_1014b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18104;
}
/*
equation index: 18105
type: WHEN

when {} then
  line_1012_1014b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18105};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[398]] /* $whenCondition458 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[398] /* $whenCondition458 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18105;
}
/*
equation index: 18107
type: SIMPLE_ASSIGN
$whenCondition460 = not line_1012_1014b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18107};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[401]] /* $whenCondition460 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18107;
}
/*
equation index: 18108
type: SIMPLE_ASSIGN
$whenCondition459 = line_1012_1014b.running.value and not pre(line_1012_1014b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18108};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[399]] /* $whenCondition459 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[619] /* line_1012_1014b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18108;
}
/*
equation index: 18109
type: WHEN

when {$whenCondition460} then
  line_1012_1014b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18109};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[401]] /* $whenCondition460 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[401] /* $whenCondition460 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[43]] /* line_1012_1014b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[399]] /* $whenCondition459 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[399] /* $whenCondition459 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[43]] /* line_1012_1014b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18109;
}
/*
equation index: 18111
type: SIMPLE_ASSIGN
$DAEres441 = if line_1012_1014b.running.value then 0.014023668639053254 * (line_1012_1014b.terminal1.i.im + (-0.009025782999999999) * line_1012_1014a.terminal1.V.re - line_1012_1014b.YPu.re * line_1012_1014a.terminal1.V.im) + 0.09000000000000001 * (line_1012_1014b.terminal1.i.re + 0.009025782999999999 * line_1012_1014a.terminal1.V.im - line_1012_1014b.YPu.re * line_1012_1014a.terminal1.V.re) - (line_1012_1014a.terminal1.V.im - line_1013_1014a.terminal2.V.im) else line_1012_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18111};
  (data->simulationInfo->daeModeData->residualVars[441]) /* $DAEres441 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18111;
}
/*
equation index: 18112
type: SIMPLE_ASSIGN
$DAEres442 = if line_1012_1014b.running.value then 0.014023668639053254 * (line_1012_1014b.terminal2.i.im + (-0.009025782999999999) * line_1013_1014a.terminal2.V.re - line_1012_1014b.YPu.re * line_1013_1014a.terminal2.V.im) + 0.09000000000000001 * (line_1012_1014b.terminal2.i.re + 0.009025782999999999 * line_1013_1014a.terminal2.V.im - line_1012_1014b.YPu.re * line_1013_1014a.terminal2.V.re) - (line_1013_1014a.terminal2.V.im - line_1012_1014a.terminal1.V.im) else line_1012_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18112};
  (data->simulationInfo->daeModeData->residualVars[442]) /* $DAEres442 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18112;
}
/*
equation index: 18113
type: SIMPLE_ASSIGN
$DAEres1074 = if line_1012_1014b.running.value then 0.014023668639053254 * (line_1012_1014b.terminal1.i.re + 0.009025782999999999 * line_1012_1014a.terminal1.V.im - line_1012_1014b.YPu.re * line_1012_1014a.terminal1.V.re) + (-0.09000000000000001) * (line_1012_1014b.terminal1.i.im + (-0.009025782999999999) * line_1012_1014a.terminal1.V.re - line_1012_1014b.YPu.re * line_1012_1014a.terminal1.V.im) - (line_1012_1014a.terminal1.V.re - line_1013_1014a.terminal2.V.re) else line_1012_1014b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18113};
  (data->simulationInfo->daeModeData->residualVars[1074]) /* $DAEres1074 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18113;
}
/*
equation index: 18114
type: SIMPLE_ASSIGN
$DAEres1075 = if line_1012_1014b.running.value then 0.014023668639053254 * (line_1012_1014b.terminal2.i.re + 0.009025782999999999 * line_1013_1014a.terminal2.V.im - line_1012_1014b.YPu.re * line_1013_1014a.terminal2.V.re) + (-0.09000000000000001) * (line_1012_1014b.terminal2.i.im + (-0.009025782999999999) * line_1013_1014a.terminal2.V.re - line_1012_1014b.YPu.re * line_1013_1014a.terminal2.V.im) - (line_1013_1014a.terminal2.V.re - line_1012_1014a.terminal1.V.re) else line_1012_1014b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18114};
  (data->simulationInfo->daeModeData->residualVars[1075]) /* $DAEres1075 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[619]] /* line_1012_1014b.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* line_1012_1014b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18114;
}
/*
equation index: 18115
type: SIMPLE_ASSIGN
$whenCondition461 = not pre(line_1012_1014a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18115};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[402]] /* $whenCondition461 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[616] /* line_1012_1014a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18115;
}
/*
equation index: 18116
type: WHEN

when {} then
  line_1012_1014a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18116};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[402]] /* $whenCondition461 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[402] /* $whenCondition461 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18116;
}
/*
equation index: 18118
type: SIMPLE_ASSIGN
$whenCondition463 = not line_1012_1014a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18118};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[404]] /* $whenCondition463 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18118;
}
/*
equation index: 18119
type: SIMPLE_ASSIGN
$whenCondition462 = line_1012_1014a.running.value and not pre(line_1012_1014a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18119};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[403]] /* $whenCondition462 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[616] /* line_1012_1014a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18119;
}
/*
equation index: 18120
type: WHEN

when {$whenCondition463} then
  line_1012_1014a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18120};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[404]] /* $whenCondition463 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[404] /* $whenCondition463 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[42]] /* line_1012_1014a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[403]] /* $whenCondition462 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[403] /* $whenCondition462 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[42]] /* line_1012_1014a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18120;
}
/*
equation index: 18122
type: SIMPLE_ASSIGN
$DAEres430 = if line_1012_1014a.running.value then 0.014023668639053254 * (line_1012_1014a.terminal1.i.re + 0.009025782999999999 * line_1012_1014a.terminal1.V.im - line_1012_1014a.YPu.re * line_1012_1014a.terminal1.V.re) + (-0.09000000000000001) * (line_1012_1014a.terminal1.i.im + (-0.009025782999999999) * line_1012_1014a.terminal1.V.re - line_1012_1014a.YPu.re * line_1012_1014a.terminal1.V.im) - (line_1012_1014a.terminal1.V.re - line_1013_1014a.terminal2.V.re) else line_1012_1014a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18122};
  (data->simulationInfo->daeModeData->residualVars[430]) /* $DAEres430 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18122;
}
/*
equation index: 18123
type: SIMPLE_ASSIGN
$DAEres1084 = if line_1012_1014a.running.value then 0.014023668639053254 * (line_1012_1014a.terminal1.i.im + (-0.009025782999999999) * line_1012_1014a.terminal1.V.re - line_1012_1014a.YPu.re * line_1012_1014a.terminal1.V.im) + 0.09000000000000001 * (line_1012_1014a.terminal1.i.re + 0.009025782999999999 * line_1012_1014a.terminal1.V.im - line_1012_1014a.YPu.re * line_1012_1014a.terminal1.V.re) - (line_1012_1014a.terminal1.V.im - line_1013_1014a.terminal2.V.im) else line_1012_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18123};
  (data->simulationInfo->daeModeData->residualVars[1084]) /* $DAEres1084 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18123;
}
/*
equation index: 18124
type: SIMPLE_ASSIGN
$DAEres1085 = if line_1012_1014a.running.value then 0.014023668639053254 * (line_1012_1014a.terminal2.i.im + (-0.009025782999999999) * line_1013_1014a.terminal2.V.re - line_1012_1014a.YPu.re * line_1013_1014a.terminal2.V.im) + 0.09000000000000001 * (line_1012_1014a.terminal2.i.re + 0.009025782999999999 * line_1013_1014a.terminal2.V.im - line_1012_1014a.YPu.re * line_1013_1014a.terminal2.V.re) - (line_1013_1014a.terminal2.V.im - line_1012_1014a.terminal1.V.im) else line_1012_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18124};
  (data->simulationInfo->daeModeData->residualVars[1085]) /* $DAEres1085 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) + (0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18124;
}
/*
equation index: 18125
type: SIMPLE_ASSIGN
$DAEres1086 = if line_1012_1014a.running.value then 0.014023668639053254 * (line_1012_1014a.terminal2.i.re + 0.009025782999999999 * line_1013_1014a.terminal2.V.im - line_1012_1014a.YPu.re * line_1013_1014a.terminal2.V.re) + (-0.09000000000000001) * (line_1012_1014a.terminal2.i.im + (-0.009025782999999999) * line_1013_1014a.terminal2.V.re - line_1012_1014a.YPu.re * line_1013_1014a.terminal2.V.im) - (line_1013_1014a.terminal2.V.re - line_1012_1014a.terminal1.V.re) else line_1012_1014a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18125};
  (data->simulationInfo->daeModeData->residualVars[1086]) /* $DAEres1086 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[616]] /* line_1012_1014a.running.value DISCRETE */)?(0.014023668639053254) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */) + (0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)))) + (-0.09000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */) + (-0.009025782999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* line_1012_1014a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18125;
}
/*
equation index: 18126
type: SIMPLE_ASSIGN
$whenCondition464 = not pre(line_1011_1013b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18126};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[405]] /* $whenCondition464 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[613] /* line_1011_1013b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18126;
}
/*
equation index: 18127
type: WHEN

when {} then
  line_1011_1013b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18127};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[405]] /* $whenCondition464 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[405] /* $whenCondition464 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18127;
}
/*
equation index: 18129
type: SIMPLE_ASSIGN
$whenCondition466 = not line_1011_1013b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18129};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[407]] /* $whenCondition466 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */));
  threadData->lastEquationSolved = 18129;
}
/*
equation index: 18130
type: SIMPLE_ASSIGN
$whenCondition465 = line_1011_1013b.running.value and not pre(line_1011_1013b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18130};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[406]] /* $whenCondition465 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[613] /* line_1011_1013b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18130;
}
/*
equation index: 18131
type: WHEN

when {$whenCondition466} then
  line_1011_1013b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18131};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[407]] /* $whenCondition466 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[407] /* $whenCondition466 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[41]] /* line_1011_1013b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[406]] /* $whenCondition465 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[406] /* $whenCondition465 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[41]] /* line_1011_1013b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18131;
}
/*
equation index: 18133
type: SIMPLE_ASSIGN
$DAEres474 = if line_1011_1013b.running.value then 0.01 * (line_1011_1013b.terminal1.i.im + (-0.006902129) * line_1011_1013a.terminal1.V.re - line_1011_1013b.YPu.re * line_1011_1013a.terminal1.V.im) + 0.07 * (line_1011_1013b.terminal1.i.re + 0.006902129 * line_1011_1013a.terminal1.V.im - line_1011_1013b.YPu.re * line_1011_1013a.terminal1.V.re) - (line_1011_1013a.terminal1.V.im - line_1013_1014a.terminal1.V.im) else line_1011_1013b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18133};
  (data->simulationInfo->daeModeData->residualVars[474]) /* $DAEres474 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)))) + (0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18133;
}
/*
equation index: 18134
type: SIMPLE_ASSIGN
$DAEres475 = if line_1011_1013b.running.value then 0.01 * (line_1011_1013b.terminal2.i.re + 0.006902129 * line_1013_1014a.terminal1.V.im - line_1011_1013b.YPu.re * line_1013_1014a.terminal1.V.re) + (-0.07) * (line_1011_1013b.terminal2.i.im + (-0.006902129) * line_1013_1014a.terminal1.V.re - line_1011_1013b.YPu.re * line_1013_1014a.terminal1.V.im) - (line_1013_1014a.terminal1.V.re - line_1011_1013a.terminal1.V.re) else line_1011_1013b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18134};
  (data->simulationInfo->daeModeData->residualVars[475]) /* $DAEres475 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) + (-0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18134;
}
/*
equation index: 18135
type: SIMPLE_ASSIGN
$DAEres476 = if line_1011_1013b.running.value then 0.01 * (line_1011_1013b.terminal1.i.re + 0.006902129 * line_1011_1013a.terminal1.V.im - line_1011_1013b.YPu.re * line_1011_1013a.terminal1.V.re) + (-0.07) * (line_1011_1013b.terminal1.i.im + (-0.006902129) * line_1011_1013a.terminal1.V.re - line_1011_1013b.YPu.re * line_1011_1013a.terminal1.V.im) - (line_1011_1013a.terminal1.V.re - line_1013_1014a.terminal1.V.re) else line_1011_1013b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18135};
  (data->simulationInfo->daeModeData->residualVars[476]) /* $DAEres476 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)))) + (-0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18135;
}
/*
equation index: 18136
type: SIMPLE_ASSIGN
$DAEres477 = if line_1011_1013b.running.value then 0.01 * (line_1011_1013b.terminal2.i.im + (-0.006902129) * line_1013_1014a.terminal1.V.re - line_1011_1013b.YPu.re * line_1013_1014a.terminal1.V.im) + 0.07 * (line_1011_1013b.terminal2.i.re + 0.006902129 * line_1013_1014a.terminal1.V.im - line_1011_1013b.YPu.re * line_1013_1014a.terminal1.V.re) - (line_1013_1014a.terminal1.V.im - line_1011_1013a.terminal1.V.im) else line_1011_1013b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18136};
  (data->simulationInfo->daeModeData->residualVars[477]) /* $DAEres477 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[613]] /* line_1011_1013b.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) + (0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* line_1011_1013b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18136;
}
/*
equation index: 18137
type: SIMPLE_ASSIGN
$whenCondition467 = not pre(line_1011_1013a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18137};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[408]] /* $whenCondition467 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[610] /* line_1011_1013a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18137;
}
/*
equation index: 18138
type: WHEN

when {} then
  line_1011_1013a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18138};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[408]] /* $whenCondition467 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[408] /* $whenCondition467 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 18138;
}
/*
equation index: 18140
type: SIMPLE_ASSIGN
$whenCondition469 = not line_1011_1013a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18140};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[410]] /* $whenCondition469 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */));
  threadData->lastEquationSolved = 18140;
}
/*
equation index: 18141
type: SIMPLE_ASSIGN
$whenCondition468 = line_1011_1013a.running.value and not pre(line_1011_1013a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18141};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[409]] /* $whenCondition468 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[610] /* line_1011_1013a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 18141;
}
/*
equation index: 18142
type: WHEN

when {$whenCondition469} then
  line_1011_1013a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18142};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[410]] /* $whenCondition469 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[410] /* $whenCondition469 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[40]] /* line_1011_1013a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[409]] /* $whenCondition468 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[409] /* $whenCondition468 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[40]] /* line_1011_1013a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 18142;
}
/*
equation index: 18144
type: SIMPLE_ASSIGN
$DAEres1055 = if line_1011_1013a.running.value then 0.01 * (line_1011_1013a.terminal1.i.im + (-0.006902129) * line_1011_1013a.terminal1.V.re - line_1011_1013a.YPu.re * line_1011_1013a.terminal1.V.im) + 0.07 * (line_1011_1013a.terminal1.i.re + 0.006902129 * line_1011_1013a.terminal1.V.im - line_1011_1013a.YPu.re * line_1011_1013a.terminal1.V.re) - (line_1011_1013a.terminal1.V.im - line_1013_1014a.terminal1.V.im) else line_1011_1013a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18144};
  (data->simulationInfo->daeModeData->residualVars[1055]) /* $DAEres1055 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)))) + (0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 18144;
}
/*
equation index: 18145
type: SIMPLE_ASSIGN
$DAEres1057 = if line_1011_1013a.running.value then 0.01 * (line_1011_1013a.terminal2.i.im + (-0.006902129) * line_1013_1014a.terminal1.V.re - line_1011_1013a.YPu.re * line_1013_1014a.terminal1.V.im) + 0.07 * (line_1011_1013a.terminal2.i.re + 0.006902129 * line_1013_1014a.terminal1.V.im - line_1011_1013a.YPu.re * line_1013_1014a.terminal1.V.re) - (line_1013_1014a.terminal1.V.im - line_1011_1013a.terminal1.V.im) else line_1011_1013a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18145};
  (data->simulationInfo->daeModeData->residualVars[1057]) /* $DAEres1057 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) + (0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 18145;
}
/*
equation index: 18146
type: SIMPLE_ASSIGN
$DAEres1058 = if line_1011_1013a.running.value then 0.01 * (line_1011_1013a.terminal1.i.re + 0.006902129 * line_1011_1013a.terminal1.V.im - line_1011_1013a.YPu.re * line_1011_1013a.terminal1.V.re) + (-0.07) * (line_1011_1013a.terminal1.i.im + (-0.006902129) * line_1011_1013a.terminal1.V.re - line_1011_1013a.YPu.re * line_1011_1013a.terminal1.V.im) - (line_1011_1013a.terminal1.V.re - line_1013_1014a.terminal1.V.re) else line_1011_1013a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18146};
  (data->simulationInfo->daeModeData->residualVars[1058]) /* $DAEres1058 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)))) + (-0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 18146;
}
/*
equation index: 18147
type: SIMPLE_ASSIGN
$DAEres1059 = if line_1011_1013a.running.value then 0.01 * (line_1011_1013a.terminal2.i.re + 0.006902129 * line_1013_1014a.terminal1.V.im - line_1011_1013a.YPu.re * line_1013_1014a.terminal1.V.re) + (-0.07) * (line_1011_1013a.terminal2.i.im + (-0.006902129) * line_1013_1014a.terminal1.V.re - line_1011_1013a.YPu.re * line_1013_1014a.terminal1.V.im) - (line_1013_1014a.terminal1.V.re - line_1011_1013a.terminal1.V.re) else line_1011_1013a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18147};
  (data->simulationInfo->daeModeData->residualVars[1059]) /* $DAEres1059 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[610]] /* line_1011_1013a.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */) + (0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)))) + (-0.07) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */) + (-0.006902129) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* line_1011_1013a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 18147;
}
/*
equation index: 18519
type: ALGORITHM

  assert(g01.SNom <> g01.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18519};
  static const MMC_DEFSTRINGLIT(tmp4504,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4505 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* g01.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g01.SNom <> g01.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4504)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4504)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18519;
}
/*
equation index: 18518
type: ALGORITHM

  assert(g02.SNom <> g02.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18518};
  static const MMC_DEFSTRINGLIT(tmp4506,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4507 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* g02.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g02.SNom <> g02.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4506)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4506)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18518;
}
/*
equation index: 18517
type: ALGORITHM

  assert(g03.SNom <> g03.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18517};
  static const MMC_DEFSTRINGLIT(tmp4508,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4509 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* g03.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g03.SNom <> g03.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4508)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4508)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18517;
}
/*
equation index: 18516
type: ALGORITHM

  assert(g04.SNom <> g04.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18516};
  static const MMC_DEFSTRINGLIT(tmp4510,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4511 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* g04.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g04.SNom <> g04.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4510)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4510)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18516;
}
/*
equation index: 18515
type: ALGORITHM

  assert(g05.SNom <> g05.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18515};
  static const MMC_DEFSTRINGLIT(tmp4512,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4513 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* g05.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g05.SNom <> g05.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4512)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4512)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18515;
}
/*
equation index: 18514
type: ALGORITHM

  assert(g06.SNom <> g06.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18514};
  static const MMC_DEFSTRINGLIT(tmp4514,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4515 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* g06.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g06.SNom <> g06.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4514)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4514)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18514;
}
/*
equation index: 18513
type: ALGORITHM

  assert(g07.SNom <> g07.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18513};
  static const MMC_DEFSTRINGLIT(tmp4516,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4517 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* g07.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g07.SNom <> g07.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4516)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4516)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18513;
}
/*
equation index: 18512
type: ALGORITHM

  assert(g08.SNom <> g08.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18512};
  static const MMC_DEFSTRINGLIT(tmp4518,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4519 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* g08.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g08.SNom <> g08.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4518)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4518)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18512;
}
/*
equation index: 18511
type: ALGORITHM

  assert(g09.SNom <> g09.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18511};
  static const MMC_DEFSTRINGLIT(tmp4520,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4521 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* g09.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g09.SNom <> g09.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4520)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4520)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18511;
}
/*
equation index: 18510
type: ALGORITHM

  assert(g10.SNom <> g10.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18510};
  static const MMC_DEFSTRINGLIT(tmp4522,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4523 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* g10.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g10.SNom <> g10.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4522)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4522)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18510;
}
/*
equation index: 18509
type: ALGORITHM

  assert(g11.SNom <> g11.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18509};
  static const MMC_DEFSTRINGLIT(tmp4524,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4525 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* g11.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g11.SNom <> g11.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4524)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4524)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18509;
}
/*
equation index: 18508
type: ALGORITHM

  assert(g12.SNom <> g12.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18508};
  static const MMC_DEFSTRINGLIT(tmp4526,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4527 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* g12.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g12.SNom <> g12.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4526)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4526)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18508;
}
/*
equation index: 18507
type: ALGORITHM

  assert(g13.SNom <> g13.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18507};
  static const MMC_DEFSTRINGLIT(tmp4528,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4529 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* g13.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g13.SNom <> g13.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4528)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4528)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18507;
}
/*
equation index: 18506
type: ALGORITHM

  assert(g14.SNom <> g14.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18506};
  static const MMC_DEFSTRINGLIT(tmp4530,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4531 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1576]] /* g14.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g14.SNom <> g14.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4530)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4530)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18506;
}
/*
equation index: 18505
type: ALGORITHM

  assert(g15.SNom <> g15.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18505};
  static const MMC_DEFSTRINGLIT(tmp4532,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4533 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* g15.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g15.SNom <> g15.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4532)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4532)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18505;
}
/*
equation index: 18504
type: ALGORITHM

  assert(g16.SNom <> g16.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18504};
  static const MMC_DEFSTRINGLIT(tmp4534,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4535 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* g16.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g16.SNom <> g16.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4534)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4534)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18504;
}
/*
equation index: 18503
type: ALGORITHM

  assert(g17.SNom <> g17.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18503};
  static const MMC_DEFSTRINGLIT(tmp4536,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4537 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* g17.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g17.SNom <> g17.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4536)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4536)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18503;
}
/*
equation index: 18502
type: ALGORITHM

  assert(g18.SNom <> g18.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18502};
  static const MMC_DEFSTRINGLIT(tmp4538,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4539 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1988]] /* g18.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g18.SNom <> g18.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4538)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4538)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18502;
}
/*
equation index: 18501
type: ALGORITHM

  assert(g19.SNom <> g19.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18501};
  static const MMC_DEFSTRINGLIT(tmp4540,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4541 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2091]] /* g19.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g19.SNom <> g19.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4540)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4540)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18501;
}
/*
equation index: 18500
type: ALGORITHM

  assert(g20.SNom <> g20.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18500};
  static const MMC_DEFSTRINGLIT(tmp4542,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp4543 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2192]] /* g20.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g20.SNom <> g20.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4542)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp4542)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18500;
}
/*
equation index: 18499
type: ALGORITHM

  assert(vrNordic_g01.limiter.uMax >= vrNordic_g01.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g01.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g01.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18499};
  modelica_boolean tmp4544;
  static const MMC_DEFSTRINGLIT(tmp4545,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4546;
  modelica_metatype tmpMeta4547;
  static const MMC_DEFSTRINGLIT(tmp4548,11,") < uMin (=");
  modelica_metatype tmpMeta4549;
  modelica_string tmp4550;
  modelica_metatype tmpMeta4551;
  modelica_metatype tmpMeta4552;
  static int tmp4553 = 0;
  {
    tmp4544 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */));
    if(!tmp4544)
    {
      tmp4546 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4547 = stringAppend(MMC_REFSTRINGLIT(tmp4545),tmp4546);
      tmpMeta4549 = stringAppend(tmpMeta4547,MMC_REFSTRINGLIT(tmp4548));
      tmp4550 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4551 = stringAppend(tmpMeta4549,tmp4550);
      tmpMeta4552 = stringAppend(tmpMeta4551,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g01.limiter.uMax >= vrNordic_g01.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4552));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4552));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18499;
}
/*
equation index: 18498
type: ALGORITHM

  assert(goverNordic_g01.limRateLimFirstOrder.limiter.uMax >= goverNordic_g01.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g01.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g01.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18498};
  modelica_boolean tmp4554;
  static const MMC_DEFSTRINGLIT(tmp4555,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4556;
  modelica_metatype tmpMeta4557;
  static const MMC_DEFSTRINGLIT(tmp4558,11,") < uMin (=");
  modelica_metatype tmpMeta4559;
  modelica_string tmp4560;
  modelica_metatype tmpMeta4561;
  modelica_metatype tmpMeta4562;
  static int tmp4563 = 0;
  {
    tmp4554 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4554)
    {
      tmp4556 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4557 = stringAppend(MMC_REFSTRINGLIT(tmp4555),tmp4556);
      tmpMeta4559 = stringAppend(tmpMeta4557,MMC_REFSTRINGLIT(tmp4558));
      tmp4560 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4561 = stringAppend(tmpMeta4559,tmp4560);
      tmpMeta4562 = stringAppend(tmpMeta4561,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g01.limRateLimFirstOrder.limiter.uMax >= goverNordic_g01.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4562));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4562));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18498;
}
/*
equation index: 18497
type: ALGORITHM

  assert(vrNordic_g02.limiter.uMax >= vrNordic_g02.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g02.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g02.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18497};
  modelica_boolean tmp4564;
  static const MMC_DEFSTRINGLIT(tmp4565,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4566;
  modelica_metatype tmpMeta4567;
  static const MMC_DEFSTRINGLIT(tmp4568,11,") < uMin (=");
  modelica_metatype tmpMeta4569;
  modelica_string tmp4570;
  modelica_metatype tmpMeta4571;
  modelica_metatype tmpMeta4572;
  static int tmp4573 = 0;
  {
    tmp4564 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */));
    if(!tmp4564)
    {
      tmp4566 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4567 = stringAppend(MMC_REFSTRINGLIT(tmp4565),tmp4566);
      tmpMeta4569 = stringAppend(tmpMeta4567,MMC_REFSTRINGLIT(tmp4568));
      tmp4570 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4571 = stringAppend(tmpMeta4569,tmp4570);
      tmpMeta4572 = stringAppend(tmpMeta4571,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g02.limiter.uMax >= vrNordic_g02.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4572));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4572));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18497;
}
/*
equation index: 18496
type: ALGORITHM

  assert(goverNordic_g02.limRateLimFirstOrder.limiter.uMax >= goverNordic_g02.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g02.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g02.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18496};
  modelica_boolean tmp4574;
  static const MMC_DEFSTRINGLIT(tmp4575,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4576;
  modelica_metatype tmpMeta4577;
  static const MMC_DEFSTRINGLIT(tmp4578,11,") < uMin (=");
  modelica_metatype tmpMeta4579;
  modelica_string tmp4580;
  modelica_metatype tmpMeta4581;
  modelica_metatype tmpMeta4582;
  static int tmp4583 = 0;
  {
    tmp4574 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4574)
    {
      tmp4576 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4577 = stringAppend(MMC_REFSTRINGLIT(tmp4575),tmp4576);
      tmpMeta4579 = stringAppend(tmpMeta4577,MMC_REFSTRINGLIT(tmp4578));
      tmp4580 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4581 = stringAppend(tmpMeta4579,tmp4580);
      tmpMeta4582 = stringAppend(tmpMeta4581,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g02.limRateLimFirstOrder.limiter.uMax >= goverNordic_g02.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4582));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4582));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18496;
}
/*
equation index: 18495
type: ALGORITHM

  assert(vrNordic_g03.limiter.uMax >= vrNordic_g03.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g03.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g03.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18495};
  modelica_boolean tmp4584;
  static const MMC_DEFSTRINGLIT(tmp4585,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4586;
  modelica_metatype tmpMeta4587;
  static const MMC_DEFSTRINGLIT(tmp4588,11,") < uMin (=");
  modelica_metatype tmpMeta4589;
  modelica_string tmp4590;
  modelica_metatype tmpMeta4591;
  modelica_metatype tmpMeta4592;
  static int tmp4593 = 0;
  {
    tmp4584 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */));
    if(!tmp4584)
    {
      tmp4586 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4587 = stringAppend(MMC_REFSTRINGLIT(tmp4585),tmp4586);
      tmpMeta4589 = stringAppend(tmpMeta4587,MMC_REFSTRINGLIT(tmp4588));
      tmp4590 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4591 = stringAppend(tmpMeta4589,tmp4590);
      tmpMeta4592 = stringAppend(tmpMeta4591,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g03.limiter.uMax >= vrNordic_g03.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4592));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4592));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18495;
}
/*
equation index: 18494
type: ALGORITHM

  assert(goverNordic_g03.limRateLimFirstOrder.limiter.uMax >= goverNordic_g03.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g03.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g03.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18494};
  modelica_boolean tmp4594;
  static const MMC_DEFSTRINGLIT(tmp4595,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4596;
  modelica_metatype tmpMeta4597;
  static const MMC_DEFSTRINGLIT(tmp4598,11,") < uMin (=");
  modelica_metatype tmpMeta4599;
  modelica_string tmp4600;
  modelica_metatype tmpMeta4601;
  modelica_metatype tmpMeta4602;
  static int tmp4603 = 0;
  {
    tmp4594 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4594)
    {
      tmp4596 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4597 = stringAppend(MMC_REFSTRINGLIT(tmp4595),tmp4596);
      tmpMeta4599 = stringAppend(tmpMeta4597,MMC_REFSTRINGLIT(tmp4598));
      tmp4600 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4601 = stringAppend(tmpMeta4599,tmp4600);
      tmpMeta4602 = stringAppend(tmpMeta4601,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g03.limRateLimFirstOrder.limiter.uMax >= goverNordic_g03.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4602));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4602));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18494;
}
/*
equation index: 18493
type: ALGORITHM

  assert(vrNordic_g04.limiter.uMax >= vrNordic_g04.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g04.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g04.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18493};
  modelica_boolean tmp4604;
  static const MMC_DEFSTRINGLIT(tmp4605,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4606;
  modelica_metatype tmpMeta4607;
  static const MMC_DEFSTRINGLIT(tmp4608,11,") < uMin (=");
  modelica_metatype tmpMeta4609;
  modelica_string tmp4610;
  modelica_metatype tmpMeta4611;
  modelica_metatype tmpMeta4612;
  static int tmp4613 = 0;
  {
    tmp4604 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */));
    if(!tmp4604)
    {
      tmp4606 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4607 = stringAppend(MMC_REFSTRINGLIT(tmp4605),tmp4606);
      tmpMeta4609 = stringAppend(tmpMeta4607,MMC_REFSTRINGLIT(tmp4608));
      tmp4610 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4611 = stringAppend(tmpMeta4609,tmp4610);
      tmpMeta4612 = stringAppend(tmpMeta4611,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g04.limiter.uMax >= vrNordic_g04.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4612));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4612));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18493;
}
/*
equation index: 18492
type: ALGORITHM

  assert(goverNordic_g04.limRateLimFirstOrder.limiter.uMax >= goverNordic_g04.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g04.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g04.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18492};
  modelica_boolean tmp4614;
  static const MMC_DEFSTRINGLIT(tmp4615,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4616;
  modelica_metatype tmpMeta4617;
  static const MMC_DEFSTRINGLIT(tmp4618,11,") < uMin (=");
  modelica_metatype tmpMeta4619;
  modelica_string tmp4620;
  modelica_metatype tmpMeta4621;
  modelica_metatype tmpMeta4622;
  static int tmp4623 = 0;
  {
    tmp4614 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4614)
    {
      tmp4616 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4617 = stringAppend(MMC_REFSTRINGLIT(tmp4615),tmp4616);
      tmpMeta4619 = stringAppend(tmpMeta4617,MMC_REFSTRINGLIT(tmp4618));
      tmp4620 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4621 = stringAppend(tmpMeta4619,tmp4620);
      tmpMeta4622 = stringAppend(tmpMeta4621,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g04.limRateLimFirstOrder.limiter.uMax >= goverNordic_g04.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4622));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4622));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18492;
}
/*
equation index: 18491
type: ALGORITHM

  assert(vrNordic_g05.limiter.uMax >= vrNordic_g05.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g05.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g05.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18491};
  modelica_boolean tmp4624;
  static const MMC_DEFSTRINGLIT(tmp4625,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4626;
  modelica_metatype tmpMeta4627;
  static const MMC_DEFSTRINGLIT(tmp4628,11,") < uMin (=");
  modelica_metatype tmpMeta4629;
  modelica_string tmp4630;
  modelica_metatype tmpMeta4631;
  modelica_metatype tmpMeta4632;
  static int tmp4633 = 0;
  {
    tmp4624 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */));
    if(!tmp4624)
    {
      tmp4626 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4627 = stringAppend(MMC_REFSTRINGLIT(tmp4625),tmp4626);
      tmpMeta4629 = stringAppend(tmpMeta4627,MMC_REFSTRINGLIT(tmp4628));
      tmp4630 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4631 = stringAppend(tmpMeta4629,tmp4630);
      tmpMeta4632 = stringAppend(tmpMeta4631,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g05.limiter.uMax >= vrNordic_g05.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4632));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4632));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18491;
}
/*
equation index: 18490
type: ALGORITHM

  assert(goverNordic_g05.limRateLimFirstOrder.limiter.uMax >= goverNordic_g05.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g05.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g05.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18490};
  modelica_boolean tmp4634;
  static const MMC_DEFSTRINGLIT(tmp4635,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4636;
  modelica_metatype tmpMeta4637;
  static const MMC_DEFSTRINGLIT(tmp4638,11,") < uMin (=");
  modelica_metatype tmpMeta4639;
  modelica_string tmp4640;
  modelica_metatype tmpMeta4641;
  modelica_metatype tmpMeta4642;
  static int tmp4643 = 0;
  {
    tmp4634 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4634)
    {
      tmp4636 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4637 = stringAppend(MMC_REFSTRINGLIT(tmp4635),tmp4636);
      tmpMeta4639 = stringAppend(tmpMeta4637,MMC_REFSTRINGLIT(tmp4638));
      tmp4640 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4641 = stringAppend(tmpMeta4639,tmp4640);
      tmpMeta4642 = stringAppend(tmpMeta4641,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g05.limRateLimFirstOrder.limiter.uMax >= goverNordic_g05.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4642));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4642));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18490;
}
/*
equation index: 18489
type: ALGORITHM

  assert(vrNordic_g06.limiter.uMax >= vrNordic_g06.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g06.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g06.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18489};
  modelica_boolean tmp4644;
  static const MMC_DEFSTRINGLIT(tmp4645,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4646;
  modelica_metatype tmpMeta4647;
  static const MMC_DEFSTRINGLIT(tmp4648,11,") < uMin (=");
  modelica_metatype tmpMeta4649;
  modelica_string tmp4650;
  modelica_metatype tmpMeta4651;
  modelica_metatype tmpMeta4652;
  static int tmp4653 = 0;
  {
    tmp4644 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */));
    if(!tmp4644)
    {
      tmp4646 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4647 = stringAppend(MMC_REFSTRINGLIT(tmp4645),tmp4646);
      tmpMeta4649 = stringAppend(tmpMeta4647,MMC_REFSTRINGLIT(tmp4648));
      tmp4650 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4651 = stringAppend(tmpMeta4649,tmp4650);
      tmpMeta4652 = stringAppend(tmpMeta4651,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g06.limiter.uMax >= vrNordic_g06.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4652));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4652));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18489;
}
/*
equation index: 18488
type: ALGORITHM

  assert(goverNordic_g06.limRateLimFirstOrder.limiter.uMax >= goverNordic_g06.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g06.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g06.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18488};
  modelica_boolean tmp4654;
  static const MMC_DEFSTRINGLIT(tmp4655,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4656;
  modelica_metatype tmpMeta4657;
  static const MMC_DEFSTRINGLIT(tmp4658,11,") < uMin (=");
  modelica_metatype tmpMeta4659;
  modelica_string tmp4660;
  modelica_metatype tmpMeta4661;
  modelica_metatype tmpMeta4662;
  static int tmp4663 = 0;
  {
    tmp4654 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4654)
    {
      tmp4656 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4657 = stringAppend(MMC_REFSTRINGLIT(tmp4655),tmp4656);
      tmpMeta4659 = stringAppend(tmpMeta4657,MMC_REFSTRINGLIT(tmp4658));
      tmp4660 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4661 = stringAppend(tmpMeta4659,tmp4660);
      tmpMeta4662 = stringAppend(tmpMeta4661,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g06.limRateLimFirstOrder.limiter.uMax >= goverNordic_g06.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4662));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4662));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18488;
}
/*
equation index: 18487
type: ALGORITHM

  assert(vrNordic_g07.limiter.uMax >= vrNordic_g07.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g07.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g07.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18487};
  modelica_boolean tmp4664;
  static const MMC_DEFSTRINGLIT(tmp4665,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4666;
  modelica_metatype tmpMeta4667;
  static const MMC_DEFSTRINGLIT(tmp4668,11,") < uMin (=");
  modelica_metatype tmpMeta4669;
  modelica_string tmp4670;
  modelica_metatype tmpMeta4671;
  modelica_metatype tmpMeta4672;
  static int tmp4673 = 0;
  {
    tmp4664 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */));
    if(!tmp4664)
    {
      tmp4666 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4667 = stringAppend(MMC_REFSTRINGLIT(tmp4665),tmp4666);
      tmpMeta4669 = stringAppend(tmpMeta4667,MMC_REFSTRINGLIT(tmp4668));
      tmp4670 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4671 = stringAppend(tmpMeta4669,tmp4670);
      tmpMeta4672 = stringAppend(tmpMeta4671,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g07.limiter.uMax >= vrNordic_g07.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4672));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4672));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18487;
}
/*
equation index: 18486
type: ALGORITHM

  assert(goverNordic_g07.limRateLimFirstOrder.limiter.uMax >= goverNordic_g07.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g07.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g07.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18486};
  modelica_boolean tmp4674;
  static const MMC_DEFSTRINGLIT(tmp4675,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4676;
  modelica_metatype tmpMeta4677;
  static const MMC_DEFSTRINGLIT(tmp4678,11,") < uMin (=");
  modelica_metatype tmpMeta4679;
  modelica_string tmp4680;
  modelica_metatype tmpMeta4681;
  modelica_metatype tmpMeta4682;
  static int tmp4683 = 0;
  {
    tmp4674 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4674)
    {
      tmp4676 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4677 = stringAppend(MMC_REFSTRINGLIT(tmp4675),tmp4676);
      tmpMeta4679 = stringAppend(tmpMeta4677,MMC_REFSTRINGLIT(tmp4678));
      tmp4680 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4681 = stringAppend(tmpMeta4679,tmp4680);
      tmpMeta4682 = stringAppend(tmpMeta4681,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g07.limRateLimFirstOrder.limiter.uMax >= goverNordic_g07.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4682));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4682));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18486;
}
/*
equation index: 18485
type: ALGORITHM

  assert(vrNordic_g08.limiter.uMax >= vrNordic_g08.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g08.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g08.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18485};
  modelica_boolean tmp4684;
  static const MMC_DEFSTRINGLIT(tmp4685,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4686;
  modelica_metatype tmpMeta4687;
  static const MMC_DEFSTRINGLIT(tmp4688,11,") < uMin (=");
  modelica_metatype tmpMeta4689;
  modelica_string tmp4690;
  modelica_metatype tmpMeta4691;
  modelica_metatype tmpMeta4692;
  static int tmp4693 = 0;
  {
    tmp4684 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */));
    if(!tmp4684)
    {
      tmp4686 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4687 = stringAppend(MMC_REFSTRINGLIT(tmp4685),tmp4686);
      tmpMeta4689 = stringAppend(tmpMeta4687,MMC_REFSTRINGLIT(tmp4688));
      tmp4690 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4691 = stringAppend(tmpMeta4689,tmp4690);
      tmpMeta4692 = stringAppend(tmpMeta4691,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g08.limiter.uMax >= vrNordic_g08.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4692));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4692));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18485;
}
/*
equation index: 18484
type: ALGORITHM

  assert(goverNordic_g08.limRateLimFirstOrder.limiter.uMax >= goverNordic_g08.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g08.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g08.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18484};
  modelica_boolean tmp4694;
  static const MMC_DEFSTRINGLIT(tmp4695,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4696;
  modelica_metatype tmpMeta4697;
  static const MMC_DEFSTRINGLIT(tmp4698,11,") < uMin (=");
  modelica_metatype tmpMeta4699;
  modelica_string tmp4700;
  modelica_metatype tmpMeta4701;
  modelica_metatype tmpMeta4702;
  static int tmp4703 = 0;
  {
    tmp4694 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4694)
    {
      tmp4696 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4697 = stringAppend(MMC_REFSTRINGLIT(tmp4695),tmp4696);
      tmpMeta4699 = stringAppend(tmpMeta4697,MMC_REFSTRINGLIT(tmp4698));
      tmp4700 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4701 = stringAppend(tmpMeta4699,tmp4700);
      tmpMeta4702 = stringAppend(tmpMeta4701,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g08.limRateLimFirstOrder.limiter.uMax >= goverNordic_g08.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4702));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4702));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18484;
}
/*
equation index: 18483
type: ALGORITHM

  assert(vrNordic_g09.limiter.uMax >= vrNordic_g09.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g09.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g09.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18483};
  modelica_boolean tmp4704;
  static const MMC_DEFSTRINGLIT(tmp4705,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4706;
  modelica_metatype tmpMeta4707;
  static const MMC_DEFSTRINGLIT(tmp4708,11,") < uMin (=");
  modelica_metatype tmpMeta4709;
  modelica_string tmp4710;
  modelica_metatype tmpMeta4711;
  modelica_metatype tmpMeta4712;
  static int tmp4713 = 0;
  {
    tmp4704 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */));
    if(!tmp4704)
    {
      tmp4706 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4707 = stringAppend(MMC_REFSTRINGLIT(tmp4705),tmp4706);
      tmpMeta4709 = stringAppend(tmpMeta4707,MMC_REFSTRINGLIT(tmp4708));
      tmp4710 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4711 = stringAppend(tmpMeta4709,tmp4710);
      tmpMeta4712 = stringAppend(tmpMeta4711,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g09.limiter.uMax >= vrNordic_g09.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4712));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4712));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18483;
}
/*
equation index: 18482
type: ALGORITHM

  assert(goverNordic_g09.limRateLimFirstOrder.limiter.uMax >= goverNordic_g09.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g09.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g09.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18482};
  modelica_boolean tmp4714;
  static const MMC_DEFSTRINGLIT(tmp4715,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4716;
  modelica_metatype tmpMeta4717;
  static const MMC_DEFSTRINGLIT(tmp4718,11,") < uMin (=");
  modelica_metatype tmpMeta4719;
  modelica_string tmp4720;
  modelica_metatype tmpMeta4721;
  modelica_metatype tmpMeta4722;
  static int tmp4723 = 0;
  {
    tmp4714 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4714)
    {
      tmp4716 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4717 = stringAppend(MMC_REFSTRINGLIT(tmp4715),tmp4716);
      tmpMeta4719 = stringAppend(tmpMeta4717,MMC_REFSTRINGLIT(tmp4718));
      tmp4720 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4721 = stringAppend(tmpMeta4719,tmp4720);
      tmpMeta4722 = stringAppend(tmpMeta4721,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g09.limRateLimFirstOrder.limiter.uMax >= goverNordic_g09.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4722));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4722));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18482;
}
/*
equation index: 18481
type: ALGORITHM

  assert(vrNordic_g10.limiter.uMax >= vrNordic_g10.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g10.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g10.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18481};
  modelica_boolean tmp4724;
  static const MMC_DEFSTRINGLIT(tmp4725,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4726;
  modelica_metatype tmpMeta4727;
  static const MMC_DEFSTRINGLIT(tmp4728,11,") < uMin (=");
  modelica_metatype tmpMeta4729;
  modelica_string tmp4730;
  modelica_metatype tmpMeta4731;
  modelica_metatype tmpMeta4732;
  static int tmp4733 = 0;
  {
    tmp4724 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */));
    if(!tmp4724)
    {
      tmp4726 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4727 = stringAppend(MMC_REFSTRINGLIT(tmp4725),tmp4726);
      tmpMeta4729 = stringAppend(tmpMeta4727,MMC_REFSTRINGLIT(tmp4728));
      tmp4730 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4731 = stringAppend(tmpMeta4729,tmp4730);
      tmpMeta4732 = stringAppend(tmpMeta4731,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g10.limiter.uMax >= vrNordic_g10.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4732));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4732));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18481;
}
/*
equation index: 18480
type: ALGORITHM

  assert(goverNordic_g10.limRateLimFirstOrder.limiter.uMax >= goverNordic_g10.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g10.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g10.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18480};
  modelica_boolean tmp4734;
  static const MMC_DEFSTRINGLIT(tmp4735,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4736;
  modelica_metatype tmpMeta4737;
  static const MMC_DEFSTRINGLIT(tmp4738,11,") < uMin (=");
  modelica_metatype tmpMeta4739;
  modelica_string tmp4740;
  modelica_metatype tmpMeta4741;
  modelica_metatype tmpMeta4742;
  static int tmp4743 = 0;
  {
    tmp4734 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4734)
    {
      tmp4736 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4737 = stringAppend(MMC_REFSTRINGLIT(tmp4735),tmp4736);
      tmpMeta4739 = stringAppend(tmpMeta4737,MMC_REFSTRINGLIT(tmp4738));
      tmp4740 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4741 = stringAppend(tmpMeta4739,tmp4740);
      tmpMeta4742 = stringAppend(tmpMeta4741,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g10.limRateLimFirstOrder.limiter.uMax >= goverNordic_g10.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4742));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4742));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18480;
}
/*
equation index: 18479
type: ALGORITHM

  assert(vrNordic_g11.limiter.uMax >= vrNordic_g11.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g11.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g11.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18479};
  modelica_boolean tmp4744;
  static const MMC_DEFSTRINGLIT(tmp4745,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4746;
  modelica_metatype tmpMeta4747;
  static const MMC_DEFSTRINGLIT(tmp4748,11,") < uMin (=");
  modelica_metatype tmpMeta4749;
  modelica_string tmp4750;
  modelica_metatype tmpMeta4751;
  modelica_metatype tmpMeta4752;
  static int tmp4753 = 0;
  {
    tmp4744 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */));
    if(!tmp4744)
    {
      tmp4746 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4747 = stringAppend(MMC_REFSTRINGLIT(tmp4745),tmp4746);
      tmpMeta4749 = stringAppend(tmpMeta4747,MMC_REFSTRINGLIT(tmp4748));
      tmp4750 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4751 = stringAppend(tmpMeta4749,tmp4750);
      tmpMeta4752 = stringAppend(tmpMeta4751,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g11.limiter.uMax >= vrNordic_g11.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4752));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4752));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18479;
}
/*
equation index: 18478
type: ALGORITHM

  assert(goverNordic_g11.limRateLimFirstOrder.limiter.uMax >= goverNordic_g11.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g11.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g11.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18478};
  modelica_boolean tmp4754;
  static const MMC_DEFSTRINGLIT(tmp4755,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4756;
  modelica_metatype tmpMeta4757;
  static const MMC_DEFSTRINGLIT(tmp4758,11,") < uMin (=");
  modelica_metatype tmpMeta4759;
  modelica_string tmp4760;
  modelica_metatype tmpMeta4761;
  modelica_metatype tmpMeta4762;
  static int tmp4763 = 0;
  {
    tmp4754 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4754)
    {
      tmp4756 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4757 = stringAppend(MMC_REFSTRINGLIT(tmp4755),tmp4756);
      tmpMeta4759 = stringAppend(tmpMeta4757,MMC_REFSTRINGLIT(tmp4758));
      tmp4760 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4761 = stringAppend(tmpMeta4759,tmp4760);
      tmpMeta4762 = stringAppend(tmpMeta4761,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g11.limRateLimFirstOrder.limiter.uMax >= goverNordic_g11.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4762));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4762));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18478;
}
/*
equation index: 18477
type: ALGORITHM

  assert(vrNordic_g12.limiter.uMax >= vrNordic_g12.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g12.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g12.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18477};
  modelica_boolean tmp4764;
  static const MMC_DEFSTRINGLIT(tmp4765,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4766;
  modelica_metatype tmpMeta4767;
  static const MMC_DEFSTRINGLIT(tmp4768,11,") < uMin (=");
  modelica_metatype tmpMeta4769;
  modelica_string tmp4770;
  modelica_metatype tmpMeta4771;
  modelica_metatype tmpMeta4772;
  static int tmp4773 = 0;
  {
    tmp4764 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */));
    if(!tmp4764)
    {
      tmp4766 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4767 = stringAppend(MMC_REFSTRINGLIT(tmp4765),tmp4766);
      tmpMeta4769 = stringAppend(tmpMeta4767,MMC_REFSTRINGLIT(tmp4768));
      tmp4770 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4771 = stringAppend(tmpMeta4769,tmp4770);
      tmpMeta4772 = stringAppend(tmpMeta4771,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g12.limiter.uMax >= vrNordic_g12.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4772));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4772));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18477;
}
/*
equation index: 18476
type: ALGORITHM

  assert(goverNordic_g12.limRateLimFirstOrder.limiter.uMax >= goverNordic_g12.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g12.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g12.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18476};
  modelica_boolean tmp4774;
  static const MMC_DEFSTRINGLIT(tmp4775,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4776;
  modelica_metatype tmpMeta4777;
  static const MMC_DEFSTRINGLIT(tmp4778,11,") < uMin (=");
  modelica_metatype tmpMeta4779;
  modelica_string tmp4780;
  modelica_metatype tmpMeta4781;
  modelica_metatype tmpMeta4782;
  static int tmp4783 = 0;
  {
    tmp4774 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4774)
    {
      tmp4776 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4777 = stringAppend(MMC_REFSTRINGLIT(tmp4775),tmp4776);
      tmpMeta4779 = stringAppend(tmpMeta4777,MMC_REFSTRINGLIT(tmp4778));
      tmp4780 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4781 = stringAppend(tmpMeta4779,tmp4780);
      tmpMeta4782 = stringAppend(tmpMeta4781,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g12.limRateLimFirstOrder.limiter.uMax >= goverNordic_g12.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4782));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4782));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18476;
}
/*
equation index: 18475
type: ALGORITHM

  assert(vrNordic_g13.limiter.uMax >= vrNordic_g13.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g13.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g13.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18475};
  modelica_boolean tmp4784;
  static const MMC_DEFSTRINGLIT(tmp4785,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4786;
  modelica_metatype tmpMeta4787;
  static const MMC_DEFSTRINGLIT(tmp4788,11,") < uMin (=");
  modelica_metatype tmpMeta4789;
  modelica_string tmp4790;
  modelica_metatype tmpMeta4791;
  modelica_metatype tmpMeta4792;
  static int tmp4793 = 0;
  {
    tmp4784 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */));
    if(!tmp4784)
    {
      tmp4786 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4787 = stringAppend(MMC_REFSTRINGLIT(tmp4785),tmp4786);
      tmpMeta4789 = stringAppend(tmpMeta4787,MMC_REFSTRINGLIT(tmp4788));
      tmp4790 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4791 = stringAppend(tmpMeta4789,tmp4790);
      tmpMeta4792 = stringAppend(tmpMeta4791,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g13.limiter.uMax >= vrNordic_g13.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4792));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4792));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18475;
}
/*
equation index: 18474
type: ALGORITHM

  assert(goverNordic_g13.limRateLimFirstOrder.limiter.uMax >= goverNordic_g13.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g13.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g13.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18474};
  modelica_boolean tmp4794;
  static const MMC_DEFSTRINGLIT(tmp4795,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4796;
  modelica_metatype tmpMeta4797;
  static const MMC_DEFSTRINGLIT(tmp4798,11,") < uMin (=");
  modelica_metatype tmpMeta4799;
  modelica_string tmp4800;
  modelica_metatype tmpMeta4801;
  modelica_metatype tmpMeta4802;
  static int tmp4803 = 0;
  {
    tmp4794 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4794)
    {
      tmp4796 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4797 = stringAppend(MMC_REFSTRINGLIT(tmp4795),tmp4796);
      tmpMeta4799 = stringAppend(tmpMeta4797,MMC_REFSTRINGLIT(tmp4798));
      tmp4800 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4801 = stringAppend(tmpMeta4799,tmp4800);
      tmpMeta4802 = stringAppend(tmpMeta4801,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g13.limRateLimFirstOrder.limiter.uMax >= goverNordic_g13.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4802));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4802));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18474;
}
/*
equation index: 18473
type: ALGORITHM

  assert(vrNordic_g14.limiter.uMax >= vrNordic_g14.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g14.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g14.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18473};
  modelica_boolean tmp4804;
  static const MMC_DEFSTRINGLIT(tmp4805,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4806;
  modelica_metatype tmpMeta4807;
  static const MMC_DEFSTRINGLIT(tmp4808,11,") < uMin (=");
  modelica_metatype tmpMeta4809;
  modelica_string tmp4810;
  modelica_metatype tmpMeta4811;
  modelica_metatype tmpMeta4812;
  static int tmp4813 = 0;
  {
    tmp4804 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */));
    if(!tmp4804)
    {
      tmp4806 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4807 = stringAppend(MMC_REFSTRINGLIT(tmp4805),tmp4806);
      tmpMeta4809 = stringAppend(tmpMeta4807,MMC_REFSTRINGLIT(tmp4808));
      tmp4810 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4811 = stringAppend(tmpMeta4809,tmp4810);
      tmpMeta4812 = stringAppend(tmpMeta4811,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g14.limiter.uMax >= vrNordic_g14.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4812));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4812));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18473;
}
/*
equation index: 18472
type: ALGORITHM

  assert(goverNordic_g14.limRateLimFirstOrder.limiter.uMax >= goverNordic_g14.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g14.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g14.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18472};
  modelica_boolean tmp4814;
  static const MMC_DEFSTRINGLIT(tmp4815,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4816;
  modelica_metatype tmpMeta4817;
  static const MMC_DEFSTRINGLIT(tmp4818,11,") < uMin (=");
  modelica_metatype tmpMeta4819;
  modelica_string tmp4820;
  modelica_metatype tmpMeta4821;
  modelica_metatype tmpMeta4822;
  static int tmp4823 = 0;
  {
    tmp4814 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4814)
    {
      tmp4816 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4817 = stringAppend(MMC_REFSTRINGLIT(tmp4815),tmp4816);
      tmpMeta4819 = stringAppend(tmpMeta4817,MMC_REFSTRINGLIT(tmp4818));
      tmp4820 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4821 = stringAppend(tmpMeta4819,tmp4820);
      tmpMeta4822 = stringAppend(tmpMeta4821,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g14.limRateLimFirstOrder.limiter.uMax >= goverNordic_g14.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4822));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4822));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18472;
}
/*
equation index: 18471
type: ALGORITHM

  assert(vrNordic_g15.limiter.uMax >= vrNordic_g15.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g15.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g15.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18471};
  modelica_boolean tmp4824;
  static const MMC_DEFSTRINGLIT(tmp4825,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4826;
  modelica_metatype tmpMeta4827;
  static const MMC_DEFSTRINGLIT(tmp4828,11,") < uMin (=");
  modelica_metatype tmpMeta4829;
  modelica_string tmp4830;
  modelica_metatype tmpMeta4831;
  modelica_metatype tmpMeta4832;
  static int tmp4833 = 0;
  {
    tmp4824 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */));
    if(!tmp4824)
    {
      tmp4826 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4827 = stringAppend(MMC_REFSTRINGLIT(tmp4825),tmp4826);
      tmpMeta4829 = stringAppend(tmpMeta4827,MMC_REFSTRINGLIT(tmp4828));
      tmp4830 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4831 = stringAppend(tmpMeta4829,tmp4830);
      tmpMeta4832 = stringAppend(tmpMeta4831,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g15.limiter.uMax >= vrNordic_g15.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4832));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4832));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18471;
}
/*
equation index: 18470
type: ALGORITHM

  assert(goverNordic_g15.limRateLimFirstOrder.limiter.uMax >= goverNordic_g15.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g15.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g15.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18470};
  modelica_boolean tmp4834;
  static const MMC_DEFSTRINGLIT(tmp4835,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4836;
  modelica_metatype tmpMeta4837;
  static const MMC_DEFSTRINGLIT(tmp4838,11,") < uMin (=");
  modelica_metatype tmpMeta4839;
  modelica_string tmp4840;
  modelica_metatype tmpMeta4841;
  modelica_metatype tmpMeta4842;
  static int tmp4843 = 0;
  {
    tmp4834 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4834)
    {
      tmp4836 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4837 = stringAppend(MMC_REFSTRINGLIT(tmp4835),tmp4836);
      tmpMeta4839 = stringAppend(tmpMeta4837,MMC_REFSTRINGLIT(tmp4838));
      tmp4840 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4841 = stringAppend(tmpMeta4839,tmp4840);
      tmpMeta4842 = stringAppend(tmpMeta4841,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g15.limRateLimFirstOrder.limiter.uMax >= goverNordic_g15.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4842));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4842));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18470;
}
/*
equation index: 18469
type: ALGORITHM

  assert(vrNordic_g16.limiter.uMax >= vrNordic_g16.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g16.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g16.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18469};
  modelica_boolean tmp4844;
  static const MMC_DEFSTRINGLIT(tmp4845,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4846;
  modelica_metatype tmpMeta4847;
  static const MMC_DEFSTRINGLIT(tmp4848,11,") < uMin (=");
  modelica_metatype tmpMeta4849;
  modelica_string tmp4850;
  modelica_metatype tmpMeta4851;
  modelica_metatype tmpMeta4852;
  static int tmp4853 = 0;
  {
    tmp4844 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */));
    if(!tmp4844)
    {
      tmp4846 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4847 = stringAppend(MMC_REFSTRINGLIT(tmp4845),tmp4846);
      tmpMeta4849 = stringAppend(tmpMeta4847,MMC_REFSTRINGLIT(tmp4848));
      tmp4850 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4851 = stringAppend(tmpMeta4849,tmp4850);
      tmpMeta4852 = stringAppend(tmpMeta4851,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g16.limiter.uMax >= vrNordic_g16.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4852));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4852));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18469;
}
/*
equation index: 18468
type: ALGORITHM

  assert(goverNordic_g16.limRateLimFirstOrder.limiter.uMax >= goverNordic_g16.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g16.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g16.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18468};
  modelica_boolean tmp4854;
  static const MMC_DEFSTRINGLIT(tmp4855,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4856;
  modelica_metatype tmpMeta4857;
  static const MMC_DEFSTRINGLIT(tmp4858,11,") < uMin (=");
  modelica_metatype tmpMeta4859;
  modelica_string tmp4860;
  modelica_metatype tmpMeta4861;
  modelica_metatype tmpMeta4862;
  static int tmp4863 = 0;
  {
    tmp4854 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4854)
    {
      tmp4856 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4857 = stringAppend(MMC_REFSTRINGLIT(tmp4855),tmp4856);
      tmpMeta4859 = stringAppend(tmpMeta4857,MMC_REFSTRINGLIT(tmp4858));
      tmp4860 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4861 = stringAppend(tmpMeta4859,tmp4860);
      tmpMeta4862 = stringAppend(tmpMeta4861,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g16.limRateLimFirstOrder.limiter.uMax >= goverNordic_g16.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4862));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4862));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18468;
}
/*
equation index: 18467
type: ALGORITHM

  assert(vrNordic_g17.limiter.uMax >= vrNordic_g17.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g17.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g17.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18467};
  modelica_boolean tmp4864;
  static const MMC_DEFSTRINGLIT(tmp4865,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4866;
  modelica_metatype tmpMeta4867;
  static const MMC_DEFSTRINGLIT(tmp4868,11,") < uMin (=");
  modelica_metatype tmpMeta4869;
  modelica_string tmp4870;
  modelica_metatype tmpMeta4871;
  modelica_metatype tmpMeta4872;
  static int tmp4873 = 0;
  {
    tmp4864 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */));
    if(!tmp4864)
    {
      tmp4866 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4867 = stringAppend(MMC_REFSTRINGLIT(tmp4865),tmp4866);
      tmpMeta4869 = stringAppend(tmpMeta4867,MMC_REFSTRINGLIT(tmp4868));
      tmp4870 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4871 = stringAppend(tmpMeta4869,tmp4870);
      tmpMeta4872 = stringAppend(tmpMeta4871,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g17.limiter.uMax >= vrNordic_g17.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4872));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4872));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18467;
}
/*
equation index: 18466
type: ALGORITHM

  assert(goverNordic_g17.limRateLimFirstOrder.limiter.uMax >= goverNordic_g17.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g17.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g17.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18466};
  modelica_boolean tmp4874;
  static const MMC_DEFSTRINGLIT(tmp4875,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4876;
  modelica_metatype tmpMeta4877;
  static const MMC_DEFSTRINGLIT(tmp4878,11,") < uMin (=");
  modelica_metatype tmpMeta4879;
  modelica_string tmp4880;
  modelica_metatype tmpMeta4881;
  modelica_metatype tmpMeta4882;
  static int tmp4883 = 0;
  {
    tmp4874 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4874)
    {
      tmp4876 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4877 = stringAppend(MMC_REFSTRINGLIT(tmp4875),tmp4876);
      tmpMeta4879 = stringAppend(tmpMeta4877,MMC_REFSTRINGLIT(tmp4878));
      tmp4880 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4881 = stringAppend(tmpMeta4879,tmp4880);
      tmpMeta4882 = stringAppend(tmpMeta4881,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g17.limRateLimFirstOrder.limiter.uMax >= goverNordic_g17.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4882));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4882));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18466;
}
/*
equation index: 18465
type: ALGORITHM

  assert(vrNordic_g18.limiter.uMax >= vrNordic_g18.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g18.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g18.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18465};
  modelica_boolean tmp4884;
  static const MMC_DEFSTRINGLIT(tmp4885,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4886;
  modelica_metatype tmpMeta4887;
  static const MMC_DEFSTRINGLIT(tmp4888,11,") < uMin (=");
  modelica_metatype tmpMeta4889;
  modelica_string tmp4890;
  modelica_metatype tmpMeta4891;
  modelica_metatype tmpMeta4892;
  static int tmp4893 = 0;
  {
    tmp4884 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */));
    if(!tmp4884)
    {
      tmp4886 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4887 = stringAppend(MMC_REFSTRINGLIT(tmp4885),tmp4886);
      tmpMeta4889 = stringAppend(tmpMeta4887,MMC_REFSTRINGLIT(tmp4888));
      tmp4890 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4891 = stringAppend(tmpMeta4889,tmp4890);
      tmpMeta4892 = stringAppend(tmpMeta4891,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g18.limiter.uMax >= vrNordic_g18.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4892));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4892));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18465;
}
/*
equation index: 18464
type: ALGORITHM

  assert(goverNordic_g18.limRateLimFirstOrder.limiter.uMax >= goverNordic_g18.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g18.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g18.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18464};
  modelica_boolean tmp4894;
  static const MMC_DEFSTRINGLIT(tmp4895,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4896;
  modelica_metatype tmpMeta4897;
  static const MMC_DEFSTRINGLIT(tmp4898,11,") < uMin (=");
  modelica_metatype tmpMeta4899;
  modelica_string tmp4900;
  modelica_metatype tmpMeta4901;
  modelica_metatype tmpMeta4902;
  static int tmp4903 = 0;
  {
    tmp4894 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4894)
    {
      tmp4896 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4897 = stringAppend(MMC_REFSTRINGLIT(tmp4895),tmp4896);
      tmpMeta4899 = stringAppend(tmpMeta4897,MMC_REFSTRINGLIT(tmp4898));
      tmp4900 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4901 = stringAppend(tmpMeta4899,tmp4900);
      tmpMeta4902 = stringAppend(tmpMeta4901,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g18.limRateLimFirstOrder.limiter.uMax >= goverNordic_g18.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4902));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4902));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18464;
}
/*
equation index: 18463
type: ALGORITHM

  assert(vrNordic_g19.limiter.uMax >= vrNordic_g19.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g19.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g19.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18463};
  modelica_boolean tmp4904;
  static const MMC_DEFSTRINGLIT(tmp4905,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4906;
  modelica_metatype tmpMeta4907;
  static const MMC_DEFSTRINGLIT(tmp4908,11,") < uMin (=");
  modelica_metatype tmpMeta4909;
  modelica_string tmp4910;
  modelica_metatype tmpMeta4911;
  modelica_metatype tmpMeta4912;
  static int tmp4913 = 0;
  {
    tmp4904 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */));
    if(!tmp4904)
    {
      tmp4906 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4907 = stringAppend(MMC_REFSTRINGLIT(tmp4905),tmp4906);
      tmpMeta4909 = stringAppend(tmpMeta4907,MMC_REFSTRINGLIT(tmp4908));
      tmp4910 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4911 = stringAppend(tmpMeta4909,tmp4910);
      tmpMeta4912 = stringAppend(tmpMeta4911,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g19.limiter.uMax >= vrNordic_g19.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4912));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4912));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18463;
}
/*
equation index: 18462
type: ALGORITHM

  assert(goverNordic_g19.limRateLimFirstOrder.limiter.uMax >= goverNordic_g19.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g19.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g19.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18462};
  modelica_boolean tmp4914;
  static const MMC_DEFSTRINGLIT(tmp4915,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4916;
  modelica_metatype tmpMeta4917;
  static const MMC_DEFSTRINGLIT(tmp4918,11,") < uMin (=");
  modelica_metatype tmpMeta4919;
  modelica_string tmp4920;
  modelica_metatype tmpMeta4921;
  modelica_metatype tmpMeta4922;
  static int tmp4923 = 0;
  {
    tmp4914 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4914)
    {
      tmp4916 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4917 = stringAppend(MMC_REFSTRINGLIT(tmp4915),tmp4916);
      tmpMeta4919 = stringAppend(tmpMeta4917,MMC_REFSTRINGLIT(tmp4918));
      tmp4920 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4921 = stringAppend(tmpMeta4919,tmp4920);
      tmpMeta4922 = stringAppend(tmpMeta4921,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g19.limRateLimFirstOrder.limiter.uMax >= goverNordic_g19.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4922));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4922));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18462;
}
/*
equation index: 18461
type: ALGORITHM

  assert(vrNordic_g20.limiter.uMax >= vrNordic_g20.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g20.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g20.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18461};
  modelica_boolean tmp4924;
  static const MMC_DEFSTRINGLIT(tmp4925,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4926;
  modelica_metatype tmpMeta4927;
  static const MMC_DEFSTRINGLIT(tmp4928,11,") < uMin (=");
  modelica_metatype tmpMeta4929;
  modelica_string tmp4930;
  modelica_metatype tmpMeta4931;
  modelica_metatype tmpMeta4932;
  static int tmp4933 = 0;
  {
    tmp4924 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */));
    if(!tmp4924)
    {
      tmp4926 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4927 = stringAppend(MMC_REFSTRINGLIT(tmp4925),tmp4926);
      tmpMeta4929 = stringAppend(tmpMeta4927,MMC_REFSTRINGLIT(tmp4928));
      tmp4930 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4931 = stringAppend(tmpMeta4929,tmp4930);
      tmpMeta4932 = stringAppend(tmpMeta4931,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g20.limiter.uMax >= vrNordic_g20.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4932));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4932));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18461;
}
/*
equation index: 18460
type: ALGORITHM

  assert(goverNordic_g20.limRateLimFirstOrder.limiter.uMax >= goverNordic_g20.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g20.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g20.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18460};
  modelica_boolean tmp4934;
  static const MMC_DEFSTRINGLIT(tmp4935,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp4936;
  modelica_metatype tmpMeta4937;
  static const MMC_DEFSTRINGLIT(tmp4938,11,") < uMin (=");
  modelica_metatype tmpMeta4939;
  modelica_string tmp4940;
  modelica_metatype tmpMeta4941;
  modelica_metatype tmpMeta4942;
  static int tmp4943 = 0;
  {
    tmp4934 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp4934)
    {
      tmp4936 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4937 = stringAppend(MMC_REFSTRINGLIT(tmp4935),tmp4936);
      tmpMeta4939 = stringAppend(tmpMeta4937,MMC_REFSTRINGLIT(tmp4938));
      tmp4940 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4941 = stringAppend(tmpMeta4939,tmp4940);
      tmpMeta4942 = stringAppend(tmpMeta4941,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g20.limRateLimFirstOrder.limiter.uMax >= goverNordic_g20.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4942));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4942));
        }
      }
    }
  }
  threadData->lastEquationSolved = 18460;
}
/*
equation index: 18458
type: WHEN

when {$whenCondition3} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(72))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18458};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[222]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[222] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 72));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[111]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[111] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 71));
  }
  threadData->lastEquationSolved = 18458;
}
/*
equation index: 18456
type: WHEN

when {$whenCondition6} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18456};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[425]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[425] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[414]] /* $whenCondition5 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[414] /* $whenCondition5 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18456;
}
/*
equation index: 18454
type: WHEN

when {$whenCondition9} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18454};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[458]] /* $whenCondition9 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[458] /* $whenCondition9 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[447]] /* $whenCondition8 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[447] /* $whenCondition8 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18454;
}
/*
equation index: 18452
type: WHEN

when {$whenCondition12} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18452};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[23]] /* $whenCondition12 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[23] /* $whenCondition12 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* $whenCondition11 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[12] /* $whenCondition11 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18452;
}
/*
equation index: 18450
type: WHEN

when {$whenCondition15} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18450};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[56]] /* $whenCondition15 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[56] /* $whenCondition15 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[45]] /* $whenCondition14 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[45] /* $whenCondition14 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18450;
}
/*
equation index: 18448
type: WHEN

when {$whenCondition18} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18448};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[89]] /* $whenCondition18 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[89] /* $whenCondition18 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[78]] /* $whenCondition17 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[78] /* $whenCondition17 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18448;
}
/*
equation index: 18446
type: WHEN

when {$whenCondition21} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18446};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[123]] /* $whenCondition21 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[123] /* $whenCondition21 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[112]] /* $whenCondition20 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[112] /* $whenCondition20 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18446;
}
/*
equation index: 18444
type: WHEN

when {$whenCondition24} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18444};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[156]] /* $whenCondition24 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[156] /* $whenCondition24 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[145]] /* $whenCondition23 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[145] /* $whenCondition23 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18444;
}
/*
equation index: 18442
type: WHEN

when {$whenCondition27} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18442};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[189]] /* $whenCondition27 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[189] /* $whenCondition27 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[178]] /* $whenCondition26 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[178] /* $whenCondition26 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18442;
}
/*
equation index: 18440
type: WHEN

when {$whenCondition30} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18440};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[223]] /* $whenCondition30 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[223] /* $whenCondition30 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[211]] /* $whenCondition29 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[211] /* $whenCondition29 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18440;
}
/*
equation index: 18438
type: WHEN

when {$whenCondition33} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18438};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[256]] /* $whenCondition33 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[256] /* $whenCondition33 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[245]] /* $whenCondition32 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[245] /* $whenCondition32 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18438;
}
/*
equation index: 18436
type: WHEN

when {$whenCondition36} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18436};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[289]] /* $whenCondition36 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[289] /* $whenCondition36 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[278]] /* $whenCondition35 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[278] /* $whenCondition35 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18436;
}
/*
equation index: 18434
type: WHEN

when {$whenCondition39} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18434};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[322]] /* $whenCondition39 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[322] /* $whenCondition39 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[311]] /* $whenCondition38 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[311] /* $whenCondition38 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18434;
}
/*
equation index: 18432
type: WHEN

when {$whenCondition42} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18432};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[356]] /* $whenCondition42 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[356] /* $whenCondition42 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[345]] /* $whenCondition41 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[345] /* $whenCondition41 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18432;
}
/*
equation index: 18430
type: WHEN

when {$whenCondition45} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18430};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[389]] /* $whenCondition45 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[389] /* $whenCondition45 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[378]] /* $whenCondition44 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[378] /* $whenCondition44 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18430;
}
/*
equation index: 18428
type: WHEN

when {$whenCondition48} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18428};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[412]] /* $whenCondition48 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[412] /* $whenCondition48 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[411]] /* $whenCondition47 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[411] /* $whenCondition47 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18428;
}
/*
equation index: 18426
type: WHEN

when {$whenCondition51} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18426};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[416]] /* $whenCondition51 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[416] /* $whenCondition51 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[415]] /* $whenCondition50 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[415] /* $whenCondition50 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18426;
}
/*
equation index: 18424
type: WHEN

when {$whenCondition54} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18424};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[419]] /* $whenCondition54 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[419] /* $whenCondition54 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[418]] /* $whenCondition53 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[418] /* $whenCondition53 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18424;
}
/*
equation index: 18422
type: WHEN

when {$whenCondition57} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18422};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[422]] /* $whenCondition57 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[422] /* $whenCondition57 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[421]] /* $whenCondition56 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[421] /* $whenCondition56 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18422;
}
/*
equation index: 18420
type: WHEN

when {$whenCondition60} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18420};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[426]] /* $whenCondition60 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[426] /* $whenCondition60 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[424]] /* $whenCondition59 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[424] /* $whenCondition59 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18420;
}
/*
equation index: 18418
type: WHEN

when {$whenCondition63} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(28))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18418};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[429]] /* $whenCondition63 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[429] /* $whenCondition63 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 28));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[428]] /* $whenCondition62 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[428] /* $whenCondition62 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 27));
  }
  threadData->lastEquationSolved = 18418;
}
/*
equation index: 18416
type: WHEN

when {$whenCondition66} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18416};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[432]] /* $whenCondition66 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[432] /* $whenCondition66 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[431]] /* $whenCondition65 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[431] /* $whenCondition65 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18416;
}
/*
equation index: 18414
type: WHEN

when {$whenCondition69} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18414};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[435]] /* $whenCondition69 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[435] /* $whenCondition69 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[434]] /* $whenCondition68 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[434] /* $whenCondition68 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18414;
}
/*
equation index: 18412
type: WHEN

when {$whenCondition72} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18412};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[439]] /* $whenCondition72 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[439] /* $whenCondition72 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[438]] /* $whenCondition71 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[438] /* $whenCondition71 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18412;
}
/*
equation index: 18410
type: WHEN

when {$whenCondition75} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18410};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[442]] /* $whenCondition75 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[442] /* $whenCondition75 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[441]] /* $whenCondition74 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[441] /* $whenCondition74 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18410;
}
/*
equation index: 18408
type: WHEN

when {$whenCondition78} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18408};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[445]] /* $whenCondition78 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[445] /* $whenCondition78 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[444]] /* $whenCondition77 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[444] /* $whenCondition77 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18408;
}
/*
equation index: 18406
type: WHEN

when {$whenCondition81} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18406};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[449]] /* $whenCondition81 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[449] /* $whenCondition81 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[448]] /* $whenCondition80 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[448] /* $whenCondition80 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18406;
}
/*
equation index: 18404
type: WHEN

when {$whenCondition84} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18404};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[452]] /* $whenCondition84 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[452] /* $whenCondition84 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[451]] /* $whenCondition83 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[451] /* $whenCondition83 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18404;
}
/*
equation index: 18402
type: WHEN

when {$whenCondition87} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18402};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[455]] /* $whenCondition87 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[455] /* $whenCondition87 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[454]] /* $whenCondition86 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[454] /* $whenCondition86 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18402;
}
/*
equation index: 18400
type: WHEN

when {$whenCondition90} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18400};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[459]] /* $whenCondition90 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[459] /* $whenCondition90 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[457]] /* $whenCondition89 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[457] /* $whenCondition89 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18400;
}
/*
equation index: 18398
type: WHEN

when {$whenCondition93} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18398};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[462]] /* $whenCondition93 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[462] /* $whenCondition93 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[461]] /* $whenCondition92 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[461] /* $whenCondition92 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18398;
}
/*
equation index: 18396
type: WHEN

when {$whenCondition96} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18396};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[465]] /* $whenCondition96 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[465] /* $whenCondition96 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[464]] /* $whenCondition95 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[464] /* $whenCondition95 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18396;
}
/*
equation index: 18394
type: WHEN

when {$whenCondition99} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18394};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[468]] /* $whenCondition99 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[468] /* $whenCondition99 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[467]] /* $whenCondition98 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[467] /* $whenCondition98 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18394;
}
/*
equation index: 18392
type: WHEN

when {$whenCondition102} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18392};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition102 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[4] /* $whenCondition102 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition101 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition101 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18392;
}
/*
equation index: 18390
type: WHEN

when {$whenCondition105} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18390};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition105 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[7] /* $whenCondition105 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition104 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[6] /* $whenCondition104 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18390;
}
/*
equation index: 18388
type: WHEN

when {$whenCondition108} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18388};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* $whenCondition108 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[10] /* $whenCondition108 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* $whenCondition107 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[9] /* $whenCondition107 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18388;
}
/*
equation index: 18386
type: WHEN

when {$whenCondition111} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18386};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* $whenCondition111 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[14] /* $whenCondition111 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[13]] /* $whenCondition110 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[13] /* $whenCondition110 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18386;
}
/*
equation index: 18384
type: WHEN

when {$whenCondition114} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18384};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[17]] /* $whenCondition114 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[17] /* $whenCondition114 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* $whenCondition113 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[16] /* $whenCondition113 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18384;
}
/*
equation index: 18382
type: WHEN

when {$whenCondition117} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18382};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[20]] /* $whenCondition117 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[20] /* $whenCondition117 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[19]] /* $whenCondition116 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[19] /* $whenCondition116 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18382;
}
/*
equation index: 18380
type: WHEN

when {$whenCondition120} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18380};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[24]] /* $whenCondition120 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[24] /* $whenCondition120 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[22]] /* $whenCondition119 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[22] /* $whenCondition119 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18380;
}
/*
equation index: 18378
type: WHEN

when {$whenCondition123} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18378};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[27]] /* $whenCondition123 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[27] /* $whenCondition123 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[26]] /* $whenCondition122 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[26] /* $whenCondition122 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18378;
}
/*
equation index: 18376
type: WHEN

when {$whenCondition126} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18376};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[30]] /* $whenCondition126 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[30] /* $whenCondition126 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[29]] /* $whenCondition125 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[29] /* $whenCondition125 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18376;
}
/*
equation index: 18374
type: WHEN

when {$whenCondition129} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18374};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[33]] /* $whenCondition129 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[33] /* $whenCondition129 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[32]] /* $whenCondition128 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[32] /* $whenCondition128 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18374;
}
/*
equation index: 18372
type: WHEN

when {$whenCondition132} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18372};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[37]] /* $whenCondition132 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[37] /* $whenCondition132 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[36]] /* $whenCondition131 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[36] /* $whenCondition131 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18372;
}
/*
equation index: 18370
type: WHEN

when {$whenCondition135} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18370};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[40]] /* $whenCondition135 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[40] /* $whenCondition135 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[39]] /* $whenCondition134 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[39] /* $whenCondition134 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18370;
}
/*
equation index: 18368
type: WHEN

when {$whenCondition138} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18368};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[43]] /* $whenCondition138 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[43] /* $whenCondition138 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[42]] /* $whenCondition137 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[42] /* $whenCondition137 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18368;
}
/*
equation index: 18366
type: WHEN

when {$whenCondition141} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18366};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[47]] /* $whenCondition141 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[47] /* $whenCondition141 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[46]] /* $whenCondition140 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[46] /* $whenCondition140 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18366;
}
/*
equation index: 18364
type: WHEN

when {$whenCondition144} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18364};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[50]] /* $whenCondition144 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[50] /* $whenCondition144 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[49]] /* $whenCondition143 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[49] /* $whenCondition143 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18364;
}
/*
equation index: 18362
type: WHEN

when {$whenCondition147} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18362};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[53]] /* $whenCondition147 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[53] /* $whenCondition147 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[52]] /* $whenCondition146 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[52] /* $whenCondition146 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18362;
}
/*
equation index: 18360
type: WHEN

when {$whenCondition150} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18360};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[57]] /* $whenCondition150 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[57] /* $whenCondition150 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[55]] /* $whenCondition149 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[55] /* $whenCondition149 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18360;
}
/*
equation index: 18358
type: WHEN

when {$whenCondition153} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18358};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[60]] /* $whenCondition153 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[60] /* $whenCondition153 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[59]] /* $whenCondition152 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[59] /* $whenCondition152 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18358;
}
/*
equation index: 18356
type: WHEN

when {$whenCondition156} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18356};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[63]] /* $whenCondition156 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[63] /* $whenCondition156 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[62]] /* $whenCondition155 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[62] /* $whenCondition155 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18356;
}
/*
equation index: 18354
type: WHEN

when {$whenCondition159} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18354};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[66]] /* $whenCondition159 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[66] /* $whenCondition159 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[65]] /* $whenCondition158 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[65] /* $whenCondition158 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18354;
}
/*
equation index: 18352
type: WHEN

when {$whenCondition162} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18352};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[70]] /* $whenCondition162 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[70] /* $whenCondition162 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[69]] /* $whenCondition161 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[69] /* $whenCondition161 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18352;
}
/*
equation index: 18350
type: WHEN

when {$whenCondition165} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18350};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[73]] /* $whenCondition165 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[73] /* $whenCondition165 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[72]] /* $whenCondition164 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[72] /* $whenCondition164 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18350;
}
/*
equation index: 18348
type: WHEN

when {$whenCondition168} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18348};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[76]] /* $whenCondition168 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[76] /* $whenCondition168 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[75]] /* $whenCondition167 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[75] /* $whenCondition167 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18348;
}
/*
equation index: 18346
type: WHEN

when {$whenCondition171} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18346};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[80]] /* $whenCondition171 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[80] /* $whenCondition171 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[79]] /* $whenCondition170 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[79] /* $whenCondition170 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18346;
}
/*
equation index: 18344
type: WHEN

when {$whenCondition174} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18344};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[83]] /* $whenCondition174 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[83] /* $whenCondition174 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[82]] /* $whenCondition173 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[82] /* $whenCondition173 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18344;
}
/*
equation index: 18342
type: WHEN

when {$whenCondition177} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18342};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[86]] /* $whenCondition177 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[86] /* $whenCondition177 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[85]] /* $whenCondition176 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[85] /* $whenCondition176 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18342;
}
/*
equation index: 18340
type: WHEN

when {$whenCondition180} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18340};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[90]] /* $whenCondition180 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[90] /* $whenCondition180 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[88]] /* $whenCondition179 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[88] /* $whenCondition179 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18340;
}
/*
equation index: 18338
type: WHEN

when {$whenCondition183} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18338};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[93]] /* $whenCondition183 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[93] /* $whenCondition183 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[92]] /* $whenCondition182 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[92] /* $whenCondition182 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18338;
}
/*
equation index: 18336
type: WHEN

when {$whenCondition186} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18336};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[96]] /* $whenCondition186 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[96] /* $whenCondition186 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[95]] /* $whenCondition185 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[95] /* $whenCondition185 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18336;
}
/*
equation index: 18334
type: WHEN

when {$whenCondition189} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18334};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[99]] /* $whenCondition189 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[99] /* $whenCondition189 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[98]] /* $whenCondition188 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[98] /* $whenCondition188 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18334;
}
/*
equation index: 18332
type: WHEN

when {$whenCondition192} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18332};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[103]] /* $whenCondition192 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[103] /* $whenCondition192 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[102]] /* $whenCondition191 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[102] /* $whenCondition191 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18332;
}
/*
equation index: 18330
type: WHEN

when {$whenCondition195} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18330};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[106]] /* $whenCondition195 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[106] /* $whenCondition195 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[105]] /* $whenCondition194 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[105] /* $whenCondition194 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18330;
}
/*
equation index: 18328
type: WHEN

when {$whenCondition198} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18328};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[109]] /* $whenCondition198 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[109] /* $whenCondition198 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[108]] /* $whenCondition197 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[108] /* $whenCondition197 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18328;
}
/*
equation index: 18326
type: WHEN

when {$whenCondition201} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18326};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[114]] /* $whenCondition201 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[114] /* $whenCondition201 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[113]] /* $whenCondition200 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[113] /* $whenCondition200 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18326;
}
/*
equation index: 18324
type: WHEN

when {$whenCondition204} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18324};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[117]] /* $whenCondition204 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[117] /* $whenCondition204 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[116]] /* $whenCondition203 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[116] /* $whenCondition203 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18324;
}
/*
equation index: 18322
type: WHEN

when {$whenCondition207} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18322};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[120]] /* $whenCondition207 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[120] /* $whenCondition207 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[119]] /* $whenCondition206 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[119] /* $whenCondition206 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18322;
}
/*
equation index: 18320
type: WHEN

when {$whenCondition210} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18320};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[124]] /* $whenCondition210 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[124] /* $whenCondition210 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[122]] /* $whenCondition209 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[122] /* $whenCondition209 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18320;
}
/*
equation index: 18318
type: WHEN

when {$whenCondition213} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(133))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18318};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[127]] /* $whenCondition213 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[127] /* $whenCondition213 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 133));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[126]] /* $whenCondition212 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[126] /* $whenCondition212 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 134));
  }
  threadData->lastEquationSolved = 18318;
}
/*
equation index: 18316
type: WHEN

when {$whenCondition216} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18316};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[130]] /* $whenCondition216 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[130] /* $whenCondition216 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[129]] /* $whenCondition215 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[129] /* $whenCondition215 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18316;
}
/*
equation index: 18314
type: WHEN

when {$whenCondition219} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18314};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[133]] /* $whenCondition219 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[133] /* $whenCondition219 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[132]] /* $whenCondition218 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[132] /* $whenCondition218 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18314;
}
/*
equation index: 18312
type: WHEN

when {$whenCondition222} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18312};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[137]] /* $whenCondition222 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[137] /* $whenCondition222 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[136]] /* $whenCondition221 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[136] /* $whenCondition221 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18312;
}
/*
equation index: 18310
type: WHEN

when {$whenCondition225} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18310};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[140]] /* $whenCondition225 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[140] /* $whenCondition225 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[139]] /* $whenCondition224 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[139] /* $whenCondition224 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18310;
}
/*
equation index: 18308
type: WHEN

when {$whenCondition228} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18308};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[143]] /* $whenCondition228 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[143] /* $whenCondition228 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[142]] /* $whenCondition227 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[142] /* $whenCondition227 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18308;
}
/*
equation index: 18306
type: WHEN

when {$whenCondition231} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18306};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[147]] /* $whenCondition231 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[147] /* $whenCondition231 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[146]] /* $whenCondition230 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[146] /* $whenCondition230 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18306;
}
/*
equation index: 18304
type: WHEN

when {$whenCondition234} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18304};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[150]] /* $whenCondition234 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[150] /* $whenCondition234 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[149]] /* $whenCondition233 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[149] /* $whenCondition233 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18304;
}
/*
equation index: 18302
type: WHEN

when {$whenCondition237} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18302};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[153]] /* $whenCondition237 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[153] /* $whenCondition237 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[152]] /* $whenCondition236 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[152] /* $whenCondition236 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18302;
}
/*
equation index: 18300
type: WHEN

when {$whenCondition240} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18300};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[157]] /* $whenCondition240 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[157] /* $whenCondition240 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[155]] /* $whenCondition239 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[155] /* $whenCondition239 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18300;
}
/*
equation index: 18298
type: WHEN

when {$whenCondition243} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18298};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[160]] /* $whenCondition243 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[160] /* $whenCondition243 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[159]] /* $whenCondition242 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[159] /* $whenCondition242 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18298;
}
/*
equation index: 18296
type: WHEN

when {$whenCondition246} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(111))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18296};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[163]] /* $whenCondition246 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[163] /* $whenCondition246 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 111));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[162]] /* $whenCondition245 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[162] /* $whenCondition245 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 110));
  }
  threadData->lastEquationSolved = 18296;
}
/*
equation index: 18294
type: WHEN

when {$whenCondition249} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18294};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[166]] /* $whenCondition249 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[166] /* $whenCondition249 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[165]] /* $whenCondition248 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[165] /* $whenCondition248 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18294;
}
/*
equation index: 18292
type: WHEN

when {$whenCondition252} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18292};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[170]] /* $whenCondition252 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[170] /* $whenCondition252 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[169]] /* $whenCondition251 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[169] /* $whenCondition251 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18292;
}
/*
equation index: 18290
type: WHEN

when {$whenCondition255} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18290};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[173]] /* $whenCondition255 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[173] /* $whenCondition255 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[172]] /* $whenCondition254 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[172] /* $whenCondition254 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18290;
}
/*
equation index: 18288
type: WHEN

when {$whenCondition258} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18288};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[176]] /* $whenCondition258 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[176] /* $whenCondition258 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[175]] /* $whenCondition257 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[175] /* $whenCondition257 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18288;
}
/*
equation index: 18286
type: WHEN

when {$whenCondition261} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18286};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[180]] /* $whenCondition261 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[180] /* $whenCondition261 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[179]] /* $whenCondition260 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[179] /* $whenCondition260 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18286;
}
/*
equation index: 18284
type: WHEN

when {$whenCondition264} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18284};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[183]] /* $whenCondition264 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[183] /* $whenCondition264 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[182]] /* $whenCondition263 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[182] /* $whenCondition263 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18284;
}
/*
equation index: 18282
type: WHEN

when {$whenCondition267} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18282};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[186]] /* $whenCondition267 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[186] /* $whenCondition267 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[185]] /* $whenCondition266 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[185] /* $whenCondition266 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18282;
}
/*
equation index: 18280
type: WHEN

when {$whenCondition270} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18280};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[190]] /* $whenCondition270 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[190] /* $whenCondition270 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[188]] /* $whenCondition269 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[188] /* $whenCondition269 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18280;
}
/*
equation index: 18278
type: WHEN

when {$whenCondition273} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18278};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[193]] /* $whenCondition273 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[193] /* $whenCondition273 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[192]] /* $whenCondition272 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[192] /* $whenCondition272 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18278;
}
/*
equation index: 18276
type: WHEN

when {$whenCondition276} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18276};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[196]] /* $whenCondition276 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[196] /* $whenCondition276 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[195]] /* $whenCondition275 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[195] /* $whenCondition275 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18276;
}
/*
equation index: 18274
type: WHEN

when {$whenCondition279} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18274};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[199]] /* $whenCondition279 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[199] /* $whenCondition279 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[198]] /* $whenCondition278 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[198] /* $whenCondition278 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18274;
}
/*
equation index: 18272
type: WHEN

when {$whenCondition282} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18272};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[203]] /* $whenCondition282 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[203] /* $whenCondition282 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[202]] /* $whenCondition281 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[202] /* $whenCondition281 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18272;
}
/*
equation index: 18270
type: WHEN

when {$whenCondition285} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18270};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[206]] /* $whenCondition285 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[206] /* $whenCondition285 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[205]] /* $whenCondition284 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[205] /* $whenCondition284 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18270;
}
/*
equation index: 18268
type: WHEN

when {$whenCondition288} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18268};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[209]] /* $whenCondition288 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[209] /* $whenCondition288 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[208]] /* $whenCondition287 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[208] /* $whenCondition287 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18268;
}
/*
equation index: 18266
type: WHEN

when {$whenCondition291} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18266};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[213]] /* $whenCondition291 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[213] /* $whenCondition291 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[212]] /* $whenCondition290 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[212] /* $whenCondition290 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18266;
}
/*
equation index: 18264
type: WHEN

when {$whenCondition294} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18264};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[216]] /* $whenCondition294 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[216] /* $whenCondition294 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[215]] /* $whenCondition293 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[215] /* $whenCondition293 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18264;
}
/*
equation index: 18262
type: WHEN

when {$whenCondition297} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18262};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[219]] /* $whenCondition297 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[219] /* $whenCondition297 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[218]] /* $whenCondition296 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[218] /* $whenCondition296 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18262;
}
/*
equation index: 18260
type: WHEN

when {$whenCondition300} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18260};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[224]] /* $whenCondition300 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[224] /* $whenCondition300 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[221]] /* $whenCondition299 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[221] /* $whenCondition299 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18260;
}
/*
equation index: 18258
type: WHEN

when {$whenCondition303} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18258};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[227]] /* $whenCondition303 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[227] /* $whenCondition303 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[226]] /* $whenCondition302 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[226] /* $whenCondition302 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18258;
}
/*
equation index: 18256
type: WHEN

when {$whenCondition306} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18256};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[230]] /* $whenCondition306 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[230] /* $whenCondition306 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[229]] /* $whenCondition305 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[229] /* $whenCondition305 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18256;
}
/*
equation index: 18254
type: WHEN

when {$whenCondition309} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18254};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[233]] /* $whenCondition309 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[233] /* $whenCondition309 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[232]] /* $whenCondition308 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[232] /* $whenCondition308 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18254;
}
/*
equation index: 18252
type: WHEN

when {$whenCondition312} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(62))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18252};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[237]] /* $whenCondition312 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[237] /* $whenCondition312 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 62));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[236]] /* $whenCondition311 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[236] /* $whenCondition311 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 61));
  }
  threadData->lastEquationSolved = 18252;
}
/*
equation index: 18250
type: WHEN

when {$whenCondition315} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18250};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[240]] /* $whenCondition315 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[240] /* $whenCondition315 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[239]] /* $whenCondition314 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[239] /* $whenCondition314 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18250;
}
/*
equation index: 18248
type: WHEN

when {$whenCondition318} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18248};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[243]] /* $whenCondition318 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[243] /* $whenCondition318 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[242]] /* $whenCondition317 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[242] /* $whenCondition317 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18248;
}
/*
equation index: 18246
type: WHEN

when {$whenCondition321} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18246};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[247]] /* $whenCondition321 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[247] /* $whenCondition321 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[246]] /* $whenCondition320 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[246] /* $whenCondition320 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18246;
}
/*
equation index: 18244
type: WHEN

when {$whenCondition324} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18244};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[250]] /* $whenCondition324 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[250] /* $whenCondition324 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[249]] /* $whenCondition323 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[249] /* $whenCondition323 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18244;
}
/*
equation index: 18242
type: WHEN

when {$whenCondition327} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18242};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[253]] /* $whenCondition327 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[253] /* $whenCondition327 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[252]] /* $whenCondition326 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[252] /* $whenCondition326 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18242;
}
/*
equation index: 18240
type: WHEN

when {$whenCondition330} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18240};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[257]] /* $whenCondition330 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[257] /* $whenCondition330 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[255]] /* $whenCondition329 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[255] /* $whenCondition329 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18240;
}
/*
equation index: 18238
type: WHEN

when {$whenCondition333} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18238};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[260]] /* $whenCondition333 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[260] /* $whenCondition333 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[259]] /* $whenCondition332 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[259] /* $whenCondition332 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18238;
}
/*
equation index: 18236
type: WHEN

when {$whenCondition336} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18236};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[263]] /* $whenCondition336 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[263] /* $whenCondition336 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[262]] /* $whenCondition335 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[262] /* $whenCondition335 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18236;
}
/*
equation index: 18234
type: WHEN

when {$whenCondition339} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18234};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[266]] /* $whenCondition339 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[266] /* $whenCondition339 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[265]] /* $whenCondition338 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[265] /* $whenCondition338 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18234;
}
/*
equation index: 18232
type: WHEN

when {$whenCondition342} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18232};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[270]] /* $whenCondition342 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[270] /* $whenCondition342 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[269]] /* $whenCondition341 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[269] /* $whenCondition341 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18232;
}
/*
equation index: 18230
type: WHEN

when {$whenCondition345} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18230};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[273]] /* $whenCondition345 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[273] /* $whenCondition345 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[272]] /* $whenCondition344 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[272] /* $whenCondition344 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18230;
}
/*
equation index: 18228
type: WHEN

when {$whenCondition348} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18228};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[276]] /* $whenCondition348 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[276] /* $whenCondition348 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[275]] /* $whenCondition347 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[275] /* $whenCondition347 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18228;
}
/*
equation index: 18226
type: WHEN

when {$whenCondition351} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18226};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[280]] /* $whenCondition351 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[280] /* $whenCondition351 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[279]] /* $whenCondition350 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[279] /* $whenCondition350 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18226;
}
/*
equation index: 18224
type: WHEN

when {$whenCondition354} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18224};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[283]] /* $whenCondition354 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[283] /* $whenCondition354 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[282]] /* $whenCondition353 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[282] /* $whenCondition353 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18224;
}
/*
equation index: 18222
type: WHEN

when {$whenCondition357} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18222};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[286]] /* $whenCondition357 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[286] /* $whenCondition357 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[285]] /* $whenCondition356 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[285] /* $whenCondition356 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18222;
}
/*
equation index: 18220
type: WHEN

when {$whenCondition360} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18220};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[290]] /* $whenCondition360 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[290] /* $whenCondition360 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[288]] /* $whenCondition359 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[288] /* $whenCondition359 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18220;
}
/*
equation index: 18218
type: WHEN

when {$whenCondition363} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18218};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[293]] /* $whenCondition363 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[293] /* $whenCondition363 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[292]] /* $whenCondition362 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[292] /* $whenCondition362 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18218;
}
/*
equation index: 18216
type: WHEN

when {$whenCondition366} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18216};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[296]] /* $whenCondition366 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[296] /* $whenCondition366 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[295]] /* $whenCondition365 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[295] /* $whenCondition365 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18216;
}
/*
equation index: 18214
type: WHEN

when {$whenCondition370} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18214};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[301]] /* $whenCondition370 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[301] /* $whenCondition370 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[299]] /* $whenCondition369 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[299] /* $whenCondition369 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18214;
}
/*
equation index: 18212
type: WHEN

when {$whenCondition373} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18212};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[304]] /* $whenCondition373 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[304] /* $whenCondition373 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[303]] /* $whenCondition372 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[303] /* $whenCondition372 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18212;
}
/*
equation index: 18210
type: WHEN

when {$whenCondition376} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18210};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[307]] /* $whenCondition376 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[307] /* $whenCondition376 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[306]] /* $whenCondition375 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[306] /* $whenCondition375 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18210;
}
/*
equation index: 18208
type: WHEN

when {$whenCondition379} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18208};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[310]] /* $whenCondition379 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[310] /* $whenCondition379 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[309]] /* $whenCondition378 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[309] /* $whenCondition378 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18208;
}
/*
equation index: 18206
type: WHEN

when {$whenCondition382} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18206};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[314]] /* $whenCondition382 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[314] /* $whenCondition382 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[313]] /* $whenCondition381 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[313] /* $whenCondition381 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18206;
}
/*
equation index: 18204
type: WHEN

when {$whenCondition385} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18204};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[317]] /* $whenCondition385 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[317] /* $whenCondition385 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[316]] /* $whenCondition384 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[316] /* $whenCondition384 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18204;
}
/*
equation index: 18202
type: WHEN

when {$whenCondition388} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18202};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[320]] /* $whenCondition388 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[320] /* $whenCondition388 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[319]] /* $whenCondition387 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[319] /* $whenCondition387 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18202;
}
/*
equation index: 18200
type: WHEN

when {$whenCondition391} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18200};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[324]] /* $whenCondition391 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[324] /* $whenCondition391 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[323]] /* $whenCondition390 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[323] /* $whenCondition390 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18200;
}
/*
equation index: 18198
type: WHEN

when {$whenCondition394} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18198};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[327]] /* $whenCondition394 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[327] /* $whenCondition394 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[326]] /* $whenCondition393 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[326] /* $whenCondition393 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18198;
}
/*
equation index: 18196
type: WHEN

when {$whenCondition397} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18196};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[330]] /* $whenCondition397 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[330] /* $whenCondition397 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[329]] /* $whenCondition396 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[329] /* $whenCondition396 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18196;
}
/*
equation index: 18194
type: WHEN

when {$whenCondition400} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18194};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[335]] /* $whenCondition400 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[335] /* $whenCondition400 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[332]] /* $whenCondition399 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[332] /* $whenCondition399 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18194;
}
/*
equation index: 18192
type: WHEN

when {$whenCondition403} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18192};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[338]] /* $whenCondition403 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[338] /* $whenCondition403 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[337]] /* $whenCondition402 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[337] /* $whenCondition402 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18192;
}
/*
equation index: 18190
type: WHEN

when {$whenCondition406} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18190};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[341]] /* $whenCondition406 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[341] /* $whenCondition406 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[340]] /* $whenCondition405 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[340] /* $whenCondition405 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18190;
}
/*
equation index: 18188
type: WHEN

when {$whenCondition409} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18188};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[344]] /* $whenCondition409 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[344] /* $whenCondition409 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[343]] /* $whenCondition408 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[343] /* $whenCondition408 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18188;
}
/*
equation index: 18186
type: WHEN

when {$whenCondition412} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18186};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[348]] /* $whenCondition412 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[348] /* $whenCondition412 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[347]] /* $whenCondition411 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[347] /* $whenCondition411 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18186;
}
/*
equation index: 18184
type: WHEN

when {$whenCondition415} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18184};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[351]] /* $whenCondition415 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[351] /* $whenCondition415 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[350]] /* $whenCondition414 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[350] /* $whenCondition414 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18184;
}
/*
equation index: 18182
type: WHEN

when {$whenCondition418} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18182};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[354]] /* $whenCondition418 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[354] /* $whenCondition418 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[353]] /* $whenCondition417 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[353] /* $whenCondition417 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18182;
}
/*
equation index: 18180
type: WHEN

when {$whenCondition421} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18180};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[358]] /* $whenCondition421 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[358] /* $whenCondition421 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[357]] /* $whenCondition420 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[357] /* $whenCondition420 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18180;
}
/*
equation index: 18178
type: WHEN

when {$whenCondition424} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18178};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[361]] /* $whenCondition424 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[361] /* $whenCondition424 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[360]] /* $whenCondition423 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[360] /* $whenCondition423 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18178;
}
/*
equation index: 18176
type: WHEN

when {$whenCondition427} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18176};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[364]] /* $whenCondition427 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[364] /* $whenCondition427 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[363]] /* $whenCondition426 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[363] /* $whenCondition426 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18176;
}
/*
equation index: 18174
type: WHEN

when {$whenCondition430} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18174};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[368]] /* $whenCondition430 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[368] /* $whenCondition430 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[366]] /* $whenCondition429 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[366] /* $whenCondition429 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18174;
}
/*
equation index: 18172
type: WHEN

when {$whenCondition433} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18172};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[371]] /* $whenCondition433 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[371] /* $whenCondition433 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[370]] /* $whenCondition432 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[370] /* $whenCondition432 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18172;
}
/*
equation index: 18170
type: WHEN

when {$whenCondition436} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18170};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[374]] /* $whenCondition436 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[374] /* $whenCondition436 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[373]] /* $whenCondition435 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[373] /* $whenCondition435 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18170;
}
/*
equation index: 18168
type: WHEN

when {$whenCondition439} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18168};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[377]] /* $whenCondition439 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[377] /* $whenCondition439 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[376]] /* $whenCondition438 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[376] /* $whenCondition438 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18168;
}
/*
equation index: 18166
type: WHEN

when {$whenCondition442} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18166};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[381]] /* $whenCondition442 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[381] /* $whenCondition442 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[380]] /* $whenCondition441 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[380] /* $whenCondition441 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18166;
}
/*
equation index: 18164
type: WHEN

when {$whenCondition445} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18164};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[384]] /* $whenCondition445 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[384] /* $whenCondition445 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[383]] /* $whenCondition444 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[383] /* $whenCondition444 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18164;
}
/*
equation index: 18162
type: WHEN

when {$whenCondition448} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18162};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[387]] /* $whenCondition448 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[387] /* $whenCondition448 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[386]] /* $whenCondition447 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[386] /* $whenCondition447 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18162;
}
/*
equation index: 18160
type: WHEN

when {$whenCondition451} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18160};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[391]] /* $whenCondition451 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[391] /* $whenCondition451 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[390]] /* $whenCondition450 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[390] /* $whenCondition450 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18160;
}
/*
equation index: 18158
type: WHEN

when {$whenCondition454} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18158};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[394]] /* $whenCondition454 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[394] /* $whenCondition454 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[393]] /* $whenCondition453 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[393] /* $whenCondition453 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18158;
}
/*
equation index: 18156
type: WHEN

when {$whenCondition457} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18156};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[397]] /* $whenCondition457 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[397] /* $whenCondition457 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[396]] /* $whenCondition456 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[396] /* $whenCondition456 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18156;
}
/*
equation index: 18154
type: WHEN

when {$whenCondition460} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18154};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[401]] /* $whenCondition460 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[401] /* $whenCondition460 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[399]] /* $whenCondition459 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[399] /* $whenCondition459 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18154;
}
/*
equation index: 18152
type: WHEN

when {$whenCondition463} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18152};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[404]] /* $whenCondition463 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[404] /* $whenCondition463 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[403]] /* $whenCondition462 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[403] /* $whenCondition462 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18152;
}
/*
equation index: 18150
type: WHEN

when {$whenCondition466} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18150};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[407]] /* $whenCondition466 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[407] /* $whenCondition466 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[406]] /* $whenCondition465 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[406] /* $whenCondition465 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18150;
}
/*
equation index: 18148
type: WHEN

when {$whenCondition469} then
  noReturnCall(Dynawo.NonElectrical.Logs.Timeline.logEvent1(58))%>);
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_18148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18148};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[410]] /* $whenCondition469 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[410] /* $whenCondition469 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 58));
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[409]] /* $whenCondition468 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[409] /* $whenCondition468 DISCRETE */) /* edge */))
  {
    omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, ((modelica_integer) 55));
  }
  threadData->lastEquationSolved = 18148;
}
#if defined(__cplusplus)
}
#endif