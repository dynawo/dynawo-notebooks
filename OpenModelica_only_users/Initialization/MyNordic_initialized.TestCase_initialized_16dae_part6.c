#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 16667
type: SIMPLE_ASSIGN
$DAEres1169 = if trafo_g17_4062.running.value then trafo_g17_4062.rTfoPu ^ 2.0 * g17.terminal.V.re - (trafo_g17_4062.rTfoPu * line_4062_4063b.terminal1.V.re + trafo_g17_4062.ZPu.im * g17.terminal.i.im - trafo_g17_4062.ZPu.re * g17.terminal.i.re) else -g17.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16667};
  modelica_real tmp2764;
  modelica_boolean tmp2765;
  modelica_real tmp2766;
  tmp2765 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp2765)
  {
    tmp2764 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */);
    tmp2766 = ((tmp2764 * tmp2764)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4009]] /* trafo_g17_4062.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4010]] /* trafo_g17_4062.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */))));
  }
  else
  {
    tmp2766 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1169]) /* $DAEres1169 DAE_RESIDUAL_VAR */ = tmp2766;
  threadData->lastEquationSolved = 16667;
}
/*
equation index: 16668
type: SIMPLE_ASSIGN
trafo_g17_4062.U1Pu = if trafo_g17_4062.running.value then if g17.terminal.V.re == 0.0 and g17.terminal.V.im == 0.0 then 0.0 else (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16668};
  modelica_real tmp2767;
  modelica_real tmp2768;
  modelica_real tmp2769;
  modelica_boolean tmp2770;
  modelica_real tmp2771;
  modelica_boolean tmp2772;
  modelica_real tmp2773;
  tmp2772 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp2772)
  {
    tmp2770 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0));
    if(tmp2770)
    {
      tmp2771 = 0.0;
    }
    else
    {
      tmp2767 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
      tmp2768 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
      tmp2769 = (tmp2767 * tmp2767) + (tmp2768 * tmp2768);
      if(tmp2769 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2769, 0.5);
      }
      tmp2771 = sqrt(tmp2769);
    }
    tmp2773 = tmp2771;
  }
  else
  {
    tmp2773 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3344]] /* trafo_g17_4062.U1Pu variable */) = tmp2773;
  threadData->lastEquationSolved = 16668;
}
/*
equation index: 16669
type: SIMPLE_ASSIGN
trafo_g17_4062.U2Pu = if trafo_g17_4062.running.value then if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16669};
  modelica_real tmp2774;
  modelica_real tmp2775;
  modelica_real tmp2776;
  modelica_boolean tmp2777;
  modelica_real tmp2778;
  modelica_boolean tmp2779;
  modelica_real tmp2780;
  tmp2779 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp2779)
  {
    tmp2777 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0));
    if(tmp2777)
    {
      tmp2778 = 0.0;
    }
    else
    {
      tmp2774 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
      tmp2775 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
      tmp2776 = (tmp2774 * tmp2774) + (tmp2775 * tmp2775);
      if(tmp2776 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2776, 0.5);
      }
      tmp2778 = sqrt(tmp2776);
    }
    tmp2780 = tmp2778;
  }
  else
  {
    tmp2780 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3345]] /* trafo_g17_4062.U2Pu variable */) = tmp2780;
  threadData->lastEquationSolved = 16669;
}
/*
equation index: 16670
type: SIMPLE_ASSIGN
$whenCondition76 = not pre(trafo_g16_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16670};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[443]] /* $whenCondition76 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 16670;
}
/*
equation index: 16671
type: WHEN

when {} then
  trafo_g16_4051.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16671};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[443]] /* $whenCondition76 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[443] /* $whenCondition76 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16671;
}
/*
equation index: 16673
type: SIMPLE_ASSIGN
$whenCondition78 = not trafo_g16_4051.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16673};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[445]] /* $whenCondition78 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 16673;
}
/*
equation index: 16674
type: SIMPLE_ASSIGN
$whenCondition77 = trafo_g16_4051.running.value and not pre(trafo_g16_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16674};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[444]] /* $whenCondition77 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16674;
}
/*
equation index: 16675
type: WHEN

when {$whenCondition78} then
  trafo_g16_4051.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16675};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[445]] /* $whenCondition78 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[445] /* $whenCondition78 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[161]] /* trafo_g16_4051.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[444]] /* $whenCondition77 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[444] /* $whenCondition77 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[161]] /* trafo_g16_4051.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16675;
}
/*
equation index: 16677
type: SIMPLE_ASSIGN
$DAEres957 = if trafo_g16_4051.running.value then (-g16.terminal.i.im) - trafo_g16_4051.rTfoPu * (trafo_g16_4051.YPu.re * line_4045_4051b.terminal2.V.im + trafo_g16_4051.YPu.im * line_4045_4051b.terminal2.V.re - trafo_g16_4051.terminal2.i.im) else trafo_g16_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16677};
  (data->simulationInfo->daeModeData->residualVars[957]) /* $DAEres957 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3999]] /* trafo_g16_4051.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3998]] /* trafo_g16_4051.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16677;
}
/*
equation index: 16678
type: SIMPLE_ASSIGN
$DAEres958 = if trafo_g16_4051.running.value then (-g16.terminal.i.re) - trafo_g16_4051.rTfoPu * (trafo_g16_4051.YPu.re * line_4045_4051b.terminal2.V.re + (-trafo_g16_4051.YPu.im) * line_4045_4051b.terminal2.V.im - trafo_g16_4051.terminal2.i.re) else trafo_g16_4051.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16678};
  (data->simulationInfo->daeModeData->residualVars[958]) /* $DAEres958 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3999]] /* trafo_g16_4051.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3998]] /* trafo_g16_4051.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16678;
}
/*
equation index: 16679
type: SIMPLE_ASSIGN
$DAEres959 = if trafo_g16_4051.running.value then trafo_g16_4051.rTfoPu ^ 2.0 * g16.terminal.V.re - (trafo_g16_4051.rTfoPu * line_4045_4051b.terminal2.V.re + trafo_g16_4051.ZPu.im * g16.terminal.i.im - trafo_g16_4051.ZPu.re * g16.terminal.i.re) else -g16.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16679};
  modelica_real tmp2781;
  modelica_boolean tmp2782;
  modelica_real tmp2783;
  tmp2782 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp2782)
  {
    tmp2781 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */);
    tmp2783 = ((tmp2781 * tmp2781)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4000]] /* trafo_g16_4051.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4001]] /* trafo_g16_4051.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */))));
  }
  else
  {
    tmp2783 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[959]) /* $DAEres959 DAE_RESIDUAL_VAR */ = tmp2783;
  threadData->lastEquationSolved = 16679;
}
/*
equation index: 16680
type: SIMPLE_ASSIGN
$DAEres962 = if trafo_g16_4051.running.value then trafo_g16_4051.rTfoPu ^ 2.0 * g16.terminal.V.im - (trafo_g16_4051.rTfoPu * line_4045_4051b.terminal2.V.im + (-trafo_g16_4051.ZPu.re) * g16.terminal.i.im - trafo_g16_4051.ZPu.im * g16.terminal.i.re) else -g16.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16680};
  modelica_real tmp2784;
  modelica_boolean tmp2785;
  modelica_real tmp2786;
  tmp2785 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp2785)
  {
    tmp2784 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */);
    tmp2786 = ((tmp2784 * tmp2784)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4002]] /* trafo_g16_4051.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4001]] /* trafo_g16_4051.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4000]] /* trafo_g16_4051.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */))));
  }
  else
  {
    tmp2786 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[962]) /* $DAEres962 DAE_RESIDUAL_VAR */ = tmp2786;
  threadData->lastEquationSolved = 16680;
}
/*
equation index: 16681
type: SIMPLE_ASSIGN
trafo_g16_4051.U1Pu = if trafo_g16_4051.running.value then if g16.terminal.V.re == 0.0 and g16.terminal.V.im == 0.0 then 0.0 else (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16681};
  modelica_real tmp2787;
  modelica_real tmp2788;
  modelica_real tmp2789;
  modelica_boolean tmp2790;
  modelica_real tmp2791;
  modelica_boolean tmp2792;
  modelica_real tmp2793;
  tmp2792 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp2792)
  {
    tmp2790 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0));
    if(tmp2790)
    {
      tmp2791 = 0.0;
    }
    else
    {
      tmp2787 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
      tmp2788 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
      tmp2789 = (tmp2787 * tmp2787) + (tmp2788 * tmp2788);
      if(tmp2789 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2789, 0.5);
      }
      tmp2791 = sqrt(tmp2789);
    }
    tmp2793 = tmp2791;
  }
  else
  {
    tmp2793 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3336]] /* trafo_g16_4051.U1Pu variable */) = tmp2793;
  threadData->lastEquationSolved = 16681;
}
/*
equation index: 16682
type: SIMPLE_ASSIGN
trafo_g16_4051.U2Pu = if trafo_g16_4051.running.value then if line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal2.V.re ^ 2.0 + line_4045_4051b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16682};
  modelica_real tmp2794;
  modelica_real tmp2795;
  modelica_real tmp2796;
  modelica_boolean tmp2797;
  modelica_real tmp2798;
  modelica_boolean tmp2799;
  modelica_real tmp2800;
  tmp2799 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */);
  if(tmp2799)
  {
    tmp2797 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0));
    if(tmp2797)
    {
      tmp2798 = 0.0;
    }
    else
    {
      tmp2794 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
      tmp2795 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
      tmp2796 = (tmp2794 * tmp2794) + (tmp2795 * tmp2795);
      if(tmp2796 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2796, 0.5);
      }
      tmp2798 = sqrt(tmp2796);
    }
    tmp2800 = tmp2798;
  }
  else
  {
    tmp2800 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3337]] /* trafo_g16_4051.U2Pu variable */) = tmp2800;
  threadData->lastEquationSolved = 16682;
}
/*
equation index: 16683
type: SIMPLE_ASSIGN
$whenCondition79 = not pre(trafo_g15_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16683};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[446]] /* $whenCondition79 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 16683;
}
/*
equation index: 16684
type: WHEN

when {} then
  trafo_g15_4047.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16684};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[446]] /* $whenCondition79 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[446] /* $whenCondition79 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16684;
}
/*
equation index: 16686
type: SIMPLE_ASSIGN
$whenCondition81 = not trafo_g15_4047.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16686};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[449]] /* $whenCondition81 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 16686;
}
/*
equation index: 16687
type: SIMPLE_ASSIGN
$whenCondition80 = trafo_g15_4047.running.value and not pre(trafo_g15_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16687};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[448]] /* $whenCondition80 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16687;
}
/*
equation index: 16688
type: WHEN

when {$whenCondition81} then
  trafo_g15_4047.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16688};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[449]] /* $whenCondition81 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[449] /* $whenCondition81 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[160]] /* trafo_g15_4047.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[448]] /* $whenCondition80 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[448] /* $whenCondition80 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[160]] /* trafo_g15_4047.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16688;
}
/*
equation index: 16690
type: SIMPLE_ASSIGN
$DAEres760 = if trafo_g15_4047.running.value then (-g15.terminal.i.im) - trafo_g15_4047.rTfoPu * (trafo_g15_4047.YPu.re * line_4046_4047.terminal2.V.im + trafo_g15_4047.YPu.im * line_4046_4047.terminal2.V.re - trafo_g15_4047.terminal2.i.im) else trafo_g15_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16690};
  (data->simulationInfo->daeModeData->residualVars[760]) /* $DAEres760 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3990]] /* trafo_g15_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3989]] /* trafo_g15_4047.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16690;
}
/*
equation index: 16691
type: SIMPLE_ASSIGN
$DAEres761 = if trafo_g15_4047.running.value then (-g15.terminal.i.re) - trafo_g15_4047.rTfoPu * (trafo_g15_4047.YPu.re * line_4046_4047.terminal2.V.re + (-trafo_g15_4047.YPu.im) * line_4046_4047.terminal2.V.im - trafo_g15_4047.terminal2.i.re) else trafo_g15_4047.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16691};
  (data->simulationInfo->daeModeData->residualVars[761]) /* $DAEres761 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3990]] /* trafo_g15_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3989]] /* trafo_g15_4047.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16691;
}
/*
equation index: 16692
type: SIMPLE_ASSIGN
$DAEres762 = if trafo_g15_4047.running.value then trafo_g15_4047.rTfoPu ^ 2.0 * g15.terminal.V.re - (trafo_g15_4047.rTfoPu * line_4046_4047.terminal2.V.re + trafo_g15_4047.ZPu.im * g15.terminal.i.im - trafo_g15_4047.ZPu.re * g15.terminal.i.re) else -g15.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16692};
  modelica_real tmp2801;
  modelica_boolean tmp2802;
  modelica_real tmp2803;
  tmp2802 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp2802)
  {
    tmp2801 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */);
    tmp2803 = ((tmp2801 * tmp2801)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3991]] /* trafo_g15_4047.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3992]] /* trafo_g15_4047.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */))));
  }
  else
  {
    tmp2803 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[762]) /* $DAEres762 DAE_RESIDUAL_VAR */ = tmp2803;
  threadData->lastEquationSolved = 16692;
}
/*
equation index: 16693
type: SIMPLE_ASSIGN
$DAEres765 = if trafo_g15_4047.running.value then trafo_g15_4047.rTfoPu ^ 2.0 * g15.terminal.V.im - (trafo_g15_4047.rTfoPu * line_4046_4047.terminal2.V.im + (-trafo_g15_4047.ZPu.re) * g15.terminal.i.im - trafo_g15_4047.ZPu.im * g15.terminal.i.re) else -g15.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16693};
  modelica_real tmp2804;
  modelica_boolean tmp2805;
  modelica_real tmp2806;
  tmp2805 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp2805)
  {
    tmp2804 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */);
    tmp2806 = ((tmp2804 * tmp2804)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3993]] /* trafo_g15_4047.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3992]] /* trafo_g15_4047.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3991]] /* trafo_g15_4047.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */))));
  }
  else
  {
    tmp2806 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[765]) /* $DAEres765 DAE_RESIDUAL_VAR */ = tmp2806;
  threadData->lastEquationSolved = 16693;
}
/*
equation index: 16694
type: SIMPLE_ASSIGN
trafo_g15_4047.U1Pu = if trafo_g15_4047.running.value then if g15.terminal.V.re == 0.0 and g15.terminal.V.im == 0.0 then 0.0 else (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16694};
  modelica_real tmp2807;
  modelica_real tmp2808;
  modelica_real tmp2809;
  modelica_boolean tmp2810;
  modelica_real tmp2811;
  modelica_boolean tmp2812;
  modelica_real tmp2813;
  tmp2812 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp2812)
  {
    tmp2810 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0));
    if(tmp2810)
    {
      tmp2811 = 0.0;
    }
    else
    {
      tmp2807 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
      tmp2808 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
      tmp2809 = (tmp2807 * tmp2807) + (tmp2808 * tmp2808);
      if(tmp2809 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2809, 0.5);
      }
      tmp2811 = sqrt(tmp2809);
    }
    tmp2813 = tmp2811;
  }
  else
  {
    tmp2813 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3328]] /* trafo_g15_4047.U1Pu variable */) = tmp2813;
  threadData->lastEquationSolved = 16694;
}
/*
equation index: 16695
type: SIMPLE_ASSIGN
trafo_g15_4047.U2Pu = if trafo_g15_4047.running.value then if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16695};
  modelica_real tmp2814;
  modelica_real tmp2815;
  modelica_real tmp2816;
  modelica_boolean tmp2817;
  modelica_real tmp2818;
  modelica_boolean tmp2819;
  modelica_real tmp2820;
  tmp2819 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */);
  if(tmp2819)
  {
    tmp2817 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
    if(tmp2817)
    {
      tmp2818 = 0.0;
    }
    else
    {
      tmp2814 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
      tmp2815 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
      tmp2816 = (tmp2814 * tmp2814) + (tmp2815 * tmp2815);
      if(tmp2816 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2816, 0.5);
      }
      tmp2818 = sqrt(tmp2816);
    }
    tmp2820 = tmp2818;
  }
  else
  {
    tmp2820 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3329]] /* trafo_g15_4047.U2Pu variable */) = tmp2820;
  threadData->lastEquationSolved = 16695;
}
/*
equation index: 16696
type: SIMPLE_ASSIGN
$whenCondition82 = not pre(trafo_g14_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16696};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[450]] /* $whenCondition82 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 16696;
}
/*
equation index: 16697
type: WHEN

when {} then
  trafo_g14_4042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16697};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[450]] /* $whenCondition82 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[450] /* $whenCondition82 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16697;
}
/*
equation index: 16699
type: SIMPLE_ASSIGN
$whenCondition84 = not trafo_g14_4042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16699};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[452]] /* $whenCondition84 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 16699;
}
/*
equation index: 16700
type: SIMPLE_ASSIGN
$whenCondition83 = trafo_g14_4042.running.value and not pre(trafo_g14_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16700};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[451]] /* $whenCondition83 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16700;
}
/*
equation index: 16701
type: WHEN

when {$whenCondition84} then
  trafo_g14_4042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16701};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[452]] /* $whenCondition84 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[452] /* $whenCondition84 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[159]] /* trafo_g14_4042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[451]] /* $whenCondition83 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[451] /* $whenCondition83 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[159]] /* trafo_g14_4042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16701;
}
/*
equation index: 16703
type: SIMPLE_ASSIGN
$DAEres697 = if trafo_g14_4042.running.value then trafo_g14_4042.rTfoPu ^ 2.0 * g14.terminal.V.im - (trafo_g14_4042.rTfoPu * line_4042_4043.terminal1.V.im + (-trafo_g14_4042.ZPu.re) * g14.terminal.i.im - trafo_g14_4042.ZPu.im * g14.terminal.i.re) else -g14.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16703};
  modelica_real tmp2821;
  modelica_boolean tmp2822;
  modelica_real tmp2823;
  tmp2822 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp2822)
  {
    tmp2821 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */);
    tmp2823 = ((tmp2821 * tmp2821)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3983]] /* trafo_g14_4042.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3982]] /* trafo_g14_4042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */))));
  }
  else
  {
    tmp2823 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[697]) /* $DAEres697 DAE_RESIDUAL_VAR */ = tmp2823;
  threadData->lastEquationSolved = 16703;
}
/*
equation index: 16704
type: SIMPLE_ASSIGN
$DAEres702 = if trafo_g14_4042.running.value then (-g14.terminal.i.re) - trafo_g14_4042.rTfoPu * (trafo_g14_4042.YPu.re * line_4042_4043.terminal1.V.re + (-trafo_g14_4042.YPu.im) * line_4042_4043.terminal1.V.im - trafo_g14_4042.terminal2.i.re) else trafo_g14_4042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16704};
  (data->simulationInfo->daeModeData->residualVars[702]) /* $DAEres702 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3981]] /* trafo_g14_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3980]] /* trafo_g14_4042.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16704;
}
/*
equation index: 16705
type: SIMPLE_ASSIGN
$DAEres703 = if trafo_g14_4042.running.value then trafo_g14_4042.rTfoPu ^ 2.0 * g14.terminal.V.re - (trafo_g14_4042.rTfoPu * line_4042_4043.terminal1.V.re + trafo_g14_4042.ZPu.im * g14.terminal.i.im - trafo_g14_4042.ZPu.re * g14.terminal.i.re) else -g14.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16705};
  modelica_real tmp2824;
  modelica_boolean tmp2825;
  modelica_real tmp2826;
  tmp2825 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp2825)
  {
    tmp2824 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */);
    tmp2826 = ((tmp2824 * tmp2824)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3982]] /* trafo_g14_4042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3983]] /* trafo_g14_4042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */))));
  }
  else
  {
    tmp2826 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[703]) /* $DAEres703 DAE_RESIDUAL_VAR */ = tmp2826;
  threadData->lastEquationSolved = 16705;
}
/*
equation index: 16706
type: SIMPLE_ASSIGN
$DAEres706 = if trafo_g14_4042.running.value then (-g14.terminal.i.im) - trafo_g14_4042.rTfoPu * (trafo_g14_4042.YPu.re * line_4042_4043.terminal1.V.im + trafo_g14_4042.YPu.im * line_4042_4043.terminal1.V.re - trafo_g14_4042.terminal2.i.im) else trafo_g14_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16706};
  (data->simulationInfo->daeModeData->residualVars[706]) /* $DAEres706 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3984]] /* trafo_g14_4042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3981]] /* trafo_g14_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3980]] /* trafo_g14_4042.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16706;
}
/*
equation index: 16707
type: SIMPLE_ASSIGN
trafo_g14_4042.U1Pu = if trafo_g14_4042.running.value then if g14.terminal.V.re == 0.0 and g14.terminal.V.im == 0.0 then 0.0 else (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16707};
  modelica_real tmp2827;
  modelica_real tmp2828;
  modelica_real tmp2829;
  modelica_boolean tmp2830;
  modelica_real tmp2831;
  modelica_boolean tmp2832;
  modelica_real tmp2833;
  tmp2832 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp2832)
  {
    tmp2830 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0));
    if(tmp2830)
    {
      tmp2831 = 0.0;
    }
    else
    {
      tmp2827 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
      tmp2828 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
      tmp2829 = (tmp2827 * tmp2827) + (tmp2828 * tmp2828);
      if(tmp2829 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2829, 0.5);
      }
      tmp2831 = sqrt(tmp2829);
    }
    tmp2833 = tmp2831;
  }
  else
  {
    tmp2833 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3320]] /* trafo_g14_4042.U1Pu variable */) = tmp2833;
  threadData->lastEquationSolved = 16707;
}
/*
equation index: 16708
type: SIMPLE_ASSIGN
trafo_g14_4042.U2Pu = if trafo_g14_4042.running.value then if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16708};
  modelica_real tmp2834;
  modelica_real tmp2835;
  modelica_real tmp2836;
  modelica_boolean tmp2837;
  modelica_real tmp2838;
  modelica_boolean tmp2839;
  modelica_real tmp2840;
  tmp2839 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp2839)
  {
    tmp2837 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
    if(tmp2837)
    {
      tmp2838 = 0.0;
    }
    else
    {
      tmp2834 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
      tmp2835 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
      tmp2836 = (tmp2834 * tmp2834) + (tmp2835 * tmp2835);
      if(tmp2836 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2836, 0.5);
      }
      tmp2838 = sqrt(tmp2836);
    }
    tmp2840 = tmp2838;
  }
  else
  {
    tmp2840 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3321]] /* trafo_g14_4042.U2Pu variable */) = tmp2840;
  threadData->lastEquationSolved = 16708;
}
/*
equation index: 16709
type: SIMPLE_ASSIGN
$whenCondition85 = not pre(trafo_g13_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16709};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[453]] /* $whenCondition85 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 16709;
}
/*
equation index: 16710
type: WHEN

when {} then
  trafo_g13_4041.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16710};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[453]] /* $whenCondition85 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[453] /* $whenCondition85 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16710;
}
/*
equation index: 16712
type: SIMPLE_ASSIGN
$whenCondition87 = not trafo_g13_4041.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16712};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[455]] /* $whenCondition87 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 16712;
}
/*
equation index: 16713
type: SIMPLE_ASSIGN
$whenCondition86 = trafo_g13_4041.running.value and not pre(trafo_g13_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16713};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[454]] /* $whenCondition86 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16713;
}
/*
equation index: 16714
type: WHEN

when {$whenCondition87} then
  trafo_g13_4041.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16714};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[455]] /* $whenCondition87 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[455] /* $whenCondition87 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[158]] /* trafo_g13_4041.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[454]] /* $whenCondition86 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[454] /* $whenCondition86 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[158]] /* trafo_g13_4041.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16714;
}
/*
equation index: 16716
type: SIMPLE_ASSIGN
$DAEres646 = if trafo_g13_4041.running.value then (-g13.terminal.i.im) - trafo_g13_4041.rTfoPu * (trafo_g13_4041.YPu.re * line_4041_4061.terminal1.V.im + trafo_g13_4041.YPu.im * line_4041_4061.terminal1.V.re - trafo_g13_4041.terminal2.i.im) else trafo_g13_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16716};
  (data->simulationInfo->daeModeData->residualVars[646]) /* $DAEres646 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3972]] /* trafo_g13_4041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3971]] /* trafo_g13_4041.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16716;
}
/*
equation index: 16717
type: SIMPLE_ASSIGN
$DAEres1146 = if trafo_g13_4041.running.value then (-g13.terminal.i.re) - trafo_g13_4041.rTfoPu * (trafo_g13_4041.YPu.re * line_4041_4061.terminal1.V.re + (-trafo_g13_4041.YPu.im) * line_4041_4061.terminal1.V.im - trafo_g13_4041.terminal2.i.re) else trafo_g13_4041.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16717};
  (data->simulationInfo->daeModeData->residualVars[1146]) /* $DAEres1146 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3972]] /* trafo_g13_4041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3971]] /* trafo_g13_4041.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16717;
}
/*
equation index: 16718
type: SIMPLE_ASSIGN
$DAEres1147 = if trafo_g13_4041.running.value then trafo_g13_4041.rTfoPu ^ 2.0 * g13.terminal.V.im - (trafo_g13_4041.rTfoPu * line_4041_4061.terminal1.V.im + (-trafo_g13_4041.ZPu.re) * g13.terminal.i.im - trafo_g13_4041.ZPu.im * g13.terminal.i.re) else -g13.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16718};
  modelica_real tmp2841;
  modelica_boolean tmp2842;
  modelica_real tmp2843;
  tmp2842 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp2842)
  {
    tmp2841 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */);
    tmp2843 = ((tmp2841 * tmp2841)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3974]] /* trafo_g13_4041.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3973]] /* trafo_g13_4041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */))));
  }
  else
  {
    tmp2843 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1147]) /* $DAEres1147 DAE_RESIDUAL_VAR */ = tmp2843;
  threadData->lastEquationSolved = 16718;
}
/*
equation index: 16719
type: SIMPLE_ASSIGN
$DAEres1154 = if trafo_g13_4041.running.value then trafo_g13_4041.rTfoPu ^ 2.0 * g13.terminal.V.re - (trafo_g13_4041.rTfoPu * line_4041_4061.terminal1.V.re + trafo_g13_4041.ZPu.im * g13.terminal.i.im - trafo_g13_4041.ZPu.re * g13.terminal.i.re) else -g13.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16719};
  modelica_real tmp2844;
  modelica_boolean tmp2845;
  modelica_real tmp2846;
  tmp2845 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp2845)
  {
    tmp2844 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */);
    tmp2846 = ((tmp2844 * tmp2844)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3975]] /* trafo_g13_4041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3973]] /* trafo_g13_4041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3974]] /* trafo_g13_4041.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */))));
  }
  else
  {
    tmp2846 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1154]) /* $DAEres1154 DAE_RESIDUAL_VAR */ = tmp2846;
  threadData->lastEquationSolved = 16719;
}
/*
equation index: 16720
type: SIMPLE_ASSIGN
trafo_g13_4041.U1Pu = if trafo_g13_4041.running.value then if g13.terminal.V.re == 0.0 and g13.terminal.V.im == 0.0 then 0.0 else (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16720};
  modelica_real tmp2847;
  modelica_real tmp2848;
  modelica_real tmp2849;
  modelica_boolean tmp2850;
  modelica_real tmp2851;
  modelica_boolean tmp2852;
  modelica_real tmp2853;
  tmp2852 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp2852)
  {
    tmp2850 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0));
    if(tmp2850)
    {
      tmp2851 = 0.0;
    }
    else
    {
      tmp2847 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
      tmp2848 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
      tmp2849 = (tmp2847 * tmp2847) + (tmp2848 * tmp2848);
      if(tmp2849 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2849, 0.5);
      }
      tmp2851 = sqrt(tmp2849);
    }
    tmp2853 = tmp2851;
  }
  else
  {
    tmp2853 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3312]] /* trafo_g13_4041.U1Pu variable */) = tmp2853;
  threadData->lastEquationSolved = 16720;
}
/*
equation index: 16721
type: SIMPLE_ASSIGN
trafo_g13_4041.U2Pu = if trafo_g13_4041.running.value then if line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0 then 0.0 else (line_4041_4061.terminal1.V.re ^ 2.0 + line_4041_4061.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16721};
  modelica_real tmp2854;
  modelica_real tmp2855;
  modelica_real tmp2856;
  modelica_boolean tmp2857;
  modelica_real tmp2858;
  modelica_boolean tmp2859;
  modelica_real tmp2860;
  tmp2859 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp2859)
  {
    tmp2857 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0));
    if(tmp2857)
    {
      tmp2858 = 0.0;
    }
    else
    {
      tmp2854 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
      tmp2855 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
      tmp2856 = (tmp2854 * tmp2854) + (tmp2855 * tmp2855);
      if(tmp2856 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2856, 0.5);
      }
      tmp2858 = sqrt(tmp2856);
    }
    tmp2860 = tmp2858;
  }
  else
  {
    tmp2860 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3313]] /* trafo_g13_4041.U2Pu variable */) = tmp2860;
  threadData->lastEquationSolved = 16721;
}
/*
equation index: 16722
type: SIMPLE_ASSIGN
$whenCondition88 = not pre(trafo_g12_4031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16722};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[456]] /* $whenCondition88 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 16722;
}
/*
equation index: 16723
type: WHEN

when {} then
  trafo_g12_4031.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16723};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[456]] /* $whenCondition88 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[456] /* $whenCondition88 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16723;
}
/*
equation index: 16725
type: SIMPLE_ASSIGN
$whenCondition90 = not trafo_g12_4031.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16725};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[459]] /* $whenCondition90 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 16725;
}
/*
equation index: 16726
type: SIMPLE_ASSIGN
$whenCondition89 = trafo_g12_4031.running.value and not pre(trafo_g12_4031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16726};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[457]] /* $whenCondition89 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16726;
}
/*
equation index: 16727
type: WHEN

when {$whenCondition90} then
  trafo_g12_4031.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16727};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[459]] /* $whenCondition90 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[459] /* $whenCondition90 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[157]] /* trafo_g12_4031.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[457]] /* $whenCondition89 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[457] /* $whenCondition89 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[157]] /* trafo_g12_4031.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16727;
}
/*
equation index: 16729
type: SIMPLE_ASSIGN
$DAEres1132 = if trafo_g12_4031.running.value then (-g12.terminal.i.im) - trafo_g12_4031.rTfoPu * (trafo_g12_4031.YPu.re * line_4031_4041b.terminal1.V.im + trafo_g12_4031.YPu.im * line_4031_4041b.terminal1.V.re - trafo_g12_4031.terminal2.i.im) else trafo_g12_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16729};
  (data->simulationInfo->daeModeData->residualVars[1132]) /* $DAEres1132 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3963]] /* trafo_g12_4031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3962]] /* trafo_g12_4031.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16729;
}
/*
equation index: 16730
type: SIMPLE_ASSIGN
$DAEres1135 = if trafo_g12_4031.running.value then (-g12.terminal.i.re) - trafo_g12_4031.rTfoPu * (trafo_g12_4031.YPu.re * line_4031_4041b.terminal1.V.re + (-trafo_g12_4031.YPu.im) * line_4031_4041b.terminal1.V.im - trafo_g12_4031.terminal2.i.re) else trafo_g12_4031.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16730};
  (data->simulationInfo->daeModeData->residualVars[1135]) /* $DAEres1135 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3963]] /* trafo_g12_4031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3962]] /* trafo_g12_4031.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16730;
}
/*
equation index: 16731
type: SIMPLE_ASSIGN
$DAEres1138 = if trafo_g12_4031.running.value then trafo_g12_4031.rTfoPu ^ 2.0 * g12.terminal.V.re - (trafo_g12_4031.rTfoPu * line_4031_4041b.terminal1.V.re + trafo_g12_4031.ZPu.im * g12.terminal.i.im - trafo_g12_4031.ZPu.re * g12.terminal.i.re) else -g12.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16731};
  modelica_real tmp2861;
  modelica_boolean tmp2862;
  modelica_real tmp2863;
  tmp2862 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp2862)
  {
    tmp2861 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */);
    tmp2863 = ((tmp2861 * tmp2861)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3964]] /* trafo_g12_4031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3965]] /* trafo_g12_4031.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */))));
  }
  else
  {
    tmp2863 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1138]) /* $DAEres1138 DAE_RESIDUAL_VAR */ = tmp2863;
  threadData->lastEquationSolved = 16731;
}
/*
equation index: 16732
type: SIMPLE_ASSIGN
$DAEres1141 = if trafo_g12_4031.running.value then trafo_g12_4031.rTfoPu ^ 2.0 * g12.terminal.V.im - (trafo_g12_4031.rTfoPu * line_4031_4041b.terminal1.V.im + (-trafo_g12_4031.ZPu.re) * g12.terminal.i.im - trafo_g12_4031.ZPu.im * g12.terminal.i.re) else -g12.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16732};
  modelica_real tmp2864;
  modelica_boolean tmp2865;
  modelica_real tmp2866;
  tmp2865 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp2865)
  {
    tmp2864 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */);
    tmp2866 = ((tmp2864 * tmp2864)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3966]] /* trafo_g12_4031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3965]] /* trafo_g12_4031.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3964]] /* trafo_g12_4031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */))));
  }
  else
  {
    tmp2866 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1141]) /* $DAEres1141 DAE_RESIDUAL_VAR */ = tmp2866;
  threadData->lastEquationSolved = 16732;
}
/*
equation index: 16733
type: SIMPLE_ASSIGN
trafo_g12_4031.U1Pu = if trafo_g12_4031.running.value then if g12.terminal.V.re == 0.0 and g12.terminal.V.im == 0.0 then 0.0 else (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16733};
  modelica_real tmp2867;
  modelica_real tmp2868;
  modelica_real tmp2869;
  modelica_boolean tmp2870;
  modelica_real tmp2871;
  modelica_boolean tmp2872;
  modelica_real tmp2873;
  tmp2872 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp2872)
  {
    tmp2870 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0));
    if(tmp2870)
    {
      tmp2871 = 0.0;
    }
    else
    {
      tmp2867 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
      tmp2868 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
      tmp2869 = (tmp2867 * tmp2867) + (tmp2868 * tmp2868);
      if(tmp2869 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2869, 0.5);
      }
      tmp2871 = sqrt(tmp2869);
    }
    tmp2873 = tmp2871;
  }
  else
  {
    tmp2873 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3304]] /* trafo_g12_4031.U1Pu variable */) = tmp2873;
  threadData->lastEquationSolved = 16733;
}
/*
equation index: 16734
type: SIMPLE_ASSIGN
trafo_g12_4031.U2Pu = if trafo_g12_4031.running.value then if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16734};
  modelica_real tmp2874;
  modelica_real tmp2875;
  modelica_real tmp2876;
  modelica_boolean tmp2877;
  modelica_real tmp2878;
  modelica_boolean tmp2879;
  modelica_real tmp2880;
  tmp2879 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp2879)
  {
    tmp2877 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
    if(tmp2877)
    {
      tmp2878 = 0.0;
    }
    else
    {
      tmp2874 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
      tmp2875 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
      tmp2876 = (tmp2874 * tmp2874) + (tmp2875 * tmp2875);
      if(tmp2876 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2876, 0.5);
      }
      tmp2878 = sqrt(tmp2876);
    }
    tmp2880 = tmp2878;
  }
  else
  {
    tmp2880 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3305]] /* trafo_g12_4031.U2Pu variable */) = tmp2880;
  threadData->lastEquationSolved = 16734;
}
/*
equation index: 16735
type: SIMPLE_ASSIGN
$whenCondition91 = not pre(trafo_g11_4021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16735};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[460]] /* $whenCondition91 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 16735;
}
/*
equation index: 16736
type: WHEN

when {} then
  trafo_g11_4021.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16736};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[460]] /* $whenCondition91 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[460] /* $whenCondition91 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16736;
}
/*
equation index: 16738
type: SIMPLE_ASSIGN
$whenCondition93 = not trafo_g11_4021.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16738};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[462]] /* $whenCondition93 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 16738;
}
/*
equation index: 16739
type: SIMPLE_ASSIGN
$whenCondition92 = trafo_g11_4021.running.value and not pre(trafo_g11_4021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16739};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[461]] /* $whenCondition92 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16739;
}
/*
equation index: 16740
type: WHEN

when {$whenCondition93} then
  trafo_g11_4021.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16740};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[462]] /* $whenCondition93 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[462] /* $whenCondition93 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[156]] /* trafo_g11_4021.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[461]] /* $whenCondition92 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[461] /* $whenCondition92 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[156]] /* trafo_g11_4021.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16740;
}
/*
equation index: 16742
type: SIMPLE_ASSIGN
$DAEres660 = if trafo_g11_4021.running.value then (-g11.terminal.i.re) - trafo_g11_4021.rTfoPu * (trafo_g11_4021.YPu.re * line_4021_4032.terminal1.V.re + (-trafo_g11_4021.YPu.im) * line_4021_4032.terminal1.V.im - trafo_g11_4021.terminal2.i.re) else trafo_g11_4021.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16742};
  (data->simulationInfo->daeModeData->residualVars[660]) /* $DAEres660 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3954]] /* trafo_g11_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3953]] /* trafo_g11_4021.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16742;
}
/*
equation index: 16743
type: SIMPLE_ASSIGN
$DAEres1017 = if trafo_g11_4021.running.value then (-g11.terminal.i.im) - trafo_g11_4021.rTfoPu * (trafo_g11_4021.YPu.re * line_4021_4032.terminal1.V.im + trafo_g11_4021.YPu.im * line_4021_4032.terminal1.V.re - trafo_g11_4021.terminal2.i.im) else trafo_g11_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16743};
  (data->simulationInfo->daeModeData->residualVars[1017]) /* $DAEres1017 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3954]] /* trafo_g11_4021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3953]] /* trafo_g11_4021.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16743;
}
/*
equation index: 16744
type: SIMPLE_ASSIGN
$DAEres1038 = if trafo_g11_4021.running.value then trafo_g11_4021.rTfoPu ^ 2.0 * g11.terminal.V.im - (trafo_g11_4021.rTfoPu * line_4021_4032.terminal1.V.im + (-trafo_g11_4021.ZPu.re) * g11.terminal.i.im - trafo_g11_4021.ZPu.im * g11.terminal.i.re) else -g11.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16744};
  modelica_real tmp2881;
  modelica_boolean tmp2882;
  modelica_real tmp2883;
  tmp2882 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp2882)
  {
    tmp2881 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */);
    tmp2883 = ((tmp2881 * tmp2881)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3956]] /* trafo_g11_4021.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3955]] /* trafo_g11_4021.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */))));
  }
  else
  {
    tmp2883 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1038]) /* $DAEres1038 DAE_RESIDUAL_VAR */ = tmp2883;
  threadData->lastEquationSolved = 16744;
}
/*
equation index: 16745
type: SIMPLE_ASSIGN
$DAEres1041 = if trafo_g11_4021.running.value then trafo_g11_4021.rTfoPu ^ 2.0 * g11.terminal.V.re - (trafo_g11_4021.rTfoPu * line_4021_4032.terminal1.V.re + trafo_g11_4021.ZPu.im * g11.terminal.i.im - trafo_g11_4021.ZPu.re * g11.terminal.i.re) else -g11.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16745};
  modelica_real tmp2884;
  modelica_boolean tmp2885;
  modelica_real tmp2886;
  tmp2885 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp2885)
  {
    tmp2884 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */);
    tmp2886 = ((tmp2884 * tmp2884)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3957]] /* trafo_g11_4021.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3955]] /* trafo_g11_4021.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3956]] /* trafo_g11_4021.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */))));
  }
  else
  {
    tmp2886 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1041]) /* $DAEres1041 DAE_RESIDUAL_VAR */ = tmp2886;
  threadData->lastEquationSolved = 16745;
}
/*
equation index: 16746
type: SIMPLE_ASSIGN
trafo_g11_4021.U1Pu = if trafo_g11_4021.running.value then if g11.terminal.V.re == 0.0 and g11.terminal.V.im == 0.0 then 0.0 else (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16746};
  modelica_real tmp2887;
  modelica_real tmp2888;
  modelica_real tmp2889;
  modelica_boolean tmp2890;
  modelica_real tmp2891;
  modelica_boolean tmp2892;
  modelica_real tmp2893;
  tmp2892 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp2892)
  {
    tmp2890 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0));
    if(tmp2890)
    {
      tmp2891 = 0.0;
    }
    else
    {
      tmp2887 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
      tmp2888 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
      tmp2889 = (tmp2887 * tmp2887) + (tmp2888 * tmp2888);
      if(tmp2889 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2889, 0.5);
      }
      tmp2891 = sqrt(tmp2889);
    }
    tmp2893 = tmp2891;
  }
  else
  {
    tmp2893 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3296]] /* trafo_g11_4021.U1Pu variable */) = tmp2893;
  threadData->lastEquationSolved = 16746;
}
/*
equation index: 16747
type: SIMPLE_ASSIGN
trafo_g11_4021.U2Pu = if trafo_g11_4021.running.value then if line_4021_4032.terminal1.V.re == 0.0 and line_4021_4032.terminal1.V.im == 0.0 then 0.0 else (line_4021_4032.terminal1.V.re ^ 2.0 + line_4021_4032.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16747};
  modelica_real tmp2894;
  modelica_real tmp2895;
  modelica_real tmp2896;
  modelica_boolean tmp2897;
  modelica_real tmp2898;
  modelica_boolean tmp2899;
  modelica_real tmp2900;
  tmp2899 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */);
  if(tmp2899)
  {
    tmp2897 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0));
    if(tmp2897)
    {
      tmp2898 = 0.0;
    }
    else
    {
      tmp2894 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */);
      tmp2895 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */);
      tmp2896 = (tmp2894 * tmp2894) + (tmp2895 * tmp2895);
      if(tmp2896 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2896, 0.5);
      }
      tmp2898 = sqrt(tmp2896);
    }
    tmp2900 = tmp2898;
  }
  else
  {
    tmp2900 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3297]] /* trafo_g11_4021.U2Pu variable */) = tmp2900;
  threadData->lastEquationSolved = 16747;
}
/*
equation index: 16748
type: SIMPLE_ASSIGN
$whenCondition94 = not pre(trafo_g10_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16748};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[463]] /* $whenCondition94 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16748;
}
/*
equation index: 16749
type: WHEN

when {} then
  trafo_g10_4012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16749};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[463]] /* $whenCondition94 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[463] /* $whenCondition94 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16749;
}
/*
equation index: 16751
type: SIMPLE_ASSIGN
$whenCondition96 = not trafo_g10_4012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16751};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[465]] /* $whenCondition96 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16751;
}
/*
equation index: 16752
type: SIMPLE_ASSIGN
$whenCondition95 = trafo_g10_4012.running.value and not pre(trafo_g10_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16752};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[464]] /* $whenCondition95 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16752;
}
/*
equation index: 16753
type: WHEN

when {$whenCondition96} then
  trafo_g10_4012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16753};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[465]] /* $whenCondition96 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[465] /* $whenCondition96 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[155]] /* trafo_g10_4012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[464]] /* $whenCondition95 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[464] /* $whenCondition95 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[155]] /* trafo_g10_4012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16753;
}
/*
equation index: 16755
type: SIMPLE_ASSIGN
$DAEres536 = if trafo_g10_4012.running.value then (-g10.terminal.i.im) - trafo_g10_4012.rTfoPu * (trafo_g10_4012.YPu.re * line_4012_4022.terminal1.V.im + trafo_g10_4012.YPu.im * line_4012_4022.terminal1.V.re - trafo_g10_4012.terminal2.i.im) else trafo_g10_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16755};
  (data->simulationInfo->daeModeData->residualVars[536]) /* $DAEres536 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3945]] /* trafo_g10_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3944]] /* trafo_g10_4012.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16755;
}
/*
equation index: 16756
type: SIMPLE_ASSIGN
$DAEres1099 = if trafo_g10_4012.running.value then (-g10.terminal.i.re) - trafo_g10_4012.rTfoPu * (trafo_g10_4012.YPu.re * line_4012_4022.terminal1.V.re + (-trafo_g10_4012.YPu.im) * line_4012_4022.terminal1.V.im - trafo_g10_4012.terminal2.i.re) else trafo_g10_4012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16756};
  (data->simulationInfo->daeModeData->residualVars[1099]) /* $DAEres1099 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3945]] /* trafo_g10_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3944]] /* trafo_g10_4012.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16756;
}
/*
equation index: 16757
type: SIMPLE_ASSIGN
$DAEres1100 = if trafo_g10_4012.running.value then trafo_g10_4012.rTfoPu ^ 2.0 * g10.terminal.V.im - (trafo_g10_4012.rTfoPu * line_4012_4022.terminal1.V.im + (-trafo_g10_4012.ZPu.re) * g10.terminal.i.im - trafo_g10_4012.ZPu.im * g10.terminal.i.re) else -g10.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16757};
  modelica_real tmp2901;
  modelica_boolean tmp2902;
  modelica_real tmp2903;
  tmp2902 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp2902)
  {
    tmp2901 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */);
    tmp2903 = ((tmp2901 * tmp2901)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3947]] /* trafo_g10_4012.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3946]] /* trafo_g10_4012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */))));
  }
  else
  {
    tmp2903 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1100]) /* $DAEres1100 DAE_RESIDUAL_VAR */ = tmp2903;
  threadData->lastEquationSolved = 16757;
}
/*
equation index: 16758
type: SIMPLE_ASSIGN
$DAEres1108 = if trafo_g10_4012.running.value then trafo_g10_4012.rTfoPu ^ 2.0 * g10.terminal.V.re - (trafo_g10_4012.rTfoPu * line_4012_4022.terminal1.V.re + trafo_g10_4012.ZPu.im * g10.terminal.i.im - trafo_g10_4012.ZPu.re * g10.terminal.i.re) else -g10.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16758};
  modelica_real tmp2904;
  modelica_boolean tmp2905;
  modelica_real tmp2906;
  tmp2905 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp2905)
  {
    tmp2904 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */);
    tmp2906 = ((tmp2904 * tmp2904)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3948]] /* trafo_g10_4012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3946]] /* trafo_g10_4012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3947]] /* trafo_g10_4012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */))));
  }
  else
  {
    tmp2906 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1108]) /* $DAEres1108 DAE_RESIDUAL_VAR */ = tmp2906;
  threadData->lastEquationSolved = 16758;
}
/*
equation index: 16759
type: SIMPLE_ASSIGN
trafo_g10_4012.U1Pu = if trafo_g10_4012.running.value then if g10.terminal.V.re == 0.0 and g10.terminal.V.im == 0.0 then 0.0 else (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16759};
  modelica_real tmp2907;
  modelica_real tmp2908;
  modelica_real tmp2909;
  modelica_boolean tmp2910;
  modelica_real tmp2911;
  modelica_boolean tmp2912;
  modelica_real tmp2913;
  tmp2912 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp2912)
  {
    tmp2910 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0));
    if(tmp2910)
    {
      tmp2911 = 0.0;
    }
    else
    {
      tmp2907 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
      tmp2908 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
      tmp2909 = (tmp2907 * tmp2907) + (tmp2908 * tmp2908);
      if(tmp2909 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2909, 0.5);
      }
      tmp2911 = sqrt(tmp2909);
    }
    tmp2913 = tmp2911;
  }
  else
  {
    tmp2913 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3288]] /* trafo_g10_4012.U1Pu variable */) = tmp2913;
  threadData->lastEquationSolved = 16759;
}
/*
equation index: 16760
type: SIMPLE_ASSIGN
trafo_g10_4012.U2Pu = if trafo_g10_4012.running.value then if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16760};
  modelica_real tmp2914;
  modelica_real tmp2915;
  modelica_real tmp2916;
  modelica_boolean tmp2917;
  modelica_real tmp2918;
  modelica_boolean tmp2919;
  modelica_real tmp2920;
  tmp2919 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp2919)
  {
    tmp2917 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0));
    if(tmp2917)
    {
      tmp2918 = 0.0;
    }
    else
    {
      tmp2914 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
      tmp2915 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
      tmp2916 = (tmp2914 * tmp2914) + (tmp2915 * tmp2915);
      if(tmp2916 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2916, 0.5);
      }
      tmp2918 = sqrt(tmp2916);
    }
    tmp2920 = tmp2918;
  }
  else
  {
    tmp2920 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3289]] /* trafo_g10_4012.U2Pu variable */) = tmp2920;
  threadData->lastEquationSolved = 16760;
}
/*
equation index: 16761
type: SIMPLE_ASSIGN
$whenCondition97 = not pre(trafo_g9_4011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16761};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[466]] /* $whenCondition97 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 16761;
}
/*
equation index: 16762
type: WHEN

when {} then
  trafo_g9_4011.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16762};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[466]] /* $whenCondition97 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[466] /* $whenCondition97 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16762;
}
/*
equation index: 16764
type: SIMPLE_ASSIGN
$whenCondition99 = not trafo_g9_4011.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16764};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[468]] /* $whenCondition99 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 16764;
}
/*
equation index: 16765
type: SIMPLE_ASSIGN
$whenCondition98 = trafo_g9_4011.running.value and not pre(trafo_g9_4011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16765};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[467]] /* $whenCondition98 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16765;
}
/*
equation index: 16766
type: WHEN

when {$whenCondition99} then
  trafo_g9_4011.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16766};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[468]] /* $whenCondition99 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[468] /* $whenCondition99 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[174]] /* trafo_g9_4011.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[467]] /* $whenCondition98 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[467] /* $whenCondition98 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[174]] /* trafo_g9_4011.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16766;
}
/*
equation index: 16768
type: SIMPLE_ASSIGN
$DAEres615 = if trafo_g9_4011.running.value then (-g09.terminal.i.re) - trafo_g9_4011.rTfoPu * (trafo_g9_4011.YPu.re * line_4011_4071.terminal1.V.re + (-trafo_g9_4011.YPu.im) * line_4011_4071.terminal1.V.im - trafo_g9_4011.terminal2.i.re) else trafo_g9_4011.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16768};
  (data->simulationInfo->daeModeData->residualVars[615]) /* $DAEres615 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4116]] /* trafo_g9_4011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4115]] /* trafo_g9_4011.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16768;
}
/*
equation index: 16769
type: SIMPLE_ASSIGN
$DAEres1046 = if trafo_g9_4011.running.value then (-g09.terminal.i.im) - trafo_g9_4011.rTfoPu * (trafo_g9_4011.YPu.re * line_4011_4071.terminal1.V.im + trafo_g9_4011.YPu.im * line_4011_4071.terminal1.V.re - trafo_g9_4011.terminal2.i.im) else trafo_g9_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16769};
  (data->simulationInfo->daeModeData->residualVars[1046]) /* $DAEres1046 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4116]] /* trafo_g9_4011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4115]] /* trafo_g9_4011.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16769;
}
/*
equation index: 16770
type: SIMPLE_ASSIGN
$DAEres1049 = if trafo_g9_4011.running.value then trafo_g9_4011.rTfoPu ^ 2.0 * g09.terminal.V.re - (trafo_g9_4011.rTfoPu * line_4011_4071.terminal1.V.re + trafo_g9_4011.ZPu.im * g09.terminal.i.im - trafo_g9_4011.ZPu.re * g09.terminal.i.re) else -g09.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16770};
  modelica_real tmp2921;
  modelica_boolean tmp2922;
  modelica_real tmp2923;
  tmp2922 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp2922)
  {
    tmp2921 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */);
    tmp2923 = ((tmp2921 * tmp2921)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4117]] /* trafo_g9_4011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4118]] /* trafo_g9_4011.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */))));
  }
  else
  {
    tmp2923 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1049]) /* $DAEres1049 DAE_RESIDUAL_VAR */ = tmp2923;
  threadData->lastEquationSolved = 16770;
}
/*
equation index: 16771
type: SIMPLE_ASSIGN
$DAEres1052 = if trafo_g9_4011.running.value then trafo_g9_4011.rTfoPu ^ 2.0 * g09.terminal.V.im - (trafo_g9_4011.rTfoPu * line_4011_4071.terminal1.V.im + (-trafo_g9_4011.ZPu.re) * g09.terminal.i.im - trafo_g9_4011.ZPu.im * g09.terminal.i.re) else -g09.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16771};
  modelica_real tmp2924;
  modelica_boolean tmp2925;
  modelica_real tmp2926;
  tmp2925 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp2925)
  {
    tmp2924 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */);
    tmp2926 = ((tmp2924 * tmp2924)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4119]] /* trafo_g9_4011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4118]] /* trafo_g9_4011.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4117]] /* trafo_g9_4011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */))));
  }
  else
  {
    tmp2926 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1052]) /* $DAEres1052 DAE_RESIDUAL_VAR */ = tmp2926;
  threadData->lastEquationSolved = 16771;
}
/*
equation index: 16772
type: SIMPLE_ASSIGN
trafo_g9_4011.U1Pu = if trafo_g9_4011.running.value then if g09.terminal.V.re == 0.0 and g09.terminal.V.im == 0.0 then 0.0 else (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16772};
  modelica_real tmp2927;
  modelica_real tmp2928;
  modelica_real tmp2929;
  modelica_boolean tmp2930;
  modelica_real tmp2931;
  modelica_boolean tmp2932;
  modelica_real tmp2933;
  tmp2932 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp2932)
  {
    tmp2930 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0));
    if(tmp2930)
    {
      tmp2931 = 0.0;
    }
    else
    {
      tmp2927 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
      tmp2928 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
      tmp2929 = (tmp2927 * tmp2927) + (tmp2928 * tmp2928);
      if(tmp2929 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2929, 0.5);
      }
      tmp2931 = sqrt(tmp2929);
    }
    tmp2933 = tmp2931;
  }
  else
  {
    tmp2933 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3442]] /* trafo_g9_4011.U1Pu variable */) = tmp2933;
  threadData->lastEquationSolved = 16772;
}
/*
equation index: 16773
type: SIMPLE_ASSIGN
trafo_g9_4011.U2Pu = if trafo_g9_4011.running.value then if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16773};
  modelica_real tmp2934;
  modelica_real tmp2935;
  modelica_real tmp2936;
  modelica_boolean tmp2937;
  modelica_real tmp2938;
  modelica_boolean tmp2939;
  modelica_real tmp2940;
  tmp2939 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */);
  if(tmp2939)
  {
    tmp2937 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
    if(tmp2937)
    {
      tmp2938 = 0.0;
    }
    else
    {
      tmp2934 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
      tmp2935 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
      tmp2936 = (tmp2934 * tmp2934) + (tmp2935 * tmp2935);
      if(tmp2936 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2936, 0.5);
      }
      tmp2938 = sqrt(tmp2936);
    }
    tmp2940 = tmp2938;
  }
  else
  {
    tmp2940 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3443]] /* trafo_g9_4011.U2Pu variable */) = tmp2940;
  threadData->lastEquationSolved = 16773;
}
/*
equation index: 16774
type: SIMPLE_ASSIGN
$whenCondition100 = not pre(trafo_g8_2032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16774};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition100 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 16774;
}
/*
equation index: 16775
type: WHEN

when {} then
  trafo_g8_2032.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16775};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition100 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition100 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16775;
}
/*
equation index: 16777
type: SIMPLE_ASSIGN
$whenCondition102 = not trafo_g8_2032.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16777};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition102 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 16777;
}
/*
equation index: 16778
type: SIMPLE_ASSIGN
$whenCondition101 = trafo_g8_2032.running.value and not pre(trafo_g8_2032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16778};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition101 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16778;
}
/*
equation index: 16779
type: WHEN

when {$whenCondition102} then
  trafo_g8_2032.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16779};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition102 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[4] /* $whenCondition102 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[173]] /* trafo_g8_2032.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition101 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition101 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[173]] /* trafo_g8_2032.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16779;
}
/*
equation index: 16781
type: SIMPLE_ASSIGN
$DAEres280 = if trafo_g8_2032.running.value then (-g08.terminal.i.im) - trafo_g8_2032.rTfoPu * (trafo_g8_2032.YPu.re * line_2031_2032b.terminal2.V.im + trafo_g8_2032.YPu.im * line_2031_2032b.terminal2.V.re - trafo_g8_2032.terminal2.i.im) else trafo_g8_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16781};
  (data->simulationInfo->daeModeData->residualVars[280]) /* $DAEres280 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4107]] /* trafo_g8_2032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4106]] /* trafo_g8_2032.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16781;
}
/*
equation index: 16782
type: SIMPLE_ASSIGN
$DAEres283 = if trafo_g8_2032.running.value then (-g08.terminal.i.re) - trafo_g8_2032.rTfoPu * (trafo_g8_2032.YPu.re * line_2031_2032b.terminal2.V.re + (-trafo_g8_2032.YPu.im) * line_2031_2032b.terminal2.V.im - trafo_g8_2032.terminal2.i.re) else trafo_g8_2032.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16782};
  (data->simulationInfo->daeModeData->residualVars[283]) /* $DAEres283 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4107]] /* trafo_g8_2032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4106]] /* trafo_g8_2032.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16782;
}
/*
equation index: 16783
type: SIMPLE_ASSIGN
$DAEres284 = if trafo_g8_2032.running.value then trafo_g8_2032.rTfoPu ^ 2.0 * g08.terminal.V.im - (trafo_g8_2032.rTfoPu * line_2031_2032b.terminal2.V.im + (-trafo_g8_2032.ZPu.re) * g08.terminal.i.im - trafo_g8_2032.ZPu.im * g08.terminal.i.re) else -g08.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16783};
  modelica_real tmp2941;
  modelica_boolean tmp2942;
  modelica_real tmp2943;
  tmp2942 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp2942)
  {
    tmp2941 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */);
    tmp2943 = ((tmp2941 * tmp2941)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4109]] /* trafo_g8_2032.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4108]] /* trafo_g8_2032.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */))));
  }
  else
  {
    tmp2943 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[284]) /* $DAEres284 DAE_RESIDUAL_VAR */ = tmp2943;
  threadData->lastEquationSolved = 16783;
}
/*
equation index: 16784
type: SIMPLE_ASSIGN
$DAEres287 = if trafo_g8_2032.running.value then trafo_g8_2032.rTfoPu ^ 2.0 * g08.terminal.V.re - (trafo_g8_2032.rTfoPu * line_2031_2032b.terminal2.V.re + trafo_g8_2032.ZPu.im * g08.terminal.i.im - trafo_g8_2032.ZPu.re * g08.terminal.i.re) else -g08.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16784};
  modelica_real tmp2944;
  modelica_boolean tmp2945;
  modelica_real tmp2946;
  tmp2945 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp2945)
  {
    tmp2944 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */);
    tmp2946 = ((tmp2944 * tmp2944)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4110]] /* trafo_g8_2032.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4108]] /* trafo_g8_2032.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4109]] /* trafo_g8_2032.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */))));
  }
  else
  {
    tmp2946 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[287]) /* $DAEres287 DAE_RESIDUAL_VAR */ = tmp2946;
  threadData->lastEquationSolved = 16784;
}
/*
equation index: 16785
type: SIMPLE_ASSIGN
trafo_g8_2032.U1Pu = if trafo_g8_2032.running.value then if g08.terminal.V.re == 0.0 and g08.terminal.V.im == 0.0 then 0.0 else (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16785};
  modelica_real tmp2947;
  modelica_real tmp2948;
  modelica_real tmp2949;
  modelica_boolean tmp2950;
  modelica_real tmp2951;
  modelica_boolean tmp2952;
  modelica_real tmp2953;
  tmp2952 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp2952)
  {
    tmp2950 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0));
    if(tmp2950)
    {
      tmp2951 = 0.0;
    }
    else
    {
      tmp2947 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
      tmp2948 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
      tmp2949 = (tmp2947 * tmp2947) + (tmp2948 * tmp2948);
      if(tmp2949 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2949, 0.5);
      }
      tmp2951 = sqrt(tmp2949);
    }
    tmp2953 = tmp2951;
  }
  else
  {
    tmp2953 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3434]] /* trafo_g8_2032.U1Pu variable */) = tmp2953;
  threadData->lastEquationSolved = 16785;
}
/*
equation index: 16786
type: SIMPLE_ASSIGN
trafo_g8_2032.U2Pu = if trafo_g8_2032.running.value then if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16786};
  modelica_real tmp2954;
  modelica_real tmp2955;
  modelica_real tmp2956;
  modelica_boolean tmp2957;
  modelica_real tmp2958;
  modelica_boolean tmp2959;
  modelica_real tmp2960;
  tmp2959 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp2959)
  {
    tmp2957 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
    if(tmp2957)
    {
      tmp2958 = 0.0;
    }
    else
    {
      tmp2954 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
      tmp2955 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
      tmp2956 = (tmp2954 * tmp2954) + (tmp2955 * tmp2955);
      if(tmp2956 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2956, 0.5);
      }
      tmp2958 = sqrt(tmp2956);
    }
    tmp2960 = tmp2958;
  }
  else
  {
    tmp2960 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3435]] /* trafo_g8_2032.U2Pu variable */) = tmp2960;
  threadData->lastEquationSolved = 16786;
}
/*
equation index: 16787
type: SIMPLE_ASSIGN
$whenCondition103 = not pre(trafo_g7_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16787};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition103 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 16787;
}
/*
equation index: 16788
type: WHEN

when {} then
  trafo_g7_1043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16788};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition103 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition103 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16788;
}
/*
equation index: 16790
type: SIMPLE_ASSIGN
$whenCondition105 = not trafo_g7_1043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16790};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition105 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 16790;
}
/*
equation index: 16791
type: SIMPLE_ASSIGN
$whenCondition104 = trafo_g7_1043.running.value and not pre(trafo_g7_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16791};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition104 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16791;
}
/*
equation index: 16792
type: WHEN

when {$whenCondition105} then
  trafo_g7_1043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16792};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition105 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[7] /* $whenCondition105 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[172]] /* trafo_g7_1043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition104 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[6] /* $whenCondition104 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[172]] /* trafo_g7_1043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16792;
}
/*
equation index: 16794
type: SIMPLE_ASSIGN
$DAEres834 = if trafo_g7_1043.running.value then (-g07.terminal.i.im) - trafo_g7_1043.rTfoPu * (trafo_g7_1043.YPu.re * line_1043_1044a.terminal1.V.im + trafo_g7_1043.YPu.im * line_1043_1044a.terminal1.V.re - trafo_g7_1043.terminal2.i.im) else trafo_g7_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16794};
  (data->simulationInfo->daeModeData->residualVars[834]) /* $DAEres834 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4098]] /* trafo_g7_1043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4097]] /* trafo_g7_1043.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16794;
}
/*
equation index: 16795
type: SIMPLE_ASSIGN
$DAEres837 = if trafo_g7_1043.running.value then (-g07.terminal.i.re) - trafo_g7_1043.rTfoPu * (trafo_g7_1043.YPu.re * line_1043_1044a.terminal1.V.re + (-trafo_g7_1043.YPu.im) * line_1043_1044a.terminal1.V.im - trafo_g7_1043.terminal2.i.re) else trafo_g7_1043.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16795};
  (data->simulationInfo->daeModeData->residualVars[837]) /* $DAEres837 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4098]] /* trafo_g7_1043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4097]] /* trafo_g7_1043.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16795;
}
/*
equation index: 16796
type: SIMPLE_ASSIGN
$DAEres838 = if trafo_g7_1043.running.value then trafo_g7_1043.rTfoPu ^ 2.0 * g07.terminal.V.im - (trafo_g7_1043.rTfoPu * line_1043_1044a.terminal1.V.im + (-trafo_g7_1043.ZPu.re) * g07.terminal.i.im - trafo_g7_1043.ZPu.im * g07.terminal.i.re) else -g07.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16796};
  modelica_real tmp2961;
  modelica_boolean tmp2962;
  modelica_real tmp2963;
  tmp2962 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp2962)
  {
    tmp2961 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */);
    tmp2963 = ((tmp2961 * tmp2961)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4100]] /* trafo_g7_1043.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4099]] /* trafo_g7_1043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */))));
  }
  else
  {
    tmp2963 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[838]) /* $DAEres838 DAE_RESIDUAL_VAR */ = tmp2963;
  threadData->lastEquationSolved = 16796;
}
/*
equation index: 16797
type: SIMPLE_ASSIGN
$DAEres841 = if trafo_g7_1043.running.value then trafo_g7_1043.rTfoPu ^ 2.0 * g07.terminal.V.re - (trafo_g7_1043.rTfoPu * line_1043_1044a.terminal1.V.re + trafo_g7_1043.ZPu.im * g07.terminal.i.im - trafo_g7_1043.ZPu.re * g07.terminal.i.re) else -g07.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16797};
  modelica_real tmp2964;
  modelica_boolean tmp2965;
  modelica_real tmp2966;
  tmp2965 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp2965)
  {
    tmp2964 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */);
    tmp2966 = ((tmp2964 * tmp2964)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4101]] /* trafo_g7_1043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4099]] /* trafo_g7_1043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4100]] /* trafo_g7_1043.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */))));
  }
  else
  {
    tmp2966 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[841]) /* $DAEres841 DAE_RESIDUAL_VAR */ = tmp2966;
  threadData->lastEquationSolved = 16797;
}
/*
equation index: 16798
type: SIMPLE_ASSIGN
trafo_g7_1043.U1Pu = if trafo_g7_1043.running.value then if g07.terminal.V.re == 0.0 and g07.terminal.V.im == 0.0 then 0.0 else (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16798};
  modelica_real tmp2967;
  modelica_real tmp2968;
  modelica_real tmp2969;
  modelica_boolean tmp2970;
  modelica_real tmp2971;
  modelica_boolean tmp2972;
  modelica_real tmp2973;
  tmp2972 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp2972)
  {
    tmp2970 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0));
    if(tmp2970)
    {
      tmp2971 = 0.0;
    }
    else
    {
      tmp2967 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
      tmp2968 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
      tmp2969 = (tmp2967 * tmp2967) + (tmp2968 * tmp2968);
      if(tmp2969 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2969, 0.5);
      }
      tmp2971 = sqrt(tmp2969);
    }
    tmp2973 = tmp2971;
  }
  else
  {
    tmp2973 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3426]] /* trafo_g7_1043.U1Pu variable */) = tmp2973;
  threadData->lastEquationSolved = 16798;
}
/*
equation index: 16799
type: SIMPLE_ASSIGN
trafo_g7_1043.U2Pu = if trafo_g7_1043.running.value then if line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal1.V.re ^ 2.0 + line_1043_1044a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16799};
  modelica_real tmp2974;
  modelica_real tmp2975;
  modelica_real tmp2976;
  modelica_boolean tmp2977;
  modelica_real tmp2978;
  modelica_boolean tmp2979;
  modelica_real tmp2980;
  tmp2979 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */);
  if(tmp2979)
  {
    tmp2977 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0));
    if(tmp2977)
    {
      tmp2978 = 0.0;
    }
    else
    {
      tmp2974 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
      tmp2975 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
      tmp2976 = (tmp2974 * tmp2974) + (tmp2975 * tmp2975);
      if(tmp2976 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2976, 0.5);
      }
      tmp2978 = sqrt(tmp2976);
    }
    tmp2980 = tmp2978;
  }
  else
  {
    tmp2980 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3427]] /* trafo_g7_1043.U2Pu variable */) = tmp2980;
  threadData->lastEquationSolved = 16799;
}
/*
equation index: 16800
type: SIMPLE_ASSIGN
$whenCondition106 = not pre(trafo_g6_1042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16800};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition106 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 16800;
}
/*
equation index: 16801
type: WHEN

when {} then
  trafo_g6_1042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16801};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition106 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[8] /* $whenCondition106 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16801;
}
/*
equation index: 16803
type: SIMPLE_ASSIGN
$whenCondition108 = not trafo_g6_1042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16803};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* $whenCondition108 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 16803;
}
/*
equation index: 16804
type: SIMPLE_ASSIGN
$whenCondition107 = trafo_g6_1042.running.value and not pre(trafo_g6_1042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16804};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* $whenCondition107 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16804;
}
/*
equation index: 16805
type: WHEN

when {$whenCondition108} then
  trafo_g6_1042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16805};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* $whenCondition108 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[10] /* $whenCondition108 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[171]] /* trafo_g6_1042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* $whenCondition107 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[9] /* $whenCondition107 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[171]] /* trafo_g6_1042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16805;
}
/*
equation index: 16807
type: SIMPLE_ASSIGN
$DAEres895 = if trafo_g6_1042.running.value then (-g06.terminal.i.im) - trafo_g6_1042.rTfoPu * (trafo_g6_1042.YPu.re * line_1042_1045.terminal1.V.im + trafo_g6_1042.YPu.im * line_1042_1045.terminal1.V.re - trafo_g6_1042.terminal2.i.im) else trafo_g6_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16807};
  (data->simulationInfo->daeModeData->residualVars[895]) /* $DAEres895 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4089]] /* trafo_g6_1042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4088]] /* trafo_g6_1042.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16807;
}
/*
equation index: 16808
type: SIMPLE_ASSIGN
$DAEres980 = if trafo_g6_1042.running.value then (-g06.terminal.i.re) - trafo_g6_1042.rTfoPu * (trafo_g6_1042.YPu.re * line_1042_1045.terminal1.V.re + (-trafo_g6_1042.YPu.im) * line_1042_1045.terminal1.V.im - trafo_g6_1042.terminal2.i.re) else trafo_g6_1042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16808};
  (data->simulationInfo->daeModeData->residualVars[980]) /* $DAEres980 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4089]] /* trafo_g6_1042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4088]] /* trafo_g6_1042.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16808;
}
/*
equation index: 16809
type: SIMPLE_ASSIGN
$DAEres981 = if trafo_g6_1042.running.value then trafo_g6_1042.rTfoPu ^ 2.0 * g06.terminal.V.re - (trafo_g6_1042.rTfoPu * line_1042_1045.terminal1.V.re + trafo_g6_1042.ZPu.im * g06.terminal.i.im - trafo_g6_1042.ZPu.re * g06.terminal.i.re) else -g06.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16809};
  modelica_real tmp2981;
  modelica_boolean tmp2982;
  modelica_real tmp2983;
  tmp2982 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp2982)
  {
    tmp2981 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */);
    tmp2983 = ((tmp2981 * tmp2981)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4090]] /* trafo_g6_1042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4091]] /* trafo_g6_1042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */))));
  }
  else
  {
    tmp2983 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[981]) /* $DAEres981 DAE_RESIDUAL_VAR */ = tmp2983;
  threadData->lastEquationSolved = 16809;
}
/*
equation index: 16810
type: SIMPLE_ASSIGN
$DAEres984 = if trafo_g6_1042.running.value then trafo_g6_1042.rTfoPu ^ 2.0 * g06.terminal.V.im - (trafo_g6_1042.rTfoPu * line_1042_1045.terminal1.V.im + (-trafo_g6_1042.ZPu.re) * g06.terminal.i.im - trafo_g6_1042.ZPu.im * g06.terminal.i.re) else -g06.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16810};
  modelica_real tmp2984;
  modelica_boolean tmp2985;
  modelica_real tmp2986;
  tmp2985 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp2985)
  {
    tmp2984 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */);
    tmp2986 = ((tmp2984 * tmp2984)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4092]] /* trafo_g6_1042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4091]] /* trafo_g6_1042.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4090]] /* trafo_g6_1042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */))));
  }
  else
  {
    tmp2986 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[984]) /* $DAEres984 DAE_RESIDUAL_VAR */ = tmp2986;
  threadData->lastEquationSolved = 16810;
}
/*
equation index: 16811
type: SIMPLE_ASSIGN
trafo_g6_1042.U1Pu = if trafo_g6_1042.running.value then if g06.terminal.V.re == 0.0 and g06.terminal.V.im == 0.0 then 0.0 else (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16811};
  modelica_real tmp2987;
  modelica_real tmp2988;
  modelica_real tmp2989;
  modelica_boolean tmp2990;
  modelica_real tmp2991;
  modelica_boolean tmp2992;
  modelica_real tmp2993;
  tmp2992 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp2992)
  {
    tmp2990 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0));
    if(tmp2990)
    {
      tmp2991 = 0.0;
    }
    else
    {
      tmp2987 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
      tmp2988 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
      tmp2989 = (tmp2987 * tmp2987) + (tmp2988 * tmp2988);
      if(tmp2989 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2989, 0.5);
      }
      tmp2991 = sqrt(tmp2989);
    }
    tmp2993 = tmp2991;
  }
  else
  {
    tmp2993 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3418]] /* trafo_g6_1042.U1Pu variable */) = tmp2993;
  threadData->lastEquationSolved = 16811;
}
/*
equation index: 16812
type: SIMPLE_ASSIGN
trafo_g6_1042.U2Pu = if trafo_g6_1042.running.value then if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16812};
  modelica_real tmp2994;
  modelica_real tmp2995;
  modelica_real tmp2996;
  modelica_boolean tmp2997;
  modelica_real tmp2998;
  modelica_boolean tmp2999;
  modelica_real tmp3000;
  tmp2999 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp2999)
  {
    tmp2997 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0));
    if(tmp2997)
    {
      tmp2998 = 0.0;
    }
    else
    {
      tmp2994 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
      tmp2995 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
      tmp2996 = (tmp2994 * tmp2994) + (tmp2995 * tmp2995);
      if(tmp2996 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2996, 0.5);
      }
      tmp2998 = sqrt(tmp2996);
    }
    tmp3000 = tmp2998;
  }
  else
  {
    tmp3000 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3419]] /* trafo_g6_1042.U2Pu variable */) = tmp3000;
  threadData->lastEquationSolved = 16812;
}
/*
equation index: 16813
type: SIMPLE_ASSIGN
$whenCondition109 = not pre(trafo_g5_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16813};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* $whenCondition109 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 16813;
}
/*
equation index: 16814
type: WHEN

when {} then
  trafo_g5_1022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16814};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* $whenCondition109 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[11] /* $whenCondition109 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16814;
}
/*
equation index: 16816
type: SIMPLE_ASSIGN
$whenCondition111 = not trafo_g5_1022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16816};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* $whenCondition111 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 16816;
}
/*
equation index: 16817
type: SIMPLE_ASSIGN
$whenCondition110 = trafo_g5_1022.running.value and not pre(trafo_g5_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16817};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[13]] /* $whenCondition110 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16817;
}
/*
equation index: 16818
type: WHEN

when {$whenCondition111} then
  trafo_g5_1022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16818};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* $whenCondition111 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[14] /* $whenCondition111 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[170]] /* trafo_g5_1022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[13]] /* $whenCondition110 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[13] /* $whenCondition110 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[170]] /* trafo_g5_1022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16818;
}
/*
equation index: 16820
type: SIMPLE_ASSIGN
$DAEres375 = if trafo_g5_1022.running.value then (-g05.terminal.i.im) - trafo_g5_1022.rTfoPu * (trafo_g5_1022.YPu.re * line_1021_1022b.terminal2.V.im + trafo_g5_1022.YPu.im * line_1021_1022b.terminal2.V.re - trafo_g5_1022.terminal2.i.im) else trafo_g5_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16820};
  (data->simulationInfo->daeModeData->residualVars[375]) /* $DAEres375 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4080]] /* trafo_g5_1022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4079]] /* trafo_g5_1022.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16820;
}
/*
equation index: 16821
type: SIMPLE_ASSIGN
$DAEres1120 = if trafo_g5_1022.running.value then (-g05.terminal.i.re) - trafo_g5_1022.rTfoPu * (trafo_g5_1022.YPu.re * line_1021_1022b.terminal2.V.re + (-trafo_g5_1022.YPu.im) * line_1021_1022b.terminal2.V.im - trafo_g5_1022.terminal2.i.re) else trafo_g5_1022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16821};
  (data->simulationInfo->daeModeData->residualVars[1120]) /* $DAEres1120 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4080]] /* trafo_g5_1022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4079]] /* trafo_g5_1022.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16821;
}
/*
equation index: 16822
type: SIMPLE_ASSIGN
$DAEres1121 = if trafo_g5_1022.running.value then trafo_g5_1022.rTfoPu ^ 2.0 * g05.terminal.V.re - (trafo_g5_1022.rTfoPu * line_1021_1022b.terminal2.V.re + trafo_g5_1022.ZPu.im * g05.terminal.i.im - trafo_g5_1022.ZPu.re * g05.terminal.i.re) else -g05.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16822};
  modelica_real tmp3001;
  modelica_boolean tmp3002;
  modelica_real tmp3003;
  tmp3002 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp3002)
  {
    tmp3001 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */);
    tmp3003 = ((tmp3001 * tmp3001)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4081]] /* trafo_g5_1022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4082]] /* trafo_g5_1022.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */))));
  }
  else
  {
    tmp3003 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1121]) /* $DAEres1121 DAE_RESIDUAL_VAR */ = tmp3003;
  threadData->lastEquationSolved = 16822;
}
/*
equation index: 16823
type: SIMPLE_ASSIGN
$DAEres1126 = if trafo_g5_1022.running.value then trafo_g5_1022.rTfoPu ^ 2.0 * g05.terminal.V.im - (trafo_g5_1022.rTfoPu * line_1021_1022b.terminal2.V.im + (-trafo_g5_1022.ZPu.re) * g05.terminal.i.im - trafo_g5_1022.ZPu.im * g05.terminal.i.re) else -g05.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16823};
  modelica_real tmp3004;
  modelica_boolean tmp3005;
  modelica_real tmp3006;
  tmp3005 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp3005)
  {
    tmp3004 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */);
    tmp3006 = ((tmp3004 * tmp3004)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4083]] /* trafo_g5_1022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4082]] /* trafo_g5_1022.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4081]] /* trafo_g5_1022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */))));
  }
  else
  {
    tmp3006 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1126]) /* $DAEres1126 DAE_RESIDUAL_VAR */ = tmp3006;
  threadData->lastEquationSolved = 16823;
}
/*
equation index: 16824
type: SIMPLE_ASSIGN
trafo_g5_1022.U1Pu = if trafo_g5_1022.running.value then if g05.terminal.V.re == 0.0 and g05.terminal.V.im == 0.0 then 0.0 else (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16824};
  modelica_real tmp3007;
  modelica_real tmp3008;
  modelica_real tmp3009;
  modelica_boolean tmp3010;
  modelica_real tmp3011;
  modelica_boolean tmp3012;
  modelica_real tmp3013;
  tmp3012 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp3012)
  {
    tmp3010 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0));
    if(tmp3010)
    {
      tmp3011 = 0.0;
    }
    else
    {
      tmp3007 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
      tmp3008 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
      tmp3009 = (tmp3007 * tmp3007) + (tmp3008 * tmp3008);
      if(tmp3009 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3009, 0.5);
      }
      tmp3011 = sqrt(tmp3009);
    }
    tmp3013 = tmp3011;
  }
  else
  {
    tmp3013 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3410]] /* trafo_g5_1022.U1Pu variable */) = tmp3013;
  threadData->lastEquationSolved = 16824;
}
/*
equation index: 16825
type: SIMPLE_ASSIGN
trafo_g5_1022.U2Pu = if trafo_g5_1022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16825};
  modelica_real tmp3014;
  modelica_real tmp3015;
  modelica_real tmp3016;
  modelica_boolean tmp3017;
  modelica_real tmp3018;
  modelica_boolean tmp3019;
  modelica_real tmp3020;
  tmp3019 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp3019)
  {
    tmp3017 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp3017)
    {
      tmp3018 = 0.0;
    }
    else
    {
      tmp3014 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp3015 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp3016 = (tmp3014 * tmp3014) + (tmp3015 * tmp3015);
      if(tmp3016 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3016, 0.5);
      }
      tmp3018 = sqrt(tmp3016);
    }
    tmp3020 = tmp3018;
  }
  else
  {
    tmp3020 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3411]] /* trafo_g5_1022.U2Pu variable */) = tmp3020;
  threadData->lastEquationSolved = 16825;
}
/*
equation index: 16826
type: SIMPLE_ASSIGN
$whenCondition112 = not pre(trafo_g4_1021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16826};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* $whenCondition112 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */));
  threadData->lastEquationSolved = 16826;
}
/*
equation index: 16827
type: WHEN

when {} then
  trafo_g4_1021.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16827};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* $whenCondition112 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[15] /* $whenCondition112 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16827;
}
/*
equation index: 16829
type: SIMPLE_ASSIGN
$whenCondition114 = not trafo_g4_1021.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16829};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[17]] /* $whenCondition114 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */));
  threadData->lastEquationSolved = 16829;
}
/*
equation index: 16830
type: SIMPLE_ASSIGN
$whenCondition113 = trafo_g4_1021.running.value and not pre(trafo_g4_1021.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16830};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* $whenCondition113 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16830;
}
/*
equation index: 16831
type: WHEN

when {$whenCondition114} then
  trafo_g4_1021.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16831};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[17]] /* $whenCondition114 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[17] /* $whenCondition114 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[169]] /* trafo_g4_1021.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* $whenCondition113 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[16] /* $whenCondition113 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[169]] /* trafo_g4_1021.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16831;
}
/*
equation index: 16833
type: SIMPLE_ASSIGN
$DAEres350 = if trafo_g4_1021.running.value then (-g04.terminal.i.im) - trafo_g4_1021.rTfoPu * (trafo_g4_1021.YPu.re * line_1021_1022b.terminal1.V.im + trafo_g4_1021.YPu.im * line_1021_1022b.terminal1.V.re - trafo_g4_1021.terminal2.i.im) else trafo_g4_1021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16833};
  (data->simulationInfo->daeModeData->residualVars[350]) /* $DAEres350 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4071]] /* trafo_g4_1021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4070]] /* trafo_g4_1021.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16833;
}
/*
equation index: 16834
type: SIMPLE_ASSIGN
$DAEres356 = if trafo_g4_1021.running.value then (-g04.terminal.i.re) - trafo_g4_1021.rTfoPu * (trafo_g4_1021.YPu.re * line_1021_1022b.terminal1.V.re + (-trafo_g4_1021.YPu.im) * line_1021_1022b.terminal1.V.im - trafo_g4_1021.terminal2.i.re) else trafo_g4_1021.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16834};
  (data->simulationInfo->daeModeData->residualVars[356]) /* $DAEres356 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4071]] /* trafo_g4_1021.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4070]] /* trafo_g4_1021.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16834;
}
/*
equation index: 16835
type: SIMPLE_ASSIGN
$DAEres357 = if trafo_g4_1021.running.value then trafo_g4_1021.rTfoPu ^ 2.0 * g04.terminal.V.im - (trafo_g4_1021.rTfoPu * line_1021_1022b.terminal1.V.im + (-trafo_g4_1021.ZPu.re) * g04.terminal.i.im - trafo_g4_1021.ZPu.im * g04.terminal.i.re) else -g04.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16835};
  modelica_real tmp3021;
  modelica_boolean tmp3022;
  modelica_real tmp3023;
  tmp3022 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp3022)
  {
    tmp3021 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */);
    tmp3023 = ((tmp3021 * tmp3021)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4073]] /* trafo_g4_1021.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4072]] /* trafo_g4_1021.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */))));
  }
  else
  {
    tmp3023 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[357]) /* $DAEres357 DAE_RESIDUAL_VAR */ = tmp3023;
  threadData->lastEquationSolved = 16835;
}
/*
equation index: 16836
type: SIMPLE_ASSIGN
$DAEres360 = if trafo_g4_1021.running.value then trafo_g4_1021.rTfoPu ^ 2.0 * g04.terminal.V.re - (trafo_g4_1021.rTfoPu * line_1021_1022b.terminal1.V.re + trafo_g4_1021.ZPu.im * g04.terminal.i.im - trafo_g4_1021.ZPu.re * g04.terminal.i.re) else -g04.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16836};
  modelica_real tmp3024;
  modelica_boolean tmp3025;
  modelica_real tmp3026;
  tmp3025 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp3025)
  {
    tmp3024 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */);
    tmp3026 = ((tmp3024 * tmp3024)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4074]] /* trafo_g4_1021.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4072]] /* trafo_g4_1021.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4073]] /* trafo_g4_1021.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */))));
  }
  else
  {
    tmp3026 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[360]) /* $DAEres360 DAE_RESIDUAL_VAR */ = tmp3026;
  threadData->lastEquationSolved = 16836;
}
/*
equation index: 16837
type: SIMPLE_ASSIGN
trafo_g4_1021.U1Pu = if trafo_g4_1021.running.value then if g04.terminal.V.re == 0.0 and g04.terminal.V.im == 0.0 then 0.0 else (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16837};
  modelica_real tmp3027;
  modelica_real tmp3028;
  modelica_real tmp3029;
  modelica_boolean tmp3030;
  modelica_real tmp3031;
  modelica_boolean tmp3032;
  modelica_real tmp3033;
  tmp3032 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp3032)
  {
    tmp3030 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0));
    if(tmp3030)
    {
      tmp3031 = 0.0;
    }
    else
    {
      tmp3027 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
      tmp3028 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
      tmp3029 = (tmp3027 * tmp3027) + (tmp3028 * tmp3028);
      if(tmp3029 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3029, 0.5);
      }
      tmp3031 = sqrt(tmp3029);
    }
    tmp3033 = tmp3031;
  }
  else
  {
    tmp3033 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3402]] /* trafo_g4_1021.U1Pu variable */) = tmp3033;
  threadData->lastEquationSolved = 16837;
}
/*
equation index: 16838
type: SIMPLE_ASSIGN
trafo_g4_1021.U2Pu = if trafo_g4_1021.running.value then if line_1021_1022b.terminal1.V.re == 0.0 and line_1021_1022b.terminal1.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal1.V.re ^ 2.0 + line_1021_1022b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16838};
  modelica_real tmp3034;
  modelica_real tmp3035;
  modelica_real tmp3036;
  modelica_boolean tmp3037;
  modelica_real tmp3038;
  modelica_boolean tmp3039;
  modelica_real tmp3040;
  tmp3039 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp3039)
  {
    tmp3037 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0));
    if(tmp3037)
    {
      tmp3038 = 0.0;
    }
    else
    {
      tmp3034 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */);
      tmp3035 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */);
      tmp3036 = (tmp3034 * tmp3034) + (tmp3035 * tmp3035);
      if(tmp3036 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3036, 0.5);
      }
      tmp3038 = sqrt(tmp3036);
    }
    tmp3040 = tmp3038;
  }
  else
  {
    tmp3040 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3403]] /* trafo_g4_1021.U2Pu variable */) = tmp3040;
  threadData->lastEquationSolved = 16838;
}
/*
equation index: 16839
type: SIMPLE_ASSIGN
$whenCondition115 = not pre(trafo_g3_1014.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16839};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* $whenCondition115 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */));
  threadData->lastEquationSolved = 16839;
}
/*
equation index: 16840
type: WHEN

when {} then
  trafo_g3_1014.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16840};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* $whenCondition115 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[18] /* $whenCondition115 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16840;
}
/*
equation index: 16842
type: SIMPLE_ASSIGN
$whenCondition117 = not trafo_g3_1014.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16842};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[20]] /* $whenCondition117 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */));
  threadData->lastEquationSolved = 16842;
}
/*
equation index: 16843
type: SIMPLE_ASSIGN
$whenCondition116 = trafo_g3_1014.running.value and not pre(trafo_g3_1014.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16843};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[19]] /* $whenCondition116 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16843;
}
/*
equation index: 16844
type: WHEN

when {$whenCondition117} then
  trafo_g3_1014.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16844};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[20]] /* $whenCondition117 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[20] /* $whenCondition117 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[168]] /* trafo_g3_1014.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[19]] /* $whenCondition116 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[19] /* $whenCondition116 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[168]] /* trafo_g3_1014.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16844;
}
/*
equation index: 16846
type: SIMPLE_ASSIGN
$DAEres1073 = if trafo_g3_1014.running.value then (-g03.terminal.i.im) - trafo_g3_1014.rTfoPu * (trafo_g3_1014.YPu.re * line_1013_1014a.terminal2.V.im + trafo_g3_1014.YPu.im * line_1013_1014a.terminal2.V.re - trafo_g3_1014.terminal2.i.im) else trafo_g3_1014.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16846};
  (data->simulationInfo->daeModeData->residualVars[1073]) /* $DAEres1073 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4062]] /* trafo_g3_1014.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4061]] /* trafo_g3_1014.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16846;
}
/*
equation index: 16847
type: SIMPLE_ASSIGN
$DAEres1077 = if trafo_g3_1014.running.value then (-g03.terminal.i.re) - trafo_g3_1014.rTfoPu * (trafo_g3_1014.YPu.re * line_1013_1014a.terminal2.V.re + (-trafo_g3_1014.YPu.im) * line_1013_1014a.terminal2.V.im - trafo_g3_1014.terminal2.i.re) else trafo_g3_1014.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16847};
  (data->simulationInfo->daeModeData->residualVars[1077]) /* $DAEres1077 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4062]] /* trafo_g3_1014.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4061]] /* trafo_g3_1014.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16847;
}
/*
equation index: 16848
type: SIMPLE_ASSIGN
$DAEres1080 = if trafo_g3_1014.running.value then trafo_g3_1014.rTfoPu ^ 2.0 * g03.terminal.V.re - (trafo_g3_1014.rTfoPu * line_1013_1014a.terminal2.V.re + trafo_g3_1014.ZPu.im * g03.terminal.i.im - trafo_g3_1014.ZPu.re * g03.terminal.i.re) else -g03.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16848};
  modelica_real tmp3041;
  modelica_boolean tmp3042;
  modelica_real tmp3043;
  tmp3042 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp3042)
  {
    tmp3041 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */);
    tmp3043 = ((tmp3041 * tmp3041)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4063]] /* trafo_g3_1014.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4064]] /* trafo_g3_1014.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */))));
  }
  else
  {
    tmp3043 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1080]) /* $DAEres1080 DAE_RESIDUAL_VAR */ = tmp3043;
  threadData->lastEquationSolved = 16848;
}
/*
equation index: 16849
type: SIMPLE_ASSIGN
$DAEres1083 = if trafo_g3_1014.running.value then trafo_g3_1014.rTfoPu ^ 2.0 * g03.terminal.V.im - (trafo_g3_1014.rTfoPu * line_1013_1014a.terminal2.V.im + (-trafo_g3_1014.ZPu.re) * g03.terminal.i.im - trafo_g3_1014.ZPu.im * g03.terminal.i.re) else -g03.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16849};
  modelica_real tmp3044;
  modelica_boolean tmp3045;
  modelica_real tmp3046;
  tmp3045 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp3045)
  {
    tmp3044 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */);
    tmp3046 = ((tmp3044 * tmp3044)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4065]] /* trafo_g3_1014.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4064]] /* trafo_g3_1014.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4063]] /* trafo_g3_1014.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */))));
  }
  else
  {
    tmp3046 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1083]) /* $DAEres1083 DAE_RESIDUAL_VAR */ = tmp3046;
  threadData->lastEquationSolved = 16849;
}
/*
equation index: 16850
type: SIMPLE_ASSIGN
trafo_g3_1014.U1Pu = if trafo_g3_1014.running.value then if g03.terminal.V.re == 0.0 and g03.terminal.V.im == 0.0 then 0.0 else (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16850};
  modelica_real tmp3047;
  modelica_real tmp3048;
  modelica_real tmp3049;
  modelica_boolean tmp3050;
  modelica_real tmp3051;
  modelica_boolean tmp3052;
  modelica_real tmp3053;
  tmp3052 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp3052)
  {
    tmp3050 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0));
    if(tmp3050)
    {
      tmp3051 = 0.0;
    }
    else
    {
      tmp3047 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
      tmp3048 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
      tmp3049 = (tmp3047 * tmp3047) + (tmp3048 * tmp3048);
      if(tmp3049 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3049, 0.5);
      }
      tmp3051 = sqrt(tmp3049);
    }
    tmp3053 = tmp3051;
  }
  else
  {
    tmp3053 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3394]] /* trafo_g3_1014.U1Pu variable */) = tmp3053;
  threadData->lastEquationSolved = 16850;
}
/*
equation index: 16851
type: SIMPLE_ASSIGN
trafo_g3_1014.U2Pu = if trafo_g3_1014.running.value then if line_1013_1014a.terminal2.V.re == 0.0 and line_1013_1014a.terminal2.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal2.V.re ^ 2.0 + line_1013_1014a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16851};
  modelica_real tmp3054;
  modelica_real tmp3055;
  modelica_real tmp3056;
  modelica_boolean tmp3057;
  modelica_real tmp3058;
  modelica_boolean tmp3059;
  modelica_real tmp3060;
  tmp3059 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */);
  if(tmp3059)
  {
    tmp3057 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0));
    if(tmp3057)
    {
      tmp3058 = 0.0;
    }
    else
    {
      tmp3054 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */);
      tmp3055 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */);
      tmp3056 = (tmp3054 * tmp3054) + (tmp3055 * tmp3055);
      if(tmp3056 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3056, 0.5);
      }
      tmp3058 = sqrt(tmp3056);
    }
    tmp3060 = tmp3058;
  }
  else
  {
    tmp3060 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* trafo_g3_1014.U2Pu variable */) = tmp3060;
  threadData->lastEquationSolved = 16851;
}
/*
equation index: 16852
type: SIMPLE_ASSIGN
$whenCondition118 = not pre(trafo_g2_1013.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16852};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[21]] /* $whenCondition118 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 16852;
}
/*
equation index: 16853
type: WHEN

when {} then
  trafo_g2_1013.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16853};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[21]] /* $whenCondition118 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[21] /* $whenCondition118 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16853;
}
/*
equation index: 16855
type: SIMPLE_ASSIGN
$whenCondition120 = not trafo_g2_1013.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16855};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[24]] /* $whenCondition120 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 16855;
}
/*
equation index: 16856
type: SIMPLE_ASSIGN
$whenCondition119 = trafo_g2_1013.running.value and not pre(trafo_g2_1013.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16856};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[22]] /* $whenCondition119 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16856;
}
/*
equation index: 16857
type: WHEN

when {$whenCondition120} then
  trafo_g2_1013.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16857};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[24]] /* $whenCondition120 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[24] /* $whenCondition120 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[167]] /* trafo_g2_1013.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[22]] /* $whenCondition119 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[22] /* $whenCondition119 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[167]] /* trafo_g2_1013.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16857;
}
/*
equation index: 16859
type: SIMPLE_ASSIGN
$DAEres1061 = if trafo_g2_1013.running.value then (-g02.terminal.i.im) - trafo_g2_1013.rTfoPu * (trafo_g2_1013.YPu.re * line_1013_1014a.terminal1.V.im + trafo_g2_1013.YPu.im * line_1013_1014a.terminal1.V.re - trafo_g2_1013.terminal2.i.im) else trafo_g2_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16859};
  (data->simulationInfo->daeModeData->residualVars[1061]) /* $DAEres1061 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4053]] /* trafo_g2_1013.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4052]] /* trafo_g2_1013.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16859;
}
/*
equation index: 16860
type: SIMPLE_ASSIGN
$DAEres1064 = if trafo_g2_1013.running.value then (-g02.terminal.i.re) - trafo_g2_1013.rTfoPu * (trafo_g2_1013.YPu.re * line_1013_1014a.terminal1.V.re + (-trafo_g2_1013.YPu.im) * line_1013_1014a.terminal1.V.im - trafo_g2_1013.terminal2.i.re) else trafo_g2_1013.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16860};
  (data->simulationInfo->daeModeData->residualVars[1064]) /* $DAEres1064 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4053]] /* trafo_g2_1013.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4052]] /* trafo_g2_1013.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16860;
}
/*
equation index: 16861
type: SIMPLE_ASSIGN
$DAEres1065 = if trafo_g2_1013.running.value then trafo_g2_1013.rTfoPu ^ 2.0 * g02.terminal.V.re - (trafo_g2_1013.rTfoPu * line_1013_1014a.terminal1.V.re + trafo_g2_1013.ZPu.im * g02.terminal.i.im - trafo_g2_1013.ZPu.re * g02.terminal.i.re) else -g02.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16861};
  modelica_real tmp3061;
  modelica_boolean tmp3062;
  modelica_real tmp3063;
  tmp3062 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp3062)
  {
    tmp3061 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */);
    tmp3063 = ((tmp3061 * tmp3061)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4054]] /* trafo_g2_1013.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4055]] /* trafo_g2_1013.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */))));
  }
  else
  {
    tmp3063 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1065]) /* $DAEres1065 DAE_RESIDUAL_VAR */ = tmp3063;
  threadData->lastEquationSolved = 16861;
}
/*
equation index: 16862
type: SIMPLE_ASSIGN
$DAEres1068 = if trafo_g2_1013.running.value then trafo_g2_1013.rTfoPu ^ 2.0 * g02.terminal.V.im - (trafo_g2_1013.rTfoPu * line_1013_1014a.terminal1.V.im + (-trafo_g2_1013.ZPu.re) * g02.terminal.i.im - trafo_g2_1013.ZPu.im * g02.terminal.i.re) else -g02.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16862};
  modelica_real tmp3064;
  modelica_boolean tmp3065;
  modelica_real tmp3066;
  tmp3065 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp3065)
  {
    tmp3064 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */);
    tmp3066 = ((tmp3064 * tmp3064)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4056]] /* trafo_g2_1013.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4055]] /* trafo_g2_1013.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4054]] /* trafo_g2_1013.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */))));
  }
  else
  {
    tmp3066 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1068]) /* $DAEres1068 DAE_RESIDUAL_VAR */ = tmp3066;
  threadData->lastEquationSolved = 16862;
}
/*
equation index: 16863
type: SIMPLE_ASSIGN
trafo_g2_1013.U1Pu = if trafo_g2_1013.running.value then if g02.terminal.V.re == 0.0 and g02.terminal.V.im == 0.0 then 0.0 else (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16863};
  modelica_real tmp3067;
  modelica_real tmp3068;
  modelica_real tmp3069;
  modelica_boolean tmp3070;
  modelica_real tmp3071;
  modelica_boolean tmp3072;
  modelica_real tmp3073;
  tmp3072 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp3072)
  {
    tmp3070 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0));
    if(tmp3070)
    {
      tmp3071 = 0.0;
    }
    else
    {
      tmp3067 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
      tmp3068 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
      tmp3069 = (tmp3067 * tmp3067) + (tmp3068 * tmp3068);
      if(tmp3069 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3069, 0.5);
      }
      tmp3071 = sqrt(tmp3069);
    }
    tmp3073 = tmp3071;
  }
  else
  {
    tmp3073 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3386]] /* trafo_g2_1013.U1Pu variable */) = tmp3073;
  threadData->lastEquationSolved = 16863;
}
/*
equation index: 16864
type: SIMPLE_ASSIGN
trafo_g2_1013.U2Pu = if trafo_g2_1013.running.value then if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16864};
  modelica_real tmp3074;
  modelica_real tmp3075;
  modelica_real tmp3076;
  modelica_boolean tmp3077;
  modelica_real tmp3078;
  modelica_boolean tmp3079;
  modelica_real tmp3080;
  tmp3079 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */);
  if(tmp3079)
  {
    tmp3077 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp3077)
    {
      tmp3078 = 0.0;
    }
    else
    {
      tmp3074 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
      tmp3075 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
      tmp3076 = (tmp3074 * tmp3074) + (tmp3075 * tmp3075);
      if(tmp3076 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3076, 0.5);
      }
      tmp3078 = sqrt(tmp3076);
    }
    tmp3080 = tmp3078;
  }
  else
  {
    tmp3080 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3387]] /* trafo_g2_1013.U2Pu variable */) = tmp3080;
  threadData->lastEquationSolved = 16864;
}
/*
equation index: 16865
type: SIMPLE_ASSIGN
$whenCondition121 = not pre(trafo_g1_1012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16865};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[25]] /* $whenCondition121 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16865;
}
/*
equation index: 16866
type: WHEN

when {} then
  trafo_g1_1012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16866};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[25]] /* $whenCondition121 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[25] /* $whenCondition121 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16866;
}
/*
equation index: 16868
type: SIMPLE_ASSIGN
$whenCondition123 = not trafo_g1_1012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16868};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[27]] /* $whenCondition123 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16868;
}
/*
equation index: 16869
type: SIMPLE_ASSIGN
$whenCondition122 = trafo_g1_1012.running.value and not pre(trafo_g1_1012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16869};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[26]] /* $whenCondition122 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16869;
}
/*
equation index: 16870
type: WHEN

when {$whenCondition123} then
  trafo_g1_1012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16870};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[27]] /* $whenCondition123 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[27] /* $whenCondition123 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[165]] /* trafo_g1_1012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[26]] /* $whenCondition122 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[26] /* $whenCondition122 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[165]] /* trafo_g1_1012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16870;
}
/*
equation index: 16872
type: SIMPLE_ASSIGN
$DAEres439 = if trafo_g1_1012.running.value then (-g01.terminal.i.im) - trafo_g1_1012.rTfoPu * (trafo_g1_1012.YPu.re * line_1012_1014a.terminal1.V.im + trafo_g1_1012.YPu.im * line_1012_1014a.terminal1.V.re - trafo_g1_1012.terminal2.i.im) else trafo_g1_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16872};
  (data->simulationInfo->daeModeData->residualVars[439]) /* $DAEres439 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4035]] /* trafo_g1_1012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4034]] /* trafo_g1_1012.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16872;
}
/*
equation index: 16873
type: SIMPLE_ASSIGN
$DAEres1088 = if trafo_g1_1012.running.value then (-g01.terminal.i.re) - trafo_g1_1012.rTfoPu * (trafo_g1_1012.YPu.re * line_1012_1014a.terminal1.V.re + (-trafo_g1_1012.YPu.im) * line_1012_1014a.terminal1.V.im - trafo_g1_1012.terminal2.i.re) else trafo_g1_1012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16873};
  (data->simulationInfo->daeModeData->residualVars[1088]) /* $DAEres1088 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4035]] /* trafo_g1_1012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4034]] /* trafo_g1_1012.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16873;
}
/*
equation index: 16874
type: SIMPLE_ASSIGN
$DAEres1089 = if trafo_g1_1012.running.value then trafo_g1_1012.rTfoPu ^ 2.0 * g01.terminal.V.re - (trafo_g1_1012.rTfoPu * line_1012_1014a.terminal1.V.re + trafo_g1_1012.ZPu.im * g01.terminal.i.im - trafo_g1_1012.ZPu.re * g01.terminal.i.re) else -g01.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16874};
  modelica_real tmp3081;
  modelica_boolean tmp3082;
  modelica_real tmp3083;
  tmp3082 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp3082)
  {
    tmp3081 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */);
    tmp3083 = ((tmp3081 * tmp3081)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4036]] /* trafo_g1_1012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4037]] /* trafo_g1_1012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */))));
  }
  else
  {
    tmp3083 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1089]) /* $DAEres1089 DAE_RESIDUAL_VAR */ = tmp3083;
  threadData->lastEquationSolved = 16874;
}
/*
equation index: 16875
type: SIMPLE_ASSIGN
$DAEres1094 = if trafo_g1_1012.running.value then trafo_g1_1012.rTfoPu ^ 2.0 * g01.terminal.V.im - (trafo_g1_1012.rTfoPu * line_1012_1014a.terminal1.V.im + (-trafo_g1_1012.ZPu.re) * g01.terminal.i.im - trafo_g1_1012.ZPu.im * g01.terminal.i.re) else -g01.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16875};
  modelica_real tmp3084;
  modelica_boolean tmp3085;
  modelica_real tmp3086;
  tmp3085 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp3085)
  {
    tmp3084 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */);
    tmp3086 = ((tmp3084 * tmp3084)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4038]] /* trafo_g1_1012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4037]] /* trafo_g1_1012.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4036]] /* trafo_g1_1012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */))));
  }
  else
  {
    tmp3086 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1094]) /* $DAEres1094 DAE_RESIDUAL_VAR */ = tmp3086;
  threadData->lastEquationSolved = 16875;
}
/*
equation index: 16876
type: SIMPLE_ASSIGN
trafo_g1_1012.U1Pu = if trafo_g1_1012.running.value then if g01.terminal.V.re == 0.0 and g01.terminal.V.im == 0.0 then 0.0 else (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16876};
  modelica_real tmp3087;
  modelica_real tmp3088;
  modelica_real tmp3089;
  modelica_boolean tmp3090;
  modelica_real tmp3091;
  modelica_boolean tmp3092;
  modelica_real tmp3093;
  tmp3092 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp3092)
  {
    tmp3090 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0));
    if(tmp3090)
    {
      tmp3091 = 0.0;
    }
    else
    {
      tmp3087 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
      tmp3088 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
      tmp3089 = (tmp3087 * tmp3087) + (tmp3088 * tmp3088);
      if(tmp3089 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3089, 0.5);
      }
      tmp3091 = sqrt(tmp3089);
    }
    tmp3093 = tmp3091;
  }
  else
  {
    tmp3093 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3368]] /* trafo_g1_1012.U1Pu variable */) = tmp3093;
  threadData->lastEquationSolved = 16876;
}
/*
equation index: 16877
type: SIMPLE_ASSIGN
trafo_g1_1012.U2Pu = if trafo_g1_1012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16877};
  modelica_real tmp3094;
  modelica_real tmp3095;
  modelica_real tmp3096;
  modelica_boolean tmp3097;
  modelica_real tmp3098;
  modelica_boolean tmp3099;
  modelica_real tmp3100;
  tmp3099 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */);
  if(tmp3099)
  {
    tmp3097 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp3097)
    {
      tmp3098 = 0.0;
    }
    else
    {
      tmp3094 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp3095 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp3096 = (tmp3094 * tmp3094) + (tmp3095 * tmp3095);
      if(tmp3096 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3096, 0.5);
      }
      tmp3098 = sqrt(tmp3096);
    }
    tmp3100 = tmp3098;
  }
  else
  {
    tmp3100 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3369]] /* trafo_g1_1012.U2Pu variable */) = tmp3100;
  threadData->lastEquationSolved = 16877;
}
/*
equation index: 16878
type: SIMPLE_ASSIGN
$whenCondition124 = not pre(trafo_2031_4031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16878};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[28]] /* $whenCondition124 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 16878;
}
/*
equation index: 16879
type: WHEN

when {} then
  trafo_2031_4031.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16879};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[28]] /* $whenCondition124 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[28] /* $whenCondition124 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16879;
}
/*
equation index: 16881
type: SIMPLE_ASSIGN
$whenCondition126 = not trafo_2031_4031.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16881};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[30]] /* $whenCondition126 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 16881;
}
/*
equation index: 16882
type: SIMPLE_ASSIGN
$whenCondition125 = trafo_2031_4031.running.value and not pre(trafo_2031_4031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16882};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[29]] /* $whenCondition125 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16882;
}
/*
equation index: 16883
type: WHEN

when {$whenCondition126} then
  trafo_2031_4031.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16883};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[30]] /* $whenCondition126 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[30] /* $whenCondition126 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[136]] /* trafo_2031_4031.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[29]] /* $whenCondition125 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[29] /* $whenCondition125 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[136]] /* trafo_2031_4031.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16883;
}
/*
equation index: 16885
type: SIMPLE_ASSIGN
$DAEres250 = if trafo_2031_4031.running.value then trafo_2031_4031.terminal1.i.im - trafo_2031_4031.rTfoPu * (trafo_2031_4031.YPu.re * line_4031_4041b.terminal1.V.im + trafo_2031_4031.YPu.im * line_4031_4041b.terminal1.V.re - trafo_2031_4031.terminal2.i.im) else trafo_2031_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16885};
  (data->simulationInfo->daeModeData->residualVars[250]) /* $DAEres250 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3774]] /* trafo_2031_4031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3773]] /* trafo_2031_4031.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16885;
}
/*
equation index: 16886
type: SIMPLE_ASSIGN
$DAEres305 = if trafo_2031_4031.running.value then trafo_2031_4031.terminal1.i.re - trafo_2031_4031.rTfoPu * (trafo_2031_4031.YPu.re * line_4031_4041b.terminal1.V.re + (-trafo_2031_4031.YPu.im) * line_4031_4041b.terminal1.V.im - trafo_2031_4031.terminal2.i.re) else trafo_2031_4031.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16886};
  (data->simulationInfo->daeModeData->residualVars[305]) /* $DAEres305 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3774]] /* trafo_2031_4031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3773]] /* trafo_2031_4031.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16886;
}
/*
equation index: 16887
type: SIMPLE_ASSIGN
$DAEres306 = if trafo_2031_4031.running.value then trafo_2031_4031.rTfoPu ^ 2.0 * line_2031_2032b.terminal1.V.im - (trafo_2031_4031.rTfoPu * line_4031_4041b.terminal1.V.im + trafo_2031_4031.ZPu.re * trafo_2031_4031.terminal1.i.im + trafo_2031_4031.ZPu.im * trafo_2031_4031.terminal1.i.re) else trafo_2031_4031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16887};
  modelica_real tmp3101;
  modelica_boolean tmp3102;
  modelica_real tmp3103;
  tmp3102 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp3102)
  {
    tmp3101 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */);
    tmp3103 = ((tmp3101 * tmp3101)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3776]] /* trafo_2031_4031.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3775]] /* trafo_2031_4031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)));
  }
  else
  {
    tmp3103 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[306]) /* $DAEres306 DAE_RESIDUAL_VAR */ = tmp3103;
  threadData->lastEquationSolved = 16887;
}
/*
equation index: 16888
type: SIMPLE_ASSIGN
$DAEres307 = if trafo_2031_4031.running.value then trafo_2031_4031.rTfoPu ^ 2.0 * line_2031_2032b.terminal1.V.re - (trafo_2031_4031.rTfoPu * line_4031_4041b.terminal1.V.re + trafo_2031_4031.ZPu.re * trafo_2031_4031.terminal1.i.re - trafo_2031_4031.ZPu.im * trafo_2031_4031.terminal1.i.im) else trafo_2031_4031.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16888};
  modelica_real tmp3104;
  modelica_boolean tmp3105;
  modelica_real tmp3106;
  tmp3105 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp3105)
  {
    tmp3104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */);
    tmp3106 = ((tmp3104 * tmp3104)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3777]] /* trafo_2031_4031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3776]] /* trafo_2031_4031.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3775]] /* trafo_2031_4031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */))));
  }
  else
  {
    tmp3106 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[307]) /* $DAEres307 DAE_RESIDUAL_VAR */ = tmp3106;
  threadData->lastEquationSolved = 16888;
}
/*
equation index: 16889
type: SIMPLE_ASSIGN
trafo_2031_4031.U1Pu = if trafo_2031_4031.running.value then if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16889};
  modelica_real tmp3107;
  modelica_real tmp3108;
  modelica_real tmp3109;
  modelica_boolean tmp3110;
  modelica_real tmp3111;
  modelica_boolean tmp3112;
  modelica_real tmp3113;
  tmp3112 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp3112)
  {
    tmp3110 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
    if(tmp3110)
    {
      tmp3111 = 0.0;
    }
    else
    {
      tmp3107 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
      tmp3108 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
      tmp3109 = (tmp3107 * tmp3107) + (tmp3108 * tmp3108);
      if(tmp3109 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3109, 0.5);
      }
      tmp3111 = sqrt(tmp3109);
    }
    tmp3113 = tmp3111;
  }
  else
  {
    tmp3113 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3098]] /* trafo_2031_4031.U1Pu variable */) = tmp3113;
  threadData->lastEquationSolved = 16889;
}
/*
equation index: 16890
type: SIMPLE_ASSIGN
trafo_2031_4031.U2Pu = if trafo_2031_4031.running.value then if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16890};
  modelica_real tmp3114;
  modelica_real tmp3115;
  modelica_real tmp3116;
  modelica_boolean tmp3117;
  modelica_real tmp3118;
  modelica_boolean tmp3119;
  modelica_real tmp3120;
  tmp3119 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp3119)
  {
    tmp3117 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
    if(tmp3117)
    {
      tmp3118 = 0.0;
    }
    else
    {
      tmp3114 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
      tmp3115 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
      tmp3116 = (tmp3114 * tmp3114) + (tmp3115 * tmp3115);
      if(tmp3116 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3116, 0.5);
      }
      tmp3118 = sqrt(tmp3116);
    }
    tmp3120 = tmp3118;
  }
  else
  {
    tmp3120 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3099]] /* trafo_2031_4031.U2Pu variable */) = tmp3120;
  threadData->lastEquationSolved = 16890;
}
/*
equation index: 16891
type: SIMPLE_ASSIGN
$whenCondition127 = not pre(trafo_1045_4045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16891};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[31]] /* $whenCondition127 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 16891;
}
/*
equation index: 16892
type: WHEN

when {} then
  trafo_1045_4045b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16892};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[31]] /* $whenCondition127 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[31] /* $whenCondition127 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16892;
}
/*
equation index: 16894
type: SIMPLE_ASSIGN
$whenCondition129 = not trafo_1045_4045b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16894};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[33]] /* $whenCondition129 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 16894;
}
/*
equation index: 16895
type: SIMPLE_ASSIGN
$whenCondition128 = trafo_1045_4045b.running.value and not pre(trafo_1045_4045b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16895};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[32]] /* $whenCondition128 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16895;
}
/*
equation index: 16896
type: WHEN

when {$whenCondition129} then
  trafo_1045_4045b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16896};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[33]] /* $whenCondition129 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[33] /* $whenCondition129 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[131]] /* trafo_1045_4045b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[32]] /* $whenCondition128 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[32] /* $whenCondition128 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[131]] /* trafo_1045_4045b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16896;
}
/*
equation index: 16898
type: SIMPLE_ASSIGN
$DAEres970 = if trafo_1045_4045b.running.value then trafo_1045_4045b.terminal1.i.im - trafo_1045_4045b.rTfoPu * (trafo_1045_4045b.YPu.re * line_4045_4051b.terminal1.V.im + trafo_1045_4045b.YPu.im * line_4045_4051b.terminal1.V.re - trafo_1045_4045b.terminal2.i.im) else trafo_1045_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16898};
  (data->simulationInfo->daeModeData->residualVars[970]) /* $DAEres970 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3729]] /* trafo_1045_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3728]] /* trafo_1045_4045b.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16898;
}
/*
equation index: 16899
type: SIMPLE_ASSIGN
$DAEres1175 = if trafo_1045_4045b.running.value then trafo_1045_4045b.terminal1.i.re - trafo_1045_4045b.rTfoPu * (trafo_1045_4045b.YPu.re * line_4045_4051b.terminal1.V.re + (-trafo_1045_4045b.YPu.im) * line_4045_4051b.terminal1.V.im - trafo_1045_4045b.terminal2.i.re) else trafo_1045_4045b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16899};
  (data->simulationInfo->daeModeData->residualVars[1175]) /* $DAEres1175 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3729]] /* trafo_1045_4045b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3728]] /* trafo_1045_4045b.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16899;
}
/*
equation index: 16900
type: SIMPLE_ASSIGN
$DAEres1176 = if trafo_1045_4045b.running.value then trafo_1045_4045b.rTfoPu ^ 2.0 * line_1042_1045.terminal2.V.re - (trafo_1045_4045b.rTfoPu * line_4045_4051b.terminal1.V.re + trafo_1045_4045b.ZPu.re * trafo_1045_4045b.terminal1.i.re - trafo_1045_4045b.ZPu.im * trafo_1045_4045b.terminal1.i.im) else trafo_1045_4045b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16900};
  modelica_real tmp3121;
  modelica_boolean tmp3122;
  modelica_real tmp3123;
  tmp3122 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp3122)
  {
    tmp3121 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */);
    tmp3123 = ((tmp3121 * tmp3121)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3731]] /* trafo_1045_4045b.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3730]] /* trafo_1045_4045b.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */))));
  }
  else
  {
    tmp3123 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1176]) /* $DAEres1176 DAE_RESIDUAL_VAR */ = tmp3123;
  threadData->lastEquationSolved = 16900;
}
/*
equation index: 16901
type: SIMPLE_ASSIGN
$DAEres1177 = if trafo_1045_4045b.running.value then trafo_1045_4045b.rTfoPu ^ 2.0 * line_1042_1045.terminal2.V.im - (trafo_1045_4045b.rTfoPu * line_4045_4051b.terminal1.V.im + trafo_1045_4045b.ZPu.re * trafo_1045_4045b.terminal1.i.im + trafo_1045_4045b.ZPu.im * trafo_1045_4045b.terminal1.i.re) else trafo_1045_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16901};
  modelica_real tmp3124;
  modelica_boolean tmp3125;
  modelica_real tmp3126;
  tmp3125 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp3125)
  {
    tmp3124 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */);
    tmp3126 = ((tmp3124 * tmp3124)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3732]] /* trafo_1045_4045b.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3731]] /* trafo_1045_4045b.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3730]] /* trafo_1045_4045b.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)));
  }
  else
  {
    tmp3126 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1177]) /* $DAEres1177 DAE_RESIDUAL_VAR */ = tmp3126;
  threadData->lastEquationSolved = 16901;
}
/*
equation index: 16902
type: SIMPLE_ASSIGN
trafo_1045_4045b.U2Pu = if trafo_1045_4045b.running.value then if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16902};
  modelica_real tmp3127;
  modelica_real tmp3128;
  modelica_real tmp3129;
  modelica_boolean tmp3130;
  modelica_real tmp3131;
  modelica_boolean tmp3132;
  modelica_real tmp3133;
  tmp3132 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp3132)
  {
    tmp3130 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
    if(tmp3130)
    {
      tmp3131 = 0.0;
    }
    else
    {
      tmp3127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
      tmp3128 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
      tmp3129 = (tmp3127 * tmp3127) + (tmp3128 * tmp3128);
      if(tmp3129 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3129, 0.5);
      }
      tmp3131 = sqrt(tmp3129);
    }
    tmp3133 = tmp3131;
  }
  else
  {
    tmp3133 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3049]] /* trafo_1045_4045b.U2Pu variable */) = tmp3133;
  threadData->lastEquationSolved = 16902;
}
/*
equation index: 16903
type: SIMPLE_ASSIGN
trafo_1045_4045b.U1Pu = if trafo_1045_4045b.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16903};
  modelica_real tmp3134;
  modelica_real tmp3135;
  modelica_real tmp3136;
  modelica_boolean tmp3137;
  modelica_real tmp3138;
  modelica_boolean tmp3139;
  modelica_real tmp3140;
  tmp3139 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */);
  if(tmp3139)
  {
    tmp3137 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp3137)
    {
      tmp3138 = 0.0;
    }
    else
    {
      tmp3134 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp3135 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp3136 = (tmp3134 * tmp3134) + (tmp3135 * tmp3135);
      if(tmp3136 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3136, 0.5);
      }
      tmp3138 = sqrt(tmp3136);
    }
    tmp3140 = tmp3138;
  }
  else
  {
    tmp3140 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* trafo_1045_4045b.U1Pu variable */) = tmp3140;
  threadData->lastEquationSolved = 16903;
}
/*
equation index: 16904
type: SIMPLE_ASSIGN
$whenCondition130 = not pre(trafo_1045_4045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16904};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[35]] /* $whenCondition130 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 16904;
}
/*
equation index: 16905
type: WHEN

when {} then
  trafo_1045_4045a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16905};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[35]] /* $whenCondition130 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[35] /* $whenCondition130 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16905;
}
/*
equation index: 16907
type: SIMPLE_ASSIGN
$whenCondition132 = not trafo_1045_4045a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16907};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[37]] /* $whenCondition132 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 16907;
}
/*
equation index: 16908
type: SIMPLE_ASSIGN
$whenCondition131 = trafo_1045_4045a.running.value and not pre(trafo_1045_4045a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16908};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[36]] /* $whenCondition131 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16908;
}
/*
equation index: 16909
type: WHEN

when {$whenCondition132} then
  trafo_1045_4045a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16909};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[37]] /* $whenCondition132 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[37] /* $whenCondition132 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[130]] /* trafo_1045_4045a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[36]] /* $whenCondition131 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[36] /* $whenCondition131 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[130]] /* trafo_1045_4045a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16909;
}
/*
equation index: 16911
type: SIMPLE_ASSIGN
$DAEres973 = if trafo_1045_4045a.running.value then trafo_1045_4045a.terminal1.i.im - trafo_1045_4045a.rTfoPu * (trafo_1045_4045a.YPu.re * line_4045_4051b.terminal1.V.im + trafo_1045_4045a.YPu.im * line_4045_4051b.terminal1.V.re - trafo_1045_4045a.terminal2.i.im) else trafo_1045_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16911};
  (data->simulationInfo->daeModeData->residualVars[973]) /* $DAEres973 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3720]] /* trafo_1045_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3719]] /* trafo_1045_4045a.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16911;
}
/*
equation index: 16912
type: SIMPLE_ASSIGN
$DAEres975 = if trafo_1045_4045a.running.value then trafo_1045_4045a.terminal1.i.re - trafo_1045_4045a.rTfoPu * (trafo_1045_4045a.YPu.re * line_4045_4051b.terminal1.V.re + (-trafo_1045_4045a.YPu.im) * line_4045_4051b.terminal1.V.im - trafo_1045_4045a.terminal2.i.re) else trafo_1045_4045a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16912};
  (data->simulationInfo->daeModeData->residualVars[975]) /* $DAEres975 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3720]] /* trafo_1045_4045a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3719]] /* trafo_1045_4045a.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16912;
}
/*
equation index: 16913
type: SIMPLE_ASSIGN
$DAEres976 = if trafo_1045_4045a.running.value then trafo_1045_4045a.rTfoPu ^ 2.0 * line_1042_1045.terminal2.V.im - (trafo_1045_4045a.rTfoPu * line_4045_4051b.terminal1.V.im + trafo_1045_4045a.ZPu.re * trafo_1045_4045a.terminal1.i.im + trafo_1045_4045a.ZPu.im * trafo_1045_4045a.terminal1.i.re) else trafo_1045_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16913};
  modelica_real tmp3141;
  modelica_boolean tmp3142;
  modelica_real tmp3143;
  tmp3142 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp3142)
  {
    tmp3141 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */);
    tmp3143 = ((tmp3141 * tmp3141)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3722]] /* trafo_1045_4045a.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3721]] /* trafo_1045_4045a.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)));
  }
  else
  {
    tmp3143 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[976]) /* $DAEres976 DAE_RESIDUAL_VAR */ = tmp3143;
  threadData->lastEquationSolved = 16913;
}
/*
equation index: 16914
type: SIMPLE_ASSIGN
$DAEres977 = if trafo_1045_4045a.running.value then trafo_1045_4045a.rTfoPu ^ 2.0 * line_1042_1045.terminal2.V.re - (trafo_1045_4045a.rTfoPu * line_4045_4051b.terminal1.V.re + trafo_1045_4045a.ZPu.re * trafo_1045_4045a.terminal1.i.re - trafo_1045_4045a.ZPu.im * trafo_1045_4045a.terminal1.i.im) else trafo_1045_4045a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16914};
  modelica_real tmp3144;
  modelica_boolean tmp3145;
  modelica_real tmp3146;
  tmp3145 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp3145)
  {
    tmp3144 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */);
    tmp3146 = ((tmp3144 * tmp3144)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3723]] /* trafo_1045_4045a.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3722]] /* trafo_1045_4045a.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3721]] /* trafo_1045_4045a.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */))));
  }
  else
  {
    tmp3146 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[977]) /* $DAEres977 DAE_RESIDUAL_VAR */ = tmp3146;
  threadData->lastEquationSolved = 16914;
}
/*
equation index: 16915
type: SIMPLE_ASSIGN
trafo_1045_4045a.U2Pu = if trafo_1045_4045a.running.value then if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16915};
  modelica_real tmp3147;
  modelica_real tmp3148;
  modelica_real tmp3149;
  modelica_boolean tmp3150;
  modelica_real tmp3151;
  modelica_boolean tmp3152;
  modelica_real tmp3153;
  tmp3152 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp3152)
  {
    tmp3150 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
    if(tmp3150)
    {
      tmp3151 = 0.0;
    }
    else
    {
      tmp3147 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
      tmp3148 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
      tmp3149 = (tmp3147 * tmp3147) + (tmp3148 * tmp3148);
      if(tmp3149 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3149, 0.5);
      }
      tmp3151 = sqrt(tmp3149);
    }
    tmp3153 = tmp3151;
  }
  else
  {
    tmp3153 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3039]] /* trafo_1045_4045a.U2Pu variable */) = tmp3153;
  threadData->lastEquationSolved = 16915;
}
/*
equation index: 16916
type: SIMPLE_ASSIGN
trafo_1045_4045a.U1Pu = if trafo_1045_4045a.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16916};
  modelica_real tmp3154;
  modelica_real tmp3155;
  modelica_real tmp3156;
  modelica_boolean tmp3157;
  modelica_real tmp3158;
  modelica_boolean tmp3159;
  modelica_real tmp3160;
  tmp3159 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */);
  if(tmp3159)
  {
    tmp3157 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp3157)
    {
      tmp3158 = 0.0;
    }
    else
    {
      tmp3154 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp3155 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp3156 = (tmp3154 * tmp3154) + (tmp3155 * tmp3155);
      if(tmp3156 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3156, 0.5);
      }
      tmp3158 = sqrt(tmp3156);
    }
    tmp3160 = tmp3158;
  }
  else
  {
    tmp3160 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3038]] /* trafo_1045_4045a.U1Pu variable */) = tmp3160;
  threadData->lastEquationSolved = 16916;
}
/*
equation index: 16917
type: SIMPLE_ASSIGN
$whenCondition133 = not pre(trafo_1044_4044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16917};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[38]] /* $whenCondition133 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 16917;
}
/*
equation index: 16918
type: WHEN

when {} then
  trafo_1044_4044b.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16918};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[38]] /* $whenCondition133 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[38] /* $whenCondition133 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16918;
}
/*
equation index: 16920
type: SIMPLE_ASSIGN
$whenCondition135 = not trafo_1044_4044b.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16920};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[40]] /* $whenCondition135 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 16920;
}
/*
equation index: 16921
type: SIMPLE_ASSIGN
$whenCondition134 = trafo_1044_4044b.running.value and not pre(trafo_1044_4044b.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16921};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[39]] /* $whenCondition134 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16921;
}
/*
equation index: 16922
type: WHEN

when {$whenCondition135} then
  trafo_1044_4044b.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16922};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[40]] /* $whenCondition135 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[40] /* $whenCondition135 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[129]] /* trafo_1044_4044b.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[39]] /* $whenCondition134 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[39] /* $whenCondition134 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[129]] /* trafo_1044_4044b.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16922;
}
/*
equation index: 16924
type: SIMPLE_ASSIGN
$DAEres997 = if trafo_1044_4044b.running.value then trafo_1044_4044b.rTfoPu ^ 2.0 * line_1043_1044a.terminal2.V.im - (trafo_1044_4044b.rTfoPu * line_4044_4045a.terminal1.V.im + trafo_1044_4044b.ZPu.re * trafo_1044_4044b.terminal1.i.im + trafo_1044_4044b.ZPu.im * trafo_1044_4044b.terminal1.i.re) else trafo_1044_4044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16924};
  modelica_real tmp3161;
  modelica_boolean tmp3162;
  modelica_real tmp3163;
  tmp3162 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp3162)
  {
    tmp3161 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */);
    tmp3163 = ((tmp3161 * tmp3161)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3713]] /* trafo_1044_4044b.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3712]] /* trafo_1044_4044b.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)));
  }
  else
  {
    tmp3163 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[997]) /* $DAEres997 DAE_RESIDUAL_VAR */ = tmp3163;
  threadData->lastEquationSolved = 16924;
}
/*
equation index: 16925
type: SIMPLE_ASSIGN
$DAEres1002 = if trafo_1044_4044b.running.value then trafo_1044_4044b.terminal1.i.im - trafo_1044_4044b.rTfoPu * (trafo_1044_4044b.YPu.re * line_4044_4045a.terminal1.V.im + trafo_1044_4044b.YPu.im * line_4044_4045a.terminal1.V.re - trafo_1044_4044b.terminal2.i.im) else trafo_1044_4044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16925};
  (data->simulationInfo->daeModeData->residualVars[1002]) /* $DAEres1002 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3711]] /* trafo_1044_4044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3710]] /* trafo_1044_4044b.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16925;
}
/*
equation index: 16926
type: SIMPLE_ASSIGN
$DAEres1003 = if trafo_1044_4044b.running.value then trafo_1044_4044b.rTfoPu ^ 2.0 * line_1043_1044a.terminal2.V.re - (trafo_1044_4044b.rTfoPu * line_4044_4045a.terminal1.V.re + trafo_1044_4044b.ZPu.re * trafo_1044_4044b.terminal1.i.re - trafo_1044_4044b.ZPu.im * trafo_1044_4044b.terminal1.i.im) else trafo_1044_4044b.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16926};
  modelica_real tmp3164;
  modelica_boolean tmp3165;
  modelica_real tmp3166;
  tmp3165 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp3165)
  {
    tmp3164 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */);
    tmp3166 = ((tmp3164 * tmp3164)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3713]] /* trafo_1044_4044b.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3712]] /* trafo_1044_4044b.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */))));
  }
  else
  {
    tmp3166 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1003]) /* $DAEres1003 DAE_RESIDUAL_VAR */ = tmp3166;
  threadData->lastEquationSolved = 16926;
}
/*
equation index: 16927
type: SIMPLE_ASSIGN
$DAEres1004 = if trafo_1044_4044b.running.value then trafo_1044_4044b.terminal1.i.re - trafo_1044_4044b.rTfoPu * (trafo_1044_4044b.YPu.re * line_4044_4045a.terminal1.V.re + (-trafo_1044_4044b.YPu.im) * line_4044_4045a.terminal1.V.im - trafo_1044_4044b.terminal2.i.re) else trafo_1044_4044b.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16927};
  (data->simulationInfo->daeModeData->residualVars[1004]) /* $DAEres1004 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3714]] /* trafo_1044_4044b.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3711]] /* trafo_1044_4044b.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3710]] /* trafo_1044_4044b.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16927;
}
/*
equation index: 16928
type: SIMPLE_ASSIGN
trafo_1044_4044b.U1Pu = if trafo_1044_4044b.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16928};
  modelica_real tmp3167;
  modelica_real tmp3168;
  modelica_real tmp3169;
  modelica_boolean tmp3170;
  modelica_real tmp3171;
  modelica_boolean tmp3172;
  modelica_real tmp3173;
  tmp3172 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp3172)
  {
    tmp3170 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp3170)
    {
      tmp3171 = 0.0;
    }
    else
    {
      tmp3167 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp3168 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp3169 = (tmp3167 * tmp3167) + (tmp3168 * tmp3168);
      if(tmp3169 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3169, 0.5);
      }
      tmp3171 = sqrt(tmp3169);
    }
    tmp3173 = tmp3171;
  }
  else
  {
    tmp3173 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* trafo_1044_4044b.U1Pu variable */) = tmp3173;
  threadData->lastEquationSolved = 16928;
}
/*
equation index: 16929
type: SIMPLE_ASSIGN
trafo_1044_4044b.U2Pu = if trafo_1044_4044b.running.value then if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16929};
  modelica_real tmp3174;
  modelica_real tmp3175;
  modelica_real tmp3176;
  modelica_boolean tmp3177;
  modelica_real tmp3178;
  modelica_boolean tmp3179;
  modelica_real tmp3180;
  tmp3179 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */);
  if(tmp3179)
  {
    tmp3177 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
    if(tmp3177)
    {
      tmp3178 = 0.0;
    }
    else
    {
      tmp3174 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
      tmp3175 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
      tmp3176 = (tmp3174 * tmp3174) + (tmp3175 * tmp3175);
      if(tmp3176 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3176, 0.5);
      }
      tmp3178 = sqrt(tmp3176);
    }
    tmp3180 = tmp3178;
  }
  else
  {
    tmp3180 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* trafo_1044_4044b.U2Pu variable */) = tmp3180;
  threadData->lastEquationSolved = 16929;
}
/*
equation index: 16930
type: SIMPLE_ASSIGN
$whenCondition136 = not pre(trafo_1044_4044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16930};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[41]] /* $whenCondition136 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 16930;
}
/*
equation index: 16931
type: WHEN

when {} then
  trafo_1044_4044a.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16931};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[41]] /* $whenCondition136 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[41] /* $whenCondition136 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16931;
}
/*
equation index: 16933
type: SIMPLE_ASSIGN
$whenCondition138 = not trafo_1044_4044a.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16933};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[43]] /* $whenCondition138 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 16933;
}
/*
equation index: 16934
type: SIMPLE_ASSIGN
$whenCondition137 = trafo_1044_4044a.running.value and not pre(trafo_1044_4044a.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16934};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[42]] /* $whenCondition137 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16934;
}
/*
equation index: 16935
type: WHEN

when {$whenCondition138} then
  trafo_1044_4044a.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16935};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[43]] /* $whenCondition138 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[43] /* $whenCondition138 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[128]] /* trafo_1044_4044a.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[42]] /* $whenCondition137 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[42] /* $whenCondition137 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[128]] /* trafo_1044_4044a.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16935;
}
/*
equation index: 16937
type: SIMPLE_ASSIGN
$DAEres794 = if trafo_1044_4044a.running.value then trafo_1044_4044a.terminal1.i.re - trafo_1044_4044a.rTfoPu * (trafo_1044_4044a.YPu.re * line_4044_4045a.terminal1.V.re + (-trafo_1044_4044a.YPu.im) * line_4044_4045a.terminal1.V.im - trafo_1044_4044a.terminal2.i.re) else trafo_1044_4044a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16937};
  (data->simulationInfo->daeModeData->residualVars[794]) /* $DAEres794 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3702]] /* trafo_1044_4044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3701]] /* trafo_1044_4044a.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16937;
}
/*
equation index: 16938
type: SIMPLE_ASSIGN
$DAEres998 = if trafo_1044_4044a.running.value then trafo_1044_4044a.rTfoPu ^ 2.0 * line_1043_1044a.terminal2.V.im - (trafo_1044_4044a.rTfoPu * line_4044_4045a.terminal1.V.im + trafo_1044_4044a.ZPu.re * trafo_1044_4044a.terminal1.i.im + trafo_1044_4044a.ZPu.im * trafo_1044_4044a.terminal1.i.re) else trafo_1044_4044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16938};
  modelica_real tmp3181;
  modelica_boolean tmp3182;
  modelica_real tmp3183;
  tmp3182 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp3182)
  {
    tmp3181 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */);
    tmp3183 = ((tmp3181 * tmp3181)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3704]] /* trafo_1044_4044a.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3703]] /* trafo_1044_4044a.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)));
  }
  else
  {
    tmp3183 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[998]) /* $DAEres998 DAE_RESIDUAL_VAR */ = tmp3183;
  threadData->lastEquationSolved = 16938;
}
/*
equation index: 16939
type: SIMPLE_ASSIGN
$DAEres999 = if trafo_1044_4044a.running.value then trafo_1044_4044a.rTfoPu ^ 2.0 * line_1043_1044a.terminal2.V.re - (trafo_1044_4044a.rTfoPu * line_4044_4045a.terminal1.V.re + trafo_1044_4044a.ZPu.re * trafo_1044_4044a.terminal1.i.re - trafo_1044_4044a.ZPu.im * trafo_1044_4044a.terminal1.i.im) else trafo_1044_4044a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16939};
  modelica_real tmp3184;
  modelica_boolean tmp3185;
  modelica_real tmp3186;
  tmp3185 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp3185)
  {
    tmp3184 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */);
    tmp3186 = ((tmp3184 * tmp3184)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3704]] /* trafo_1044_4044a.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3703]] /* trafo_1044_4044a.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */))));
  }
  else
  {
    tmp3186 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[999]) /* $DAEres999 DAE_RESIDUAL_VAR */ = tmp3186;
  threadData->lastEquationSolved = 16939;
}
/*
equation index: 16940
type: SIMPLE_ASSIGN
$DAEres1000 = if trafo_1044_4044a.running.value then trafo_1044_4044a.terminal1.i.im - trafo_1044_4044a.rTfoPu * (trafo_1044_4044a.YPu.re * line_4044_4045a.terminal1.V.im + trafo_1044_4044a.YPu.im * line_4044_4045a.terminal1.V.re - trafo_1044_4044a.terminal2.i.im) else trafo_1044_4044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16940};
  (data->simulationInfo->daeModeData->residualVars[1000]) /* $DAEres1000 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3705]] /* trafo_1044_4044a.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3702]] /* trafo_1044_4044a.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3701]] /* trafo_1044_4044a.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16940;
}
/*
equation index: 16941
type: SIMPLE_ASSIGN
trafo_1044_4044a.U2Pu = if trafo_1044_4044a.running.value then if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16941};
  modelica_real tmp3187;
  modelica_real tmp3188;
  modelica_real tmp3189;
  modelica_boolean tmp3190;
  modelica_real tmp3191;
  modelica_boolean tmp3192;
  modelica_real tmp3193;
  tmp3192 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp3192)
  {
    tmp3190 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
    if(tmp3190)
    {
      tmp3191 = 0.0;
    }
    else
    {
      tmp3187 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
      tmp3188 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
      tmp3189 = (tmp3187 * tmp3187) + (tmp3188 * tmp3188);
      if(tmp3189 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3189, 0.5);
      }
      tmp3191 = sqrt(tmp3189);
    }
    tmp3193 = tmp3191;
  }
  else
  {
    tmp3193 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3019]] /* trafo_1044_4044a.U2Pu variable */) = tmp3193;
  threadData->lastEquationSolved = 16941;
}
/*
equation index: 16942
type: SIMPLE_ASSIGN
trafo_1044_4044a.U1Pu = if trafo_1044_4044a.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16942};
  modelica_real tmp3194;
  modelica_real tmp3195;
  modelica_real tmp3196;
  modelica_boolean tmp3197;
  modelica_real tmp3198;
  modelica_boolean tmp3199;
  modelica_real tmp3200;
  tmp3199 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */);
  if(tmp3199)
  {
    tmp3197 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp3197)
    {
      tmp3198 = 0.0;
    }
    else
    {
      tmp3194 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp3195 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp3196 = (tmp3194 * tmp3194) + (tmp3195 * tmp3195);
      if(tmp3196 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3196, 0.5);
      }
      tmp3198 = sqrt(tmp3196);
    }
    tmp3200 = tmp3198;
  }
  else
  {
    tmp3200 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3018]] /* trafo_1044_4044a.U1Pu variable */) = tmp3200;
  threadData->lastEquationSolved = 16942;
}
/*
equation index: 16943
type: SIMPLE_ASSIGN
$whenCondition139 = not pre(trafo_1022_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16943};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[44]] /* $whenCondition139 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 16943;
}
/*
equation index: 16944
type: WHEN

when {} then
  trafo_1022_4022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16944};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[44]] /* $whenCondition139 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[44] /* $whenCondition139 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16944;
}
/*
equation index: 16946
type: SIMPLE_ASSIGN
$whenCondition141 = not trafo_1022_4022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16946};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[47]] /* $whenCondition141 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 16946;
}
/*
equation index: 16947
type: SIMPLE_ASSIGN
$whenCondition140 = trafo_1022_4022.running.value and not pre(trafo_1022_4022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16947};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[46]] /* $whenCondition140 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16947;
}
/*
equation index: 16948
type: WHEN

when {$whenCondition141} then
  trafo_1022_4022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16948};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[47]] /* $whenCondition141 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[47] /* $whenCondition141 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[127]] /* trafo_1022_4022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[46]] /* $whenCondition140 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[46] /* $whenCondition140 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[127]] /* trafo_1022_4022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16948;
}
/*
equation index: 16950
type: SIMPLE_ASSIGN
$DAEres1112 = if trafo_1022_4022.running.value then trafo_1022_4022.terminal1.i.re - trafo_1022_4022.rTfoPu * (trafo_1022_4022.YPu.re * line_4022_4031b.terminal1.V.re + (-trafo_1022_4022.YPu.im) * line_4022_4031b.terminal1.V.im - trafo_1022_4022.terminal2.i.re) else trafo_1022_4022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16950};
  (data->simulationInfo->daeModeData->residualVars[1112]) /* $DAEres1112 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3693]] /* trafo_1022_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3692]] /* trafo_1022_4022.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16950;
}
/*
equation index: 16951
type: SIMPLE_ASSIGN
$DAEres1117 = if trafo_1022_4022.running.value then trafo_1022_4022.terminal1.i.im - trafo_1022_4022.rTfoPu * (trafo_1022_4022.YPu.re * line_4022_4031b.terminal1.V.im + trafo_1022_4022.YPu.im * line_4022_4031b.terminal1.V.re - trafo_1022_4022.terminal2.i.im) else trafo_1022_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16951};
  (data->simulationInfo->daeModeData->residualVars[1117]) /* $DAEres1117 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3693]] /* trafo_1022_4022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3692]] /* trafo_1022_4022.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16951;
}
/*
equation index: 16952
type: SIMPLE_ASSIGN
$DAEres1118 = if trafo_1022_4022.running.value then trafo_1022_4022.rTfoPu ^ 2.0 * line_1021_1022b.terminal2.V.re - (trafo_1022_4022.rTfoPu * line_4022_4031b.terminal1.V.re + trafo_1022_4022.ZPu.re * trafo_1022_4022.terminal1.i.re - trafo_1022_4022.ZPu.im * trafo_1022_4022.terminal1.i.im) else trafo_1022_4022.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16952};
  modelica_real tmp3201;
  modelica_boolean tmp3202;
  modelica_real tmp3203;
  tmp3202 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp3202)
  {
    tmp3201 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */);
    tmp3203 = ((tmp3201 * tmp3201)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3695]] /* trafo_1022_4022.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3694]] /* trafo_1022_4022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */))));
  }
  else
  {
    tmp3203 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1118]) /* $DAEres1118 DAE_RESIDUAL_VAR */ = tmp3203;
  threadData->lastEquationSolved = 16952;
}
/*
equation index: 16953
type: SIMPLE_ASSIGN
$DAEres1127 = if trafo_1022_4022.running.value then trafo_1022_4022.rTfoPu ^ 2.0 * line_1021_1022b.terminal2.V.im - (trafo_1022_4022.rTfoPu * line_4022_4031b.terminal1.V.im + trafo_1022_4022.ZPu.re * trafo_1022_4022.terminal1.i.im + trafo_1022_4022.ZPu.im * trafo_1022_4022.terminal1.i.re) else trafo_1022_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16953};
  modelica_real tmp3204;
  modelica_boolean tmp3205;
  modelica_real tmp3206;
  tmp3205 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp3205)
  {
    tmp3204 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */);
    tmp3206 = ((tmp3204 * tmp3204)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3696]] /* trafo_1022_4022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3695]] /* trafo_1022_4022.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3694]] /* trafo_1022_4022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)));
  }
  else
  {
    tmp3206 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1127]) /* $DAEres1127 DAE_RESIDUAL_VAR */ = tmp3206;
  threadData->lastEquationSolved = 16953;
}
/*
equation index: 16954
type: SIMPLE_ASSIGN
trafo_1022_4022.U1Pu = if trafo_1022_4022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16954};
  modelica_real tmp3207;
  modelica_real tmp3208;
  modelica_real tmp3209;
  modelica_boolean tmp3210;
  modelica_real tmp3211;
  modelica_boolean tmp3212;
  modelica_real tmp3213;
  tmp3212 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp3212)
  {
    tmp3210 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp3210)
    {
      tmp3211 = 0.0;
    }
    else
    {
      tmp3207 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp3208 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp3209 = (tmp3207 * tmp3207) + (tmp3208 * tmp3208);
      if(tmp3209 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3209, 0.5);
      }
      tmp3211 = sqrt(tmp3209);
    }
    tmp3213 = tmp3211;
  }
  else
  {
    tmp3213 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3008]] /* trafo_1022_4022.U1Pu variable */) = tmp3213;
  threadData->lastEquationSolved = 16954;
}
/*
equation index: 16955
type: SIMPLE_ASSIGN
trafo_1022_4022.U2Pu = if trafo_1022_4022.running.value then if line_4022_4031b.terminal1.V.re == 0.0 and line_4022_4031b.terminal1.V.im == 0.0 then 0.0 else (line_4022_4031b.terminal1.V.re ^ 2.0 + line_4022_4031b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16955};
  modelica_real tmp3214;
  modelica_real tmp3215;
  modelica_real tmp3216;
  modelica_boolean tmp3217;
  modelica_real tmp3218;
  modelica_boolean tmp3219;
  modelica_real tmp3220;
  tmp3219 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp3219)
  {
    tmp3217 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0));
    if(tmp3217)
    {
      tmp3218 = 0.0;
    }
    else
    {
      tmp3214 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */);
      tmp3215 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */);
      tmp3216 = (tmp3214 * tmp3214) + (tmp3215 * tmp3215);
      if(tmp3216 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3216, 0.5);
      }
      tmp3218 = sqrt(tmp3216);
    }
    tmp3220 = tmp3218;
  }
  else
  {
    tmp3220 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3009]] /* trafo_1022_4022.U2Pu variable */) = tmp3220;
  threadData->lastEquationSolved = 16955;
}
/*
equation index: 16956
type: SIMPLE_ASSIGN
$whenCondition142 = not pre(trafo_1012_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16956};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[48]] /* $whenCondition142 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16956;
}
/*
equation index: 16957
type: WHEN

when {} then
  trafo_1012_4012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16957};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[48]] /* $whenCondition142 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[48] /* $whenCondition142 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16957;
}
/*
equation index: 16959
type: SIMPLE_ASSIGN
$whenCondition144 = not trafo_1012_4012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16959};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[50]] /* $whenCondition144 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 16959;
}
/*
equation index: 16960
type: SIMPLE_ASSIGN
$whenCondition143 = trafo_1012_4012.running.value and not pre(trafo_1012_4012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16960};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[49]] /* $whenCondition143 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16960;
}
/*
equation index: 16961
type: WHEN

when {$whenCondition144} then
  trafo_1012_4012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16961};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[50]] /* $whenCondition144 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[50] /* $whenCondition144 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[126]] /* trafo_1012_4012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[49]] /* $whenCondition143 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[49] /* $whenCondition143 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[126]] /* trafo_1012_4012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16961;
}
/*
equation index: 16963
type: SIMPLE_ASSIGN
$DAEres535 = if trafo_1012_4012.running.value then trafo_1012_4012.terminal1.i.im - trafo_1012_4012.rTfoPu * (trafo_1012_4012.YPu.re * line_4012_4022.terminal1.V.im + trafo_1012_4012.YPu.im * line_4012_4022.terminal1.V.re - trafo_1012_4012.terminal2.i.im) else trafo_1012_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16963};
  (data->simulationInfo->daeModeData->residualVars[535]) /* $DAEres535 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3684]] /* trafo_1012_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3683]] /* trafo_1012_4012.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16963;
}
/*
equation index: 16964
type: SIMPLE_ASSIGN
$DAEres1095 = if trafo_1012_4012.running.value then trafo_1012_4012.rTfoPu ^ 2.0 * line_1012_1014a.terminal1.V.im - (trafo_1012_4012.rTfoPu * line_4012_4022.terminal1.V.im + trafo_1012_4012.ZPu.re * trafo_1012_4012.terminal1.i.im + trafo_1012_4012.ZPu.im * trafo_1012_4012.terminal1.i.re) else trafo_1012_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16964};
  modelica_real tmp3221;
  modelica_boolean tmp3222;
  modelica_real tmp3223;
  tmp3222 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp3222)
  {
    tmp3221 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */);
    tmp3223 = ((tmp3221 * tmp3221)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3686]] /* trafo_1012_4012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3685]] /* trafo_1012_4012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)));
  }
  else
  {
    tmp3223 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1095]) /* $DAEres1095 DAE_RESIDUAL_VAR */ = tmp3223;
  threadData->lastEquationSolved = 16964;
}
/*
equation index: 16965
type: SIMPLE_ASSIGN
$DAEres1096 = if trafo_1012_4012.running.value then trafo_1012_4012.rTfoPu ^ 2.0 * line_1012_1014a.terminal1.V.re - (trafo_1012_4012.rTfoPu * line_4012_4022.terminal1.V.re + trafo_1012_4012.ZPu.re * trafo_1012_4012.terminal1.i.re - trafo_1012_4012.ZPu.im * trafo_1012_4012.terminal1.i.im) else trafo_1012_4012.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16965};
  modelica_real tmp3224;
  modelica_boolean tmp3225;
  modelica_real tmp3226;
  tmp3225 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp3225)
  {
    tmp3224 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */);
    tmp3226 = ((tmp3224 * tmp3224)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3686]] /* trafo_1012_4012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3685]] /* trafo_1012_4012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */))));
  }
  else
  {
    tmp3226 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1096]) /* $DAEres1096 DAE_RESIDUAL_VAR */ = tmp3226;
  threadData->lastEquationSolved = 16965;
}
/*
equation index: 16966
type: SIMPLE_ASSIGN
$DAEres1097 = if trafo_1012_4012.running.value then trafo_1012_4012.terminal1.i.re - trafo_1012_4012.rTfoPu * (trafo_1012_4012.YPu.re * line_4012_4022.terminal1.V.re + (-trafo_1012_4012.YPu.im) * line_4012_4022.terminal1.V.im - trafo_1012_4012.terminal2.i.re) else trafo_1012_4012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16966};
  (data->simulationInfo->daeModeData->residualVars[1097]) /* $DAEres1097 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3687]] /* trafo_1012_4012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3684]] /* trafo_1012_4012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3683]] /* trafo_1012_4012.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16966;
}
/*
equation index: 16967
type: SIMPLE_ASSIGN
trafo_1012_4012.U1Pu = if trafo_1012_4012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16967};
  modelica_real tmp3227;
  modelica_real tmp3228;
  modelica_real tmp3229;
  modelica_boolean tmp3230;
  modelica_real tmp3231;
  modelica_boolean tmp3232;
  modelica_real tmp3233;
  tmp3232 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp3232)
  {
    tmp3230 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp3230)
    {
      tmp3231 = 0.0;
    }
    else
    {
      tmp3227 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp3228 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp3229 = (tmp3227 * tmp3227) + (tmp3228 * tmp3228);
      if(tmp3229 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3229, 0.5);
      }
      tmp3231 = sqrt(tmp3229);
    }
    tmp3233 = tmp3231;
  }
  else
  {
    tmp3233 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* trafo_1012_4012.U1Pu variable */) = tmp3233;
  threadData->lastEquationSolved = 16967;
}
/*
equation index: 16968
type: SIMPLE_ASSIGN
trafo_1012_4012.U2Pu = if trafo_1012_4012.running.value then if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16968};
  modelica_real tmp3234;
  modelica_real tmp3235;
  modelica_real tmp3236;
  modelica_boolean tmp3237;
  modelica_real tmp3238;
  modelica_boolean tmp3239;
  modelica_real tmp3240;
  tmp3239 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp3239)
  {
    tmp3237 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0));
    if(tmp3237)
    {
      tmp3238 = 0.0;
    }
    else
    {
      tmp3234 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
      tmp3235 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
      tmp3236 = (tmp3234 * tmp3234) + (tmp3235 * tmp3235);
      if(tmp3236 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3236, 0.5);
      }
      tmp3238 = sqrt(tmp3236);
    }
    tmp3240 = tmp3238;
  }
  else
  {
    tmp3240 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* trafo_1012_4012.U2Pu variable */) = tmp3240;
  threadData->lastEquationSolved = 16968;
}
/*
equation index: 16969
type: SIMPLE_ASSIGN
$whenCondition145 = not pre(trafo_1011_4011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16969};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[51]] /* $whenCondition145 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 16969;
}
/*
equation index: 16970
type: WHEN

when {} then
  trafo_1011_4011.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16970};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[51]] /* $whenCondition145 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[51] /* $whenCondition145 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16970;
}
/*
equation index: 16972
type: SIMPLE_ASSIGN
$whenCondition147 = not trafo_1011_4011.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16972};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[53]] /* $whenCondition147 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 16972;
}
/*
equation index: 16973
type: SIMPLE_ASSIGN
$whenCondition146 = trafo_1011_4011.running.value and not pre(trafo_1011_4011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16973};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[52]] /* $whenCondition146 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16973;
}
/*
equation index: 16974
type: WHEN

when {$whenCondition147} then
  trafo_1011_4011.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16974};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[53]] /* $whenCondition147 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[53] /* $whenCondition147 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[125]] /* trafo_1011_4011.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[52]] /* $whenCondition146 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[52] /* $whenCondition146 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[125]] /* trafo_1011_4011.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16974;
}
/*
equation index: 16976
type: SIMPLE_ASSIGN
$DAEres613 = if trafo_1011_4011.running.value then trafo_1011_4011.terminal1.i.im - trafo_1011_4011.rTfoPu * (trafo_1011_4011.YPu.re * line_4011_4071.terminal1.V.im + trafo_1011_4011.YPu.im * line_4011_4071.terminal1.V.re - trafo_1011_4011.terminal2.i.im) else trafo_1011_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16976};
  (data->simulationInfo->daeModeData->residualVars[613]) /* $DAEres613 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3675]] /* trafo_1011_4011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3674]] /* trafo_1011_4011.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16976;
}
/*
equation index: 16977
type: SIMPLE_ASSIGN
$DAEres614 = if trafo_1011_4011.running.value then trafo_1011_4011.terminal1.i.re - trafo_1011_4011.rTfoPu * (trafo_1011_4011.YPu.re * line_4011_4071.terminal1.V.re + (-trafo_1011_4011.YPu.im) * line_4011_4071.terminal1.V.im - trafo_1011_4011.terminal2.i.re) else trafo_1011_4011.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16977};
  (data->simulationInfo->daeModeData->residualVars[614]) /* $DAEres614 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3675]] /* trafo_1011_4011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3674]] /* trafo_1011_4011.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16977;
}
/*
equation index: 16978
type: SIMPLE_ASSIGN
$DAEres1053 = if trafo_1011_4011.running.value then trafo_1011_4011.rTfoPu ^ 2.0 * line_1011_1013a.terminal1.V.im - (trafo_1011_4011.rTfoPu * line_4011_4071.terminal1.V.im + trafo_1011_4011.ZPu.re * trafo_1011_4011.terminal1.i.im + trafo_1011_4011.ZPu.im * trafo_1011_4011.terminal1.i.re) else trafo_1011_4011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16978};
  modelica_real tmp3241;
  modelica_boolean tmp3242;
  modelica_real tmp3243;
  tmp3242 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp3242)
  {
    tmp3241 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */);
    tmp3243 = ((tmp3241 * tmp3241)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* trafo_1011_4011.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3676]] /* trafo_1011_4011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)));
  }
  else
  {
    tmp3243 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1053]) /* $DAEres1053 DAE_RESIDUAL_VAR */ = tmp3243;
  threadData->lastEquationSolved = 16978;
}
/*
equation index: 16979
type: SIMPLE_ASSIGN
$DAEres1054 = if trafo_1011_4011.running.value then trafo_1011_4011.rTfoPu ^ 2.0 * line_1011_1013a.terminal1.V.re - (trafo_1011_4011.rTfoPu * line_4011_4071.terminal1.V.re + trafo_1011_4011.ZPu.re * trafo_1011_4011.terminal1.i.re - trafo_1011_4011.ZPu.im * trafo_1011_4011.terminal1.i.im) else trafo_1011_4011.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16979};
  modelica_real tmp3244;
  modelica_boolean tmp3245;
  modelica_real tmp3246;
  tmp3245 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp3245)
  {
    tmp3244 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */);
    tmp3246 = ((tmp3244 * tmp3244)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3678]] /* trafo_1011_4011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* trafo_1011_4011.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3676]] /* trafo_1011_4011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */))));
  }
  else
  {
    tmp3246 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1054]) /* $DAEres1054 DAE_RESIDUAL_VAR */ = tmp3246;
  threadData->lastEquationSolved = 16979;
}
/*
equation index: 16980
type: SIMPLE_ASSIGN
trafo_1011_4011.U2Pu = if trafo_1011_4011.running.value then if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16980};
  modelica_real tmp3247;
  modelica_real tmp3248;
  modelica_real tmp3249;
  modelica_boolean tmp3250;
  modelica_real tmp3251;
  modelica_boolean tmp3252;
  modelica_real tmp3253;
  tmp3252 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp3252)
  {
    tmp3250 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
    if(tmp3250)
    {
      tmp3251 = 0.0;
    }
    else
    {
      tmp3247 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
      tmp3248 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
      tmp3249 = (tmp3247 * tmp3247) + (tmp3248 * tmp3248);
      if(tmp3249 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3249, 0.5);
      }
      tmp3251 = sqrt(tmp3249);
    }
    tmp3253 = tmp3251;
  }
  else
  {
    tmp3253 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2989]] /* trafo_1011_4011.U2Pu variable */) = tmp3253;
  threadData->lastEquationSolved = 16980;
}
/*
equation index: 16981
type: SIMPLE_ASSIGN
trafo_1011_4011.U1Pu = if trafo_1011_4011.running.value then if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16981};
  modelica_real tmp3254;
  modelica_real tmp3255;
  modelica_real tmp3256;
  modelica_boolean tmp3257;
  modelica_real tmp3258;
  modelica_boolean tmp3259;
  modelica_real tmp3260;
  tmp3259 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */);
  if(tmp3259)
  {
    tmp3257 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
    if(tmp3257)
    {
      tmp3258 = 0.0;
    }
    else
    {
      tmp3254 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
      tmp3255 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
      tmp3256 = (tmp3254 * tmp3254) + (tmp3255 * tmp3255);
      if(tmp3256 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3256, 0.5);
      }
      tmp3258 = sqrt(tmp3256);
    }
    tmp3260 = tmp3258;
  }
  else
  {
    tmp3260 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2988]] /* trafo_1011_4011.U1Pu variable */) = tmp3260;
  threadData->lastEquationSolved = 16981;
}
/*
equation index: 16982
type: SIMPLE_ASSIGN
$whenCondition148 = not pre(trafo_72_4072.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16982};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[54]] /* $whenCondition148 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 16982;
}
/*
equation index: 16983
type: WHEN

when {} then
  trafo_72_4072.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16983};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[54]] /* $whenCondition148 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[54] /* $whenCondition148 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16983;
}
/*
equation index: 16985
type: SIMPLE_ASSIGN
$whenCondition150 = not trafo_72_4072.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16985};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[57]] /* $whenCondition150 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 16985;
}
/*
equation index: 16986
type: SIMPLE_ASSIGN
$whenCondition149 = trafo_72_4072.running.value and not pre(trafo_72_4072.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16986};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[55]] /* $whenCondition149 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16986;
}
/*
equation index: 16987
type: WHEN

when {$whenCondition150} then
  trafo_72_4072.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16987};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[57]] /* $whenCondition150 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[57] /* $whenCondition150 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[154]] /* trafo_72_4072.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[55]] /* $whenCondition149 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[55] /* $whenCondition149 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[154]] /* trafo_72_4072.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16987;
}
/*
equation index: 16989
type: SIMPLE_ASSIGN
$DAEres544 = if trafo_72_4072.running.value then trafo_72_4072.rTfoPu ^ 2.0 * load_72.terminal.V.im - (trafo_72_4072.rTfoPu * line_4071_4072a.terminal2.V.im + trafo_72_4072.ZPu.re * trafo_72_4072.terminal1.i.im + trafo_72_4072.ZPu.im * trafo_72_4072.terminal1.i.re) else trafo_72_4072.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16989};
  modelica_real tmp3261;
  modelica_boolean tmp3262;
  modelica_real tmp3263;
  tmp3262 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp3262)
  {
    tmp3261 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */);
    tmp3263 = ((tmp3261 * tmp3261)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3938]] /* trafo_72_4072.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3937]] /* trafo_72_4072.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)));
  }
  else
  {
    tmp3263 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[544]) /* $DAEres544 DAE_RESIDUAL_VAR */ = tmp3263;
  threadData->lastEquationSolved = 16989;
}
/*
equation index: 16990
type: SIMPLE_ASSIGN
$DAEres549 = if trafo_72_4072.running.value then trafo_72_4072.rTfoPu ^ 2.0 * load_72.terminal.V.re - (trafo_72_4072.rTfoPu * line_4071_4072a.terminal2.V.re + trafo_72_4072.ZPu.re * trafo_72_4072.terminal1.i.re - trafo_72_4072.ZPu.im * trafo_72_4072.terminal1.i.im) else trafo_72_4072.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16990};
  modelica_real tmp3264;
  modelica_boolean tmp3265;
  modelica_real tmp3266;
  tmp3265 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp3265)
  {
    tmp3264 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */);
    tmp3266 = ((tmp3264 * tmp3264)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3938]] /* trafo_72_4072.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3937]] /* trafo_72_4072.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */))));
  }
  else
  {
    tmp3266 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[549]) /* $DAEres549 DAE_RESIDUAL_VAR */ = tmp3266;
  threadData->lastEquationSolved = 16990;
}
/*
equation index: 16991
type: SIMPLE_ASSIGN
$DAEres550 = if trafo_72_4072.running.value then trafo_72_4072.terminal1.i.re - trafo_72_4072.rTfoPu * (trafo_72_4072.YPu.re * line_4071_4072a.terminal2.V.re + (-trafo_72_4072.YPu.im) * line_4071_4072a.terminal2.V.im - trafo_72_4072.terminal2.i.re) else trafo_72_4072.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16991};
  (data->simulationInfo->daeModeData->residualVars[550]) /* $DAEres550 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3936]] /* trafo_72_4072.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3935]] /* trafo_72_4072.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16991;
}
/*
equation index: 16992
type: SIMPLE_ASSIGN
$DAEres578 = if trafo_72_4072.running.value then trafo_72_4072.terminal1.i.im - trafo_72_4072.rTfoPu * (trafo_72_4072.YPu.re * line_4071_4072a.terminal2.V.im + trafo_72_4072.YPu.im * line_4071_4072a.terminal2.V.re - trafo_72_4072.terminal2.i.im) else trafo_72_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16992};
  (data->simulationInfo->daeModeData->residualVars[578]) /* $DAEres578 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3939]] /* trafo_72_4072.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3936]] /* trafo_72_4072.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3935]] /* trafo_72_4072.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16992;
}
/*
equation index: 16993
type: SIMPLE_ASSIGN
trafo_72_4072.U1Pu = if trafo_72_4072.running.value then if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16993};
  modelica_real tmp3267;
  modelica_real tmp3268;
  modelica_real tmp3269;
  modelica_boolean tmp3270;
  modelica_real tmp3271;
  modelica_boolean tmp3272;
  modelica_real tmp3273;
  tmp3272 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp3272)
  {
    tmp3270 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
    if(tmp3270)
    {
      tmp3271 = 0.0;
    }
    else
    {
      tmp3267 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
      tmp3268 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
      tmp3269 = (tmp3267 * tmp3267) + (tmp3268 * tmp3268);
      if(tmp3269 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3269, 0.5);
      }
      tmp3271 = sqrt(tmp3269);
    }
    tmp3273 = tmp3271;
  }
  else
  {
    tmp3273 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3278]] /* trafo_72_4072.U1Pu variable */) = tmp3273;
  threadData->lastEquationSolved = 16993;
}
/*
equation index: 16994
type: SIMPLE_ASSIGN
trafo_72_4072.U2Pu = if trafo_72_4072.running.value then if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16994};
  modelica_real tmp3274;
  modelica_real tmp3275;
  modelica_real tmp3276;
  modelica_boolean tmp3277;
  modelica_real tmp3278;
  modelica_boolean tmp3279;
  modelica_real tmp3280;
  tmp3279 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */);
  if(tmp3279)
  {
    tmp3277 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
    if(tmp3277)
    {
      tmp3278 = 0.0;
    }
    else
    {
      tmp3274 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
      tmp3275 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
      tmp3276 = (tmp3274 * tmp3274) + (tmp3275 * tmp3275);
      if(tmp3276 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3276, 0.5);
      }
      tmp3278 = sqrt(tmp3276);
    }
    tmp3280 = tmp3278;
  }
  else
  {
    tmp3280 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3279]] /* trafo_72_4072.U2Pu variable */) = tmp3280;
  threadData->lastEquationSolved = 16994;
}
/*
equation index: 16995
type: SIMPLE_ASSIGN
$whenCondition151 = not pre(trafo_71_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16995};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[58]] /* $whenCondition151 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 16995;
}
/*
equation index: 16996
type: WHEN

when {} then
  trafo_71_4071.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16996};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[58]] /* $whenCondition151 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[58] /* $whenCondition151 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16996;
}
/*
equation index: 16998
type: SIMPLE_ASSIGN
$whenCondition153 = not trafo_71_4071.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16998};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[60]] /* $whenCondition153 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 16998;
}
/*
equation index: 16999
type: SIMPLE_ASSIGN
$whenCondition152 = trafo_71_4071.running.value and not pre(trafo_71_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16999};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[59]] /* $whenCondition152 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16999;
}
/*
equation index: 17000
type: WHEN

when {$whenCondition153} then
  trafo_71_4071.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17000};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[60]] /* $whenCondition153 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[60] /* $whenCondition153 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[153]] /* trafo_71_4071.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[59]] /* $whenCondition152 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[59] /* $whenCondition152 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[153]] /* trafo_71_4071.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17000;
}
/*
equation index: 17002
type: SIMPLE_ASSIGN
$DAEres589 = if trafo_71_4071.running.value then trafo_71_4071.terminal1.i.im - trafo_71_4071.rTfoPu * (trafo_71_4071.YPu.re * line_4071_4072a.terminal1.V.im + trafo_71_4071.YPu.im * line_4071_4072a.terminal1.V.re - trafo_71_4071.terminal2.i.im) else trafo_71_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17002};
  (data->simulationInfo->daeModeData->residualVars[589]) /* $DAEres589 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3927]] /* trafo_71_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3926]] /* trafo_71_4071.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17002;
}
/*
equation index: 17003
type: SIMPLE_ASSIGN
$DAEres593 = if trafo_71_4071.running.value then trafo_71_4071.terminal1.i.re - trafo_71_4071.rTfoPu * (trafo_71_4071.YPu.re * line_4071_4072a.terminal1.V.re + (-trafo_71_4071.YPu.im) * line_4071_4072a.terminal1.V.im - trafo_71_4071.terminal2.i.re) else trafo_71_4071.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17003};
  (data->simulationInfo->daeModeData->residualVars[593]) /* $DAEres593 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3927]] /* trafo_71_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3926]] /* trafo_71_4071.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17003;
}
/*
equation index: 17004
type: SIMPLE_ASSIGN
$DAEres595 = if trafo_71_4071.running.value then trafo_71_4071.rTfoPu ^ 2.0 * load_71.terminal.V.re - (trafo_71_4071.rTfoPu * line_4071_4072a.terminal1.V.re + trafo_71_4071.ZPu.re * trafo_71_4071.terminal1.i.re - trafo_71_4071.ZPu.im * trafo_71_4071.terminal1.i.im) else trafo_71_4071.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17004};
  modelica_real tmp3281;
  modelica_boolean tmp3282;
  modelica_real tmp3283;
  tmp3282 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp3282)
  {
    tmp3281 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */);
    tmp3283 = ((tmp3281 * tmp3281)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3929]] /* trafo_71_4071.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3928]] /* trafo_71_4071.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */))));
  }
  else
  {
    tmp3283 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[595]) /* $DAEres595 DAE_RESIDUAL_VAR */ = tmp3283;
  threadData->lastEquationSolved = 17004;
}
/*
equation index: 17005
type: SIMPLE_ASSIGN
$DAEres596 = if trafo_71_4071.running.value then trafo_71_4071.rTfoPu ^ 2.0 * load_71.terminal.V.im - (trafo_71_4071.rTfoPu * line_4071_4072a.terminal1.V.im + trafo_71_4071.ZPu.re * trafo_71_4071.terminal1.i.im + trafo_71_4071.ZPu.im * trafo_71_4071.terminal1.i.re) else trafo_71_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17005};
  modelica_real tmp3284;
  modelica_boolean tmp3285;
  modelica_real tmp3286;
  tmp3285 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp3285)
  {
    tmp3284 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */);
    tmp3286 = ((tmp3284 * tmp3284)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3930]] /* trafo_71_4071.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3929]] /* trafo_71_4071.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3928]] /* trafo_71_4071.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)));
  }
  else
  {
    tmp3286 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[596]) /* $DAEres596 DAE_RESIDUAL_VAR */ = tmp3286;
  threadData->lastEquationSolved = 17005;
}
/*
equation index: 17006
type: SIMPLE_ASSIGN
trafo_71_4071.U1Pu = if trafo_71_4071.running.value then if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17006};
  modelica_real tmp3287;
  modelica_real tmp3288;
  modelica_real tmp3289;
  modelica_boolean tmp3290;
  modelica_real tmp3291;
  modelica_boolean tmp3292;
  modelica_real tmp3293;
  tmp3292 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp3292)
  {
    tmp3290 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
    if(tmp3290)
    {
      tmp3291 = 0.0;
    }
    else
    {
      tmp3287 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
      tmp3288 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
      tmp3289 = (tmp3287 * tmp3287) + (tmp3288 * tmp3288);
      if(tmp3289 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3289, 0.5);
      }
      tmp3291 = sqrt(tmp3289);
    }
    tmp3293 = tmp3291;
  }
  else
  {
    tmp3293 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3268]] /* trafo_71_4071.U1Pu variable */) = tmp3293;
  threadData->lastEquationSolved = 17006;
}
/*
equation index: 17007
type: SIMPLE_ASSIGN
trafo_71_4071.U2Pu = if trafo_71_4071.running.value then if line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal1.V.re ^ 2.0 + line_4071_4072a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17007};
  modelica_real tmp3294;
  modelica_real tmp3295;
  modelica_real tmp3296;
  modelica_boolean tmp3297;
  modelica_real tmp3298;
  modelica_boolean tmp3299;
  modelica_real tmp3300;
  tmp3299 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */);
  if(tmp3299)
  {
    tmp3297 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0));
    if(tmp3297)
    {
      tmp3298 = 0.0;
    }
    else
    {
      tmp3294 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
      tmp3295 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
      tmp3296 = (tmp3294 * tmp3294) + (tmp3295 * tmp3295);
      if(tmp3296 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3296, 0.5);
      }
      tmp3298 = sqrt(tmp3296);
    }
    tmp3300 = tmp3298;
  }
  else
  {
    tmp3300 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3269]] /* trafo_71_4071.U2Pu variable */) = tmp3300;
  threadData->lastEquationSolved = 17007;
}
/*
equation index: 17008
type: SIMPLE_ASSIGN
$whenCondition154 = not pre(trafo_63_4063.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17008};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[61]] /* $whenCondition154 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 17008;
}
/*
equation index: 17009
type: WHEN

when {} then
  trafo_63_4063.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17009};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[61]] /* $whenCondition154 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[61] /* $whenCondition154 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17009;
}
/*
equation index: 17011
type: SIMPLE_ASSIGN
$whenCondition156 = not trafo_63_4063.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17011};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[63]] /* $whenCondition156 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 17011;
}
/*
equation index: 17012
type: SIMPLE_ASSIGN
$whenCondition155 = trafo_63_4063.running.value and not pre(trafo_63_4063.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17012};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[62]] /* $whenCondition155 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17012;
}
/*
equation index: 17013
type: WHEN

when {$whenCondition156} then
  trafo_63_4063.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17013};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[63]] /* $whenCondition156 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[63] /* $whenCondition156 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[152]] /* trafo_63_4063.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[62]] /* $whenCondition155 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[62] /* $whenCondition155 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[152]] /* trafo_63_4063.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17013;
}
/*
equation index: 17015
type: SIMPLE_ASSIGN
$DAEres166 = if trafo_63_4063.running.value then trafo_63_4063.terminal1.i.im - trafo_63_4063.rTfoPu * (trafo_63_4063.YPu.re * line_4062_4063b.terminal2.V.im + trafo_63_4063.YPu.im * line_4062_4063b.terminal2.V.re - trafo_63_4063.terminal2.i.im) else trafo_63_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17015};
  (data->simulationInfo->daeModeData->residualVars[166]) /* $DAEres166 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3918]] /* trafo_63_4063.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3917]] /* trafo_63_4063.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17015;
}
/*
equation index: 17016
type: SIMPLE_ASSIGN
$DAEres176 = if trafo_63_4063.running.value then trafo_63_4063.rTfoPu ^ 2.0 * load_63.terminal.V.im - (trafo_63_4063.rTfoPu * line_4062_4063b.terminal2.V.im + trafo_63_4063.ZPu.re * trafo_63_4063.terminal1.i.im + trafo_63_4063.ZPu.im * trafo_63_4063.terminal1.i.re) else trafo_63_4063.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17016};
  modelica_real tmp3301;
  modelica_boolean tmp3302;
  modelica_real tmp3303;
  tmp3302 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp3302)
  {
    tmp3301 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */);
    tmp3303 = ((tmp3301 * tmp3301)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3920]] /* trafo_63_4063.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3919]] /* trafo_63_4063.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)));
  }
  else
  {
    tmp3303 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[176]) /* $DAEres176 DAE_RESIDUAL_VAR */ = tmp3303;
  threadData->lastEquationSolved = 17016;
}
/*
equation index: 17017
type: SIMPLE_ASSIGN
$DAEres178 = if trafo_63_4063.running.value then trafo_63_4063.rTfoPu ^ 2.0 * load_63.terminal.V.re - (trafo_63_4063.rTfoPu * line_4062_4063b.terminal2.V.re + trafo_63_4063.ZPu.re * trafo_63_4063.terminal1.i.re - trafo_63_4063.ZPu.im * trafo_63_4063.terminal1.i.im) else trafo_63_4063.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17017};
  modelica_real tmp3304;
  modelica_boolean tmp3305;
  modelica_real tmp3306;
  tmp3305 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp3305)
  {
    tmp3304 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */);
    tmp3306 = ((tmp3304 * tmp3304)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3920]] /* trafo_63_4063.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3919]] /* trafo_63_4063.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */))));
  }
  else
  {
    tmp3306 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[178]) /* $DAEres178 DAE_RESIDUAL_VAR */ = tmp3306;
  threadData->lastEquationSolved = 17017;
}
/*
equation index: 17018
type: SIMPLE_ASSIGN
$DAEres179 = if trafo_63_4063.running.value then trafo_63_4063.terminal1.i.re - trafo_63_4063.rTfoPu * (trafo_63_4063.YPu.re * line_4062_4063b.terminal2.V.re + (-trafo_63_4063.YPu.im) * line_4062_4063b.terminal2.V.im - trafo_63_4063.terminal2.i.re) else trafo_63_4063.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17018};
  (data->simulationInfo->daeModeData->residualVars[179]) /* $DAEres179 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3921]] /* trafo_63_4063.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3918]] /* trafo_63_4063.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3917]] /* trafo_63_4063.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17018;
}
/*
equation index: 17019
type: SIMPLE_ASSIGN
trafo_63_4063.U2Pu = if trafo_63_4063.running.value then if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17019};
  modelica_real tmp3307;
  modelica_real tmp3308;
  modelica_real tmp3309;
  modelica_boolean tmp3310;
  modelica_real tmp3311;
  modelica_boolean tmp3312;
  modelica_real tmp3313;
  tmp3312 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp3312)
  {
    tmp3310 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
    if(tmp3310)
    {
      tmp3311 = 0.0;
    }
    else
    {
      tmp3307 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
      tmp3308 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
      tmp3309 = (tmp3307 * tmp3307) + (tmp3308 * tmp3308);
      if(tmp3309 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3309, 0.5);
      }
      tmp3311 = sqrt(tmp3309);
    }
    tmp3313 = tmp3311;
  }
  else
  {
    tmp3313 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3259]] /* trafo_63_4063.U2Pu variable */) = tmp3313;
  threadData->lastEquationSolved = 17019;
}
/*
equation index: 17020
type: SIMPLE_ASSIGN
trafo_63_4063.U1Pu = if trafo_63_4063.running.value then if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17020};
  modelica_real tmp3314;
  modelica_real tmp3315;
  modelica_real tmp3316;
  modelica_boolean tmp3317;
  modelica_real tmp3318;
  modelica_boolean tmp3319;
  modelica_real tmp3320;
  tmp3319 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */);
  if(tmp3319)
  {
    tmp3317 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
    if(tmp3317)
    {
      tmp3318 = 0.0;
    }
    else
    {
      tmp3314 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
      tmp3315 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
      tmp3316 = (tmp3314 * tmp3314) + (tmp3315 * tmp3315);
      if(tmp3316 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3316, 0.5);
      }
      tmp3318 = sqrt(tmp3316);
    }
    tmp3320 = tmp3318;
  }
  else
  {
    tmp3320 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3258]] /* trafo_63_4063.U1Pu variable */) = tmp3320;
  threadData->lastEquationSolved = 17020;
}
/*
equation index: 17021
type: SIMPLE_ASSIGN
$whenCondition157 = not pre(trafo_62_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17021};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[64]] /* $whenCondition157 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17021;
}
/*
equation index: 17022
type: WHEN

when {} then
  trafo_62_4062.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17022};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[64]] /* $whenCondition157 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[64] /* $whenCondition157 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17022;
}
/*
equation index: 17024
type: SIMPLE_ASSIGN
$whenCondition159 = not trafo_62_4062.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17024};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[66]] /* $whenCondition159 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 17024;
}
/*
equation index: 17025
type: SIMPLE_ASSIGN
$whenCondition158 = trafo_62_4062.running.value and not pre(trafo_62_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17025};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[65]] /* $whenCondition158 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17025;
}
/*
equation index: 17026
type: WHEN

when {$whenCondition159} then
  trafo_62_4062.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17026};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[66]] /* $whenCondition159 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[66] /* $whenCondition159 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[151]] /* trafo_62_4062.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[65]] /* $whenCondition158 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[65] /* $whenCondition158 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[151]] /* trafo_62_4062.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17026;
}
/*
equation index: 17028
type: SIMPLE_ASSIGN
$DAEres184 = if trafo_62_4062.running.value then trafo_62_4062.terminal1.i.im - trafo_62_4062.rTfoPu * (trafo_62_4062.YPu.re * line_4062_4063b.terminal1.V.im + trafo_62_4062.YPu.im * line_4062_4063b.terminal1.V.re - trafo_62_4062.terminal2.i.im) else trafo_62_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17028};
  (data->simulationInfo->daeModeData->residualVars[184]) /* $DAEres184 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3909]] /* trafo_62_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3908]] /* trafo_62_4062.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17028;
}
/*
equation index: 17029
type: SIMPLE_ASSIGN
$DAEres189 = if trafo_62_4062.running.value then trafo_62_4062.terminal1.i.re - trafo_62_4062.rTfoPu * (trafo_62_4062.YPu.re * line_4062_4063b.terminal1.V.re + (-trafo_62_4062.YPu.im) * line_4062_4063b.terminal1.V.im - trafo_62_4062.terminal2.i.re) else trafo_62_4062.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17029};
  (data->simulationInfo->daeModeData->residualVars[189]) /* $DAEres189 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3909]] /* trafo_62_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3908]] /* trafo_62_4062.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17029;
}
/*
equation index: 17030
type: SIMPLE_ASSIGN
$DAEres190 = if trafo_62_4062.running.value then trafo_62_4062.rTfoPu ^ 2.0 * load_62.terminal.V.re - (trafo_62_4062.rTfoPu * line_4062_4063b.terminal1.V.re + trafo_62_4062.ZPu.re * trafo_62_4062.terminal1.i.re - trafo_62_4062.ZPu.im * trafo_62_4062.terminal1.i.im) else trafo_62_4062.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17030};
  modelica_real tmp3321;
  modelica_boolean tmp3322;
  modelica_real tmp3323;
  tmp3322 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp3322)
  {
    tmp3321 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */);
    tmp3323 = ((tmp3321 * tmp3321)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3911]] /* trafo_62_4062.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3910]] /* trafo_62_4062.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */))));
  }
  else
  {
    tmp3323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[190]) /* $DAEres190 DAE_RESIDUAL_VAR */ = tmp3323;
  threadData->lastEquationSolved = 17030;
}
/*
equation index: 17031
type: SIMPLE_ASSIGN
$DAEres191 = if trafo_62_4062.running.value then trafo_62_4062.rTfoPu ^ 2.0 * load_62.terminal.V.im - (trafo_62_4062.rTfoPu * line_4062_4063b.terminal1.V.im + trafo_62_4062.ZPu.re * trafo_62_4062.terminal1.i.im + trafo_62_4062.ZPu.im * trafo_62_4062.terminal1.i.re) else trafo_62_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17031};
  modelica_real tmp3324;
  modelica_boolean tmp3325;
  modelica_real tmp3326;
  tmp3325 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp3325)
  {
    tmp3324 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */);
    tmp3326 = ((tmp3324 * tmp3324)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3912]] /* trafo_62_4062.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3911]] /* trafo_62_4062.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3910]] /* trafo_62_4062.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)));
  }
  else
  {
    tmp3326 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[191]) /* $DAEres191 DAE_RESIDUAL_VAR */ = tmp3326;
  threadData->lastEquationSolved = 17031;
}
/*
equation index: 17032
type: SIMPLE_ASSIGN
trafo_62_4062.U1Pu = if trafo_62_4062.running.value then if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17032};
  modelica_real tmp3327;
  modelica_real tmp3328;
  modelica_real tmp3329;
  modelica_boolean tmp3330;
  modelica_real tmp3331;
  modelica_boolean tmp3332;
  modelica_real tmp3333;
  tmp3332 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp3332)
  {
    tmp3330 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
    if(tmp3330)
    {
      tmp3331 = 0.0;
    }
    else
    {
      tmp3327 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
      tmp3328 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
      tmp3329 = (tmp3327 * tmp3327) + (tmp3328 * tmp3328);
      if(tmp3329 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3329, 0.5);
      }
      tmp3331 = sqrt(tmp3329);
    }
    tmp3333 = tmp3331;
  }
  else
  {
    tmp3333 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3248]] /* trafo_62_4062.U1Pu variable */) = tmp3333;
  threadData->lastEquationSolved = 17032;
}
/*
equation index: 17033
type: SIMPLE_ASSIGN
trafo_62_4062.U2Pu = if trafo_62_4062.running.value then if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17033};
  modelica_real tmp3334;
  modelica_real tmp3335;
  modelica_real tmp3336;
  modelica_boolean tmp3337;
  modelica_real tmp3338;
  modelica_boolean tmp3339;
  modelica_real tmp3340;
  tmp3339 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */);
  if(tmp3339)
  {
    tmp3337 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0));
    if(tmp3337)
    {
      tmp3338 = 0.0;
    }
    else
    {
      tmp3334 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
      tmp3335 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
      tmp3336 = (tmp3334 * tmp3334) + (tmp3335 * tmp3335);
      if(tmp3336 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3336, 0.5);
      }
      tmp3338 = sqrt(tmp3336);
    }
    tmp3340 = tmp3338;
  }
  else
  {
    tmp3340 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3249]] /* trafo_62_4062.U2Pu variable */) = tmp3340;
  threadData->lastEquationSolved = 17033;
}
/*
equation index: 17034
type: SIMPLE_ASSIGN
$whenCondition160 = not pre(trafo_61_4061.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17034};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[68]] /* $whenCondition160 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 17034;
}
/*
equation index: 17035
type: WHEN

when {} then
  trafo_61_4061.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17035};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[68]] /* $whenCondition160 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[68] /* $whenCondition160 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17035;
}
/*
equation index: 17037
type: SIMPLE_ASSIGN
$whenCondition162 = not trafo_61_4061.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17037};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[70]] /* $whenCondition162 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 17037;
}
/*
equation index: 17038
type: SIMPLE_ASSIGN
$whenCondition161 = trafo_61_4061.running.value and not pre(trafo_61_4061.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17038};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[69]] /* $whenCondition161 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17038;
}
/*
equation index: 17039
type: WHEN

when {$whenCondition162} then
  trafo_61_4061.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17039};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[70]] /* $whenCondition162 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[70] /* $whenCondition162 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[150]] /* trafo_61_4061.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[69]] /* $whenCondition161 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[69] /* $whenCondition161 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[150]] /* trafo_61_4061.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17039;
}
/*
equation index: 17041
type: SIMPLE_ASSIGN
$DAEres628 = if trafo_61_4061.running.value then trafo_61_4061.terminal1.i.im - trafo_61_4061.rTfoPu * (trafo_61_4061.YPu.re * line_4061_4062.terminal1.V.im + trafo_61_4061.YPu.im * line_4061_4062.terminal1.V.re - trafo_61_4061.terminal2.i.im) else trafo_61_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17041};
  (data->simulationInfo->daeModeData->residualVars[628]) /* $DAEres628 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3900]] /* trafo_61_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3899]] /* trafo_61_4061.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17041;
}
/*
equation index: 17042
type: SIMPLE_ASSIGN
$DAEres1157 = if trafo_61_4061.running.value then trafo_61_4061.terminal1.i.re - trafo_61_4061.rTfoPu * (trafo_61_4061.YPu.re * line_4061_4062.terminal1.V.re + (-trafo_61_4061.YPu.im) * line_4061_4062.terminal1.V.im - trafo_61_4061.terminal2.i.re) else trafo_61_4061.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17042};
  (data->simulationInfo->daeModeData->residualVars[1157]) /* $DAEres1157 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3900]] /* trafo_61_4061.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3899]] /* trafo_61_4061.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17042;
}
/*
equation index: 17043
type: SIMPLE_ASSIGN
$DAEres1158 = if trafo_61_4061.running.value then trafo_61_4061.rTfoPu ^ 2.0 * load_61.terminal.V.re - (trafo_61_4061.rTfoPu * line_4061_4062.terminal1.V.re + trafo_61_4061.ZPu.re * trafo_61_4061.terminal1.i.re - trafo_61_4061.ZPu.im * trafo_61_4061.terminal1.i.im) else trafo_61_4061.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17043};
  modelica_real tmp3341;
  modelica_boolean tmp3342;
  modelica_real tmp3343;
  tmp3342 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp3342)
  {
    tmp3341 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */);
    tmp3343 = ((tmp3341 * tmp3341)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3902]] /* trafo_61_4061.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3901]] /* trafo_61_4061.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */))));
  }
  else
  {
    tmp3343 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1158]) /* $DAEres1158 DAE_RESIDUAL_VAR */ = tmp3343;
  threadData->lastEquationSolved = 17043;
}
/*
equation index: 17044
type: SIMPLE_ASSIGN
$DAEres1161 = if trafo_61_4061.running.value then trafo_61_4061.rTfoPu ^ 2.0 * load_61.terminal.V.im - (trafo_61_4061.rTfoPu * line_4061_4062.terminal1.V.im + trafo_61_4061.ZPu.re * trafo_61_4061.terminal1.i.im + trafo_61_4061.ZPu.im * trafo_61_4061.terminal1.i.re) else trafo_61_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17044};
  modelica_real tmp3344;
  modelica_boolean tmp3345;
  modelica_real tmp3346;
  tmp3345 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp3345)
  {
    tmp3344 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */);
    tmp3346 = ((tmp3344 * tmp3344)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3903]] /* trafo_61_4061.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3902]] /* trafo_61_4061.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3901]] /* trafo_61_4061.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)));
  }
  else
  {
    tmp3346 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1161]) /* $DAEres1161 DAE_RESIDUAL_VAR */ = tmp3346;
  threadData->lastEquationSolved = 17044;
}
/*
equation index: 17045
type: SIMPLE_ASSIGN
trafo_61_4061.U1Pu = if trafo_61_4061.running.value then if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17045};
  modelica_real tmp3347;
  modelica_real tmp3348;
  modelica_real tmp3349;
  modelica_boolean tmp3350;
  modelica_real tmp3351;
  modelica_boolean tmp3352;
  modelica_real tmp3353;
  tmp3352 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp3352)
  {
    tmp3350 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
    if(tmp3350)
    {
      tmp3351 = 0.0;
    }
    else
    {
      tmp3347 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
      tmp3348 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
      tmp3349 = (tmp3347 * tmp3347) + (tmp3348 * tmp3348);
      if(tmp3349 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3349, 0.5);
      }
      tmp3351 = sqrt(tmp3349);
    }
    tmp3353 = tmp3351;
  }
  else
  {
    tmp3353 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3238]] /* trafo_61_4061.U1Pu variable */) = tmp3353;
  threadData->lastEquationSolved = 17045;
}
/*
equation index: 17046
type: SIMPLE_ASSIGN
trafo_61_4061.U2Pu = if trafo_61_4061.running.value then if line_4061_4062.terminal1.V.re == 0.0 and line_4061_4062.terminal1.V.im == 0.0 then 0.0 else (line_4061_4062.terminal1.V.re ^ 2.0 + line_4061_4062.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17046};
  modelica_real tmp3354;
  modelica_real tmp3355;
  modelica_real tmp3356;
  modelica_boolean tmp3357;
  modelica_real tmp3358;
  modelica_boolean tmp3359;
  modelica_real tmp3360;
  tmp3359 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp3359)
  {
    tmp3357 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0));
    if(tmp3357)
    {
      tmp3358 = 0.0;
    }
    else
    {
      tmp3354 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */);
      tmp3355 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */);
      tmp3356 = (tmp3354 * tmp3354) + (tmp3355 * tmp3355);
      if(tmp3356 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3356, 0.5);
      }
      tmp3358 = sqrt(tmp3356);
    }
    tmp3360 = tmp3358;
  }
  else
  {
    tmp3360 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3239]] /* trafo_61_4061.U2Pu variable */) = tmp3360;
  threadData->lastEquationSolved = 17046;
}
/*
equation index: 17047
type: SIMPLE_ASSIGN
$whenCondition163 = not pre(trafo_51_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17047};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[71]] /* $whenCondition163 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 17047;
}
/*
equation index: 17048
type: WHEN

when {} then
  trafo_51_4051.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17048};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[71]] /* $whenCondition163 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[71] /* $whenCondition163 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17048;
}
/*
equation index: 17050
type: SIMPLE_ASSIGN
$whenCondition165 = not trafo_51_4051.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17050};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[73]] /* $whenCondition165 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 17050;
}
/*
equation index: 17051
type: SIMPLE_ASSIGN
$whenCondition164 = trafo_51_4051.running.value and not pre(trafo_51_4051.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17051};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[72]] /* $whenCondition164 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17051;
}
/*
equation index: 17052
type: WHEN

when {$whenCondition165} then
  trafo_51_4051.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17052};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[73]] /* $whenCondition165 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[73] /* $whenCondition165 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[148]] /* trafo_51_4051.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[72]] /* $whenCondition164 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[72] /* $whenCondition164 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[148]] /* trafo_51_4051.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17052;
}
/*
equation index: 17054
type: SIMPLE_ASSIGN
$DAEres936 = if trafo_51_4051.running.value then trafo_51_4051.terminal1.i.im - trafo_51_4051.rTfoPu * (trafo_51_4051.YPu.re * line_4045_4051b.terminal2.V.im + trafo_51_4051.YPu.im * line_4045_4051b.terminal2.V.re - trafo_51_4051.terminal2.i.im) else trafo_51_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17054};
  (data->simulationInfo->daeModeData->residualVars[936]) /* $DAEres936 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3882]] /* trafo_51_4051.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3881]] /* trafo_51_4051.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17054;
}
/*
equation index: 17055
type: SIMPLE_ASSIGN
$DAEres963 = if trafo_51_4051.running.value then trafo_51_4051.rTfoPu ^ 2.0 * load_51.terminal.V.im - (trafo_51_4051.rTfoPu * line_4045_4051b.terminal2.V.im + trafo_51_4051.ZPu.re * trafo_51_4051.terminal1.i.im + trafo_51_4051.ZPu.im * trafo_51_4051.terminal1.i.re) else trafo_51_4051.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17055};
  modelica_real tmp3361;
  modelica_boolean tmp3362;
  modelica_real tmp3363;
  tmp3362 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp3362)
  {
    tmp3361 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */);
    tmp3363 = ((tmp3361 * tmp3361)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3884]] /* trafo_51_4051.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3883]] /* trafo_51_4051.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)));
  }
  else
  {
    tmp3363 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[963]) /* $DAEres963 DAE_RESIDUAL_VAR */ = tmp3363;
  threadData->lastEquationSolved = 17055;
}
/*
equation index: 17056
type: SIMPLE_ASSIGN
$DAEres964 = if trafo_51_4051.running.value then trafo_51_4051.rTfoPu ^ 2.0 * load_51.terminal.V.re - (trafo_51_4051.rTfoPu * line_4045_4051b.terminal2.V.re + trafo_51_4051.ZPu.re * trafo_51_4051.terminal1.i.re - trafo_51_4051.ZPu.im * trafo_51_4051.terminal1.i.im) else trafo_51_4051.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17056};
  modelica_real tmp3364;
  modelica_boolean tmp3365;
  modelica_real tmp3366;
  tmp3365 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp3365)
  {
    tmp3364 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */);
    tmp3366 = ((tmp3364 * tmp3364)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3884]] /* trafo_51_4051.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3883]] /* trafo_51_4051.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */))));
  }
  else
  {
    tmp3366 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[964]) /* $DAEres964 DAE_RESIDUAL_VAR */ = tmp3366;
  threadData->lastEquationSolved = 17056;
}
/*
equation index: 17057
type: SIMPLE_ASSIGN
$DAEres965 = if trafo_51_4051.running.value then trafo_51_4051.terminal1.i.re - trafo_51_4051.rTfoPu * (trafo_51_4051.YPu.re * line_4045_4051b.terminal2.V.re + (-trafo_51_4051.YPu.im) * line_4045_4051b.terminal2.V.im - trafo_51_4051.terminal2.i.re) else trafo_51_4051.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17057};
  (data->simulationInfo->daeModeData->residualVars[965]) /* $DAEres965 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3885]] /* trafo_51_4051.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3882]] /* trafo_51_4051.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3881]] /* trafo_51_4051.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17057;
}
/*
equation index: 17058
type: SIMPLE_ASSIGN
trafo_51_4051.U1Pu = if trafo_51_4051.running.value then if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17058};
  modelica_real tmp3367;
  modelica_real tmp3368;
  modelica_real tmp3369;
  modelica_boolean tmp3370;
  modelica_real tmp3371;
  modelica_boolean tmp3372;
  modelica_real tmp3373;
  tmp3372 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp3372)
  {
    tmp3370 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
    if(tmp3370)
    {
      tmp3371 = 0.0;
    }
    else
    {
      tmp3367 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
      tmp3368 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
      tmp3369 = (tmp3367 * tmp3367) + (tmp3368 * tmp3368);
      if(tmp3369 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3369, 0.5);
      }
      tmp3371 = sqrt(tmp3369);
    }
    tmp3373 = tmp3371;
  }
  else
  {
    tmp3373 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3218]] /* trafo_51_4051.U1Pu variable */) = tmp3373;
  threadData->lastEquationSolved = 17058;
}
/*
equation index: 17059
type: SIMPLE_ASSIGN
trafo_51_4051.U2Pu = if trafo_51_4051.running.value then if line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal2.V.re ^ 2.0 + line_4045_4051b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17059};
  modelica_real tmp3374;
  modelica_real tmp3375;
  modelica_real tmp3376;
  modelica_boolean tmp3377;
  modelica_real tmp3378;
  modelica_boolean tmp3379;
  modelica_real tmp3380;
  tmp3379 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */);
  if(tmp3379)
  {
    tmp3377 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0));
    if(tmp3377)
    {
      tmp3378 = 0.0;
    }
    else
    {
      tmp3374 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
      tmp3375 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
      tmp3376 = (tmp3374 * tmp3374) + (tmp3375 * tmp3375);
      if(tmp3376 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3376, 0.5);
      }
      tmp3378 = sqrt(tmp3376);
    }
    tmp3380 = tmp3378;
  }
  else
  {
    tmp3380 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3219]] /* trafo_51_4051.U2Pu variable */) = tmp3380;
  threadData->lastEquationSolved = 17059;
}
/*
equation index: 17060
type: SIMPLE_ASSIGN
$whenCondition166 = not pre(trafo_47_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17060};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[74]] /* $whenCondition166 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17060;
}
/*
equation index: 17061
type: WHEN

when {} then
  trafo_47_4047.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17061};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[74]] /* $whenCondition166 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[74] /* $whenCondition166 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17061;
}
/*
equation index: 17063
type: SIMPLE_ASSIGN
$whenCondition168 = not trafo_47_4047.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17063};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[76]] /* $whenCondition168 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 17063;
}
/*
equation index: 17064
type: SIMPLE_ASSIGN
$whenCondition167 = trafo_47_4047.running.value and not pre(trafo_47_4047.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17064};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[75]] /* $whenCondition167 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17064;
}
/*
equation index: 17065
type: WHEN

when {$whenCondition168} then
  trafo_47_4047.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17065};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[76]] /* $whenCondition168 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[76] /* $whenCondition168 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[146]] /* trafo_47_4047.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[75]] /* $whenCondition167 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[75] /* $whenCondition167 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[146]] /* trafo_47_4047.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17065;
}
/*
equation index: 17067
type: SIMPLE_ASSIGN
$DAEres739 = if trafo_47_4047.running.value then trafo_47_4047.terminal1.i.im - trafo_47_4047.rTfoPu * (trafo_47_4047.YPu.re * line_4046_4047.terminal2.V.im + trafo_47_4047.YPu.im * line_4046_4047.terminal2.V.re - trafo_47_4047.terminal2.i.im) else trafo_47_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17067};
  (data->simulationInfo->daeModeData->residualVars[739]) /* $DAEres739 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3864]] /* trafo_47_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3863]] /* trafo_47_4047.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17067;
}
/*
equation index: 17068
type: SIMPLE_ASSIGN
$DAEres766 = if trafo_47_4047.running.value then trafo_47_4047.rTfoPu ^ 2.0 * load_47.terminal.V.im - (trafo_47_4047.rTfoPu * line_4046_4047.terminal2.V.im + trafo_47_4047.ZPu.re * trafo_47_4047.terminal1.i.im + trafo_47_4047.ZPu.im * trafo_47_4047.terminal1.i.re) else trafo_47_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17068};
  modelica_real tmp3381;
  modelica_boolean tmp3382;
  modelica_real tmp3383;
  tmp3382 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp3382)
  {
    tmp3381 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */);
    tmp3383 = ((tmp3381 * tmp3381)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3866]] /* trafo_47_4047.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3865]] /* trafo_47_4047.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)));
  }
  else
  {
    tmp3383 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[766]) /* $DAEres766 DAE_RESIDUAL_VAR */ = tmp3383;
  threadData->lastEquationSolved = 17068;
}
/*
equation index: 17069
type: SIMPLE_ASSIGN
$DAEres767 = if trafo_47_4047.running.value then trafo_47_4047.rTfoPu ^ 2.0 * load_47.terminal.V.re - (trafo_47_4047.rTfoPu * line_4046_4047.terminal2.V.re + trafo_47_4047.ZPu.re * trafo_47_4047.terminal1.i.re - trafo_47_4047.ZPu.im * trafo_47_4047.terminal1.i.im) else trafo_47_4047.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17069};
  modelica_real tmp3384;
  modelica_boolean tmp3385;
  modelica_real tmp3386;
  tmp3385 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp3385)
  {
    tmp3384 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */);
    tmp3386 = ((tmp3384 * tmp3384)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3866]] /* trafo_47_4047.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3865]] /* trafo_47_4047.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */))));
  }
  else
  {
    tmp3386 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[767]) /* $DAEres767 DAE_RESIDUAL_VAR */ = tmp3386;
  threadData->lastEquationSolved = 17069;
}
/*
equation index: 17070
type: SIMPLE_ASSIGN
$DAEres768 = if trafo_47_4047.running.value then trafo_47_4047.terminal1.i.re - trafo_47_4047.rTfoPu * (trafo_47_4047.YPu.re * line_4046_4047.terminal2.V.re + (-trafo_47_4047.YPu.im) * line_4046_4047.terminal2.V.im - trafo_47_4047.terminal2.i.re) else trafo_47_4047.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17070};
  (data->simulationInfo->daeModeData->residualVars[768]) /* $DAEres768 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3867]] /* trafo_47_4047.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3864]] /* trafo_47_4047.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3863]] /* trafo_47_4047.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17070;
}
/*
equation index: 17071
type: SIMPLE_ASSIGN
trafo_47_4047.U1Pu = if trafo_47_4047.running.value then if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17071};
  modelica_real tmp3387;
  modelica_real tmp3388;
  modelica_real tmp3389;
  modelica_boolean tmp3390;
  modelica_real tmp3391;
  modelica_boolean tmp3392;
  modelica_real tmp3393;
  tmp3392 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp3392)
  {
    tmp3390 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
    if(tmp3390)
    {
      tmp3391 = 0.0;
    }
    else
    {
      tmp3387 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
      tmp3388 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
      tmp3389 = (tmp3387 * tmp3387) + (tmp3388 * tmp3388);
      if(tmp3389 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3389, 0.5);
      }
      tmp3391 = sqrt(tmp3389);
    }
    tmp3393 = tmp3391;
  }
  else
  {
    tmp3393 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3198]] /* trafo_47_4047.U1Pu variable */) = tmp3393;
  threadData->lastEquationSolved = 17071;
}
/*
equation index: 17072
type: SIMPLE_ASSIGN
trafo_47_4047.U2Pu = if trafo_47_4047.running.value then if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17072};
  modelica_real tmp3394;
  modelica_real tmp3395;
  modelica_real tmp3396;
  modelica_boolean tmp3397;
  modelica_real tmp3398;
  modelica_boolean tmp3399;
  modelica_real tmp3400;
  tmp3399 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */);
  if(tmp3399)
  {
    tmp3397 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
    if(tmp3397)
    {
      tmp3398 = 0.0;
    }
    else
    {
      tmp3394 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
      tmp3395 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
      tmp3396 = (tmp3394 * tmp3394) + (tmp3395 * tmp3395);
      if(tmp3396 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3396, 0.5);
      }
      tmp3398 = sqrt(tmp3396);
    }
    tmp3400 = tmp3398;
  }
  else
  {
    tmp3400 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3199]] /* trafo_47_4047.U2Pu variable */) = tmp3400;
  threadData->lastEquationSolved = 17072;
}
/*
equation index: 17073
type: SIMPLE_ASSIGN
$whenCondition169 = not pre(trafo_46_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17073};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[77]] /* $whenCondition169 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17073;
}
/*
equation index: 17074
type: WHEN

when {} then
  trafo_46_4046.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17074};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[77]] /* $whenCondition169 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[77] /* $whenCondition169 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17074;
}
/*
equation index: 17076
type: SIMPLE_ASSIGN
$whenCondition171 = not trafo_46_4046.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17076};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[80]] /* $whenCondition171 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 17076;
}
/*
equation index: 17077
type: SIMPLE_ASSIGN
$whenCondition170 = trafo_46_4046.running.value and not pre(trafo_46_4046.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17077};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[79]] /* $whenCondition170 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17077;
}
/*
equation index: 17078
type: WHEN

when {$whenCondition171} then
  trafo_46_4046.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17078};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[80]] /* $whenCondition171 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[80] /* $whenCondition171 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[145]] /* trafo_46_4046.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[79]] /* $whenCondition170 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[79] /* $whenCondition170 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[145]] /* trafo_46_4046.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17078;
}
/*
equation index: 17080
type: SIMPLE_ASSIGN
$DAEres725 = if trafo_46_4046.running.value then trafo_46_4046.rTfoPu ^ 2.0 * load_46.terminal.V.im - (trafo_46_4046.rTfoPu * line_4046_4047.terminal1.V.im + trafo_46_4046.ZPu.re * trafo_46_4046.terminal1.i.im + trafo_46_4046.ZPu.im * trafo_46_4046.terminal1.i.re) else trafo_46_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17080};
  modelica_real tmp3401;
  modelica_boolean tmp3402;
  modelica_real tmp3403;
  tmp3402 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp3402)
  {
    tmp3401 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */);
    tmp3403 = ((tmp3401 * tmp3401)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3857]] /* trafo_46_4046.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3856]] /* trafo_46_4046.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)));
  }
  else
  {
    tmp3403 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[725]) /* $DAEres725 DAE_RESIDUAL_VAR */ = tmp3403;
  threadData->lastEquationSolved = 17080;
}
/*
equation index: 17081
type: SIMPLE_ASSIGN
$DAEres730 = if trafo_46_4046.running.value then trafo_46_4046.terminal1.i.re - trafo_46_4046.rTfoPu * (trafo_46_4046.YPu.re * line_4046_4047.terminal1.V.re + (-trafo_46_4046.YPu.im) * line_4046_4047.terminal1.V.im - trafo_46_4046.terminal2.i.re) else trafo_46_4046.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17081};
  (data->simulationInfo->daeModeData->residualVars[730]) /* $DAEres730 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3855]] /* trafo_46_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3854]] /* trafo_46_4046.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17081;
}
/*
equation index: 17082
type: SIMPLE_ASSIGN
$DAEres731 = if trafo_46_4046.running.value then trafo_46_4046.rTfoPu ^ 2.0 * load_46.terminal.V.re - (trafo_46_4046.rTfoPu * line_4046_4047.terminal1.V.re + trafo_46_4046.ZPu.re * trafo_46_4046.terminal1.i.re - trafo_46_4046.ZPu.im * trafo_46_4046.terminal1.i.im) else trafo_46_4046.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17082};
  modelica_real tmp3404;
  modelica_boolean tmp3405;
  modelica_real tmp3406;
  tmp3405 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp3405)
  {
    tmp3404 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */);
    tmp3406 = ((tmp3404 * tmp3404)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3857]] /* trafo_46_4046.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3856]] /* trafo_46_4046.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */))));
  }
  else
  {
    tmp3406 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[731]) /* $DAEres731 DAE_RESIDUAL_VAR */ = tmp3406;
  threadData->lastEquationSolved = 17082;
}
/*
equation index: 17083
type: SIMPLE_ASSIGN
$DAEres732 = if trafo_46_4046.running.value then trafo_46_4046.terminal1.i.im - trafo_46_4046.rTfoPu * (trafo_46_4046.YPu.re * line_4046_4047.terminal1.V.im + trafo_46_4046.YPu.im * line_4046_4047.terminal1.V.re - trafo_46_4046.terminal2.i.im) else trafo_46_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17083};
  (data->simulationInfo->daeModeData->residualVars[732]) /* $DAEres732 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3858]] /* trafo_46_4046.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3855]] /* trafo_46_4046.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3854]] /* trafo_46_4046.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17083;
}
/*
equation index: 17084
type: SIMPLE_ASSIGN
trafo_46_4046.U1Pu = if trafo_46_4046.running.value then if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17084};
  modelica_real tmp3407;
  modelica_real tmp3408;
  modelica_real tmp3409;
  modelica_boolean tmp3410;
  modelica_real tmp3411;
  modelica_boolean tmp3412;
  modelica_real tmp3413;
  tmp3412 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp3412)
  {
    tmp3410 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
    if(tmp3410)
    {
      tmp3411 = 0.0;
    }
    else
    {
      tmp3407 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
      tmp3408 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
      tmp3409 = (tmp3407 * tmp3407) + (tmp3408 * tmp3408);
      if(tmp3409 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3409, 0.5);
      }
      tmp3411 = sqrt(tmp3409);
    }
    tmp3413 = tmp3411;
  }
  else
  {
    tmp3413 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3188]] /* trafo_46_4046.U1Pu variable */) = tmp3413;
  threadData->lastEquationSolved = 17084;
}
/*
equation index: 17085
type: SIMPLE_ASSIGN
trafo_46_4046.U2Pu = if trafo_46_4046.running.value then if line_4046_4047.terminal1.V.re == 0.0 and line_4046_4047.terminal1.V.im == 0.0 then 0.0 else (line_4046_4047.terminal1.V.re ^ 2.0 + line_4046_4047.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17085};
  modelica_real tmp3414;
  modelica_real tmp3415;
  modelica_real tmp3416;
  modelica_boolean tmp3417;
  modelica_real tmp3418;
  modelica_boolean tmp3419;
  modelica_real tmp3420;
  tmp3419 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */);
  if(tmp3419)
  {
    tmp3417 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0));
    if(tmp3417)
    {
      tmp3418 = 0.0;
    }
    else
    {
      tmp3414 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */);
      tmp3415 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */);
      tmp3416 = (tmp3414 * tmp3414) + (tmp3415 * tmp3415);
      if(tmp3416 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3416, 0.5);
      }
      tmp3418 = sqrt(tmp3416);
    }
    tmp3420 = tmp3418;
  }
  else
  {
    tmp3420 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3189]] /* trafo_46_4046.U2Pu variable */) = tmp3420;
  threadData->lastEquationSolved = 17085;
}
/*
equation index: 17086
type: SIMPLE_ASSIGN
$whenCondition172 = not pre(trafo_43_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17086};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[81]] /* $whenCondition172 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17086;
}
/*
equation index: 17087
type: WHEN

when {} then
  trafo_43_4043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17087};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[81]] /* $whenCondition172 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[81] /* $whenCondition172 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17087;
}
/*
equation index: 17089
type: SIMPLE_ASSIGN
$whenCondition174 = not trafo_43_4043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17089};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[83]] /* $whenCondition174 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17089;
}
/*
equation index: 17090
type: SIMPLE_ASSIGN
$whenCondition173 = trafo_43_4043.running.value and not pre(trafo_43_4043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17090};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[82]] /* $whenCondition173 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17090;
}
/*
equation index: 17091
type: WHEN

when {$whenCondition174} then
  trafo_43_4043.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17091};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[83]] /* $whenCondition174 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[83] /* $whenCondition174 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[144]] /* trafo_43_4043.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[82]] /* $whenCondition173 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[82] /* $whenCondition173 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[144]] /* trafo_43_4043.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17091;
}
/*
equation index: 17093
type: SIMPLE_ASSIGN
$DAEres780 = if trafo_43_4043.running.value then trafo_43_4043.terminal1.i.im - trafo_43_4043.rTfoPu * (trafo_43_4043.YPu.re * line_4043_4046.terminal1.V.im + trafo_43_4043.YPu.im * line_4043_4046.terminal1.V.re - trafo_43_4043.terminal2.i.im) else trafo_43_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17093};
  (data->simulationInfo->daeModeData->residualVars[780]) /* $DAEres780 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3846]] /* trafo_43_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3845]] /* trafo_43_4043.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17093;
}
/*
equation index: 17094
type: SIMPLE_ASSIGN
$DAEres782 = if trafo_43_4043.running.value then trafo_43_4043.terminal1.i.re - trafo_43_4043.rTfoPu * (trafo_43_4043.YPu.re * line_4043_4046.terminal1.V.re + (-trafo_43_4043.YPu.im) * line_4043_4046.terminal1.V.im - trafo_43_4043.terminal2.i.re) else trafo_43_4043.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17094};
  (data->simulationInfo->daeModeData->residualVars[782]) /* $DAEres782 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3846]] /* trafo_43_4043.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3845]] /* trafo_43_4043.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17094;
}
/*
equation index: 17095
type: SIMPLE_ASSIGN
$DAEres783 = if trafo_43_4043.running.value then trafo_43_4043.rTfoPu ^ 2.0 * load_43.terminal.V.im - (trafo_43_4043.rTfoPu * line_4043_4046.terminal1.V.im + trafo_43_4043.ZPu.re * trafo_43_4043.terminal1.i.im + trafo_43_4043.ZPu.im * trafo_43_4043.terminal1.i.re) else trafo_43_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17095};
  modelica_real tmp3421;
  modelica_boolean tmp3422;
  modelica_real tmp3423;
  tmp3422 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp3422)
  {
    tmp3421 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */);
    tmp3423 = ((tmp3421 * tmp3421)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3848]] /* trafo_43_4043.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3847]] /* trafo_43_4043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)));
  }
  else
  {
    tmp3423 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[783]) /* $DAEres783 DAE_RESIDUAL_VAR */ = tmp3423;
  threadData->lastEquationSolved = 17095;
}
/*
equation index: 17096
type: SIMPLE_ASSIGN
$DAEres786 = if trafo_43_4043.running.value then trafo_43_4043.rTfoPu ^ 2.0 * load_43.terminal.V.re - (trafo_43_4043.rTfoPu * line_4043_4046.terminal1.V.re + trafo_43_4043.ZPu.re * trafo_43_4043.terminal1.i.re - trafo_43_4043.ZPu.im * trafo_43_4043.terminal1.i.im) else trafo_43_4043.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17096};
  modelica_real tmp3424;
  modelica_boolean tmp3425;
  modelica_real tmp3426;
  tmp3425 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp3425)
  {
    tmp3424 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */);
    tmp3426 = ((tmp3424 * tmp3424)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3849]] /* trafo_43_4043.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3848]] /* trafo_43_4043.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3847]] /* trafo_43_4043.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */))));
  }
  else
  {
    tmp3426 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[786]) /* $DAEres786 DAE_RESIDUAL_VAR */ = tmp3426;
  threadData->lastEquationSolved = 17096;
}
/*
equation index: 17097
type: SIMPLE_ASSIGN
trafo_43_4043.U1Pu = if trafo_43_4043.running.value then if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17097};
  modelica_real tmp3427;
  modelica_real tmp3428;
  modelica_real tmp3429;
  modelica_boolean tmp3430;
  modelica_real tmp3431;
  modelica_boolean tmp3432;
  modelica_real tmp3433;
  tmp3432 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp3432)
  {
    tmp3430 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
    if(tmp3430)
    {
      tmp3431 = 0.0;
    }
    else
    {
      tmp3427 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
      tmp3428 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
      tmp3429 = (tmp3427 * tmp3427) + (tmp3428 * tmp3428);
      if(tmp3429 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3429, 0.5);
      }
      tmp3431 = sqrt(tmp3429);
    }
    tmp3433 = tmp3431;
  }
  else
  {
    tmp3433 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3178]] /* trafo_43_4043.U1Pu variable */) = tmp3433;
  threadData->lastEquationSolved = 17097;
}
/*
equation index: 17098
type: SIMPLE_ASSIGN
trafo_43_4043.U2Pu = if trafo_43_4043.running.value then if line_4043_4046.terminal1.V.re == 0.0 and line_4043_4046.terminal1.V.im == 0.0 then 0.0 else (line_4043_4046.terminal1.V.re ^ 2.0 + line_4043_4046.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17098};
  modelica_real tmp3434;
  modelica_real tmp3435;
  modelica_real tmp3436;
  modelica_boolean tmp3437;
  modelica_real tmp3438;
  modelica_boolean tmp3439;
  modelica_real tmp3440;
  tmp3439 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */);
  if(tmp3439)
  {
    tmp3437 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0));
    if(tmp3437)
    {
      tmp3438 = 0.0;
    }
    else
    {
      tmp3434 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */);
      tmp3435 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */);
      tmp3436 = (tmp3434 * tmp3434) + (tmp3435 * tmp3435);
      if(tmp3436 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3436, 0.5);
      }
      tmp3438 = sqrt(tmp3436);
    }
    tmp3440 = tmp3438;
  }
  else
  {
    tmp3440 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3179]] /* trafo_43_4043.U2Pu variable */) = tmp3440;
  threadData->lastEquationSolved = 17098;
}
/*
equation index: 17099
type: SIMPLE_ASSIGN
$whenCondition175 = not pre(trafo_42_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17099};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[84]] /* $whenCondition175 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17099;
}
/*
equation index: 17100
type: WHEN

when {} then
  trafo_42_4042.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17100};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[84]] /* $whenCondition175 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[84] /* $whenCondition175 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17100;
}
/*
equation index: 17102
type: SIMPLE_ASSIGN
$whenCondition177 = not trafo_42_4042.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17102};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[86]] /* $whenCondition177 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 17102;
}
/*
equation index: 17103
type: SIMPLE_ASSIGN
$whenCondition176 = trafo_42_4042.running.value and not pre(trafo_42_4042.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17103};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[85]] /* $whenCondition176 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17103;
}
/*
equation index: 17104
type: WHEN

when {$whenCondition177} then
  trafo_42_4042.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17104};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[86]] /* $whenCondition177 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[86] /* $whenCondition177 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[143]] /* trafo_42_4042.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[85]] /* $whenCondition176 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[85] /* $whenCondition176 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[143]] /* trafo_42_4042.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17104;
}
/*
equation index: 17106
type: SIMPLE_ASSIGN
$DAEres669 = if trafo_42_4042.running.value then trafo_42_4042.terminal1.i.im - trafo_42_4042.rTfoPu * (trafo_42_4042.YPu.re * line_4042_4043.terminal1.V.im + trafo_42_4042.YPu.im * line_4042_4043.terminal1.V.re - trafo_42_4042.terminal2.i.im) else trafo_42_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17106};
  (data->simulationInfo->daeModeData->residualVars[669]) /* $DAEres669 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3837]] /* trafo_42_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3836]] /* trafo_42_4042.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17106;
}
/*
equation index: 17107
type: SIMPLE_ASSIGN
$DAEres672 = if trafo_42_4042.running.value then trafo_42_4042.terminal1.i.re - trafo_42_4042.rTfoPu * (trafo_42_4042.YPu.re * line_4042_4043.terminal1.V.re + (-trafo_42_4042.YPu.im) * line_4042_4043.terminal1.V.im - trafo_42_4042.terminal2.i.re) else trafo_42_4042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17107};
  (data->simulationInfo->daeModeData->residualVars[672]) /* $DAEres672 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3837]] /* trafo_42_4042.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3836]] /* trafo_42_4042.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17107;
}
/*
equation index: 17108
type: SIMPLE_ASSIGN
$DAEres675 = if trafo_42_4042.running.value then trafo_42_4042.rTfoPu ^ 2.0 * load_42.terminal.V.re - (trafo_42_4042.rTfoPu * line_4042_4043.terminal1.V.re + trafo_42_4042.ZPu.re * trafo_42_4042.terminal1.i.re - trafo_42_4042.ZPu.im * trafo_42_4042.terminal1.i.im) else trafo_42_4042.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17108};
  modelica_real tmp3441;
  modelica_boolean tmp3442;
  modelica_real tmp3443;
  tmp3442 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp3442)
  {
    tmp3441 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */);
    tmp3443 = ((tmp3441 * tmp3441)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3839]] /* trafo_42_4042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3838]] /* trafo_42_4042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */))));
  }
  else
  {
    tmp3443 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[675]) /* $DAEres675 DAE_RESIDUAL_VAR */ = tmp3443;
  threadData->lastEquationSolved = 17108;
}
/*
equation index: 17109
type: SIMPLE_ASSIGN
$DAEres676 = if trafo_42_4042.running.value then trafo_42_4042.rTfoPu ^ 2.0 * load_42.terminal.V.im - (trafo_42_4042.rTfoPu * line_4042_4043.terminal1.V.im + trafo_42_4042.ZPu.re * trafo_42_4042.terminal1.i.im + trafo_42_4042.ZPu.im * trafo_42_4042.terminal1.i.re) else trafo_42_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17109};
  modelica_real tmp3444;
  modelica_boolean tmp3445;
  modelica_real tmp3446;
  tmp3445 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp3445)
  {
    tmp3444 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */);
    tmp3446 = ((tmp3444 * tmp3444)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3840]] /* trafo_42_4042.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3839]] /* trafo_42_4042.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3838]] /* trafo_42_4042.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)));
  }
  else
  {
    tmp3446 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[676]) /* $DAEres676 DAE_RESIDUAL_VAR */ = tmp3446;
  threadData->lastEquationSolved = 17109;
}
/*
equation index: 17110
type: SIMPLE_ASSIGN
trafo_42_4042.U1Pu = if trafo_42_4042.running.value then if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17110};
  modelica_real tmp3447;
  modelica_real tmp3448;
  modelica_real tmp3449;
  modelica_boolean tmp3450;
  modelica_real tmp3451;
  modelica_boolean tmp3452;
  modelica_real tmp3453;
  tmp3452 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp3452)
  {
    tmp3450 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
    if(tmp3450)
    {
      tmp3451 = 0.0;
    }
    else
    {
      tmp3447 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
      tmp3448 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
      tmp3449 = (tmp3447 * tmp3447) + (tmp3448 * tmp3448);
      if(tmp3449 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3449, 0.5);
      }
      tmp3451 = sqrt(tmp3449);
    }
    tmp3453 = tmp3451;
  }
  else
  {
    tmp3453 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* trafo_42_4042.U1Pu variable */) = tmp3453;
  threadData->lastEquationSolved = 17110;
}
/*
equation index: 17111
type: SIMPLE_ASSIGN
trafo_42_4042.U2Pu = if trafo_42_4042.running.value then if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17111};
  modelica_real tmp3454;
  modelica_real tmp3455;
  modelica_real tmp3456;
  modelica_boolean tmp3457;
  modelica_real tmp3458;
  modelica_boolean tmp3459;
  modelica_real tmp3460;
  tmp3459 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp3459)
  {
    tmp3457 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
    if(tmp3457)
    {
      tmp3458 = 0.0;
    }
    else
    {
      tmp3454 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
      tmp3455 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
      tmp3456 = (tmp3454 * tmp3454) + (tmp3455 * tmp3455);
      if(tmp3456 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3456, 0.5);
      }
      tmp3458 = sqrt(tmp3456);
    }
    tmp3460 = tmp3458;
  }
  else
  {
    tmp3460 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* trafo_42_4042.U2Pu variable */) = tmp3460;
  threadData->lastEquationSolved = 17111;
}
/*
equation index: 17112
type: SIMPLE_ASSIGN
$whenCondition178 = not pre(trafo_41_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17112};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[87]] /* $whenCondition178 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17112;
}
/*
equation index: 17113
type: WHEN

when {} then
  trafo_41_4041.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17113};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[87]] /* $whenCondition178 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[87] /* $whenCondition178 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17113;
}
/*
equation index: 17115
type: SIMPLE_ASSIGN
$whenCondition180 = not trafo_41_4041.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17115};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[90]] /* $whenCondition180 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 17115;
}
/*
equation index: 17116
type: SIMPLE_ASSIGN
$whenCondition179 = trafo_41_4041.running.value and not pre(trafo_41_4041.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17116};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[88]] /* $whenCondition179 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17116;
}
/*
equation index: 17117
type: WHEN

when {$whenCondition180} then
  trafo_41_4041.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17117};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[90]] /* $whenCondition180 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[90] /* $whenCondition180 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[142]] /* trafo_41_4041.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[88]] /* $whenCondition179 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[88] /* $whenCondition179 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[142]] /* trafo_41_4041.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17117;
}
/*
equation index: 17119
type: SIMPLE_ASSIGN
$DAEres638 = if trafo_41_4041.running.value then trafo_41_4041.terminal1.i.re - trafo_41_4041.rTfoPu * (trafo_41_4041.YPu.re * line_4041_4061.terminal1.V.re + (-trafo_41_4041.YPu.im) * line_4041_4061.terminal1.V.im - trafo_41_4041.terminal2.i.re) else trafo_41_4041.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17119};
  (data->simulationInfo->daeModeData->residualVars[638]) /* $DAEres638 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3828]] /* trafo_41_4041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3827]] /* trafo_41_4041.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17119;
}
/*
equation index: 17120
type: SIMPLE_ASSIGN
$DAEres641 = if trafo_41_4041.running.value then trafo_41_4041.terminal1.i.im - trafo_41_4041.rTfoPu * (trafo_41_4041.YPu.re * line_4041_4061.terminal1.V.im + trafo_41_4041.YPu.im * line_4041_4061.terminal1.V.re - trafo_41_4041.terminal2.i.im) else trafo_41_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17120};
  (data->simulationInfo->daeModeData->residualVars[641]) /* $DAEres641 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3828]] /* trafo_41_4041.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3827]] /* trafo_41_4041.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17120;
}
/*
equation index: 17121
type: SIMPLE_ASSIGN
$DAEres643 = if trafo_41_4041.running.value then trafo_41_4041.rTfoPu ^ 2.0 * load_41.terminal.V.re - (trafo_41_4041.rTfoPu * line_4041_4061.terminal1.V.re + trafo_41_4041.ZPu.re * trafo_41_4041.terminal1.i.re - trafo_41_4041.ZPu.im * trafo_41_4041.terminal1.i.im) else trafo_41_4041.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17121};
  modelica_real tmp3461;
  modelica_boolean tmp3462;
  modelica_real tmp3463;
  tmp3462 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp3462)
  {
    tmp3461 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */);
    tmp3463 = ((tmp3461 * tmp3461)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3830]] /* trafo_41_4041.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3829]] /* trafo_41_4041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */))));
  }
  else
  {
    tmp3463 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[643]) /* $DAEres643 DAE_RESIDUAL_VAR */ = tmp3463;
  threadData->lastEquationSolved = 17121;
}
/*
equation index: 17122
type: SIMPLE_ASSIGN
$DAEres645 = if trafo_41_4041.running.value then trafo_41_4041.rTfoPu ^ 2.0 * load_41.terminal.V.im - (trafo_41_4041.rTfoPu * line_4041_4061.terminal1.V.im + trafo_41_4041.ZPu.re * trafo_41_4041.terminal1.i.im + trafo_41_4041.ZPu.im * trafo_41_4041.terminal1.i.re) else trafo_41_4041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17122};
  modelica_real tmp3464;
  modelica_boolean tmp3465;
  modelica_real tmp3466;
  tmp3465 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp3465)
  {
    tmp3464 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */);
    tmp3466 = ((tmp3464 * tmp3464)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3831]] /* trafo_41_4041.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3830]] /* trafo_41_4041.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3829]] /* trafo_41_4041.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)));
  }
  else
  {
    tmp3466 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[645]) /* $DAEres645 DAE_RESIDUAL_VAR */ = tmp3466;
  threadData->lastEquationSolved = 17122;
}
/*
equation index: 17123
type: SIMPLE_ASSIGN
trafo_41_4041.U1Pu = if trafo_41_4041.running.value then if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17123};
  modelica_real tmp3467;
  modelica_real tmp3468;
  modelica_real tmp3469;
  modelica_boolean tmp3470;
  modelica_real tmp3471;
  modelica_boolean tmp3472;
  modelica_real tmp3473;
  tmp3472 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp3472)
  {
    tmp3470 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
    if(tmp3470)
    {
      tmp3471 = 0.0;
    }
    else
    {
      tmp3467 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
      tmp3468 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
      tmp3469 = (tmp3467 * tmp3467) + (tmp3468 * tmp3468);
      if(tmp3469 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3469, 0.5);
      }
      tmp3471 = sqrt(tmp3469);
    }
    tmp3473 = tmp3471;
  }
  else
  {
    tmp3473 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3158]] /* trafo_41_4041.U1Pu variable */) = tmp3473;
  threadData->lastEquationSolved = 17123;
}
/*
equation index: 17124
type: SIMPLE_ASSIGN
trafo_41_4041.U2Pu = if trafo_41_4041.running.value then if line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0 then 0.0 else (line_4041_4061.terminal1.V.re ^ 2.0 + line_4041_4061.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17124};
  modelica_real tmp3474;
  modelica_real tmp3475;
  modelica_real tmp3476;
  modelica_boolean tmp3477;
  modelica_real tmp3478;
  modelica_boolean tmp3479;
  modelica_real tmp3480;
  tmp3479 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp3479)
  {
    tmp3477 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0));
    if(tmp3477)
    {
      tmp3478 = 0.0;
    }
    else
    {
      tmp3474 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
      tmp3475 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
      tmp3476 = (tmp3474 * tmp3474) + (tmp3475 * tmp3475);
      if(tmp3476 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3476, 0.5);
      }
      tmp3478 = sqrt(tmp3476);
    }
    tmp3480 = tmp3478;
  }
  else
  {
    tmp3480 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3159]] /* trafo_41_4041.U2Pu variable */) = tmp3480;
  threadData->lastEquationSolved = 17124;
}
/*
equation index: 17125
type: SIMPLE_ASSIGN
$whenCondition181 = not pre(trafo_32_2032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17125};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[91]] /* $whenCondition181 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17125;
}
/*
equation index: 17126
type: WHEN

when {} then
  trafo_32_2032.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17126};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[91]] /* $whenCondition181 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[91] /* $whenCondition181 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17126;
}
/*
equation index: 17128
type: SIMPLE_ASSIGN
$whenCondition183 = not trafo_32_2032.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17128};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[93]] /* $whenCondition183 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 17128;
}
/*
equation index: 17129
type: SIMPLE_ASSIGN
$whenCondition182 = trafo_32_2032.running.value and not pre(trafo_32_2032.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17129};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[92]] /* $whenCondition182 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17129;
}
/*
equation index: 17130
type: WHEN

when {$whenCondition183} then
  trafo_32_2032.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17130};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[93]] /* $whenCondition183 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[93] /* $whenCondition183 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[140]] /* trafo_32_2032.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[92]] /* $whenCondition182 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[92] /* $whenCondition182 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[140]] /* trafo_32_2032.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17130;
}
/*
equation index: 17132
type: SIMPLE_ASSIGN
$DAEres258 = if trafo_32_2032.running.value then trafo_32_2032.terminal1.i.re - trafo_32_2032.rTfoPu * (trafo_32_2032.YPu.re * line_2031_2032b.terminal2.V.re + (-trafo_32_2032.YPu.im) * line_2031_2032b.terminal2.V.im - trafo_32_2032.terminal2.i.re) else trafo_32_2032.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17132};
  (data->simulationInfo->daeModeData->residualVars[258]) /* $DAEres258 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3810]] /* trafo_32_2032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3809]] /* trafo_32_2032.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17132;
}
/*
equation index: 17133
type: SIMPLE_ASSIGN
$DAEres259 = if trafo_32_2032.running.value then trafo_32_2032.rTfoPu ^ 2.0 * load_32.terminal.V.re - (trafo_32_2032.rTfoPu * line_2031_2032b.terminal2.V.re + trafo_32_2032.ZPu.re * trafo_32_2032.terminal1.i.re - trafo_32_2032.ZPu.im * trafo_32_2032.terminal1.i.im) else trafo_32_2032.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17133};
  modelica_real tmp3481;
  modelica_boolean tmp3482;
  modelica_real tmp3483;
  tmp3482 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp3482)
  {
    tmp3481 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */);
    tmp3483 = ((tmp3481 * tmp3481)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3812]] /* trafo_32_2032.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3811]] /* trafo_32_2032.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */))));
  }
  else
  {
    tmp3483 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[259]) /* $DAEres259 DAE_RESIDUAL_VAR */ = tmp3483;
  threadData->lastEquationSolved = 17133;
}
/*
equation index: 17134
type: SIMPLE_ASSIGN
$DAEres261 = if trafo_32_2032.running.value then trafo_32_2032.rTfoPu ^ 2.0 * load_32.terminal.V.im - (trafo_32_2032.rTfoPu * line_2031_2032b.terminal2.V.im + trafo_32_2032.ZPu.re * trafo_32_2032.terminal1.i.im + trafo_32_2032.ZPu.im * trafo_32_2032.terminal1.i.re) else trafo_32_2032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17134};
  modelica_real tmp3484;
  modelica_boolean tmp3485;
  modelica_real tmp3486;
  tmp3485 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp3485)
  {
    tmp3484 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */);
    tmp3486 = ((tmp3484 * tmp3484)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3812]] /* trafo_32_2032.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3811]] /* trafo_32_2032.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)));
  }
  else
  {
    tmp3486 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[261]) /* $DAEres261 DAE_RESIDUAL_VAR */ = tmp3486;
  threadData->lastEquationSolved = 17134;
}
/*
equation index: 17135
type: SIMPLE_ASSIGN
$DAEres288 = if trafo_32_2032.running.value then trafo_32_2032.terminal1.i.im - trafo_32_2032.rTfoPu * (trafo_32_2032.YPu.re * line_2031_2032b.terminal2.V.im + trafo_32_2032.YPu.im * line_2031_2032b.terminal2.V.re - trafo_32_2032.terminal2.i.im) else trafo_32_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17135};
  (data->simulationInfo->daeModeData->residualVars[288]) /* $DAEres288 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3813]] /* trafo_32_2032.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3810]] /* trafo_32_2032.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3809]] /* trafo_32_2032.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17135;
}
/*
equation index: 17136
type: SIMPLE_ASSIGN
trafo_32_2032.U1Pu = if trafo_32_2032.running.value then if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17136};
  modelica_real tmp3487;
  modelica_real tmp3488;
  modelica_real tmp3489;
  modelica_boolean tmp3490;
  modelica_real tmp3491;
  modelica_boolean tmp3492;
  modelica_real tmp3493;
  tmp3492 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp3492)
  {
    tmp3490 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
    if(tmp3490)
    {
      tmp3491 = 0.0;
    }
    else
    {
      tmp3487 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
      tmp3488 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
      tmp3489 = (tmp3487 * tmp3487) + (tmp3488 * tmp3488);
      if(tmp3489 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3489, 0.5);
      }
      tmp3491 = sqrt(tmp3489);
    }
    tmp3493 = tmp3491;
  }
  else
  {
    tmp3493 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3138]] /* trafo_32_2032.U1Pu variable */) = tmp3493;
  threadData->lastEquationSolved = 17136;
}
/*
equation index: 17137
type: SIMPLE_ASSIGN
trafo_32_2032.U2Pu = if trafo_32_2032.running.value then if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17137};
  modelica_real tmp3494;
  modelica_real tmp3495;
  modelica_real tmp3496;
  modelica_boolean tmp3497;
  modelica_real tmp3498;
  modelica_boolean tmp3499;
  modelica_real tmp3500;
  tmp3499 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp3499)
  {
    tmp3497 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
    if(tmp3497)
    {
      tmp3498 = 0.0;
    }
    else
    {
      tmp3494 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
      tmp3495 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
      tmp3496 = (tmp3494 * tmp3494) + (tmp3495 * tmp3495);
      if(tmp3496 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3496, 0.5);
      }
      tmp3498 = sqrt(tmp3496);
    }
    tmp3500 = tmp3498;
  }
  else
  {
    tmp3500 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3139]] /* trafo_32_2032.U2Pu variable */) = tmp3500;
  threadData->lastEquationSolved = 17137;
}
/*
equation index: 17138
type: SIMPLE_ASSIGN
$whenCondition184 = not pre(trafo_31_2031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17138};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[94]] /* $whenCondition184 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */));
  threadData->lastEquationSolved = 17138;
}
/*
equation index: 17139
type: WHEN

when {} then
  trafo_31_2031.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17139};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[94]] /* $whenCondition184 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[94] /* $whenCondition184 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17139;
}
/*
equation index: 17141
type: SIMPLE_ASSIGN
$whenCondition186 = not trafo_31_2031.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17141};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[96]] /* $whenCondition186 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */));
  threadData->lastEquationSolved = 17141;
}
/*
equation index: 17142
type: SIMPLE_ASSIGN
$whenCondition185 = trafo_31_2031.running.value and not pre(trafo_31_2031.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17142};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[95]] /* $whenCondition185 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17142;
}
/*
equation index: 17143
type: WHEN

when {$whenCondition186} then
  trafo_31_2031.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17143};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[96]] /* $whenCondition186 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[96] /* $whenCondition186 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[139]] /* trafo_31_2031.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[95]] /* $whenCondition185 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[95] /* $whenCondition185 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[139]] /* trafo_31_2031.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17143;
}
/*
equation index: 17145
type: SIMPLE_ASSIGN
$DAEres293 = if trafo_31_2031.running.value then trafo_31_2031.terminal1.i.im - trafo_31_2031.rTfoPu * (trafo_31_2031.YPu.re * line_2031_2032b.terminal1.V.im + trafo_31_2031.YPu.im * line_2031_2032b.terminal1.V.re - trafo_31_2031.terminal2.i.im) else trafo_31_2031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17145};
  (data->simulationInfo->daeModeData->residualVars[293]) /* $DAEres293 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3801]] /* trafo_31_2031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3800]] /* trafo_31_2031.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17145;
}
/*
equation index: 17146
type: SIMPLE_ASSIGN
$DAEres297 = if trafo_31_2031.running.value then trafo_31_2031.terminal1.i.re - trafo_31_2031.rTfoPu * (trafo_31_2031.YPu.re * line_2031_2032b.terminal1.V.re + (-trafo_31_2031.YPu.im) * line_2031_2032b.terminal1.V.im - trafo_31_2031.terminal2.i.re) else trafo_31_2031.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17146};
  (data->simulationInfo->daeModeData->residualVars[297]) /* $DAEres297 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3801]] /* trafo_31_2031.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3800]] /* trafo_31_2031.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17146;
}
/*
equation index: 17147
type: SIMPLE_ASSIGN
$DAEres298 = if trafo_31_2031.running.value then trafo_31_2031.rTfoPu ^ 2.0 * load_31.terminal.V.im - (trafo_31_2031.rTfoPu * line_2031_2032b.terminal1.V.im + trafo_31_2031.ZPu.re * trafo_31_2031.terminal1.i.im + trafo_31_2031.ZPu.im * trafo_31_2031.terminal1.i.re) else trafo_31_2031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17147};
  modelica_real tmp3501;
  modelica_boolean tmp3502;
  modelica_real tmp3503;
  tmp3502 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp3502)
  {
    tmp3501 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */);
    tmp3503 = ((tmp3501 * tmp3501)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3803]] /* trafo_31_2031.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3802]] /* trafo_31_2031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)));
  }
  else
  {
    tmp3503 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[298]) /* $DAEres298 DAE_RESIDUAL_VAR */ = tmp3503;
  threadData->lastEquationSolved = 17147;
}
/*
equation index: 17148
type: SIMPLE_ASSIGN
$DAEres300 = if trafo_31_2031.running.value then trafo_31_2031.rTfoPu ^ 2.0 * load_31.terminal.V.re - (trafo_31_2031.rTfoPu * line_2031_2032b.terminal1.V.re + trafo_31_2031.ZPu.re * trafo_31_2031.terminal1.i.re - trafo_31_2031.ZPu.im * trafo_31_2031.terminal1.i.im) else trafo_31_2031.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17148};
  modelica_real tmp3504;
  modelica_boolean tmp3505;
  modelica_real tmp3506;
  tmp3505 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp3505)
  {
    tmp3504 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */);
    tmp3506 = ((tmp3504 * tmp3504)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3804]] /* trafo_31_2031.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3803]] /* trafo_31_2031.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3802]] /* trafo_31_2031.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */))));
  }
  else
  {
    tmp3506 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[300]) /* $DAEres300 DAE_RESIDUAL_VAR */ = tmp3506;
  threadData->lastEquationSolved = 17148;
}
/*
equation index: 17149
type: SIMPLE_ASSIGN
trafo_31_2031.U1Pu = if trafo_31_2031.running.value then if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17149};
  modelica_real tmp3507;
  modelica_real tmp3508;
  modelica_real tmp3509;
  modelica_boolean tmp3510;
  modelica_real tmp3511;
  modelica_boolean tmp3512;
  modelica_real tmp3513;
  tmp3512 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp3512)
  {
    tmp3510 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
    if(tmp3510)
    {
      tmp3511 = 0.0;
    }
    else
    {
      tmp3507 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
      tmp3508 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
      tmp3509 = (tmp3507 * tmp3507) + (tmp3508 * tmp3508);
      if(tmp3509 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3509, 0.5);
      }
      tmp3511 = sqrt(tmp3509);
    }
    tmp3513 = tmp3511;
  }
  else
  {
    tmp3513 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3128]] /* trafo_31_2031.U1Pu variable */) = tmp3513;
  threadData->lastEquationSolved = 17149;
}
/*
equation index: 17150
type: SIMPLE_ASSIGN
trafo_31_2031.U2Pu = if trafo_31_2031.running.value then if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17150};
  modelica_real tmp3514;
  modelica_real tmp3515;
  modelica_real tmp3516;
  modelica_boolean tmp3517;
  modelica_real tmp3518;
  modelica_boolean tmp3519;
  modelica_real tmp3520;
  tmp3519 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp3519)
  {
    tmp3517 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
    if(tmp3517)
    {
      tmp3518 = 0.0;
    }
    else
    {
      tmp3514 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
      tmp3515 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
      tmp3516 = (tmp3514 * tmp3514) + (tmp3515 * tmp3515);
      if(tmp3516 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3516, 0.5);
      }
      tmp3518 = sqrt(tmp3516);
    }
    tmp3520 = tmp3518;
  }
  else
  {
    tmp3520 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3129]] /* trafo_31_2031.U2Pu variable */) = tmp3520;
  threadData->lastEquationSolved = 17150;
}
/*
equation index: 17151
type: SIMPLE_ASSIGN
$whenCondition187 = not pre(trafo_22_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17151};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[97]] /* $whenCondition187 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17151;
}
/*
equation index: 17152
type: WHEN

when {} then
  trafo_22_1022.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17152};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[97]] /* $whenCondition187 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[97] /* $whenCondition187 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17152;
}
/*
equation index: 17154
type: SIMPLE_ASSIGN
$whenCondition189 = not trafo_22_1022.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17154};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[99]] /* $whenCondition189 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 17154;
}
/*
equation index: 17155
type: SIMPLE_ASSIGN
$whenCondition188 = trafo_22_1022.running.value and not pre(trafo_22_1022.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17155};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[98]] /* $whenCondition188 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17155;
}
/*
equation index: 17156
type: WHEN

when {$whenCondition189} then
  trafo_22_1022.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17156};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[99]] /* $whenCondition189 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[99] /* $whenCondition189 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[137]] /* trafo_22_1022.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[98]] /* $whenCondition188 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[98] /* $whenCondition188 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[137]] /* trafo_22_1022.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17156;
}
/*
equation index: 17158
type: SIMPLE_ASSIGN
$DAEres367 = if trafo_22_1022.running.value then trafo_22_1022.terminal1.i.re - trafo_22_1022.rTfoPu * (trafo_22_1022.YPu.re * line_1021_1022b.terminal2.V.re + (-trafo_22_1022.YPu.im) * line_1021_1022b.terminal2.V.im - trafo_22_1022.terminal2.i.re) else trafo_22_1022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17158};
  (data->simulationInfo->daeModeData->residualVars[367]) /* $DAEres367 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3783]] /* trafo_22_1022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3782]] /* trafo_22_1022.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17158;
}
/*
equation index: 17159
type: SIMPLE_ASSIGN
$DAEres369 = if trafo_22_1022.running.value then trafo_22_1022.terminal1.i.im - trafo_22_1022.rTfoPu * (trafo_22_1022.YPu.re * line_1021_1022b.terminal2.V.im + trafo_22_1022.YPu.im * line_1021_1022b.terminal2.V.re - trafo_22_1022.terminal2.i.im) else trafo_22_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17159};
  (data->simulationInfo->daeModeData->residualVars[369]) /* $DAEres369 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3783]] /* trafo_22_1022.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3782]] /* trafo_22_1022.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17159;
}
/*
equation index: 17160
type: SIMPLE_ASSIGN
$DAEres373 = if trafo_22_1022.running.value then trafo_22_1022.rTfoPu ^ 2.0 * load_22.terminal.V.im - (trafo_22_1022.rTfoPu * line_1021_1022b.terminal2.V.im + trafo_22_1022.ZPu.re * trafo_22_1022.terminal1.i.im + trafo_22_1022.ZPu.im * trafo_22_1022.terminal1.i.re) else trafo_22_1022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17160};
  modelica_real tmp3521;
  modelica_boolean tmp3522;
  modelica_real tmp3523;
  tmp3522 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp3522)
  {
    tmp3521 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */);
    tmp3523 = ((tmp3521 * tmp3521)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3785]] /* trafo_22_1022.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3784]] /* trafo_22_1022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)));
  }
  else
  {
    tmp3523 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[373]) /* $DAEres373 DAE_RESIDUAL_VAR */ = tmp3523;
  threadData->lastEquationSolved = 17160;
}
/*
equation index: 17161
type: SIMPLE_ASSIGN
$DAEres374 = if trafo_22_1022.running.value then trafo_22_1022.rTfoPu ^ 2.0 * load_22.terminal.V.re - (trafo_22_1022.rTfoPu * line_1021_1022b.terminal2.V.re + trafo_22_1022.ZPu.re * trafo_22_1022.terminal1.i.re - trafo_22_1022.ZPu.im * trafo_22_1022.terminal1.i.im) else trafo_22_1022.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17161};
  modelica_real tmp3524;
  modelica_boolean tmp3525;
  modelica_real tmp3526;
  tmp3525 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp3525)
  {
    tmp3524 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */);
    tmp3526 = ((tmp3524 * tmp3524)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3786]] /* trafo_22_1022.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3785]] /* trafo_22_1022.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3784]] /* trafo_22_1022.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */))));
  }
  else
  {
    tmp3526 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[374]) /* $DAEres374 DAE_RESIDUAL_VAR */ = tmp3526;
  threadData->lastEquationSolved = 17161;
}
/*
equation index: 17162
type: SIMPLE_ASSIGN
trafo_22_1022.U1Pu = if trafo_22_1022.running.value then if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17162};
  modelica_real tmp3527;
  modelica_real tmp3528;
  modelica_real tmp3529;
  modelica_boolean tmp3530;
  modelica_real tmp3531;
  modelica_boolean tmp3532;
  modelica_real tmp3533;
  tmp3532 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp3532)
  {
    tmp3530 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
    if(tmp3530)
    {
      tmp3531 = 0.0;
    }
    else
    {
      tmp3527 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
      tmp3528 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
      tmp3529 = (tmp3527 * tmp3527) + (tmp3528 * tmp3528);
      if(tmp3529 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3529, 0.5);
      }
      tmp3531 = sqrt(tmp3529);
    }
    tmp3533 = tmp3531;
  }
  else
  {
    tmp3533 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3108]] /* trafo_22_1022.U1Pu variable */) = tmp3533;
  threadData->lastEquationSolved = 17162;
}
/*
equation index: 17163
type: SIMPLE_ASSIGN
trafo_22_1022.U2Pu = if trafo_22_1022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17163};
  modelica_real tmp3534;
  modelica_real tmp3535;
  modelica_real tmp3536;
  modelica_boolean tmp3537;
  modelica_real tmp3538;
  modelica_boolean tmp3539;
  modelica_real tmp3540;
  tmp3539 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp3539)
  {
    tmp3537 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp3537)
    {
      tmp3538 = 0.0;
    }
    else
    {
      tmp3534 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp3535 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp3536 = (tmp3534 * tmp3534) + (tmp3535 * tmp3535);
      if(tmp3536 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3536, 0.5);
      }
      tmp3538 = sqrt(tmp3536);
    }
    tmp3540 = tmp3538;
  }
  else
  {
    tmp3540 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3109]] /* trafo_22_1022.U2Pu variable */) = tmp3540;
  threadData->lastEquationSolved = 17163;
}
/*
equation index: 17164
type: SIMPLE_ASSIGN
$whenCondition190 = not pre(trafo_13_1013.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17164};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[101]] /* $whenCondition190 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 17164;
}
/*
equation index: 17165
type: WHEN

when {} then
  trafo_13_1013.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17165};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[101]] /* $whenCondition190 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[101] /* $whenCondition190 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17165;
}
/*
equation index: 17167
type: SIMPLE_ASSIGN
$whenCondition192 = not trafo_13_1013.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17167};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[103]] /* $whenCondition192 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 17167;
}
/*
equation index: 17168
type: SIMPLE_ASSIGN
$whenCondition191 = trafo_13_1013.running.value and not pre(trafo_13_1013.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17168};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[102]] /* $whenCondition191 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17168;
}
/*
equation index: 17169
type: WHEN

when {$whenCondition192} then
  trafo_13_1013.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17169};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[103]] /* $whenCondition192 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[103] /* $whenCondition192 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[134]] /* trafo_13_1013.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[102]] /* $whenCondition191 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[102] /* $whenCondition191 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[134]] /* trafo_13_1013.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17169;
}
/*
equation index: 17171
type: SIMPLE_ASSIGN
$DAEres450 = if trafo_13_1013.running.value then trafo_13_1013.terminal1.i.im - trafo_13_1013.rTfoPu * (trafo_13_1013.YPu.re * line_1013_1014a.terminal1.V.im + trafo_13_1013.YPu.im * line_1013_1014a.terminal1.V.re - trafo_13_1013.terminal2.i.im) else trafo_13_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17171};
  (data->simulationInfo->daeModeData->residualVars[450]) /* $DAEres450 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3756]] /* trafo_13_1013.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3755]] /* trafo_13_1013.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17171;
}
/*
equation index: 17172
type: SIMPLE_ASSIGN
$DAEres452 = if trafo_13_1013.running.value then trafo_13_1013.terminal1.i.re - trafo_13_1013.rTfoPu * (trafo_13_1013.YPu.re * line_1013_1014a.terminal1.V.re + (-trafo_13_1013.YPu.im) * line_1013_1014a.terminal1.V.im - trafo_13_1013.terminal2.i.re) else trafo_13_1013.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17172};
  (data->simulationInfo->daeModeData->residualVars[452]) /* $DAEres452 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3756]] /* trafo_13_1013.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3755]] /* trafo_13_1013.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17172;
}
/*
equation index: 17173
type: SIMPLE_ASSIGN
$DAEres453 = if trafo_13_1013.running.value then trafo_13_1013.rTfoPu ^ 2.0 * load_13.terminal.V.im - (trafo_13_1013.rTfoPu * line_1013_1014a.terminal1.V.im + trafo_13_1013.ZPu.re * trafo_13_1013.terminal1.i.im + trafo_13_1013.ZPu.im * trafo_13_1013.terminal1.i.re) else trafo_13_1013.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17173};
  modelica_real tmp3541;
  modelica_boolean tmp3542;
  modelica_real tmp3543;
  tmp3542 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp3542)
  {
    tmp3541 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */);
    tmp3543 = ((tmp3541 * tmp3541)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3758]] /* trafo_13_1013.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3757]] /* trafo_13_1013.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)));
  }
  else
  {
    tmp3543 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[453]) /* $DAEres453 DAE_RESIDUAL_VAR */ = tmp3543;
  threadData->lastEquationSolved = 17173;
}
/*
equation index: 17174
type: SIMPLE_ASSIGN
$DAEres455 = if trafo_13_1013.running.value then trafo_13_1013.rTfoPu ^ 2.0 * load_13.terminal.V.re - (trafo_13_1013.rTfoPu * line_1013_1014a.terminal1.V.re + trafo_13_1013.ZPu.re * trafo_13_1013.terminal1.i.re - trafo_13_1013.ZPu.im * trafo_13_1013.terminal1.i.im) else trafo_13_1013.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17174};
  modelica_real tmp3544;
  modelica_boolean tmp3545;
  modelica_real tmp3546;
  tmp3545 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp3545)
  {
    tmp3544 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */);
    tmp3546 = ((tmp3544 * tmp3544)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3759]] /* trafo_13_1013.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3758]] /* trafo_13_1013.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3757]] /* trafo_13_1013.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */))));
  }
  else
  {
    tmp3546 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[455]) /* $DAEres455 DAE_RESIDUAL_VAR */ = tmp3546;
  threadData->lastEquationSolved = 17174;
}
/*
equation index: 17175
type: SIMPLE_ASSIGN
trafo_13_1013.U1Pu = if trafo_13_1013.running.value then if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17175};
  modelica_real tmp3547;
  modelica_real tmp3548;
  modelica_real tmp3549;
  modelica_boolean tmp3550;
  modelica_real tmp3551;
  modelica_boolean tmp3552;
  modelica_real tmp3553;
  tmp3552 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp3552)
  {
    tmp3550 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
    if(tmp3550)
    {
      tmp3551 = 0.0;
    }
    else
    {
      tmp3547 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
      tmp3548 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
      tmp3549 = (tmp3547 * tmp3547) + (tmp3548 * tmp3548);
      if(tmp3549 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3549, 0.5);
      }
      tmp3551 = sqrt(tmp3549);
    }
    tmp3553 = tmp3551;
  }
  else
  {
    tmp3553 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3078]] /* trafo_13_1013.U1Pu variable */) = tmp3553;
  threadData->lastEquationSolved = 17175;
}
/*
equation index: 17176
type: SIMPLE_ASSIGN
trafo_13_1013.U2Pu = if trafo_13_1013.running.value then if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17176};
  modelica_real tmp3554;
  modelica_real tmp3555;
  modelica_real tmp3556;
  modelica_boolean tmp3557;
  modelica_real tmp3558;
  modelica_boolean tmp3559;
  modelica_real tmp3560;
  tmp3559 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */);
  if(tmp3559)
  {
    tmp3557 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp3557)
    {
      tmp3558 = 0.0;
    }
    else
    {
      tmp3554 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
      tmp3555 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
      tmp3556 = (tmp3554 * tmp3554) + (tmp3555 * tmp3555);
      if(tmp3556 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3556, 0.5);
      }
      tmp3558 = sqrt(tmp3556);
    }
    tmp3560 = tmp3558;
  }
  else
  {
    tmp3560 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3079]] /* trafo_13_1013.U2Pu variable */) = tmp3560;
  threadData->lastEquationSolved = 17176;
}
/*
equation index: 17177
type: SIMPLE_ASSIGN
$whenCondition193 = not pre(trafo_12_1012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17177};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[104]] /* $whenCondition193 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17177;
}
/*
equation index: 17178
type: WHEN

when {} then
  trafo_12_1012.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17178};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[104]] /* $whenCondition193 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[104] /* $whenCondition193 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17178;
}
/*
equation index: 17180
type: SIMPLE_ASSIGN
$whenCondition195 = not trafo_12_1012.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17180};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[106]] /* $whenCondition195 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 17180;
}
/*
equation index: 17181
type: SIMPLE_ASSIGN
$whenCondition194 = trafo_12_1012.running.value and not pre(trafo_12_1012.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17181};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[105]] /* $whenCondition194 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17181;
}
/*
equation index: 17182
type: WHEN

when {$whenCondition195} then
  trafo_12_1012.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17182};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[106]] /* $whenCondition195 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[106] /* $whenCondition195 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[133]] /* trafo_12_1012.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[105]] /* $whenCondition194 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[105] /* $whenCondition194 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[133]] /* trafo_12_1012.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17182;
}
/*
equation index: 17184
type: SIMPLE_ASSIGN
$DAEres433 = if trafo_12_1012.running.value then trafo_12_1012.terminal1.i.im - trafo_12_1012.rTfoPu * (trafo_12_1012.YPu.re * line_1012_1014a.terminal1.V.im + trafo_12_1012.YPu.im * line_1012_1014a.terminal1.V.re - trafo_12_1012.terminal2.i.im) else trafo_12_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17184};
  (data->simulationInfo->daeModeData->residualVars[433]) /* $DAEres433 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3747]] /* trafo_12_1012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3746]] /* trafo_12_1012.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17184;
}
/*
equation index: 17185
type: SIMPLE_ASSIGN
$DAEres435 = if trafo_12_1012.running.value then trafo_12_1012.terminal1.i.re - trafo_12_1012.rTfoPu * (trafo_12_1012.YPu.re * line_1012_1014a.terminal1.V.re + (-trafo_12_1012.YPu.im) * line_1012_1014a.terminal1.V.im - trafo_12_1012.terminal2.i.re) else trafo_12_1012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17185};
  (data->simulationInfo->daeModeData->residualVars[435]) /* $DAEres435 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3747]] /* trafo_12_1012.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3746]] /* trafo_12_1012.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17185;
}
/*
equation index: 17186
type: SIMPLE_ASSIGN
$DAEres436 = if trafo_12_1012.running.value then trafo_12_1012.rTfoPu ^ 2.0 * load_12.terminal.V.im - (trafo_12_1012.rTfoPu * line_1012_1014a.terminal1.V.im + trafo_12_1012.ZPu.re * trafo_12_1012.terminal1.i.im + trafo_12_1012.ZPu.im * trafo_12_1012.terminal1.i.re) else trafo_12_1012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17186};
  modelica_real tmp3561;
  modelica_boolean tmp3562;
  modelica_real tmp3563;
  tmp3562 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp3562)
  {
    tmp3561 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */);
    tmp3563 = ((tmp3561 * tmp3561)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3749]] /* trafo_12_1012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3748]] /* trafo_12_1012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)));
  }
  else
  {
    tmp3563 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[436]) /* $DAEres436 DAE_RESIDUAL_VAR */ = tmp3563;
  threadData->lastEquationSolved = 17186;
}
/*
equation index: 17187
type: SIMPLE_ASSIGN
$DAEres438 = if trafo_12_1012.running.value then trafo_12_1012.rTfoPu ^ 2.0 * load_12.terminal.V.re - (trafo_12_1012.rTfoPu * line_1012_1014a.terminal1.V.re + trafo_12_1012.ZPu.re * trafo_12_1012.terminal1.i.re - trafo_12_1012.ZPu.im * trafo_12_1012.terminal1.i.im) else trafo_12_1012.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17187};
  modelica_real tmp3564;
  modelica_boolean tmp3565;
  modelica_real tmp3566;
  tmp3565 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp3565)
  {
    tmp3564 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */);
    tmp3566 = ((tmp3564 * tmp3564)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3750]] /* trafo_12_1012.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3749]] /* trafo_12_1012.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3748]] /* trafo_12_1012.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */))));
  }
  else
  {
    tmp3566 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[438]) /* $DAEres438 DAE_RESIDUAL_VAR */ = tmp3566;
  threadData->lastEquationSolved = 17187;
}
/*
equation index: 17188
type: SIMPLE_ASSIGN
trafo_12_1012.U1Pu = if trafo_12_1012.running.value then if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17188};
  modelica_real tmp3567;
  modelica_real tmp3568;
  modelica_real tmp3569;
  modelica_boolean tmp3570;
  modelica_real tmp3571;
  modelica_boolean tmp3572;
  modelica_real tmp3573;
  tmp3572 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp3572)
  {
    tmp3570 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
    if(tmp3570)
    {
      tmp3571 = 0.0;
    }
    else
    {
      tmp3567 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
      tmp3568 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
      tmp3569 = (tmp3567 * tmp3567) + (tmp3568 * tmp3568);
      if(tmp3569 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3569, 0.5);
      }
      tmp3571 = sqrt(tmp3569);
    }
    tmp3573 = tmp3571;
  }
  else
  {
    tmp3573 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* trafo_12_1012.U1Pu variable */) = tmp3573;
  threadData->lastEquationSolved = 17188;
}
/*
equation index: 17189
type: SIMPLE_ASSIGN
trafo_12_1012.U2Pu = if trafo_12_1012.running.value then if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17189};
  modelica_real tmp3574;
  modelica_real tmp3575;
  modelica_real tmp3576;
  modelica_boolean tmp3577;
  modelica_real tmp3578;
  modelica_boolean tmp3579;
  modelica_real tmp3580;
  tmp3579 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */);
  if(tmp3579)
  {
    tmp3577 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
    if(tmp3577)
    {
      tmp3578 = 0.0;
    }
    else
    {
      tmp3574 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
      tmp3575 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
      tmp3576 = (tmp3574 * tmp3574) + (tmp3575 * tmp3575);
      if(tmp3576 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3576, 0.5);
      }
      tmp3578 = sqrt(tmp3576);
    }
    tmp3580 = tmp3578;
  }
  else
  {
    tmp3580 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* trafo_12_1012.U2Pu variable */) = tmp3580;
  threadData->lastEquationSolved = 17189;
}
/*
equation index: 17190
type: SIMPLE_ASSIGN
$whenCondition196 = not pre(trafo_11_1011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17190};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[107]] /* $whenCondition196 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */));
  threadData->lastEquationSolved = 17190;
}
/*
equation index: 17191
type: WHEN

when {} then
  trafo_11_1011.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17191};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[107]] /* $whenCondition196 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[107] /* $whenCondition196 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17191;
}
/*
equation index: 17193
type: SIMPLE_ASSIGN
$whenCondition198 = not trafo_11_1011.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17193};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[109]] /* $whenCondition198 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */));
  threadData->lastEquationSolved = 17193;
}
/*
equation index: 17194
type: SIMPLE_ASSIGN
$whenCondition197 = trafo_11_1011.running.value and not pre(trafo_11_1011.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17194};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[108]] /* $whenCondition197 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17194;
}
/*
equation index: 17195
type: WHEN

when {$whenCondition198} then
  trafo_11_1011.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17195};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[109]] /* $whenCondition198 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[109] /* $whenCondition198 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[132]] /* trafo_11_1011.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[108]] /* $whenCondition197 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[108] /* $whenCondition197 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[132]] /* trafo_11_1011.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17195;
}
/*
equation index: 17197
type: SIMPLE_ASSIGN
$DAEres479 = if trafo_11_1011.running.value then trafo_11_1011.terminal1.i.re - trafo_11_1011.rTfoPu * (trafo_11_1011.YPu.re * line_1011_1013a.terminal1.V.re + (-trafo_11_1011.YPu.im) * line_1011_1013a.terminal1.V.im - trafo_11_1011.terminal2.i.re) else trafo_11_1011.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17197};
  (data->simulationInfo->daeModeData->residualVars[479]) /* $DAEres479 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3738]] /* trafo_11_1011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3737]] /* trafo_11_1011.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17197;
}
/*
equation index: 17198
type: SIMPLE_ASSIGN
$DAEres484 = if trafo_11_1011.running.value then trafo_11_1011.rTfoPu ^ 2.0 * load_11.terminal.V.re - (trafo_11_1011.rTfoPu * line_1011_1013a.terminal1.V.re + trafo_11_1011.ZPu.re * trafo_11_1011.terminal1.i.re - trafo_11_1011.ZPu.im * trafo_11_1011.terminal1.i.im) else trafo_11_1011.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17198};
  modelica_real tmp3581;
  modelica_boolean tmp3582;
  modelica_real tmp3583;
  tmp3582 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp3582)
  {
    tmp3581 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */);
    tmp3583 = ((tmp3581 * tmp3581)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3740]] /* trafo_11_1011.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3739]] /* trafo_11_1011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */))));
  }
  else
  {
    tmp3583 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[484]) /* $DAEres484 DAE_RESIDUAL_VAR */ = tmp3583;
  threadData->lastEquationSolved = 17198;
}
/*
equation index: 17199
type: SIMPLE_ASSIGN
$DAEres485 = if trafo_11_1011.running.value then trafo_11_1011.rTfoPu ^ 2.0 * load_11.terminal.V.im - (trafo_11_1011.rTfoPu * line_1011_1013a.terminal1.V.im + trafo_11_1011.ZPu.re * trafo_11_1011.terminal1.i.im + trafo_11_1011.ZPu.im * trafo_11_1011.terminal1.i.re) else trafo_11_1011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17199};
  modelica_real tmp3584;
  modelica_boolean tmp3585;
  modelica_real tmp3586;
  tmp3585 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp3585)
  {
    tmp3584 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */);
    tmp3586 = ((tmp3584 * tmp3584)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3740]] /* trafo_11_1011.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3739]] /* trafo_11_1011.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)));
  }
  else
  {
    tmp3586 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[485]) /* $DAEres485 DAE_RESIDUAL_VAR */ = tmp3586;
  threadData->lastEquationSolved = 17199;
}
/*
equation index: 17200
type: SIMPLE_ASSIGN
$DAEres486 = if trafo_11_1011.running.value then trafo_11_1011.terminal1.i.im - trafo_11_1011.rTfoPu * (trafo_11_1011.YPu.re * line_1011_1013a.terminal1.V.im + trafo_11_1011.YPu.im * line_1011_1013a.terminal1.V.re - trafo_11_1011.terminal2.i.im) else trafo_11_1011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17200};
  (data->simulationInfo->daeModeData->residualVars[486]) /* $DAEres486 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3741]] /* trafo_11_1011.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3738]] /* trafo_11_1011.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3737]] /* trafo_11_1011.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17200;
}
/*
equation index: 17201
type: SIMPLE_ASSIGN
trafo_11_1011.U1Pu = if trafo_11_1011.running.value then if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17201};
  modelica_real tmp3587;
  modelica_real tmp3588;
  modelica_real tmp3589;
  modelica_boolean tmp3590;
  modelica_real tmp3591;
  modelica_boolean tmp3592;
  modelica_real tmp3593;
  tmp3592 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp3592)
  {
    tmp3590 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
    if(tmp3590)
    {
      tmp3591 = 0.0;
    }
    else
    {
      tmp3587 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
      tmp3588 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
      tmp3589 = (tmp3587 * tmp3587) + (tmp3588 * tmp3588);
      if(tmp3589 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3589, 0.5);
      }
      tmp3591 = sqrt(tmp3589);
    }
    tmp3593 = tmp3591;
  }
  else
  {
    tmp3593 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* trafo_11_1011.U1Pu variable */) = tmp3593;
  threadData->lastEquationSolved = 17201;
}
/*
equation index: 17202
type: SIMPLE_ASSIGN
trafo_11_1011.U2Pu = if trafo_11_1011.running.value then if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17202};
  modelica_real tmp3594;
  modelica_real tmp3595;
  modelica_real tmp3596;
  modelica_boolean tmp3597;
  modelica_real tmp3598;
  modelica_boolean tmp3599;
  modelica_real tmp3600;
  tmp3599 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */);
  if(tmp3599)
  {
    tmp3597 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
    if(tmp3597)
    {
      tmp3598 = 0.0;
    }
    else
    {
      tmp3594 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
      tmp3595 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
      tmp3596 = (tmp3594 * tmp3594) + (tmp3595 * tmp3595);
      if(tmp3596 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3596, 0.5);
      }
      tmp3598 = sqrt(tmp3596);
    }
    tmp3600 = tmp3598;
  }
  else
  {
    tmp3600 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* trafo_11_1011.U2Pu variable */) = tmp3600;
  threadData->lastEquationSolved = 17202;
}
/*
equation index: 17203
type: SIMPLE_ASSIGN
$whenCondition199 = not pre(trafo_5_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17203};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[110]] /* $whenCondition199 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17203;
}
/*
equation index: 17204
type: WHEN

when {} then
  trafo_5_1045.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17204};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[110]] /* $whenCondition199 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[110] /* $whenCondition199 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17204;
}
/*
equation index: 17206
type: SIMPLE_ASSIGN
$whenCondition201 = not trafo_5_1045.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17206};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[114]] /* $whenCondition201 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 17206;
}
/*
equation index: 17207
type: SIMPLE_ASSIGN
$whenCondition200 = trafo_5_1045.running.value and not pre(trafo_5_1045.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17207};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[113]] /* $whenCondition200 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17207;
}
/*
equation index: 17208
type: WHEN

when {$whenCondition201} then
  trafo_5_1045.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17208};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[114]] /* $whenCondition201 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[114] /* $whenCondition201 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[149]] /* trafo_5_1045.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[113]] /* $whenCondition200 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[113] /* $whenCondition200 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[149]] /* trafo_5_1045.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17208;
}
/*
equation index: 17210
type: SIMPLE_ASSIGN
$DAEres905 = if trafo_5_1045.running.value then trafo_5_1045.terminal1.i.im - trafo_5_1045.rTfoPu * (trafo_5_1045.YPu.re * line_1042_1045.terminal2.V.im + trafo_5_1045.YPu.im * line_1042_1045.terminal2.V.re - trafo_5_1045.terminal2.i.im) else trafo_5_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17210};
  (data->simulationInfo->daeModeData->residualVars[905]) /* $DAEres905 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3891]] /* trafo_5_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3890]] /* trafo_5_1045.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17210;
}
/*
equation index: 17211
type: SIMPLE_ASSIGN
$DAEres907 = if trafo_5_1045.running.value then trafo_5_1045.terminal1.i.re - trafo_5_1045.rTfoPu * (trafo_5_1045.YPu.re * line_1042_1045.terminal2.V.re + (-trafo_5_1045.YPu.im) * line_1042_1045.terminal2.V.im - trafo_5_1045.terminal2.i.re) else trafo_5_1045.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17211};
  (data->simulationInfo->daeModeData->residualVars[907]) /* $DAEres907 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3891]] /* trafo_5_1045.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3890]] /* trafo_5_1045.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17211;
}
/*
equation index: 17212
type: SIMPLE_ASSIGN
$DAEres910 = if trafo_5_1045.running.value then trafo_5_1045.rTfoPu ^ 2.0 * load_05.terminal.V.im - (trafo_5_1045.rTfoPu * line_1042_1045.terminal2.V.im + trafo_5_1045.ZPu.re * trafo_5_1045.terminal1.i.im + trafo_5_1045.ZPu.im * trafo_5_1045.terminal1.i.re) else trafo_5_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17212};
  modelica_real tmp3601;
  modelica_boolean tmp3602;
  modelica_real tmp3603;
  tmp3602 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp3602)
  {
    tmp3601 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */);
    tmp3603 = ((tmp3601 * tmp3601)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3893]] /* trafo_5_1045.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3892]] /* trafo_5_1045.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)));
  }
  else
  {
    tmp3603 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[910]) /* $DAEres910 DAE_RESIDUAL_VAR */ = tmp3603;
  threadData->lastEquationSolved = 17212;
}
/*
equation index: 17213
type: SIMPLE_ASSIGN
$DAEres912 = if trafo_5_1045.running.value then trafo_5_1045.rTfoPu ^ 2.0 * load_05.terminal.V.re - (trafo_5_1045.rTfoPu * line_1042_1045.terminal2.V.re + trafo_5_1045.ZPu.re * trafo_5_1045.terminal1.i.re - trafo_5_1045.ZPu.im * trafo_5_1045.terminal1.i.im) else trafo_5_1045.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17213};
  modelica_real tmp3604;
  modelica_boolean tmp3605;
  modelica_real tmp3606;
  tmp3605 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp3605)
  {
    tmp3604 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */);
    tmp3606 = ((tmp3604 * tmp3604)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3894]] /* trafo_5_1045.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3893]] /* trafo_5_1045.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3892]] /* trafo_5_1045.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */))));
  }
  else
  {
    tmp3606 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[912]) /* $DAEres912 DAE_RESIDUAL_VAR */ = tmp3606;
  threadData->lastEquationSolved = 17213;
}
/*
equation index: 17214
type: SIMPLE_ASSIGN
trafo_5_1045.U1Pu = if trafo_5_1045.running.value then if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17214};
  modelica_real tmp3607;
  modelica_real tmp3608;
  modelica_real tmp3609;
  modelica_boolean tmp3610;
  modelica_real tmp3611;
  modelica_boolean tmp3612;
  modelica_real tmp3613;
  tmp3612 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp3612)
  {
    tmp3610 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
    if(tmp3610)
    {
      tmp3611 = 0.0;
    }
    else
    {
      tmp3607 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
      tmp3608 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
      tmp3609 = (tmp3607 * tmp3607) + (tmp3608 * tmp3608);
      if(tmp3609 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3609, 0.5);
      }
      tmp3611 = sqrt(tmp3609);
    }
    tmp3613 = tmp3611;
  }
  else
  {
    tmp3613 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3228]] /* trafo_5_1045.U1Pu variable */) = tmp3613;
  threadData->lastEquationSolved = 17214;
}
/*
equation index: 17215
type: SIMPLE_ASSIGN
trafo_5_1045.U2Pu = if trafo_5_1045.running.value then if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17215};
  modelica_real tmp3614;
  modelica_real tmp3615;
  modelica_real tmp3616;
  modelica_boolean tmp3617;
  modelica_real tmp3618;
  modelica_boolean tmp3619;
  modelica_real tmp3620;
  tmp3619 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp3619)
  {
    tmp3617 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
    if(tmp3617)
    {
      tmp3618 = 0.0;
    }
    else
    {
      tmp3614 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
      tmp3615 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
      tmp3616 = (tmp3614 * tmp3614) + (tmp3615 * tmp3615);
      if(tmp3616 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3616, 0.5);
      }
      tmp3618 = sqrt(tmp3616);
    }
    tmp3620 = tmp3618;
  }
  else
  {
    tmp3620 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3229]] /* trafo_5_1045.U2Pu variable */) = tmp3620;
  threadData->lastEquationSolved = 17215;
}
/*
equation index: 17216
type: SIMPLE_ASSIGN
$whenCondition202 = not pre(trafo_4_1044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17216};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[115]] /* $whenCondition202 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17216;
}
/*
equation index: 17217
type: WHEN

when {} then
  trafo_4_1044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17217};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[115]] /* $whenCondition202 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[115] /* $whenCondition202 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17217;
}
/*
equation index: 17219
type: SIMPLE_ASSIGN
$whenCondition204 = not trafo_4_1044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17219};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[117]] /* $whenCondition204 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 17219;
}
/*
equation index: 17220
type: SIMPLE_ASSIGN
$whenCondition203 = trafo_4_1044.running.value and not pre(trafo_4_1044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17220};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[116]] /* $whenCondition203 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 17220;
}
/*
equation index: 17221
type: WHEN

when {$whenCondition204} then
  trafo_4_1044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17221};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[117]] /* $whenCondition204 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[117] /* $whenCondition204 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[147]] /* trafo_4_1044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[116]] /* $whenCondition203 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[116] /* $whenCondition203 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[147]] /* trafo_4_1044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 17221;
}
/*
equation index: 17223
type: SIMPLE_ASSIGN
$DAEres854 = if trafo_4_1044.running.value then trafo_4_1044.terminal1.i.im - trafo_4_1044.rTfoPu * (trafo_4_1044.YPu.re * line_1043_1044a.terminal2.V.im + trafo_4_1044.YPu.im * line_1043_1044a.terminal2.V.re - trafo_4_1044.terminal2.i.im) else trafo_4_1044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17223};
  (data->simulationInfo->daeModeData->residualVars[854]) /* $DAEres854 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3873]] /* trafo_4_1044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3872]] /* trafo_4_1044.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 17223;
}
/*
equation index: 17224
type: SIMPLE_ASSIGN
$DAEres990 = if trafo_4_1044.running.value then trafo_4_1044.terminal1.i.re - trafo_4_1044.rTfoPu * (trafo_4_1044.YPu.re * line_1043_1044a.terminal2.V.re + (-trafo_4_1044.YPu.im) * line_1043_1044a.terminal2.V.im - trafo_4_1044.terminal2.i.re) else trafo_4_1044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17224};
  (data->simulationInfo->daeModeData->residualVars[990]) /* $DAEres990 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3873]] /* trafo_4_1044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3872]] /* trafo_4_1044.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */));
  threadData->lastEquationSolved = 17224;
}
/*
equation index: 17225
type: SIMPLE_ASSIGN
$DAEres991 = if trafo_4_1044.running.value then trafo_4_1044.rTfoPu ^ 2.0 * load_04.terminal.V.im - (trafo_4_1044.rTfoPu * line_1043_1044a.terminal2.V.im + trafo_4_1044.ZPu.re * trafo_4_1044.terminal1.i.im + trafo_4_1044.ZPu.im * trafo_4_1044.terminal1.i.re) else trafo_4_1044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17225};
  modelica_real tmp3621;
  modelica_boolean tmp3622;
  modelica_real tmp3623;
  tmp3622 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp3622)
  {
    tmp3621 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */);
    tmp3623 = ((tmp3621 * tmp3621)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3875]] /* trafo_4_1044.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3874]] /* trafo_4_1044.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)));
  }
  else
  {
    tmp3623 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[991]) /* $DAEres991 DAE_RESIDUAL_VAR */ = tmp3623;
  threadData->lastEquationSolved = 17225;
}
/*
equation index: 17226
type: SIMPLE_ASSIGN
$DAEres992 = if trafo_4_1044.running.value then trafo_4_1044.rTfoPu ^ 2.0 * load_04.terminal.V.re - (trafo_4_1044.rTfoPu * line_1043_1044a.terminal2.V.re + trafo_4_1044.ZPu.re * trafo_4_1044.terminal1.i.re - trafo_4_1044.ZPu.im * trafo_4_1044.terminal1.i.im) else trafo_4_1044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17226};
  modelica_real tmp3624;
  modelica_boolean tmp3625;
  modelica_real tmp3626;
  tmp3625 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp3625)
  {
    tmp3624 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */);
    tmp3626 = ((tmp3624 * tmp3624)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3876]] /* trafo_4_1044.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3875]] /* trafo_4_1044.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3874]] /* trafo_4_1044.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */))));
  }
  else
  {
    tmp3626 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[992]) /* $DAEres992 DAE_RESIDUAL_VAR */ = tmp3626;
  threadData->lastEquationSolved = 17226;
}
/*
equation index: 17227
type: SIMPLE_ASSIGN
trafo_4_1044.U1Pu = if trafo_4_1044.running.value then if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17227};
  modelica_real tmp3627;
  modelica_real tmp3628;
  modelica_real tmp3629;
  modelica_boolean tmp3630;
  modelica_real tmp3631;
  modelica_boolean tmp3632;
  modelica_real tmp3633;
  tmp3632 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp3632)
  {
    tmp3630 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
    if(tmp3630)
    {
      tmp3631 = 0.0;
    }
    else
    {
      tmp3627 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
      tmp3628 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
      tmp3629 = (tmp3627 * tmp3627) + (tmp3628 * tmp3628);
      if(tmp3629 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3629, 0.5);
      }
      tmp3631 = sqrt(tmp3629);
    }
    tmp3633 = tmp3631;
  }
  else
  {
    tmp3633 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3208]] /* trafo_4_1044.U1Pu variable */) = tmp3633;
  threadData->lastEquationSolved = 17227;
}
/*
equation index: 17228
type: SIMPLE_ASSIGN
trafo_4_1044.U2Pu = if trafo_4_1044.running.value then if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17228};
  modelica_real tmp3634;
  modelica_real tmp3635;
  modelica_real tmp3636;
  modelica_boolean tmp3637;
  modelica_real tmp3638;
  modelica_boolean tmp3639;
  modelica_real tmp3640;
  tmp3639 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */);
  if(tmp3639)
  {
    tmp3637 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
    if(tmp3637)
    {
      tmp3638 = 0.0;
    }
    else
    {
      tmp3634 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
      tmp3635 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
      tmp3636 = (tmp3634 * tmp3634) + (tmp3635 * tmp3635);
      if(tmp3636 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3636, 0.5);
      }
      tmp3638 = sqrt(tmp3636);
    }
    tmp3640 = tmp3638;
  }
  else
  {
    tmp3640 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3209]] /* trafo_4_1044.U2Pu variable */) = tmp3640;
  threadData->lastEquationSolved = 17228;
}
/*
equation index: 17229
type: SIMPLE_ASSIGN
$whenCondition205 = not pre(trafo_3_1043.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17229};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[118]] /* $whenCondition205 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17229;
}
/*
equation index: 17230
type: WHEN

when {} then
  trafo_3_1043.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17230};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[118]] /* $whenCondition205 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[118] /* $whenCondition205 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 17230;
}
/*
equation index: 17232
type: SIMPLE_ASSIGN
$whenCondition207 = not trafo_3_1043.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_17232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17232};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[120]] /* $whenCondition207 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 17232;
}
#if defined(__cplusplus)
}
#endif