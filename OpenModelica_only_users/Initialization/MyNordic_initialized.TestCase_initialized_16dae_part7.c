#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 17233
type: SIMPLE_ASSIGN
$whenCondition206 = trafo_3_1043.running.value and not pre(trafo_3_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17233};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[119]] /* $whenCondition206 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17233;
}
/*
equation index: 17234
type: WHEN

when {$whenCondition207} then
  trafo_3_1043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17234};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[120]] /* $whenCondition207 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[120] /* $whenCondition207 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[141]] /* trafo_3_1043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[119]] /* $whenCondition206 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[119] /* $whenCondition206 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[141]] /* trafo_3_1043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17234;
}
/*
equation index: 17236
type: SIMPLE_ASSIGN
$DAEres814 = if trafo_3_1043.running.value then trafo_3_1043.terminal1.i.re - trafo_3_1043.rTfoPu * (trafo_3_1043.YPu.re * line_1043_1044a.terminal1.V.re + (-trafo_3_1043.YPu.im) * line_1043_1044a.terminal1.V.im - trafo_3_1043.terminal2.i.re) else trafo_3_1043.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17236};
  (data->simulationInfo->daeModeData->residualVars[814]) /* $DAEres814 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3819]] /* trafo_3_1043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3818]] /* trafo_3_1043.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17236;
}
/*
equation index: 17237
type: SIMPLE_ASSIGN
$DAEres815 = if trafo_3_1043.running.value then trafo_3_1043.rTfoPu ^ 2.0 * load_03.terminal.V.im - (trafo_3_1043.rTfoPu * line_1043_1044a.terminal1.V.im + trafo_3_1043.ZPu.re * trafo_3_1043.terminal1.i.im + trafo_3_1043.ZPu.im * trafo_3_1043.terminal1.i.re) else trafo_3_1043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17237};
  modelica_real tmp3641;
  modelica_boolean tmp3642;
  modelica_real tmp3643;
  tmp3642 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp3642)
  {
    tmp3641 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */);
    tmp3643 = ((tmp3641 * tmp3641)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3821]] /* trafo_3_1043.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3820]] /* trafo_3_1043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)));
  }
  else
  {
    tmp3643 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[815]) /* $DAEres815 DAE_RESIDUAL_VAR */ = tmp3643;
  threadData->lastEquationSolved = 17237;
}
/*
equation index: 17238
type: SIMPLE_ASSIGN
$DAEres842 = if trafo_3_1043.running.value then trafo_3_1043.rTfoPu ^ 2.0 * load_03.terminal.V.re - (trafo_3_1043.rTfoPu * line_1043_1044a.terminal1.V.re + trafo_3_1043.ZPu.re * trafo_3_1043.terminal1.i.re - trafo_3_1043.ZPu.im * trafo_3_1043.terminal1.i.im) else trafo_3_1043.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17238};
  modelica_real tmp3644;
  modelica_boolean tmp3645;
  modelica_real tmp3646;
  tmp3645 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp3645)
  {
    tmp3644 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */);
    tmp3646 = ((tmp3644 * tmp3644)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3821]] /* trafo_3_1043.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3820]] /* trafo_3_1043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */))));
  }
  else
  {
    tmp3646 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[842]) /* $DAEres842 DAE_RESIDUAL_VAR */ = tmp3646;
  threadData->lastEquationSolved = 17238;
}
/*
equation index: 17239
type: SIMPLE_ASSIGN
$DAEres843 = if trafo_3_1043.running.value then trafo_3_1043.terminal1.i.im - trafo_3_1043.rTfoPu * (trafo_3_1043.YPu.re * line_1043_1044a.terminal1.V.im + trafo_3_1043.YPu.im * line_1043_1044a.terminal1.V.re - trafo_3_1043.terminal2.i.im) else trafo_3_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17239};
  (data->simulationInfo->daeModeData->residualVars[843]) /* $DAEres843 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3822]] /* trafo_3_1043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3819]] /* trafo_3_1043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3818]] /* trafo_3_1043.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17239;
}
/*
equation index: 17240
type: SIMPLE_ASSIGN
trafo_3_1043.U1Pu = if trafo_3_1043.running.value then if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17240};
  modelica_real tmp3647;
  modelica_real tmp3648;
  modelica_real tmp3649;
  modelica_boolean tmp3650;
  modelica_real tmp3651;
  modelica_boolean tmp3652;
  modelica_real tmp3653;
  tmp3652 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp3652)
  {
    tmp3650 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
    if(tmp3650)
    {
      tmp3651 = 0.0;
    }
    else
    {
      tmp3647 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
      tmp3648 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
      tmp3649 = (tmp3647 * tmp3647) + (tmp3648 * tmp3648);
      if(tmp3649 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3649, 0.5);
      }
      tmp3651 = sqrt(tmp3649);
    }
    tmp3653 = tmp3651;
  }
  else
  {
    tmp3653 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3148]] /* trafo_3_1043.U1Pu variable */) = tmp3653;
  threadData->lastEquationSolved = 17240;
}
/*
equation index: 17241
type: SIMPLE_ASSIGN
trafo_3_1043.U2Pu = if trafo_3_1043.running.value then if line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal1.V.re ^ 2.0 + line_1043_1044a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17241};
  modelica_real tmp3654;
  modelica_real tmp3655;
  modelica_real tmp3656;
  modelica_boolean tmp3657;
  modelica_real tmp3658;
  modelica_boolean tmp3659;
  modelica_real tmp3660;
  tmp3659 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */);
  if(tmp3659)
  {
    tmp3657 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0));
    if(tmp3657)
    {
      tmp3658 = 0.0;
    }
    else
    {
      tmp3654 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
      tmp3655 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
      tmp3656 = (tmp3654 * tmp3654) + (tmp3655 * tmp3655);
      if(tmp3656 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3656, 0.5);
      }
      tmp3658 = sqrt(tmp3656);
    }
    tmp3660 = tmp3658;
  }
  else
  {
    tmp3660 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3149]] /* trafo_3_1043.U2Pu variable */) = tmp3660;
  threadData->lastEquationSolved = 17241;
}
/*
equation index: 17242
type: SIMPLE_ASSIGN
$whenCondition208 = not pre(trafo_2_1042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17242};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[121]] /* $whenCondition208 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17242;
}
/*
equation index: 17243
type: WHEN

when {} then
  trafo_2_1042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17243};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[121]] /* $whenCondition208 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[121] /* $whenCondition208 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17243;
}
/*
equation index: 17245
type: SIMPLE_ASSIGN
$whenCondition210 = not trafo_2_1042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17245};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[124]] /* $whenCondition210 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17245;
}
/*
equation index: 17246
type: SIMPLE_ASSIGN
$whenCondition209 = trafo_2_1042.running.value and not pre(trafo_2_1042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17246};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[122]] /* $whenCondition209 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17246;
}
/*
equation index: 17247
type: WHEN

when {$whenCondition210} then
  trafo_2_1042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17247};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[124]] /* $whenCondition210 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[124] /* $whenCondition210 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[138]] /* trafo_2_1042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[122]] /* $whenCondition209 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[122] /* $whenCondition209 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[138]] /* trafo_2_1042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17247;
}
/*
equation index: 17249
type: SIMPLE_ASSIGN
$DAEres864 = if trafo_2_1042.running.value then trafo_2_1042.terminal1.i.re - trafo_2_1042.rTfoPu * (trafo_2_1042.YPu.re * line_1042_1045.terminal1.V.re + (-trafo_2_1042.YPu.im) * line_1042_1045.terminal1.V.im - trafo_2_1042.terminal2.i.re) else trafo_2_1042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17249};
  (data->simulationInfo->daeModeData->residualVars[864]) /* $DAEres864 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3792]] /* trafo_2_1042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3791]] /* trafo_2_1042.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17249;
}
/*
equation index: 17250
type: SIMPLE_ASSIGN
$DAEres867 = if trafo_2_1042.running.value then trafo_2_1042.terminal1.i.im - trafo_2_1042.rTfoPu * (trafo_2_1042.YPu.re * line_1042_1045.terminal1.V.im + trafo_2_1042.YPu.im * line_1042_1045.terminal1.V.re - trafo_2_1042.terminal2.i.im) else trafo_2_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17250};
  (data->simulationInfo->daeModeData->residualVars[867]) /* $DAEres867 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3792]] /* trafo_2_1042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3791]] /* trafo_2_1042.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17250;
}
/*
equation index: 17251
type: SIMPLE_ASSIGN
$DAEres868 = if trafo_2_1042.running.value then trafo_2_1042.rTfoPu ^ 2.0 * load_02.terminal.V.im - (trafo_2_1042.rTfoPu * line_1042_1045.terminal1.V.im + trafo_2_1042.ZPu.re * trafo_2_1042.terminal1.i.im + trafo_2_1042.ZPu.im * trafo_2_1042.terminal1.i.re) else trafo_2_1042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17251};
  modelica_real tmp3661;
  modelica_boolean tmp3662;
  modelica_real tmp3663;
  tmp3662 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp3662)
  {
    tmp3661 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */);
    tmp3663 = ((tmp3661 * tmp3661)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3794]] /* trafo_2_1042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3793]] /* trafo_2_1042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)));
  }
  else
  {
    tmp3663 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[868]) /* $DAEres868 DAE_RESIDUAL_VAR */ = tmp3663;
  threadData->lastEquationSolved = 17251;
}
/*
equation index: 17252
type: SIMPLE_ASSIGN
$DAEres870 = if trafo_2_1042.running.value then trafo_2_1042.rTfoPu ^ 2.0 * load_02.terminal.V.re - (trafo_2_1042.rTfoPu * line_1042_1045.terminal1.V.re + trafo_2_1042.ZPu.re * trafo_2_1042.terminal1.i.re - trafo_2_1042.ZPu.im * trafo_2_1042.terminal1.i.im) else trafo_2_1042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17252};
  modelica_real tmp3664;
  modelica_boolean tmp3665;
  modelica_real tmp3666;
  tmp3665 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp3665)
  {
    tmp3664 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */);
    tmp3666 = ((tmp3664 * tmp3664)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3795]] /* trafo_2_1042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3794]] /* trafo_2_1042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3793]] /* trafo_2_1042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */))));
  }
  else
  {
    tmp3666 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[870]) /* $DAEres870 DAE_RESIDUAL_VAR */ = tmp3666;
  threadData->lastEquationSolved = 17252;
}
/*
equation index: 17253
type: SIMPLE_ASSIGN
trafo_2_1042.U1Pu = if trafo_2_1042.running.value then if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17253};
  modelica_real tmp3667;
  modelica_real tmp3668;
  modelica_real tmp3669;
  modelica_boolean tmp3670;
  modelica_real tmp3671;
  modelica_boolean tmp3672;
  modelica_real tmp3673;
  tmp3672 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp3672)
  {
    tmp3670 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
    if(tmp3670)
    {
      tmp3671 = 0.0;
    }
    else
    {
      tmp3667 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
      tmp3668 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
      tmp3669 = (tmp3667 * tmp3667) + (tmp3668 * tmp3668);
      if(tmp3669 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3669, 0.5);
      }
      tmp3671 = sqrt(tmp3669);
    }
    tmp3673 = tmp3671;
  }
  else
  {
    tmp3673 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3118]] /* trafo_2_1042.U1Pu variable */) = tmp3673;
  threadData->lastEquationSolved = 17253;
}
/*
equation index: 17254
type: SIMPLE_ASSIGN
trafo_2_1042.U2Pu = if trafo_2_1042.running.value then if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17254};
  modelica_real tmp3674;
  modelica_real tmp3675;
  modelica_real tmp3676;
  modelica_boolean tmp3677;
  modelica_real tmp3678;
  modelica_boolean tmp3679;
  modelica_real tmp3680;
  tmp3679 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */);
  if(tmp3679)
  {
    tmp3677 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0));
    if(tmp3677)
    {
      tmp3678 = 0.0;
    }
    else
    {
      tmp3674 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
      tmp3675 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
      tmp3676 = (tmp3674 * tmp3674) + (tmp3675 * tmp3675);
      if(tmp3676 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3676, 0.5);
      }
      tmp3678 = sqrt(tmp3676);
    }
    tmp3680 = tmp3678;
  }
  else
  {
    tmp3680 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3119]] /* trafo_2_1042.U2Pu variable */) = tmp3680;
  threadData->lastEquationSolved = 17254;
}
/*
equation index: 17255
type: SIMPLE_ASSIGN
$whenCondition211 = not pre(trafo_1_1041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17255};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[125]] /* $whenCondition211 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17255;
}
/*
equation index: 17256
type: WHEN

when {} then
  trafo_1_1041.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17256};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[125]] /* $whenCondition211 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[125] /* $whenCondition211 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17256;
}
/*
equation index: 17258
type: SIMPLE_ASSIGN
$whenCondition213 = not trafo_1_1041.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17258};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[127]] /* $whenCondition213 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17258;
}
/*
equation index: 17259
type: SIMPLE_ASSIGN
$whenCondition212 = trafo_1_1041.running.value and not pre(trafo_1_1041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17259};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[126]] /* $whenCondition212 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17259;
}
/*
equation index: 17260
type: WHEN

when {$whenCondition213} then
  trafo_1_1041.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17260};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[127]] /* $whenCondition213 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[127] /* $whenCondition213 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[135]] /* trafo_1_1041.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[126]] /* $whenCondition212 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[126] /* $whenCondition212 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[135]] /* trafo_1_1041.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17260;
}
/*
equation index: 17262
type: SIMPLE_ASSIGN
$DAEres1192 = if trafo_1_1041.running.value then trafo_1_1041.rTfoPu ^ 2.0 * load_01.terminal.V.im - (trafo_1_1041.rTfoPu * line_1041_1043a.terminal1.V.im + trafo_1_1041.ZPu.re * trafo_1_1041.terminal1.i.im + trafo_1_1041.ZPu.im * trafo_1_1041.terminal1.i.re) else trafo_1_1041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17262};
  modelica_real tmp3681;
  modelica_boolean tmp3682;
  modelica_real tmp3683;
  tmp3682 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp3682)
  {
    tmp3681 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */);
    tmp3683 = ((tmp3681 * tmp3681)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3767]] /* trafo_1_1041.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3766]] /* trafo_1_1041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)));
  }
  else
  {
    tmp3683 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1192]) /* $DAEres1192 DAE_RESIDUAL_VAR */ = tmp3683;
  threadData->lastEquationSolved = 17262;
}
/*
equation index: 17263
type: SIMPLE_ASSIGN
$DAEres1193 = if trafo_1_1041.running.value then trafo_1_1041.terminal1.i.im - trafo_1_1041.rTfoPu * (trafo_1_1041.YPu.re * line_1041_1043a.terminal1.V.im + trafo_1_1041.YPu.im * line_1041_1043a.terminal1.V.re - trafo_1_1041.terminal2.i.im) else trafo_1_1041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17263};
  (data->simulationInfo->daeModeData->residualVars[1193]) /* $DAEres1193 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3765]] /* trafo_1_1041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3764]] /* trafo_1_1041.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17263;
}
/*
equation index: 17264
type: SIMPLE_ASSIGN
$DAEres1194 = if trafo_1_1041.running.value then trafo_1_1041.rTfoPu ^ 2.0 * load_01.terminal.V.re - (trafo_1_1041.rTfoPu * line_1041_1043a.terminal1.V.re + trafo_1_1041.ZPu.re * trafo_1_1041.terminal1.i.re - trafo_1_1041.ZPu.im * trafo_1_1041.terminal1.i.im) else trafo_1_1041.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17264};
  modelica_real tmp3684;
  modelica_boolean tmp3685;
  modelica_real tmp3686;
  tmp3685 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp3685)
  {
    tmp3684 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */);
    tmp3686 = ((tmp3684 * tmp3684)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3767]] /* trafo_1_1041.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3766]] /* trafo_1_1041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */))));
  }
  else
  {
    tmp3686 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1194]) /* $DAEres1194 DAE_RESIDUAL_VAR */ = tmp3686;
  threadData->lastEquationSolved = 17264;
}
/*
equation index: 17265
type: SIMPLE_ASSIGN
$DAEres1195 = if trafo_1_1041.running.value then trafo_1_1041.terminal1.i.re - trafo_1_1041.rTfoPu * (trafo_1_1041.YPu.re * line_1041_1043a.terminal1.V.re + (-trafo_1_1041.YPu.im) * line_1041_1043a.terminal1.V.im - trafo_1_1041.terminal2.i.re) else trafo_1_1041.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17265};
  (data->simulationInfo->daeModeData->residualVars[1195]) /* $DAEres1195 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3768]] /* trafo_1_1041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3765]] /* trafo_1_1041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3764]] /* trafo_1_1041.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17265;
}
/*
equation index: 17266
type: SIMPLE_ASSIGN
trafo_1_1041.U1Pu = if trafo_1_1041.running.value then if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17266};
  modelica_real tmp3687;
  modelica_real tmp3688;
  modelica_real tmp3689;
  modelica_boolean tmp3690;
  modelica_real tmp3691;
  modelica_boolean tmp3692;
  modelica_real tmp3693;
  tmp3692 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp3692)
  {
    tmp3690 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
    if(tmp3690)
    {
      tmp3691 = 0.0;
    }
    else
    {
      tmp3687 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
      tmp3688 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
      tmp3689 = (tmp3687 * tmp3687) + (tmp3688 * tmp3688);
      if(tmp3689 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3689, 0.5);
      }
      tmp3691 = sqrt(tmp3689);
    }
    tmp3693 = tmp3691;
  }
  else
  {
    tmp3693 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3088]] /* trafo_1_1041.U1Pu variable */) = tmp3693;
  threadData->lastEquationSolved = 17266;
}
/*
equation index: 17267
type: SIMPLE_ASSIGN
trafo_1_1041.U2Pu = if trafo_1_1041.running.value then if line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0 then 0.0 else (line_1041_1043a.terminal1.V.re ^ 2.0 + line_1041_1043a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17267};
  modelica_real tmp3694;
  modelica_real tmp3695;
  modelica_real tmp3696;
  modelica_boolean tmp3697;
  modelica_real tmp3698;
  modelica_boolean tmp3699;
  modelica_real tmp3700;
  tmp3699 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */);
  if(tmp3699)
  {
    tmp3697 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0));
    if(tmp3697)
    {
      tmp3698 = 0.0;
    }
    else
    {
      tmp3694 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
      tmp3695 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
      tmp3696 = (tmp3694 * tmp3694) + (tmp3695 * tmp3695);
      if(tmp3696 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3696, 0.5);
      }
      tmp3698 = sqrt(tmp3696);
    }
    tmp3700 = tmp3698;
  }
  else
  {
    tmp3700 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3089]] /* trafo_1_1041.U2Pu variable */) = tmp3700;
  threadData->lastEquationSolved = 17267;
}
/*
equation index: 17268
type: SIMPLE_ASSIGN
$whenCondition214 = not pre(shunt_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17268};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[128]] /* $whenCondition214 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17268;
}
/*
equation index: 17269
type: WHEN

when {} then
  shunt_4071.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17269};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[128]] /* $whenCondition214 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[128] /* $whenCondition214 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17269;
}
/*
equation index: 17271
type: SIMPLE_ASSIGN
$whenCondition216 = not shunt_4071.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17271};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[130]] /* $whenCondition216 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 17271;
}
/*
equation index: 17272
type: SIMPLE_ASSIGN
$whenCondition215 = shunt_4071.running.value and not pre(shunt_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17272};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[129]] /* $whenCondition215 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17272;
}
/*
equation index: 17273
type: WHEN

when {$whenCondition216} then
  shunt_4071.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17273};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[130]] /* $whenCondition216 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[130] /* $whenCondition216 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[124]] /* shunt_4071.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[129]] /* $whenCondition215 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[129] /* $whenCondition215 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[124]] /* shunt_4071.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17273;
}
/*
equation index: 17275
type: SIMPLE_ASSIGN
$DAEres584 = if shunt_4071.running.value then shunt_4071.PPu else shunt_4071.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17275};
  (data->simulationInfo->daeModeData->residualVars[584]) /* $DAEres584 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* shunt_4071.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */));
  threadData->lastEquationSolved = 17275;
}
/*
equation index: 17276
type: SIMPLE_ASSIGN
$DAEres587 = if shunt_4071.running.value then shunt_4071.QPu - shunt_4071.BPu * shunt_4071.UPu ^ 2.0 else shunt_4071.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17276};
  modelica_real tmp3701;
  modelica_boolean tmp3702;
  modelica_real tmp3703;
  tmp3702 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */);
  if(tmp3702)
  {
    tmp3701 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */);
    tmp3703 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2980]] /* shunt_4071.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3663]] /* shunt_4071.BPu PARAM */)) * ((tmp3701 * tmp3701)));
  }
  else
  {
    tmp3703 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[587]) /* $DAEres587 DAE_RESIDUAL_VAR */ = tmp3703;
  threadData->lastEquationSolved = 17276;
}
/*
equation index: 17277
type: SIMPLE_ASSIGN
$whenCondition217 = not pre(shunt_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17277};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[131]] /* $whenCondition217 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 17277;
}
/*
equation index: 17278
type: WHEN

when {} then
  shunt_4051.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17278};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[131]] /* $whenCondition217 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[131] /* $whenCondition217 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17278;
}
/*
equation index: 17280
type: SIMPLE_ASSIGN
$whenCondition219 = not shunt_4051.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17280};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[133]] /* $whenCondition219 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 17280;
}
/*
equation index: 17281
type: SIMPLE_ASSIGN
$whenCondition218 = shunt_4051.running.value and not pre(shunt_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17281};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[132]] /* $whenCondition218 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17281;
}
/*
equation index: 17282
type: WHEN

when {$whenCondition219} then
  shunt_4051.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17282};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[133]] /* $whenCondition219 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[133] /* $whenCondition219 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[123]] /* shunt_4051.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[132]] /* $whenCondition218 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[132] /* $whenCondition218 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[123]] /* shunt_4051.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17282;
}
/*
equation index: 17284
type: SIMPLE_ASSIGN
$DAEres931 = if shunt_4051.running.value then shunt_4051.PPu else shunt_4051.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17284};
  (data->simulationInfo->daeModeData->residualVars[931]) /* $DAEres931 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* shunt_4051.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */));
  threadData->lastEquationSolved = 17284;
}
/*
equation index: 17285
type: SIMPLE_ASSIGN
$DAEres933 = if shunt_4051.running.value then shunt_4051.QPu - shunt_4051.BPu * shunt_4051.UPu ^ 2.0 else shunt_4051.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17285};
  modelica_real tmp3704;
  modelica_boolean tmp3705;
  modelica_real tmp3706;
  tmp3705 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */);
  if(tmp3705)
  {
    tmp3704 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */);
    tmp3706 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* shunt_4051.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3656]] /* shunt_4051.BPu PARAM */)) * ((tmp3704 * tmp3704)));
  }
  else
  {
    tmp3706 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[933]) /* $DAEres933 DAE_RESIDUAL_VAR */ = tmp3706;
  threadData->lastEquationSolved = 17285;
}
/*
equation index: 17286
type: SIMPLE_ASSIGN
$whenCondition220 = not pre(shunt_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17286};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[135]] /* $whenCondition220 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17286;
}
/*
equation index: 17287
type: WHEN

when {} then
  shunt_4046.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17287};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[135]] /* $whenCondition220 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[135] /* $whenCondition220 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17287;
}
/*
equation index: 17289
type: SIMPLE_ASSIGN
$whenCondition222 = not shunt_4046.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17289};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[137]] /* $whenCondition222 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17289;
}
/*
equation index: 17290
type: SIMPLE_ASSIGN
$whenCondition221 = shunt_4046.running.value and not pre(shunt_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17290};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[136]] /* $whenCondition221 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17290;
}
/*
equation index: 17291
type: WHEN

when {$whenCondition222} then
  shunt_4046.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17291};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[137]] /* $whenCondition222 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[137] /* $whenCondition222 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[122]] /* shunt_4046.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[136]] /* $whenCondition221 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[136] /* $whenCondition221 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[122]] /* shunt_4046.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17291;
}
/*
equation index: 17293
type: SIMPLE_ASSIGN
$DAEres717 = if shunt_4046.running.value then shunt_4046.PPu else shunt_4046.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17293};
  (data->simulationInfo->daeModeData->residualVars[717]) /* $DAEres717 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2969]] /* shunt_4046.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */));
  threadData->lastEquationSolved = 17293;
}
/*
equation index: 17294
type: SIMPLE_ASSIGN
$DAEres719 = if shunt_4046.running.value then shunt_4046.QPu - shunt_4046.BPu * shunt_4046.UPu ^ 2.0 else shunt_4046.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17294};
  modelica_real tmp3707;
  modelica_boolean tmp3708;
  modelica_real tmp3709;
  tmp3708 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */);
  if(tmp3708)
  {
    tmp3707 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */);
    tmp3709 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2970]] /* shunt_4046.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3649]] /* shunt_4046.BPu PARAM */)) * ((tmp3707 * tmp3707)));
  }
  else
  {
    tmp3709 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[719]) /* $DAEres719 DAE_RESIDUAL_VAR */ = tmp3709;
  threadData->lastEquationSolved = 17294;
}
/*
equation index: 17295
type: SIMPLE_ASSIGN
$whenCondition223 = not pre(shunt_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17295};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[138]] /* $whenCondition223 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17295;
}
/*
equation index: 17296
type: WHEN

when {} then
  shunt_4043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17296};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[138]] /* $whenCondition223 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[138] /* $whenCondition223 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17296;
}
/*
equation index: 17298
type: SIMPLE_ASSIGN
$whenCondition225 = not shunt_4043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17298};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[140]] /* $whenCondition225 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17298;
}
/*
equation index: 17299
type: SIMPLE_ASSIGN
$whenCondition224 = shunt_4043.running.value and not pre(shunt_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17299};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[139]] /* $whenCondition224 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17299;
}
/*
equation index: 17300
type: WHEN

when {$whenCondition225} then
  shunt_4043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17300};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[140]] /* $whenCondition225 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[140] /* $whenCondition225 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[121]] /* shunt_4043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[139]] /* $whenCondition224 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[139] /* $whenCondition224 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[121]] /* shunt_4043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17300;
}
/*
equation index: 17302
type: SIMPLE_ASSIGN
$DAEres775 = if shunt_4043.running.value then shunt_4043.PPu else shunt_4043.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17302};
  (data->simulationInfo->daeModeData->residualVars[775]) /* $DAEres775 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2964]] /* shunt_4043.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */));
  threadData->lastEquationSolved = 17302;
}
/*
equation index: 17303
type: SIMPLE_ASSIGN
$DAEres777 = if shunt_4043.running.value then shunt_4043.QPu - shunt_4043.BPu * shunt_4043.UPu ^ 2.0 else shunt_4043.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17303};
  modelica_real tmp3710;
  modelica_boolean tmp3711;
  modelica_real tmp3712;
  tmp3711 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */);
  if(tmp3711)
  {
    tmp3710 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */);
    tmp3712 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* shunt_4043.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3642]] /* shunt_4043.BPu PARAM */)) * ((tmp3710 * tmp3710)));
  }
  else
  {
    tmp3712 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[777]) /* $DAEres777 DAE_RESIDUAL_VAR */ = tmp3712;
  threadData->lastEquationSolved = 17303;
}
/*
equation index: 17304
type: SIMPLE_ASSIGN
$whenCondition226 = not pre(shunt_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17304};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[141]] /* $whenCondition226 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17304;
}
/*
equation index: 17305
type: WHEN

when {} then
  shunt_4041.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17305};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[141]] /* $whenCondition226 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[141] /* $whenCondition226 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17305;
}
/*
equation index: 17307
type: SIMPLE_ASSIGN
$whenCondition228 = not shunt_4041.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17307};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[143]] /* $whenCondition228 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17307;
}
/*
equation index: 17308
type: SIMPLE_ASSIGN
$whenCondition227 = shunt_4041.running.value and not pre(shunt_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17308};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[142]] /* $whenCondition227 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17308;
}
/*
equation index: 17309
type: WHEN

when {$whenCondition228} then
  shunt_4041.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17309};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[143]] /* $whenCondition228 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[143] /* $whenCondition228 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[120]] /* shunt_4041.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[142]] /* $whenCondition227 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[142] /* $whenCondition227 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[120]] /* shunt_4041.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17309;
}
/*
equation index: 17311
type: SIMPLE_ASSIGN
$DAEres634 = if shunt_4041.running.value then shunt_4041.PPu else shunt_4041.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17311};
  (data->simulationInfo->daeModeData->residualVars[634]) /* $DAEres634 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* shunt_4041.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */));
  threadData->lastEquationSolved = 17311;
}
/*
equation index: 17312
type: SIMPLE_ASSIGN
$DAEres636 = if shunt_4041.running.value then shunt_4041.QPu - shunt_4041.BPu * shunt_4041.UPu ^ 2.0 else shunt_4041.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17312};
  modelica_real tmp3713;
  modelica_boolean tmp3714;
  modelica_real tmp3715;
  tmp3714 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */);
  if(tmp3714)
  {
    tmp3713 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */);
    tmp3715 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* shunt_4041.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3635]] /* shunt_4041.BPu PARAM */)) * ((tmp3713 * tmp3713)));
  }
  else
  {
    tmp3715 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[636]) /* $DAEres636 DAE_RESIDUAL_VAR */ = tmp3715;
  threadData->lastEquationSolved = 17312;
}
/*
equation index: 17313
type: SIMPLE_ASSIGN
$whenCondition229 = not pre(shunt_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17313};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[144]] /* $whenCondition229 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17313;
}
/*
equation index: 17314
type: WHEN

when {} then
  shunt_4012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17314};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[144]] /* $whenCondition229 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[144] /* $whenCondition229 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17314;
}
/*
equation index: 17316
type: SIMPLE_ASSIGN
$whenCondition231 = not shunt_4012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17316};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[147]] /* $whenCondition231 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17316;
}
/*
equation index: 17317
type: SIMPLE_ASSIGN
$whenCondition230 = shunt_4012.running.value and not pre(shunt_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17317};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[146]] /* $whenCondition230 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17317;
}
/*
equation index: 17318
type: WHEN

when {$whenCondition231} then
  shunt_4012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17318};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[147]] /* $whenCondition231 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[147] /* $whenCondition231 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[119]] /* shunt_4012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[146]] /* $whenCondition230 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[146] /* $whenCondition230 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[119]] /* shunt_4012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17318;
}
/*
equation index: 17320
type: SIMPLE_ASSIGN
$DAEres531 = if shunt_4012.running.value then shunt_4012.PPu else shunt_4012.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17320};
  (data->simulationInfo->daeModeData->residualVars[531]) /* $DAEres531 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2954]] /* shunt_4012.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */));
  threadData->lastEquationSolved = 17320;
}
/*
equation index: 17321
type: SIMPLE_ASSIGN
$DAEres533 = if shunt_4012.running.value then shunt_4012.QPu - shunt_4012.BPu * shunt_4012.UPu ^ 2.0 else shunt_4012.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17321};
  modelica_real tmp3716;
  modelica_boolean tmp3717;
  modelica_real tmp3718;
  tmp3717 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */);
  if(tmp3717)
  {
    tmp3716 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2956]] /* shunt_4012.UPu variable */);
    tmp3718 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2955]] /* shunt_4012.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3628]] /* shunt_4012.BPu PARAM */)) * ((tmp3716 * tmp3716)));
  }
  else
  {
    tmp3718 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[533]) /* $DAEres533 DAE_RESIDUAL_VAR */ = tmp3718;
  threadData->lastEquationSolved = 17321;
}
/*
equation index: 17322
type: SIMPLE_ASSIGN
$whenCondition232 = not pre(shunt_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17322};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[148]] /* $whenCondition232 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17322;
}
/*
equation index: 17323
type: WHEN

when {} then
  shunt_1045.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17323};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[148]] /* $whenCondition232 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[148] /* $whenCondition232 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17323;
}
/*
equation index: 17325
type: SIMPLE_ASSIGN
$whenCondition234 = not shunt_1045.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17325};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[150]] /* $whenCondition234 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17325;
}
/*
equation index: 17326
type: SIMPLE_ASSIGN
$whenCondition233 = shunt_1045.running.value and not pre(shunt_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17326};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[149]] /* $whenCondition233 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17326;
}
/*
equation index: 17327
type: WHEN

when {$whenCondition234} then
  shunt_1045.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17327};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[150]] /* $whenCondition234 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[150] /* $whenCondition234 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[118]] /* shunt_1045.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[149]] /* $whenCondition233 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[149] /* $whenCondition233 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[118]] /* shunt_1045.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17327;
}
/*
equation index: 17329
type: SIMPLE_ASSIGN
$DAEres901 = if shunt_1045.running.value then shunt_1045.PPu else shunt_1045.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17329};
  (data->simulationInfo->daeModeData->residualVars[901]) /* $DAEres901 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2949]] /* shunt_1045.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */));
  threadData->lastEquationSolved = 17329;
}
/*
equation index: 17330
type: SIMPLE_ASSIGN
$DAEres903 = if shunt_1045.running.value then shunt_1045.QPu - shunt_1045.BPu * shunt_1045.UPu ^ 2.0 else shunt_1045.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17330};
  modelica_real tmp3719;
  modelica_boolean tmp3720;
  modelica_real tmp3721;
  tmp3720 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */);
  if(tmp3720)
  {
    tmp3719 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */);
    tmp3721 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2950]] /* shunt_1045.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3621]] /* shunt_1045.BPu PARAM */)) * ((tmp3719 * tmp3719)));
  }
  else
  {
    tmp3721 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[903]) /* $DAEres903 DAE_RESIDUAL_VAR */ = tmp3721;
  threadData->lastEquationSolved = 17330;
}
/*
equation index: 17331
type: SIMPLE_ASSIGN
$whenCondition235 = not pre(shunt_1044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17331};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[151]] /* $whenCondition235 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17331;
}
/*
equation index: 17332
type: WHEN

when {} then
  shunt_1044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17332};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[151]] /* $whenCondition235 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[151] /* $whenCondition235 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17332;
}
/*
equation index: 17334
type: SIMPLE_ASSIGN
$whenCondition237 = not shunt_1044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17334};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[153]] /* $whenCondition237 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17334;
}
/*
equation index: 17335
type: SIMPLE_ASSIGN
$whenCondition236 = shunt_1044.running.value and not pre(shunt_1044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17335};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[152]] /* $whenCondition236 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17335;
}
/*
equation index: 17336
type: WHEN

when {$whenCondition237} then
  shunt_1044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17336};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[153]] /* $whenCondition237 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[153] /* $whenCondition237 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[117]] /* shunt_1044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[152]] /* $whenCondition236 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[152] /* $whenCondition236 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[117]] /* shunt_1044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17336;
}
/*
equation index: 17338
type: SIMPLE_ASSIGN
$DAEres850 = if shunt_1044.running.value then shunt_1044.PPu else shunt_1044.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17338};
  (data->simulationInfo->daeModeData->residualVars[850]) /* $DAEres850 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2944]] /* shunt_1044.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */));
  threadData->lastEquationSolved = 17338;
}
/*
equation index: 17339
type: SIMPLE_ASSIGN
$DAEres852 = if shunt_1044.running.value then shunt_1044.QPu - shunt_1044.BPu * shunt_1044.UPu ^ 2.0 else shunt_1044.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17339};
  modelica_real tmp3722;
  modelica_boolean tmp3723;
  modelica_real tmp3724;
  tmp3723 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */);
  if(tmp3723)
  {
    tmp3722 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */);
    tmp3724 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2945]] /* shunt_1044.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3614]] /* shunt_1044.BPu PARAM */)) * ((tmp3722 * tmp3722)));
  }
  else
  {
    tmp3724 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[852]) /* $DAEres852 DAE_RESIDUAL_VAR */ = tmp3724;
  threadData->lastEquationSolved = 17339;
}
/*
equation index: 17340
type: SIMPLE_ASSIGN
$whenCondition238 = not pre(shunt_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17340};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[154]] /* $whenCondition238 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17340;
}
/*
equation index: 17341
type: WHEN

when {} then
  shunt_1043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17341};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[154]] /* $whenCondition238 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[154] /* $whenCondition238 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17341;
}
/*
equation index: 17343
type: SIMPLE_ASSIGN
$whenCondition240 = not shunt_1043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17343};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[157]] /* $whenCondition240 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17343;
}
/*
equation index: 17344
type: SIMPLE_ASSIGN
$whenCondition239 = shunt_1043.running.value and not pre(shunt_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17344};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[155]] /* $whenCondition239 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17344;
}
/*
equation index: 17345
type: WHEN

when {$whenCondition240} then
  shunt_1043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17345};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[157]] /* $whenCondition240 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[157] /* $whenCondition240 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[116]] /* shunt_1043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[155]] /* $whenCondition239 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[155] /* $whenCondition239 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[116]] /* shunt_1043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17345;
}
/*
equation index: 17347
type: SIMPLE_ASSIGN
$DAEres804 = if shunt_1043.running.value then shunt_1043.PPu else shunt_1043.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17347};
  (data->simulationInfo->daeModeData->residualVars[804]) /* $DAEres804 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2939]] /* shunt_1043.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */));
  threadData->lastEquationSolved = 17347;
}
/*
equation index: 17348
type: SIMPLE_ASSIGN
$DAEres807 = if shunt_1043.running.value then shunt_1043.QPu - shunt_1043.BPu * shunt_1043.UPu ^ 2.0 else shunt_1043.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17348};
  modelica_real tmp3725;
  modelica_boolean tmp3726;
  modelica_real tmp3727;
  tmp3726 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */);
  if(tmp3726)
  {
    tmp3725 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */);
    tmp3727 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2940]] /* shunt_1043.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* shunt_1043.BPu PARAM */)) * ((tmp3725 * tmp3725)));
  }
  else
  {
    tmp3727 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[807]) /* $DAEres807 DAE_RESIDUAL_VAR */ = tmp3727;
  threadData->lastEquationSolved = 17348;
}
/*
equation index: 17349
type: SIMPLE_ASSIGN
$whenCondition241 = not pre(shunt_1041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17349};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[158]] /* $whenCondition241 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17349;
}
/*
equation index: 17350
type: WHEN

when {} then
  shunt_1041.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17350};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[158]] /* $whenCondition241 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[158] /* $whenCondition241 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17350;
}
/*
equation index: 17352
type: SIMPLE_ASSIGN
$whenCondition243 = not shunt_1041.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17352};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[160]] /* $whenCondition243 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17352;
}
/*
equation index: 17353
type: SIMPLE_ASSIGN
$whenCondition242 = shunt_1041.running.value and not pre(shunt_1041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17353};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[159]] /* $whenCondition242 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17353;
}
/*
equation index: 17354
type: WHEN

when {$whenCondition243} then
  shunt_1041.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17354};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[160]] /* $whenCondition243 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[160] /* $whenCondition243 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[115]] /* shunt_1041.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[159]] /* $whenCondition242 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[159] /* $whenCondition242 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[115]] /* shunt_1041.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17354;
}
/*
equation index: 17356
type: SIMPLE_ASSIGN
$DAEres1184 = if shunt_1041.running.value then shunt_1041.PPu else shunt_1041.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17356};
  (data->simulationInfo->daeModeData->residualVars[1184]) /* $DAEres1184 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2934]] /* shunt_1041.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */));
  threadData->lastEquationSolved = 17356;
}
/*
equation index: 17357
type: SIMPLE_ASSIGN
$DAEres1186 = if shunt_1041.running.value then shunt_1041.QPu - shunt_1041.BPu * shunt_1041.UPu ^ 2.0 else shunt_1041.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17357};
  modelica_real tmp3728;
  modelica_boolean tmp3729;
  modelica_real tmp3730;
  tmp3729 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */);
  if(tmp3729)
  {
    tmp3728 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* shunt_1041.UPu variable */);
    tmp3730 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* shunt_1041.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3600]] /* shunt_1041.BPu PARAM */)) * ((tmp3728 * tmp3728)));
  }
  else
  {
    tmp3730 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1186]) /* $DAEres1186 DAE_RESIDUAL_VAR */ = tmp3730;
  threadData->lastEquationSolved = 17357;
}
/*
equation index: 17358
type: SIMPLE_ASSIGN
$whenCondition244 = not pre(shunt_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17358};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[161]] /* $whenCondition244 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17358;
}
/*
equation index: 17359
type: WHEN

when {} then
  shunt_1022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17359};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[161]] /* $whenCondition244 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[161] /* $whenCondition244 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17359;
}
/*
equation index: 17361
type: SIMPLE_ASSIGN
$whenCondition246 = not shunt_1022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17361};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[163]] /* $whenCondition246 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17361;
}
/*
equation index: 17362
type: SIMPLE_ASSIGN
$whenCondition245 = shunt_1022.running.value and not pre(shunt_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17362};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[162]] /* $whenCondition245 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17362;
}
/*
equation index: 17363
type: WHEN

when {$whenCondition246} then
  shunt_1022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17363};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[163]] /* $whenCondition246 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[163] /* $whenCondition246 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[114]] /* shunt_1022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[162]] /* $whenCondition245 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[162] /* $whenCondition245 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[114]] /* shunt_1022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17363;
}
/*
equation index: 17365
type: SIMPLE_ASSIGN
$DAEres363 = if shunt_1022.running.value then shunt_1022.PPu else shunt_1022.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17365};
  (data->simulationInfo->daeModeData->residualVars[363]) /* $DAEres363 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* shunt_1022.PPu variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */));
  threadData->lastEquationSolved = 17365;
}
/*
equation index: 17366
type: SIMPLE_ASSIGN
$DAEres365 = if shunt_1022.running.value then shunt_1022.QPu - shunt_1022.BPu * shunt_1022.UPu ^ 2.0 else shunt_1022.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17366};
  modelica_real tmp3731;
  modelica_boolean tmp3732;
  modelica_real tmp3733;
  tmp3732 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */);
  if(tmp3732)
  {
    tmp3731 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */);
    tmp3733 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* shunt_1022.QPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3593]] /* shunt_1022.BPu PARAM */)) * ((tmp3731 * tmp3731)));
  }
  else
  {
    tmp3733 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[365]) /* $DAEres365 DAE_RESIDUAL_VAR */ = tmp3733;
  threadData->lastEquationSolved = 17366;
}
/*
equation index: 17367
type: SIMPLE_ASSIGN
$whenCondition247 = not pre(load_72.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17367};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[164]] /* $whenCondition247 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */));
  threadData->lastEquationSolved = 17367;
}
/*
equation index: 17368
type: WHEN

when {} then
  load_72.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17368};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[164]] /* $whenCondition247 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[164] /* $whenCondition247 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17368;
}
/*
equation index: 17370
type: SIMPLE_ASSIGN
$whenCondition249 = not load_72.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17370};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[166]] /* $whenCondition249 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */));
  threadData->lastEquationSolved = 17370;
}
/*
equation index: 17371
type: SIMPLE_ASSIGN
$whenCondition248 = load_72.running.value and not pre(load_72.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17371};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[165]] /* $whenCondition248 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17371;
}
/*
equation index: 17372
type: WHEN

when {$whenCondition249} then
  load_72.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17372};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[166]] /* $whenCondition249 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[166] /* $whenCondition249 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[113]] /* load_72.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[165]] /* $whenCondition248 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[165] /* $whenCondition248 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[113]] /* load_72.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17372;
}
/*
equation index: 17374
type: SIMPLE_ASSIGN
$DAEres540 = if load_72.running.value then load_72.PPu - (if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else PrefPu_load_72.Value0 * ((load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) / (load_72.u0Pu.re ^ 2.0 + load_72.u0Pu.im ^ 2.0)) ^ (0.5 * load_72.alpha)) else -trafo_72_4072.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17374};
  modelica_real tmp3734;
  modelica_real tmp3735;
  modelica_real tmp3736;
  modelica_real tmp3737;
  modelica_real tmp3738;
  modelica_real tmp3739;
  modelica_real tmp3740;
  modelica_real tmp3741;
  modelica_real tmp3742;
  modelica_real tmp3743;
  modelica_real tmp3744;
  modelica_boolean tmp3745;
  modelica_real tmp3746;
  modelica_boolean tmp3747;
  modelica_real tmp3748;
  tmp3747 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */);
  if(tmp3747)
  {
    tmp3745 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
    if(tmp3745)
    {
      tmp3746 = 0.0;
    }
    else
    {
      tmp3734 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
      tmp3735 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
      tmp3736 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3564]] /* load_72.u0Pu.re PARAM */);
      tmp3737 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* load_72.u0Pu.im PARAM */);
      tmp3738 = DIVISION((tmp3734 * tmp3734) + (tmp3735 * tmp3735),(tmp3736 * tmp3736) + (tmp3737 * tmp3737),"load_72.u0Pu.re ^ 2.0 + load_72.u0Pu.im ^ 2.0");
      tmp3739 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3557]] /* load_72.alpha PARAM */));
      if(tmp3738 < 0.0 && tmp3739 != 0.0)
      {
        tmp3741 = modf(tmp3739, &tmp3742);
        
        if(tmp3741 > 0.5)
        {
          tmp3741 -= 1.0;
          tmp3742 += 1.0;
        }
        else if(tmp3741 < -0.5)
        {
          tmp3741 += 1.0;
          tmp3742 -= 1.0;
        }
        
        if(fabs(tmp3741) < 1e-10)
          tmp3740 = pow(tmp3738, tmp3742);
        else
        {
          tmp3744 = modf(1.0/tmp3739, &tmp3743);
          if(tmp3744 > 0.5)
          {
            tmp3744 -= 1.0;
            tmp3743 += 1.0;
          }
          else if(tmp3744 < -0.5)
          {
            tmp3744 += 1.0;
            tmp3743 -= 1.0;
          }
          if(fabs(tmp3744) < 1e-10 && ((unsigned long)tmp3743 & 1))
          {
            tmp3740 = -pow(-tmp3738, tmp3741)*pow(tmp3738, tmp3742);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3738, tmp3739);
          }
        }
      }
      else
      {
        tmp3740 = pow(tmp3738, tmp3739);
      }
      if(isnan(tmp3740) || isinf(tmp3740))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3738, tmp3739);
      }
      tmp3746 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* PrefPu_load_72.Value0 PARAM */)) * (tmp3740);
    }
    tmp3748 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* load_72.PPu variable */) - (tmp3746);
  }
  else
  {
    tmp3748 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[540]) /* $DAEres540 DAE_RESIDUAL_VAR */ = tmp3748;
  threadData->lastEquationSolved = 17374;
}
/*
equation index: 17375
type: SIMPLE_ASSIGN
$DAEres541 = if load_72.running.value then load_72.QPu - (if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else QrefPu_load_72.Value0 * ((load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) / (load_72.u0Pu.re ^ 2.0 + load_72.u0Pu.im ^ 2.0)) ^ (0.5 * load_72.beta)) else -trafo_72_4072.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17375};
  modelica_real tmp3749;
  modelica_real tmp3750;
  modelica_real tmp3751;
  modelica_real tmp3752;
  modelica_real tmp3753;
  modelica_real tmp3754;
  modelica_real tmp3755;
  modelica_real tmp3756;
  modelica_real tmp3757;
  modelica_real tmp3758;
  modelica_real tmp3759;
  modelica_boolean tmp3760;
  modelica_real tmp3761;
  modelica_boolean tmp3762;
  modelica_real tmp3763;
  tmp3762 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */);
  if(tmp3762)
  {
    tmp3760 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
    if(tmp3760)
    {
      tmp3761 = 0.0;
    }
    else
    {
      tmp3749 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
      tmp3750 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
      tmp3751 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3564]] /* load_72.u0Pu.re PARAM */);
      tmp3752 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* load_72.u0Pu.im PARAM */);
      tmp3753 = DIVISION((tmp3749 * tmp3749) + (tmp3750 * tmp3750),(tmp3751 * tmp3751) + (tmp3752 * tmp3752),"load_72.u0Pu.re ^ 2.0 + load_72.u0Pu.im ^ 2.0");
      tmp3754 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3558]] /* load_72.beta PARAM */));
      if(tmp3753 < 0.0 && tmp3754 != 0.0)
      {
        tmp3756 = modf(tmp3754, &tmp3757);
        
        if(tmp3756 > 0.5)
        {
          tmp3756 -= 1.0;
          tmp3757 += 1.0;
        }
        else if(tmp3756 < -0.5)
        {
          tmp3756 += 1.0;
          tmp3757 -= 1.0;
        }
        
        if(fabs(tmp3756) < 1e-10)
          tmp3755 = pow(tmp3753, tmp3757);
        else
        {
          tmp3759 = modf(1.0/tmp3754, &tmp3758);
          if(tmp3759 > 0.5)
          {
            tmp3759 -= 1.0;
            tmp3758 += 1.0;
          }
          else if(tmp3759 < -0.5)
          {
            tmp3759 += 1.0;
            tmp3758 -= 1.0;
          }
          if(fabs(tmp3759) < 1e-10 && ((unsigned long)tmp3758 & 1))
          {
            tmp3755 = -pow(-tmp3753, tmp3756)*pow(tmp3753, tmp3757);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3753, tmp3754);
          }
        }
      }
      else
      {
        tmp3755 = pow(tmp3753, tmp3754);
      }
      if(isnan(tmp3755) || isinf(tmp3755))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3753, tmp3754);
      }
      tmp3761 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* QrefPu_load_72.Value0 PARAM */)) * (tmp3755);
    }
    tmp3763 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2920]] /* load_72.QPu variable */) - (tmp3761);
  }
  else
  {
    tmp3763 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[541]) /* $DAEres541 DAE_RESIDUAL_VAR */ = tmp3763;
  threadData->lastEquationSolved = 17375;
}
/*
equation index: 17376
type: SIMPLE_ASSIGN
load_72.UPu.value = if load_72.running.value then (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17376};
  modelica_real tmp3764;
  modelica_real tmp3765;
  modelica_real tmp3766;
  modelica_boolean tmp3767;
  modelica_real tmp3768;
  tmp3767 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */);
  if(tmp3767)
  {
    tmp3764 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
    tmp3765 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
    tmp3766 = (tmp3764 * tmp3764) + (tmp3765 * tmp3765);
    if(tmp3766 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3766, 0.5);
    }
    tmp3768 = sqrt(tmp3766);
  }
  else
  {
    tmp3768 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2921]] /* load_72.UPu.value variable */) = tmp3768;
  threadData->lastEquationSolved = 17376;
}
/*
equation index: 17377
type: SIMPLE_ASSIGN
$whenCondition250 = not pre(load_71.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17377};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[168]] /* $whenCondition250 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */));
  threadData->lastEquationSolved = 17377;
}
/*
equation index: 17378
type: WHEN

when {} then
  load_71.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17378};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[168]] /* $whenCondition250 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[168] /* $whenCondition250 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17378;
}
/*
equation index: 17380
type: SIMPLE_ASSIGN
$whenCondition252 = not load_71.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17380};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[170]] /* $whenCondition252 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */));
  threadData->lastEquationSolved = 17380;
}
/*
equation index: 17381
type: SIMPLE_ASSIGN
$whenCondition251 = load_71.running.value and not pre(load_71.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17381};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[169]] /* $whenCondition251 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17381;
}
/*
equation index: 17382
type: WHEN

when {$whenCondition252} then
  load_71.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17382};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[170]] /* $whenCondition252 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[170] /* $whenCondition252 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[112]] /* load_71.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[169]] /* $whenCondition251 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[169] /* $whenCondition251 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[112]] /* load_71.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17382;
}
/*
equation index: 17384
type: SIMPLE_ASSIGN
$DAEres590 = if load_71.running.value then load_71.PPu - (if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else PrefPu_load_71.Value0 * ((load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) / (load_71.u0Pu.re ^ 2.0 + load_71.u0Pu.im ^ 2.0)) ^ (0.5 * load_71.alpha)) else -trafo_71_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17384};
  modelica_real tmp3769;
  modelica_real tmp3770;
  modelica_real tmp3771;
  modelica_real tmp3772;
  modelica_real tmp3773;
  modelica_real tmp3774;
  modelica_real tmp3775;
  modelica_real tmp3776;
  modelica_real tmp3777;
  modelica_real tmp3778;
  modelica_real tmp3779;
  modelica_boolean tmp3780;
  modelica_real tmp3781;
  modelica_boolean tmp3782;
  modelica_real tmp3783;
  tmp3782 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */);
  if(tmp3782)
  {
    tmp3780 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
    if(tmp3780)
    {
      tmp3781 = 0.0;
    }
    else
    {
      tmp3769 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
      tmp3770 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
      tmp3771 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* load_71.u0Pu.re PARAM */);
      tmp3772 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3555]] /* load_71.u0Pu.im PARAM */);
      tmp3773 = DIVISION((tmp3769 * tmp3769) + (tmp3770 * tmp3770),(tmp3771 * tmp3771) + (tmp3772 * tmp3772),"load_71.u0Pu.re ^ 2.0 + load_71.u0Pu.im ^ 2.0");
      tmp3774 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3549]] /* load_71.alpha PARAM */));
      if(tmp3773 < 0.0 && tmp3774 != 0.0)
      {
        tmp3776 = modf(tmp3774, &tmp3777);
        
        if(tmp3776 > 0.5)
        {
          tmp3776 -= 1.0;
          tmp3777 += 1.0;
        }
        else if(tmp3776 < -0.5)
        {
          tmp3776 += 1.0;
          tmp3777 -= 1.0;
        }
        
        if(fabs(tmp3776) < 1e-10)
          tmp3775 = pow(tmp3773, tmp3777);
        else
        {
          tmp3779 = modf(1.0/tmp3774, &tmp3778);
          if(tmp3779 > 0.5)
          {
            tmp3779 -= 1.0;
            tmp3778 += 1.0;
          }
          else if(tmp3779 < -0.5)
          {
            tmp3779 += 1.0;
            tmp3778 -= 1.0;
          }
          if(fabs(tmp3779) < 1e-10 && ((unsigned long)tmp3778 & 1))
          {
            tmp3775 = -pow(-tmp3773, tmp3776)*pow(tmp3773, tmp3777);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3773, tmp3774);
          }
        }
      }
      else
      {
        tmp3775 = pow(tmp3773, tmp3774);
      }
      if(isnan(tmp3775) || isinf(tmp3775))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3773, tmp3774);
      }
      tmp3781 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* PrefPu_load_71.Value0 PARAM */)) * (tmp3775);
    }
    tmp3783 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2912]] /* load_71.PPu variable */) - (tmp3781);
  }
  else
  {
    tmp3783 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[590]) /* $DAEres590 DAE_RESIDUAL_VAR */ = tmp3783;
  threadData->lastEquationSolved = 17384;
}
/*
equation index: 17385
type: SIMPLE_ASSIGN
$DAEres591 = if load_71.running.value then load_71.QPu - (if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else QrefPu_load_71.Value0 * ((load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) / (load_71.u0Pu.re ^ 2.0 + load_71.u0Pu.im ^ 2.0)) ^ (0.5 * load_71.beta)) else -trafo_71_4071.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17385};
  modelica_real tmp3784;
  modelica_real tmp3785;
  modelica_real tmp3786;
  modelica_real tmp3787;
  modelica_real tmp3788;
  modelica_real tmp3789;
  modelica_real tmp3790;
  modelica_real tmp3791;
  modelica_real tmp3792;
  modelica_real tmp3793;
  modelica_real tmp3794;
  modelica_boolean tmp3795;
  modelica_real tmp3796;
  modelica_boolean tmp3797;
  modelica_real tmp3798;
  tmp3797 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */);
  if(tmp3797)
  {
    tmp3795 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
    if(tmp3795)
    {
      tmp3796 = 0.0;
    }
    else
    {
      tmp3784 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
      tmp3785 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
      tmp3786 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* load_71.u0Pu.re PARAM */);
      tmp3787 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3555]] /* load_71.u0Pu.im PARAM */);
      tmp3788 = DIVISION((tmp3784 * tmp3784) + (tmp3785 * tmp3785),(tmp3786 * tmp3786) + (tmp3787 * tmp3787),"load_71.u0Pu.re ^ 2.0 + load_71.u0Pu.im ^ 2.0");
      tmp3789 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3550]] /* load_71.beta PARAM */));
      if(tmp3788 < 0.0 && tmp3789 != 0.0)
      {
        tmp3791 = modf(tmp3789, &tmp3792);
        
        if(tmp3791 > 0.5)
        {
          tmp3791 -= 1.0;
          tmp3792 += 1.0;
        }
        else if(tmp3791 < -0.5)
        {
          tmp3791 += 1.0;
          tmp3792 -= 1.0;
        }
        
        if(fabs(tmp3791) < 1e-10)
          tmp3790 = pow(tmp3788, tmp3792);
        else
        {
          tmp3794 = modf(1.0/tmp3789, &tmp3793);
          if(tmp3794 > 0.5)
          {
            tmp3794 -= 1.0;
            tmp3793 += 1.0;
          }
          else if(tmp3794 < -0.5)
          {
            tmp3794 += 1.0;
            tmp3793 -= 1.0;
          }
          if(fabs(tmp3794) < 1e-10 && ((unsigned long)tmp3793 & 1))
          {
            tmp3790 = -pow(-tmp3788, tmp3791)*pow(tmp3788, tmp3792);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3788, tmp3789);
          }
        }
      }
      else
      {
        tmp3790 = pow(tmp3788, tmp3789);
      }
      if(isnan(tmp3790) || isinf(tmp3790))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3788, tmp3789);
      }
      tmp3796 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* QrefPu_load_71.Value0 PARAM */)) * (tmp3790);
    }
    tmp3798 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2913]] /* load_71.QPu variable */) - (tmp3796);
  }
  else
  {
    tmp3798 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[591]) /* $DAEres591 DAE_RESIDUAL_VAR */ = tmp3798;
  threadData->lastEquationSolved = 17385;
}
/*
equation index: 17386
type: SIMPLE_ASSIGN
load_71.UPu.value = if load_71.running.value then (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17386};
  modelica_real tmp3799;
  modelica_real tmp3800;
  modelica_real tmp3801;
  modelica_boolean tmp3802;
  modelica_real tmp3803;
  tmp3802 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */);
  if(tmp3802)
  {
    tmp3799 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
    tmp3800 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
    tmp3801 = (tmp3799 * tmp3799) + (tmp3800 * tmp3800);
    if(tmp3801 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3801, 0.5);
    }
    tmp3803 = sqrt(tmp3801);
  }
  else
  {
    tmp3803 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2914]] /* load_71.UPu.value variable */) = tmp3803;
  threadData->lastEquationSolved = 17386;
}
/*
equation index: 17387
type: SIMPLE_ASSIGN
$whenCondition253 = not pre(load_63.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17387};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[171]] /* $whenCondition253 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */));
  threadData->lastEquationSolved = 17387;
}
/*
equation index: 17388
type: WHEN

when {} then
  load_63.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17388};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[171]] /* $whenCondition253 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[171] /* $whenCondition253 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17388;
}
/*
equation index: 17390
type: SIMPLE_ASSIGN
$whenCondition255 = not load_63.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17390};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[173]] /* $whenCondition255 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */));
  threadData->lastEquationSolved = 17390;
}
/*
equation index: 17391
type: SIMPLE_ASSIGN
$whenCondition254 = load_63.running.value and not pre(load_63.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17391};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[172]] /* $whenCondition254 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17391;
}
/*
equation index: 17392
type: WHEN

when {$whenCondition255} then
  load_63.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17392};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[173]] /* $whenCondition255 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[173] /* $whenCondition255 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[111]] /* load_63.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[172]] /* $whenCondition254 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[172] /* $whenCondition254 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[111]] /* load_63.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17392;
}
/*
equation index: 17394
type: SIMPLE_ASSIGN
$DAEres140 = if load_63.running.value then load_63.PPu - (if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else PrefPu_load_63.Value0 * ((load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) / (load_63.u0Pu.re ^ 2.0 + load_63.u0Pu.im ^ 2.0)) ^ (0.5 * load_63.alpha)) else -trafo_63_4063.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17394};
  modelica_real tmp3804;
  modelica_real tmp3805;
  modelica_real tmp3806;
  modelica_real tmp3807;
  modelica_real tmp3808;
  modelica_real tmp3809;
  modelica_real tmp3810;
  modelica_real tmp3811;
  modelica_real tmp3812;
  modelica_real tmp3813;
  modelica_real tmp3814;
  modelica_boolean tmp3815;
  modelica_real tmp3816;
  modelica_boolean tmp3817;
  modelica_real tmp3818;
  tmp3817 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */);
  if(tmp3817)
  {
    tmp3815 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
    if(tmp3815)
    {
      tmp3816 = 0.0;
    }
    else
    {
      tmp3804 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
      tmp3805 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
      tmp3806 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3548]] /* load_63.u0Pu.re PARAM */);
      tmp3807 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* load_63.u0Pu.im PARAM */);
      tmp3808 = DIVISION((tmp3804 * tmp3804) + (tmp3805 * tmp3805),(tmp3806 * tmp3806) + (tmp3807 * tmp3807),"load_63.u0Pu.re ^ 2.0 + load_63.u0Pu.im ^ 2.0");
      tmp3809 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3541]] /* load_63.alpha PARAM */));
      if(tmp3808 < 0.0 && tmp3809 != 0.0)
      {
        tmp3811 = modf(tmp3809, &tmp3812);
        
        if(tmp3811 > 0.5)
        {
          tmp3811 -= 1.0;
          tmp3812 += 1.0;
        }
        else if(tmp3811 < -0.5)
        {
          tmp3811 += 1.0;
          tmp3812 -= 1.0;
        }
        
        if(fabs(tmp3811) < 1e-10)
          tmp3810 = pow(tmp3808, tmp3812);
        else
        {
          tmp3814 = modf(1.0/tmp3809, &tmp3813);
          if(tmp3814 > 0.5)
          {
            tmp3814 -= 1.0;
            tmp3813 += 1.0;
          }
          else if(tmp3814 < -0.5)
          {
            tmp3814 += 1.0;
            tmp3813 -= 1.0;
          }
          if(fabs(tmp3814) < 1e-10 && ((unsigned long)tmp3813 & 1))
          {
            tmp3810 = -pow(-tmp3808, tmp3811)*pow(tmp3808, tmp3812);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3808, tmp3809);
          }
        }
      }
      else
      {
        tmp3810 = pow(tmp3808, tmp3809);
      }
      if(isnan(tmp3810) || isinf(tmp3810))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3808, tmp3809);
      }
      tmp3816 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* PrefPu_load_63.Value0 PARAM */)) * (tmp3810);
    }
    tmp3818 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* load_63.PPu variable */) - (tmp3816);
  }
  else
  {
    tmp3818 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[140]) /* $DAEres140 DAE_RESIDUAL_VAR */ = tmp3818;
  threadData->lastEquationSolved = 17394;
}
/*
equation index: 17395
type: SIMPLE_ASSIGN
$DAEres141 = if load_63.running.value then load_63.QPu - (if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else QrefPu_load_63.Value0 * ((load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) / (load_63.u0Pu.re ^ 2.0 + load_63.u0Pu.im ^ 2.0)) ^ (0.5 * load_63.beta)) else -trafo_63_4063.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17395};
  modelica_real tmp3819;
  modelica_real tmp3820;
  modelica_real tmp3821;
  modelica_real tmp3822;
  modelica_real tmp3823;
  modelica_real tmp3824;
  modelica_real tmp3825;
  modelica_real tmp3826;
  modelica_real tmp3827;
  modelica_real tmp3828;
  modelica_real tmp3829;
  modelica_boolean tmp3830;
  modelica_real tmp3831;
  modelica_boolean tmp3832;
  modelica_real tmp3833;
  tmp3832 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */);
  if(tmp3832)
  {
    tmp3830 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
    if(tmp3830)
    {
      tmp3831 = 0.0;
    }
    else
    {
      tmp3819 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
      tmp3820 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
      tmp3821 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3548]] /* load_63.u0Pu.re PARAM */);
      tmp3822 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* load_63.u0Pu.im PARAM */);
      tmp3823 = DIVISION((tmp3819 * tmp3819) + (tmp3820 * tmp3820),(tmp3821 * tmp3821) + (tmp3822 * tmp3822),"load_63.u0Pu.re ^ 2.0 + load_63.u0Pu.im ^ 2.0");
      tmp3824 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3542]] /* load_63.beta PARAM */));
      if(tmp3823 < 0.0 && tmp3824 != 0.0)
      {
        tmp3826 = modf(tmp3824, &tmp3827);
        
        if(tmp3826 > 0.5)
        {
          tmp3826 -= 1.0;
          tmp3827 += 1.0;
        }
        else if(tmp3826 < -0.5)
        {
          tmp3826 += 1.0;
          tmp3827 -= 1.0;
        }
        
        if(fabs(tmp3826) < 1e-10)
          tmp3825 = pow(tmp3823, tmp3827);
        else
        {
          tmp3829 = modf(1.0/tmp3824, &tmp3828);
          if(tmp3829 > 0.5)
          {
            tmp3829 -= 1.0;
            tmp3828 += 1.0;
          }
          else if(tmp3829 < -0.5)
          {
            tmp3829 += 1.0;
            tmp3828 -= 1.0;
          }
          if(fabs(tmp3829) < 1e-10 && ((unsigned long)tmp3828 & 1))
          {
            tmp3825 = -pow(-tmp3823, tmp3826)*pow(tmp3823, tmp3827);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3823, tmp3824);
          }
        }
      }
      else
      {
        tmp3825 = pow(tmp3823, tmp3824);
      }
      if(isnan(tmp3825) || isinf(tmp3825))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3823, tmp3824);
      }
      tmp3831 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* QrefPu_load_63.Value0 PARAM */)) * (tmp3825);
    }
    tmp3833 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* load_63.QPu variable */) - (tmp3831);
  }
  else
  {
    tmp3833 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[141]) /* $DAEres141 DAE_RESIDUAL_VAR */ = tmp3833;
  threadData->lastEquationSolved = 17395;
}
/*
equation index: 17396
type: SIMPLE_ASSIGN
load_63.UPu.value = if load_63.running.value then (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17396};
  modelica_real tmp3834;
  modelica_real tmp3835;
  modelica_real tmp3836;
  modelica_boolean tmp3837;
  modelica_real tmp3838;
  tmp3837 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */);
  if(tmp3837)
  {
    tmp3834 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
    tmp3835 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
    tmp3836 = (tmp3834 * tmp3834) + (tmp3835 * tmp3835);
    if(tmp3836 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3836, 0.5);
    }
    tmp3838 = sqrt(tmp3836);
  }
  else
  {
    tmp3838 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2907]] /* load_63.UPu.value variable */) = tmp3838;
  threadData->lastEquationSolved = 17396;
}
/*
equation index: 17397
type: SIMPLE_ASSIGN
$whenCondition256 = not pre(load_62.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17397};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[174]] /* $whenCondition256 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */));
  threadData->lastEquationSolved = 17397;
}
/*
equation index: 17398
type: WHEN

when {} then
  load_62.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17398};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[174]] /* $whenCondition256 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[174] /* $whenCondition256 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17398;
}
/*
equation index: 17400
type: SIMPLE_ASSIGN
$whenCondition258 = not load_62.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17400};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[176]] /* $whenCondition258 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */));
  threadData->lastEquationSolved = 17400;
}
/*
equation index: 17401
type: SIMPLE_ASSIGN
$whenCondition257 = load_62.running.value and not pre(load_62.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17401};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[175]] /* $whenCondition257 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17401;
}
/*
equation index: 17402
type: WHEN

when {$whenCondition258} then
  load_62.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17402};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[176]] /* $whenCondition258 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[176] /* $whenCondition258 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[110]] /* load_62.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[175]] /* $whenCondition257 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[175] /* $whenCondition257 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[110]] /* load_62.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17402;
}
/*
equation index: 17404
type: SIMPLE_ASSIGN
$DAEres185 = if load_62.running.value then load_62.QPu - (if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else QrefPu_load_62.Value0 * ((load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) / (load_62.u0Pu.re ^ 2.0 + load_62.u0Pu.im ^ 2.0)) ^ (0.5 * load_62.beta)) else -trafo_62_4062.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17404};
  modelica_real tmp3839;
  modelica_real tmp3840;
  modelica_real tmp3841;
  modelica_real tmp3842;
  modelica_real tmp3843;
  modelica_real tmp3844;
  modelica_real tmp3845;
  modelica_real tmp3846;
  modelica_real tmp3847;
  modelica_real tmp3848;
  modelica_real tmp3849;
  modelica_boolean tmp3850;
  modelica_real tmp3851;
  modelica_boolean tmp3852;
  modelica_real tmp3853;
  tmp3852 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */);
  if(tmp3852)
  {
    tmp3850 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
    if(tmp3850)
    {
      tmp3851 = 0.0;
    }
    else
    {
      tmp3839 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
      tmp3840 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
      tmp3841 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* load_62.u0Pu.re PARAM */);
      tmp3842 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* load_62.u0Pu.im PARAM */);
      tmp3843 = DIVISION((tmp3839 * tmp3839) + (tmp3840 * tmp3840),(tmp3841 * tmp3841) + (tmp3842 * tmp3842),"load_62.u0Pu.re ^ 2.0 + load_62.u0Pu.im ^ 2.0");
      tmp3844 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3534]] /* load_62.beta PARAM */));
      if(tmp3843 < 0.0 && tmp3844 != 0.0)
      {
        tmp3846 = modf(tmp3844, &tmp3847);
        
        if(tmp3846 > 0.5)
        {
          tmp3846 -= 1.0;
          tmp3847 += 1.0;
        }
        else if(tmp3846 < -0.5)
        {
          tmp3846 += 1.0;
          tmp3847 -= 1.0;
        }
        
        if(fabs(tmp3846) < 1e-10)
          tmp3845 = pow(tmp3843, tmp3847);
        else
        {
          tmp3849 = modf(1.0/tmp3844, &tmp3848);
          if(tmp3849 > 0.5)
          {
            tmp3849 -= 1.0;
            tmp3848 += 1.0;
          }
          else if(tmp3849 < -0.5)
          {
            tmp3849 += 1.0;
            tmp3848 -= 1.0;
          }
          if(fabs(tmp3849) < 1e-10 && ((unsigned long)tmp3848 & 1))
          {
            tmp3845 = -pow(-tmp3843, tmp3846)*pow(tmp3843, tmp3847);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3843, tmp3844);
          }
        }
      }
      else
      {
        tmp3845 = pow(tmp3843, tmp3844);
      }
      if(isnan(tmp3845) || isinf(tmp3845))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3843, tmp3844);
      }
      tmp3851 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* QrefPu_load_62.Value0 PARAM */)) * (tmp3845);
    }
    tmp3853 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2899]] /* load_62.QPu variable */) - (tmp3851);
  }
  else
  {
    tmp3853 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[185]) /* $DAEres185 DAE_RESIDUAL_VAR */ = tmp3853;
  threadData->lastEquationSolved = 17404;
}
/*
equation index: 17405
type: SIMPLE_ASSIGN
$DAEres187 = if load_62.running.value then load_62.PPu - (if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else PrefPu_load_62.Value0 * ((load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) / (load_62.u0Pu.re ^ 2.0 + load_62.u0Pu.im ^ 2.0)) ^ (0.5 * load_62.alpha)) else -trafo_62_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17405};
  modelica_real tmp3854;
  modelica_real tmp3855;
  modelica_real tmp3856;
  modelica_real tmp3857;
  modelica_real tmp3858;
  modelica_real tmp3859;
  modelica_real tmp3860;
  modelica_real tmp3861;
  modelica_real tmp3862;
  modelica_real tmp3863;
  modelica_real tmp3864;
  modelica_boolean tmp3865;
  modelica_real tmp3866;
  modelica_boolean tmp3867;
  modelica_real tmp3868;
  tmp3867 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */);
  if(tmp3867)
  {
    tmp3865 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
    if(tmp3865)
    {
      tmp3866 = 0.0;
    }
    else
    {
      tmp3854 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
      tmp3855 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
      tmp3856 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* load_62.u0Pu.re PARAM */);
      tmp3857 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* load_62.u0Pu.im PARAM */);
      tmp3858 = DIVISION((tmp3854 * tmp3854) + (tmp3855 * tmp3855),(tmp3856 * tmp3856) + (tmp3857 * tmp3857),"load_62.u0Pu.re ^ 2.0 + load_62.u0Pu.im ^ 2.0");
      tmp3859 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3533]] /* load_62.alpha PARAM */));
      if(tmp3858 < 0.0 && tmp3859 != 0.0)
      {
        tmp3861 = modf(tmp3859, &tmp3862);
        
        if(tmp3861 > 0.5)
        {
          tmp3861 -= 1.0;
          tmp3862 += 1.0;
        }
        else if(tmp3861 < -0.5)
        {
          tmp3861 += 1.0;
          tmp3862 -= 1.0;
        }
        
        if(fabs(tmp3861) < 1e-10)
          tmp3860 = pow(tmp3858, tmp3862);
        else
        {
          tmp3864 = modf(1.0/tmp3859, &tmp3863);
          if(tmp3864 > 0.5)
          {
            tmp3864 -= 1.0;
            tmp3863 += 1.0;
          }
          else if(tmp3864 < -0.5)
          {
            tmp3864 += 1.0;
            tmp3863 -= 1.0;
          }
          if(fabs(tmp3864) < 1e-10 && ((unsigned long)tmp3863 & 1))
          {
            tmp3860 = -pow(-tmp3858, tmp3861)*pow(tmp3858, tmp3862);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3858, tmp3859);
          }
        }
      }
      else
      {
        tmp3860 = pow(tmp3858, tmp3859);
      }
      if(isnan(tmp3860) || isinf(tmp3860))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3858, tmp3859);
      }
      tmp3866 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* PrefPu_load_62.Value0 PARAM */)) * (tmp3860);
    }
    tmp3868 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2898]] /* load_62.PPu variable */) - (tmp3866);
  }
  else
  {
    tmp3868 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[187]) /* $DAEres187 DAE_RESIDUAL_VAR */ = tmp3868;
  threadData->lastEquationSolved = 17405;
}
/*
equation index: 17406
type: SIMPLE_ASSIGN
load_62.UPu.value = if load_62.running.value then (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17406};
  modelica_real tmp3869;
  modelica_real tmp3870;
  modelica_real tmp3871;
  modelica_boolean tmp3872;
  modelica_real tmp3873;
  tmp3872 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */);
  if(tmp3872)
  {
    tmp3869 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
    tmp3870 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
    tmp3871 = (tmp3869 * tmp3869) + (tmp3870 * tmp3870);
    if(tmp3871 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3871, 0.5);
    }
    tmp3873 = sqrt(tmp3871);
  }
  else
  {
    tmp3873 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2900]] /* load_62.UPu.value variable */) = tmp3873;
  threadData->lastEquationSolved = 17406;
}
/*
equation index: 17407
type: SIMPLE_ASSIGN
$whenCondition259 = not pre(load_61.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17407};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[177]] /* $whenCondition259 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */));
  threadData->lastEquationSolved = 17407;
}
/*
equation index: 17408
type: WHEN

when {} then
  load_61.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17408};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[177]] /* $whenCondition259 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[177] /* $whenCondition259 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17408;
}
/*
equation index: 17410
type: SIMPLE_ASSIGN
$whenCondition261 = not load_61.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17410};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[180]] /* $whenCondition261 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */));
  threadData->lastEquationSolved = 17410;
}
/*
equation index: 17411
type: SIMPLE_ASSIGN
$whenCondition260 = load_61.running.value and not pre(load_61.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17411};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[179]] /* $whenCondition260 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17411;
}
/*
equation index: 17412
type: WHEN

when {$whenCondition261} then
  load_61.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17412};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[180]] /* $whenCondition261 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[180] /* $whenCondition261 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[109]] /* load_61.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[179]] /* $whenCondition260 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[179] /* $whenCondition260 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[109]] /* load_61.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17412;
}
/*
equation index: 17414
type: SIMPLE_ASSIGN
$DAEres626 = if load_61.running.value then load_61.QPu - (if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else QrefPu_load_61.Value0 * ((load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) / (load_61.u0Pu.re ^ 2.0 + load_61.u0Pu.im ^ 2.0)) ^ (0.5 * load_61.beta)) else -trafo_61_4061.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17414};
  modelica_real tmp3874;
  modelica_real tmp3875;
  modelica_real tmp3876;
  modelica_real tmp3877;
  modelica_real tmp3878;
  modelica_real tmp3879;
  modelica_real tmp3880;
  modelica_real tmp3881;
  modelica_real tmp3882;
  modelica_real tmp3883;
  modelica_real tmp3884;
  modelica_boolean tmp3885;
  modelica_real tmp3886;
  modelica_boolean tmp3887;
  modelica_real tmp3888;
  tmp3887 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */);
  if(tmp3887)
  {
    tmp3885 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
    if(tmp3885)
    {
      tmp3886 = 0.0;
    }
    else
    {
      tmp3874 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
      tmp3875 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
      tmp3876 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3532]] /* load_61.u0Pu.re PARAM */);
      tmp3877 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3531]] /* load_61.u0Pu.im PARAM */);
      tmp3878 = DIVISION((tmp3874 * tmp3874) + (tmp3875 * tmp3875),(tmp3876 * tmp3876) + (tmp3877 * tmp3877),"load_61.u0Pu.re ^ 2.0 + load_61.u0Pu.im ^ 2.0");
      tmp3879 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3526]] /* load_61.beta PARAM */));
      if(tmp3878 < 0.0 && tmp3879 != 0.0)
      {
        tmp3881 = modf(tmp3879, &tmp3882);
        
        if(tmp3881 > 0.5)
        {
          tmp3881 -= 1.0;
          tmp3882 += 1.0;
        }
        else if(tmp3881 < -0.5)
        {
          tmp3881 += 1.0;
          tmp3882 -= 1.0;
        }
        
        if(fabs(tmp3881) < 1e-10)
          tmp3880 = pow(tmp3878, tmp3882);
        else
        {
          tmp3884 = modf(1.0/tmp3879, &tmp3883);
          if(tmp3884 > 0.5)
          {
            tmp3884 -= 1.0;
            tmp3883 += 1.0;
          }
          else if(tmp3884 < -0.5)
          {
            tmp3884 += 1.0;
            tmp3883 -= 1.0;
          }
          if(fabs(tmp3884) < 1e-10 && ((unsigned long)tmp3883 & 1))
          {
            tmp3880 = -pow(-tmp3878, tmp3881)*pow(tmp3878, tmp3882);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3878, tmp3879);
          }
        }
      }
      else
      {
        tmp3880 = pow(tmp3878, tmp3879);
      }
      if(isnan(tmp3880) || isinf(tmp3880))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3878, tmp3879);
      }
      tmp3886 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* QrefPu_load_61.Value0 PARAM */)) * (tmp3880);
    }
    tmp3888 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2892]] /* load_61.QPu variable */) - (tmp3886);
  }
  else
  {
    tmp3888 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[626]) /* $DAEres626 DAE_RESIDUAL_VAR */ = tmp3888;
  threadData->lastEquationSolved = 17414;
}
/*
equation index: 17415
type: SIMPLE_ASSIGN
$DAEres1159 = if load_61.running.value then load_61.PPu - (if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else PrefPu_load_61.Value0 * ((load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) / (load_61.u0Pu.re ^ 2.0 + load_61.u0Pu.im ^ 2.0)) ^ (0.5 * load_61.alpha)) else -trafo_61_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17415};
  modelica_real tmp3889;
  modelica_real tmp3890;
  modelica_real tmp3891;
  modelica_real tmp3892;
  modelica_real tmp3893;
  modelica_real tmp3894;
  modelica_real tmp3895;
  modelica_real tmp3896;
  modelica_real tmp3897;
  modelica_real tmp3898;
  modelica_real tmp3899;
  modelica_boolean tmp3900;
  modelica_real tmp3901;
  modelica_boolean tmp3902;
  modelica_real tmp3903;
  tmp3902 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */);
  if(tmp3902)
  {
    tmp3900 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
    if(tmp3900)
    {
      tmp3901 = 0.0;
    }
    else
    {
      tmp3889 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
      tmp3890 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
      tmp3891 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3532]] /* load_61.u0Pu.re PARAM */);
      tmp3892 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3531]] /* load_61.u0Pu.im PARAM */);
      tmp3893 = DIVISION((tmp3889 * tmp3889) + (tmp3890 * tmp3890),(tmp3891 * tmp3891) + (tmp3892 * tmp3892),"load_61.u0Pu.re ^ 2.0 + load_61.u0Pu.im ^ 2.0");
      tmp3894 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3525]] /* load_61.alpha PARAM */));
      if(tmp3893 < 0.0 && tmp3894 != 0.0)
      {
        tmp3896 = modf(tmp3894, &tmp3897);
        
        if(tmp3896 > 0.5)
        {
          tmp3896 -= 1.0;
          tmp3897 += 1.0;
        }
        else if(tmp3896 < -0.5)
        {
          tmp3896 += 1.0;
          tmp3897 -= 1.0;
        }
        
        if(fabs(tmp3896) < 1e-10)
          tmp3895 = pow(tmp3893, tmp3897);
        else
        {
          tmp3899 = modf(1.0/tmp3894, &tmp3898);
          if(tmp3899 > 0.5)
          {
            tmp3899 -= 1.0;
            tmp3898 += 1.0;
          }
          else if(tmp3899 < -0.5)
          {
            tmp3899 += 1.0;
            tmp3898 -= 1.0;
          }
          if(fabs(tmp3899) < 1e-10 && ((unsigned long)tmp3898 & 1))
          {
            tmp3895 = -pow(-tmp3893, tmp3896)*pow(tmp3893, tmp3897);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3893, tmp3894);
          }
        }
      }
      else
      {
        tmp3895 = pow(tmp3893, tmp3894);
      }
      if(isnan(tmp3895) || isinf(tmp3895))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3893, tmp3894);
      }
      tmp3901 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* PrefPu_load_61.Value0 PARAM */)) * (tmp3895);
    }
    tmp3903 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2891]] /* load_61.PPu variable */) - (tmp3901);
  }
  else
  {
    tmp3903 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1159]) /* $DAEres1159 DAE_RESIDUAL_VAR */ = tmp3903;
  threadData->lastEquationSolved = 17415;
}
/*
equation index: 17416
type: SIMPLE_ASSIGN
load_61.UPu.value = if load_61.running.value then (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17416};
  modelica_real tmp3904;
  modelica_real tmp3905;
  modelica_real tmp3906;
  modelica_boolean tmp3907;
  modelica_real tmp3908;
  tmp3907 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */);
  if(tmp3907)
  {
    tmp3904 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
    tmp3905 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
    tmp3906 = (tmp3904 * tmp3904) + (tmp3905 * tmp3905);
    if(tmp3906 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3906, 0.5);
    }
    tmp3908 = sqrt(tmp3906);
  }
  else
  {
    tmp3908 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2893]] /* load_61.UPu.value variable */) = tmp3908;
  threadData->lastEquationSolved = 17416;
}
/*
equation index: 17417
type: SIMPLE_ASSIGN
$whenCondition262 = not pre(load_51.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17417};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[181]] /* $whenCondition262 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */));
  threadData->lastEquationSolved = 17417;
}
/*
equation index: 17418
type: WHEN

when {} then
  load_51.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17418};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[181]] /* $whenCondition262 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[181] /* $whenCondition262 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17418;
}
/*
equation index: 17420
type: SIMPLE_ASSIGN
$whenCondition264 = not load_51.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17420};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[183]] /* $whenCondition264 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */));
  threadData->lastEquationSolved = 17420;
}
/*
equation index: 17421
type: SIMPLE_ASSIGN
$whenCondition263 = load_51.running.value and not pre(load_51.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17421};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[182]] /* $whenCondition263 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17421;
}
/*
equation index: 17422
type: WHEN

when {$whenCondition264} then
  load_51.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17422};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[183]] /* $whenCondition264 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[183] /* $whenCondition264 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[108]] /* load_51.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[182]] /* $whenCondition263 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[182] /* $whenCondition263 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[108]] /* load_51.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17422;
}
/*
equation index: 17424
type: SIMPLE_ASSIGN
$DAEres921 = if load_51.running.value then load_51.QPu - (if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else QrefPu_load_51.Value0 * ((load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) / (load_51.u0Pu.re ^ 2.0 + load_51.u0Pu.im ^ 2.0)) ^ (0.5 * load_51.beta)) else -trafo_51_4051.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17424};
  modelica_real tmp3909;
  modelica_real tmp3910;
  modelica_real tmp3911;
  modelica_real tmp3912;
  modelica_real tmp3913;
  modelica_real tmp3914;
  modelica_real tmp3915;
  modelica_real tmp3916;
  modelica_real tmp3917;
  modelica_real tmp3918;
  modelica_real tmp3919;
  modelica_boolean tmp3920;
  modelica_real tmp3921;
  modelica_boolean tmp3922;
  modelica_real tmp3923;
  tmp3922 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */);
  if(tmp3922)
  {
    tmp3920 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
    if(tmp3920)
    {
      tmp3921 = 0.0;
    }
    else
    {
      tmp3909 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
      tmp3910 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
      tmp3911 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* load_51.u0Pu.re PARAM */);
      tmp3912 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3523]] /* load_51.u0Pu.im PARAM */);
      tmp3913 = DIVISION((tmp3909 * tmp3909) + (tmp3910 * tmp3910),(tmp3911 * tmp3911) + (tmp3912 * tmp3912),"load_51.u0Pu.re ^ 2.0 + load_51.u0Pu.im ^ 2.0");
      tmp3914 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3518]] /* load_51.beta PARAM */));
      if(tmp3913 < 0.0 && tmp3914 != 0.0)
      {
        tmp3916 = modf(tmp3914, &tmp3917);
        
        if(tmp3916 > 0.5)
        {
          tmp3916 -= 1.0;
          tmp3917 += 1.0;
        }
        else if(tmp3916 < -0.5)
        {
          tmp3916 += 1.0;
          tmp3917 -= 1.0;
        }
        
        if(fabs(tmp3916) < 1e-10)
          tmp3915 = pow(tmp3913, tmp3917);
        else
        {
          tmp3919 = modf(1.0/tmp3914, &tmp3918);
          if(tmp3919 > 0.5)
          {
            tmp3919 -= 1.0;
            tmp3918 += 1.0;
          }
          else if(tmp3919 < -0.5)
          {
            tmp3919 += 1.0;
            tmp3918 -= 1.0;
          }
          if(fabs(tmp3919) < 1e-10 && ((unsigned long)tmp3918 & 1))
          {
            tmp3915 = -pow(-tmp3913, tmp3916)*pow(tmp3913, tmp3917);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3913, tmp3914);
          }
        }
      }
      else
      {
        tmp3915 = pow(tmp3913, tmp3914);
      }
      if(isnan(tmp3915) || isinf(tmp3915))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3913, tmp3914);
      }
      tmp3921 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* QrefPu_load_51.Value0 PARAM */)) * (tmp3915);
    }
    tmp3923 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* load_51.QPu variable */) - (tmp3921);
  }
  else
  {
    tmp3923 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[921]) /* $DAEres921 DAE_RESIDUAL_VAR */ = tmp3923;
  threadData->lastEquationSolved = 17424;
}
/*
equation index: 17425
type: SIMPLE_ASSIGN
$DAEres923 = if load_51.running.value then load_51.PPu - (if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else PrefPu_load_51.Value0 * ((load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) / (load_51.u0Pu.re ^ 2.0 + load_51.u0Pu.im ^ 2.0)) ^ (0.5 * load_51.alpha)) else -trafo_51_4051.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17425};
  modelica_real tmp3924;
  modelica_real tmp3925;
  modelica_real tmp3926;
  modelica_real tmp3927;
  modelica_real tmp3928;
  modelica_real tmp3929;
  modelica_real tmp3930;
  modelica_real tmp3931;
  modelica_real tmp3932;
  modelica_real tmp3933;
  modelica_real tmp3934;
  modelica_boolean tmp3935;
  modelica_real tmp3936;
  modelica_boolean tmp3937;
  modelica_real tmp3938;
  tmp3937 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */);
  if(tmp3937)
  {
    tmp3935 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
    if(tmp3935)
    {
      tmp3936 = 0.0;
    }
    else
    {
      tmp3924 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
      tmp3925 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
      tmp3926 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* load_51.u0Pu.re PARAM */);
      tmp3927 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3523]] /* load_51.u0Pu.im PARAM */);
      tmp3928 = DIVISION((tmp3924 * tmp3924) + (tmp3925 * tmp3925),(tmp3926 * tmp3926) + (tmp3927 * tmp3927),"load_51.u0Pu.re ^ 2.0 + load_51.u0Pu.im ^ 2.0");
      tmp3929 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* load_51.alpha PARAM */));
      if(tmp3928 < 0.0 && tmp3929 != 0.0)
      {
        tmp3931 = modf(tmp3929, &tmp3932);
        
        if(tmp3931 > 0.5)
        {
          tmp3931 -= 1.0;
          tmp3932 += 1.0;
        }
        else if(tmp3931 < -0.5)
        {
          tmp3931 += 1.0;
          tmp3932 -= 1.0;
        }
        
        if(fabs(tmp3931) < 1e-10)
          tmp3930 = pow(tmp3928, tmp3932);
        else
        {
          tmp3934 = modf(1.0/tmp3929, &tmp3933);
          if(tmp3934 > 0.5)
          {
            tmp3934 -= 1.0;
            tmp3933 += 1.0;
          }
          else if(tmp3934 < -0.5)
          {
            tmp3934 += 1.0;
            tmp3933 -= 1.0;
          }
          if(fabs(tmp3934) < 1e-10 && ((unsigned long)tmp3933 & 1))
          {
            tmp3930 = -pow(-tmp3928, tmp3931)*pow(tmp3928, tmp3932);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3928, tmp3929);
          }
        }
      }
      else
      {
        tmp3930 = pow(tmp3928, tmp3929);
      }
      if(isnan(tmp3930) || isinf(tmp3930))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3928, tmp3929);
      }
      tmp3936 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* PrefPu_load_51.Value0 PARAM */)) * (tmp3930);
    }
    tmp3938 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2884]] /* load_51.PPu variable */) - (tmp3936);
  }
  else
  {
    tmp3938 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[923]) /* $DAEres923 DAE_RESIDUAL_VAR */ = tmp3938;
  threadData->lastEquationSolved = 17425;
}
/*
equation index: 17426
type: SIMPLE_ASSIGN
load_51.UPu.value = if load_51.running.value then (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17426};
  modelica_real tmp3939;
  modelica_real tmp3940;
  modelica_real tmp3941;
  modelica_boolean tmp3942;
  modelica_real tmp3943;
  tmp3942 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */);
  if(tmp3942)
  {
    tmp3939 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
    tmp3940 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
    tmp3941 = (tmp3939 * tmp3939) + (tmp3940 * tmp3940);
    if(tmp3941 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3941, 0.5);
    }
    tmp3943 = sqrt(tmp3941);
  }
  else
  {
    tmp3943 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2886]] /* load_51.UPu.value variable */) = tmp3943;
  threadData->lastEquationSolved = 17426;
}
/*
equation index: 17427
type: SIMPLE_ASSIGN
$whenCondition265 = not pre(load_47.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17427};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[184]] /* $whenCondition265 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */));
  threadData->lastEquationSolved = 17427;
}
/*
equation index: 17428
type: WHEN

when {} then
  load_47.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17428};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[184]] /* $whenCondition265 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[184] /* $whenCondition265 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17428;
}
/*
equation index: 17430
type: SIMPLE_ASSIGN
$whenCondition267 = not load_47.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17430};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[186]] /* $whenCondition267 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */));
  threadData->lastEquationSolved = 17430;
}
/*
equation index: 17431
type: SIMPLE_ASSIGN
$whenCondition266 = load_47.running.value and not pre(load_47.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17431};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[185]] /* $whenCondition266 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17431;
}
/*
equation index: 17432
type: WHEN

when {$whenCondition267} then
  load_47.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17432};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[186]] /* $whenCondition267 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[186] /* $whenCondition267 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[107]] /* load_47.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[185]] /* $whenCondition266 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[185] /* $whenCondition266 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[107]] /* load_47.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17432;
}
/*
equation index: 17434
type: SIMPLE_ASSIGN
$DAEres710 = if load_47.running.value then load_47.PPu - (if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else PrefPu_load_47.Value0 * ((load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) / (load_47.u0Pu.re ^ 2.0 + load_47.u0Pu.im ^ 2.0)) ^ (0.5 * load_47.alpha)) else -trafo_47_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17434};
  modelica_real tmp3944;
  modelica_real tmp3945;
  modelica_real tmp3946;
  modelica_real tmp3947;
  modelica_real tmp3948;
  modelica_real tmp3949;
  modelica_real tmp3950;
  modelica_real tmp3951;
  modelica_real tmp3952;
  modelica_real tmp3953;
  modelica_real tmp3954;
  modelica_boolean tmp3955;
  modelica_real tmp3956;
  modelica_boolean tmp3957;
  modelica_real tmp3958;
  tmp3957 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */);
  if(tmp3957)
  {
    tmp3955 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
    if(tmp3955)
    {
      tmp3956 = 0.0;
    }
    else
    {
      tmp3944 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
      tmp3945 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
      tmp3946 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* load_47.u0Pu.re PARAM */);
      tmp3947 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3515]] /* load_47.u0Pu.im PARAM */);
      tmp3948 = DIVISION((tmp3944 * tmp3944) + (tmp3945 * tmp3945),(tmp3946 * tmp3946) + (tmp3947 * tmp3947),"load_47.u0Pu.re ^ 2.0 + load_47.u0Pu.im ^ 2.0");
      tmp3949 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3509]] /* load_47.alpha PARAM */));
      if(tmp3948 < 0.0 && tmp3949 != 0.0)
      {
        tmp3951 = modf(tmp3949, &tmp3952);
        
        if(tmp3951 > 0.5)
        {
          tmp3951 -= 1.0;
          tmp3952 += 1.0;
        }
        else if(tmp3951 < -0.5)
        {
          tmp3951 += 1.0;
          tmp3952 -= 1.0;
        }
        
        if(fabs(tmp3951) < 1e-10)
          tmp3950 = pow(tmp3948, tmp3952);
        else
        {
          tmp3954 = modf(1.0/tmp3949, &tmp3953);
          if(tmp3954 > 0.5)
          {
            tmp3954 -= 1.0;
            tmp3953 += 1.0;
          }
          else if(tmp3954 < -0.5)
          {
            tmp3954 += 1.0;
            tmp3953 -= 1.0;
          }
          if(fabs(tmp3954) < 1e-10 && ((unsigned long)tmp3953 & 1))
          {
            tmp3950 = -pow(-tmp3948, tmp3951)*pow(tmp3948, tmp3952);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3948, tmp3949);
          }
        }
      }
      else
      {
        tmp3950 = pow(tmp3948, tmp3949);
      }
      if(isnan(tmp3950) || isinf(tmp3950))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3948, tmp3949);
      }
      tmp3956 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* PrefPu_load_47.Value0 PARAM */)) * (tmp3950);
    }
    tmp3958 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* load_47.PPu variable */) - (tmp3956);
  }
  else
  {
    tmp3958 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[710]) /* $DAEres710 DAE_RESIDUAL_VAR */ = tmp3958;
  threadData->lastEquationSolved = 17434;
}
/*
equation index: 17435
type: SIMPLE_ASSIGN
$DAEres711 = if load_47.running.value then load_47.QPu - (if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else QrefPu_load_47.Value0 * ((load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) / (load_47.u0Pu.re ^ 2.0 + load_47.u0Pu.im ^ 2.0)) ^ (0.5 * load_47.beta)) else -trafo_47_4047.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17435};
  modelica_real tmp3959;
  modelica_real tmp3960;
  modelica_real tmp3961;
  modelica_real tmp3962;
  modelica_real tmp3963;
  modelica_real tmp3964;
  modelica_real tmp3965;
  modelica_real tmp3966;
  modelica_real tmp3967;
  modelica_real tmp3968;
  modelica_real tmp3969;
  modelica_boolean tmp3970;
  modelica_real tmp3971;
  modelica_boolean tmp3972;
  modelica_real tmp3973;
  tmp3972 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */);
  if(tmp3972)
  {
    tmp3970 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
    if(tmp3970)
    {
      tmp3971 = 0.0;
    }
    else
    {
      tmp3959 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
      tmp3960 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
      tmp3961 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* load_47.u0Pu.re PARAM */);
      tmp3962 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3515]] /* load_47.u0Pu.im PARAM */);
      tmp3963 = DIVISION((tmp3959 * tmp3959) + (tmp3960 * tmp3960),(tmp3961 * tmp3961) + (tmp3962 * tmp3962),"load_47.u0Pu.re ^ 2.0 + load_47.u0Pu.im ^ 2.0");
      tmp3964 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3510]] /* load_47.beta PARAM */));
      if(tmp3963 < 0.0 && tmp3964 != 0.0)
      {
        tmp3966 = modf(tmp3964, &tmp3967);
        
        if(tmp3966 > 0.5)
        {
          tmp3966 -= 1.0;
          tmp3967 += 1.0;
        }
        else if(tmp3966 < -0.5)
        {
          tmp3966 += 1.0;
          tmp3967 -= 1.0;
        }
        
        if(fabs(tmp3966) < 1e-10)
          tmp3965 = pow(tmp3963, tmp3967);
        else
        {
          tmp3969 = modf(1.0/tmp3964, &tmp3968);
          if(tmp3969 > 0.5)
          {
            tmp3969 -= 1.0;
            tmp3968 += 1.0;
          }
          else if(tmp3969 < -0.5)
          {
            tmp3969 += 1.0;
            tmp3968 -= 1.0;
          }
          if(fabs(tmp3969) < 1e-10 && ((unsigned long)tmp3968 & 1))
          {
            tmp3965 = -pow(-tmp3963, tmp3966)*pow(tmp3963, tmp3967);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3963, tmp3964);
          }
        }
      }
      else
      {
        tmp3965 = pow(tmp3963, tmp3964);
      }
      if(isnan(tmp3965) || isinf(tmp3965))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3963, tmp3964);
      }
      tmp3971 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* QrefPu_load_47.Value0 PARAM */)) * (tmp3965);
    }
    tmp3973 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* load_47.QPu variable */) - (tmp3971);
  }
  else
  {
    tmp3973 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[711]) /* $DAEres711 DAE_RESIDUAL_VAR */ = tmp3973;
  threadData->lastEquationSolved = 17435;
}
/*
equation index: 17436
type: SIMPLE_ASSIGN
load_47.UPu.value = if load_47.running.value then (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17436};
  modelica_real tmp3974;
  modelica_real tmp3975;
  modelica_real tmp3976;
  modelica_boolean tmp3977;
  modelica_real tmp3978;
  tmp3977 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */);
  if(tmp3977)
  {
    tmp3974 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
    tmp3975 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
    tmp3976 = (tmp3974 * tmp3974) + (tmp3975 * tmp3975);
    if(tmp3976 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3976, 0.5);
    }
    tmp3978 = sqrt(tmp3976);
  }
  else
  {
    tmp3978 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2879]] /* load_47.UPu.value variable */) = tmp3978;
  threadData->lastEquationSolved = 17436;
}
/*
equation index: 17437
type: SIMPLE_ASSIGN
$whenCondition268 = not pre(load_46.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17437};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[187]] /* $whenCondition268 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */));
  threadData->lastEquationSolved = 17437;
}
/*
equation index: 17438
type: WHEN

when {} then
  load_46.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17438};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[187]] /* $whenCondition268 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[187] /* $whenCondition268 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17438;
}
/*
equation index: 17440
type: SIMPLE_ASSIGN
$whenCondition270 = not load_46.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17440};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[190]] /* $whenCondition270 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */));
  threadData->lastEquationSolved = 17440;
}
/*
equation index: 17441
type: SIMPLE_ASSIGN
$whenCondition269 = load_46.running.value and not pre(load_46.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17441};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[188]] /* $whenCondition269 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17441;
}
/*
equation index: 17442
type: WHEN

when {$whenCondition270} then
  load_46.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17442};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[190]] /* $whenCondition270 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[190] /* $whenCondition270 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[106]] /* load_46.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[188]] /* $whenCondition269 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[188] /* $whenCondition269 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[106]] /* load_46.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17442;
}
/*
equation index: 17444
type: SIMPLE_ASSIGN
$DAEres721 = if load_46.running.value then load_46.QPu - (if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else QrefPu_load_46.Value0 * ((load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) / (load_46.u0Pu.re ^ 2.0 + load_46.u0Pu.im ^ 2.0)) ^ (0.5 * load_46.beta)) else -trafo_46_4046.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17444};
  modelica_real tmp3979;
  modelica_real tmp3980;
  modelica_real tmp3981;
  modelica_real tmp3982;
  modelica_real tmp3983;
  modelica_real tmp3984;
  modelica_real tmp3985;
  modelica_real tmp3986;
  modelica_real tmp3987;
  modelica_real tmp3988;
  modelica_real tmp3989;
  modelica_boolean tmp3990;
  modelica_real tmp3991;
  modelica_boolean tmp3992;
  modelica_real tmp3993;
  tmp3992 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */);
  if(tmp3992)
  {
    tmp3990 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
    if(tmp3990)
    {
      tmp3991 = 0.0;
    }
    else
    {
      tmp3979 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
      tmp3980 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
      tmp3981 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3508]] /* load_46.u0Pu.re PARAM */);
      tmp3982 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3507]] /* load_46.u0Pu.im PARAM */);
      tmp3983 = DIVISION((tmp3979 * tmp3979) + (tmp3980 * tmp3980),(tmp3981 * tmp3981) + (tmp3982 * tmp3982),"load_46.u0Pu.re ^ 2.0 + load_46.u0Pu.im ^ 2.0");
      tmp3984 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3502]] /* load_46.beta PARAM */));
      if(tmp3983 < 0.0 && tmp3984 != 0.0)
      {
        tmp3986 = modf(tmp3984, &tmp3987);
        
        if(tmp3986 > 0.5)
        {
          tmp3986 -= 1.0;
          tmp3987 += 1.0;
        }
        else if(tmp3986 < -0.5)
        {
          tmp3986 += 1.0;
          tmp3987 -= 1.0;
        }
        
        if(fabs(tmp3986) < 1e-10)
          tmp3985 = pow(tmp3983, tmp3987);
        else
        {
          tmp3989 = modf(1.0/tmp3984, &tmp3988);
          if(tmp3989 > 0.5)
          {
            tmp3989 -= 1.0;
            tmp3988 += 1.0;
          }
          else if(tmp3989 < -0.5)
          {
            tmp3989 += 1.0;
            tmp3988 -= 1.0;
          }
          if(fabs(tmp3989) < 1e-10 && ((unsigned long)tmp3988 & 1))
          {
            tmp3985 = -pow(-tmp3983, tmp3986)*pow(tmp3983, tmp3987);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3983, tmp3984);
          }
        }
      }
      else
      {
        tmp3985 = pow(tmp3983, tmp3984);
      }
      if(isnan(tmp3985) || isinf(tmp3985))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3983, tmp3984);
      }
      tmp3991 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* QrefPu_load_46.Value0 PARAM */)) * (tmp3985);
    }
    tmp3993 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2871]] /* load_46.QPu variable */) - (tmp3991);
  }
  else
  {
    tmp3993 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[721]) /* $DAEres721 DAE_RESIDUAL_VAR */ = tmp3993;
  threadData->lastEquationSolved = 17444;
}
/*
equation index: 17445
type: SIMPLE_ASSIGN
$DAEres723 = if load_46.running.value then load_46.PPu - (if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else PrefPu_load_46.Value0 * ((load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) / (load_46.u0Pu.re ^ 2.0 + load_46.u0Pu.im ^ 2.0)) ^ (0.5 * load_46.alpha)) else -trafo_46_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17445};
  modelica_real tmp3994;
  modelica_real tmp3995;
  modelica_real tmp3996;
  modelica_real tmp3997;
  modelica_real tmp3998;
  modelica_real tmp3999;
  modelica_real tmp4000;
  modelica_real tmp4001;
  modelica_real tmp4002;
  modelica_real tmp4003;
  modelica_real tmp4004;
  modelica_boolean tmp4005;
  modelica_real tmp4006;
  modelica_boolean tmp4007;
  modelica_real tmp4008;
  tmp4007 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */);
  if(tmp4007)
  {
    tmp4005 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
    if(tmp4005)
    {
      tmp4006 = 0.0;
    }
    else
    {
      tmp3994 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
      tmp3995 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
      tmp3996 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3508]] /* load_46.u0Pu.re PARAM */);
      tmp3997 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3507]] /* load_46.u0Pu.im PARAM */);
      tmp3998 = DIVISION((tmp3994 * tmp3994) + (tmp3995 * tmp3995),(tmp3996 * tmp3996) + (tmp3997 * tmp3997),"load_46.u0Pu.re ^ 2.0 + load_46.u0Pu.im ^ 2.0");
      tmp3999 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* load_46.alpha PARAM */));
      if(tmp3998 < 0.0 && tmp3999 != 0.0)
      {
        tmp4001 = modf(tmp3999, &tmp4002);
        
        if(tmp4001 > 0.5)
        {
          tmp4001 -= 1.0;
          tmp4002 += 1.0;
        }
        else if(tmp4001 < -0.5)
        {
          tmp4001 += 1.0;
          tmp4002 -= 1.0;
        }
        
        if(fabs(tmp4001) < 1e-10)
          tmp4000 = pow(tmp3998, tmp4002);
        else
        {
          tmp4004 = modf(1.0/tmp3999, &tmp4003);
          if(tmp4004 > 0.5)
          {
            tmp4004 -= 1.0;
            tmp4003 += 1.0;
          }
          else if(tmp4004 < -0.5)
          {
            tmp4004 += 1.0;
            tmp4003 -= 1.0;
          }
          if(fabs(tmp4004) < 1e-10 && ((unsigned long)tmp4003 & 1))
          {
            tmp4000 = -pow(-tmp3998, tmp4001)*pow(tmp3998, tmp4002);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3998, tmp3999);
          }
        }
      }
      else
      {
        tmp4000 = pow(tmp3998, tmp3999);
      }
      if(isnan(tmp4000) || isinf(tmp4000))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3998, tmp3999);
      }
      tmp4006 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* PrefPu_load_46.Value0 PARAM */)) * (tmp4000);
    }
    tmp4008 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2870]] /* load_46.PPu variable */) - (tmp4006);
  }
  else
  {
    tmp4008 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[723]) /* $DAEres723 DAE_RESIDUAL_VAR */ = tmp4008;
  threadData->lastEquationSolved = 17445;
}
/*
equation index: 17446
type: SIMPLE_ASSIGN
load_46.UPu.value = if load_46.running.value then (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17446};
  modelica_real tmp4009;
  modelica_real tmp4010;
  modelica_real tmp4011;
  modelica_boolean tmp4012;
  modelica_real tmp4013;
  tmp4012 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */);
  if(tmp4012)
  {
    tmp4009 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
    tmp4010 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
    tmp4011 = (tmp4009 * tmp4009) + (tmp4010 * tmp4010);
    if(tmp4011 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4011, 0.5);
    }
    tmp4013 = sqrt(tmp4011);
  }
  else
  {
    tmp4013 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2872]] /* load_46.UPu.value variable */) = tmp4013;
  threadData->lastEquationSolved = 17446;
}
/*
equation index: 17447
type: SIMPLE_ASSIGN
$whenCondition271 = not pre(load_43.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17447};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[191]] /* $whenCondition271 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */));
  threadData->lastEquationSolved = 17447;
}
/*
equation index: 17448
type: WHEN

when {} then
  load_43.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17448};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[191]] /* $whenCondition271 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[191] /* $whenCondition271 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17448;
}
/*
equation index: 17450
type: SIMPLE_ASSIGN
$whenCondition273 = not load_43.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17450};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[193]] /* $whenCondition273 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */));
  threadData->lastEquationSolved = 17450;
}
/*
equation index: 17451
type: SIMPLE_ASSIGN
$whenCondition272 = load_43.running.value and not pre(load_43.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17451};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[192]] /* $whenCondition272 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17451;
}
/*
equation index: 17452
type: WHEN

when {$whenCondition273} then
  load_43.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17452};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[193]] /* $whenCondition273 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[193] /* $whenCondition273 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[105]] /* load_43.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[192]] /* $whenCondition272 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[192] /* $whenCondition272 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[105]] /* load_43.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17452;
}
/*
equation index: 17454
type: SIMPLE_ASSIGN
$DAEres779 = if load_43.running.value then load_43.QPu - (if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else QrefPu_load_43.Value0 * ((load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) / (load_43.u0Pu.re ^ 2.0 + load_43.u0Pu.im ^ 2.0)) ^ (0.5 * load_43.beta)) else -trafo_43_4043.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17454};
  modelica_real tmp4014;
  modelica_real tmp4015;
  modelica_real tmp4016;
  modelica_real tmp4017;
  modelica_real tmp4018;
  modelica_real tmp4019;
  modelica_real tmp4020;
  modelica_real tmp4021;
  modelica_real tmp4022;
  modelica_real tmp4023;
  modelica_real tmp4024;
  modelica_boolean tmp4025;
  modelica_real tmp4026;
  modelica_boolean tmp4027;
  modelica_real tmp4028;
  tmp4027 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */);
  if(tmp4027)
  {
    tmp4025 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
    if(tmp4025)
    {
      tmp4026 = 0.0;
    }
    else
    {
      tmp4014 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
      tmp4015 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
      tmp4016 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3500]] /* load_43.u0Pu.re PARAM */);
      tmp4017 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3499]] /* load_43.u0Pu.im PARAM */);
      tmp4018 = DIVISION((tmp4014 * tmp4014) + (tmp4015 * tmp4015),(tmp4016 * tmp4016) + (tmp4017 * tmp4017),"load_43.u0Pu.re ^ 2.0 + load_43.u0Pu.im ^ 2.0");
      tmp4019 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* load_43.beta PARAM */));
      if(tmp4018 < 0.0 && tmp4019 != 0.0)
      {
        tmp4021 = modf(tmp4019, &tmp4022);
        
        if(tmp4021 > 0.5)
        {
          tmp4021 -= 1.0;
          tmp4022 += 1.0;
        }
        else if(tmp4021 < -0.5)
        {
          tmp4021 += 1.0;
          tmp4022 -= 1.0;
        }
        
        if(fabs(tmp4021) < 1e-10)
          tmp4020 = pow(tmp4018, tmp4022);
        else
        {
          tmp4024 = modf(1.0/tmp4019, &tmp4023);
          if(tmp4024 > 0.5)
          {
            tmp4024 -= 1.0;
            tmp4023 += 1.0;
          }
          else if(tmp4024 < -0.5)
          {
            tmp4024 += 1.0;
            tmp4023 -= 1.0;
          }
          if(fabs(tmp4024) < 1e-10 && ((unsigned long)tmp4023 & 1))
          {
            tmp4020 = -pow(-tmp4018, tmp4021)*pow(tmp4018, tmp4022);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4018, tmp4019);
          }
        }
      }
      else
      {
        tmp4020 = pow(tmp4018, tmp4019);
      }
      if(isnan(tmp4020) || isinf(tmp4020))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4018, tmp4019);
      }
      tmp4026 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* QrefPu_load_43.Value0 PARAM */)) * (tmp4020);
    }
    tmp4028 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2864]] /* load_43.QPu variable */) - (tmp4026);
  }
  else
  {
    tmp4028 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[779]) /* $DAEres779 DAE_RESIDUAL_VAR */ = tmp4028;
  threadData->lastEquationSolved = 17454;
}
/*
equation index: 17455
type: SIMPLE_ASSIGN
$DAEres784 = if load_43.running.value then load_43.PPu - (if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else PrefPu_load_43.Value0 * ((load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) / (load_43.u0Pu.re ^ 2.0 + load_43.u0Pu.im ^ 2.0)) ^ (0.5 * load_43.alpha)) else -trafo_43_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17455};
  modelica_real tmp4029;
  modelica_real tmp4030;
  modelica_real tmp4031;
  modelica_real tmp4032;
  modelica_real tmp4033;
  modelica_real tmp4034;
  modelica_real tmp4035;
  modelica_real tmp4036;
  modelica_real tmp4037;
  modelica_real tmp4038;
  modelica_real tmp4039;
  modelica_boolean tmp4040;
  modelica_real tmp4041;
  modelica_boolean tmp4042;
  modelica_real tmp4043;
  tmp4042 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */);
  if(tmp4042)
  {
    tmp4040 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
    if(tmp4040)
    {
      tmp4041 = 0.0;
    }
    else
    {
      tmp4029 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
      tmp4030 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
      tmp4031 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3500]] /* load_43.u0Pu.re PARAM */);
      tmp4032 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3499]] /* load_43.u0Pu.im PARAM */);
      tmp4033 = DIVISION((tmp4029 * tmp4029) + (tmp4030 * tmp4030),(tmp4031 * tmp4031) + (tmp4032 * tmp4032),"load_43.u0Pu.re ^ 2.0 + load_43.u0Pu.im ^ 2.0");
      tmp4034 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3493]] /* load_43.alpha PARAM */));
      if(tmp4033 < 0.0 && tmp4034 != 0.0)
      {
        tmp4036 = modf(tmp4034, &tmp4037);
        
        if(tmp4036 > 0.5)
        {
          tmp4036 -= 1.0;
          tmp4037 += 1.0;
        }
        else if(tmp4036 < -0.5)
        {
          tmp4036 += 1.0;
          tmp4037 -= 1.0;
        }
        
        if(fabs(tmp4036) < 1e-10)
          tmp4035 = pow(tmp4033, tmp4037);
        else
        {
          tmp4039 = modf(1.0/tmp4034, &tmp4038);
          if(tmp4039 > 0.5)
          {
            tmp4039 -= 1.0;
            tmp4038 += 1.0;
          }
          else if(tmp4039 < -0.5)
          {
            tmp4039 += 1.0;
            tmp4038 -= 1.0;
          }
          if(fabs(tmp4039) < 1e-10 && ((unsigned long)tmp4038 & 1))
          {
            tmp4035 = -pow(-tmp4033, tmp4036)*pow(tmp4033, tmp4037);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4033, tmp4034);
          }
        }
      }
      else
      {
        tmp4035 = pow(tmp4033, tmp4034);
      }
      if(isnan(tmp4035) || isinf(tmp4035))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4033, tmp4034);
      }
      tmp4041 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* PrefPu_load_43.Value0 PARAM */)) * (tmp4035);
    }
    tmp4043 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2863]] /* load_43.PPu variable */) - (tmp4041);
  }
  else
  {
    tmp4043 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[784]) /* $DAEres784 DAE_RESIDUAL_VAR */ = tmp4043;
  threadData->lastEquationSolved = 17455;
}
/*
equation index: 17456
type: SIMPLE_ASSIGN
load_43.UPu.value = if load_43.running.value then (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17456};
  modelica_real tmp4044;
  modelica_real tmp4045;
  modelica_real tmp4046;
  modelica_boolean tmp4047;
  modelica_real tmp4048;
  tmp4047 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */);
  if(tmp4047)
  {
    tmp4044 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
    tmp4045 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
    tmp4046 = (tmp4044 * tmp4044) + (tmp4045 * tmp4045);
    if(tmp4046 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4046, 0.5);
    }
    tmp4048 = sqrt(tmp4046);
  }
  else
  {
    tmp4048 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2865]] /* load_43.UPu.value variable */) = tmp4048;
  threadData->lastEquationSolved = 17456;
}
/*
equation index: 17457
type: SIMPLE_ASSIGN
$whenCondition274 = not pre(load_42.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17457};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[194]] /* $whenCondition274 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */));
  threadData->lastEquationSolved = 17457;
}
/*
equation index: 17458
type: WHEN

when {} then
  load_42.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17458};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[194]] /* $whenCondition274 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[194] /* $whenCondition274 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17458;
}
/*
equation index: 17460
type: SIMPLE_ASSIGN
$whenCondition276 = not load_42.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17460};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[196]] /* $whenCondition276 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */));
  threadData->lastEquationSolved = 17460;
}
/*
equation index: 17461
type: SIMPLE_ASSIGN
$whenCondition275 = load_42.running.value and not pre(load_42.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17461};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[195]] /* $whenCondition275 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17461;
}
/*
equation index: 17462
type: WHEN

when {$whenCondition276} then
  load_42.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17462};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[196]] /* $whenCondition276 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[196] /* $whenCondition276 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[104]] /* load_42.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[195]] /* $whenCondition275 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[195] /* $whenCondition275 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[104]] /* load_42.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17462;
}
/*
equation index: 17464
type: SIMPLE_ASSIGN
$DAEres670 = if load_42.running.value then load_42.PPu - (if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else PrefPu_load_42.Value0 * ((load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) / (load_42.u0Pu.re ^ 2.0 + load_42.u0Pu.im ^ 2.0)) ^ (0.5 * load_42.alpha)) else -trafo_42_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17464};
  modelica_real tmp4049;
  modelica_real tmp4050;
  modelica_real tmp4051;
  modelica_real tmp4052;
  modelica_real tmp4053;
  modelica_real tmp4054;
  modelica_real tmp4055;
  modelica_real tmp4056;
  modelica_real tmp4057;
  modelica_real tmp4058;
  modelica_real tmp4059;
  modelica_boolean tmp4060;
  modelica_real tmp4061;
  modelica_boolean tmp4062;
  modelica_real tmp4063;
  tmp4062 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */);
  if(tmp4062)
  {
    tmp4060 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
    if(tmp4060)
    {
      tmp4061 = 0.0;
    }
    else
    {
      tmp4049 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
      tmp4050 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
      tmp4051 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3492]] /* load_42.u0Pu.re PARAM */);
      tmp4052 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3491]] /* load_42.u0Pu.im PARAM */);
      tmp4053 = DIVISION((tmp4049 * tmp4049) + (tmp4050 * tmp4050),(tmp4051 * tmp4051) + (tmp4052 * tmp4052),"load_42.u0Pu.re ^ 2.0 + load_42.u0Pu.im ^ 2.0");
      tmp4054 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3485]] /* load_42.alpha PARAM */));
      if(tmp4053 < 0.0 && tmp4054 != 0.0)
      {
        tmp4056 = modf(tmp4054, &tmp4057);
        
        if(tmp4056 > 0.5)
        {
          tmp4056 -= 1.0;
          tmp4057 += 1.0;
        }
        else if(tmp4056 < -0.5)
        {
          tmp4056 += 1.0;
          tmp4057 -= 1.0;
        }
        
        if(fabs(tmp4056) < 1e-10)
          tmp4055 = pow(tmp4053, tmp4057);
        else
        {
          tmp4059 = modf(1.0/tmp4054, &tmp4058);
          if(tmp4059 > 0.5)
          {
            tmp4059 -= 1.0;
            tmp4058 += 1.0;
          }
          else if(tmp4059 < -0.5)
          {
            tmp4059 += 1.0;
            tmp4058 -= 1.0;
          }
          if(fabs(tmp4059) < 1e-10 && ((unsigned long)tmp4058 & 1))
          {
            tmp4055 = -pow(-tmp4053, tmp4056)*pow(tmp4053, tmp4057);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4053, tmp4054);
          }
        }
      }
      else
      {
        tmp4055 = pow(tmp4053, tmp4054);
      }
      if(isnan(tmp4055) || isinf(tmp4055))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4053, tmp4054);
      }
      tmp4061 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* PrefPu_load_42.Value0 PARAM */)) * (tmp4055);
    }
    tmp4063 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2856]] /* load_42.PPu variable */) - (tmp4061);
  }
  else
  {
    tmp4063 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[670]) /* $DAEres670 DAE_RESIDUAL_VAR */ = tmp4063;
  threadData->lastEquationSolved = 17464;
}
/*
equation index: 17465
type: SIMPLE_ASSIGN
$DAEres671 = if load_42.running.value then load_42.QPu - (if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else QrefPu_load_42.Value0 * ((load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) / (load_42.u0Pu.re ^ 2.0 + load_42.u0Pu.im ^ 2.0)) ^ (0.5 * load_42.beta)) else -trafo_42_4042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17465};
  modelica_real tmp4064;
  modelica_real tmp4065;
  modelica_real tmp4066;
  modelica_real tmp4067;
  modelica_real tmp4068;
  modelica_real tmp4069;
  modelica_real tmp4070;
  modelica_real tmp4071;
  modelica_real tmp4072;
  modelica_real tmp4073;
  modelica_real tmp4074;
  modelica_boolean tmp4075;
  modelica_real tmp4076;
  modelica_boolean tmp4077;
  modelica_real tmp4078;
  tmp4077 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */);
  if(tmp4077)
  {
    tmp4075 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
    if(tmp4075)
    {
      tmp4076 = 0.0;
    }
    else
    {
      tmp4064 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
      tmp4065 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
      tmp4066 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3492]] /* load_42.u0Pu.re PARAM */);
      tmp4067 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3491]] /* load_42.u0Pu.im PARAM */);
      tmp4068 = DIVISION((tmp4064 * tmp4064) + (tmp4065 * tmp4065),(tmp4066 * tmp4066) + (tmp4067 * tmp4067),"load_42.u0Pu.re ^ 2.0 + load_42.u0Pu.im ^ 2.0");
      tmp4069 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3486]] /* load_42.beta PARAM */));
      if(tmp4068 < 0.0 && tmp4069 != 0.0)
      {
        tmp4071 = modf(tmp4069, &tmp4072);
        
        if(tmp4071 > 0.5)
        {
          tmp4071 -= 1.0;
          tmp4072 += 1.0;
        }
        else if(tmp4071 < -0.5)
        {
          tmp4071 += 1.0;
          tmp4072 -= 1.0;
        }
        
        if(fabs(tmp4071) < 1e-10)
          tmp4070 = pow(tmp4068, tmp4072);
        else
        {
          tmp4074 = modf(1.0/tmp4069, &tmp4073);
          if(tmp4074 > 0.5)
          {
            tmp4074 -= 1.0;
            tmp4073 += 1.0;
          }
          else if(tmp4074 < -0.5)
          {
            tmp4074 += 1.0;
            tmp4073 -= 1.0;
          }
          if(fabs(tmp4074) < 1e-10 && ((unsigned long)tmp4073 & 1))
          {
            tmp4070 = -pow(-tmp4068, tmp4071)*pow(tmp4068, tmp4072);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4068, tmp4069);
          }
        }
      }
      else
      {
        tmp4070 = pow(tmp4068, tmp4069);
      }
      if(isnan(tmp4070) || isinf(tmp4070))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4068, tmp4069);
      }
      tmp4076 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* QrefPu_load_42.Value0 PARAM */)) * (tmp4070);
    }
    tmp4078 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2857]] /* load_42.QPu variable */) - (tmp4076);
  }
  else
  {
    tmp4078 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[671]) /* $DAEres671 DAE_RESIDUAL_VAR */ = tmp4078;
  threadData->lastEquationSolved = 17465;
}
/*
equation index: 17466
type: SIMPLE_ASSIGN
load_42.UPu.value = if load_42.running.value then (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17466};
  modelica_real tmp4079;
  modelica_real tmp4080;
  modelica_real tmp4081;
  modelica_boolean tmp4082;
  modelica_real tmp4083;
  tmp4082 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */);
  if(tmp4082)
  {
    tmp4079 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
    tmp4080 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
    tmp4081 = (tmp4079 * tmp4079) + (tmp4080 * tmp4080);
    if(tmp4081 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4081, 0.5);
    }
    tmp4083 = sqrt(tmp4081);
  }
  else
  {
    tmp4083 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2858]] /* load_42.UPu.value variable */) = tmp4083;
  threadData->lastEquationSolved = 17466;
}
/*
equation index: 17467
type: SIMPLE_ASSIGN
$whenCondition277 = not pre(load_41.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17467};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[197]] /* $whenCondition277 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */));
  threadData->lastEquationSolved = 17467;
}
/*
equation index: 17468
type: WHEN

when {} then
  load_41.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17468};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[197]] /* $whenCondition277 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[197] /* $whenCondition277 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17468;
}
/*
equation index: 17470
type: SIMPLE_ASSIGN
$whenCondition279 = not load_41.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17470};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[199]] /* $whenCondition279 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */));
  threadData->lastEquationSolved = 17470;
}
/*
equation index: 17471
type: SIMPLE_ASSIGN
$whenCondition278 = load_41.running.value and not pre(load_41.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17471};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[198]] /* $whenCondition278 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17471;
}
/*
equation index: 17472
type: WHEN

when {$whenCondition279} then
  load_41.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17472};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[199]] /* $whenCondition279 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[199] /* $whenCondition279 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[103]] /* load_41.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[198]] /* $whenCondition278 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[198] /* $whenCondition278 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[103]] /* load_41.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17472;
}
/*
equation index: 17474
type: SIMPLE_ASSIGN
$DAEres639 = if load_41.running.value then load_41.QPu - (if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else QrefPu_load_41.Value0 * ((load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) / (load_41.u0Pu.re ^ 2.0 + load_41.u0Pu.im ^ 2.0)) ^ (0.5 * load_41.beta)) else -trafo_41_4041.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17474};
  modelica_real tmp4084;
  modelica_real tmp4085;
  modelica_real tmp4086;
  modelica_real tmp4087;
  modelica_real tmp4088;
  modelica_real tmp4089;
  modelica_real tmp4090;
  modelica_real tmp4091;
  modelica_real tmp4092;
  modelica_real tmp4093;
  modelica_real tmp4094;
  modelica_boolean tmp4095;
  modelica_real tmp4096;
  modelica_boolean tmp4097;
  modelica_real tmp4098;
  tmp4097 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */);
  if(tmp4097)
  {
    tmp4095 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
    if(tmp4095)
    {
      tmp4096 = 0.0;
    }
    else
    {
      tmp4084 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
      tmp4085 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
      tmp4086 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3484]] /* load_41.u0Pu.re PARAM */);
      tmp4087 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3483]] /* load_41.u0Pu.im PARAM */);
      tmp4088 = DIVISION((tmp4084 * tmp4084) + (tmp4085 * tmp4085),(tmp4086 * tmp4086) + (tmp4087 * tmp4087),"load_41.u0Pu.re ^ 2.0 + load_41.u0Pu.im ^ 2.0");
      tmp4089 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* load_41.beta PARAM */));
      if(tmp4088 < 0.0 && tmp4089 != 0.0)
      {
        tmp4091 = modf(tmp4089, &tmp4092);
        
        if(tmp4091 > 0.5)
        {
          tmp4091 -= 1.0;
          tmp4092 += 1.0;
        }
        else if(tmp4091 < -0.5)
        {
          tmp4091 += 1.0;
          tmp4092 -= 1.0;
        }
        
        if(fabs(tmp4091) < 1e-10)
          tmp4090 = pow(tmp4088, tmp4092);
        else
        {
          tmp4094 = modf(1.0/tmp4089, &tmp4093);
          if(tmp4094 > 0.5)
          {
            tmp4094 -= 1.0;
            tmp4093 += 1.0;
          }
          else if(tmp4094 < -0.5)
          {
            tmp4094 += 1.0;
            tmp4093 -= 1.0;
          }
          if(fabs(tmp4094) < 1e-10 && ((unsigned long)tmp4093 & 1))
          {
            tmp4090 = -pow(-tmp4088, tmp4091)*pow(tmp4088, tmp4092);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4088, tmp4089);
          }
        }
      }
      else
      {
        tmp4090 = pow(tmp4088, tmp4089);
      }
      if(isnan(tmp4090) || isinf(tmp4090))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4088, tmp4089);
      }
      tmp4096 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* QrefPu_load_41.Value0 PARAM */)) * (tmp4090);
    }
    tmp4098 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2850]] /* load_41.QPu variable */) - (tmp4096);
  }
  else
  {
    tmp4098 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[639]) /* $DAEres639 DAE_RESIDUAL_VAR */ = tmp4098;
  threadData->lastEquationSolved = 17474;
}
/*
equation index: 17475
type: SIMPLE_ASSIGN
$DAEres640 = if load_41.running.value then load_41.PPu - (if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else PrefPu_load_41.Value0 * ((load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) / (load_41.u0Pu.re ^ 2.0 + load_41.u0Pu.im ^ 2.0)) ^ (0.5 * load_41.alpha)) else -trafo_41_4041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17475};
  modelica_real tmp4099;
  modelica_real tmp4100;
  modelica_real tmp4101;
  modelica_real tmp4102;
  modelica_real tmp4103;
  modelica_real tmp4104;
  modelica_real tmp4105;
  modelica_real tmp4106;
  modelica_real tmp4107;
  modelica_real tmp4108;
  modelica_real tmp4109;
  modelica_boolean tmp4110;
  modelica_real tmp4111;
  modelica_boolean tmp4112;
  modelica_real tmp4113;
  tmp4112 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */);
  if(tmp4112)
  {
    tmp4110 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
    if(tmp4110)
    {
      tmp4111 = 0.0;
    }
    else
    {
      tmp4099 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
      tmp4100 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
      tmp4101 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3484]] /* load_41.u0Pu.re PARAM */);
      tmp4102 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3483]] /* load_41.u0Pu.im PARAM */);
      tmp4103 = DIVISION((tmp4099 * tmp4099) + (tmp4100 * tmp4100),(tmp4101 * tmp4101) + (tmp4102 * tmp4102),"load_41.u0Pu.re ^ 2.0 + load_41.u0Pu.im ^ 2.0");
      tmp4104 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3477]] /* load_41.alpha PARAM */));
      if(tmp4103 < 0.0 && tmp4104 != 0.0)
      {
        tmp4106 = modf(tmp4104, &tmp4107);
        
        if(tmp4106 > 0.5)
        {
          tmp4106 -= 1.0;
          tmp4107 += 1.0;
        }
        else if(tmp4106 < -0.5)
        {
          tmp4106 += 1.0;
          tmp4107 -= 1.0;
        }
        
        if(fabs(tmp4106) < 1e-10)
          tmp4105 = pow(tmp4103, tmp4107);
        else
        {
          tmp4109 = modf(1.0/tmp4104, &tmp4108);
          if(tmp4109 > 0.5)
          {
            tmp4109 -= 1.0;
            tmp4108 += 1.0;
          }
          else if(tmp4109 < -0.5)
          {
            tmp4109 += 1.0;
            tmp4108 -= 1.0;
          }
          if(fabs(tmp4109) < 1e-10 && ((unsigned long)tmp4108 & 1))
          {
            tmp4105 = -pow(-tmp4103, tmp4106)*pow(tmp4103, tmp4107);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4103, tmp4104);
          }
        }
      }
      else
      {
        tmp4105 = pow(tmp4103, tmp4104);
      }
      if(isnan(tmp4105) || isinf(tmp4105))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4103, tmp4104);
      }
      tmp4111 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* PrefPu_load_41.Value0 PARAM */)) * (tmp4105);
    }
    tmp4113 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2849]] /* load_41.PPu variable */) - (tmp4111);
  }
  else
  {
    tmp4113 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[640]) /* $DAEres640 DAE_RESIDUAL_VAR */ = tmp4113;
  threadData->lastEquationSolved = 17475;
}
/*
equation index: 17476
type: SIMPLE_ASSIGN
load_41.UPu.value = if load_41.running.value then (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17476};
  modelica_real tmp4114;
  modelica_real tmp4115;
  modelica_real tmp4116;
  modelica_boolean tmp4117;
  modelica_real tmp4118;
  tmp4117 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */);
  if(tmp4117)
  {
    tmp4114 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
    tmp4115 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
    tmp4116 = (tmp4114 * tmp4114) + (tmp4115 * tmp4115);
    if(tmp4116 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4116, 0.5);
    }
    tmp4118 = sqrt(tmp4116);
  }
  else
  {
    tmp4118 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2851]] /* load_41.UPu.value variable */) = tmp4118;
  threadData->lastEquationSolved = 17476;
}
/*
equation index: 17477
type: SIMPLE_ASSIGN
$whenCondition280 = not pre(load_32.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17477};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[201]] /* $whenCondition280 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */));
  threadData->lastEquationSolved = 17477;
}
/*
equation index: 17478
type: WHEN

when {} then
  load_32.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17478};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[201]] /* $whenCondition280 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[201] /* $whenCondition280 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17478;
}
/*
equation index: 17480
type: SIMPLE_ASSIGN
$whenCondition282 = not load_32.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17480};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[203]] /* $whenCondition282 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */));
  threadData->lastEquationSolved = 17480;
}
/*
equation index: 17481
type: SIMPLE_ASSIGN
$whenCondition281 = load_32.running.value and not pre(load_32.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17481};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[202]] /* $whenCondition281 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17481;
}
/*
equation index: 17482
type: WHEN

when {$whenCondition282} then
  load_32.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17482};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[203]] /* $whenCondition282 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[203] /* $whenCondition282 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[102]] /* load_32.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[202]] /* $whenCondition281 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[202] /* $whenCondition281 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[102]] /* load_32.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17482;
}
/*
equation index: 17484
type: SIMPLE_ASSIGN
$DAEres254 = if load_32.running.value then load_32.PPu - (if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else PrefPu_load_32.Value0 * ((load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) / (load_32.u0Pu.re ^ 2.0 + load_32.u0Pu.im ^ 2.0)) ^ (0.5 * load_32.alpha)) else -trafo_32_2032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17484};
  modelica_real tmp4119;
  modelica_real tmp4120;
  modelica_real tmp4121;
  modelica_real tmp4122;
  modelica_real tmp4123;
  modelica_real tmp4124;
  modelica_real tmp4125;
  modelica_real tmp4126;
  modelica_real tmp4127;
  modelica_real tmp4128;
  modelica_real tmp4129;
  modelica_boolean tmp4130;
  modelica_real tmp4131;
  modelica_boolean tmp4132;
  modelica_real tmp4133;
  tmp4132 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */);
  if(tmp4132)
  {
    tmp4130 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
    if(tmp4130)
    {
      tmp4131 = 0.0;
    }
    else
    {
      tmp4119 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
      tmp4120 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
      tmp4121 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3476]] /* load_32.u0Pu.re PARAM */);
      tmp4122 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3475]] /* load_32.u0Pu.im PARAM */);
      tmp4123 = DIVISION((tmp4119 * tmp4119) + (tmp4120 * tmp4120),(tmp4121 * tmp4121) + (tmp4122 * tmp4122),"load_32.u0Pu.re ^ 2.0 + load_32.u0Pu.im ^ 2.0");
      tmp4124 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3469]] /* load_32.alpha PARAM */));
      if(tmp4123 < 0.0 && tmp4124 != 0.0)
      {
        tmp4126 = modf(tmp4124, &tmp4127);
        
        if(tmp4126 > 0.5)
        {
          tmp4126 -= 1.0;
          tmp4127 += 1.0;
        }
        else if(tmp4126 < -0.5)
        {
          tmp4126 += 1.0;
          tmp4127 -= 1.0;
        }
        
        if(fabs(tmp4126) < 1e-10)
          tmp4125 = pow(tmp4123, tmp4127);
        else
        {
          tmp4129 = modf(1.0/tmp4124, &tmp4128);
          if(tmp4129 > 0.5)
          {
            tmp4129 -= 1.0;
            tmp4128 += 1.0;
          }
          else if(tmp4129 < -0.5)
          {
            tmp4129 += 1.0;
            tmp4128 -= 1.0;
          }
          if(fabs(tmp4129) < 1e-10 && ((unsigned long)tmp4128 & 1))
          {
            tmp4125 = -pow(-tmp4123, tmp4126)*pow(tmp4123, tmp4127);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4123, tmp4124);
          }
        }
      }
      else
      {
        tmp4125 = pow(tmp4123, tmp4124);
      }
      if(isnan(tmp4125) || isinf(tmp4125))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4123, tmp4124);
      }
      tmp4131 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* PrefPu_load_32.Value0 PARAM */)) * (tmp4125);
    }
    tmp4133 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2842]] /* load_32.PPu variable */) - (tmp4131);
  }
  else
  {
    tmp4133 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[254]) /* $DAEres254 DAE_RESIDUAL_VAR */ = tmp4133;
  threadData->lastEquationSolved = 17484;
}
/*
equation index: 17485
type: SIMPLE_ASSIGN
$DAEres255 = if load_32.running.value then load_32.QPu - (if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else QrefPu_load_32.Value0 * ((load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) / (load_32.u0Pu.re ^ 2.0 + load_32.u0Pu.im ^ 2.0)) ^ (0.5 * load_32.beta)) else -trafo_32_2032.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17485};
  modelica_real tmp4134;
  modelica_real tmp4135;
  modelica_real tmp4136;
  modelica_real tmp4137;
  modelica_real tmp4138;
  modelica_real tmp4139;
  modelica_real tmp4140;
  modelica_real tmp4141;
  modelica_real tmp4142;
  modelica_real tmp4143;
  modelica_real tmp4144;
  modelica_boolean tmp4145;
  modelica_real tmp4146;
  modelica_boolean tmp4147;
  modelica_real tmp4148;
  tmp4147 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */);
  if(tmp4147)
  {
    tmp4145 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
    if(tmp4145)
    {
      tmp4146 = 0.0;
    }
    else
    {
      tmp4134 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
      tmp4135 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
      tmp4136 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3476]] /* load_32.u0Pu.re PARAM */);
      tmp4137 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3475]] /* load_32.u0Pu.im PARAM */);
      tmp4138 = DIVISION((tmp4134 * tmp4134) + (tmp4135 * tmp4135),(tmp4136 * tmp4136) + (tmp4137 * tmp4137),"load_32.u0Pu.re ^ 2.0 + load_32.u0Pu.im ^ 2.0");
      tmp4139 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3470]] /* load_32.beta PARAM */));
      if(tmp4138 < 0.0 && tmp4139 != 0.0)
      {
        tmp4141 = modf(tmp4139, &tmp4142);
        
        if(tmp4141 > 0.5)
        {
          tmp4141 -= 1.0;
          tmp4142 += 1.0;
        }
        else if(tmp4141 < -0.5)
        {
          tmp4141 += 1.0;
          tmp4142 -= 1.0;
        }
        
        if(fabs(tmp4141) < 1e-10)
          tmp4140 = pow(tmp4138, tmp4142);
        else
        {
          tmp4144 = modf(1.0/tmp4139, &tmp4143);
          if(tmp4144 > 0.5)
          {
            tmp4144 -= 1.0;
            tmp4143 += 1.0;
          }
          else if(tmp4144 < -0.5)
          {
            tmp4144 += 1.0;
            tmp4143 -= 1.0;
          }
          if(fabs(tmp4144) < 1e-10 && ((unsigned long)tmp4143 & 1))
          {
            tmp4140 = -pow(-tmp4138, tmp4141)*pow(tmp4138, tmp4142);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4138, tmp4139);
          }
        }
      }
      else
      {
        tmp4140 = pow(tmp4138, tmp4139);
      }
      if(isnan(tmp4140) || isinf(tmp4140))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4138, tmp4139);
      }
      tmp4146 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* QrefPu_load_32.Value0 PARAM */)) * (tmp4140);
    }
    tmp4148 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2843]] /* load_32.QPu variable */) - (tmp4146);
  }
  else
  {
    tmp4148 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[255]) /* $DAEres255 DAE_RESIDUAL_VAR */ = tmp4148;
  threadData->lastEquationSolved = 17485;
}
/*
equation index: 17486
type: SIMPLE_ASSIGN
load_32.UPu.value = if load_32.running.value then (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17486};
  modelica_real tmp4149;
  modelica_real tmp4150;
  modelica_real tmp4151;
  modelica_boolean tmp4152;
  modelica_real tmp4153;
  tmp4152 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */);
  if(tmp4152)
  {
    tmp4149 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
    tmp4150 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
    tmp4151 = (tmp4149 * tmp4149) + (tmp4150 * tmp4150);
    if(tmp4151 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4151, 0.5);
    }
    tmp4153 = sqrt(tmp4151);
  }
  else
  {
    tmp4153 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2844]] /* load_32.UPu.value variable */) = tmp4153;
  threadData->lastEquationSolved = 17486;
}
/*
equation index: 17487
type: SIMPLE_ASSIGN
$whenCondition283 = not pre(load_31.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17487};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[204]] /* $whenCondition283 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */));
  threadData->lastEquationSolved = 17487;
}
/*
equation index: 17488
type: WHEN

when {} then
  load_31.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17488};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[204]] /* $whenCondition283 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[204] /* $whenCondition283 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17488;
}
/*
equation index: 17490
type: SIMPLE_ASSIGN
$whenCondition285 = not load_31.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17490};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[206]] /* $whenCondition285 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */));
  threadData->lastEquationSolved = 17490;
}
/*
equation index: 17491
type: SIMPLE_ASSIGN
$whenCondition284 = load_31.running.value and not pre(load_31.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17491};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[205]] /* $whenCondition284 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17491;
}
/*
equation index: 17492
type: WHEN

when {$whenCondition285} then
  load_31.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17492};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[206]] /* $whenCondition285 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[206] /* $whenCondition285 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[101]] /* load_31.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[205]] /* $whenCondition284 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[205] /* $whenCondition284 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[101]] /* load_31.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17492;
}
/*
equation index: 17494
type: SIMPLE_ASSIGN
$DAEres294 = if load_31.running.value then load_31.PPu - (if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else PrefPu_load_31.Value0 * ((load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) / (load_31.u0Pu.re ^ 2.0 + load_31.u0Pu.im ^ 2.0)) ^ (0.5 * load_31.alpha)) else -trafo_31_2031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17494};
  modelica_real tmp4154;
  modelica_real tmp4155;
  modelica_real tmp4156;
  modelica_real tmp4157;
  modelica_real tmp4158;
  modelica_real tmp4159;
  modelica_real tmp4160;
  modelica_real tmp4161;
  modelica_real tmp4162;
  modelica_real tmp4163;
  modelica_real tmp4164;
  modelica_boolean tmp4165;
  modelica_real tmp4166;
  modelica_boolean tmp4167;
  modelica_real tmp4168;
  tmp4167 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */);
  if(tmp4167)
  {
    tmp4165 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
    if(tmp4165)
    {
      tmp4166 = 0.0;
    }
    else
    {
      tmp4154 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
      tmp4155 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
      tmp4156 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3468]] /* load_31.u0Pu.re PARAM */);
      tmp4157 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3467]] /* load_31.u0Pu.im PARAM */);
      tmp4158 = DIVISION((tmp4154 * tmp4154) + (tmp4155 * tmp4155),(tmp4156 * tmp4156) + (tmp4157 * tmp4157),"load_31.u0Pu.re ^ 2.0 + load_31.u0Pu.im ^ 2.0");
      tmp4159 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3461]] /* load_31.alpha PARAM */));
      if(tmp4158 < 0.0 && tmp4159 != 0.0)
      {
        tmp4161 = modf(tmp4159, &tmp4162);
        
        if(tmp4161 > 0.5)
        {
          tmp4161 -= 1.0;
          tmp4162 += 1.0;
        }
        else if(tmp4161 < -0.5)
        {
          tmp4161 += 1.0;
          tmp4162 -= 1.0;
        }
        
        if(fabs(tmp4161) < 1e-10)
          tmp4160 = pow(tmp4158, tmp4162);
        else
        {
          tmp4164 = modf(1.0/tmp4159, &tmp4163);
          if(tmp4164 > 0.5)
          {
            tmp4164 -= 1.0;
            tmp4163 += 1.0;
          }
          else if(tmp4164 < -0.5)
          {
            tmp4164 += 1.0;
            tmp4163 -= 1.0;
          }
          if(fabs(tmp4164) < 1e-10 && ((unsigned long)tmp4163 & 1))
          {
            tmp4160 = -pow(-tmp4158, tmp4161)*pow(tmp4158, tmp4162);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4158, tmp4159);
          }
        }
      }
      else
      {
        tmp4160 = pow(tmp4158, tmp4159);
      }
      if(isnan(tmp4160) || isinf(tmp4160))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4158, tmp4159);
      }
      tmp4166 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* PrefPu_load_31.Value0 PARAM */)) * (tmp4160);
    }
    tmp4168 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* load_31.PPu variable */) - (tmp4166);
  }
  else
  {
    tmp4168 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[294]) /* $DAEres294 DAE_RESIDUAL_VAR */ = tmp4168;
  threadData->lastEquationSolved = 17494;
}
/*
equation index: 17495
type: SIMPLE_ASSIGN
$DAEres295 = if load_31.running.value then load_31.QPu - (if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else QrefPu_load_31.Value0 * ((load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) / (load_31.u0Pu.re ^ 2.0 + load_31.u0Pu.im ^ 2.0)) ^ (0.5 * load_31.beta)) else -trafo_31_2031.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17495};
  modelica_real tmp4169;
  modelica_real tmp4170;
  modelica_real tmp4171;
  modelica_real tmp4172;
  modelica_real tmp4173;
  modelica_real tmp4174;
  modelica_real tmp4175;
  modelica_real tmp4176;
  modelica_real tmp4177;
  modelica_real tmp4178;
  modelica_real tmp4179;
  modelica_boolean tmp4180;
  modelica_real tmp4181;
  modelica_boolean tmp4182;
  modelica_real tmp4183;
  tmp4182 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */);
  if(tmp4182)
  {
    tmp4180 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
    if(tmp4180)
    {
      tmp4181 = 0.0;
    }
    else
    {
      tmp4169 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
      tmp4170 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
      tmp4171 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3468]] /* load_31.u0Pu.re PARAM */);
      tmp4172 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3467]] /* load_31.u0Pu.im PARAM */);
      tmp4173 = DIVISION((tmp4169 * tmp4169) + (tmp4170 * tmp4170),(tmp4171 * tmp4171) + (tmp4172 * tmp4172),"load_31.u0Pu.re ^ 2.0 + load_31.u0Pu.im ^ 2.0");
      tmp4174 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3462]] /* load_31.beta PARAM */));
      if(tmp4173 < 0.0 && tmp4174 != 0.0)
      {
        tmp4176 = modf(tmp4174, &tmp4177);
        
        if(tmp4176 > 0.5)
        {
          tmp4176 -= 1.0;
          tmp4177 += 1.0;
        }
        else if(tmp4176 < -0.5)
        {
          tmp4176 += 1.0;
          tmp4177 -= 1.0;
        }
        
        if(fabs(tmp4176) < 1e-10)
          tmp4175 = pow(tmp4173, tmp4177);
        else
        {
          tmp4179 = modf(1.0/tmp4174, &tmp4178);
          if(tmp4179 > 0.5)
          {
            tmp4179 -= 1.0;
            tmp4178 += 1.0;
          }
          else if(tmp4179 < -0.5)
          {
            tmp4179 += 1.0;
            tmp4178 -= 1.0;
          }
          if(fabs(tmp4179) < 1e-10 && ((unsigned long)tmp4178 & 1))
          {
            tmp4175 = -pow(-tmp4173, tmp4176)*pow(tmp4173, tmp4177);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4173, tmp4174);
          }
        }
      }
      else
      {
        tmp4175 = pow(tmp4173, tmp4174);
      }
      if(isnan(tmp4175) || isinf(tmp4175))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4173, tmp4174);
      }
      tmp4181 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* QrefPu_load_31.Value0 PARAM */)) * (tmp4175);
    }
    tmp4183 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2836]] /* load_31.QPu variable */) - (tmp4181);
  }
  else
  {
    tmp4183 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[295]) /* $DAEres295 DAE_RESIDUAL_VAR */ = tmp4183;
  threadData->lastEquationSolved = 17495;
}
/*
equation index: 17496
type: SIMPLE_ASSIGN
load_31.UPu.value = if load_31.running.value then (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17496};
  modelica_real tmp4184;
  modelica_real tmp4185;
  modelica_real tmp4186;
  modelica_boolean tmp4187;
  modelica_real tmp4188;
  tmp4187 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */);
  if(tmp4187)
  {
    tmp4184 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
    tmp4185 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
    tmp4186 = (tmp4184 * tmp4184) + (tmp4185 * tmp4185);
    if(tmp4186 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4186, 0.5);
    }
    tmp4188 = sqrt(tmp4186);
  }
  else
  {
    tmp4188 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2837]] /* load_31.UPu.value variable */) = tmp4188;
  threadData->lastEquationSolved = 17496;
}
/*
equation index: 17497
type: SIMPLE_ASSIGN
$whenCondition286 = not pre(load_22.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17497};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[207]] /* $whenCondition286 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */));
  threadData->lastEquationSolved = 17497;
}
/*
equation index: 17498
type: WHEN

when {} then
  load_22.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17498};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[207]] /* $whenCondition286 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[207] /* $whenCondition286 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17498;
}
/*
equation index: 17500
type: SIMPLE_ASSIGN
$whenCondition288 = not load_22.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17500};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[209]] /* $whenCondition288 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */));
  threadData->lastEquationSolved = 17500;
}
/*
equation index: 17501
type: SIMPLE_ASSIGN
$whenCondition287 = load_22.running.value and not pre(load_22.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17501};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[208]] /* $whenCondition287 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17501;
}
/*
equation index: 17502
type: WHEN

when {$whenCondition288} then
  load_22.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17502};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[209]] /* $whenCondition288 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[209] /* $whenCondition288 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[100]] /* load_22.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[208]] /* $whenCondition287 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[208] /* $whenCondition287 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[100]] /* load_22.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17502;
}
/*
equation index: 17504
type: SIMPLE_ASSIGN
$DAEres368 = if load_22.running.value then load_22.QPu - (if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else QrefPu_load_22.Value0 * ((load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) / (load_22.u0Pu.re ^ 2.0 + load_22.u0Pu.im ^ 2.0)) ^ (0.5 * load_22.beta)) else -trafo_22_1022.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17504};
  modelica_real tmp4189;
  modelica_real tmp4190;
  modelica_real tmp4191;
  modelica_real tmp4192;
  modelica_real tmp4193;
  modelica_real tmp4194;
  modelica_real tmp4195;
  modelica_real tmp4196;
  modelica_real tmp4197;
  modelica_real tmp4198;
  modelica_real tmp4199;
  modelica_boolean tmp4200;
  modelica_real tmp4201;
  modelica_boolean tmp4202;
  modelica_real tmp4203;
  tmp4202 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */);
  if(tmp4202)
  {
    tmp4200 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
    if(tmp4200)
    {
      tmp4201 = 0.0;
    }
    else
    {
      tmp4189 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
      tmp4190 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
      tmp4191 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3460]] /* load_22.u0Pu.re PARAM */);
      tmp4192 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3459]] /* load_22.u0Pu.im PARAM */);
      tmp4193 = DIVISION((tmp4189 * tmp4189) + (tmp4190 * tmp4190),(tmp4191 * tmp4191) + (tmp4192 * tmp4192),"load_22.u0Pu.re ^ 2.0 + load_22.u0Pu.im ^ 2.0");
      tmp4194 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* load_22.beta PARAM */));
      if(tmp4193 < 0.0 && tmp4194 != 0.0)
      {
        tmp4196 = modf(tmp4194, &tmp4197);
        
        if(tmp4196 > 0.5)
        {
          tmp4196 -= 1.0;
          tmp4197 += 1.0;
        }
        else if(tmp4196 < -0.5)
        {
          tmp4196 += 1.0;
          tmp4197 -= 1.0;
        }
        
        if(fabs(tmp4196) < 1e-10)
          tmp4195 = pow(tmp4193, tmp4197);
        else
        {
          tmp4199 = modf(1.0/tmp4194, &tmp4198);
          if(tmp4199 > 0.5)
          {
            tmp4199 -= 1.0;
            tmp4198 += 1.0;
          }
          else if(tmp4199 < -0.5)
          {
            tmp4199 += 1.0;
            tmp4198 -= 1.0;
          }
          if(fabs(tmp4199) < 1e-10 && ((unsigned long)tmp4198 & 1))
          {
            tmp4195 = -pow(-tmp4193, tmp4196)*pow(tmp4193, tmp4197);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4193, tmp4194);
          }
        }
      }
      else
      {
        tmp4195 = pow(tmp4193, tmp4194);
      }
      if(isnan(tmp4195) || isinf(tmp4195))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4193, tmp4194);
      }
      tmp4201 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* QrefPu_load_22.Value0 PARAM */)) * (tmp4195);
    }
    tmp4203 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2829]] /* load_22.QPu variable */) - (tmp4201);
  }
  else
  {
    tmp4203 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[368]) /* $DAEres368 DAE_RESIDUAL_VAR */ = tmp4203;
  threadData->lastEquationSolved = 17504;
}
/*
equation index: 17505
type: SIMPLE_ASSIGN
$DAEres371 = if load_22.running.value then load_22.PPu - (if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else PrefPu_load_22.Value0 * ((load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) / (load_22.u0Pu.re ^ 2.0 + load_22.u0Pu.im ^ 2.0)) ^ (0.5 * load_22.alpha)) else -trafo_22_1022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17505};
  modelica_real tmp4204;
  modelica_real tmp4205;
  modelica_real tmp4206;
  modelica_real tmp4207;
  modelica_real tmp4208;
  modelica_real tmp4209;
  modelica_real tmp4210;
  modelica_real tmp4211;
  modelica_real tmp4212;
  modelica_real tmp4213;
  modelica_real tmp4214;
  modelica_boolean tmp4215;
  modelica_real tmp4216;
  modelica_boolean tmp4217;
  modelica_real tmp4218;
  tmp4217 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */);
  if(tmp4217)
  {
    tmp4215 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
    if(tmp4215)
    {
      tmp4216 = 0.0;
    }
    else
    {
      tmp4204 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
      tmp4205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
      tmp4206 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3460]] /* load_22.u0Pu.re PARAM */);
      tmp4207 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3459]] /* load_22.u0Pu.im PARAM */);
      tmp4208 = DIVISION((tmp4204 * tmp4204) + (tmp4205 * tmp4205),(tmp4206 * tmp4206) + (tmp4207 * tmp4207),"load_22.u0Pu.re ^ 2.0 + load_22.u0Pu.im ^ 2.0");
      tmp4209 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3453]] /* load_22.alpha PARAM */));
      if(tmp4208 < 0.0 && tmp4209 != 0.0)
      {
        tmp4211 = modf(tmp4209, &tmp4212);
        
        if(tmp4211 > 0.5)
        {
          tmp4211 -= 1.0;
          tmp4212 += 1.0;
        }
        else if(tmp4211 < -0.5)
        {
          tmp4211 += 1.0;
          tmp4212 -= 1.0;
        }
        
        if(fabs(tmp4211) < 1e-10)
          tmp4210 = pow(tmp4208, tmp4212);
        else
        {
          tmp4214 = modf(1.0/tmp4209, &tmp4213);
          if(tmp4214 > 0.5)
          {
            tmp4214 -= 1.0;
            tmp4213 += 1.0;
          }
          else if(tmp4214 < -0.5)
          {
            tmp4214 += 1.0;
            tmp4213 -= 1.0;
          }
          if(fabs(tmp4214) < 1e-10 && ((unsigned long)tmp4213 & 1))
          {
            tmp4210 = -pow(-tmp4208, tmp4211)*pow(tmp4208, tmp4212);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4208, tmp4209);
          }
        }
      }
      else
      {
        tmp4210 = pow(tmp4208, tmp4209);
      }
      if(isnan(tmp4210) || isinf(tmp4210))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4208, tmp4209);
      }
      tmp4216 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* PrefPu_load_22.Value0 PARAM */)) * (tmp4210);
    }
    tmp4218 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* load_22.PPu variable */) - (tmp4216);
  }
  else
  {
    tmp4218 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[371]) /* $DAEres371 DAE_RESIDUAL_VAR */ = tmp4218;
  threadData->lastEquationSolved = 17505;
}
/*
equation index: 17506
type: SIMPLE_ASSIGN
load_22.UPu.value = if load_22.running.value then (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17506};
  modelica_real tmp4219;
  modelica_real tmp4220;
  modelica_real tmp4221;
  modelica_boolean tmp4222;
  modelica_real tmp4223;
  tmp4222 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */);
  if(tmp4222)
  {
    tmp4219 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
    tmp4220 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
    tmp4221 = (tmp4219 * tmp4219) + (tmp4220 * tmp4220);
    if(tmp4221 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4221, 0.5);
    }
    tmp4223 = sqrt(tmp4221);
  }
  else
  {
    tmp4223 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2830]] /* load_22.UPu.value variable */) = tmp4223;
  threadData->lastEquationSolved = 17506;
}
/*
equation index: 17507
type: SIMPLE_ASSIGN
$whenCondition289 = not pre(load_13.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17507};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[210]] /* $whenCondition289 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */));
  threadData->lastEquationSolved = 17507;
}
/*
equation index: 17508
type: WHEN

when {} then
  load_13.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17508};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[210]] /* $whenCondition289 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[210] /* $whenCondition289 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17508;
}
/*
equation index: 17510
type: SIMPLE_ASSIGN
$whenCondition291 = not load_13.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17510};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[213]] /* $whenCondition291 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */));
  threadData->lastEquationSolved = 17510;
}
/*
equation index: 17511
type: SIMPLE_ASSIGN
$whenCondition290 = load_13.running.value and not pre(load_13.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17511};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[212]] /* $whenCondition290 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17511;
}
/*
equation index: 17512
type: WHEN

when {$whenCondition291} then
  load_13.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17512};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[213]] /* $whenCondition291 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[213] /* $whenCondition291 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[99]] /* load_13.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[212]] /* $whenCondition290 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[212] /* $whenCondition290 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[99]] /* load_13.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17512;
}
/*
equation index: 17514
type: SIMPLE_ASSIGN
$DAEres448 = if load_13.running.value then load_13.QPu - (if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else QrefPu_load_13.Value0 * ((load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) / (load_13.u0Pu.re ^ 2.0 + load_13.u0Pu.im ^ 2.0)) ^ (0.5 * load_13.beta)) else -trafo_13_1013.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17514};
  modelica_real tmp4224;
  modelica_real tmp4225;
  modelica_real tmp4226;
  modelica_real tmp4227;
  modelica_real tmp4228;
  modelica_real tmp4229;
  modelica_real tmp4230;
  modelica_real tmp4231;
  modelica_real tmp4232;
  modelica_real tmp4233;
  modelica_real tmp4234;
  modelica_boolean tmp4235;
  modelica_real tmp4236;
  modelica_boolean tmp4237;
  modelica_real tmp4238;
  tmp4237 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */);
  if(tmp4237)
  {
    tmp4235 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
    if(tmp4235)
    {
      tmp4236 = 0.0;
    }
    else
    {
      tmp4224 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
      tmp4225 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
      tmp4226 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3452]] /* load_13.u0Pu.re PARAM */);
      tmp4227 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3451]] /* load_13.u0Pu.im PARAM */);
      tmp4228 = DIVISION((tmp4224 * tmp4224) + (tmp4225 * tmp4225),(tmp4226 * tmp4226) + (tmp4227 * tmp4227),"load_13.u0Pu.re ^ 2.0 + load_13.u0Pu.im ^ 2.0");
      tmp4229 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3446]] /* load_13.beta PARAM */));
      if(tmp4228 < 0.0 && tmp4229 != 0.0)
      {
        tmp4231 = modf(tmp4229, &tmp4232);
        
        if(tmp4231 > 0.5)
        {
          tmp4231 -= 1.0;
          tmp4232 += 1.0;
        }
        else if(tmp4231 < -0.5)
        {
          tmp4231 += 1.0;
          tmp4232 -= 1.0;
        }
        
        if(fabs(tmp4231) < 1e-10)
          tmp4230 = pow(tmp4228, tmp4232);
        else
        {
          tmp4234 = modf(1.0/tmp4229, &tmp4233);
          if(tmp4234 > 0.5)
          {
            tmp4234 -= 1.0;
            tmp4233 += 1.0;
          }
          else if(tmp4234 < -0.5)
          {
            tmp4234 += 1.0;
            tmp4233 -= 1.0;
          }
          if(fabs(tmp4234) < 1e-10 && ((unsigned long)tmp4233 & 1))
          {
            tmp4230 = -pow(-tmp4228, tmp4231)*pow(tmp4228, tmp4232);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4228, tmp4229);
          }
        }
      }
      else
      {
        tmp4230 = pow(tmp4228, tmp4229);
      }
      if(isnan(tmp4230) || isinf(tmp4230))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4228, tmp4229);
      }
      tmp4236 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* QrefPu_load_13.Value0 PARAM */)) * (tmp4230);
    }
    tmp4238 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2822]] /* load_13.QPu variable */) - (tmp4236);
  }
  else
  {
    tmp4238 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[448]) /* $DAEres448 DAE_RESIDUAL_VAR */ = tmp4238;
  threadData->lastEquationSolved = 17514;
}
/*
equation index: 17515
type: SIMPLE_ASSIGN
$DAEres449 = if load_13.running.value then load_13.PPu - (if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else PrefPu_load_13.Value0 * ((load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) / (load_13.u0Pu.re ^ 2.0 + load_13.u0Pu.im ^ 2.0)) ^ (0.5 * load_13.alpha)) else -trafo_13_1013.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17515};
  modelica_real tmp4239;
  modelica_real tmp4240;
  modelica_real tmp4241;
  modelica_real tmp4242;
  modelica_real tmp4243;
  modelica_real tmp4244;
  modelica_real tmp4245;
  modelica_real tmp4246;
  modelica_real tmp4247;
  modelica_real tmp4248;
  modelica_real tmp4249;
  modelica_boolean tmp4250;
  modelica_real tmp4251;
  modelica_boolean tmp4252;
  modelica_real tmp4253;
  tmp4252 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */);
  if(tmp4252)
  {
    tmp4250 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
    if(tmp4250)
    {
      tmp4251 = 0.0;
    }
    else
    {
      tmp4239 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
      tmp4240 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
      tmp4241 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3452]] /* load_13.u0Pu.re PARAM */);
      tmp4242 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3451]] /* load_13.u0Pu.im PARAM */);
      tmp4243 = DIVISION((tmp4239 * tmp4239) + (tmp4240 * tmp4240),(tmp4241 * tmp4241) + (tmp4242 * tmp4242),"load_13.u0Pu.re ^ 2.0 + load_13.u0Pu.im ^ 2.0");
      tmp4244 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3445]] /* load_13.alpha PARAM */));
      if(tmp4243 < 0.0 && tmp4244 != 0.0)
      {
        tmp4246 = modf(tmp4244, &tmp4247);
        
        if(tmp4246 > 0.5)
        {
          tmp4246 -= 1.0;
          tmp4247 += 1.0;
        }
        else if(tmp4246 < -0.5)
        {
          tmp4246 += 1.0;
          tmp4247 -= 1.0;
        }
        
        if(fabs(tmp4246) < 1e-10)
          tmp4245 = pow(tmp4243, tmp4247);
        else
        {
          tmp4249 = modf(1.0/tmp4244, &tmp4248);
          if(tmp4249 > 0.5)
          {
            tmp4249 -= 1.0;
            tmp4248 += 1.0;
          }
          else if(tmp4249 < -0.5)
          {
            tmp4249 += 1.0;
            tmp4248 -= 1.0;
          }
          if(fabs(tmp4249) < 1e-10 && ((unsigned long)tmp4248 & 1))
          {
            tmp4245 = -pow(-tmp4243, tmp4246)*pow(tmp4243, tmp4247);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4243, tmp4244);
          }
        }
      }
      else
      {
        tmp4245 = pow(tmp4243, tmp4244);
      }
      if(isnan(tmp4245) || isinf(tmp4245))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4243, tmp4244);
      }
      tmp4251 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* PrefPu_load_13.Value0 PARAM */)) * (tmp4245);
    }
    tmp4253 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2821]] /* load_13.PPu variable */) - (tmp4251);
  }
  else
  {
    tmp4253 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[449]) /* $DAEres449 DAE_RESIDUAL_VAR */ = tmp4253;
  threadData->lastEquationSolved = 17515;
}
/*
equation index: 17516
type: SIMPLE_ASSIGN
load_13.UPu.value = if load_13.running.value then (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17516};
  modelica_real tmp4254;
  modelica_real tmp4255;
  modelica_real tmp4256;
  modelica_boolean tmp4257;
  modelica_real tmp4258;
  tmp4257 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */);
  if(tmp4257)
  {
    tmp4254 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
    tmp4255 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
    tmp4256 = (tmp4254 * tmp4254) + (tmp4255 * tmp4255);
    if(tmp4256 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4256, 0.5);
    }
    tmp4258 = sqrt(tmp4256);
  }
  else
  {
    tmp4258 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2823]] /* load_13.UPu.value variable */) = tmp4258;
  threadData->lastEquationSolved = 17516;
}
/*
equation index: 17517
type: SIMPLE_ASSIGN
$whenCondition292 = not pre(load_12.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17517};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[214]] /* $whenCondition292 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */));
  threadData->lastEquationSolved = 17517;
}
/*
equation index: 17518
type: WHEN

when {} then
  load_12.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17518};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[214]] /* $whenCondition292 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[214] /* $whenCondition292 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17518;
}
/*
equation index: 17520
type: SIMPLE_ASSIGN
$whenCondition294 = not load_12.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17520};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[216]] /* $whenCondition294 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */));
  threadData->lastEquationSolved = 17520;
}
/*
equation index: 17521
type: SIMPLE_ASSIGN
$whenCondition293 = load_12.running.value and not pre(load_12.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17521};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[215]] /* $whenCondition293 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17521;
}
/*
equation index: 17522
type: WHEN

when {$whenCondition294} then
  load_12.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17522};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[216]] /* $whenCondition294 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[216] /* $whenCondition294 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[98]] /* load_12.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[215]] /* $whenCondition293 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[215] /* $whenCondition293 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[98]] /* load_12.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17522;
}
/*
equation index: 17524
type: SIMPLE_ASSIGN
$DAEres431 = if load_12.running.value then load_12.QPu - (if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else QrefPu_load_12.Value0 * ((load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) / (load_12.u0Pu.re ^ 2.0 + load_12.u0Pu.im ^ 2.0)) ^ (0.5 * load_12.beta)) else -trafo_12_1012.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17524};
  modelica_real tmp4259;
  modelica_real tmp4260;
  modelica_real tmp4261;
  modelica_real tmp4262;
  modelica_real tmp4263;
  modelica_real tmp4264;
  modelica_real tmp4265;
  modelica_real tmp4266;
  modelica_real tmp4267;
  modelica_real tmp4268;
  modelica_real tmp4269;
  modelica_boolean tmp4270;
  modelica_real tmp4271;
  modelica_boolean tmp4272;
  modelica_real tmp4273;
  tmp4272 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */);
  if(tmp4272)
  {
    tmp4270 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
    if(tmp4270)
    {
      tmp4271 = 0.0;
    }
    else
    {
      tmp4259 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
      tmp4260 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
      tmp4261 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3444]] /* load_12.u0Pu.re PARAM */);
      tmp4262 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3443]] /* load_12.u0Pu.im PARAM */);
      tmp4263 = DIVISION((tmp4259 * tmp4259) + (tmp4260 * tmp4260),(tmp4261 * tmp4261) + (tmp4262 * tmp4262),"load_12.u0Pu.re ^ 2.0 + load_12.u0Pu.im ^ 2.0");
      tmp4264 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3438]] /* load_12.beta PARAM */));
      if(tmp4263 < 0.0 && tmp4264 != 0.0)
      {
        tmp4266 = modf(tmp4264, &tmp4267);
        
        if(tmp4266 > 0.5)
        {
          tmp4266 -= 1.0;
          tmp4267 += 1.0;
        }
        else if(tmp4266 < -0.5)
        {
          tmp4266 += 1.0;
          tmp4267 -= 1.0;
        }
        
        if(fabs(tmp4266) < 1e-10)
          tmp4265 = pow(tmp4263, tmp4267);
        else
        {
          tmp4269 = modf(1.0/tmp4264, &tmp4268);
          if(tmp4269 > 0.5)
          {
            tmp4269 -= 1.0;
            tmp4268 += 1.0;
          }
          else if(tmp4269 < -0.5)
          {
            tmp4269 += 1.0;
            tmp4268 -= 1.0;
          }
          if(fabs(tmp4269) < 1e-10 && ((unsigned long)tmp4268 & 1))
          {
            tmp4265 = -pow(-tmp4263, tmp4266)*pow(tmp4263, tmp4267);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4263, tmp4264);
          }
        }
      }
      else
      {
        tmp4265 = pow(tmp4263, tmp4264);
      }
      if(isnan(tmp4265) || isinf(tmp4265))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4263, tmp4264);
      }
      tmp4271 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* QrefPu_load_12.Value0 PARAM */)) * (tmp4265);
    }
    tmp4273 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2815]] /* load_12.QPu variable */) - (tmp4271);
  }
  else
  {
    tmp4273 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[431]) /* $DAEres431 DAE_RESIDUAL_VAR */ = tmp4273;
  threadData->lastEquationSolved = 17524;
}
/*
equation index: 17525
type: SIMPLE_ASSIGN
$DAEres432 = if load_12.running.value then load_12.PPu - (if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else PrefPu_load_12.Value0 * ((load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) / (load_12.u0Pu.re ^ 2.0 + load_12.u0Pu.im ^ 2.0)) ^ (0.5 * load_12.alpha)) else -trafo_12_1012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17525};
  modelica_real tmp4274;
  modelica_real tmp4275;
  modelica_real tmp4276;
  modelica_real tmp4277;
  modelica_real tmp4278;
  modelica_real tmp4279;
  modelica_real tmp4280;
  modelica_real tmp4281;
  modelica_real tmp4282;
  modelica_real tmp4283;
  modelica_real tmp4284;
  modelica_boolean tmp4285;
  modelica_real tmp4286;
  modelica_boolean tmp4287;
  modelica_real tmp4288;
  tmp4287 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */);
  if(tmp4287)
  {
    tmp4285 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
    if(tmp4285)
    {
      tmp4286 = 0.0;
    }
    else
    {
      tmp4274 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
      tmp4275 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
      tmp4276 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3444]] /* load_12.u0Pu.re PARAM */);
      tmp4277 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3443]] /* load_12.u0Pu.im PARAM */);
      tmp4278 = DIVISION((tmp4274 * tmp4274) + (tmp4275 * tmp4275),(tmp4276 * tmp4276) + (tmp4277 * tmp4277),"load_12.u0Pu.re ^ 2.0 + load_12.u0Pu.im ^ 2.0");
      tmp4279 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3437]] /* load_12.alpha PARAM */));
      if(tmp4278 < 0.0 && tmp4279 != 0.0)
      {
        tmp4281 = modf(tmp4279, &tmp4282);
        
        if(tmp4281 > 0.5)
        {
          tmp4281 -= 1.0;
          tmp4282 += 1.0;
        }
        else if(tmp4281 < -0.5)
        {
          tmp4281 += 1.0;
          tmp4282 -= 1.0;
        }
        
        if(fabs(tmp4281) < 1e-10)
          tmp4280 = pow(tmp4278, tmp4282);
        else
        {
          tmp4284 = modf(1.0/tmp4279, &tmp4283);
          if(tmp4284 > 0.5)
          {
            tmp4284 -= 1.0;
            tmp4283 += 1.0;
          }
          else if(tmp4284 < -0.5)
          {
            tmp4284 += 1.0;
            tmp4283 -= 1.0;
          }
          if(fabs(tmp4284) < 1e-10 && ((unsigned long)tmp4283 & 1))
          {
            tmp4280 = -pow(-tmp4278, tmp4281)*pow(tmp4278, tmp4282);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4278, tmp4279);
          }
        }
      }
      else
      {
        tmp4280 = pow(tmp4278, tmp4279);
      }
      if(isnan(tmp4280) || isinf(tmp4280))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4278, tmp4279);
      }
      tmp4286 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* PrefPu_load_12.Value0 PARAM */)) * (tmp4280);
    }
    tmp4288 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2814]] /* load_12.PPu variable */) - (tmp4286);
  }
  else
  {
    tmp4288 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[432]) /* $DAEres432 DAE_RESIDUAL_VAR */ = tmp4288;
  threadData->lastEquationSolved = 17525;
}
/*
equation index: 17526
type: SIMPLE_ASSIGN
load_12.UPu.value = if load_12.running.value then (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17526};
  modelica_real tmp4289;
  modelica_real tmp4290;
  modelica_real tmp4291;
  modelica_boolean tmp4292;
  modelica_real tmp4293;
  tmp4292 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */);
  if(tmp4292)
  {
    tmp4289 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
    tmp4290 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
    tmp4291 = (tmp4289 * tmp4289) + (tmp4290 * tmp4290);
    if(tmp4291 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4291, 0.5);
    }
    tmp4293 = sqrt(tmp4291);
  }
  else
  {
    tmp4293 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2816]] /* load_12.UPu.value variable */) = tmp4293;
  threadData->lastEquationSolved = 17526;
}
/*
equation index: 17527
type: SIMPLE_ASSIGN
$whenCondition295 = not pre(load_11.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17527};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[217]] /* $whenCondition295 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */));
  threadData->lastEquationSolved = 17527;
}
/*
equation index: 17528
type: WHEN

when {} then
  load_11.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17528};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[217]] /* $whenCondition295 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[217] /* $whenCondition295 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17528;
}
/*
equation index: 17530
type: SIMPLE_ASSIGN
$whenCondition297 = not load_11.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17530};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[219]] /* $whenCondition297 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */));
  threadData->lastEquationSolved = 17530;
}
/*
equation index: 17531
type: SIMPLE_ASSIGN
$whenCondition296 = load_11.running.value and not pre(load_11.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17531};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[218]] /* $whenCondition296 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17531;
}
/*
equation index: 17532
type: WHEN

when {$whenCondition297} then
  load_11.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17532};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[219]] /* $whenCondition297 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[219] /* $whenCondition297 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[97]] /* load_11.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[218]] /* $whenCondition296 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[218] /* $whenCondition296 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[97]] /* load_11.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17532;
}
/*
equation index: 17534
type: SIMPLE_ASSIGN
$DAEres480 = if load_11.running.value then load_11.QPu - (if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else QrefPu_load_11.Value0 * ((load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) / (load_11.u0Pu.re ^ 2.0 + load_11.u0Pu.im ^ 2.0)) ^ (0.5 * load_11.beta)) else -trafo_11_1011.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17534};
  modelica_real tmp4294;
  modelica_real tmp4295;
  modelica_real tmp4296;
  modelica_real tmp4297;
  modelica_real tmp4298;
  modelica_real tmp4299;
  modelica_real tmp4300;
  modelica_real tmp4301;
  modelica_real tmp4302;
  modelica_real tmp4303;
  modelica_real tmp4304;
  modelica_boolean tmp4305;
  modelica_real tmp4306;
  modelica_boolean tmp4307;
  modelica_real tmp4308;
  tmp4307 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */);
  if(tmp4307)
  {
    tmp4305 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
    if(tmp4305)
    {
      tmp4306 = 0.0;
    }
    else
    {
      tmp4294 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
      tmp4295 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
      tmp4296 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3436]] /* load_11.u0Pu.re PARAM */);
      tmp4297 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3435]] /* load_11.u0Pu.im PARAM */);
      tmp4298 = DIVISION((tmp4294 * tmp4294) + (tmp4295 * tmp4295),(tmp4296 * tmp4296) + (tmp4297 * tmp4297),"load_11.u0Pu.re ^ 2.0 + load_11.u0Pu.im ^ 2.0");
      tmp4299 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3430]] /* load_11.beta PARAM */));
      if(tmp4298 < 0.0 && tmp4299 != 0.0)
      {
        tmp4301 = modf(tmp4299, &tmp4302);
        
        if(tmp4301 > 0.5)
        {
          tmp4301 -= 1.0;
          tmp4302 += 1.0;
        }
        else if(tmp4301 < -0.5)
        {
          tmp4301 += 1.0;
          tmp4302 -= 1.0;
        }
        
        if(fabs(tmp4301) < 1e-10)
          tmp4300 = pow(tmp4298, tmp4302);
        else
        {
          tmp4304 = modf(1.0/tmp4299, &tmp4303);
          if(tmp4304 > 0.5)
          {
            tmp4304 -= 1.0;
            tmp4303 += 1.0;
          }
          else if(tmp4304 < -0.5)
          {
            tmp4304 += 1.0;
            tmp4303 -= 1.0;
          }
          if(fabs(tmp4304) < 1e-10 && ((unsigned long)tmp4303 & 1))
          {
            tmp4300 = -pow(-tmp4298, tmp4301)*pow(tmp4298, tmp4302);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4298, tmp4299);
          }
        }
      }
      else
      {
        tmp4300 = pow(tmp4298, tmp4299);
      }
      if(isnan(tmp4300) || isinf(tmp4300))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4298, tmp4299);
      }
      tmp4306 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* QrefPu_load_11.Value0 PARAM */)) * (tmp4300);
    }
    tmp4308 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* load_11.QPu variable */) - (tmp4306);
  }
  else
  {
    tmp4308 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[480]) /* $DAEres480 DAE_RESIDUAL_VAR */ = tmp4308;
  threadData->lastEquationSolved = 17534;
}
/*
equation index: 17535
type: SIMPLE_ASSIGN
$DAEres482 = if load_11.running.value then load_11.PPu - (if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else PrefPu_load_11.Value0 * ((load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) / (load_11.u0Pu.re ^ 2.0 + load_11.u0Pu.im ^ 2.0)) ^ (0.5 * load_11.alpha)) else -trafo_11_1011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17535};
  modelica_real tmp4309;
  modelica_real tmp4310;
  modelica_real tmp4311;
  modelica_real tmp4312;
  modelica_real tmp4313;
  modelica_real tmp4314;
  modelica_real tmp4315;
  modelica_real tmp4316;
  modelica_real tmp4317;
  modelica_real tmp4318;
  modelica_real tmp4319;
  modelica_boolean tmp4320;
  modelica_real tmp4321;
  modelica_boolean tmp4322;
  modelica_real tmp4323;
  tmp4322 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */);
  if(tmp4322)
  {
    tmp4320 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
    if(tmp4320)
    {
      tmp4321 = 0.0;
    }
    else
    {
      tmp4309 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
      tmp4310 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
      tmp4311 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3436]] /* load_11.u0Pu.re PARAM */);
      tmp4312 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3435]] /* load_11.u0Pu.im PARAM */);
      tmp4313 = DIVISION((tmp4309 * tmp4309) + (tmp4310 * tmp4310),(tmp4311 * tmp4311) + (tmp4312 * tmp4312),"load_11.u0Pu.re ^ 2.0 + load_11.u0Pu.im ^ 2.0");
      tmp4314 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3429]] /* load_11.alpha PARAM */));
      if(tmp4313 < 0.0 && tmp4314 != 0.0)
      {
        tmp4316 = modf(tmp4314, &tmp4317);
        
        if(tmp4316 > 0.5)
        {
          tmp4316 -= 1.0;
          tmp4317 += 1.0;
        }
        else if(tmp4316 < -0.5)
        {
          tmp4316 += 1.0;
          tmp4317 -= 1.0;
        }
        
        if(fabs(tmp4316) < 1e-10)
          tmp4315 = pow(tmp4313, tmp4317);
        else
        {
          tmp4319 = modf(1.0/tmp4314, &tmp4318);
          if(tmp4319 > 0.5)
          {
            tmp4319 -= 1.0;
            tmp4318 += 1.0;
          }
          else if(tmp4319 < -0.5)
          {
            tmp4319 += 1.0;
            tmp4318 -= 1.0;
          }
          if(fabs(tmp4319) < 1e-10 && ((unsigned long)tmp4318 & 1))
          {
            tmp4315 = -pow(-tmp4313, tmp4316)*pow(tmp4313, tmp4317);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4313, tmp4314);
          }
        }
      }
      else
      {
        tmp4315 = pow(tmp4313, tmp4314);
      }
      if(isnan(tmp4315) || isinf(tmp4315))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4313, tmp4314);
      }
      tmp4321 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* PrefPu_load_11.Value0 PARAM */)) * (tmp4315);
    }
    tmp4323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2807]] /* load_11.PPu variable */) - (tmp4321);
  }
  else
  {
    tmp4323 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[482]) /* $DAEres482 DAE_RESIDUAL_VAR */ = tmp4323;
  threadData->lastEquationSolved = 17535;
}
/*
equation index: 17536
type: SIMPLE_ASSIGN
load_11.UPu.value = if load_11.running.value then (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17536};
  modelica_real tmp4324;
  modelica_real tmp4325;
  modelica_real tmp4326;
  modelica_boolean tmp4327;
  modelica_real tmp4328;
  tmp4327 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */);
  if(tmp4327)
  {
    tmp4324 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
    tmp4325 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
    tmp4326 = (tmp4324 * tmp4324) + (tmp4325 * tmp4325);
    if(tmp4326 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4326, 0.5);
    }
    tmp4328 = sqrt(tmp4326);
  }
  else
  {
    tmp4328 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2809]] /* load_11.UPu.value variable */) = tmp4328;
  threadData->lastEquationSolved = 17536;
}
/*
equation index: 17537
type: SIMPLE_ASSIGN
$whenCondition298 = not pre(load_05.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17537};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[220]] /* $whenCondition298 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */));
  threadData->lastEquationSolved = 17537;
}
/*
equation index: 17538
type: WHEN

when {} then
  load_05.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17538};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[220]] /* $whenCondition298 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[220] /* $whenCondition298 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17538;
}
/*
equation index: 17540
type: SIMPLE_ASSIGN
$whenCondition300 = not load_05.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17540};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[224]] /* $whenCondition300 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */));
  threadData->lastEquationSolved = 17540;
}
/*
equation index: 17541
type: SIMPLE_ASSIGN
$whenCondition299 = load_05.running.value and not pre(load_05.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17541};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[221]] /* $whenCondition299 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17541;
}
/*
equation index: 17542
type: WHEN

when {$whenCondition300} then
  load_05.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17542};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[224]] /* $whenCondition300 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[224] /* $whenCondition300 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[96]] /* load_05.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[221]] /* $whenCondition299 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[221] /* $whenCondition299 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[96]] /* load_05.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17542;
}
/*
equation index: 17544
type: SIMPLE_ASSIGN
$DAEres906 = if load_05.running.value then load_05.PPu - (if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else PrefPu_load_05.Value0 * ((load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) / (load_05.u0Pu.re ^ 2.0 + load_05.u0Pu.im ^ 2.0)) ^ (0.5 * load_05.alpha)) else -trafo_5_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17544};
  modelica_real tmp4329;
  modelica_real tmp4330;
  modelica_real tmp4331;
  modelica_real tmp4332;
  modelica_real tmp4333;
  modelica_real tmp4334;
  modelica_real tmp4335;
  modelica_real tmp4336;
  modelica_real tmp4337;
  modelica_real tmp4338;
  modelica_real tmp4339;
  modelica_boolean tmp4340;
  modelica_real tmp4341;
  modelica_boolean tmp4342;
  modelica_real tmp4343;
  tmp4342 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */);
  if(tmp4342)
  {
    tmp4340 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
    if(tmp4340)
    {
      tmp4341 = 0.0;
    }
    else
    {
      tmp4329 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
      tmp4330 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
      tmp4331 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3428]] /* load_05.u0Pu.re PARAM */);
      tmp4332 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3427]] /* load_05.u0Pu.im PARAM */);
      tmp4333 = DIVISION((tmp4329 * tmp4329) + (tmp4330 * tmp4330),(tmp4331 * tmp4331) + (tmp4332 * tmp4332),"load_05.u0Pu.re ^ 2.0 + load_05.u0Pu.im ^ 2.0");
      tmp4334 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3421]] /* load_05.alpha PARAM */));
      if(tmp4333 < 0.0 && tmp4334 != 0.0)
      {
        tmp4336 = modf(tmp4334, &tmp4337);
        
        if(tmp4336 > 0.5)
        {
          tmp4336 -= 1.0;
          tmp4337 += 1.0;
        }
        else if(tmp4336 < -0.5)
        {
          tmp4336 += 1.0;
          tmp4337 -= 1.0;
        }
        
        if(fabs(tmp4336) < 1e-10)
          tmp4335 = pow(tmp4333, tmp4337);
        else
        {
          tmp4339 = modf(1.0/tmp4334, &tmp4338);
          if(tmp4339 > 0.5)
          {
            tmp4339 -= 1.0;
            tmp4338 += 1.0;
          }
          else if(tmp4339 < -0.5)
          {
            tmp4339 += 1.0;
            tmp4338 -= 1.0;
          }
          if(fabs(tmp4339) < 1e-10 && ((unsigned long)tmp4338 & 1))
          {
            tmp4335 = -pow(-tmp4333, tmp4336)*pow(tmp4333, tmp4337);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4333, tmp4334);
          }
        }
      }
      else
      {
        tmp4335 = pow(tmp4333, tmp4334);
      }
      if(isnan(tmp4335) || isinf(tmp4335))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4333, tmp4334);
      }
      tmp4341 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* PrefPu_load_05.Value0 PARAM */)) * (tmp4335);
    }
    tmp4343 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2800]] /* load_05.PPu variable */) - (tmp4341);
  }
  else
  {
    tmp4343 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[906]) /* $DAEres906 DAE_RESIDUAL_VAR */ = tmp4343;
  threadData->lastEquationSolved = 17544;
}
/*
equation index: 17545
type: SIMPLE_ASSIGN
$DAEres908 = if load_05.running.value then load_05.QPu - (if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else QrefPu_load_05.Value0 * ((load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) / (load_05.u0Pu.re ^ 2.0 + load_05.u0Pu.im ^ 2.0)) ^ (0.5 * load_05.beta)) else -trafo_5_1045.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17545};
  modelica_real tmp4344;
  modelica_real tmp4345;
  modelica_real tmp4346;
  modelica_real tmp4347;
  modelica_real tmp4348;
  modelica_real tmp4349;
  modelica_real tmp4350;
  modelica_real tmp4351;
  modelica_real tmp4352;
  modelica_real tmp4353;
  modelica_real tmp4354;
  modelica_boolean tmp4355;
  modelica_real tmp4356;
  modelica_boolean tmp4357;
  modelica_real tmp4358;
  tmp4357 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */);
  if(tmp4357)
  {
    tmp4355 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
    if(tmp4355)
    {
      tmp4356 = 0.0;
    }
    else
    {
      tmp4344 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
      tmp4345 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
      tmp4346 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3428]] /* load_05.u0Pu.re PARAM */);
      tmp4347 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3427]] /* load_05.u0Pu.im PARAM */);
      tmp4348 = DIVISION((tmp4344 * tmp4344) + (tmp4345 * tmp4345),(tmp4346 * tmp4346) + (tmp4347 * tmp4347),"load_05.u0Pu.re ^ 2.0 + load_05.u0Pu.im ^ 2.0");
      tmp4349 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3422]] /* load_05.beta PARAM */));
      if(tmp4348 < 0.0 && tmp4349 != 0.0)
      {
        tmp4351 = modf(tmp4349, &tmp4352);
        
        if(tmp4351 > 0.5)
        {
          tmp4351 -= 1.0;
          tmp4352 += 1.0;
        }
        else if(tmp4351 < -0.5)
        {
          tmp4351 += 1.0;
          tmp4352 -= 1.0;
        }
        
        if(fabs(tmp4351) < 1e-10)
          tmp4350 = pow(tmp4348, tmp4352);
        else
        {
          tmp4354 = modf(1.0/tmp4349, &tmp4353);
          if(tmp4354 > 0.5)
          {
            tmp4354 -= 1.0;
            tmp4353 += 1.0;
          }
          else if(tmp4354 < -0.5)
          {
            tmp4354 += 1.0;
            tmp4353 -= 1.0;
          }
          if(fabs(tmp4354) < 1e-10 && ((unsigned long)tmp4353 & 1))
          {
            tmp4350 = -pow(-tmp4348, tmp4351)*pow(tmp4348, tmp4352);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4348, tmp4349);
          }
        }
      }
      else
      {
        tmp4350 = pow(tmp4348, tmp4349);
      }
      if(isnan(tmp4350) || isinf(tmp4350))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4348, tmp4349);
      }
      tmp4356 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* QrefPu_load_05.Value0 PARAM */)) * (tmp4350);
    }
    tmp4358 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* load_05.QPu variable */) - (tmp4356);
  }
  else
  {
    tmp4358 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[908]) /* $DAEres908 DAE_RESIDUAL_VAR */ = tmp4358;
  threadData->lastEquationSolved = 17545;
}
/*
equation index: 17546
type: SIMPLE_ASSIGN
load_05.UPu.value = if load_05.running.value then (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17546};
  modelica_real tmp4359;
  modelica_real tmp4360;
  modelica_real tmp4361;
  modelica_boolean tmp4362;
  modelica_real tmp4363;
  tmp4362 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */);
  if(tmp4362)
  {
    tmp4359 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
    tmp4360 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
    tmp4361 = (tmp4359 * tmp4359) + (tmp4360 * tmp4360);
    if(tmp4361 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4361, 0.5);
    }
    tmp4363 = sqrt(tmp4361);
  }
  else
  {
    tmp4363 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2802]] /* load_05.UPu.value variable */) = tmp4363;
  threadData->lastEquationSolved = 17546;
}
/*
equation index: 17547
type: SIMPLE_ASSIGN
$whenCondition301 = not pre(load_04.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17547};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[225]] /* $whenCondition301 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */));
  threadData->lastEquationSolved = 17547;
}
/*
equation index: 17548
type: WHEN

when {} then
  load_04.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17548};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[225]] /* $whenCondition301 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[225] /* $whenCondition301 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17548;
}
/*
equation index: 17550
type: SIMPLE_ASSIGN
$whenCondition303 = not load_04.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17550};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[227]] /* $whenCondition303 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */));
  threadData->lastEquationSolved = 17550;
}
/*
equation index: 17551
type: SIMPLE_ASSIGN
$whenCondition302 = load_04.running.value and not pre(load_04.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17551};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[226]] /* $whenCondition302 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17551;
}
/*
equation index: 17552
type: WHEN

when {$whenCondition303} then
  load_04.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17552};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[227]] /* $whenCondition303 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[227] /* $whenCondition303 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[95]] /* load_04.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[226]] /* $whenCondition302 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[226] /* $whenCondition302 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[95]] /* load_04.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17552;
}
/*
equation index: 17554
type: SIMPLE_ASSIGN
$DAEres855 = if load_04.running.value then load_04.QPu - (if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else QrefPu_load_04.Value0 * ((load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) / (load_04.u0Pu.re ^ 2.0 + load_04.u0Pu.im ^ 2.0)) ^ (0.5 * load_04.beta)) else -trafo_4_1044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17554};
  modelica_real tmp4364;
  modelica_real tmp4365;
  modelica_real tmp4366;
  modelica_real tmp4367;
  modelica_real tmp4368;
  modelica_real tmp4369;
  modelica_real tmp4370;
  modelica_real tmp4371;
  modelica_real tmp4372;
  modelica_real tmp4373;
  modelica_real tmp4374;
  modelica_boolean tmp4375;
  modelica_real tmp4376;
  modelica_boolean tmp4377;
  modelica_real tmp4378;
  tmp4377 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */);
  if(tmp4377)
  {
    tmp4375 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
    if(tmp4375)
    {
      tmp4376 = 0.0;
    }
    else
    {
      tmp4364 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
      tmp4365 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
      tmp4366 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3420]] /* load_04.u0Pu.re PARAM */);
      tmp4367 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3419]] /* load_04.u0Pu.im PARAM */);
      tmp4368 = DIVISION((tmp4364 * tmp4364) + (tmp4365 * tmp4365),(tmp4366 * tmp4366) + (tmp4367 * tmp4367),"load_04.u0Pu.re ^ 2.0 + load_04.u0Pu.im ^ 2.0");
      tmp4369 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3414]] /* load_04.beta PARAM */));
      if(tmp4368 < 0.0 && tmp4369 != 0.0)
      {
        tmp4371 = modf(tmp4369, &tmp4372);
        
        if(tmp4371 > 0.5)
        {
          tmp4371 -= 1.0;
          tmp4372 += 1.0;
        }
        else if(tmp4371 < -0.5)
        {
          tmp4371 += 1.0;
          tmp4372 -= 1.0;
        }
        
        if(fabs(tmp4371) < 1e-10)
          tmp4370 = pow(tmp4368, tmp4372);
        else
        {
          tmp4374 = modf(1.0/tmp4369, &tmp4373);
          if(tmp4374 > 0.5)
          {
            tmp4374 -= 1.0;
            tmp4373 += 1.0;
          }
          else if(tmp4374 < -0.5)
          {
            tmp4374 += 1.0;
            tmp4373 -= 1.0;
          }
          if(fabs(tmp4374) < 1e-10 && ((unsigned long)tmp4373 & 1))
          {
            tmp4370 = -pow(-tmp4368, tmp4371)*pow(tmp4368, tmp4372);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4368, tmp4369);
          }
        }
      }
      else
      {
        tmp4370 = pow(tmp4368, tmp4369);
      }
      if(isnan(tmp4370) || isinf(tmp4370))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4368, tmp4369);
      }
      tmp4376 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* QrefPu_load_04.Value0 PARAM */)) * (tmp4370);
    }
    tmp4378 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2794]] /* load_04.QPu variable */) - (tmp4376);
  }
  else
  {
    tmp4378 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[855]) /* $DAEres855 DAE_RESIDUAL_VAR */ = tmp4378;
  threadData->lastEquationSolved = 17554;
}
/*
equation index: 17555
type: SIMPLE_ASSIGN
$DAEres857 = if load_04.running.value then load_04.PPu - (if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else PrefPu_load_04.Value0 * ((load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) / (load_04.u0Pu.re ^ 2.0 + load_04.u0Pu.im ^ 2.0)) ^ (0.5 * load_04.alpha)) else -trafo_4_1044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17555};
  modelica_real tmp4379;
  modelica_real tmp4380;
  modelica_real tmp4381;
  modelica_real tmp4382;
  modelica_real tmp4383;
  modelica_real tmp4384;
  modelica_real tmp4385;
  modelica_real tmp4386;
  modelica_real tmp4387;
  modelica_real tmp4388;
  modelica_real tmp4389;
  modelica_boolean tmp4390;
  modelica_real tmp4391;
  modelica_boolean tmp4392;
  modelica_real tmp4393;
  tmp4392 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */);
  if(tmp4392)
  {
    tmp4390 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
    if(tmp4390)
    {
      tmp4391 = 0.0;
    }
    else
    {
      tmp4379 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
      tmp4380 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
      tmp4381 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3420]] /* load_04.u0Pu.re PARAM */);
      tmp4382 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3419]] /* load_04.u0Pu.im PARAM */);
      tmp4383 = DIVISION((tmp4379 * tmp4379) + (tmp4380 * tmp4380),(tmp4381 * tmp4381) + (tmp4382 * tmp4382),"load_04.u0Pu.re ^ 2.0 + load_04.u0Pu.im ^ 2.0");
      tmp4384 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3413]] /* load_04.alpha PARAM */));
      if(tmp4383 < 0.0 && tmp4384 != 0.0)
      {
        tmp4386 = modf(tmp4384, &tmp4387);
        
        if(tmp4386 > 0.5)
        {
          tmp4386 -= 1.0;
          tmp4387 += 1.0;
        }
        else if(tmp4386 < -0.5)
        {
          tmp4386 += 1.0;
          tmp4387 -= 1.0;
        }
        
        if(fabs(tmp4386) < 1e-10)
          tmp4385 = pow(tmp4383, tmp4387);
        else
        {
          tmp4389 = modf(1.0/tmp4384, &tmp4388);
          if(tmp4389 > 0.5)
          {
            tmp4389 -= 1.0;
            tmp4388 += 1.0;
          }
          else if(tmp4389 < -0.5)
          {
            tmp4389 += 1.0;
            tmp4388 -= 1.0;
          }
          if(fabs(tmp4389) < 1e-10 && ((unsigned long)tmp4388 & 1))
          {
            tmp4385 = -pow(-tmp4383, tmp4386)*pow(tmp4383, tmp4387);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4383, tmp4384);
          }
        }
      }
      else
      {
        tmp4385 = pow(tmp4383, tmp4384);
      }
      if(isnan(tmp4385) || isinf(tmp4385))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4383, tmp4384);
      }
      tmp4391 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* PrefPu_load_04.Value0 PARAM */)) * (tmp4385);
    }
    tmp4393 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2793]] /* load_04.PPu variable */) - (tmp4391);
  }
  else
  {
    tmp4393 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[857]) /* $DAEres857 DAE_RESIDUAL_VAR */ = tmp4393;
  threadData->lastEquationSolved = 17555;
}
/*
equation index: 17556
type: SIMPLE_ASSIGN
load_04.UPu.value = if load_04.running.value then (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17556};
  modelica_real tmp4394;
  modelica_real tmp4395;
  modelica_real tmp4396;
  modelica_boolean tmp4397;
  modelica_real tmp4398;
  tmp4397 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */);
  if(tmp4397)
  {
    tmp4394 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
    tmp4395 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
    tmp4396 = (tmp4394 * tmp4394) + (tmp4395 * tmp4395);
    if(tmp4396 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4396, 0.5);
    }
    tmp4398 = sqrt(tmp4396);
  }
  else
  {
    tmp4398 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2795]] /* load_04.UPu.value variable */) = tmp4398;
  threadData->lastEquationSolved = 17556;
}
/*
equation index: 17557
type: SIMPLE_ASSIGN
$whenCondition304 = not pre(load_03.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17557};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[228]] /* $whenCondition304 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */));
  threadData->lastEquationSolved = 17557;
}
/*
equation index: 17558
type: WHEN

when {} then
  load_03.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17558};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[228]] /* $whenCondition304 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[228] /* $whenCondition304 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17558;
}
/*
equation index: 17560
type: SIMPLE_ASSIGN
$whenCondition306 = not load_03.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17560};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[230]] /* $whenCondition306 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */));
  threadData->lastEquationSolved = 17560;
}
/*
equation index: 17561
type: SIMPLE_ASSIGN
$whenCondition305 = load_03.running.value and not pre(load_03.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17561};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[229]] /* $whenCondition305 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17561;
}
/*
equation index: 17562
type: WHEN

when {$whenCondition306} then
  load_03.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17562};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[230]] /* $whenCondition306 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[230] /* $whenCondition306 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[94]] /* load_03.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[229]] /* $whenCondition305 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[229] /* $whenCondition305 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[94]] /* load_03.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17562;
}
/*
equation index: 17564
type: SIMPLE_ASSIGN
$DAEres809 = if load_03.running.value then load_03.QPu - (if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else QrefPu_load_03.Value0 * ((load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) / (load_03.u0Pu.re ^ 2.0 + load_03.u0Pu.im ^ 2.0)) ^ (0.5 * load_03.beta)) else -trafo_3_1043.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17564};
  modelica_real tmp4399;
  modelica_real tmp4400;
  modelica_real tmp4401;
  modelica_real tmp4402;
  modelica_real tmp4403;
  modelica_real tmp4404;
  modelica_real tmp4405;
  modelica_real tmp4406;
  modelica_real tmp4407;
  modelica_real tmp4408;
  modelica_real tmp4409;
  modelica_boolean tmp4410;
  modelica_real tmp4411;
  modelica_boolean tmp4412;
  modelica_real tmp4413;
  tmp4412 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */);
  if(tmp4412)
  {
    tmp4410 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
    if(tmp4410)
    {
      tmp4411 = 0.0;
    }
    else
    {
      tmp4399 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
      tmp4400 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
      tmp4401 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3412]] /* load_03.u0Pu.re PARAM */);
      tmp4402 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3411]] /* load_03.u0Pu.im PARAM */);
      tmp4403 = DIVISION((tmp4399 * tmp4399) + (tmp4400 * tmp4400),(tmp4401 * tmp4401) + (tmp4402 * tmp4402),"load_03.u0Pu.re ^ 2.0 + load_03.u0Pu.im ^ 2.0");
      tmp4404 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* load_03.beta PARAM */));
      if(tmp4403 < 0.0 && tmp4404 != 0.0)
      {
        tmp4406 = modf(tmp4404, &tmp4407);
        
        if(tmp4406 > 0.5)
        {
          tmp4406 -= 1.0;
          tmp4407 += 1.0;
        }
        else if(tmp4406 < -0.5)
        {
          tmp4406 += 1.0;
          tmp4407 -= 1.0;
        }
        
        if(fabs(tmp4406) < 1e-10)
          tmp4405 = pow(tmp4403, tmp4407);
        else
        {
          tmp4409 = modf(1.0/tmp4404, &tmp4408);
          if(tmp4409 > 0.5)
          {
            tmp4409 -= 1.0;
            tmp4408 += 1.0;
          }
          else if(tmp4409 < -0.5)
          {
            tmp4409 += 1.0;
            tmp4408 -= 1.0;
          }
          if(fabs(tmp4409) < 1e-10 && ((unsigned long)tmp4408 & 1))
          {
            tmp4405 = -pow(-tmp4403, tmp4406)*pow(tmp4403, tmp4407);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4403, tmp4404);
          }
        }
      }
      else
      {
        tmp4405 = pow(tmp4403, tmp4404);
      }
      if(isnan(tmp4405) || isinf(tmp4405))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4403, tmp4404);
      }
      tmp4411 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* QrefPu_load_03.Value0 PARAM */)) * (tmp4405);
    }
    tmp4413 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2787]] /* load_03.QPu variable */) - (tmp4411);
  }
  else
  {
    tmp4413 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[809]) /* $DAEres809 DAE_RESIDUAL_VAR */ = tmp4413;
  threadData->lastEquationSolved = 17564;
}
/*
equation index: 17565
type: SIMPLE_ASSIGN
$DAEres811 = if load_03.running.value then load_03.PPu - (if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else PrefPu_load_03.Value0 * ((load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) / (load_03.u0Pu.re ^ 2.0 + load_03.u0Pu.im ^ 2.0)) ^ (0.5 * load_03.alpha)) else -trafo_3_1043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17565};
  modelica_real tmp4414;
  modelica_real tmp4415;
  modelica_real tmp4416;
  modelica_real tmp4417;
  modelica_real tmp4418;
  modelica_real tmp4419;
  modelica_real tmp4420;
  modelica_real tmp4421;
  modelica_real tmp4422;
  modelica_real tmp4423;
  modelica_real tmp4424;
  modelica_boolean tmp4425;
  modelica_real tmp4426;
  modelica_boolean tmp4427;
  modelica_real tmp4428;
  tmp4427 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */);
  if(tmp4427)
  {
    tmp4425 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
    if(tmp4425)
    {
      tmp4426 = 0.0;
    }
    else
    {
      tmp4414 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
      tmp4415 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
      tmp4416 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3412]] /* load_03.u0Pu.re PARAM */);
      tmp4417 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3411]] /* load_03.u0Pu.im PARAM */);
      tmp4418 = DIVISION((tmp4414 * tmp4414) + (tmp4415 * tmp4415),(tmp4416 * tmp4416) + (tmp4417 * tmp4417),"load_03.u0Pu.re ^ 2.0 + load_03.u0Pu.im ^ 2.0");
      tmp4419 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3405]] /* load_03.alpha PARAM */));
      if(tmp4418 < 0.0 && tmp4419 != 0.0)
      {
        tmp4421 = modf(tmp4419, &tmp4422);
        
        if(tmp4421 > 0.5)
        {
          tmp4421 -= 1.0;
          tmp4422 += 1.0;
        }
        else if(tmp4421 < -0.5)
        {
          tmp4421 += 1.0;
          tmp4422 -= 1.0;
        }
        
        if(fabs(tmp4421) < 1e-10)
          tmp4420 = pow(tmp4418, tmp4422);
        else
        {
          tmp4424 = modf(1.0/tmp4419, &tmp4423);
          if(tmp4424 > 0.5)
          {
            tmp4424 -= 1.0;
            tmp4423 += 1.0;
          }
          else if(tmp4424 < -0.5)
          {
            tmp4424 += 1.0;
            tmp4423 -= 1.0;
          }
          if(fabs(tmp4424) < 1e-10 && ((unsigned long)tmp4423 & 1))
          {
            tmp4420 = -pow(-tmp4418, tmp4421)*pow(tmp4418, tmp4422);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4418, tmp4419);
          }
        }
      }
      else
      {
        tmp4420 = pow(tmp4418, tmp4419);
      }
      if(isnan(tmp4420) || isinf(tmp4420))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4418, tmp4419);
      }
      tmp4426 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* PrefPu_load_03.Value0 PARAM */)) * (tmp4420);
    }
    tmp4428 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2786]] /* load_03.PPu variable */) - (tmp4426);
  }
  else
  {
    tmp4428 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[811]) /* $DAEres811 DAE_RESIDUAL_VAR */ = tmp4428;
  threadData->lastEquationSolved = 17565;
}
/*
equation index: 17566
type: SIMPLE_ASSIGN
load_03.UPu.value = if load_03.running.value then (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17566};
  modelica_real tmp4429;
  modelica_real tmp4430;
  modelica_real tmp4431;
  modelica_boolean tmp4432;
  modelica_real tmp4433;
  tmp4432 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */);
  if(tmp4432)
  {
    tmp4429 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
    tmp4430 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
    tmp4431 = (tmp4429 * tmp4429) + (tmp4430 * tmp4430);
    if(tmp4431 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4431, 0.5);
    }
    tmp4433 = sqrt(tmp4431);
  }
  else
  {
    tmp4433 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2788]] /* load_03.UPu.value variable */) = tmp4433;
  threadData->lastEquationSolved = 17566;
}
/*
equation index: 17567
type: SIMPLE_ASSIGN
$whenCondition307 = not pre(load_02.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17567};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[231]] /* $whenCondition307 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */));
  threadData->lastEquationSolved = 17567;
}
/*
equation index: 17568
type: WHEN

when {} then
  load_02.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17568};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[231]] /* $whenCondition307 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[231] /* $whenCondition307 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17568;
}
/*
equation index: 17570
type: SIMPLE_ASSIGN
$whenCondition309 = not load_02.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17570};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[233]] /* $whenCondition309 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */));
  threadData->lastEquationSolved = 17570;
}
/*
equation index: 17571
type: SIMPLE_ASSIGN
$whenCondition308 = load_02.running.value and not pre(load_02.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17571};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[232]] /* $whenCondition308 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17571;
}
/*
equation index: 17572
type: WHEN

when {$whenCondition309} then
  load_02.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17572};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[233]] /* $whenCondition309 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[233] /* $whenCondition309 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[93]] /* load_02.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[232]] /* $whenCondition308 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[232] /* $whenCondition308 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[93]] /* load_02.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17572;
}
/*
equation index: 17574
type: SIMPLE_ASSIGN
$DAEres863 = if load_02.running.value then load_02.PPu - (if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else PrefPu_load_02.Value0 * ((load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) / (load_02.u0Pu.re ^ 2.0 + load_02.u0Pu.im ^ 2.0)) ^ (0.5 * load_02.alpha)) else -trafo_2_1042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17574};
  modelica_real tmp4434;
  modelica_real tmp4435;
  modelica_real tmp4436;
  modelica_real tmp4437;
  modelica_real tmp4438;
  modelica_real tmp4439;
  modelica_real tmp4440;
  modelica_real tmp4441;
  modelica_real tmp4442;
  modelica_real tmp4443;
  modelica_real tmp4444;
  modelica_boolean tmp4445;
  modelica_real tmp4446;
  modelica_boolean tmp4447;
  modelica_real tmp4448;
  tmp4447 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */);
  if(tmp4447)
  {
    tmp4445 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
    if(tmp4445)
    {
      tmp4446 = 0.0;
    }
    else
    {
      tmp4434 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
      tmp4435 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
      tmp4436 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3404]] /* load_02.u0Pu.re PARAM */);
      tmp4437 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3403]] /* load_02.u0Pu.im PARAM */);
      tmp4438 = DIVISION((tmp4434 * tmp4434) + (tmp4435 * tmp4435),(tmp4436 * tmp4436) + (tmp4437 * tmp4437),"load_02.u0Pu.re ^ 2.0 + load_02.u0Pu.im ^ 2.0");
      tmp4439 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3397]] /* load_02.alpha PARAM */));
      if(tmp4438 < 0.0 && tmp4439 != 0.0)
      {
        tmp4441 = modf(tmp4439, &tmp4442);
        
        if(tmp4441 > 0.5)
        {
          tmp4441 -= 1.0;
          tmp4442 += 1.0;
        }
        else if(tmp4441 < -0.5)
        {
          tmp4441 += 1.0;
          tmp4442 -= 1.0;
        }
        
        if(fabs(tmp4441) < 1e-10)
          tmp4440 = pow(tmp4438, tmp4442);
        else
        {
          tmp4444 = modf(1.0/tmp4439, &tmp4443);
          if(tmp4444 > 0.5)
          {
            tmp4444 -= 1.0;
            tmp4443 += 1.0;
          }
          else if(tmp4444 < -0.5)
          {
            tmp4444 += 1.0;
            tmp4443 -= 1.0;
          }
          if(fabs(tmp4444) < 1e-10 && ((unsigned long)tmp4443 & 1))
          {
            tmp4440 = -pow(-tmp4438, tmp4441)*pow(tmp4438, tmp4442);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4438, tmp4439);
          }
        }
      }
      else
      {
        tmp4440 = pow(tmp4438, tmp4439);
      }
      if(isnan(tmp4440) || isinf(tmp4440))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4438, tmp4439);
      }
      tmp4446 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* PrefPu_load_02.Value0 PARAM */)) * (tmp4440);
    }
    tmp4448 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2779]] /* load_02.PPu variable */) - (tmp4446);
  }
  else
  {
    tmp4448 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[863]) /* $DAEres863 DAE_RESIDUAL_VAR */ = tmp4448;
  threadData->lastEquationSolved = 17574;
}
/*
equation index: 17575
type: SIMPLE_ASSIGN
$DAEres865 = if load_02.running.value then load_02.QPu - (if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else QrefPu_load_02.Value0 * ((load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) / (load_02.u0Pu.re ^ 2.0 + load_02.u0Pu.im ^ 2.0)) ^ (0.5 * load_02.beta)) else -trafo_2_1042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17575};
  modelica_real tmp4449;
  modelica_real tmp4450;
  modelica_real tmp4451;
  modelica_real tmp4452;
  modelica_real tmp4453;
  modelica_real tmp4454;
  modelica_real tmp4455;
  modelica_real tmp4456;
  modelica_real tmp4457;
  modelica_real tmp4458;
  modelica_real tmp4459;
  modelica_boolean tmp4460;
  modelica_real tmp4461;
  modelica_boolean tmp4462;
  modelica_real tmp4463;
  tmp4462 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */);
  if(tmp4462)
  {
    tmp4460 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
    if(tmp4460)
    {
      tmp4461 = 0.0;
    }
    else
    {
      tmp4449 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
      tmp4450 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
      tmp4451 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3404]] /* load_02.u0Pu.re PARAM */);
      tmp4452 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3403]] /* load_02.u0Pu.im PARAM */);
      tmp4453 = DIVISION((tmp4449 * tmp4449) + (tmp4450 * tmp4450),(tmp4451 * tmp4451) + (tmp4452 * tmp4452),"load_02.u0Pu.re ^ 2.0 + load_02.u0Pu.im ^ 2.0");
      tmp4454 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3398]] /* load_02.beta PARAM */));
      if(tmp4453 < 0.0 && tmp4454 != 0.0)
      {
        tmp4456 = modf(tmp4454, &tmp4457);
        
        if(tmp4456 > 0.5)
        {
          tmp4456 -= 1.0;
          tmp4457 += 1.0;
        }
        else if(tmp4456 < -0.5)
        {
          tmp4456 += 1.0;
          tmp4457 -= 1.0;
        }
        
        if(fabs(tmp4456) < 1e-10)
          tmp4455 = pow(tmp4453, tmp4457);
        else
        {
          tmp4459 = modf(1.0/tmp4454, &tmp4458);
          if(tmp4459 > 0.5)
          {
            tmp4459 -= 1.0;
            tmp4458 += 1.0;
          }
          else if(tmp4459 < -0.5)
          {
            tmp4459 += 1.0;
            tmp4458 -= 1.0;
          }
          if(fabs(tmp4459) < 1e-10 && ((unsigned long)tmp4458 & 1))
          {
            tmp4455 = -pow(-tmp4453, tmp4456)*pow(tmp4453, tmp4457);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4453, tmp4454);
          }
        }
      }
      else
      {
        tmp4455 = pow(tmp4453, tmp4454);
      }
      if(isnan(tmp4455) || isinf(tmp4455))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4453, tmp4454);
      }
      tmp4461 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* QrefPu_load_02.Value0 PARAM */)) * (tmp4455);
    }
    tmp4463 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2780]] /* load_02.QPu variable */) - (tmp4461);
  }
  else
  {
    tmp4463 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[865]) /* $DAEres865 DAE_RESIDUAL_VAR */ = tmp4463;
  threadData->lastEquationSolved = 17575;
}
/*
equation index: 17576
type: SIMPLE_ASSIGN
load_02.UPu.value = if load_02.running.value then (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17576};
  modelica_real tmp4464;
  modelica_real tmp4465;
  modelica_real tmp4466;
  modelica_boolean tmp4467;
  modelica_real tmp4468;
  tmp4467 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */);
  if(tmp4467)
  {
    tmp4464 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
    tmp4465 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
    tmp4466 = (tmp4464 * tmp4464) + (tmp4465 * tmp4465);
    if(tmp4466 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4466, 0.5);
    }
    tmp4468 = sqrt(tmp4466);
  }
  else
  {
    tmp4468 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2781]] /* load_02.UPu.value variable */) = tmp4468;
  threadData->lastEquationSolved = 17576;
}
/*
equation index: 17577
type: SIMPLE_ASSIGN
$whenCondition310 = not pre(load_01.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17577};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[235]] /* $whenCondition310 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */));
  threadData->lastEquationSolved = 17577;
}
/*
equation index: 17578
type: WHEN

when {} then
  load_01.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17578};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[235]] /* $whenCondition310 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[235] /* $whenCondition310 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17578;
}
/*
equation index: 17580
type: SIMPLE_ASSIGN
$whenCondition312 = not load_01.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17580};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[237]] /* $whenCondition312 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */));
  threadData->lastEquationSolved = 17580;
}
/*
equation index: 17581
type: SIMPLE_ASSIGN
$whenCondition311 = load_01.running.value and not pre(load_01.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17581};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[236]] /* $whenCondition311 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17581;
}
/*
equation index: 17582
type: WHEN

when {$whenCondition312} then
  load_01.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17582};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[237]] /* $whenCondition312 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[237] /* $whenCondition312 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[92]] /* load_01.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[236]] /* $whenCondition311 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[236] /* $whenCondition311 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[92]] /* load_01.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17582;
}
/*
equation index: 17584
type: SIMPLE_ASSIGN
$DAEres1188 = if load_01.running.value then load_01.QPu - (if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else QrefPu_load_01.Value0 * ((load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) / (load_01.u0Pu.re ^ 2.0 + load_01.u0Pu.im ^ 2.0)) ^ (0.5 * load_01.beta)) else -trafo_1_1041.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17584};
  modelica_real tmp4469;
  modelica_real tmp4470;
  modelica_real tmp4471;
  modelica_real tmp4472;
  modelica_real tmp4473;
  modelica_real tmp4474;
  modelica_real tmp4475;
  modelica_real tmp4476;
  modelica_real tmp4477;
  modelica_real tmp4478;
  modelica_real tmp4479;
  modelica_boolean tmp4480;
  modelica_real tmp4481;
  modelica_boolean tmp4482;
  modelica_real tmp4483;
  tmp4482 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */);
  if(tmp4482)
  {
    tmp4480 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
    if(tmp4480)
    {
      tmp4481 = 0.0;
    }
    else
    {
      tmp4469 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
      tmp4470 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
      tmp4471 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3396]] /* load_01.u0Pu.re PARAM */);
      tmp4472 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3395]] /* load_01.u0Pu.im PARAM */);
      tmp4473 = DIVISION((tmp4469 * tmp4469) + (tmp4470 * tmp4470),(tmp4471 * tmp4471) + (tmp4472 * tmp4472),"load_01.u0Pu.re ^ 2.0 + load_01.u0Pu.im ^ 2.0");
      tmp4474 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3390]] /* load_01.beta PARAM */));
      if(tmp4473 < 0.0 && tmp4474 != 0.0)
      {
        tmp4476 = modf(tmp4474, &tmp4477);
        
        if(tmp4476 > 0.5)
        {
          tmp4476 -= 1.0;
          tmp4477 += 1.0;
        }
        else if(tmp4476 < -0.5)
        {
          tmp4476 += 1.0;
          tmp4477 -= 1.0;
        }
        
        if(fabs(tmp4476) < 1e-10)
          tmp4475 = pow(tmp4473, tmp4477);
        else
        {
          tmp4479 = modf(1.0/tmp4474, &tmp4478);
          if(tmp4479 > 0.5)
          {
            tmp4479 -= 1.0;
            tmp4478 += 1.0;
          }
          else if(tmp4479 < -0.5)
          {
            tmp4479 += 1.0;
            tmp4478 -= 1.0;
          }
          if(fabs(tmp4479) < 1e-10 && ((unsigned long)tmp4478 & 1))
          {
            tmp4475 = -pow(-tmp4473, tmp4476)*pow(tmp4473, tmp4477);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4473, tmp4474);
          }
        }
      }
      else
      {
        tmp4475 = pow(tmp4473, tmp4474);
      }
      if(isnan(tmp4475) || isinf(tmp4475))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4473, tmp4474);
      }
      tmp4481 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* QrefPu_load_01.Value0 PARAM */)) * (tmp4475);
    }
    tmp4483 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2773]] /* load_01.QPu variable */) - (tmp4481);
  }
  else
  {
    tmp4483 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1188]) /* $DAEres1188 DAE_RESIDUAL_VAR */ = tmp4483;
  threadData->lastEquationSolved = 17584;
}
/*
equation index: 17585
type: SIMPLE_ASSIGN
$DAEres1189 = if load_01.running.value then load_01.PPu - (if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else PrefPu_load_01.Value0 * ((load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) / (load_01.u0Pu.re ^ 2.0 + load_01.u0Pu.im ^ 2.0)) ^ (0.5 * load_01.alpha)) else -trafo_1_1041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17585};
  modelica_real tmp4484;
  modelica_real tmp4485;
  modelica_real tmp4486;
  modelica_real tmp4487;
  modelica_real tmp4488;
  modelica_real tmp4489;
  modelica_real tmp4490;
  modelica_real tmp4491;
  modelica_real tmp4492;
  modelica_real tmp4493;
  modelica_real tmp4494;
  modelica_boolean tmp4495;
  modelica_real tmp4496;
  modelica_boolean tmp4497;
  modelica_real tmp4498;
  tmp4497 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */);
  if(tmp4497)
  {
    tmp4495 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
    if(tmp4495)
    {
      tmp4496 = 0.0;
    }
    else
    {
      tmp4484 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
      tmp4485 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
      tmp4486 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3396]] /* load_01.u0Pu.re PARAM */);
      tmp4487 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3395]] /* load_01.u0Pu.im PARAM */);
      tmp4488 = DIVISION((tmp4484 * tmp4484) + (tmp4485 * tmp4485),(tmp4486 * tmp4486) + (tmp4487 * tmp4487),"load_01.u0Pu.re ^ 2.0 + load_01.u0Pu.im ^ 2.0");
      tmp4489 = (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3389]] /* load_01.alpha PARAM */));
      if(tmp4488 < 0.0 && tmp4489 != 0.0)
      {
        tmp4491 = modf(tmp4489, &tmp4492);
        
        if(tmp4491 > 0.5)
        {
          tmp4491 -= 1.0;
          tmp4492 += 1.0;
        }
        else if(tmp4491 < -0.5)
        {
          tmp4491 += 1.0;
          tmp4492 -= 1.0;
        }
        
        if(fabs(tmp4491) < 1e-10)
          tmp4490 = pow(tmp4488, tmp4492);
        else
        {
          tmp4494 = modf(1.0/tmp4489, &tmp4493);
          if(tmp4494 > 0.5)
          {
            tmp4494 -= 1.0;
            tmp4493 += 1.0;
          }
          else if(tmp4494 < -0.5)
          {
            tmp4494 += 1.0;
            tmp4493 -= 1.0;
          }
          if(fabs(tmp4494) < 1e-10 && ((unsigned long)tmp4493 & 1))
          {
            tmp4490 = -pow(-tmp4488, tmp4491)*pow(tmp4488, tmp4492);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4488, tmp4489);
          }
        }
      }
      else
      {
        tmp4490 = pow(tmp4488, tmp4489);
      }
      if(isnan(tmp4490) || isinf(tmp4490))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4488, tmp4489);
      }
      tmp4496 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* PrefPu_load_01.Value0 PARAM */)) * (tmp4490);
    }
    tmp4498 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2772]] /* load_01.PPu variable */) - (tmp4496);
  }
  else
  {
    tmp4498 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1189]) /* $DAEres1189 DAE_RESIDUAL_VAR */ = tmp4498;
  threadData->lastEquationSolved = 17585;
}
/*
equation index: 17586
type: SIMPLE_ASSIGN
load_01.UPu.value = if load_01.running.value then (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17586};
  modelica_real tmp4499;
  modelica_real tmp4500;
  modelica_real tmp4501;
  modelica_boolean tmp4502;
  modelica_real tmp4503;
  tmp4502 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */);
  if(tmp4502)
  {
    tmp4499 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
    tmp4500 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
    tmp4501 = (tmp4499 * tmp4499) + (tmp4500 * tmp4500);
    if(tmp4501 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4501, 0.5);
    }
    tmp4503 = sqrt(tmp4501);
  }
  else
  {
    tmp4503 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2774]] /* load_01.UPu.value variable */) = tmp4503;
  threadData->lastEquationSolved = 17586;
}
/*
equation index: 17587
type: SIMPLE_ASSIGN
$whenCondition313 = not pre(line_4071_4072b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17587};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[238]] /* $whenCondition313 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17587;
}
/*
equation index: 17588
type: WHEN

when {} then
  line_4071_4072b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17588};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[238]] /* $whenCondition313 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[238] /* $whenCondition313 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17588;
}
/*
equation index: 17590
type: SIMPLE_ASSIGN
$whenCondition315 = not line_4071_4072b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17590};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[240]] /* $whenCondition315 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17590;
}
/*
equation index: 17591
type: SIMPLE_ASSIGN
$whenCondition314 = line_4071_4072b.running.value and not pre(line_4071_4072b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17591};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[239]] /* $whenCondition314 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17591;
}
/*
equation index: 17592
type: WHEN

when {$whenCondition315} then
  line_4071_4072b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17592};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[240]] /* $whenCondition315 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[240] /* $whenCondition315 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[91]] /* line_4071_4072b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[239]] /* $whenCondition314 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[239] /* $whenCondition314 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[91]] /* line_4071_4072b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17592;
}
/*
equation index: 17594
type: SIMPLE_ASSIGN
$DAEres580 = if line_4071_4072b.running.value then 0.003 * (line_4071_4072b.terminal1.i.re + 1.500432 * line_4071_4072a.terminal1.V.im - line_4071_4072b.YPu.re * line_4071_4072a.terminal1.V.re) + (-0.03) * (line_4071_4072b.terminal1.i.im + (-1.500432) * line_4071_4072a.terminal1.V.re - line_4071_4072b.YPu.re * line_4071_4072a.terminal1.V.im) - (line_4071_4072a.terminal1.V.re - line_4071_4072a.terminal2.V.re) else line_4071_4072b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17594};
  (data->simulationInfo->daeModeData->residualVars[580]) /* $DAEres580 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17594;
}
/*
equation index: 17595
type: SIMPLE_ASSIGN
$DAEres581 = if line_4071_4072b.running.value then 0.003 * (line_4071_4072b.terminal1.i.im + (-1.500432) * line_4071_4072a.terminal1.V.re - line_4071_4072b.YPu.re * line_4071_4072a.terminal1.V.im) + 0.03 * (line_4071_4072b.terminal1.i.re + 1.500432 * line_4071_4072a.terminal1.V.im - line_4071_4072b.YPu.re * line_4071_4072a.terminal1.V.re) - (line_4071_4072a.terminal1.V.im - line_4071_4072a.terminal2.V.im) else line_4071_4072b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17595};
  (data->simulationInfo->daeModeData->residualVars[581]) /* $DAEres581 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17595;
}
/*
equation index: 17596
type: SIMPLE_ASSIGN
$DAEres582 = if line_4071_4072b.running.value then 0.003 * (line_4071_4072b.terminal2.i.re + 1.500432 * line_4071_4072a.terminal2.V.im - line_4071_4072b.YPu.re * line_4071_4072a.terminal2.V.re) + (-0.03) * (line_4071_4072b.terminal2.i.im + (-1.500432) * line_4071_4072a.terminal2.V.re - line_4071_4072b.YPu.re * line_4071_4072a.terminal2.V.im) - (line_4071_4072a.terminal2.V.re - line_4071_4072a.terminal1.V.re) else line_4071_4072b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17596};
  (data->simulationInfo->daeModeData->residualVars[582]) /* $DAEres582 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17596;
}
/*
equation index: 17597
type: SIMPLE_ASSIGN
$DAEres583 = if line_4071_4072b.running.value then 0.003 * (line_4071_4072b.terminal2.i.im + (-1.500432) * line_4071_4072a.terminal2.V.re - line_4071_4072b.YPu.re * line_4071_4072a.terminal2.V.im) + 0.03 * (line_4071_4072b.terminal2.i.re + 1.500432 * line_4071_4072a.terminal2.V.im - line_4071_4072b.YPu.re * line_4071_4072a.terminal2.V.re) - (line_4071_4072a.terminal2.V.im - line_4071_4072a.terminal1.V.im) else line_4071_4072b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17597};
  (data->simulationInfo->daeModeData->residualVars[583]) /* $DAEres583 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* line_4071_4072b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17597;
}
/*
equation index: 17598
type: SIMPLE_ASSIGN
$whenCondition316 = not pre(line_4071_4072a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17598};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[241]] /* $whenCondition316 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17598;
}
/*
equation index: 17599
type: WHEN

when {} then
  line_4071_4072a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17599};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[241]] /* $whenCondition316 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[241] /* $whenCondition316 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17599;
}
/*
equation index: 17601
type: SIMPLE_ASSIGN
$whenCondition318 = not line_4071_4072a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17601};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[243]] /* $whenCondition318 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17601;
}
/*
equation index: 17602
type: SIMPLE_ASSIGN
$whenCondition317 = line_4071_4072a.running.value and not pre(line_4071_4072a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17602};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[242]] /* $whenCondition317 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17602;
}
/*
equation index: 17603
type: WHEN

when {$whenCondition318} then
  line_4071_4072a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17603};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[243]] /* $whenCondition318 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[243] /* $whenCondition318 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[90]] /* line_4071_4072a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[242]] /* $whenCondition317 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[242] /* $whenCondition317 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[90]] /* line_4071_4072a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17603;
}
/*
equation index: 17605
type: SIMPLE_ASSIGN
$DAEres545 = if line_4071_4072a.running.value then 0.003 * (line_4071_4072a.terminal1.i.im + (-1.500432) * line_4071_4072a.terminal1.V.re - line_4071_4072a.YPu.re * line_4071_4072a.terminal1.V.im) + 0.03 * (line_4071_4072a.terminal1.i.re + 1.500432 * line_4071_4072a.terminal1.V.im - line_4071_4072a.YPu.re * line_4071_4072a.terminal1.V.re) - (line_4071_4072a.terminal1.V.im - line_4071_4072a.terminal2.V.im) else line_4071_4072a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17605};
  (data->simulationInfo->daeModeData->residualVars[545]) /* $DAEres545 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17605;
}
/*
equation index: 17606
type: SIMPLE_ASSIGN
$DAEres546 = if line_4071_4072a.running.value then 0.003 * (line_4071_4072a.terminal2.i.im + (-1.500432) * line_4071_4072a.terminal2.V.re - line_4071_4072a.YPu.re * line_4071_4072a.terminal2.V.im) + 0.03 * (line_4071_4072a.terminal2.i.re + 1.500432 * line_4071_4072a.terminal2.V.im - line_4071_4072a.YPu.re * line_4071_4072a.terminal2.V.re) - (line_4071_4072a.terminal2.V.im - line_4071_4072a.terminal1.V.im) else line_4071_4072a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17606};
  (data->simulationInfo->daeModeData->residualVars[546]) /* $DAEres546 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17606;
}
/*
equation index: 17607
type: SIMPLE_ASSIGN
$DAEres547 = if line_4071_4072a.running.value then 0.003 * (line_4071_4072a.terminal1.i.re + 1.500432 * line_4071_4072a.terminal1.V.im - line_4071_4072a.YPu.re * line_4071_4072a.terminal1.V.re) + (-0.03) * (line_4071_4072a.terminal1.i.im + (-1.500432) * line_4071_4072a.terminal1.V.re - line_4071_4072a.YPu.re * line_4071_4072a.terminal1.V.im) - (line_4071_4072a.terminal1.V.re - line_4071_4072a.terminal2.V.re) else line_4071_4072a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17607};
  (data->simulationInfo->daeModeData->residualVars[547]) /* $DAEres547 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17607;
}
/*
equation index: 17608
type: SIMPLE_ASSIGN
$DAEres548 = if line_4071_4072a.running.value then 0.003 * (line_4071_4072a.terminal2.i.re + 1.500432 * line_4071_4072a.terminal2.V.im - line_4071_4072a.YPu.re * line_4071_4072a.terminal2.V.re) + (-0.03) * (line_4071_4072a.terminal2.i.im + (-1.500432) * line_4071_4072a.terminal2.V.re - line_4071_4072a.YPu.re * line_4071_4072a.terminal2.V.im) - (line_4071_4072a.terminal2.V.re - line_4071_4072a.terminal1.V.re) else line_4071_4072a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17608};
  (data->simulationInfo->daeModeData->residualVars[548]) /* $DAEres548 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */) + (1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */) + (-1.500432) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* line_4071_4072a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17608;
}
/*
equation index: 17609
type: SIMPLE_ASSIGN
$whenCondition319 = not pre(line_4062_4063b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17609};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[244]] /* $whenCondition319 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17609;
}
/*
equation index: 17610
type: WHEN

when {} then
  line_4062_4063b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17610};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[244]] /* $whenCondition319 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[244] /* $whenCondition319 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17610;
}
/*
equation index: 17612
type: SIMPLE_ASSIGN
$whenCondition321 = not line_4062_4063b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17612};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[247]] /* $whenCondition321 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17612;
}
/*
equation index: 17613
type: SIMPLE_ASSIGN
$whenCondition320 = line_4062_4063b.running.value and not pre(line_4062_4063b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17613};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[246]] /* $whenCondition320 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17613;
}
/*
equation index: 17614
type: WHEN

when {$whenCondition321} then
  line_4062_4063b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17614};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[247]] /* $whenCondition321 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[247] /* $whenCondition321 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[89]] /* line_4062_4063b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[246]] /* $whenCondition320 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[246] /* $whenCondition320 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[89]] /* line_4062_4063b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17614;
}
/*
equation index: 17616
type: SIMPLE_ASSIGN
$DAEres143 = if line_4062_4063b.running.value then 0.003 * (line_4062_4063b.terminal1.i.im + (-0.44987200000000005) * line_4062_4063b.terminal1.V.re - line_4062_4063b.YPu.re * line_4062_4063b.terminal1.V.im) + 0.03 * (line_4062_4063b.terminal1.i.re + 0.44987200000000005 * line_4062_4063b.terminal1.V.im - line_4062_4063b.YPu.re * line_4062_4063b.terminal1.V.re) - (line_4062_4063b.terminal1.V.im - line_4062_4063b.terminal2.V.im) else line_4062_4063b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17616};
  (data->simulationInfo->daeModeData->residualVars[143]) /* $DAEres143 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17616;
}
/*
equation index: 17617
type: SIMPLE_ASSIGN
$DAEres181 = if line_4062_4063b.running.value then 0.003 * (line_4062_4063b.terminal1.i.re + 0.44987200000000005 * line_4062_4063b.terminal1.V.im - line_4062_4063b.YPu.re * line_4062_4063b.terminal1.V.re) + (-0.03) * (line_4062_4063b.terminal1.i.im + (-0.44987200000000005) * line_4062_4063b.terminal1.V.re - line_4062_4063b.YPu.re * line_4062_4063b.terminal1.V.im) - (line_4062_4063b.terminal1.V.re - line_4062_4063b.terminal2.V.re) else line_4062_4063b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17617};
  (data->simulationInfo->daeModeData->residualVars[181]) /* $DAEres181 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17617;
}
/*
equation index: 17618
type: SIMPLE_ASSIGN
$DAEres182 = if line_4062_4063b.running.value then 0.003 * (line_4062_4063b.terminal2.i.re + 0.44987200000000005 * line_4062_4063b.terminal2.V.im - line_4062_4063b.YPu.re * line_4062_4063b.terminal2.V.re) + (-0.03) * (line_4062_4063b.terminal2.i.im + (-0.44987200000000005) * line_4062_4063b.terminal2.V.re - line_4062_4063b.YPu.re * line_4062_4063b.terminal2.V.im) - (line_4062_4063b.terminal2.V.re - line_4062_4063b.terminal1.V.re) else line_4062_4063b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17618};
  (data->simulationInfo->daeModeData->residualVars[182]) /* $DAEres182 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17618;
}
/*
equation index: 17619
type: SIMPLE_ASSIGN
$DAEres183 = if line_4062_4063b.running.value then 0.003 * (line_4062_4063b.terminal2.i.im + (-0.44987200000000005) * line_4062_4063b.terminal2.V.re - line_4062_4063b.YPu.re * line_4062_4063b.terminal2.V.im) + 0.03 * (line_4062_4063b.terminal2.i.re + 0.44987200000000005 * line_4062_4063b.terminal2.V.im - line_4062_4063b.YPu.re * line_4062_4063b.terminal2.V.re) - (line_4062_4063b.terminal2.V.im - line_4062_4063b.terminal1.V.im) else line_4062_4063b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17619};
  (data->simulationInfo->daeModeData->residualVars[183]) /* $DAEres183 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3370]] /* line_4062_4063b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17619;
}
/*
equation index: 17620
type: SIMPLE_ASSIGN
$whenCondition322 = not pre(line_4062_4063a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17620};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[248]] /* $whenCondition322 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17620;
}
/*
equation index: 17621
type: WHEN

when {} then
  line_4062_4063a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17621};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[248]] /* $whenCondition322 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[248] /* $whenCondition322 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17621;
}
/*
equation index: 17623
type: SIMPLE_ASSIGN
$whenCondition324 = not line_4062_4063a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17623};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[250]] /* $whenCondition324 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17623;
}
/*
equation index: 17624
type: SIMPLE_ASSIGN
$whenCondition323 = line_4062_4063a.running.value and not pre(line_4062_4063a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17624};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[249]] /* $whenCondition323 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17624;
}
/*
equation index: 17625
type: WHEN

when {$whenCondition324} then
  line_4062_4063a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17625};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[250]] /* $whenCondition324 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[250] /* $whenCondition324 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[88]] /* line_4062_4063a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[249]] /* $whenCondition323 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[249] /* $whenCondition323 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[88]] /* line_4062_4063a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17625;
}
/*
equation index: 17627
type: SIMPLE_ASSIGN
$DAEres161 = if line_4062_4063a.running.value then 0.003 * (line_4062_4063a.terminal1.i.im + (-0.44987200000000005) * line_4062_4063b.terminal1.V.re - line_4062_4063a.YPu.re * line_4062_4063b.terminal1.V.im) + 0.03 * (line_4062_4063a.terminal1.i.re + 0.44987200000000005 * line_4062_4063b.terminal1.V.im - line_4062_4063a.YPu.re * line_4062_4063b.terminal1.V.re) - (line_4062_4063b.terminal1.V.im - line_4062_4063b.terminal2.V.im) else line_4062_4063a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17627};
  (data->simulationInfo->daeModeData->residualVars[161]) /* $DAEres161 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17627;
}
/*
equation index: 17628
type: SIMPLE_ASSIGN
$DAEres162 = if line_4062_4063a.running.value then 0.003 * (line_4062_4063a.terminal1.i.re + 0.44987200000000005 * line_4062_4063b.terminal1.V.im - line_4062_4063a.YPu.re * line_4062_4063b.terminal1.V.re) + (-0.03) * (line_4062_4063a.terminal1.i.im + (-0.44987200000000005) * line_4062_4063b.terminal1.V.re - line_4062_4063a.YPu.re * line_4062_4063b.terminal1.V.im) - (line_4062_4063b.terminal1.V.re - line_4062_4063b.terminal2.V.re) else line_4062_4063a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17628};
  (data->simulationInfo->daeModeData->residualVars[162]) /* $DAEres162 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17628;
}
/*
equation index: 17629
type: SIMPLE_ASSIGN
$DAEres163 = if line_4062_4063a.running.value then 0.003 * (line_4062_4063a.terminal2.i.im + (-0.44987200000000005) * line_4062_4063b.terminal2.V.re - line_4062_4063a.YPu.re * line_4062_4063b.terminal2.V.im) + 0.03 * (line_4062_4063a.terminal2.i.re + 0.44987200000000005 * line_4062_4063b.terminal2.V.im - line_4062_4063a.YPu.re * line_4062_4063b.terminal2.V.re) - (line_4062_4063b.terminal2.V.im - line_4062_4063b.terminal1.V.im) else line_4062_4063a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17629};
  (data->simulationInfo->daeModeData->residualVars[163]) /* $DAEres163 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17629;
}
/*
equation index: 17630
type: SIMPLE_ASSIGN
$DAEres164 = if line_4062_4063a.running.value then 0.003 * (line_4062_4063a.terminal2.i.re + 0.44987200000000005 * line_4062_4063b.terminal2.V.im - line_4062_4063a.YPu.re * line_4062_4063b.terminal2.V.re) + (-0.03) * (line_4062_4063a.terminal2.i.im + (-0.44987200000000005) * line_4062_4063b.terminal2.V.re - line_4062_4063a.YPu.re * line_4062_4063b.terminal2.V.im) - (line_4062_4063b.terminal2.V.re - line_4062_4063b.terminal1.V.re) else line_4062_4063a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17630};
  (data->simulationInfo->daeModeData->residualVars[164]) /* $DAEres164 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* line_4062_4063a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17630;
}
/*
equation index: 17631
type: SIMPLE_ASSIGN
$whenCondition325 = not pre(line_4061_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17631};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[251]] /* $whenCondition325 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17631;
}
/*
equation index: 17632
type: WHEN

when {} then
  line_4061_4062.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17632};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[251]] /* $whenCondition325 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[251] /* $whenCondition325 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17632;
}
/*
equation index: 17634
type: SIMPLE_ASSIGN
$whenCondition327 = not line_4061_4062.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17634};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[253]] /* $whenCondition327 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17634;
}
/*
equation index: 17635
type: SIMPLE_ASSIGN
$whenCondition326 = line_4061_4062.running.value and not pre(line_4061_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17635};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[252]] /* $whenCondition326 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17635;
}
/*
equation index: 17636
type: WHEN

when {$whenCondition327} then
  line_4061_4062.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17636};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[253]] /* $whenCondition327 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[253] /* $whenCondition327 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[87]] /* line_4061_4062.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[252]] /* $whenCondition326 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[252] /* $whenCondition326 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[87]] /* line_4061_4062.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17636;
}
/*
equation index: 17638
type: SIMPLE_ASSIGN
$DAEres214 = if line_4061_4062.running.value then 0.002 * (line_4061_4062.terminal1.i.im + (-0.299088) * line_4061_4062.terminal1.V.re - line_4061_4062.YPu.re * line_4061_4062.terminal1.V.im) + 0.02 * (line_4061_4062.terminal1.i.re + 0.299088 * line_4061_4062.terminal1.V.im - line_4061_4062.YPu.re * line_4061_4062.terminal1.V.re) - (line_4061_4062.terminal1.V.im - line_4062_4063b.terminal1.V.im) else line_4061_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17638};
  (data->simulationInfo->daeModeData->residualVars[214]) /* $DAEres214 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17638;
}
/*
equation index: 17639
type: SIMPLE_ASSIGN
$DAEres215 = if line_4061_4062.running.value then 0.002 * (line_4061_4062.terminal1.i.re + 0.299088 * line_4061_4062.terminal1.V.im - line_4061_4062.YPu.re * line_4061_4062.terminal1.V.re) + (-0.02) * (line_4061_4062.terminal1.i.im + (-0.299088) * line_4061_4062.terminal1.V.re - line_4061_4062.YPu.re * line_4061_4062.terminal1.V.im) - (line_4061_4062.terminal1.V.re - line_4062_4063b.terminal1.V.re) else line_4061_4062.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17639};
  (data->simulationInfo->daeModeData->residualVars[215]) /* $DAEres215 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17639;
}
/*
equation index: 17640
type: SIMPLE_ASSIGN
$DAEres1162 = if line_4061_4062.running.value then 0.002 * (line_4061_4062.terminal2.i.im + (-0.299088) * line_4062_4063b.terminal1.V.re - line_4061_4062.YPu.re * line_4062_4063b.terminal1.V.im) + 0.02 * (line_4061_4062.terminal2.i.re + 0.299088 * line_4062_4063b.terminal1.V.im - line_4061_4062.YPu.re * line_4062_4063b.terminal1.V.re) - (line_4062_4063b.terminal1.V.im - line_4061_4062.terminal1.V.im) else line_4061_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17640};
  (data->simulationInfo->daeModeData->residualVars[1162]) /* $DAEres1162 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17640;
}
/*
equation index: 17641
type: SIMPLE_ASSIGN
$DAEres1163 = if line_4061_4062.running.value then 0.002 * (line_4061_4062.terminal2.i.re + 0.299088 * line_4062_4063b.terminal1.V.im - line_4061_4062.YPu.re * line_4062_4063b.terminal1.V.re) + (-0.02) * (line_4061_4062.terminal2.i.im + (-0.299088) * line_4062_4063b.terminal1.V.re - line_4061_4062.YPu.re * line_4062_4063b.terminal1.V.im) - (line_4062_4063b.terminal1.V.re - line_4061_4062.terminal1.V.re) else line_4061_4062.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17641};
  (data->simulationInfo->daeModeData->residualVars[1163]) /* $DAEres1163 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3354]] /* line_4061_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17641;
}
/*
equation index: 17642
type: SIMPLE_ASSIGN
$whenCondition328 = not pre(line_4046_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17642};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[254]] /* $whenCondition328 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17642;
}
/*
equation index: 17643
type: WHEN

when {} then
  line_4046_4047.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17643};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[254]] /* $whenCondition328 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[254] /* $whenCondition328 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17643;
}
/*
equation index: 17645
type: SIMPLE_ASSIGN
$whenCondition330 = not line_4046_4047.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17645};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[257]] /* $whenCondition330 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17645;
}
/*
equation index: 17646
type: SIMPLE_ASSIGN
$whenCondition329 = line_4046_4047.running.value and not pre(line_4046_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17646};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[255]] /* $whenCondition329 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17646;
}
/*
equation index: 17647
type: WHEN

when {$whenCondition330} then
  line_4046_4047.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17647};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[257]] /* $whenCondition330 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[257] /* $whenCondition330 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[86]] /* line_4046_4047.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[255]] /* $whenCondition329 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[255] /* $whenCondition329 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[86]] /* line_4046_4047.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17647;
}
/*
equation index: 17649
type: SIMPLE_ASSIGN
$DAEres734 = if line_4046_4047.running.value then 0.001 * (line_4046_4047.terminal1.i.im + (-0.248816) * line_4046_4047.terminal1.V.re - line_4046_4047.YPu.re * line_4046_4047.terminal1.V.im) + 0.015 * (line_4046_4047.terminal1.i.re + 0.248816 * line_4046_4047.terminal1.V.im - line_4046_4047.YPu.re * line_4046_4047.terminal1.V.re) - (line_4046_4047.terminal1.V.im - line_4046_4047.terminal2.V.im) else line_4046_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17649};
  (data->simulationInfo->daeModeData->residualVars[734]) /* $DAEres734 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)))) + (0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17649;
}
/*
equation index: 17650
type: SIMPLE_ASSIGN
$DAEres735 = if line_4046_4047.running.value then 0.001 * (line_4046_4047.terminal2.i.im + (-0.248816) * line_4046_4047.terminal2.V.re - line_4046_4047.YPu.re * line_4046_4047.terminal2.V.im) + 0.015 * (line_4046_4047.terminal2.i.re + 0.248816 * line_4046_4047.terminal2.V.im - line_4046_4047.YPu.re * line_4046_4047.terminal2.V.re) - (line_4046_4047.terminal2.V.im - line_4046_4047.terminal1.V.im) else line_4046_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17650};
  (data->simulationInfo->daeModeData->residualVars[735]) /* $DAEres735 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)))) + (0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17650;
}
/*
equation index: 17651
type: SIMPLE_ASSIGN
$DAEres736 = if line_4046_4047.running.value then 0.001 * (line_4046_4047.terminal1.i.re + 0.248816 * line_4046_4047.terminal1.V.im - line_4046_4047.YPu.re * line_4046_4047.terminal1.V.re) + (-0.015) * (line_4046_4047.terminal1.i.im + (-0.248816) * line_4046_4047.terminal1.V.re - line_4046_4047.YPu.re * line_4046_4047.terminal1.V.im) - (line_4046_4047.terminal1.V.re - line_4046_4047.terminal2.V.re) else line_4046_4047.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17651};
  (data->simulationInfo->daeModeData->residualVars[736]) /* $DAEres736 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)))) + (-0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17651;
}
/*
equation index: 17652
type: SIMPLE_ASSIGN
$DAEres737 = if line_4046_4047.running.value then 0.001 * (line_4046_4047.terminal2.i.re + 0.248816 * line_4046_4047.terminal2.V.im - line_4046_4047.YPu.re * line_4046_4047.terminal2.V.re) + (-0.015) * (line_4046_4047.terminal2.i.im + (-0.248816) * line_4046_4047.terminal2.V.re - line_4046_4047.YPu.re * line_4046_4047.terminal2.V.im) - (line_4046_4047.terminal2.V.re - line_4046_4047.terminal1.V.re) else line_4046_4047.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17652};
  (data->simulationInfo->daeModeData->residualVars[737]) /* $DAEres737 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)))) + (-0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3346]] /* line_4046_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17652;
}
/*
equation index: 17653
type: SIMPLE_ASSIGN
$whenCondition331 = not pre(line_4045_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17653};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[258]] /* $whenCondition331 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17653;
}
/*
equation index: 17654
type: WHEN

when {} then
  line_4045_4062.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17654};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[258]] /* $whenCondition331 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[258] /* $whenCondition331 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17654;
}
/*
equation index: 17656
type: SIMPLE_ASSIGN
$whenCondition333 = not line_4045_4062.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17656};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[260]] /* $whenCondition333 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17656;
}
/*
equation index: 17657
type: SIMPLE_ASSIGN
$whenCondition332 = line_4045_4062.running.value and not pre(line_4045_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17657};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[259]] /* $whenCondition332 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17657;
}
/*
equation index: 17658
type: WHEN

when {$whenCondition333} then
  line_4045_4062.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17658};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[260]] /* $whenCondition333 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[260] /* $whenCondition333 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[85]] /* line_4045_4062.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[259]] /* $whenCondition332 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[259] /* $whenCondition332 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[85]] /* line_4045_4062.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17658;
}
/*
equation index: 17660
type: SIMPLE_ASSIGN
$DAEres1170 = if line_4045_4062.running.value then 0.011000000000000001 * (line_4045_4062.terminal1.i.re + 1.1988320000000001 * line_4045_4051b.terminal1.V.im - line_4045_4062.YPu.re * line_4045_4051b.terminal1.V.re) + (-0.08) * (line_4045_4062.terminal1.i.im + (-1.1988320000000001) * line_4045_4051b.terminal1.V.re - line_4045_4062.YPu.re * line_4045_4051b.terminal1.V.im) - (line_4045_4051b.terminal1.V.re - line_4062_4063b.terminal1.V.re) else line_4045_4062.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17660};
  (data->simulationInfo->daeModeData->residualVars[1170]) /* $DAEres1170 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */)?(0.011000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17660;
}
/*
equation index: 17661
type: SIMPLE_ASSIGN
$DAEres1171 = if line_4045_4062.running.value then 0.011000000000000001 * (line_4045_4062.terminal1.i.im + (-1.1988320000000001) * line_4045_4051b.terminal1.V.re - line_4045_4062.YPu.re * line_4045_4051b.terminal1.V.im) + 0.08 * (line_4045_4062.terminal1.i.re + 1.1988320000000001 * line_4045_4051b.terminal1.V.im - line_4045_4062.YPu.re * line_4045_4051b.terminal1.V.re) - (line_4045_4051b.terminal1.V.im - line_4062_4063b.terminal1.V.im) else line_4045_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17661};
  (data->simulationInfo->daeModeData->residualVars[1171]) /* $DAEres1171 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */)?(0.011000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17661;
}
/*
equation index: 17662
type: SIMPLE_ASSIGN
$DAEres1172 = if line_4045_4062.running.value then 0.011000000000000001 * (line_4045_4062.terminal2.i.im + (-1.1988320000000001) * line_4062_4063b.terminal1.V.re - line_4045_4062.YPu.re * line_4062_4063b.terminal1.V.im) + 0.08 * (line_4045_4062.terminal2.i.re + 1.1988320000000001 * line_4062_4063b.terminal1.V.im - line_4045_4062.YPu.re * line_4062_4063b.terminal1.V.re) - (line_4062_4063b.terminal1.V.im - line_4045_4051b.terminal1.V.im) else line_4045_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17662};
  (data->simulationInfo->daeModeData->residualVars[1172]) /* $DAEres1172 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */)?(0.011000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) + (0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17662;
}
/*
equation index: 17663
type: SIMPLE_ASSIGN
$DAEres1173 = if line_4045_4062.running.value then 0.011000000000000001 * (line_4045_4062.terminal2.i.re + 1.1988320000000001 * line_4062_4063b.terminal1.V.im - line_4045_4062.YPu.re * line_4062_4063b.terminal1.V.re) + (-0.08) * (line_4045_4062.terminal2.i.im + (-1.1988320000000001) * line_4062_4063b.terminal1.V.re - line_4045_4062.YPu.re * line_4062_4063b.terminal1.V.im) - (line_4062_4063b.terminal1.V.re - line_4045_4051b.terminal1.V.re) else line_4045_4062.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17663};
  (data->simulationInfo->daeModeData->residualVars[1173]) /* $DAEres1173 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */)?(0.011000000000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)))) + (-0.08) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* line_4045_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17663;
}
/*
equation index: 17664
type: SIMPLE_ASSIGN
$whenCondition334 = not pre(line_4045_4051b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17664};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[261]] /* $whenCondition334 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17664;
}
/*
equation index: 17665
type: WHEN

when {} then
  line_4045_4051b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17665};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[261]] /* $whenCondition334 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[261] /* $whenCondition334 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17665;
}
/*
equation index: 17667
type: SIMPLE_ASSIGN
$whenCondition336 = not line_4045_4051b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17667};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[263]] /* $whenCondition336 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17667;
}
/*
equation index: 17668
type: SIMPLE_ASSIGN
$whenCondition335 = line_4045_4051b.running.value and not pre(line_4045_4051b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17668};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[262]] /* $whenCondition335 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17668;
}
/*
equation index: 17669
type: WHEN

when {$whenCondition336} then
  line_4045_4051b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17669};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[263]] /* $whenCondition336 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[263] /* $whenCondition336 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[84]] /* line_4045_4051b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[262]] /* $whenCondition335 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[262] /* $whenCondition335 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[84]] /* line_4045_4051b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17669;
}
/*
equation index: 17671
type: SIMPLE_ASSIGN
$DAEres925 = if line_4045_4051b.running.value then 0.004 * (line_4045_4051b.terminal1.i.im + (-0.600672) * line_4045_4051b.terminal1.V.re - line_4045_4051b.YPu.re * line_4045_4051b.terminal1.V.im) + 0.04 * (line_4045_4051b.terminal1.i.re + 0.600672 * line_4045_4051b.terminal1.V.im - line_4045_4051b.YPu.re * line_4045_4051b.terminal1.V.re) - (line_4045_4051b.terminal1.V.im - line_4045_4051b.terminal2.V.im) else line_4045_4051b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17671};
  (data->simulationInfo->daeModeData->residualVars[925]) /* $DAEres925 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17671;
}
/*
equation index: 17672
type: SIMPLE_ASSIGN
$DAEres967 = if line_4045_4051b.running.value then 0.004 * (line_4045_4051b.terminal1.i.re + 0.600672 * line_4045_4051b.terminal1.V.im - line_4045_4051b.YPu.re * line_4045_4051b.terminal1.V.re) + (-0.04) * (line_4045_4051b.terminal1.i.im + (-0.600672) * line_4045_4051b.terminal1.V.re - line_4045_4051b.YPu.re * line_4045_4051b.terminal1.V.im) - (line_4045_4051b.terminal1.V.re - line_4045_4051b.terminal2.V.re) else line_4045_4051b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17672};
  (data->simulationInfo->daeModeData->residualVars[967]) /* $DAEres967 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17672;
}
/*
equation index: 17673
type: SIMPLE_ASSIGN
$DAEres968 = if line_4045_4051b.running.value then 0.004 * (line_4045_4051b.terminal2.i.re + 0.600672 * line_4045_4051b.terminal2.V.im - line_4045_4051b.YPu.re * line_4045_4051b.terminal2.V.re) + (-0.04) * (line_4045_4051b.terminal2.i.im + (-0.600672) * line_4045_4051b.terminal2.V.re - line_4045_4051b.YPu.re * line_4045_4051b.terminal2.V.im) - (line_4045_4051b.terminal2.V.re - line_4045_4051b.terminal1.V.re) else line_4045_4051b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17673};
  (data->simulationInfo->daeModeData->residualVars[968]) /* $DAEres968 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17673;
}
/*
equation index: 17674
type: SIMPLE_ASSIGN
$DAEres969 = if line_4045_4051b.running.value then 0.004 * (line_4045_4051b.terminal2.i.im + (-0.600672) * line_4045_4051b.terminal2.V.re - line_4045_4051b.YPu.re * line_4045_4051b.terminal2.V.im) + 0.04 * (line_4045_4051b.terminal2.i.re + 0.600672 * line_4045_4051b.terminal2.V.im - line_4045_4051b.YPu.re * line_4045_4051b.terminal2.V.re) - (line_4045_4051b.terminal2.V.im - line_4045_4051b.terminal1.V.im) else line_4045_4051b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17674};
  (data->simulationInfo->daeModeData->residualVars[969]) /* $DAEres969 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* line_4045_4051b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17674;
}
/*
equation index: 17675
type: SIMPLE_ASSIGN
$whenCondition337 = not pre(line_4045_4051a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17675};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[264]] /* $whenCondition337 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17675;
}
/*
equation index: 17676
type: WHEN

when {} then
  line_4045_4051a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17676};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[264]] /* $whenCondition337 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[264] /* $whenCondition337 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17676;
}
/*
equation index: 17678
type: SIMPLE_ASSIGN
$whenCondition339 = not line_4045_4051a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17678};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[266]] /* $whenCondition339 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17678;
}
/*
equation index: 17679
type: SIMPLE_ASSIGN
$whenCondition338 = line_4045_4051a.running.value and not pre(line_4045_4051a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17679};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[265]] /* $whenCondition338 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17679;
}
/*
equation index: 17680
type: WHEN

when {$whenCondition339} then
  line_4045_4051a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17680};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[266]] /* $whenCondition339 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[266] /* $whenCondition339 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[83]] /* line_4045_4051a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[265]] /* $whenCondition338 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[265] /* $whenCondition338 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[83]] /* line_4045_4051a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17680;
}
/*
equation index: 17682
type: SIMPLE_ASSIGN
$DAEres926 = if line_4045_4051a.running.value then 0.004 * (line_4045_4051a.terminal1.i.im + (-0.600672) * line_4045_4051b.terminal1.V.re - line_4045_4051a.YPu.re * line_4045_4051b.terminal1.V.im) + 0.04 * (line_4045_4051a.terminal1.i.re + 0.600672 * line_4045_4051b.terminal1.V.im - line_4045_4051a.YPu.re * line_4045_4051b.terminal1.V.re) - (line_4045_4051b.terminal1.V.im - line_4045_4051b.terminal2.V.im) else line_4045_4051a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17682};
  (data->simulationInfo->daeModeData->residualVars[926]) /* $DAEres926 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17682;
}
/*
equation index: 17683
type: SIMPLE_ASSIGN
$DAEres927 = if line_4045_4051a.running.value then 0.004 * (line_4045_4051a.terminal2.i.im + (-0.600672) * line_4045_4051b.terminal2.V.re - line_4045_4051a.YPu.re * line_4045_4051b.terminal2.V.im) + 0.04 * (line_4045_4051a.terminal2.i.re + 0.600672 * line_4045_4051b.terminal2.V.im - line_4045_4051a.YPu.re * line_4045_4051b.terminal2.V.re) - (line_4045_4051b.terminal2.V.im - line_4045_4051b.terminal1.V.im) else line_4045_4051a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17683};
  (data->simulationInfo->daeModeData->residualVars[927]) /* $DAEres927 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17683;
}
/*
equation index: 17684
type: SIMPLE_ASSIGN
$DAEres928 = if line_4045_4051a.running.value then 0.004 * (line_4045_4051a.terminal1.i.re + 0.600672 * line_4045_4051b.terminal1.V.im - line_4045_4051a.YPu.re * line_4045_4051b.terminal1.V.re) + (-0.04) * (line_4045_4051a.terminal1.i.im + (-0.600672) * line_4045_4051b.terminal1.V.re - line_4045_4051a.YPu.re * line_4045_4051b.terminal1.V.im) - (line_4045_4051b.terminal1.V.re - line_4045_4051b.terminal2.V.re) else line_4045_4051a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17684};
  (data->simulationInfo->daeModeData->residualVars[928]) /* $DAEres928 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17684;
}
/*
equation index: 17685
type: SIMPLE_ASSIGN
$DAEres929 = if line_4045_4051a.running.value then 0.004 * (line_4045_4051a.terminal2.i.re + 0.600672 * line_4045_4051b.terminal2.V.im - line_4045_4051a.YPu.re * line_4045_4051b.terminal2.V.re) + (-0.04) * (line_4045_4051a.terminal2.i.im + (-0.600672) * line_4045_4051b.terminal2.V.re - line_4045_4051a.YPu.re * line_4045_4051b.terminal2.V.im) - (line_4045_4051b.terminal2.V.re - line_4045_4051b.terminal1.V.re) else line_4045_4051a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17685};
  (data->simulationInfo->daeModeData->residualVars[929]) /* $DAEres929 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */)?(0.004) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */) + (0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */) + (-0.600672) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3322]] /* line_4045_4051a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17685;
}
/*
equation index: 17686
type: SIMPLE_ASSIGN
$whenCondition340 = not pre(line_4044_4045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17686};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[268]] /* $whenCondition340 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17686;
}
/*
equation index: 17687
type: WHEN

when {} then
  line_4044_4045b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17687};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[268]] /* $whenCondition340 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[268] /* $whenCondition340 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17687;
}
/*
equation index: 17689
type: SIMPLE_ASSIGN
$whenCondition342 = not line_4044_4045b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17689};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[270]] /* $whenCondition342 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17689;
}
/*
equation index: 17690
type: SIMPLE_ASSIGN
$whenCondition341 = line_4044_4045b.running.value and not pre(line_4044_4045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17690};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[269]] /* $whenCondition341 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17690;
}
/*
equation index: 17691
type: WHEN

when {$whenCondition342} then
  line_4044_4045b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17691};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[270]] /* $whenCondition342 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[270] /* $whenCondition342 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[82]] /* line_4044_4045b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[269]] /* $whenCondition341 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[269] /* $whenCondition341 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[82]] /* line_4044_4045b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17691;
}
/*
equation index: 17693
type: SIMPLE_ASSIGN
$DAEres917 = if line_4044_4045b.running.value then 0.002 * (line_4044_4045b.terminal1.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4044_4045b.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.02) * (line_4044_4045b.terminal1.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4044_4045b.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4045_4051b.terminal1.V.re) else line_4044_4045b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17693};
  (data->simulationInfo->daeModeData->residualVars[917]) /* $DAEres917 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17693;
}
/*
equation index: 17694
type: SIMPLE_ASSIGN
$DAEres918 = if line_4044_4045b.running.value then 0.002 * (line_4044_4045b.terminal1.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4044_4045b.YPu.re * line_4044_4045a.terminal1.V.im) + 0.02 * (line_4044_4045b.terminal1.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4044_4045b.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4045_4051b.terminal1.V.im) else line_4044_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17694};
  (data->simulationInfo->daeModeData->residualVars[918]) /* $DAEres918 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17694;
}
/*
equation index: 17695
type: SIMPLE_ASSIGN
$DAEres919 = if line_4044_4045b.running.value then 0.002 * (line_4044_4045b.terminal2.i.im + (-0.299088) * line_4045_4051b.terminal1.V.re - line_4044_4045b.YPu.re * line_4045_4051b.terminal1.V.im) + 0.02 * (line_4044_4045b.terminal2.i.re + 0.299088 * line_4045_4051b.terminal1.V.im - line_4044_4045b.YPu.re * line_4045_4051b.terminal1.V.re) - (line_4045_4051b.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4044_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17695};
  (data->simulationInfo->daeModeData->residualVars[919]) /* $DAEres919 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17695;
}
/*
equation index: 17696
type: SIMPLE_ASSIGN
$DAEres920 = if line_4044_4045b.running.value then 0.002 * (line_4044_4045b.terminal2.i.re + 0.299088 * line_4045_4051b.terminal1.V.im - line_4044_4045b.YPu.re * line_4045_4051b.terminal1.V.re) + (-0.02) * (line_4044_4045b.terminal2.i.im + (-0.299088) * line_4045_4051b.terminal1.V.re - line_4044_4045b.YPu.re * line_4045_4051b.terminal1.V.im) - (line_4045_4051b.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4044_4045b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17696};
  (data->simulationInfo->daeModeData->residualVars[920]) /* $DAEres920 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3314]] /* line_4044_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17696;
}
/*
equation index: 17697
type: SIMPLE_ASSIGN
$whenCondition343 = not pre(line_4044_4045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17697};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[271]] /* $whenCondition343 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17697;
}
/*
equation index: 17698
type: WHEN

when {} then
  line_4044_4045a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17698};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[271]] /* $whenCondition343 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[271] /* $whenCondition343 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17698;
}
/*
equation index: 17700
type: SIMPLE_ASSIGN
$whenCondition345 = not line_4044_4045a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17700};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[273]] /* $whenCondition345 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17700;
}
/*
equation index: 17701
type: SIMPLE_ASSIGN
$whenCondition344 = line_4044_4045a.running.value and not pre(line_4044_4045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17701};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[272]] /* $whenCondition344 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17701;
}
/*
equation index: 17702
type: WHEN

when {$whenCondition345} then
  line_4044_4045a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17702};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[273]] /* $whenCondition345 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[273] /* $whenCondition345 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[81]] /* line_4044_4045a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[272]] /* $whenCondition344 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[272] /* $whenCondition344 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[81]] /* line_4044_4045a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17702;
}
/*
equation index: 17704
type: SIMPLE_ASSIGN
$DAEres914 = if line_4044_4045a.running.value then 0.002 * (line_4044_4045a.terminal1.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4044_4045a.YPu.re * line_4044_4045a.terminal1.V.im) + 0.02 * (line_4044_4045a.terminal1.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4044_4045a.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4045_4051b.terminal1.V.im) else line_4044_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17704};
  (data->simulationInfo->daeModeData->residualVars[914]) /* $DAEres914 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17704;
}
/*
equation index: 17705
type: SIMPLE_ASSIGN
$DAEres915 = if line_4044_4045a.running.value then 0.002 * (line_4044_4045a.terminal1.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4044_4045a.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.02) * (line_4044_4045a.terminal1.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4044_4045a.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4045_4051b.terminal1.V.re) else line_4044_4045a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17705};
  (data->simulationInfo->daeModeData->residualVars[915]) /* $DAEres915 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17705;
}
/*
equation index: 17706
type: SIMPLE_ASSIGN
$DAEres916 = if line_4044_4045a.running.value then 0.002 * (line_4044_4045a.terminal2.i.im + (-0.299088) * line_4045_4051b.terminal1.V.re - line_4044_4045a.YPu.re * line_4045_4051b.terminal1.V.im) + 0.02 * (line_4044_4045a.terminal2.i.re + 0.299088 * line_4045_4051b.terminal1.V.im - line_4044_4045a.YPu.re * line_4045_4051b.terminal1.V.re) - (line_4045_4051b.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4044_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17706};
  (data->simulationInfo->daeModeData->residualVars[916]) /* $DAEres916 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17706;
}
/*
equation index: 17707
type: SIMPLE_ASSIGN
$DAEres971 = if line_4044_4045a.running.value then 0.002 * (line_4044_4045a.terminal2.i.re + 0.299088 * line_4045_4051b.terminal1.V.im - line_4044_4045a.YPu.re * line_4045_4051b.terminal1.V.re) + (-0.02) * (line_4044_4045a.terminal2.i.im + (-0.299088) * line_4045_4051b.terminal1.V.re - line_4044_4045a.YPu.re * line_4045_4051b.terminal1.V.im) - (line_4045_4051b.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4044_4045a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17707};
  (data->simulationInfo->daeModeData->residualVars[971]) /* $DAEres971 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* line_4044_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17707;
}
/*
equation index: 17708
type: SIMPLE_ASSIGN
$whenCondition346 = not pre(line_4043_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17708};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[274]] /* $whenCondition346 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17708;
}
/*
equation index: 17709
type: WHEN

when {} then
  line_4043_4047.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17709};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[274]] /* $whenCondition346 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[274] /* $whenCondition346 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17709;
}
/*
equation index: 17711
type: SIMPLE_ASSIGN
$whenCondition348 = not line_4043_4047.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17711};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[276]] /* $whenCondition348 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17711;
}
/*
equation index: 17712
type: SIMPLE_ASSIGN
$whenCondition347 = line_4043_4047.running.value and not pre(line_4043_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17712};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[275]] /* $whenCondition347 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17712;
}
/*
equation index: 17713
type: WHEN

when {$whenCondition348} then
  line_4043_4047.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17713};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[276]] /* $whenCondition348 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[276] /* $whenCondition348 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[80]] /* line_4043_4047.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[275]] /* $whenCondition347 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[275] /* $whenCondition347 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[80]] /* line_4043_4047.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17713;
}
/*
equation index: 17715
type: SIMPLE_ASSIGN
$DAEres714 = if line_4043_4047.running.value then 0.002 * (line_4043_4047.terminal1.i.im + (-0.299088) * line_4043_4046.terminal1.V.re - line_4043_4047.YPu.re * line_4043_4046.terminal1.V.im) + 0.02 * (line_4043_4047.terminal1.i.re + 0.299088 * line_4043_4046.terminal1.V.im - line_4043_4047.YPu.re * line_4043_4046.terminal1.V.re) - (line_4043_4046.terminal1.V.im - line_4046_4047.terminal2.V.im) else line_4043_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17715};
  (data->simulationInfo->daeModeData->residualVars[714]) /* $DAEres714 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17715;
}
/*
equation index: 17716
type: SIMPLE_ASSIGN
$DAEres770 = if line_4043_4047.running.value then 0.002 * (line_4043_4047.terminal2.i.re + 0.299088 * line_4046_4047.terminal2.V.im - line_4043_4047.YPu.re * line_4046_4047.terminal2.V.re) + (-0.02) * (line_4043_4047.terminal2.i.im + (-0.299088) * line_4046_4047.terminal2.V.re - line_4043_4047.YPu.re * line_4046_4047.terminal2.V.im) - (line_4046_4047.terminal2.V.re - line_4043_4046.terminal1.V.re) else line_4043_4047.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17716};
  (data->simulationInfo->daeModeData->residualVars[770]) /* $DAEres770 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17716;
}
/*
equation index: 17717
type: SIMPLE_ASSIGN
$DAEres771 = if line_4043_4047.running.value then 0.002 * (line_4043_4047.terminal1.i.re + 0.299088 * line_4043_4046.terminal1.V.im - line_4043_4047.YPu.re * line_4043_4046.terminal1.V.re) + (-0.02) * (line_4043_4047.terminal1.i.im + (-0.299088) * line_4043_4046.terminal1.V.re - line_4043_4047.YPu.re * line_4043_4046.terminal1.V.im) - (line_4043_4046.terminal1.V.re - line_4046_4047.terminal2.V.re) else line_4043_4047.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17717};
  (data->simulationInfo->daeModeData->residualVars[771]) /* $DAEres771 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17717;
}
/*
equation index: 17718
type: SIMPLE_ASSIGN
$DAEres772 = if line_4043_4047.running.value then 0.002 * (line_4043_4047.terminal2.i.im + (-0.299088) * line_4046_4047.terminal2.V.re - line_4043_4047.YPu.re * line_4046_4047.terminal2.V.im) + 0.02 * (line_4043_4047.terminal2.i.re + 0.299088 * line_4046_4047.terminal2.V.im - line_4043_4047.YPu.re * line_4046_4047.terminal2.V.re) - (line_4046_4047.terminal2.V.im - line_4043_4046.terminal1.V.im) else line_4043_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17718};
  (data->simulationInfo->daeModeData->residualVars[772]) /* $DAEres772 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3298]] /* line_4043_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17718;
}
/*
equation index: 17719
type: SIMPLE_ASSIGN
$whenCondition349 = not pre(line_4043_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17719};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[277]] /* $whenCondition349 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17719;
}
/*
equation index: 17720
type: WHEN

when {} then
  line_4043_4046.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17720};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[277]] /* $whenCondition349 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[277] /* $whenCondition349 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17720;
}
/*
equation index: 17722
type: SIMPLE_ASSIGN
$whenCondition351 = not line_4043_4046.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17722};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[280]] /* $whenCondition351 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17722;
}
/*
equation index: 17723
type: SIMPLE_ASSIGN
$whenCondition350 = line_4043_4046.running.value and not pre(line_4043_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17723};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[279]] /* $whenCondition350 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17723;
}
/*
equation index: 17724
type: WHEN

when {$whenCondition351} then
  line_4043_4046.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17724};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[280]] /* $whenCondition351 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[280] /* $whenCondition351 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[79]] /* line_4043_4046.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[279]] /* $whenCondition350 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[279] /* $whenCondition350 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[79]] /* line_4043_4046.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17724;
}
/*
equation index: 17726
type: SIMPLE_ASSIGN
$DAEres715 = if line_4043_4046.running.value then 0.001 * (line_4043_4046.terminal1.i.im + (-0.15079679999999998) * line_4043_4046.terminal1.V.re - line_4043_4046.YPu.re * line_4043_4046.terminal1.V.im) + 0.01 * (line_4043_4046.terminal1.i.re + 0.15079679999999998 * line_4043_4046.terminal1.V.im - line_4043_4046.YPu.re * line_4043_4046.terminal1.V.re) - (line_4043_4046.terminal1.V.im - line_4046_4047.terminal1.V.im) else line_4043_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17726};
  (data->simulationInfo->daeModeData->residualVars[715]) /* $DAEres715 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17726;
}
/*
equation index: 17727
type: SIMPLE_ASSIGN
$DAEres726 = if line_4043_4046.running.value then 0.001 * (line_4043_4046.terminal2.i.im + (-0.15079679999999998) * line_4046_4047.terminal1.V.re - line_4043_4046.YPu.re * line_4046_4047.terminal1.V.im) + 0.01 * (line_4043_4046.terminal2.i.re + 0.15079679999999998 * line_4046_4047.terminal1.V.im - line_4043_4046.YPu.re * line_4046_4047.terminal1.V.re) - (line_4046_4047.terminal1.V.im - line_4043_4046.terminal1.V.im) else line_4043_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17727};
  (data->simulationInfo->daeModeData->residualVars[726]) /* $DAEres726 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17727;
}
/*
equation index: 17728
type: SIMPLE_ASSIGN
$DAEres727 = if line_4043_4046.running.value then 0.001 * (line_4043_4046.terminal1.i.re + 0.15079679999999998 * line_4043_4046.terminal1.V.im - line_4043_4046.YPu.re * line_4043_4046.terminal1.V.re) + (-0.01) * (line_4043_4046.terminal1.i.im + (-0.15079679999999998) * line_4043_4046.terminal1.V.re - line_4043_4046.YPu.re * line_4043_4046.terminal1.V.im) - (line_4043_4046.terminal1.V.re - line_4046_4047.terminal1.V.re) else line_4043_4046.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17728};
  (data->simulationInfo->daeModeData->residualVars[727]) /* $DAEres727 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17728;
}
/*
equation index: 17729
type: SIMPLE_ASSIGN
$DAEres728 = if line_4043_4046.running.value then 0.001 * (line_4043_4046.terminal2.i.re + 0.15079679999999998 * line_4046_4047.terminal1.V.im - line_4043_4046.YPu.re * line_4046_4047.terminal1.V.re) + (-0.01) * (line_4043_4046.terminal2.i.im + (-0.15079679999999998) * line_4046_4047.terminal1.V.re - line_4043_4046.YPu.re * line_4046_4047.terminal1.V.im) - (line_4046_4047.terminal1.V.re - line_4043_4046.terminal1.V.re) else line_4043_4046.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17729};
  (data->simulationInfo->daeModeData->residualVars[728]) /* $DAEres728 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3290]] /* line_4043_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17729;
}
/*
equation index: 17730
type: SIMPLE_ASSIGN
$whenCondition352 = not pre(line_4043_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17730};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[281]] /* $whenCondition352 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17730;
}
/*
equation index: 17731
type: WHEN

when {} then
  line_4043_4044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17731};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[281]] /* $whenCondition352 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[281] /* $whenCondition352 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17731;
}
/*
equation index: 17733
type: SIMPLE_ASSIGN
$whenCondition354 = not line_4043_4044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17733};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[283]] /* $whenCondition354 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17733;
}
/*
equation index: 17734
type: SIMPLE_ASSIGN
$whenCondition353 = line_4043_4044.running.value and not pre(line_4043_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17734};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[282]] /* $whenCondition353 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17734;
}
/*
equation index: 17735
type: WHEN

when {$whenCondition354} then
  line_4043_4044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17735};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[283]] /* $whenCondition354 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[283] /* $whenCondition354 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[78]] /* line_4043_4044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[282]] /* $whenCondition353 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[282] /* $whenCondition353 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[78]] /* line_4043_4044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17735;
}
/*
equation index: 17737
type: SIMPLE_ASSIGN
$DAEres790 = if line_4043_4044.running.value then 0.001 * (line_4043_4044.terminal1.i.im + (-0.15079679999999998) * line_4043_4046.terminal1.V.re - line_4043_4044.YPu.re * line_4043_4046.terminal1.V.im) + 0.01 * (line_4043_4044.terminal1.i.re + 0.15079679999999998 * line_4043_4046.terminal1.V.im - line_4043_4044.YPu.re * line_4043_4046.terminal1.V.re) - (line_4043_4046.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4043_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17737};
  (data->simulationInfo->daeModeData->residualVars[790]) /* $DAEres790 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17737;
}
/*
equation index: 17738
type: SIMPLE_ASSIGN
$DAEres791 = if line_4043_4044.running.value then 0.001 * (line_4043_4044.terminal2.i.im + (-0.15079679999999998) * line_4044_4045a.terminal1.V.re - line_4043_4044.YPu.re * line_4044_4045a.terminal1.V.im) + 0.01 * (line_4043_4044.terminal2.i.re + 0.15079679999999998 * line_4044_4045a.terminal1.V.im - line_4043_4044.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4043_4046.terminal1.V.im) else line_4043_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17738};
  (data->simulationInfo->daeModeData->residualVars[791]) /* $DAEres791 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17738;
}
/*
equation index: 17739
type: SIMPLE_ASSIGN
$DAEres792 = if line_4043_4044.running.value then 0.001 * (line_4043_4044.terminal1.i.re + 0.15079679999999998 * line_4043_4046.terminal1.V.im - line_4043_4044.YPu.re * line_4043_4046.terminal1.V.re) + (-0.01) * (line_4043_4044.terminal1.i.im + (-0.15079679999999998) * line_4043_4046.terminal1.V.re - line_4043_4044.YPu.re * line_4043_4046.terminal1.V.im) - (line_4043_4046.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4043_4044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17739};
  (data->simulationInfo->daeModeData->residualVars[792]) /* $DAEres792 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17739;
}
/*
equation index: 17740
type: SIMPLE_ASSIGN
$DAEres793 = if line_4043_4044.running.value then 0.001 * (line_4043_4044.terminal2.i.re + 0.15079679999999998 * line_4044_4045a.terminal1.V.im - line_4043_4044.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.01) * (line_4043_4044.terminal2.i.im + (-0.15079679999999998) * line_4044_4045a.terminal1.V.re - line_4043_4044.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4043_4046.terminal1.V.re) else line_4043_4044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17740};
  (data->simulationInfo->daeModeData->residualVars[793]) /* $DAEres793 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3282]] /* line_4043_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17740;
}
/*
equation index: 17741
type: SIMPLE_ASSIGN
$whenCondition355 = not pre(line_4042_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17741};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[284]] /* $whenCondition355 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17741;
}
/*
equation index: 17742
type: WHEN

when {} then
  line_4042_4044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17742};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[284]] /* $whenCondition355 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[284] /* $whenCondition355 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17742;
}
/*
equation index: 17744
type: SIMPLE_ASSIGN
$whenCondition357 = not line_4042_4044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17744};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[286]] /* $whenCondition357 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17744;
}
/*
equation index: 17745
type: SIMPLE_ASSIGN
$whenCondition356 = line_4042_4044.running.value and not pre(line_4042_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17745};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[285]] /* $whenCondition356 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17745;
}
/*
equation index: 17746
type: WHEN

when {$whenCondition357} then
  line_4042_4044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17746};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[286]] /* $whenCondition357 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[286] /* $whenCondition357 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[77]] /* line_4042_4044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[285]] /* $whenCondition356 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[285] /* $whenCondition356 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[77]] /* line_4042_4044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17746;
}
/*
equation index: 17748
type: SIMPLE_ASSIGN
$DAEres665 = if line_4042_4044.running.value then 0.002 * (line_4042_4044.terminal1.i.im + (-0.299088) * line_4042_4043.terminal1.V.re - line_4042_4044.YPu.re * line_4042_4043.terminal1.V.im) + 0.02 * (line_4042_4044.terminal1.i.re + 0.299088 * line_4042_4043.terminal1.V.im - line_4042_4044.YPu.re * line_4042_4043.terminal1.V.re) - (line_4042_4043.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4042_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17748};
  (data->simulationInfo->daeModeData->residualVars[665]) /* $DAEres665 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17748;
}
/*
equation index: 17749
type: SIMPLE_ASSIGN
$DAEres666 = if line_4042_4044.running.value then 0.002 * (line_4042_4044.terminal2.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4042_4044.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.02) * (line_4042_4044.terminal2.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4042_4044.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4042_4043.terminal1.V.re) else line_4042_4044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17749};
  (data->simulationInfo->daeModeData->residualVars[666]) /* $DAEres666 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17749;
}
/*
equation index: 17750
type: SIMPLE_ASSIGN
$DAEres667 = if line_4042_4044.running.value then 0.002 * (line_4042_4044.terminal1.i.re + 0.299088 * line_4042_4043.terminal1.V.im - line_4042_4044.YPu.re * line_4042_4043.terminal1.V.re) + (-0.02) * (line_4042_4044.terminal1.i.im + (-0.299088) * line_4042_4043.terminal1.V.re - line_4042_4044.YPu.re * line_4042_4043.terminal1.V.im) - (line_4042_4043.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4042_4044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17750};
  (data->simulationInfo->daeModeData->residualVars[667]) /* $DAEres667 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17750;
}
/*
equation index: 17751
type: SIMPLE_ASSIGN
$DAEres668 = if line_4042_4044.running.value then 0.002 * (line_4042_4044.terminal2.i.im + (-0.299088) * line_4044_4045a.terminal1.V.re - line_4042_4044.YPu.re * line_4044_4045a.terminal1.V.im) + 0.02 * (line_4042_4044.terminal2.i.re + 0.299088 * line_4044_4045a.terminal1.V.im - line_4042_4044.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4042_4043.terminal1.V.im) else line_4042_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17751};
  (data->simulationInfo->daeModeData->residualVars[668]) /* $DAEres668 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */) + (-0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */) + (0.299088) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3274]] /* line_4042_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17751;
}
/*
equation index: 17752
type: SIMPLE_ASSIGN
$whenCondition358 = not pre(line_4042_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17752};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[287]] /* $whenCondition358 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17752;
}
/*
equation index: 17753
type: WHEN

when {} then
  line_4042_4043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17753};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[287]] /* $whenCondition358 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[287] /* $whenCondition358 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17753;
}
/*
equation index: 17755
type: SIMPLE_ASSIGN
$whenCondition360 = not line_4042_4043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17755};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[290]] /* $whenCondition360 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17755;
}
/*
equation index: 17756
type: SIMPLE_ASSIGN
$whenCondition359 = line_4042_4043.running.value and not pre(line_4042_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17756};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[288]] /* $whenCondition359 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17756;
}
/*
equation index: 17757
type: WHEN

when {$whenCondition360} then
  line_4042_4043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17757};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[290]] /* $whenCondition360 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[290] /* $whenCondition360 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[76]] /* line_4042_4043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[288]] /* $whenCondition359 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[288] /* $whenCondition359 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[76]] /* line_4042_4043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17757;
}
/*
equation index: 17759
type: SIMPLE_ASSIGN
$DAEres708 = if line_4042_4043.running.value then 0.002 * (line_4042_4043.terminal1.i.re + 0.248816 * line_4042_4043.terminal1.V.im - line_4042_4043.YPu.re * line_4042_4043.terminal1.V.re) + (-0.015) * (line_4042_4043.terminal1.i.im + (-0.248816) * line_4042_4043.terminal1.V.re - line_4042_4043.YPu.re * line_4042_4043.terminal1.V.im) - (line_4042_4043.terminal1.V.re - line_4043_4046.terminal1.V.re) else line_4042_4043.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17759};
  (data->simulationInfo->daeModeData->residualVars[708]) /* $DAEres708 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) + (-0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17759;
}
/*
equation index: 17760
type: SIMPLE_ASSIGN
$DAEres709 = if line_4042_4043.running.value then 0.002 * (line_4042_4043.terminal1.i.im + (-0.248816) * line_4042_4043.terminal1.V.re - line_4042_4043.YPu.re * line_4042_4043.terminal1.V.im) + 0.015 * (line_4042_4043.terminal1.i.re + 0.248816 * line_4042_4043.terminal1.V.im - line_4042_4043.YPu.re * line_4042_4043.terminal1.V.re) - (line_4042_4043.terminal1.V.im - line_4043_4046.terminal1.V.im) else line_4042_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17760};
  (data->simulationInfo->daeModeData->residualVars[709]) /* $DAEres709 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) + (0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17760;
}
/*
equation index: 17761
type: SIMPLE_ASSIGN
$DAEres787 = if line_4042_4043.running.value then 0.002 * (line_4042_4043.terminal2.i.im + (-0.248816) * line_4043_4046.terminal1.V.re - line_4042_4043.YPu.re * line_4043_4046.terminal1.V.im) + 0.015 * (line_4042_4043.terminal2.i.re + 0.248816 * line_4043_4046.terminal1.V.im - line_4042_4043.YPu.re * line_4043_4046.terminal1.V.re) - (line_4043_4046.terminal1.V.im - line_4042_4043.terminal1.V.im) else line_4042_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17761};
  (data->simulationInfo->daeModeData->residualVars[787]) /* $DAEres787 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) + (0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17761;
}
/*
equation index: 17762
type: SIMPLE_ASSIGN
$DAEres788 = if line_4042_4043.running.value then 0.002 * (line_4042_4043.terminal2.i.re + 0.248816 * line_4043_4046.terminal1.V.im - line_4042_4043.YPu.re * line_4043_4046.terminal1.V.re) + (-0.015) * (line_4042_4043.terminal2.i.im + (-0.248816) * line_4043_4046.terminal1.V.re - line_4042_4043.YPu.re * line_4043_4046.terminal1.V.im) - (line_4043_4046.terminal1.V.re - line_4042_4043.terminal1.V.re) else line_4042_4043.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17762};
  (data->simulationInfo->daeModeData->residualVars[788]) /* $DAEres788 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */)?(0.002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */) + (0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)))) + (-0.015) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */) + (-0.248816) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* line_4042_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17762;
}
/*
equation index: 17763
type: SIMPLE_ASSIGN
$whenCondition361 = not pre(line_4041_4061.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17763};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[291]] /* $whenCondition361 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 17763;
}
/*
equation index: 17764
type: WHEN

when {} then
  line_4041_4061.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17764};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[291]] /* $whenCondition361 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[291] /* $whenCondition361 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17764;
}
/*
equation index: 17766
type: SIMPLE_ASSIGN
$whenCondition363 = not line_4041_4061.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17766};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[293]] /* $whenCondition363 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 17766;
}
/*
equation index: 17767
type: SIMPLE_ASSIGN
$whenCondition362 = line_4041_4061.running.value and not pre(line_4041_4061.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17767};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[292]] /* $whenCondition362 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17767;
}
/*
equation index: 17768
type: WHEN

when {$whenCondition363} then
  line_4041_4061.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17768};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[293]] /* $whenCondition363 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[293] /* $whenCondition363 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[75]] /* line_4041_4061.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[292]] /* $whenCondition362 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[292] /* $whenCondition362 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[75]] /* line_4041_4061.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17768;
}
/*
equation index: 17770
type: SIMPLE_ASSIGN
$DAEres630 = if line_4041_4061.running.value then 0.006 * (line_4041_4061.terminal1.i.re + 0.650944 * line_4041_4061.terminal1.V.im - line_4041_4061.YPu.re * line_4041_4061.terminal1.V.re) + (-0.045) * (line_4041_4061.terminal1.i.im + (-0.650944) * line_4041_4061.terminal1.V.re - line_4041_4061.YPu.re * line_4041_4061.terminal1.V.im) - (line_4041_4061.terminal1.V.re - line_4061_4062.terminal1.V.re) else line_4041_4061.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17770};
  (data->simulationInfo->daeModeData->residualVars[630]) /* $DAEres630 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */) + (0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) + (-0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */) + (-0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17770;
}
/*
equation index: 17771
type: SIMPLE_ASSIGN
$DAEres631 = if line_4041_4061.running.value then 0.006 * (line_4041_4061.terminal1.i.im + (-0.650944) * line_4041_4061.terminal1.V.re - line_4041_4061.YPu.re * line_4041_4061.terminal1.V.im) + 0.045 * (line_4041_4061.terminal1.i.re + 0.650944 * line_4041_4061.terminal1.V.im - line_4041_4061.YPu.re * line_4041_4061.terminal1.V.re) - (line_4041_4061.terminal1.V.im - line_4061_4062.terminal1.V.im) else line_4041_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17771};
  (data->simulationInfo->daeModeData->residualVars[631]) /* $DAEres631 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */) + (-0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) + (0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */) + (0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17771;
}
/*
equation index: 17772
type: SIMPLE_ASSIGN
$DAEres632 = if line_4041_4061.running.value then 0.006 * (line_4041_4061.terminal2.i.im + (-0.650944) * line_4061_4062.terminal1.V.re - line_4041_4061.YPu.re * line_4061_4062.terminal1.V.im) + 0.045 * (line_4041_4061.terminal2.i.re + 0.650944 * line_4061_4062.terminal1.V.im - line_4041_4061.YPu.re * line_4061_4062.terminal1.V.re) - (line_4061_4062.terminal1.V.im - line_4041_4061.terminal1.V.im) else line_4041_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17772};
  (data->simulationInfo->daeModeData->residualVars[632]) /* $DAEres632 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */) + (-0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)))) + (0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */) + (0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17772;
}
/*
equation index: 17773
type: SIMPLE_ASSIGN
$DAEres1155 = if line_4041_4061.running.value then 0.006 * (line_4041_4061.terminal2.i.re + 0.650944 * line_4061_4062.terminal1.V.im - line_4041_4061.YPu.re * line_4061_4062.terminal1.V.re) + (-0.045) * (line_4041_4061.terminal2.i.im + (-0.650944) * line_4061_4062.terminal1.V.re - line_4041_4061.YPu.re * line_4061_4062.terminal1.V.im) - (line_4061_4062.terminal1.V.re - line_4041_4061.terminal1.V.re) else line_4041_4061.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17773};
  (data->simulationInfo->daeModeData->residualVars[1155]) /* $DAEres1155 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */) + (0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)))) + (-0.045) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */) + (-0.650944) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* line_4041_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17773;
}
/*
equation index: 17774
type: SIMPLE_ASSIGN
$whenCondition364 = not pre(line_4041_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17774};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[294]] /* $whenCondition364 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17774;
}
/*
equation index: 17775
type: WHEN

when {} then
  line_4041_4044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17775};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[294]] /* $whenCondition364 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[294] /* $whenCondition364 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17775;
}
/*
equation index: 17777
type: SIMPLE_ASSIGN
$whenCondition366 = not line_4041_4044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17777};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[296]] /* $whenCondition366 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17777;
}
/*
equation index: 17778
type: SIMPLE_ASSIGN
$whenCondition365 = line_4041_4044.running.value and not pre(line_4041_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17778};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[295]] /* $whenCondition365 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17778;
}
/*
equation index: 17779
type: WHEN

when {$whenCondition366} then
  line_4041_4044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17779};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[296]] /* $whenCondition366 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[296] /* $whenCondition366 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[74]] /* line_4041_4044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[295]] /* $whenCondition365 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[295] /* $whenCondition365 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[74]] /* line_4041_4044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17779;
}
/*
equation index: 17781
type: SIMPLE_ASSIGN
$DAEres651 = if line_4041_4044.running.value then 0.003 * (line_4041_4044.terminal1.i.im + (-0.44987200000000005) * line_4041_4061.terminal1.V.re - line_4041_4044.YPu.re * line_4041_4061.terminal1.V.im) + 0.03 * (line_4041_4044.terminal1.i.re + 0.44987200000000005 * line_4041_4061.terminal1.V.im - line_4041_4044.YPu.re * line_4041_4061.terminal1.V.re) - (line_4041_4061.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4041_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17781};
  (data->simulationInfo->daeModeData->residualVars[651]) /* $DAEres651 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17781;
}
/*
equation index: 17782
type: SIMPLE_ASSIGN
$DAEres652 = if line_4041_4044.running.value then 0.003 * (line_4041_4044.terminal2.i.im + (-0.44987200000000005) * line_4044_4045a.terminal1.V.re - line_4041_4044.YPu.re * line_4044_4045a.terminal1.V.im) + 0.03 * (line_4041_4044.terminal2.i.re + 0.44987200000000005 * line_4044_4045a.terminal1.V.im - line_4041_4044.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4041_4061.terminal1.V.im) else line_4041_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17782};
  (data->simulationInfo->daeModeData->residualVars[652]) /* $DAEres652 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17782;
}
/*
equation index: 17783
type: SIMPLE_ASSIGN
$DAEres653 = if line_4041_4044.running.value then 0.003 * (line_4041_4044.terminal1.i.re + 0.44987200000000005 * line_4041_4061.terminal1.V.im - line_4041_4044.YPu.re * line_4041_4061.terminal1.V.re) + (-0.03) * (line_4041_4044.terminal1.i.im + (-0.44987200000000005) * line_4041_4061.terminal1.V.re - line_4041_4044.YPu.re * line_4041_4061.terminal1.V.im) - (line_4041_4061.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4041_4044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17783};
  (data->simulationInfo->daeModeData->residualVars[653]) /* $DAEres653 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17783;
}
/*
equation index: 17784
type: SIMPLE_ASSIGN
$DAEres654 = if line_4041_4044.running.value then 0.003 * (line_4041_4044.terminal2.i.re + 0.44987200000000005 * line_4044_4045a.terminal1.V.im - line_4041_4044.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.03) * (line_4041_4044.terminal2.i.im + (-0.44987200000000005) * line_4044_4045a.terminal1.V.re - line_4041_4044.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4041_4061.terminal1.V.re) else line_4041_4044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17784};
  (data->simulationInfo->daeModeData->residualVars[654]) /* $DAEres654 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */)?(0.003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */) + (0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.03) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */) + (-0.44987200000000005) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3250]] /* line_4041_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17784;
}
/*
equation index: 17785
type: SIMPLE_ASSIGN
$whenCondition371 = not pre(line_4032_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17785};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[302]] /* $whenCondition371 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17785;
}
/*
equation index: 17786
type: WHEN

when {} then
  line_4032_4042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17786};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[302]] /* $whenCondition371 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[302] /* $whenCondition371 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17786;
}
/*
equation index: 17788
type: SIMPLE_ASSIGN
$whenCondition373 = not line_4032_4042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17788};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[304]] /* $whenCondition373 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17788;
}
/*
equation index: 17789
type: SIMPLE_ASSIGN
$whenCondition372 = line_4032_4042.running.value and not pre(line_4032_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17789};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[303]] /* $whenCondition372 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17789;
}
/*
equation index: 17790
type: WHEN

when {$whenCondition373} then
  line_4032_4042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17790};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[304]] /* $whenCondition373 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[304] /* $whenCondition373 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[72]] /* line_4032_4042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[303]] /* $whenCondition372 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[303] /* $whenCondition372 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[72]] /* line_4032_4042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17790;
}
/*
equation index: 17792
type: SIMPLE_ASSIGN
$DAEres664 = if line_4032_4042.running.value then 0.01 * (line_4032_4042.terminal1.i.im + (-1.000288) * line_4032_4044.terminal1.V.re - line_4032_4042.YPu.re * line_4032_4044.terminal1.V.im) + 0.04 * (line_4032_4042.terminal1.i.re + 1.000288 * line_4032_4044.terminal1.V.im - line_4032_4042.YPu.re * line_4032_4044.terminal1.V.re) - (line_4032_4044.terminal1.V.im - line_4042_4043.terminal1.V.im) else line_4032_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17792};
  (data->simulationInfo->daeModeData->residualVars[664]) /* $DAEres664 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */) + (-1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */) + (1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17792;
}
/*
equation index: 17793
type: SIMPLE_ASSIGN
$DAEres698 = if line_4032_4042.running.value then 0.01 * (line_4032_4042.terminal2.i.im + (-1.000288) * line_4042_4043.terminal1.V.re - line_4032_4042.YPu.re * line_4042_4043.terminal1.V.im) + 0.04 * (line_4032_4042.terminal2.i.re + 1.000288 * line_4042_4043.terminal1.V.im - line_4032_4042.YPu.re * line_4042_4043.terminal1.V.re) - (line_4042_4043.terminal1.V.im - line_4032_4044.terminal1.V.im) else line_4032_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17793};
  (data->simulationInfo->daeModeData->residualVars[698]) /* $DAEres698 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */) + (-1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */) + (1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17793;
}
/*
equation index: 17794
type: SIMPLE_ASSIGN
$DAEres699 = if line_4032_4042.running.value then 0.01 * (line_4032_4042.terminal1.i.re + 1.000288 * line_4032_4044.terminal1.V.im - line_4032_4042.YPu.re * line_4032_4044.terminal1.V.re) + (-0.04) * (line_4032_4042.terminal1.i.im + (-1.000288) * line_4032_4044.terminal1.V.re - line_4032_4042.YPu.re * line_4032_4044.terminal1.V.im) - (line_4032_4044.terminal1.V.re - line_4042_4043.terminal1.V.re) else line_4032_4042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17794};
  (data->simulationInfo->daeModeData->residualVars[699]) /* $DAEres699 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */) + (1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */) + (-1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17794;
}
/*
equation index: 17795
type: SIMPLE_ASSIGN
$DAEres700 = if line_4032_4042.running.value then 0.01 * (line_4032_4042.terminal2.i.re + 1.000288 * line_4042_4043.terminal1.V.im - line_4032_4042.YPu.re * line_4042_4043.terminal1.V.re) + (-0.04) * (line_4032_4042.terminal2.i.im + (-1.000288) * line_4042_4043.terminal1.V.re - line_4032_4042.YPu.re * line_4042_4043.terminal1.V.im) - (line_4042_4043.terminal1.V.re - line_4032_4044.terminal1.V.re) else line_4032_4042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17795};
  (data->simulationInfo->daeModeData->residualVars[700]) /* $DAEres700 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */)?(0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */) + (1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */) + (-1.000288) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3234]] /* line_4032_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17795;
}
/*
equation index: 17796
type: SIMPLE_ASSIGN
$whenCondition374 = not pre(line_4031_4041b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17796};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[305]] /* $whenCondition374 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17796;
}
/*
equation index: 17797
type: WHEN

when {} then
  line_4031_4041b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17797};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[305]] /* $whenCondition374 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[305] /* $whenCondition374 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17797;
}
/*
equation index: 17799
type: SIMPLE_ASSIGN
$whenCondition376 = not line_4031_4041b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17799};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[307]] /* $whenCondition376 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */));
  threadData->lastEquationSolved = 17799;
}
/*
equation index: 17800
type: SIMPLE_ASSIGN
$whenCondition375 = line_4031_4041b.running.value and not pre(line_4031_4041b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17800};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[306]] /* $whenCondition375 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17800;
}
/*
equation index: 17801
type: WHEN

when {$whenCondition376} then
  line_4031_4041b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17801};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[307]] /* $whenCondition376 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[307] /* $whenCondition376 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[71]] /* line_4031_4041b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[306]] /* $whenCondition375 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[306] /* $whenCondition375 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[71]] /* line_4031_4041b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17801;
}
/*
equation index: 17803
type: SIMPLE_ASSIGN
$DAEres647 = if line_4031_4041b.running.value then 0.006 * (line_4031_4041b.terminal1.i.im + (-1.1988320000000001) * line_4031_4041b.terminal1.V.re - line_4031_4041b.YPu.re * line_4031_4041b.terminal1.V.im) + 0.04 * (line_4031_4041b.terminal1.i.re + 1.1988320000000001 * line_4031_4041b.terminal1.V.im - line_4031_4041b.YPu.re * line_4031_4041b.terminal1.V.re) - (line_4031_4041b.terminal1.V.im - line_4041_4061.terminal1.V.im) else line_4031_4041b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17803};
  (data->simulationInfo->daeModeData->residualVars[647]) /* $DAEres647 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17803;
}
/*
equation index: 17804
type: SIMPLE_ASSIGN
$DAEres648 = if line_4031_4041b.running.value then 0.006 * (line_4031_4041b.terminal1.i.re + 1.1988320000000001 * line_4031_4041b.terminal1.V.im - line_4031_4041b.YPu.re * line_4031_4041b.terminal1.V.re) + (-0.04) * (line_4031_4041b.terminal1.i.im + (-1.1988320000000001) * line_4031_4041b.terminal1.V.re - line_4031_4041b.YPu.re * line_4031_4041b.terminal1.V.im) - (line_4031_4041b.terminal1.V.re - line_4041_4061.terminal1.V.re) else line_4031_4041b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17804};
  (data->simulationInfo->daeModeData->residualVars[648]) /* $DAEres648 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17804;
}
/*
equation index: 17805
type: SIMPLE_ASSIGN
$DAEres649 = if line_4031_4041b.running.value then 0.006 * (line_4031_4041b.terminal2.i.im + (-1.1988320000000001) * line_4041_4061.terminal1.V.re - line_4031_4041b.YPu.re * line_4041_4061.terminal1.V.im) + 0.04 * (line_4031_4041b.terminal2.i.re + 1.1988320000000001 * line_4041_4061.terminal1.V.im - line_4031_4041b.YPu.re * line_4041_4061.terminal1.V.re) - (line_4041_4061.terminal1.V.im - line_4031_4041b.terminal1.V.im) else line_4031_4041b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17805};
  (data->simulationInfo->daeModeData->residualVars[649]) /* $DAEres649 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17805;
}
/*
equation index: 17806
type: SIMPLE_ASSIGN
$DAEres1133 = if line_4031_4041b.running.value then 0.006 * (line_4031_4041b.terminal2.i.re + 1.1988320000000001 * line_4041_4061.terminal1.V.im - line_4031_4041b.YPu.re * line_4041_4061.terminal1.V.re) + (-0.04) * (line_4031_4041b.terminal2.i.im + (-1.1988320000000001) * line_4041_4061.terminal1.V.re - line_4031_4041b.YPu.re * line_4041_4061.terminal1.V.im) - (line_4041_4061.terminal1.V.re - line_4031_4041b.terminal1.V.re) else line_4031_4041b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17806};
  (data->simulationInfo->daeModeData->residualVars[1133]) /* $DAEres1133 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3226]] /* line_4031_4041b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17806;
}
/*
equation index: 17807
type: SIMPLE_ASSIGN
$whenCondition377 = not pre(line_4031_4041a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17807};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[308]] /* $whenCondition377 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[700] /* line_4031_4041a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17807;
}
/*
equation index: 17808
type: WHEN

when {} then
  line_4031_4041a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17808};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[308]] /* $whenCondition377 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[308] /* $whenCondition377 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17808;
}
/*
equation index: 17810
type: SIMPLE_ASSIGN
$whenCondition379 = not line_4031_4041a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17810};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[310]] /* $whenCondition379 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */));
  threadData->lastEquationSolved = 17810;
}
/*
equation index: 17811
type: SIMPLE_ASSIGN
$whenCondition378 = line_4031_4041a.running.value and not pre(line_4031_4041a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17811};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[309]] /* $whenCondition378 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[700] /* line_4031_4041a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17811;
}
/*
equation index: 17812
type: WHEN

when {$whenCondition379} then
  line_4031_4041a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17812};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[310]] /* $whenCondition379 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[310] /* $whenCondition379 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[70]] /* line_4031_4041a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[309]] /* $whenCondition378 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[309] /* $whenCondition378 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[70]] /* line_4031_4041a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17812;
}
/*
equation index: 17814
type: SIMPLE_ASSIGN
$DAEres625 = if line_4031_4041a.running.value then 0.006 * (line_4031_4041a.terminal1.i.im + (-1.1988320000000001) * line_4031_4041b.terminal1.V.re - line_4031_4041a.YPu.re * line_4031_4041b.terminal1.V.im) + 0.04 * (line_4031_4041a.terminal1.i.re + 1.1988320000000001 * line_4031_4041b.terminal1.V.im - line_4031_4041a.YPu.re * line_4031_4041b.terminal1.V.re) - (line_4031_4041b.terminal1.V.im - line_4041_4061.terminal1.V.im) else line_4031_4041a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17814};
  (data->simulationInfo->daeModeData->residualVars[625]) /* $DAEres625 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17814;
}
/*
equation index: 17815
type: SIMPLE_ASSIGN
$DAEres1142 = if line_4031_4041a.running.value then 0.006 * (line_4031_4041a.terminal1.i.re + 1.1988320000000001 * line_4031_4041b.terminal1.V.im - line_4031_4041a.YPu.re * line_4031_4041b.terminal1.V.re) + (-0.04) * (line_4031_4041a.terminal1.i.im + (-1.1988320000000001) * line_4031_4041b.terminal1.V.re - line_4031_4041a.YPu.re * line_4031_4041b.terminal1.V.im) - (line_4031_4041b.terminal1.V.re - line_4041_4061.terminal1.V.re) else line_4031_4041a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17815};
  (data->simulationInfo->daeModeData->residualVars[1142]) /* $DAEres1142 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17815;
}
/*
equation index: 17816
type: SIMPLE_ASSIGN
$DAEres1143 = if line_4031_4041a.running.value then 0.006 * (line_4031_4041a.terminal2.i.im + (-1.1988320000000001) * line_4041_4061.terminal1.V.re - line_4031_4041a.YPu.re * line_4041_4061.terminal1.V.im) + 0.04 * (line_4031_4041a.terminal2.i.re + 1.1988320000000001 * line_4041_4061.terminal1.V.im - line_4031_4041a.YPu.re * line_4041_4061.terminal1.V.re) - (line_4041_4061.terminal1.V.im - line_4031_4041b.terminal1.V.im) else line_4031_4041a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17816};
  (data->simulationInfo->daeModeData->residualVars[1143]) /* $DAEres1143 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) + (0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17816;
}
/*
equation index: 17817
type: SIMPLE_ASSIGN
$DAEres1144 = if line_4031_4041a.running.value then 0.006 * (line_4031_4041a.terminal2.i.re + 1.1988320000000001 * line_4041_4061.terminal1.V.im - line_4031_4041a.YPu.re * line_4041_4061.terminal1.V.re) + (-0.04) * (line_4031_4041a.terminal2.i.im + (-1.1988320000000001) * line_4041_4061.terminal1.V.re - line_4031_4041a.YPu.re * line_4041_4061.terminal1.V.im) - (line_4041_4061.terminal1.V.re - line_4031_4041b.terminal1.V.re) else line_4031_4041a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17817};
  (data->simulationInfo->daeModeData->residualVars[1144]) /* $DAEres1144 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[700]] /* line_4031_4041a.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* line_4031_4041a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */));
  threadData->lastEquationSolved = 17817;
}
/*
equation index: 17818
type: SIMPLE_ASSIGN
$whenCondition380 = not pre(line_4031_4032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17818};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[312]] /* $whenCondition380 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[697] /* line_4031_4032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17818;
}
/*
equation index: 17819
type: WHEN

when {} then
  line_4031_4032.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17819};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[312]] /* $whenCondition380 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[312] /* $whenCondition380 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17819;
}
/*
equation index: 17821
type: SIMPLE_ASSIGN
$whenCondition382 = not line_4031_4032.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17821};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[314]] /* $whenCondition382 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17821;
}
/*
equation index: 17822
type: SIMPLE_ASSIGN
$whenCondition381 = line_4031_4032.running.value and not pre(line_4031_4032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17822};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[313]] /* $whenCondition381 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[697] /* line_4031_4032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17822;
}
/*
equation index: 17823
type: WHEN

when {$whenCondition382} then
  line_4031_4032.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17823};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[314]] /* $whenCondition382 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[314] /* $whenCondition382 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[69]] /* line_4031_4032.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[313]] /* $whenCondition381 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[313] /* $whenCondition381 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[69]] /* line_4031_4032.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17823;
}
/*
equation index: 17825
type: SIMPLE_ASSIGN
$DAEres621 = if line_4031_4032.running.value then 0.001 * (line_4031_4032.terminal1.i.im + (-0.15079679999999998) * line_4031_4041b.terminal1.V.re - line_4031_4032.YPu.re * line_4031_4041b.terminal1.V.im) + 0.01 * (line_4031_4032.terminal1.i.re + 0.15079679999999998 * line_4031_4041b.terminal1.V.im - line_4031_4032.YPu.re * line_4031_4041b.terminal1.V.re) - (line_4031_4041b.terminal1.V.im - line_4032_4044.terminal1.V.im) else line_4031_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17825};
  (data->simulationInfo->daeModeData->residualVars[621]) /* $DAEres621 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17825;
}
/*
equation index: 17826
type: SIMPLE_ASSIGN
$DAEres622 = if line_4031_4032.running.value then 0.001 * (line_4031_4032.terminal2.i.im + (-0.15079679999999998) * line_4032_4044.terminal1.V.re - line_4031_4032.YPu.re * line_4032_4044.terminal1.V.im) + 0.01 * (line_4031_4032.terminal2.i.re + 0.15079679999999998 * line_4032_4044.terminal1.V.im - line_4031_4032.YPu.re * line_4032_4044.terminal1.V.re) - (line_4032_4044.terminal1.V.im - line_4031_4041b.terminal1.V.im) else line_4031_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17826};
  (data->simulationInfo->daeModeData->residualVars[622]) /* $DAEres622 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[697]] /* line_4031_4032.running.value DISCRETE */)?(0.001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */) + (-0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) + (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */) + (0.15079679999999998) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* line_4031_4032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 17826;
}
#if defined(__cplusplus)
}
#endif