#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 13742
type: SIMPLE_ASSIGN
trafo_1_1041.Q2Pu = line_1041_1043a.terminal1.V.im * trafo_1_1041.terminal2.i.re - line_1041_1043a.terminal1.V.re * trafo_1_1041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3087]] /* trafo_1_1041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13742;
}
/*
equation index: 13743
type: SIMPLE_ASSIGN
trafo_1_1041.P2Pu = line_1041_1043a.terminal1.V.re * trafo_1_1041.terminal2.i.re + line_1041_1043a.terminal1.V.im * trafo_1_1041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3085]] /* trafo_1_1041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13743;
}
/*
equation index: 13744
type: SIMPLE_ASSIGN
trafo_1_1041.Q1Pu = load_01.terminal.V.im * trafo_1_1041.terminal1.i.re - load_01.terminal.V.re * trafo_1_1041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3086]] /* trafo_1_1041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13744;
}
/*
equation index: 13745
type: SIMPLE_ASSIGN
trafo_1_1041.P1Pu = load_01.terminal.V.re * trafo_1_1041.terminal1.i.re + load_01.terminal.V.im * trafo_1_1041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3084]] /* trafo_1_1041.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13745;
}
/*
equation index: 13746
type: SIMPLE_ASSIGN
bus_1041.UPhase = Modelica.Math.atan3(line_1041_1043a.terminal1.V.im, line_1041_1043a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* bus_1041.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13746;
}
/*
equation index: 13747
type: SIMPLE_ASSIGN
check_UPu_bus_1041 = (line_1041_1043a.terminal1.V.re ^ 2.0 + line_1041_1043a.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13747};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
  tmp1 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(tmp2 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* check_UPu_bus_1041 variable */) = sqrt(tmp2);
  threadData->lastEquationSolved = 13747;
}
/*
equation index: 13748
type: SIMPLE_ASSIGN
bus_1041.UPu = if line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_1041
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* bus_1041.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* check_UPu_bus_1041 variable */));
  threadData->lastEquationSolved = 13748;
}
/*
equation index: 13749
type: SIMPLE_ASSIGN
bus_1041.U = bus_1041.UPu * bus_1041.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* bus_1041.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* bus_1041.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* bus_1041.UNom PARAM */));
  threadData->lastEquationSolved = 13749;
}
/*
equation index: 13750
type: SIMPLE_ASSIGN
bus_B01.UPhase = Modelica.Math.atan3(load_01.terminal.V.im, load_01.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* bus_B01.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13750;
}
/*
equation index: 13751
type: SIMPLE_ASSIGN
bus_B01.UPu = if load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0 then 0.0 else (load_01.terminal.V.re ^ 2.0 + load_01.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13751};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp6 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0));
  if(tmp6)
  {
    tmp7 = 0.0;
  }
  else
  {
    tmp3 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
    tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
    tmp5 = (tmp3 * tmp3) + (tmp4 * tmp4);
    if(tmp5 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, 0.5);
    }
    tmp7 = sqrt(tmp5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* bus_B01.UPu variable */) = tmp7;
  threadData->lastEquationSolved = 13751;
}
/*
equation index: 13752
type: SIMPLE_ASSIGN
bus_B01.U = bus_B01.UPu * bus_B01.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* bus_B01.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* bus_B01.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* bus_B01.UNom PARAM */));
  threadData->lastEquationSolved = 13752;
}
/*
equation index: 13753
type: SIMPLE_ASSIGN
line_1041_1045b.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1045b.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2396]] /* line_1041_1045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13753;
}
/*
equation index: 13754
type: SIMPLE_ASSIGN
line_1041_1045b.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1045b.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2394]] /* line_1041_1045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13754;
}
/*
equation index: 13755
type: SIMPLE_ASSIGN
line_1041_1045b.Q2Pu = line_1042_1045.terminal2.V.im * line_1041_1045b.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1041_1045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2397]] /* line_1041_1045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13755;
}
/*
equation index: 13756
type: SIMPLE_ASSIGN
line_1041_1045b.P2Pu = line_1042_1045.terminal2.V.re * line_1041_1045b.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1041_1045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2395]] /* line_1041_1045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13756;
}
/*
equation index: 13757
type: SIMPLE_ASSIGN
bus_1045.UPhase = Modelica.Math.atan3(line_1042_1045.terminal2.V.im, line_1042_1045.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* bus_1045.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13757;
}
/*
equation index: 13758
type: SIMPLE_ASSIGN
trafo_1045_4045b.Q1Pu = line_1042_1045.terminal2.V.im * trafo_1045_4045b.terminal1.i.re - line_1042_1045.terminal2.V.re * trafo_1045_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* trafo_1045_4045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13758;
}
/*
equation index: 13759
type: SIMPLE_ASSIGN
trafo_1045_4045b.P1Pu = line_1042_1045.terminal2.V.re * trafo_1045_4045b.terminal1.i.re + line_1042_1045.terminal2.V.im * trafo_1045_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* trafo_1045_4045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13759;
}
/*
equation index: 13760
type: SIMPLE_ASSIGN
bus_4045.UPhase = Modelica.Math.atan3(line_4045_4051b.terminal1.V.im, line_4045_4051b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* bus_4045.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13760;
}
/*
equation index: 13761
type: SIMPLE_ASSIGN
trafo_1045_4045b.Q2Pu = line_4045_4051b.terminal1.V.im * trafo_1045_4045b.terminal2.i.re - line_4045_4051b.terminal1.V.re * trafo_1045_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* trafo_1045_4045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13761;
}
/*
equation index: 13762
type: SIMPLE_ASSIGN
trafo_1045_4045b.P2Pu = line_4045_4051b.terminal1.V.re * trafo_1045_4045b.terminal2.i.re + line_4045_4051b.terminal1.V.im * trafo_1045_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* trafo_1045_4045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13762;
}
/*
equation index: 13763
type: SIMPLE_ASSIGN
line_4045_4062.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4062.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2704]] /* line_4045_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13763;
}
/*
equation index: 13764
type: SIMPLE_ASSIGN
line_4045_4062.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4062.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2702]] /* line_4045_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13764;
}
/*
equation index: 13765
type: SIMPLE_ASSIGN
line_4045_4062.Q2Pu = line_4062_4063b.terminal1.V.im * line_4045_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * line_4045_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2705]] /* line_4045_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13765;
}
/*
equation index: 13766
type: SIMPLE_ASSIGN
line_4045_4062.P2Pu = line_4062_4063b.terminal1.V.re * line_4045_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * line_4045_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2703]] /* line_4045_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13766;
}
/*
equation index: 13767
type: SIMPLE_ASSIGN
bus_4062.UPhase = Modelica.Math.atan3(line_4062_4063b.terminal1.V.im, line_4062_4063b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* bus_4062.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13767;
}
/*
equation index: 13768
type: SIMPLE_ASSIGN
check_UPu_bus_4062 = (line_4062_4063b.terminal1.V.re ^ 2.0 + line_4062_4063b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13768};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
  tmp9 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
  tmp10 = (tmp8 * tmp8) + (tmp9 * tmp9);
  if(tmp10 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* check_UPu_bus_4062 variable */) = sqrt(tmp10);
  threadData->lastEquationSolved = 13768;
}
/*
equation index: 13769
type: SIMPLE_ASSIGN
bus_4062.UPu = if line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_4062
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* bus_4062.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* check_UPu_bus_4062 variable */));
  threadData->lastEquationSolved = 13769;
}
/*
equation index: 13770
type: SIMPLE_ASSIGN
bus_4062.U = bus_4062.UPu * bus_4062.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* bus_4062.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* bus_4062.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* bus_4062.UNom PARAM */));
  threadData->lastEquationSolved = 13770;
}
/*
equation index: 13771
type: SIMPLE_ASSIGN
trafo_g17_4062.Q2Pu = line_4062_4063b.terminal1.V.im * trafo_g17_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * trafo_g17_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3343]] /* trafo_g17_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13771;
}
/*
equation index: 13772
type: SIMPLE_ASSIGN
trafo_g17_4062.P2Pu = line_4062_4063b.terminal1.V.re * trafo_g17_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * trafo_g17_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3341]] /* trafo_g17_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13772;
}
/*
equation index: 13773
type: SIMPLE_ASSIGN
bus_BG17.UPhase = Modelica.Math.atan3(g17.terminal.V.im, g17.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* bus_BG17.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13773;
}
/*
equation index: 13774
type: SIMPLE_ASSIGN
trafo_g17_4062.Q1Pu = g17.terminal.V.re * g17.terminal.i.im - g17.terminal.V.im * g17.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3342]] /* trafo_g17_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13774;
}
/*
equation index: 13775
type: SIMPLE_ASSIGN
trafo_g17_4062.P1Pu = (-g17.terminal.V.re) * g17.terminal.i.re - g17.terminal.V.im * g17.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3340]] /* trafo_g17_4062.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13775;
}
/*
equation index: 13776
type: SIMPLE_ASSIGN
line_4061_4062.Q2Pu = line_4062_4063b.terminal1.V.im * line_4061_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * line_4061_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2725]] /* line_4061_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13776;
}
/*
equation index: 13777
type: SIMPLE_ASSIGN
line_4061_4062.P2Pu = line_4062_4063b.terminal1.V.re * line_4061_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * line_4061_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* line_4061_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13777;
}
/*
equation index: 13778
type: SIMPLE_ASSIGN
bus_4061.UPhase = Modelica.Math.atan3(line_4061_4062.terminal1.V.im, line_4061_4062.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* bus_4061.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13778;
}
/*
equation index: 13779
type: SIMPLE_ASSIGN
trafo_61_4061.Q2Pu = line_4061_4062.terminal1.V.im * trafo_61_4061.terminal2.i.re - line_4061_4062.terminal1.V.re * trafo_61_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3237]] /* trafo_61_4061.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13779;
}
/*
equation index: 13780
type: SIMPLE_ASSIGN
trafo_61_4061.P2Pu = line_4061_4062.terminal1.V.re * trafo_61_4061.terminal2.i.re + line_4061_4062.terminal1.V.im * trafo_61_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3235]] /* trafo_61_4061.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13780;
}
/*
equation index: 13781
type: SIMPLE_ASSIGN
bus_B61.UPhase = Modelica.Math.atan3(load_61.terminal.V.im, load_61.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* bus_B61.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13781;
}
/*
equation index: 13782
type: SIMPLE_ASSIGN
trafo_61_4061.Q1Pu = load_61.terminal.V.im * trafo_61_4061.terminal1.i.re - load_61.terminal.V.re * trafo_61_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3236]] /* trafo_61_4061.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13782;
}
/*
equation index: 13783
type: SIMPLE_ASSIGN
trafo_61_4061.P1Pu = load_61.terminal.V.re * trafo_61_4061.terminal1.i.re + load_61.terminal.V.im * trafo_61_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3234]] /* trafo_61_4061.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13783;
}
/*
equation index: 13784
type: SIMPLE_ASSIGN
line_4041_4061.Q2Pu = line_4061_4062.terminal1.V.im * line_4041_4061.terminal2.i.re - line_4061_4062.terminal1.V.re * line_4041_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2613]] /* line_4041_4061.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13784;
}
/*
equation index: 13785
type: SIMPLE_ASSIGN
line_4041_4061.P2Pu = line_4061_4062.terminal1.V.re * line_4041_4061.terminal2.i.re + line_4061_4062.terminal1.V.im * line_4041_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2611]] /* line_4041_4061.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13785;
}
/*
equation index: 13786
type: SIMPLE_ASSIGN
bus_4041.UPhase = Modelica.Math.atan3(line_4041_4061.terminal1.V.im, line_4041_4061.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* bus_4041.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13786;
}
/*
equation index: 13787
type: SIMPLE_ASSIGN
trafo_g13_4041.Q2Pu = line_4041_4061.terminal1.V.im * trafo_g13_4041.terminal2.i.re - line_4041_4061.terminal1.V.re * trafo_g13_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3311]] /* trafo_g13_4041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13787;
}
/*
equation index: 13788
type: SIMPLE_ASSIGN
trafo_g13_4041.P2Pu = line_4041_4061.terminal1.V.re * trafo_g13_4041.terminal2.i.re + line_4041_4061.terminal1.V.im * trafo_g13_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3309]] /* trafo_g13_4041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13788;
}
/*
equation index: 13789
type: SIMPLE_ASSIGN
bus_BG13.UPhase = Modelica.Math.atan3(g13.terminal.V.im, g13.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* bus_BG13.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13789;
}
/*
equation index: 13790
type: SIMPLE_ASSIGN
trafo_g13_4041.Q1Pu = g13.terminal.V.re * g13.terminal.i.im - g13.terminal.V.im * g13.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3310]] /* trafo_g13_4041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13790;
}
/*
equation index: 13791
type: SIMPLE_ASSIGN
trafo_g13_4041.P1Pu = (-g13.terminal.V.re) * g13.terminal.i.re - g13.terminal.V.im * g13.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3308]] /* trafo_g13_4041.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13791;
}
/*
equation index: 13792
type: SIMPLE_ASSIGN
bus_BG13.UPu = if g13.terminal.V.re == 0.0 and g13.terminal.V.im == 0.0 then 0.0 else (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13792};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  tmp14 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0));
  if(tmp14)
  {
    tmp15 = 0.0;
  }
  else
  {
    tmp11 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
    tmp12 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
    tmp13 = (tmp11 * tmp11) + (tmp12 * tmp12);
    if(tmp13 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp13, 0.5);
    }
    tmp15 = sqrt(tmp13);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* bus_BG13.UPu variable */) = tmp15;
  threadData->lastEquationSolved = 13792;
}
/*
equation index: 13793
type: SIMPLE_ASSIGN
bus_BG13.U = bus_BG13.UPu * bus_BG13.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* bus_BG13.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* bus_BG13.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* bus_BG13.UNom PARAM */));
  threadData->lastEquationSolved = 13793;
}
/*
equation index: 13794
type: SIMPLE_ASSIGN
line_4031_4041a.Q2Pu = line_4041_4061.terminal1.V.im * line_4031_4041a.terminal2.i.re - line_4041_4061.terminal1.V.re * line_4031_4041a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2569]] /* line_4031_4041a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13794;
}
/*
equation index: 13795
type: SIMPLE_ASSIGN
line_4031_4041a.P2Pu = line_4041_4061.terminal1.V.re * line_4031_4041a.terminal2.i.re + line_4041_4061.terminal1.V.im * line_4031_4041a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2567]] /* line_4031_4041a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13795;
}
/*
equation index: 13796
type: SIMPLE_ASSIGN
line_4031_4041a.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4041a.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4041a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2568]] /* line_4031_4041a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13796;
}
/*
equation index: 13797
type: SIMPLE_ASSIGN
line_4031_4041a.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4041a.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4041a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2566]] /* line_4031_4041a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13797;
}
/*
equation index: 13798
type: SIMPLE_ASSIGN
bus_4031.UPhase = Modelica.Math.atan3(line_4031_4041b.terminal1.V.im, line_4031_4041b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bus_4031.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13798;
}
/*
equation index: 13799
type: SIMPLE_ASSIGN
trafo_g12_4031.Q2Pu = line_4031_4041b.terminal1.V.im * trafo_g12_4031.terminal2.i.re - line_4031_4041b.terminal1.V.re * trafo_g12_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3303]] /* trafo_g12_4031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13799;
}
/*
equation index: 13800
type: SIMPLE_ASSIGN
trafo_g12_4031.P2Pu = line_4031_4041b.terminal1.V.re * trafo_g12_4031.terminal2.i.re + line_4031_4041b.terminal1.V.im * trafo_g12_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3301]] /* trafo_g12_4031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13800;
}
/*
equation index: 13801
type: SIMPLE_ASSIGN
bus_BG12.UPhase = Modelica.Math.atan3(g12.terminal.V.im, g12.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* bus_BG12.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13801;
}
/*
equation index: 13802
type: SIMPLE_ASSIGN
trafo_g12_4031.Q1Pu = g12.terminal.V.re * g12.terminal.i.im - g12.terminal.V.im * g12.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3302]] /* trafo_g12_4031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13802;
}
/*
equation index: 13803
type: SIMPLE_ASSIGN
trafo_g12_4031.P1Pu = (-g12.terminal.V.re) * g12.terminal.i.re - g12.terminal.V.im * g12.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3300]] /* trafo_g12_4031.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13803;
}
/*
equation index: 13804
type: SIMPLE_ASSIGN
line_4031_4041b.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4041b.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4041b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2576]] /* line_4031_4041b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13804;
}
/*
equation index: 13805
type: SIMPLE_ASSIGN
line_4031_4041b.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4041b.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4041b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* line_4031_4041b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13805;
}
/*
equation index: 13806
type: SIMPLE_ASSIGN
line_4022_4031a.Q2Pu = line_4031_4041b.terminal1.V.im * line_4022_4031a.terminal2.i.re - line_4031_4041b.terminal1.V.re * line_4022_4031a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2543]] /* line_4022_4031a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13806;
}
/*
equation index: 13807
type: SIMPLE_ASSIGN
line_4022_4031a.P2Pu = line_4031_4041b.terminal1.V.re * line_4022_4031a.terminal2.i.re + line_4031_4041b.terminal1.V.im * line_4022_4031a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2541]] /* line_4022_4031a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13807;
}
/*
equation index: 13808
type: SIMPLE_ASSIGN
line_4022_4031a.Q1Pu = line_4022_4031b.terminal1.V.im * line_4022_4031a.terminal1.i.re - line_4022_4031b.terminal1.V.re * line_4022_4031a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2542]] /* line_4022_4031a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13808;
}
/*
equation index: 13809
type: SIMPLE_ASSIGN
line_4022_4031a.P1Pu = line_4022_4031b.terminal1.V.re * line_4022_4031a.terminal1.i.re + line_4022_4031b.terminal1.V.im * line_4022_4031a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2540]] /* line_4022_4031a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13809;
}
/*
equation index: 13810
type: SIMPLE_ASSIGN
bus_4022.UPhase = Modelica.Math.atan3(line_4022_4031b.terminal1.V.im, line_4022_4031b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* bus_4022.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13810;
}
/*
equation index: 13811
type: SIMPLE_ASSIGN
trafo_1022_4022.Q2Pu = line_4022_4031b.terminal1.V.im * trafo_1022_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * trafo_1022_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3007]] /* trafo_1022_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13811;
}
/*
equation index: 13812
type: SIMPLE_ASSIGN
trafo_1022_4022.P2Pu = line_4022_4031b.terminal1.V.re * trafo_1022_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * trafo_1022_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3005]] /* trafo_1022_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13812;
}
/*
equation index: 13813
type: SIMPLE_ASSIGN
bus_1022.UPhase = Modelica.Math.atan3(line_1021_1022b.terminal2.V.im, line_1021_1022b.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* bus_1022.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13813;
}
/*
equation index: 13814
type: SIMPLE_ASSIGN
trafo_g5_1022.Q2Pu = line_1021_1022b.terminal2.V.im * trafo_g5_1022.terminal2.i.re - line_1021_1022b.terminal2.V.re * trafo_g5_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3409]] /* trafo_g5_1022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13814;
}
/*
equation index: 13815
type: SIMPLE_ASSIGN
trafo_g5_1022.P2Pu = line_1021_1022b.terminal2.V.re * trafo_g5_1022.terminal2.i.re + line_1021_1022b.terminal2.V.im * trafo_g5_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3407]] /* trafo_g5_1022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13815;
}
/*
equation index: 13816
type: SIMPLE_ASSIGN
bus_BG05.UPhase = Modelica.Math.atan3(g05.terminal.V.im, g05.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* bus_BG05.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13816;
}
/*
equation index: 13817
type: SIMPLE_ASSIGN
trafo_g5_1022.Q1Pu = g05.terminal.V.re * g05.terminal.i.im - g05.terminal.V.im * g05.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* trafo_g5_1022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13817;
}
/*
equation index: 13818
type: SIMPLE_ASSIGN
trafo_g5_1022.P1Pu = (-g05.terminal.V.re) * g05.terminal.i.re - g05.terminal.V.im * g05.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3406]] /* trafo_g5_1022.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13818;
}
/*
equation index: 13819
type: SIMPLE_ASSIGN
bus_BG05.UPu = if g05.terminal.V.re == 0.0 and g05.terminal.V.im == 0.0 then 0.0 else (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13819};
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  tmp19 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0));
  if(tmp19)
  {
    tmp20 = 0.0;
  }
  else
  {
    tmp16 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
    tmp17 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
    tmp18 = (tmp16 * tmp16) + (tmp17 * tmp17);
    if(tmp18 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, 0.5);
    }
    tmp20 = sqrt(tmp18);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* bus_BG05.UPu variable */) = tmp20;
  threadData->lastEquationSolved = 13819;
}
/*
equation index: 13820
type: SIMPLE_ASSIGN
bus_BG05.U = bus_BG05.UPu * bus_BG05.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* bus_BG05.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* bus_BG05.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* bus_BG05.UNom PARAM */));
  threadData->lastEquationSolved = 13820;
}
/*
equation index: 13821
type: SIMPLE_ASSIGN
trafo_1022_4022.Q1Pu = line_1021_1022b.terminal2.V.im * trafo_1022_4022.terminal1.i.re - line_1021_1022b.terminal2.V.re * trafo_1022_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3006]] /* trafo_1022_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13821;
}
/*
equation index: 13822
type: SIMPLE_ASSIGN
trafo_1022_4022.P1Pu = line_1021_1022b.terminal2.V.re * trafo_1022_4022.terminal1.i.re + line_1021_1022b.terminal2.V.im * trafo_1022_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3004]] /* trafo_1022_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13822;
}
/*
equation index: 13823
type: SIMPLE_ASSIGN
line_4022_4031b.Q1Pu = line_4022_4031b.terminal1.V.im * line_4022_4031b.terminal1.i.re - line_4022_4031b.terminal1.V.re * line_4022_4031b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2550]] /* line_4022_4031b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13823;
}
/*
equation index: 13824
type: SIMPLE_ASSIGN
line_4022_4031b.P1Pu = line_4022_4031b.terminal1.V.re * line_4022_4031b.terminal1.i.re + line_4022_4031b.terminal1.V.im * line_4022_4031b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2548]] /* line_4022_4031b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13824;
}
/*
equation index: 13825
type: SIMPLE_ASSIGN
line_4022_4031b.Q2Pu = line_4031_4041b.terminal1.V.im * line_4022_4031b.terminal2.i.re - line_4031_4041b.terminal1.V.re * line_4022_4031b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2551]] /* line_4022_4031b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13825;
}
/*
equation index: 13826
type: SIMPLE_ASSIGN
line_4022_4031b.P2Pu = line_4031_4041b.terminal1.V.re * line_4022_4031b.terminal2.i.re + line_4031_4041b.terminal1.V.im * line_4022_4031b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2549]] /* line_4022_4031b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13826;
}
/*
equation index: 13827
type: SIMPLE_ASSIGN
line_4012_4022.Q2Pu = line_4022_4031b.terminal1.V.im * line_4012_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * line_4012_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2507]] /* line_4012_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13827;
}
/*
equation index: 13828
type: SIMPLE_ASSIGN
line_4012_4022.P2Pu = line_4022_4031b.terminal1.V.re * line_4012_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * line_4012_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2505]] /* line_4012_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13828;
}
/*
equation index: 13829
type: SIMPLE_ASSIGN
line_4012_4022.Q1Pu = line_4012_4022.terminal1.V.im * line_4012_4022.terminal1.i.re - line_4012_4022.terminal1.V.re * line_4012_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2506]] /* line_4012_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13829;
}
/*
equation index: 13830
type: SIMPLE_ASSIGN
line_4012_4022.P1Pu = line_4012_4022.terminal1.V.re * line_4012_4022.terminal1.i.re + line_4012_4022.terminal1.V.im * line_4012_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2504]] /* line_4012_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13830;
}
/*
equation index: 13831
type: SIMPLE_ASSIGN
bus_4012.UPhase = Modelica.Math.atan3(line_4012_4022.terminal1.V.im, line_4012_4022.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* bus_4012.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13831;
}
/*
equation index: 13832
type: SIMPLE_ASSIGN
check_UPu_bus_4012 = (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13832};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp21 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
  tmp22 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
  tmp23 = (tmp21 * tmp21) + (tmp22 * tmp22);
  if(tmp23 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* check_UPu_bus_4012 variable */) = sqrt(tmp23);
  threadData->lastEquationSolved = 13832;
}
/*
equation index: 13833
type: SIMPLE_ASSIGN
bus_4012.UPu = if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_4012
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* bus_4012.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* check_UPu_bus_4012 variable */));
  threadData->lastEquationSolved = 13833;
}
/*
equation index: 13834
type: SIMPLE_ASSIGN
bus_4012.U = bus_4012.UPu * bus_4012.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* bus_4012.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* bus_4012.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* bus_4012.UNom PARAM */));
  threadData->lastEquationSolved = 13834;
}
/*
equation index: 13835
type: SIMPLE_ASSIGN
trafo_g10_4012.Q2Pu = line_4012_4022.terminal1.V.im * trafo_g10_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * trafo_g10_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3287]] /* trafo_g10_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13835;
}
/*
equation index: 13836
type: SIMPLE_ASSIGN
trafo_g10_4012.P2Pu = line_4012_4022.terminal1.V.re * trafo_g10_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * trafo_g10_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3285]] /* trafo_g10_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13836;
}
/*
equation index: 13837
type: SIMPLE_ASSIGN
bus_BG10.UPhase = Modelica.Math.atan3(g10.terminal.V.im, g10.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* bus_BG10.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13837;
}
/*
equation index: 13838
type: SIMPLE_ASSIGN
trafo_g10_4012.Q1Pu = g10.terminal.V.re * g10.terminal.i.im - g10.terminal.V.im * g10.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3286]] /* trafo_g10_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13838;
}
/*
equation index: 13839
type: SIMPLE_ASSIGN
trafo_g10_4012.P1Pu = (-g10.terminal.V.re) * g10.terminal.i.re - g10.terminal.V.im * g10.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3284]] /* trafo_g10_4012.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13839;
}
/*
equation index: 13840
type: SIMPLE_ASSIGN
bus_BG10.UPu = if g10.terminal.V.re == 0.0 and g10.terminal.V.im == 0.0 then 0.0 else (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13840};
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp27 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0));
  if(tmp27)
  {
    tmp28 = 0.0;
  }
  else
  {
    tmp24 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
    tmp25 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
    tmp26 = (tmp24 * tmp24) + (tmp25 * tmp25);
    if(tmp26 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, 0.5);
    }
    tmp28 = sqrt(tmp26);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* bus_BG10.UPu variable */) = tmp28;
  threadData->lastEquationSolved = 13840;
}
/*
equation index: 13841
type: SIMPLE_ASSIGN
bus_BG10.U = bus_BG10.UPu * bus_BG10.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* bus_BG10.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* bus_BG10.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* bus_BG10.UNom PARAM */));
  threadData->lastEquationSolved = 13841;
}
/*
equation index: 13842
type: SIMPLE_ASSIGN
trafo_1012_4012.Q2Pu = line_4012_4022.terminal1.V.im * trafo_1012_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * trafo_1012_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2997]] /* trafo_1012_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13842;
}
/*
equation index: 13843
type: SIMPLE_ASSIGN
trafo_1012_4012.P2Pu = line_4012_4022.terminal1.V.re * trafo_1012_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * trafo_1012_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2995]] /* trafo_1012_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13843;
}
/*
equation index: 13844
type: SIMPLE_ASSIGN
trafo_1012_4012.Q1Pu = line_1012_1014a.terminal1.V.im * trafo_1012_4012.terminal1.i.re - line_1012_1014a.terminal1.V.re * trafo_1012_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2996]] /* trafo_1012_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13844;
}
/*
equation index: 13845
type: SIMPLE_ASSIGN
trafo_1012_4012.P1Pu = line_1012_1014a.terminal1.V.re * trafo_1012_4012.terminal1.i.re + line_1012_1014a.terminal1.V.im * trafo_1012_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2994]] /* trafo_1012_4012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13845;
}
/*
equation index: 13846
type: SIMPLE_ASSIGN
bus_1012.UPhase = Modelica.Math.atan3(line_1012_1014a.terminal1.V.im, line_1012_1014a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* bus_1012.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13846;
}
/*
equation index: 13847
type: SIMPLE_ASSIGN
trafo_g1_1012.Q2Pu = line_1012_1014a.terminal1.V.im * trafo_g1_1012.terminal2.i.re - line_1012_1014a.terminal1.V.re * trafo_g1_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* trafo_g1_1012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13847;
}
/*
equation index: 13848
type: SIMPLE_ASSIGN
trafo_g1_1012.P2Pu = line_1012_1014a.terminal1.V.re * trafo_g1_1012.terminal2.i.re + line_1012_1014a.terminal1.V.im * trafo_g1_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* trafo_g1_1012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13848;
}
/*
equation index: 13849
type: SIMPLE_ASSIGN
bus_BG01.UPhase = Modelica.Math.atan3(g01.terminal.V.im, g01.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* bus_BG01.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13849;
}
/*
equation index: 13850
type: SIMPLE_ASSIGN
trafo_g1_1012.Q1Pu = g01.terminal.V.re * g01.terminal.i.im - g01.terminal.V.im * g01.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* trafo_g1_1012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13850;
}
/*
equation index: 13851
type: SIMPLE_ASSIGN
trafo_g1_1012.P1Pu = (-g01.terminal.V.re) * g01.terminal.i.re - g01.terminal.V.im * g01.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3364]] /* trafo_g1_1012.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13851;
}
/*
equation index: 13852
type: SIMPLE_ASSIGN
bus_BG01.UPu = if g01.terminal.V.re == 0.0 and g01.terminal.V.im == 0.0 then 0.0 else (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13852};
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  tmp32 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0));
  if(tmp32)
  {
    tmp33 = 0.0;
  }
  else
  {
    tmp29 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
    tmp30 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
    tmp31 = (tmp29 * tmp29) + (tmp30 * tmp30);
    if(tmp31 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, 0.5);
    }
    tmp33 = sqrt(tmp31);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* bus_BG01.UPu variable */) = tmp33;
  threadData->lastEquationSolved = 13852;
}
/*
equation index: 13853
type: SIMPLE_ASSIGN
bus_BG01.U = bus_BG01.UPu * bus_BG01.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* bus_BG01.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* bus_BG01.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* bus_BG01.UNom PARAM */));
  threadData->lastEquationSolved = 13853;
}
/*
equation index: 13854
type: SIMPLE_ASSIGN
line_1012_1014a.Q1Pu = line_1012_1014a.terminal1.V.im * line_1012_1014a.terminal1.i.re - line_1012_1014a.terminal1.V.re * line_1012_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2312]] /* line_1012_1014a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13854;
}
/*
equation index: 13855
type: SIMPLE_ASSIGN
line_1012_1014a.P1Pu = line_1012_1014a.terminal1.V.re * line_1012_1014a.terminal1.i.re + line_1012_1014a.terminal1.V.im * line_1012_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2310]] /* line_1012_1014a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13855;
}
/*
equation index: 13856
type: SIMPLE_ASSIGN
line_1012_1014a.Q2Pu = line_1013_1014a.terminal2.V.im * line_1012_1014a.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1012_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2313]] /* line_1012_1014a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13856;
}
/*
equation index: 13857
type: SIMPLE_ASSIGN
line_1012_1014a.P2Pu = line_1013_1014a.terminal2.V.re * line_1012_1014a.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1012_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2311]] /* line_1012_1014a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13857;
}
/*
equation index: 13858
type: SIMPLE_ASSIGN
bus_1014.UPhase = Modelica.Math.atan3(line_1013_1014a.terminal2.V.im, line_1013_1014a.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* bus_1014.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13858;
}
/*
equation index: 13859
type: SIMPLE_ASSIGN
trafo_g3_1014.Q2Pu = line_1013_1014a.terminal2.V.im * trafo_g3_1014.terminal2.i.re - line_1013_1014a.terminal2.V.re * trafo_g3_1014.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3393]] /* trafo_g3_1014.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13859;
}
/*
equation index: 13860
type: SIMPLE_ASSIGN
trafo_g3_1014.P2Pu = line_1013_1014a.terminal2.V.re * trafo_g3_1014.terminal2.i.re + line_1013_1014a.terminal2.V.im * trafo_g3_1014.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3391]] /* trafo_g3_1014.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13860;
}
/*
equation index: 13861
type: SIMPLE_ASSIGN
bus_BG03.UPhase = Modelica.Math.atan3(g03.terminal.V.im, g03.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* bus_BG03.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13861;
}
/*
equation index: 13862
type: SIMPLE_ASSIGN
trafo_g3_1014.Q1Pu = g03.terminal.V.re * g03.terminal.i.im - g03.terminal.V.im * g03.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3392]] /* trafo_g3_1014.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13862;
}
/*
equation index: 13863
type: SIMPLE_ASSIGN
trafo_g3_1014.P1Pu = (-g03.terminal.V.re) * g03.terminal.i.re - g03.terminal.V.im * g03.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3390]] /* trafo_g3_1014.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13863;
}
/*
equation index: 13864
type: SIMPLE_ASSIGN
line_1012_1014b.Q2Pu = line_1013_1014a.terminal2.V.im * line_1012_1014b.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1012_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2323]] /* line_1012_1014b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13864;
}
/*
equation index: 13865
type: SIMPLE_ASSIGN
line_1012_1014b.P2Pu = line_1013_1014a.terminal2.V.re * line_1012_1014b.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1012_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2321]] /* line_1012_1014b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13865;
}
/*
equation index: 13866
type: SIMPLE_ASSIGN
line_1012_1014b.Q1Pu = line_1012_1014a.terminal1.V.im * line_1012_1014b.terminal1.i.re - line_1012_1014a.terminal1.V.re * line_1012_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2322]] /* line_1012_1014b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13866;
}
/*
equation index: 13867
type: SIMPLE_ASSIGN
line_1012_1014b.P1Pu = line_1012_1014a.terminal1.V.re * line_1012_1014b.terminal1.i.re + line_1012_1014a.terminal1.V.im * line_1012_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2320]] /* line_1012_1014b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13867;
}
/*
equation index: 13868
type: SIMPLE_ASSIGN
line_1013_1014b.Q2Pu = line_1013_1014a.terminal2.V.im * line_1013_1014b.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1013_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2343]] /* line_1013_1014b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13868;
}
/*
equation index: 13869
type: SIMPLE_ASSIGN
line_1013_1014b.P2Pu = line_1013_1014a.terminal2.V.re * line_1013_1014b.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1013_1014b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2341]] /* line_1013_1014b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13869;
}
/*
equation index: 13870
type: SIMPLE_ASSIGN
line_1013_1014b.Q1Pu = line_1013_1014a.terminal1.V.im * line_1013_1014b.terminal1.i.re - line_1013_1014a.terminal1.V.re * line_1013_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2342]] /* line_1013_1014b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13870;
}
/*
equation index: 13871
type: SIMPLE_ASSIGN
line_1013_1014b.P1Pu = line_1013_1014a.terminal1.V.re * line_1013_1014b.terminal1.i.re + line_1013_1014a.terminal1.V.im * line_1013_1014b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2340]] /* line_1013_1014b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13871;
}
/*
equation index: 13872
type: SIMPLE_ASSIGN
bus_1013.UPhase = Modelica.Math.atan3(line_1013_1014a.terminal1.V.im, line_1013_1014a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* bus_1013.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13872;
}
/*
equation index: 13873
type: SIMPLE_ASSIGN
trafo_g2_1013.Q2Pu = line_1013_1014a.terminal1.V.im * trafo_g2_1013.terminal2.i.re - line_1013_1014a.terminal1.V.re * trafo_g2_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3385]] /* trafo_g2_1013.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13873;
}
/*
equation index: 13874
type: SIMPLE_ASSIGN
trafo_g2_1013.P2Pu = line_1013_1014a.terminal1.V.re * trafo_g2_1013.terminal2.i.re + line_1013_1014a.terminal1.V.im * trafo_g2_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3383]] /* trafo_g2_1013.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13874;
}
/*
equation index: 13875
type: SIMPLE_ASSIGN
bus_BG02.UPhase = Modelica.Math.atan3(g02.terminal.V.im, g02.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* bus_BG02.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13875;
}
/*
equation index: 13876
type: SIMPLE_ASSIGN
trafo_g2_1013.Q1Pu = g02.terminal.V.re * g02.terminal.i.im - g02.terminal.V.im * g02.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3384]] /* trafo_g2_1013.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13876;
}
/*
equation index: 13877
type: SIMPLE_ASSIGN
trafo_g2_1013.P1Pu = (-g02.terminal.V.re) * g02.terminal.i.re - g02.terminal.V.im * g02.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3382]] /* trafo_g2_1013.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13877;
}
/*
equation index: 13878
type: SIMPLE_ASSIGN
line_1011_1013a.Q2Pu = line_1013_1014a.terminal1.V.im * line_1011_1013a.terminal2.i.re - line_1013_1014a.terminal1.V.re * line_1011_1013a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2295]] /* line_1011_1013a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13878;
}
/*
equation index: 13879
type: SIMPLE_ASSIGN
line_1011_1013a.P2Pu = line_1013_1014a.terminal1.V.re * line_1011_1013a.terminal2.i.re + line_1013_1014a.terminal1.V.im * line_1011_1013a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2293]] /* line_1011_1013a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13879;
}
/*
equation index: 13880
type: SIMPLE_ASSIGN
line_1011_1013a.Q1Pu = line_1011_1013a.terminal1.V.im * line_1011_1013a.terminal1.i.re - line_1011_1013a.terminal1.V.re * line_1011_1013a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2294]] /* line_1011_1013a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13880;
}
/*
equation index: 13881
type: SIMPLE_ASSIGN
line_1011_1013a.P1Pu = line_1011_1013a.terminal1.V.re * line_1011_1013a.terminal1.i.re + line_1011_1013a.terminal1.V.im * line_1011_1013a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2292]] /* line_1011_1013a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13881;
}
/*
equation index: 13882
type: SIMPLE_ASSIGN
bus_1011.UPhase = Modelica.Math.atan3(line_1011_1013a.terminal1.V.im, line_1011_1013a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* bus_1011.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13882;
}
/*
equation index: 13883
type: SIMPLE_ASSIGN
trafo_1011_4011.Q1Pu = line_1011_1013a.terminal1.V.im * trafo_1011_4011.terminal1.i.re - line_1011_1013a.terminal1.V.re * trafo_1011_4011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2986]] /* trafo_1011_4011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13883;
}
/*
equation index: 13884
type: SIMPLE_ASSIGN
trafo_1011_4011.P1Pu = line_1011_1013a.terminal1.V.re * trafo_1011_4011.terminal1.i.re + line_1011_1013a.terminal1.V.im * trafo_1011_4011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2984]] /* trafo_1011_4011.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13884;
}
/*
equation index: 13885
type: SIMPLE_ASSIGN
bus_4011.UPhase = Modelica.Math.atan3(line_4011_4071.terminal1.V.im, line_4011_4071.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* bus_4011.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13885;
}
/*
equation index: 13886
type: SIMPLE_ASSIGN
trafo_g9_4011.Q2Pu = line_4011_4071.terminal1.V.im * trafo_g9_4011.terminal2.i.re - line_4011_4071.terminal1.V.re * trafo_g9_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3441]] /* trafo_g9_4011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13886;
}
/*
equation index: 13887
type: SIMPLE_ASSIGN
trafo_g9_4011.P2Pu = line_4011_4071.terminal1.V.re * trafo_g9_4011.terminal2.i.re + line_4011_4071.terminal1.V.im * trafo_g9_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3439]] /* trafo_g9_4011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13887;
}
/*
equation index: 13888
type: SIMPLE_ASSIGN
bus_BG09.UPhase = Modelica.Math.atan3(g09.terminal.V.im, g09.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* bus_BG09.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13888;
}
/*
equation index: 13889
type: SIMPLE_ASSIGN
trafo_g9_4011.Q1Pu = g09.terminal.V.re * g09.terminal.i.im - g09.terminal.V.im * g09.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3440]] /* trafo_g9_4011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13889;
}
/*
equation index: 13890
type: SIMPLE_ASSIGN
trafo_g9_4011.P1Pu = (-g09.terminal.V.re) * g09.terminal.i.re - g09.terminal.V.im * g09.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3438]] /* trafo_g9_4011.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13890;
}
/*
equation index: 13891
type: SIMPLE_ASSIGN
line_4011_4021.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4021.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4021.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2480]] /* line_4011_4021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13891;
}
/*
equation index: 13892
type: SIMPLE_ASSIGN
line_4011_4021.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4021.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4021.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2478]] /* line_4011_4021.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13892;
}
/*
equation index: 13893
type: SIMPLE_ASSIGN
line_4011_4021.Q2Pu = line_4021_4032.terminal1.V.im * line_4011_4021.terminal2.i.re - line_4021_4032.terminal1.V.re * line_4011_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2481]] /* line_4011_4021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13893;
}
/*
equation index: 13894
type: SIMPLE_ASSIGN
line_4011_4021.P2Pu = line_4021_4032.terminal1.V.re * line_4011_4021.terminal2.i.re + line_4021_4032.terminal1.V.im * line_4011_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2479]] /* line_4011_4021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13894;
}
/*
equation index: 13895
type: SIMPLE_ASSIGN
bus_4021.UPhase = Modelica.Math.atan3(line_4021_4032.terminal1.V.im, line_4021_4032.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* bus_4021.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13895;
}
/*
equation index: 13896
type: SIMPLE_ASSIGN
trafo_g11_4021.Q2Pu = line_4021_4032.terminal1.V.im * trafo_g11_4021.terminal2.i.re - line_4021_4032.terminal1.V.re * trafo_g11_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3295]] /* trafo_g11_4021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13896;
}
/*
equation index: 13897
type: SIMPLE_ASSIGN
trafo_g11_4021.P2Pu = line_4021_4032.terminal1.V.re * trafo_g11_4021.terminal2.i.re + line_4021_4032.terminal1.V.im * trafo_g11_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3293]] /* trafo_g11_4021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13897;
}
/*
equation index: 13898
type: SIMPLE_ASSIGN
trafo_g11_4021.Q1Pu = g11.terminal.V.re * g11.terminal.i.im - g11.terminal.V.im * g11.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3294]] /* trafo_g11_4021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13898;
}
/*
equation index: 13899
type: SIMPLE_ASSIGN
trafo_g11_4021.P1Pu = (-g11.terminal.V.re) * g11.terminal.i.re - g11.terminal.V.im * g11.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3292]] /* trafo_g11_4021.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13899;
}
/*
equation index: 13900
type: SIMPLE_ASSIGN
bus_BG11.UPhase = Modelica.Math.atan3(g11.terminal.V.im, g11.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* bus_BG11.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13900;
}
/*
equation index: 13901
type: SIMPLE_ASSIGN
bus_BG11.UPu = if g11.terminal.V.re == 0.0 and g11.terminal.V.im == 0.0 then 0.0 else (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13901};
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  tmp37 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0));
  if(tmp37)
  {
    tmp38 = 0.0;
  }
  else
  {
    tmp34 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
    tmp35 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
    tmp36 = (tmp34 * tmp34) + (tmp35 * tmp35);
    if(tmp36 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp36, 0.5);
    }
    tmp38 = sqrt(tmp36);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* bus_BG11.UPu variable */) = tmp38;
  threadData->lastEquationSolved = 13901;
}
/*
equation index: 13902
type: SIMPLE_ASSIGN
bus_BG11.U = bus_BG11.UPu * bus_BG11.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* bus_BG11.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* bus_BG11.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* bus_BG11.UNom PARAM */));
  threadData->lastEquationSolved = 13902;
}
/*
equation index: 13903
type: SIMPLE_ASSIGN
line_4021_4032.Q1Pu = line_4021_4032.terminal1.V.im * line_4021_4032.terminal1.i.re - line_4021_4032.terminal1.V.re * line_4021_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2524]] /* line_4021_4032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13903;
}
/*
equation index: 13904
type: SIMPLE_ASSIGN
line_4021_4032.P1Pu = line_4021_4032.terminal1.V.re * line_4021_4032.terminal1.i.re + line_4021_4032.terminal1.V.im * line_4021_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2522]] /* line_4021_4032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13904;
}
/*
equation index: 13905
type: SIMPLE_ASSIGN
line_4021_4032.Q2Pu = line_4032_4044.terminal1.V.im * line_4021_4032.terminal2.i.re - line_4032_4044.terminal1.V.re * line_4021_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2525]] /* line_4021_4032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13905;
}
/*
equation index: 13906
type: SIMPLE_ASSIGN
line_4021_4032.P2Pu = line_4032_4044.terminal1.V.re * line_4021_4032.terminal2.i.re + line_4032_4044.terminal1.V.im * line_4021_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2523]] /* line_4021_4032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13906;
}
/*
equation index: 13907
type: SIMPLE_ASSIGN
bus_4032.UPhase = Modelica.Math.atan3(line_4032_4044.terminal1.V.im, line_4032_4044.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* bus_4032.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13907;
}
/*
equation index: 13908
type: SIMPLE_ASSIGN
line_4032_4044.Q1Pu = line_4032_4044.terminal1.V.im * line_4032_4044.terminal1.i.re - line_4032_4044.terminal1.V.re * line_4032_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2594]] /* line_4032_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13908;
}
/*
equation index: 13909
type: SIMPLE_ASSIGN
line_4032_4044.P1Pu = line_4032_4044.terminal1.V.re * line_4032_4044.terminal1.i.re + line_4032_4044.terminal1.V.im * line_4032_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2592]] /* line_4032_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13909;
}
/*
equation index: 13910
type: SIMPLE_ASSIGN
line_4032_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4032_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4032_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2595]] /* line_4032_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13910;
}
/*
equation index: 13911
type: SIMPLE_ASSIGN
line_4032_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4032_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4032_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2593]] /* line_4032_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13911;
}
/*
equation index: 13912
type: SIMPLE_ASSIGN
trafo_1044_4044b.Q2Pu = line_4044_4045a.terminal1.V.im * trafo_1044_4044b.terminal2.i.re - line_4044_4045a.terminal1.V.re * trafo_1044_4044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3027]] /* trafo_1044_4044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13912;
}
/*
equation index: 13913
type: SIMPLE_ASSIGN
trafo_1044_4044b.P2Pu = line_4044_4045a.terminal1.V.re * trafo_1044_4044b.terminal2.i.re + line_4044_4045a.terminal1.V.im * trafo_1044_4044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3025]] /* trafo_1044_4044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13913;
}
/*
equation index: 13914
type: SIMPLE_ASSIGN
trafo_1044_4044b.Q1Pu = line_1043_1044a.terminal2.V.im * trafo_1044_4044b.terminal1.i.re - line_1043_1044a.terminal2.V.re * trafo_1044_4044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3026]] /* trafo_1044_4044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13914;
}
/*
equation index: 13915
type: SIMPLE_ASSIGN
trafo_1044_4044b.P1Pu = line_1043_1044a.terminal2.V.re * trafo_1044_4044b.terminal1.i.re + line_1043_1044a.terminal2.V.im * trafo_1044_4044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3024]] /* trafo_1044_4044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13915;
}
/*
equation index: 13916
type: SIMPLE_ASSIGN
bus_4044.UPhase = Modelica.Math.atan3(line_4044_4045a.terminal1.V.im, line_4044_4045a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* bus_4044.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13916;
}
/*
equation index: 13917
type: SIMPLE_ASSIGN
trafo_1044_4044a.Q2Pu = line_4044_4045a.terminal1.V.im * trafo_1044_4044a.terminal2.i.re - line_4044_4045a.terminal1.V.re * trafo_1044_4044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3017]] /* trafo_1044_4044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13917;
}
/*
equation index: 13918
type: SIMPLE_ASSIGN
trafo_1044_4044a.P2Pu = line_4044_4045a.terminal1.V.re * trafo_1044_4044a.terminal2.i.re + line_4044_4045a.terminal1.V.im * trafo_1044_4044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* trafo_1044_4044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13918;
}
/*
equation index: 13919
type: SIMPLE_ASSIGN
trafo_1044_4044a.Q1Pu = line_1043_1044a.terminal2.V.im * trafo_1044_4044a.terminal1.i.re - line_1043_1044a.terminal2.V.re * trafo_1044_4044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* trafo_1044_4044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13919;
}
/*
equation index: 13920
type: SIMPLE_ASSIGN
trafo_1044_4044a.P1Pu = line_1043_1044a.terminal2.V.re * trafo_1044_4044a.terminal1.i.re + line_1043_1044a.terminal2.V.im * trafo_1044_4044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* trafo_1044_4044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13920;
}
/*
equation index: 13921
type: SIMPLE_ASSIGN
bus_1044.UPhase = Modelica.Math.atan3(line_1043_1044a.terminal2.V.im, line_1043_1044a.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* bus_1044.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13921;
}
/*
equation index: 13922
type: SIMPLE_ASSIGN
line_1043_1044b.Q2Pu = line_1043_1044a.terminal2.V.im * line_1043_1044b.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1043_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2445]] /* line_1043_1044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13922;
}
/*
equation index: 13923
type: SIMPLE_ASSIGN
line_1043_1044b.P2Pu = line_1043_1044a.terminal2.V.re * line_1043_1044b.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1043_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2443]] /* line_1043_1044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13923;
}
/*
equation index: 13924
type: SIMPLE_ASSIGN
line_1043_1044b.Q1Pu = line_1043_1044a.terminal1.V.im * line_1043_1044b.terminal1.i.re - line_1043_1044a.terminal1.V.re * line_1043_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2444]] /* line_1043_1044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13924;
}
/*
equation index: 13925
type: SIMPLE_ASSIGN
line_1043_1044b.P1Pu = line_1043_1044a.terminal1.V.re * line_1043_1044b.terminal1.i.re + line_1043_1044a.terminal1.V.im * line_1043_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2442]] /* line_1043_1044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13925;
}
/*
equation index: 13926
type: SIMPLE_ASSIGN
trafo_4_1044.Q2Pu = line_1043_1044a.terminal2.V.im * trafo_4_1044.terminal2.i.re - line_1043_1044a.terminal2.V.re * trafo_4_1044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3207]] /* trafo_4_1044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13926;
}
/*
equation index: 13927
type: SIMPLE_ASSIGN
trafo_4_1044.P2Pu = line_1043_1044a.terminal2.V.re * trafo_4_1044.terminal2.i.re + line_1043_1044a.terminal2.V.im * trafo_4_1044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3205]] /* trafo_4_1044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13927;
}
/*
equation index: 13928
type: SIMPLE_ASSIGN
trafo_4_1044.Q1Pu = load_04.terminal.V.im * trafo_4_1044.terminal1.i.re - load_04.terminal.V.re * trafo_4_1044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3206]] /* trafo_4_1044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13928;
}
/*
equation index: 13929
type: SIMPLE_ASSIGN
trafo_4_1044.P1Pu = load_04.terminal.V.re * trafo_4_1044.terminal1.i.re + load_04.terminal.V.im * trafo_4_1044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3204]] /* trafo_4_1044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13929;
}
/*
equation index: 13930
type: SIMPLE_ASSIGN
line_1042_1044a.Q2Pu = line_1043_1044a.terminal2.V.im * line_1042_1044a.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1042_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2405]] /* line_1042_1044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13930;
}
/*
equation index: 13931
type: SIMPLE_ASSIGN
line_1042_1044a.P2Pu = line_1043_1044a.terminal2.V.re * line_1042_1044a.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1042_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2403]] /* line_1042_1044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13931;
}
/*
equation index: 13932
type: SIMPLE_ASSIGN
line_1042_1044a.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1044a.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2404]] /* line_1042_1044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13932;
}
/*
equation index: 13933
type: SIMPLE_ASSIGN
line_1042_1044a.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1044a.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2402]] /* line_1042_1044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13933;
}
/*
equation index: 13934
type: SIMPLE_ASSIGN
bus_1042.UPhase = Modelica.Math.atan3(line_1042_1045.terminal1.V.im, line_1042_1045.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* bus_1042.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13934;
}
/*
equation index: 13935
type: SIMPLE_ASSIGN
check_UPu_bus_1042 = (line_1042_1045.terminal1.V.re ^ 2.0 + line_1042_1045.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13935};
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  tmp39 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
  tmp40 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
  tmp41 = (tmp39 * tmp39) + (tmp40 * tmp40);
  if(tmp41 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp41, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* check_UPu_bus_1042 variable */) = sqrt(tmp41);
  threadData->lastEquationSolved = 13935;
}
/*
equation index: 13936
type: SIMPLE_ASSIGN
bus_1042.UPu = if line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0 then 0.0 else check_UPu_bus_1042
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* bus_1042.UPu variable */) = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0))?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* check_UPu_bus_1042 variable */));
  threadData->lastEquationSolved = 13936;
}
/*
equation index: 13937
type: SIMPLE_ASSIGN
bus_1042.U = bus_1042.UPu * bus_1042.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* bus_1042.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* bus_1042.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* bus_1042.UNom PARAM */));
  threadData->lastEquationSolved = 13937;
}
/*
equation index: 13938
type: SIMPLE_ASSIGN
trafo_g6_1042.Q2Pu = line_1042_1045.terminal1.V.im * trafo_g6_1042.terminal2.i.re - line_1042_1045.terminal1.V.re * trafo_g6_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3417]] /* trafo_g6_1042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13938;
}
/*
equation index: 13939
type: SIMPLE_ASSIGN
trafo_g6_1042.P2Pu = line_1042_1045.terminal1.V.re * trafo_g6_1042.terminal2.i.re + line_1042_1045.terminal1.V.im * trafo_g6_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3415]] /* trafo_g6_1042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13939;
}
/*
equation index: 13940
type: SIMPLE_ASSIGN
bus_BG06.UPhase = Modelica.Math.atan3(g06.terminal.V.im, g06.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* bus_BG06.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13940;
}
/*
equation index: 13941
type: SIMPLE_ASSIGN
trafo_g6_1042.Q1Pu = g06.terminal.V.re * g06.terminal.i.im - g06.terminal.V.im * g06.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3416]] /* trafo_g6_1042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13941;
}
/*
equation index: 13942
type: SIMPLE_ASSIGN
trafo_g6_1042.P1Pu = (-g06.terminal.V.re) * g06.terminal.i.re - g06.terminal.V.im * g06.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3414]] /* trafo_g6_1042.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13942;
}
/*
equation index: 13943
type: SIMPLE_ASSIGN
line_1042_1045.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1045.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2420]] /* line_1042_1045.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13943;
}
/*
equation index: 13944
type: SIMPLE_ASSIGN
line_1042_1045.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1045.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2418]] /* line_1042_1045.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13944;
}
/*
equation index: 13945
type: SIMPLE_ASSIGN
trafo_1045_4045a.Q1Pu = line_1042_1045.terminal2.V.im * trafo_1045_4045a.terminal1.i.re - line_1042_1045.terminal2.V.re * trafo_1045_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* trafo_1045_4045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13945;
}
/*
equation index: 13946
type: SIMPLE_ASSIGN
trafo_1045_4045a.P1Pu = line_1042_1045.terminal2.V.re * trafo_1045_4045a.terminal1.i.re + line_1042_1045.terminal2.V.im * trafo_1045_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* trafo_1045_4045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13946;
}
/*
equation index: 13947
type: SIMPLE_ASSIGN
trafo_1045_4045a.Q2Pu = line_4045_4051b.terminal1.V.im * trafo_1045_4045a.terminal2.i.re - line_4045_4051b.terminal1.V.re * trafo_1045_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3037]] /* trafo_1045_4045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13947;
}
/*
equation index: 13948
type: SIMPLE_ASSIGN
trafo_1045_4045a.P2Pu = line_4045_4051b.terminal1.V.re * trafo_1045_4045a.terminal2.i.re + line_4045_4051b.terminal1.V.im * trafo_1045_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* trafo_1045_4045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13948;
}
/*
equation index: 13949
type: SIMPLE_ASSIGN
line_4044_4045a.Q2Pu = line_4045_4051b.terminal1.V.im * line_4044_4045a.terminal2.i.re - line_4045_4051b.terminal1.V.re * line_4044_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2667]] /* line_4044_4045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13949;
}
/*
equation index: 13950
type: SIMPLE_ASSIGN
line_4044_4045a.P2Pu = line_4045_4051b.terminal1.V.re * line_4044_4045a.terminal2.i.re + line_4045_4051b.terminal1.V.im * line_4044_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2665]] /* line_4044_4045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13950;
}
/*
equation index: 13951
type: SIMPLE_ASSIGN
line_4045_4051b.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4051b.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4051b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2692]] /* line_4045_4051b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13951;
}
/*
equation index: 13952
type: SIMPLE_ASSIGN
line_4045_4051b.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4051b.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4051b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2690]] /* line_4045_4051b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13952;
}
/*
equation index: 13953
type: SIMPLE_ASSIGN
line_4045_4051b.Q2Pu = line_4045_4051b.terminal2.V.im * line_4045_4051b.terminal2.i.re - line_4045_4051b.terminal2.V.re * line_4045_4051b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2693]] /* line_4045_4051b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13953;
}
/*
equation index: 13954
type: SIMPLE_ASSIGN
line_4045_4051b.P2Pu = line_4045_4051b.terminal2.V.re * line_4045_4051b.terminal2.i.re + line_4045_4051b.terminal2.V.im * line_4045_4051b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2691]] /* line_4045_4051b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13954;
}
/*
equation index: 13955
type: SIMPLE_ASSIGN
trafo_51_4051.Q2Pu = line_4045_4051b.terminal2.V.im * trafo_51_4051.terminal2.i.re - line_4045_4051b.terminal2.V.re * trafo_51_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* trafo_51_4051.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13955;
}
/*
equation index: 13956
type: SIMPLE_ASSIGN
trafo_51_4051.P2Pu = line_4045_4051b.terminal2.V.re * trafo_51_4051.terminal2.i.re + line_4045_4051b.terminal2.V.im * trafo_51_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3215]] /* trafo_51_4051.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13956;
}
/*
equation index: 13957
type: SIMPLE_ASSIGN
trafo_51_4051.Q1Pu = load_51.terminal.V.im * trafo_51_4051.terminal1.i.re - load_51.terminal.V.re * trafo_51_4051.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3216]] /* trafo_51_4051.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13957;
}
/*
equation index: 13958
type: SIMPLE_ASSIGN
trafo_51_4051.P1Pu = load_51.terminal.V.re * trafo_51_4051.terminal1.i.re + load_51.terminal.V.im * trafo_51_4051.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3214]] /* trafo_51_4051.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13958;
}
/*
equation index: 13959
type: SIMPLE_ASSIGN
bus_4051.UPhase = Modelica.Math.atan3(line_4045_4051b.terminal2.V.im, line_4045_4051b.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* bus_4051.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13959;
}
/*
equation index: 13960
type: SIMPLE_ASSIGN
trafo_g16_4051.Q2Pu = line_4045_4051b.terminal2.V.im * trafo_g16_4051.terminal2.i.re - line_4045_4051b.terminal2.V.re * trafo_g16_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3335]] /* trafo_g16_4051.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13960;
}
/*
equation index: 13961
type: SIMPLE_ASSIGN
trafo_g16_4051.P2Pu = line_4045_4051b.terminal2.V.re * trafo_g16_4051.terminal2.i.re + line_4045_4051b.terminal2.V.im * trafo_g16_4051.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3333]] /* trafo_g16_4051.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13961;
}
/*
equation index: 13962
type: SIMPLE_ASSIGN
bus_BG16.UPhase = Modelica.Math.atan3(g16.terminal.V.im, g16.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* bus_BG16.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13962;
}
/*
equation index: 13963
type: SIMPLE_ASSIGN
trafo_g16_4051.Q1Pu = g16.terminal.V.re * g16.terminal.i.im - g16.terminal.V.im * g16.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3334]] /* trafo_g16_4051.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)));
  threadData->lastEquationSolved = 13963;
}
/*
equation index: 13964
type: SIMPLE_ASSIGN
trafo_g16_4051.P1Pu = (-g16.terminal.V.re) * g16.terminal.i.re - g16.terminal.V.im * g16.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3332]] /* trafo_g16_4051.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)));
  threadData->lastEquationSolved = 13964;
}
/*
equation index: 13965
type: SIMPLE_ASSIGN
bus_4051.UPu = shunt_4051.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* bus_4051.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */);
  threadData->lastEquationSolved = 13965;
}
/*
equation index: 13966
type: SIMPLE_ASSIGN
bus_4051.U = bus_4051.UPu * bus_4051.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* bus_4051.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* bus_4051.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* bus_4051.UNom PARAM */));
  threadData->lastEquationSolved = 13966;
}
/*
equation index: 13967
type: SIMPLE_ASSIGN
line_4045_4051a.Q2Pu = line_4045_4051b.terminal2.V.im * line_4045_4051a.terminal2.i.re - line_4045_4051b.terminal2.V.re * line_4045_4051a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2685]] /* line_4045_4051a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13967;
}
/*
equation index: 13968
type: SIMPLE_ASSIGN
line_4045_4051a.P2Pu = line_4045_4051b.terminal2.V.re * line_4045_4051a.terminal2.i.re + line_4045_4051b.terminal2.V.im * line_4045_4051a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2683]] /* line_4045_4051a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13968;
}
/*
equation index: 13969
type: SIMPLE_ASSIGN
line_4045_4051a.Q1Pu = line_4045_4051b.terminal1.V.im * line_4045_4051a.terminal1.i.re - line_4045_4051b.terminal1.V.re * line_4045_4051a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2684]] /* line_4045_4051a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13969;
}
/*
equation index: 13970
type: SIMPLE_ASSIGN
line_4045_4051a.P1Pu = line_4045_4051b.terminal1.V.re * line_4045_4051a.terminal1.i.re + line_4045_4051b.terminal1.V.im * line_4045_4051a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2682]] /* line_4045_4051a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13970;
}
/*
equation index: 13971
type: SIMPLE_ASSIGN
bus_BG16.UPu = if g16.terminal.V.re == 0.0 and g16.terminal.V.im == 0.0 then 0.0 else (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13971};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp45 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0));
  if(tmp45)
  {
    tmp46 = 0.0;
  }
  else
  {
    tmp42 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
    tmp43 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
    tmp44 = (tmp42 * tmp42) + (tmp43 * tmp43);
    if(tmp44 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp44, 0.5);
    }
    tmp46 = sqrt(tmp44);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* bus_BG16.UPu variable */) = tmp46;
  threadData->lastEquationSolved = 13971;
}
/*
equation index: 13972
type: SIMPLE_ASSIGN
bus_BG16.U = bus_BG16.UPu * bus_BG16.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* bus_BG16.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* bus_BG16.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* bus_BG16.UNom PARAM */));
  threadData->lastEquationSolved = 13972;
}
/*
equation index: 13973
type: SIMPLE_ASSIGN
bus_B51.UPhase = Modelica.Math.atan3(load_51.terminal.V.im, load_51.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* bus_B51.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13973;
}
/*
equation index: 13974
type: SIMPLE_ASSIGN
bus_B51.UPu = if load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0 then 0.0 else (load_51.terminal.V.re ^ 2.0 + load_51.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13974};
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  tmp50 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0));
  if(tmp50)
  {
    tmp51 = 0.0;
  }
  else
  {
    tmp47 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
    tmp48 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
    tmp49 = (tmp47 * tmp47) + (tmp48 * tmp48);
    if(tmp49 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp49, 0.5);
    }
    tmp51 = sqrt(tmp49);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* bus_B51.UPu variable */) = tmp51;
  threadData->lastEquationSolved = 13974;
}
/*
equation index: 13975
type: SIMPLE_ASSIGN
bus_B51.U = bus_B51.UPu * bus_B51.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* bus_B51.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* bus_B51.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* bus_B51.UNom PARAM */));
  threadData->lastEquationSolved = 13975;
}
/*
equation index: 13976
type: SIMPLE_ASSIGN
line_4044_4045b.Q2Pu = line_4045_4051b.terminal1.V.im * line_4044_4045b.terminal2.i.re - line_4045_4051b.terminal1.V.re * line_4044_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2677]] /* line_4044_4045b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13976;
}
/*
equation index: 13977
type: SIMPLE_ASSIGN
line_4044_4045b.P2Pu = line_4045_4051b.terminal1.V.re * line_4044_4045b.terminal2.i.re + line_4045_4051b.terminal1.V.im * line_4044_4045b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2675]] /* line_4044_4045b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13977;
}
/*
equation index: 13978
type: SIMPLE_ASSIGN
line_4044_4045b.Q1Pu = line_4044_4045a.terminal1.V.im * line_4044_4045b.terminal1.i.re - line_4044_4045a.terminal1.V.re * line_4044_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2676]] /* line_4044_4045b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13978;
}
/*
equation index: 13979
type: SIMPLE_ASSIGN
line_4044_4045b.P1Pu = line_4044_4045a.terminal1.V.re * line_4044_4045b.terminal1.i.re + line_4044_4045a.terminal1.V.im * line_4044_4045b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2674]] /* line_4044_4045b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13979;
}
/*
equation index: 13980
type: SIMPLE_ASSIGN
line_4044_4045a.Q1Pu = line_4044_4045a.terminal1.V.im * line_4044_4045a.terminal1.i.re - line_4044_4045a.terminal1.V.re * line_4044_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2666]] /* line_4044_4045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13980;
}
/*
equation index: 13981
type: SIMPLE_ASSIGN
line_4044_4045a.P1Pu = line_4044_4045a.terminal1.V.re * line_4044_4045a.terminal1.i.re + line_4044_4045a.terminal1.V.im * line_4044_4045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2664]] /* line_4044_4045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13981;
}
/*
equation index: 13982
type: SIMPLE_ASSIGN
bus_4045.UPu = if line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal1.V.re ^ 2.0 + line_4045_4051b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13982};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_boolean tmp55;
  modelica_real tmp56;
  tmp55 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0));
  if(tmp55)
  {
    tmp56 = 0.0;
  }
  else
  {
    tmp52 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
    tmp53 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
    tmp54 = (tmp52 * tmp52) + (tmp53 * tmp53);
    if(tmp54 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp54, 0.5);
    }
    tmp56 = sqrt(tmp54);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* bus_4045.UPu variable */) = tmp56;
  threadData->lastEquationSolved = 13982;
}
/*
equation index: 13983
type: SIMPLE_ASSIGN
bus_4045.U = bus_4045.UPu * bus_4045.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* bus_4045.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* bus_4045.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* bus_4045.UNom PARAM */));
  threadData->lastEquationSolved = 13983;
}
/*
equation index: 13984
type: SIMPLE_ASSIGN
trafo_5_1045.Q2Pu = line_1042_1045.terminal2.V.im * trafo_5_1045.terminal2.i.re - line_1042_1045.terminal2.V.re * trafo_5_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* trafo_5_1045.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13984;
}
/*
equation index: 13985
type: SIMPLE_ASSIGN
trafo_5_1045.P2Pu = line_1042_1045.terminal2.V.re * trafo_5_1045.terminal2.i.re + line_1042_1045.terminal2.V.im * trafo_5_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* trafo_5_1045.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13985;
}
/*
equation index: 13986
type: SIMPLE_ASSIGN
bus_B05.UPhase = Modelica.Math.atan3(load_05.terminal.V.im, load_05.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* bus_B05.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 13986;
}
/*
equation index: 13987
type: SIMPLE_ASSIGN
trafo_5_1045.Q1Pu = load_05.terminal.V.im * trafo_5_1045.terminal1.i.re - load_05.terminal.V.re * trafo_5_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* trafo_5_1045.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13987;
}
/*
equation index: 13988
type: SIMPLE_ASSIGN
trafo_5_1045.P1Pu = load_05.terminal.V.re * trafo_5_1045.terminal1.i.re + load_05.terminal.V.im * trafo_5_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3224]] /* trafo_5_1045.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13988;
}
/*
equation index: 13989
type: SIMPLE_ASSIGN
bus_B05.UPu = if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13989};
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  tmp60 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
  if(tmp60)
  {
    tmp61 = 0.0;
  }
  else
  {
    tmp57 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
    tmp58 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
    tmp59 = (tmp57 * tmp57) + (tmp58 * tmp58);
    if(tmp59 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, 0.5);
    }
    tmp61 = sqrt(tmp59);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* bus_B05.UPu variable */) = tmp61;
  threadData->lastEquationSolved = 13989;
}
/*
equation index: 13990
type: SIMPLE_ASSIGN
bus_B05.U = bus_B05.UPu * bus_B05.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* bus_B05.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* bus_B05.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* bus_B05.UNom PARAM */));
  threadData->lastEquationSolved = 13990;
}
/*
equation index: 13991
type: SIMPLE_ASSIGN
bus_1045.UPu = shunt_1045.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* bus_1045.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */);
  threadData->lastEquationSolved = 13991;
}
/*
equation index: 13992
type: SIMPLE_ASSIGN
bus_1045.U = bus_1045.UPu * bus_1045.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* bus_1045.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* bus_1045.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* bus_1045.UNom PARAM */));
  threadData->lastEquationSolved = 13992;
}
/*
equation index: 13993
type: SIMPLE_ASSIGN
line_1042_1045.Q2Pu = line_1042_1045.terminal2.V.im * line_1042_1045.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1042_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2421]] /* line_1042_1045.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13993;
}
/*
equation index: 13994
type: SIMPLE_ASSIGN
line_1042_1045.P2Pu = line_1042_1045.terminal2.V.re * line_1042_1045.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1042_1045.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2419]] /* line_1042_1045.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13994;
}
/*
equation index: 13995
type: SIMPLE_ASSIGN
line_1041_1045a.Q2Pu = line_1042_1045.terminal2.V.im * line_1041_1045a.terminal2.i.re - line_1042_1045.terminal2.V.re * line_1041_1045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2389]] /* line_1041_1045a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13995;
}
/*
equation index: 13996
type: SIMPLE_ASSIGN
line_1041_1045a.P2Pu = line_1042_1045.terminal2.V.re * line_1041_1045a.terminal2.i.re + line_1042_1045.terminal2.V.im * line_1041_1045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2387]] /* line_1041_1045a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 13996;
}
/*
equation index: 13997
type: SIMPLE_ASSIGN
line_1041_1045a.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1045a.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2388]] /* line_1041_1045a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 13997;
}
/*
equation index: 13998
type: SIMPLE_ASSIGN
line_1041_1045a.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1045a.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1045a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2386]] /* line_1041_1045a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 13998;
}
/*
equation index: 13999
type: SIMPLE_ASSIGN
trafo_2_1042.Q2Pu = line_1042_1045.terminal1.V.im * trafo_2_1042.terminal2.i.re - line_1042_1045.terminal1.V.re * trafo_2_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_13999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3117]] /* trafo_2_1042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 13999;
}
/*
equation index: 14000
type: SIMPLE_ASSIGN
trafo_2_1042.P2Pu = line_1042_1045.terminal1.V.re * trafo_2_1042.terminal2.i.re + line_1042_1045.terminal1.V.im * trafo_2_1042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3115]] /* trafo_2_1042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14000;
}
/*
equation index: 14001
type: SIMPLE_ASSIGN
bus_B02.UPhase = Modelica.Math.atan3(load_02.terminal.V.im, load_02.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* bus_B02.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14001;
}
/*
equation index: 14002
type: SIMPLE_ASSIGN
trafo_2_1042.Q1Pu = load_02.terminal.V.im * trafo_2_1042.terminal1.i.re - load_02.terminal.V.re * trafo_2_1042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3116]] /* trafo_2_1042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14002;
}
/*
equation index: 14003
type: SIMPLE_ASSIGN
trafo_2_1042.P1Pu = load_02.terminal.V.re * trafo_2_1042.terminal1.i.re + load_02.terminal.V.im * trafo_2_1042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3114]] /* trafo_2_1042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14003;
}
/*
equation index: 14004
type: SIMPLE_ASSIGN
bus_B02.UPu = if load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0 then 0.0 else (load_02.terminal.V.re ^ 2.0 + load_02.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14004};
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  tmp65 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0));
  if(tmp65)
  {
    tmp66 = 0.0;
  }
  else
  {
    tmp62 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
    tmp63 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
    tmp64 = (tmp62 * tmp62) + (tmp63 * tmp63);
    if(tmp64 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp64, 0.5);
    }
    tmp66 = sqrt(tmp64);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* bus_B02.UPu variable */) = tmp66;
  threadData->lastEquationSolved = 14004;
}
/*
equation index: 14005
type: SIMPLE_ASSIGN
bus_B02.U = bus_B02.UPu * bus_B02.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* bus_B02.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* bus_B02.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* bus_B02.UNom PARAM */));
  threadData->lastEquationSolved = 14005;
}
/*
equation index: 14006
type: SIMPLE_ASSIGN
line_1042_1044b.Q1Pu = line_1042_1045.terminal1.V.im * line_1042_1044b.terminal1.i.re - line_1042_1045.terminal1.V.re * line_1042_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2412]] /* line_1042_1044b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14006;
}
/*
equation index: 14007
type: SIMPLE_ASSIGN
line_1042_1044b.P1Pu = line_1042_1045.terminal1.V.re * line_1042_1044b.terminal1.i.re + line_1042_1045.terminal1.V.im * line_1042_1044b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2410]] /* line_1042_1044b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14007;
}
/*
equation index: 14008
type: SIMPLE_ASSIGN
line_1042_1044b.Q2Pu = line_1043_1044a.terminal2.V.im * line_1042_1044b.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1042_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2413]] /* line_1042_1044b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14008;
}
/*
equation index: 14009
type: SIMPLE_ASSIGN
line_1042_1044b.P2Pu = line_1043_1044a.terminal2.V.re * line_1042_1044b.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1042_1044b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2411]] /* line_1042_1044b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14009;
}
/*
equation index: 14010
type: SIMPLE_ASSIGN
bus_BG06.UPu = if g06.terminal.V.re == 0.0 and g06.terminal.V.im == 0.0 then 0.0 else (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14010};
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  tmp70 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0));
  if(tmp70)
  {
    tmp71 = 0.0;
  }
  else
  {
    tmp67 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
    tmp68 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
    tmp69 = (tmp67 * tmp67) + (tmp68 * tmp68);
    if(tmp69 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp69, 0.5);
    }
    tmp71 = sqrt(tmp69);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* bus_BG06.UPu variable */) = tmp71;
  threadData->lastEquationSolved = 14010;
}
/*
equation index: 14011
type: SIMPLE_ASSIGN
bus_BG06.U = bus_BG06.UPu * bus_BG06.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* bus_BG06.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* bus_BG06.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* bus_BG06.UNom PARAM */));
  threadData->lastEquationSolved = 14011;
}
/*
equation index: 14012
type: SIMPLE_ASSIGN
bus_B04.UPhase = Modelica.Math.atan3(load_04.terminal.V.im, load_04.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* bus_B04.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14012;
}
/*
equation index: 14013
type: SIMPLE_ASSIGN
bus_B04.UPu = if load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0 then 0.0 else (load_04.terminal.V.re ^ 2.0 + load_04.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14013};
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  tmp75 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0));
  if(tmp75)
  {
    tmp76 = 0.0;
  }
  else
  {
    tmp72 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
    tmp73 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
    tmp74 = (tmp72 * tmp72) + (tmp73 * tmp73);
    if(tmp74 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, 0.5);
    }
    tmp76 = sqrt(tmp74);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* bus_B04.UPu variable */) = tmp76;
  threadData->lastEquationSolved = 14013;
}
/*
equation index: 14014
type: SIMPLE_ASSIGN
bus_B04.U = bus_B04.UPu * bus_B04.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* bus_B04.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* bus_B04.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* bus_B04.UNom PARAM */));
  threadData->lastEquationSolved = 14014;
}
/*
equation index: 14015
type: SIMPLE_ASSIGN
bus_1044.UPu = shunt_1044.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* bus_1044.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */);
  threadData->lastEquationSolved = 14015;
}
/*
equation index: 14016
type: SIMPLE_ASSIGN
bus_1044.U = bus_1044.UPu * bus_1044.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* bus_1044.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* bus_1044.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* bus_1044.UNom PARAM */));
  threadData->lastEquationSolved = 14016;
}
/*
equation index: 14017
type: SIMPLE_ASSIGN
line_1043_1044a.Q2Pu = line_1043_1044a.terminal2.V.im * line_1043_1044a.terminal2.i.re - line_1043_1044a.terminal2.V.re * line_1043_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2433]] /* line_1043_1044a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14017;
}
/*
equation index: 14018
type: SIMPLE_ASSIGN
line_1043_1044a.P2Pu = line_1043_1044a.terminal2.V.re * line_1043_1044a.terminal2.i.re + line_1043_1044a.terminal2.V.im * line_1043_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2431]] /* line_1043_1044a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14018;
}
/*
equation index: 14019
type: SIMPLE_ASSIGN
line_1043_1044a.Q1Pu = line_1043_1044a.terminal1.V.im * line_1043_1044a.terminal1.i.re - line_1043_1044a.terminal1.V.re * line_1043_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2432]] /* line_1043_1044a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14019;
}
/*
equation index: 14020
type: SIMPLE_ASSIGN
line_1043_1044a.P1Pu = line_1043_1044a.terminal1.V.re * line_1043_1044a.terminal1.i.re + line_1043_1044a.terminal1.V.im * line_1043_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2430]] /* line_1043_1044a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14020;
}
/*
equation index: 14021
type: SIMPLE_ASSIGN
trafo_3_1043.Q2Pu = line_1043_1044a.terminal1.V.im * trafo_3_1043.terminal2.i.re - line_1043_1044a.terminal1.V.re * trafo_3_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3147]] /* trafo_3_1043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14021;
}
/*
equation index: 14022
type: SIMPLE_ASSIGN
trafo_3_1043.P2Pu = line_1043_1044a.terminal1.V.re * trafo_3_1043.terminal2.i.re + line_1043_1044a.terminal1.V.im * trafo_3_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3145]] /* trafo_3_1043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14022;
}
/*
equation index: 14023
type: SIMPLE_ASSIGN
trafo_3_1043.Q1Pu = load_03.terminal.V.im * trafo_3_1043.terminal1.i.re - load_03.terminal.V.re * trafo_3_1043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3146]] /* trafo_3_1043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14023;
}
/*
equation index: 14024
type: SIMPLE_ASSIGN
trafo_3_1043.P1Pu = load_03.terminal.V.re * trafo_3_1043.terminal1.i.re + load_03.terminal.V.im * trafo_3_1043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3144]] /* trafo_3_1043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14024;
}
/*
equation index: 14025
type: SIMPLE_ASSIGN
bus_1043.UPhase = Modelica.Math.atan3(line_1043_1044a.terminal1.V.im, line_1043_1044a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* bus_1043.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14025;
}
/*
equation index: 14026
type: SIMPLE_ASSIGN
trafo_g7_1043.Q2Pu = line_1043_1044a.terminal1.V.im * trafo_g7_1043.terminal2.i.re - line_1043_1044a.terminal1.V.re * trafo_g7_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3425]] /* trafo_g7_1043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14026;
}
/*
equation index: 14027
type: SIMPLE_ASSIGN
trafo_g7_1043.P2Pu = line_1043_1044a.terminal1.V.re * trafo_g7_1043.terminal2.i.re + line_1043_1044a.terminal1.V.im * trafo_g7_1043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3423]] /* trafo_g7_1043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14027;
}
/*
equation index: 14028
type: SIMPLE_ASSIGN
bus_BG07.UPhase = Modelica.Math.atan3(g07.terminal.V.im, g07.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* bus_BG07.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14028;
}
/*
equation index: 14029
type: SIMPLE_ASSIGN
trafo_g7_1043.Q1Pu = g07.terminal.V.re * g07.terminal.i.im - g07.terminal.V.im * g07.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3424]] /* trafo_g7_1043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14029;
}
/*
equation index: 14030
type: SIMPLE_ASSIGN
trafo_g7_1043.P1Pu = (-g07.terminal.V.re) * g07.terminal.i.re - g07.terminal.V.im * g07.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3422]] /* trafo_g7_1043.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14030;
}
/*
equation index: 14031
type: SIMPLE_ASSIGN
bus_B03.UPhase = Modelica.Math.atan3(load_03.terminal.V.im, load_03.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* bus_B03.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14031;
}
/*
equation index: 14032
type: SIMPLE_ASSIGN
bus_B03.UPu = if load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0 then 0.0 else (load_03.terminal.V.re ^ 2.0 + load_03.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14032};
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  tmp80 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0));
  if(tmp80)
  {
    tmp81 = 0.0;
  }
  else
  {
    tmp77 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
    tmp78 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
    tmp79 = (tmp77 * tmp77) + (tmp78 * tmp78);
    if(tmp79 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp79, 0.5);
    }
    tmp81 = sqrt(tmp79);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* bus_B03.UPu variable */) = tmp81;
  threadData->lastEquationSolved = 14032;
}
/*
equation index: 14033
type: SIMPLE_ASSIGN
bus_B03.U = bus_B03.UPu * bus_B03.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* bus_B03.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* bus_B03.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* bus_B03.UNom PARAM */));
  threadData->lastEquationSolved = 14033;
}
/*
equation index: 14034
type: SIMPLE_ASSIGN
bus_1043.UPu = shunt_1043.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* bus_1043.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */);
  threadData->lastEquationSolved = 14034;
}
/*
equation index: 14035
type: SIMPLE_ASSIGN
bus_1043.U = bus_1043.UPu * bus_1043.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* bus_1043.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* bus_1043.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* bus_1043.UNom PARAM */));
  threadData->lastEquationSolved = 14035;
}
/*
equation index: 14036
type: SIMPLE_ASSIGN
line_1041_1043b.Q2Pu = line_1043_1044a.terminal1.V.im * line_1041_1043b.terminal2.i.re - line_1043_1044a.terminal1.V.re * line_1041_1043b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2381]] /* line_1041_1043b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14036;
}
/*
equation index: 14037
type: SIMPLE_ASSIGN
line_1041_1043b.P2Pu = line_1043_1044a.terminal1.V.re * line_1041_1043b.terminal2.i.re + line_1043_1044a.terminal1.V.im * line_1041_1043b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2379]] /* line_1041_1043b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14037;
}
/*
equation index: 14038
type: SIMPLE_ASSIGN
line_1041_1043b.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1043b.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1043b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2380]] /* line_1041_1043b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14038;
}
/*
equation index: 14039
type: SIMPLE_ASSIGN
line_1041_1043b.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1043b.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1043b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2378]] /* line_1041_1043b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14039;
}
/*
equation index: 14040
type: SIMPLE_ASSIGN
line_1041_1043a.Q2Pu = line_1043_1044a.terminal1.V.im * line_1041_1043a.terminal2.i.re - line_1043_1044a.terminal1.V.re * line_1041_1043a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14040};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2371]] /* line_1041_1043a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14040;
}
/*
equation index: 14041
type: SIMPLE_ASSIGN
line_1041_1043a.P2Pu = line_1043_1044a.terminal1.V.re * line_1041_1043a.terminal2.i.re + line_1043_1044a.terminal1.V.im * line_1041_1043a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2369]] /* line_1041_1043a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14041;
}
/*
equation index: 14042
type: SIMPLE_ASSIGN
line_1041_1043a.Q1Pu = line_1041_1043a.terminal1.V.im * line_1041_1043a.terminal1.i.re - line_1041_1043a.terminal1.V.re * line_1041_1043a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14042};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2370]] /* line_1041_1043a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14042;
}
/*
equation index: 14043
type: SIMPLE_ASSIGN
line_1041_1043a.P1Pu = line_1041_1043a.terminal1.V.re * line_1041_1043a.terminal1.i.re + line_1041_1043a.terminal1.V.im * line_1041_1043a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2368]] /* line_1041_1043a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14043;
}
/*
equation index: 14044
type: SIMPLE_ASSIGN
bus_BG07.UPu = if g07.terminal.V.re == 0.0 and g07.terminal.V.im == 0.0 then 0.0 else (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14044};
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  tmp85 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0));
  if(tmp85)
  {
    tmp86 = 0.0;
  }
  else
  {
    tmp82 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
    tmp83 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
    tmp84 = (tmp82 * tmp82) + (tmp83 * tmp83);
    if(tmp84 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp84, 0.5);
    }
    tmp86 = sqrt(tmp84);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* bus_BG07.UPu variable */) = tmp86;
  threadData->lastEquationSolved = 14044;
}
/*
equation index: 14045
type: SIMPLE_ASSIGN
bus_BG07.U = bus_BG07.UPu * bus_BG07.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* bus_BG07.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* bus_BG07.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* bus_BG07.UNom PARAM */));
  threadData->lastEquationSolved = 14045;
}
/*
equation index: 14046
type: SIMPLE_ASSIGN
line_4043_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4043_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4043_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2641]] /* line_4043_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14046;
}
/*
equation index: 14047
type: SIMPLE_ASSIGN
line_4043_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4043_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4043_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2639]] /* line_4043_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14047;
}
/*
equation index: 14048
type: SIMPLE_ASSIGN
line_4043_4044.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4044.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2640]] /* line_4043_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14048;
}
/*
equation index: 14049
type: SIMPLE_ASSIGN
line_4043_4044.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4044.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2638]] /* line_4043_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14049;
}
/*
equation index: 14050
type: SIMPLE_ASSIGN
line_4042_4043.Q2Pu = line_4043_4046.terminal1.V.im * line_4042_4043.terminal2.i.re - line_4043_4046.terminal1.V.re * line_4042_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14050};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2623]] /* line_4042_4043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14050;
}
/*
equation index: 14051
type: SIMPLE_ASSIGN
line_4042_4043.P2Pu = line_4043_4046.terminal1.V.re * line_4042_4043.terminal2.i.re + line_4043_4046.terminal1.V.im * line_4042_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2621]] /* line_4042_4043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14051;
}
/*
equation index: 14052
type: SIMPLE_ASSIGN
bus_4043.UPhase = Modelica.Math.atan3(line_4043_4046.terminal1.V.im, line_4043_4046.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* bus_4043.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14052;
}
/*
equation index: 14053
type: SIMPLE_ASSIGN
trafo_43_4043.Q2Pu = line_4043_4046.terminal1.V.im * trafo_43_4043.terminal2.i.re - line_4043_4046.terminal1.V.re * trafo_43_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* trafo_43_4043.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14053;
}
/*
equation index: 14054
type: SIMPLE_ASSIGN
trafo_43_4043.P2Pu = line_4043_4046.terminal1.V.re * trafo_43_4043.terminal2.i.re + line_4043_4046.terminal1.V.im * trafo_43_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3175]] /* trafo_43_4043.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14054;
}
/*
equation index: 14055
type: SIMPLE_ASSIGN
bus_B43.UPhase = Modelica.Math.atan3(load_43.terminal.V.im, load_43.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* bus_B43.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14055;
}
/*
equation index: 14056
type: SIMPLE_ASSIGN
trafo_43_4043.Q1Pu = load_43.terminal.V.im * trafo_43_4043.terminal1.i.re - load_43.terminal.V.re * trafo_43_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14056};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3176]] /* trafo_43_4043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14056;
}
/*
equation index: 14057
type: SIMPLE_ASSIGN
trafo_43_4043.P1Pu = load_43.terminal.V.re * trafo_43_4043.terminal1.i.re + load_43.terminal.V.im * trafo_43_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3174]] /* trafo_43_4043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14057;
}
/*
equation index: 14058
type: SIMPLE_ASSIGN
bus_4043.UPu = shunt_4043.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* bus_4043.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */);
  threadData->lastEquationSolved = 14058;
}
/*
equation index: 14059
type: SIMPLE_ASSIGN
bus_4043.U = bus_4043.UPu * bus_4043.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* bus_4043.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* bus_4043.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* bus_4043.UNom PARAM */));
  threadData->lastEquationSolved = 14059;
}
/*
equation index: 14060
type: SIMPLE_ASSIGN
line_4043_4047.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4047.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2658]] /* line_4043_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14060;
}
/*
equation index: 14061
type: SIMPLE_ASSIGN
line_4043_4047.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4047.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2656]] /* line_4043_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14061;
}
/*
equation index: 14062
type: SIMPLE_ASSIGN
line_4043_4047.Q2Pu = line_4046_4047.terminal2.V.im * line_4043_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * line_4043_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2659]] /* line_4043_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14062;
}
/*
equation index: 14063
type: SIMPLE_ASSIGN
line_4043_4047.P2Pu = line_4046_4047.terminal2.V.re * line_4043_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * line_4043_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2657]] /* line_4043_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14063;
}
/*
equation index: 14064
type: SIMPLE_ASSIGN
trafo_47_4047.Q2Pu = line_4046_4047.terminal2.V.im * trafo_47_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * trafo_47_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3197]] /* trafo_47_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14064;
}
/*
equation index: 14065
type: SIMPLE_ASSIGN
trafo_47_4047.P2Pu = line_4046_4047.terminal2.V.re * trafo_47_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * trafo_47_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3195]] /* trafo_47_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14065;
}
/*
equation index: 14066
type: SIMPLE_ASSIGN
trafo_47_4047.Q1Pu = load_47.terminal.V.im * trafo_47_4047.terminal1.i.re - load_47.terminal.V.re * trafo_47_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3196]] /* trafo_47_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14066;
}
/*
equation index: 14067
type: SIMPLE_ASSIGN
trafo_47_4047.P1Pu = load_47.terminal.V.re * trafo_47_4047.terminal1.i.re + load_47.terminal.V.im * trafo_47_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3194]] /* trafo_47_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14067;
}
/*
equation index: 14068
type: SIMPLE_ASSIGN
bus_4047.UPhase = Modelica.Math.atan3(line_4046_4047.terminal2.V.im, line_4046_4047.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* bus_4047.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14068;
}
/*
equation index: 14069
type: SIMPLE_ASSIGN
trafo_g15_4047.Q2Pu = line_4046_4047.terminal2.V.im * trafo_g15_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * trafo_g15_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3327]] /* trafo_g15_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14069;
}
/*
equation index: 14070
type: SIMPLE_ASSIGN
trafo_g15_4047.P2Pu = line_4046_4047.terminal2.V.re * trafo_g15_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * trafo_g15_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3325]] /* trafo_g15_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14070;
}
/*
equation index: 14071
type: SIMPLE_ASSIGN
bus_BG15.UPhase = Modelica.Math.atan3(g15.terminal.V.im, g15.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* bus_BG15.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14071;
}
/*
equation index: 14072
type: SIMPLE_ASSIGN
trafo_g15_4047.Q1Pu = g15.terminal.V.re * g15.terminal.i.im - g15.terminal.V.im * g15.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3326]] /* trafo_g15_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14072;
}
/*
equation index: 14073
type: SIMPLE_ASSIGN
trafo_g15_4047.P1Pu = (-g15.terminal.V.re) * g15.terminal.i.re - g15.terminal.V.im * g15.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3324]] /* trafo_g15_4047.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14073;
}
/*
equation index: 14074
type: SIMPLE_ASSIGN
line_4046_4047.Q2Pu = line_4046_4047.terminal2.V.im * line_4046_4047.terminal2.i.re - line_4046_4047.terminal2.V.re * line_4046_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2713]] /* line_4046_4047.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14074;
}
/*
equation index: 14075
type: SIMPLE_ASSIGN
line_4046_4047.P2Pu = line_4046_4047.terminal2.V.re * line_4046_4047.terminal2.i.re + line_4046_4047.terminal2.V.im * line_4046_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2711]] /* line_4046_4047.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14075;
}
/*
equation index: 14076
type: SIMPLE_ASSIGN
line_4046_4047.Q1Pu = line_4046_4047.terminal1.V.im * line_4046_4047.terminal1.i.re - line_4046_4047.terminal1.V.re * line_4046_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2712]] /* line_4046_4047.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14076;
}
/*
equation index: 14077
type: SIMPLE_ASSIGN
line_4046_4047.P1Pu = line_4046_4047.terminal1.V.re * line_4046_4047.terminal1.i.re + line_4046_4047.terminal1.V.im * line_4046_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2710]] /* line_4046_4047.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14077;
}
/*
equation index: 14078
type: SIMPLE_ASSIGN
trafo_46_4046.Q2Pu = line_4046_4047.terminal1.V.im * trafo_46_4046.terminal2.i.re - line_4046_4047.terminal1.V.re * trafo_46_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3187]] /* trafo_46_4046.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14078;
}
/*
equation index: 14079
type: SIMPLE_ASSIGN
trafo_46_4046.P2Pu = line_4046_4047.terminal1.V.re * trafo_46_4046.terminal2.i.re + line_4046_4047.terminal1.V.im * trafo_46_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* trafo_46_4046.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14079;
}
/*
equation index: 14080
type: SIMPLE_ASSIGN
trafo_46_4046.Q1Pu = load_46.terminal.V.im * trafo_46_4046.terminal1.i.re - load_46.terminal.V.re * trafo_46_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* trafo_46_4046.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14080;
}
/*
equation index: 14081
type: SIMPLE_ASSIGN
trafo_46_4046.P1Pu = load_46.terminal.V.re * trafo_46_4046.terminal1.i.re + load_46.terminal.V.im * trafo_46_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3184]] /* trafo_46_4046.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14081;
}
/*
equation index: 14082
type: SIMPLE_ASSIGN
bus_4046.UPhase = Modelica.Math.atan3(line_4046_4047.terminal1.V.im, line_4046_4047.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* bus_4046.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14082;
}
/*
equation index: 14083
type: SIMPLE_ASSIGN
line_4043_4046.Q2Pu = line_4046_4047.terminal1.V.im * line_4043_4046.terminal2.i.re - line_4046_4047.terminal1.V.re * line_4043_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2649]] /* line_4043_4046.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14083;
}
/*
equation index: 14084
type: SIMPLE_ASSIGN
line_4043_4046.P2Pu = line_4046_4047.terminal1.V.re * line_4043_4046.terminal2.i.re + line_4046_4047.terminal1.V.im * line_4043_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2647]] /* line_4043_4046.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14084;
}
/*
equation index: 14085
type: SIMPLE_ASSIGN
line_4043_4046.Q1Pu = line_4043_4046.terminal1.V.im * line_4043_4046.terminal1.i.re - line_4043_4046.terminal1.V.re * line_4043_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2648]] /* line_4043_4046.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14085;
}
/*
equation index: 14086
type: SIMPLE_ASSIGN
line_4043_4046.P1Pu = line_4043_4046.terminal1.V.re * line_4043_4046.terminal1.i.re + line_4043_4046.terminal1.V.im * line_4043_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2646]] /* line_4043_4046.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14086;
}
/*
equation index: 14087
type: SIMPLE_ASSIGN
bus_B46.UPhase = Modelica.Math.atan3(load_46.terminal.V.im, load_46.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* bus_B46.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14087;
}
/*
equation index: 14088
type: SIMPLE_ASSIGN
bus_B46.UPu = if load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0 then 0.0 else (load_46.terminal.V.re ^ 2.0 + load_46.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14088};
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  tmp90 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0));
  if(tmp90)
  {
    tmp91 = 0.0;
  }
  else
  {
    tmp87 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
    tmp88 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
    tmp89 = (tmp87 * tmp87) + (tmp88 * tmp88);
    if(tmp89 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp89, 0.5);
    }
    tmp91 = sqrt(tmp89);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* bus_B46.UPu variable */) = tmp91;
  threadData->lastEquationSolved = 14088;
}
/*
equation index: 14089
type: SIMPLE_ASSIGN
bus_B46.U = bus_B46.UPu * bus_B46.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* bus_B46.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* bus_B46.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* bus_B46.UNom PARAM */));
  threadData->lastEquationSolved = 14089;
}
/*
equation index: 14090
type: SIMPLE_ASSIGN
bus_4046.UPu = shunt_4046.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* bus_4046.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */);
  threadData->lastEquationSolved = 14090;
}
/*
equation index: 14091
type: SIMPLE_ASSIGN
bus_4046.U = bus_4046.UPu * bus_4046.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* bus_4046.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* bus_4046.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* bus_4046.UNom PARAM */));
  threadData->lastEquationSolved = 14091;
}
/*
equation index: 14092
type: SIMPLE_ASSIGN
bus_4047.UPu = if line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0 then 0.0 else (line_4046_4047.terminal2.V.re ^ 2.0 + line_4046_4047.terminal2.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14092};
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  tmp95 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0));
  if(tmp95)
  {
    tmp96 = 0.0;
  }
  else
  {
    tmp92 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
    tmp93 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
    tmp94 = (tmp92 * tmp92) + (tmp93 * tmp93);
    if(tmp94 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, 0.5);
    }
    tmp96 = sqrt(tmp94);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* bus_4047.UPu variable */) = tmp96;
  threadData->lastEquationSolved = 14092;
}
/*
equation index: 14093
type: SIMPLE_ASSIGN
bus_4047.U = bus_4047.UPu * bus_4047.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* bus_4047.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* bus_4047.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* bus_4047.UNom PARAM */));
  threadData->lastEquationSolved = 14093;
}
/*
equation index: 14094
type: SIMPLE_ASSIGN
bus_BG15.UPu = if g15.terminal.V.re == 0.0 and g15.terminal.V.im == 0.0 then 0.0 else (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14094};
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  tmp100 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0));
  if(tmp100)
  {
    tmp101 = 0.0;
  }
  else
  {
    tmp97 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
    tmp98 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
    tmp99 = (tmp97 * tmp97) + (tmp98 * tmp98);
    if(tmp99 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp99, 0.5);
    }
    tmp101 = sqrt(tmp99);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* bus_BG15.UPu variable */) = tmp101;
  threadData->lastEquationSolved = 14094;
}
/*
equation index: 14095
type: SIMPLE_ASSIGN
bus_BG15.U = bus_BG15.UPu * bus_BG15.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* bus_BG15.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* bus_BG15.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* bus_BG15.UNom PARAM */));
  threadData->lastEquationSolved = 14095;
}
/*
equation index: 14096
type: SIMPLE_ASSIGN
bus_B47.UPhase = Modelica.Math.atan3(load_47.terminal.V.im, load_47.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* bus_B47.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14096;
}
/*
equation index: 14097
type: SIMPLE_ASSIGN
bus_B47.UPu = if load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0 then 0.0 else (load_47.terminal.V.re ^ 2.0 + load_47.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14097};
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_boolean tmp105;
  modelica_real tmp106;
  tmp105 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0));
  if(tmp105)
  {
    tmp106 = 0.0;
  }
  else
  {
    tmp102 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
    tmp103 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
    tmp104 = (tmp102 * tmp102) + (tmp103 * tmp103);
    if(tmp104 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp104, 0.5);
    }
    tmp106 = sqrt(tmp104);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* bus_B47.UPu variable */) = tmp106;
  threadData->lastEquationSolved = 14097;
}
/*
equation index: 14098
type: SIMPLE_ASSIGN
bus_B47.U = bus_B47.UPu * bus_B47.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* bus_B47.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* bus_B47.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* bus_B47.UNom PARAM */));
  threadData->lastEquationSolved = 14098;
}
/*
equation index: 14099
type: SIMPLE_ASSIGN
line_4042_4043.Q1Pu = line_4042_4043.terminal1.V.im * line_4042_4043.terminal1.i.re - line_4042_4043.terminal1.V.re * line_4042_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2622]] /* line_4042_4043.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14099;
}
/*
equation index: 14100
type: SIMPLE_ASSIGN
line_4042_4043.P1Pu = line_4042_4043.terminal1.V.re * line_4042_4043.terminal1.i.re + line_4042_4043.terminal1.V.im * line_4042_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2620]] /* line_4042_4043.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14100;
}
/*
equation index: 14101
type: SIMPLE_ASSIGN
trafo_g14_4042.Q2Pu = line_4042_4043.terminal1.V.im * trafo_g14_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * trafo_g14_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3319]] /* trafo_g14_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14101;
}
/*
equation index: 14102
type: SIMPLE_ASSIGN
trafo_g14_4042.P2Pu = line_4042_4043.terminal1.V.re * trafo_g14_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * trafo_g14_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3317]] /* trafo_g14_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14102;
}
/*
equation index: 14103
type: SIMPLE_ASSIGN
trafo_g14_4042.Q1Pu = g14.terminal.V.re * g14.terminal.i.im - g14.terminal.V.im * g14.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3318]] /* trafo_g14_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14103;
}
/*
equation index: 14104
type: SIMPLE_ASSIGN
trafo_g14_4042.P1Pu = (-g14.terminal.V.re) * g14.terminal.i.re - g14.terminal.V.im * g14.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3316]] /* trafo_g14_4042.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14104;
}
/*
equation index: 14105
type: SIMPLE_ASSIGN
bus_4042.UPhase = Modelica.Math.atan3(line_4042_4043.terminal1.V.im, line_4042_4043.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* bus_4042.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14105;
}
/*
equation index: 14106
type: SIMPLE_ASSIGN
line_4032_4042.Q2Pu = line_4042_4043.terminal1.V.im * line_4032_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * line_4032_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2587]] /* line_4032_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14106;
}
/*
equation index: 14107
type: SIMPLE_ASSIGN
line_4032_4042.P2Pu = line_4042_4043.terminal1.V.re * line_4032_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * line_4032_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2585]] /* line_4032_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14107;
}
/*
equation index: 14108
type: SIMPLE_ASSIGN
line_4032_4042.Q1Pu = line_4032_4044.terminal1.V.im * line_4032_4042.terminal1.i.re - line_4032_4044.terminal1.V.re * line_4032_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2586]] /* line_4032_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14108;
}
/*
equation index: 14109
type: SIMPLE_ASSIGN
line_4032_4042.P1Pu = line_4032_4044.terminal1.V.re * line_4032_4042.terminal1.i.re + line_4032_4044.terminal1.V.im * line_4032_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2584]] /* line_4032_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14109;
}
/*
equation index: 14110
type: SIMPLE_ASSIGN
bus_BG14.UPhase = Modelica.Math.atan3(g14.terminal.V.im, g14.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* bus_BG14.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14110;
}
/*
equation index: 14111
type: SIMPLE_ASSIGN
bus_BG14.UPu = if g14.terminal.V.re == 0.0 and g14.terminal.V.im == 0.0 then 0.0 else (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14111};
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  tmp110 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0));
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    tmp107 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
    tmp108 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
    tmp109 = (tmp107 * tmp107) + (tmp108 * tmp108);
    if(tmp109 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp109, 0.5);
    }
    tmp111 = sqrt(tmp109);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* bus_BG14.UPu variable */) = tmp111;
  threadData->lastEquationSolved = 14111;
}
/*
equation index: 14112
type: SIMPLE_ASSIGN
bus_BG14.U = bus_BG14.UPu * bus_BG14.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* bus_BG14.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* bus_BG14.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* bus_BG14.UNom PARAM */));
  threadData->lastEquationSolved = 14112;
}
/*
equation index: 14113
type: SIMPLE_ASSIGN
trafo_42_4042.Q2Pu = line_4042_4043.terminal1.V.im * trafo_42_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * trafo_42_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* trafo_42_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14113;
}
/*
equation index: 14114
type: SIMPLE_ASSIGN
trafo_42_4042.P2Pu = line_4042_4043.terminal1.V.re * trafo_42_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * trafo_42_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* trafo_42_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14114;
}
/*
equation index: 14115
type: SIMPLE_ASSIGN
trafo_42_4042.Q1Pu = load_42.terminal.V.im * trafo_42_4042.terminal1.i.re - load_42.terminal.V.re * trafo_42_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* trafo_42_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14115;
}
/*
equation index: 14116
type: SIMPLE_ASSIGN
trafo_42_4042.P1Pu = load_42.terminal.V.re * trafo_42_4042.terminal1.i.re + load_42.terminal.V.im * trafo_42_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* trafo_42_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14116;
}
/*
equation index: 14117
type: SIMPLE_ASSIGN
bus_B42.UPhase = Modelica.Math.atan3(load_42.terminal.V.im, load_42.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* bus_B42.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14117;
}
/*
equation index: 14118
type: SIMPLE_ASSIGN
bus_B42.UPu = if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14118};
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_boolean tmp115;
  modelica_real tmp116;
  tmp115 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
  if(tmp115)
  {
    tmp116 = 0.0;
  }
  else
  {
    tmp112 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
    tmp113 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
    tmp114 = (tmp112 * tmp112) + (tmp113 * tmp113);
    if(tmp114 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp114, 0.5);
    }
    tmp116 = sqrt(tmp114);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* bus_B42.UPu variable */) = tmp116;
  threadData->lastEquationSolved = 14118;
}
/*
equation index: 14119
type: SIMPLE_ASSIGN
bus_B42.U = bus_B42.UPu * bus_B42.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* bus_B42.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* bus_B42.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* bus_B42.UNom PARAM */));
  threadData->lastEquationSolved = 14119;
}
/*
equation index: 14120
type: SIMPLE_ASSIGN
line_4042_4044.Q1Pu = line_4042_4043.terminal1.V.im * line_4042_4044.terminal1.i.re - line_4042_4043.terminal1.V.re * line_4042_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2632]] /* line_4042_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14120;
}
/*
equation index: 14121
type: SIMPLE_ASSIGN
line_4042_4044.P1Pu = line_4042_4043.terminal1.V.re * line_4042_4044.terminal1.i.re + line_4042_4043.terminal1.V.im * line_4042_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2630]] /* line_4042_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14121;
}
/*
equation index: 14122
type: SIMPLE_ASSIGN
line_4042_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4042_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4042_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2633]] /* line_4042_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14122;
}
/*
equation index: 14123
type: SIMPLE_ASSIGN
line_4042_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4042_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4042_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2631]] /* line_4042_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14123;
}
/*
equation index: 14124
type: SIMPLE_ASSIGN
line_4021_4042.Q2Pu = line_4042_4043.terminal1.V.im * line_4021_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * line_4021_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2535]] /* line_4021_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14124;
}
/*
equation index: 14125
type: SIMPLE_ASSIGN
line_4021_4042.P2Pu = line_4042_4043.terminal1.V.re * line_4021_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * line_4021_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2533]] /* line_4021_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14125;
}
/*
equation index: 14126
type: SIMPLE_ASSIGN
line_4021_4042.Q1Pu = line_4021_4032.terminal1.V.im * line_4021_4042.terminal1.i.re - line_4021_4032.terminal1.V.re * line_4021_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2534]] /* line_4021_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14126;
}
/*
equation index: 14127
type: SIMPLE_ASSIGN
line_4021_4042.P1Pu = line_4021_4032.terminal1.V.re * line_4021_4042.terminal1.i.re + line_4021_4032.terminal1.V.im * line_4021_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2532]] /* line_4021_4042.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14127;
}
/*
equation index: 14128
type: SIMPLE_ASSIGN
bus_4021.UPu = if line_4021_4032.terminal1.V.re == 0.0 and line_4021_4032.terminal1.V.im == 0.0 then 0.0 else (line_4021_4032.terminal1.V.re ^ 2.0 + line_4021_4032.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14128};
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  tmp120 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0));
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    tmp117 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */);
    tmp118 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */);
    tmp119 = (tmp117 * tmp117) + (tmp118 * tmp118);
    if(tmp119 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp119, 0.5);
    }
    tmp121 = sqrt(tmp119);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* bus_4021.UPu variable */) = tmp121;
  threadData->lastEquationSolved = 14128;
}
/*
equation index: 14129
type: SIMPLE_ASSIGN
bus_4021.U = bus_4021.UPu * bus_4021.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* bus_4021.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* bus_4021.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* bus_4021.UNom PARAM */));
  threadData->lastEquationSolved = 14129;
}
/*
equation index: 14130
type: SIMPLE_ASSIGN
bus_4042.UPu = if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14130};
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  tmp125 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
  if(tmp125)
  {
    tmp126 = 0.0;
  }
  else
  {
    tmp122 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
    tmp123 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
    tmp124 = (tmp122 * tmp122) + (tmp123 * tmp123);
    if(tmp124 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, 0.5);
    }
    tmp126 = sqrt(tmp124);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* bus_4042.UPu variable */) = tmp126;
  threadData->lastEquationSolved = 14130;
}
/*
equation index: 14131
type: SIMPLE_ASSIGN
bus_4042.U = bus_4042.UPu * bus_4042.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* bus_4042.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* bus_4042.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* bus_4042.UNom PARAM */));
  threadData->lastEquationSolved = 14131;
}
/*
equation index: 14132
type: SIMPLE_ASSIGN
line_4041_4044.Q2Pu = line_4044_4045a.terminal1.V.im * line_4041_4044.terminal2.i.re - line_4044_4045a.terminal1.V.re * line_4041_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2605]] /* line_4041_4044.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14132;
}
/*
equation index: 14133
type: SIMPLE_ASSIGN
line_4041_4044.P2Pu = line_4044_4045a.terminal1.V.re * line_4041_4044.terminal2.i.re + line_4044_4045a.terminal1.V.im * line_4041_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2603]] /* line_4041_4044.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14133;
}
/*
equation index: 14134
type: SIMPLE_ASSIGN
line_4041_4044.Q1Pu = line_4041_4061.terminal1.V.im * line_4041_4044.terminal1.i.re - line_4041_4061.terminal1.V.re * line_4041_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2604]] /* line_4041_4044.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14134;
}
/*
equation index: 14135
type: SIMPLE_ASSIGN
line_4041_4044.P1Pu = line_4041_4061.terminal1.V.re * line_4041_4044.terminal1.i.re + line_4041_4061.terminal1.V.im * line_4041_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2602]] /* line_4041_4044.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14135;
}
/*
equation index: 14136
type: SIMPLE_ASSIGN
line_4031_4041b.Q2Pu = line_4041_4061.terminal1.V.im * line_4031_4041b.terminal2.i.re - line_4041_4061.terminal1.V.re * line_4031_4041b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2577]] /* line_4031_4041b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14136;
}
/*
equation index: 14137
type: SIMPLE_ASSIGN
line_4031_4041b.P2Pu = line_4041_4061.terminal1.V.re * line_4031_4041b.terminal2.i.re + line_4041_4061.terminal1.V.im * line_4031_4041b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2575]] /* line_4031_4041b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14137;
}
/*
equation index: 14138
type: SIMPLE_ASSIGN
trafo_41_4041.Q2Pu = line_4041_4061.terminal1.V.im * trafo_41_4041.terminal2.i.re - line_4041_4061.terminal1.V.re * trafo_41_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3157]] /* trafo_41_4041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14138;
}
/*
equation index: 14139
type: SIMPLE_ASSIGN
trafo_41_4041.P2Pu = line_4041_4061.terminal1.V.re * trafo_41_4041.terminal2.i.re + line_4041_4061.terminal1.V.im * trafo_41_4041.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3155]] /* trafo_41_4041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14139;
}
/*
equation index: 14140
type: SIMPLE_ASSIGN
bus_B41.UPhase = Modelica.Math.atan3(load_41.terminal.V.im, load_41.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* bus_B41.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14140;
}
/*
equation index: 14141
type: SIMPLE_ASSIGN
trafo_41_4041.Q1Pu = load_41.terminal.V.im * trafo_41_4041.terminal1.i.re - load_41.terminal.V.re * trafo_41_4041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3156]] /* trafo_41_4041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14141;
}
/*
equation index: 14142
type: SIMPLE_ASSIGN
trafo_41_4041.P1Pu = load_41.terminal.V.re * trafo_41_4041.terminal1.i.re + load_41.terminal.V.im * trafo_41_4041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3154]] /* trafo_41_4041.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14142;
}
/*
equation index: 14143
type: SIMPLE_ASSIGN
bus_B41.UPu = if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14143};
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp130 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    tmp127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
    tmp128 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
    tmp129 = (tmp127 * tmp127) + (tmp128 * tmp128);
    if(tmp129 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, 0.5);
    }
    tmp131 = sqrt(tmp129);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* bus_B41.UPu variable */) = tmp131;
  threadData->lastEquationSolved = 14143;
}
/*
equation index: 14144
type: SIMPLE_ASSIGN
bus_B41.U = bus_B41.UPu * bus_B41.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* bus_B41.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* bus_B41.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* bus_B41.UNom PARAM */));
  threadData->lastEquationSolved = 14144;
}
/*
equation index: 14145
type: SIMPLE_ASSIGN
bus_4041.UPu = shunt_4041.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* bus_4041.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */);
  threadData->lastEquationSolved = 14145;
}
/*
equation index: 14146
type: SIMPLE_ASSIGN
bus_4041.U = bus_4041.UPu * bus_4041.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* bus_4041.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* bus_4041.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* bus_4041.UNom PARAM */));
  threadData->lastEquationSolved = 14146;
}
/*
equation index: 14147
type: SIMPLE_ASSIGN
line_4041_4061.Q1Pu = line_4041_4061.terminal1.V.im * line_4041_4061.terminal1.i.re - line_4041_4061.terminal1.V.re * line_4041_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2612]] /* line_4041_4061.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14147;
}
/*
equation index: 14148
type: SIMPLE_ASSIGN
line_4041_4061.P1Pu = line_4041_4061.terminal1.V.re * line_4041_4061.terminal1.i.re + line_4041_4061.terminal1.V.im * line_4041_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2610]] /* line_4041_4061.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14148;
}
/*
equation index: 14149
type: SIMPLE_ASSIGN
bus_4044.UPu = if line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0 then 0.0 else (line_4044_4045a.terminal1.V.re ^ 2.0 + line_4044_4045a.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14149};
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_real tmp136;
  tmp135 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0));
  if(tmp135)
  {
    tmp136 = 0.0;
  }
  else
  {
    tmp132 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
    tmp133 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
    tmp134 = (tmp132 * tmp132) + (tmp133 * tmp133);
    if(tmp134 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp134, 0.5);
    }
    tmp136 = sqrt(tmp134);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* bus_4044.UPu variable */) = tmp136;
  threadData->lastEquationSolved = 14149;
}
/*
equation index: 14150
type: SIMPLE_ASSIGN
bus_4044.U = bus_4044.UPu * bus_4044.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* bus_4044.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* bus_4044.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* bus_4044.UNom PARAM */));
  threadData->lastEquationSolved = 14150;
}
/*
equation index: 14151
type: SIMPLE_ASSIGN
bus_B43.UPu = if load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0 then 0.0 else (load_43.terminal.V.re ^ 2.0 + load_43.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14151};
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  tmp140 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0));
  if(tmp140)
  {
    tmp141 = 0.0;
  }
  else
  {
    tmp137 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
    tmp138 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
    tmp139 = (tmp137 * tmp137) + (tmp138 * tmp138);
    if(tmp139 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp139, 0.5);
    }
    tmp141 = sqrt(tmp139);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* bus_B43.UPu variable */) = tmp141;
  threadData->lastEquationSolved = 14151;
}
/*
equation index: 14152
type: SIMPLE_ASSIGN
bus_B43.U = bus_B43.UPu * bus_B43.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* bus_B43.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* bus_B43.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* bus_B43.UNom PARAM */));
  threadData->lastEquationSolved = 14152;
}
/*
equation index: 14153
type: SIMPLE_ASSIGN
line_4031_4032.Q2Pu = line_4032_4044.terminal1.V.im * line_4031_4032.terminal2.i.re - line_4032_4044.terminal1.V.re * line_4031_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2561]] /* line_4031_4032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14153;
}
/*
equation index: 14154
type: SIMPLE_ASSIGN
line_4031_4032.P2Pu = line_4032_4044.terminal1.V.re * line_4031_4032.terminal2.i.re + line_4032_4044.terminal1.V.im * line_4031_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2559]] /* line_4031_4032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14154;
}
/*
equation index: 14155
type: SIMPLE_ASSIGN
line_4031_4032.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4032.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2560]] /* line_4031_4032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14155;
}
/*
equation index: 14156
type: SIMPLE_ASSIGN
line_4031_4032.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4032.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2558]] /* line_4031_4032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14156;
}
/*
equation index: 14157
type: SIMPLE_ASSIGN
bus_4032.UPu = if line_4032_4044.terminal1.V.re == 0.0 and line_4032_4044.terminal1.V.im == 0.0 then 0.0 else (line_4032_4044.terminal1.V.re ^ 2.0 + line_4032_4044.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14157};
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  tmp145 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) == 0.0));
  if(tmp145)
  {
    tmp146 = 0.0;
  }
  else
  {
    tmp142 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */);
    tmp143 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */);
    tmp144 = (tmp142 * tmp142) + (tmp143 * tmp143);
    if(tmp144 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp144, 0.5);
    }
    tmp146 = sqrt(tmp144);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* bus_4032.UPu variable */) = tmp146;
  threadData->lastEquationSolved = 14157;
}
/*
equation index: 14158
type: SIMPLE_ASSIGN
bus_4032.U = bus_4032.UPu * bus_4032.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* bus_4032.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* bus_4032.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* bus_4032.UNom PARAM */));
  threadData->lastEquationSolved = 14158;
}
/*
equation index: 14159
type: SIMPLE_ASSIGN
line_4011_4012.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4012.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2472]] /* line_4011_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14159;
}
/*
equation index: 14160
type: SIMPLE_ASSIGN
line_4011_4012.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4012.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2470]] /* line_4011_4012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14160;
}
/*
equation index: 14161
type: SIMPLE_ASSIGN
line_4011_4012.Q2Pu = line_4012_4022.terminal1.V.im * line_4011_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * line_4011_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2473]] /* line_4011_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14161;
}
/*
equation index: 14162
type: SIMPLE_ASSIGN
line_4011_4012.P2Pu = line_4012_4022.terminal1.V.re * line_4011_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * line_4011_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2471]] /* line_4011_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14162;
}
/*
equation index: 14163
type: SIMPLE_ASSIGN
trafo_1011_4011.Q2Pu = line_4011_4071.terminal1.V.im * trafo_1011_4011.terminal2.i.re - line_4011_4071.terminal1.V.re * trafo_1011_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2987]] /* trafo_1011_4011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14163;
}
/*
equation index: 14164
type: SIMPLE_ASSIGN
trafo_1011_4011.P2Pu = line_4011_4071.terminal1.V.re * trafo_1011_4011.terminal2.i.re + line_4011_4071.terminal1.V.im * trafo_1011_4011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2985]] /* trafo_1011_4011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14164;
}
/*
equation index: 14165
type: SIMPLE_ASSIGN
line_4011_4071.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4071.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2496]] /* line_4011_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14165;
}
/*
equation index: 14166
type: SIMPLE_ASSIGN
line_4011_4071.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4071.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2494]] /* line_4011_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14166;
}
/*
equation index: 14167
type: SIMPLE_ASSIGN
bus_4071.UPhase = Modelica.Math.atan3(line_4071_4072a.terminal1.V.im, line_4071_4072a.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* bus_4071.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14167;
}
/*
equation index: 14168
type: SIMPLE_ASSIGN
trafo_g19_4071.Q2Pu = line_4071_4072a.terminal1.V.im * trafo_g19_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * trafo_g19_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3359]] /* trafo_g19_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14168;
}
/*
equation index: 14169
type: SIMPLE_ASSIGN
trafo_g19_4071.P2Pu = line_4071_4072a.terminal1.V.re * trafo_g19_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * trafo_g19_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3357]] /* trafo_g19_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14169;
}
/*
equation index: 14170
type: SIMPLE_ASSIGN
bus_BG19.UPhase = Modelica.Math.atan3(g19.terminal.V.im, g19.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* bus_BG19.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14170;
}
/*
equation index: 14171
type: SIMPLE_ASSIGN
trafo_g19_4071.Q1Pu = g19.terminal.V.re * g19.terminal.i.im - g19.terminal.V.im * g19.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3358]] /* trafo_g19_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14171;
}
/*
equation index: 14172
type: SIMPLE_ASSIGN
trafo_g19_4071.P1Pu = (-g19.terminal.V.re) * g19.terminal.i.re - g19.terminal.V.im * g19.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3356]] /* trafo_g19_4071.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14172;
}
/*
equation index: 14173
type: SIMPLE_ASSIGN
line_4011_4071.Q2Pu = line_4071_4072a.terminal1.V.im * line_4011_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * line_4011_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2497]] /* line_4011_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14173;
}
/*
equation index: 14174
type: SIMPLE_ASSIGN
line_4011_4071.P2Pu = line_4071_4072a.terminal1.V.re * line_4011_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * line_4011_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2495]] /* line_4011_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14174;
}
/*
equation index: 14175
type: SIMPLE_ASSIGN
line_4012_4071.Q2Pu = line_4071_4072a.terminal1.V.im * line_4012_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * line_4012_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2517]] /* line_4012_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14175;
}
/*
equation index: 14176
type: SIMPLE_ASSIGN
line_4012_4071.P2Pu = line_4071_4072a.terminal1.V.re * line_4012_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * line_4012_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2515]] /* line_4012_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14176;
}
/*
equation index: 14177
type: SIMPLE_ASSIGN
trafo_71_4071.Q2Pu = line_4071_4072a.terminal1.V.im * trafo_71_4071.terminal2.i.re - line_4071_4072a.terminal1.V.re * trafo_71_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3267]] /* trafo_71_4071.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14177;
}
/*
equation index: 14178
type: SIMPLE_ASSIGN
trafo_71_4071.P2Pu = line_4071_4072a.terminal1.V.re * trafo_71_4071.terminal2.i.re + line_4071_4072a.terminal1.V.im * trafo_71_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3265]] /* trafo_71_4071.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14178;
}
/*
equation index: 14179
type: SIMPLE_ASSIGN
trafo_71_4071.Q1Pu = load_71.terminal.V.im * trafo_71_4071.terminal1.i.re - load_71.terminal.V.re * trafo_71_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3266]] /* trafo_71_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14179;
}
/*
equation index: 14180
type: SIMPLE_ASSIGN
trafo_71_4071.P1Pu = load_71.terminal.V.re * trafo_71_4071.terminal1.i.re + load_71.terminal.V.im * trafo_71_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3264]] /* trafo_71_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14180;
}
/*
equation index: 14181
type: SIMPLE_ASSIGN
bus_B71.UPhase = Modelica.Math.atan3(load_71.terminal.V.im, load_71.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bus_B71.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14181;
}
/*
equation index: 14182
type: SIMPLE_ASSIGN
bus_B71.UPu = if load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0 then 0.0 else (load_71.terminal.V.re ^ 2.0 + load_71.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14182};
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  tmp150 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0));
  if(tmp150)
  {
    tmp151 = 0.0;
  }
  else
  {
    tmp147 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
    tmp148 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
    tmp149 = (tmp147 * tmp147) + (tmp148 * tmp148);
    if(tmp149 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp149, 0.5);
    }
    tmp151 = sqrt(tmp149);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* bus_B71.UPu variable */) = tmp151;
  threadData->lastEquationSolved = 14182;
}
/*
equation index: 14183
type: SIMPLE_ASSIGN
bus_B71.U = bus_B71.UPu * bus_B71.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bus_B71.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* bus_B71.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* bus_B71.UNom PARAM */));
  threadData->lastEquationSolved = 14183;
}
/*
equation index: 14184
type: SIMPLE_ASSIGN
bus_4071.UPu = shunt_4071.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* bus_4071.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */);
  threadData->lastEquationSolved = 14184;
}
/*
equation index: 14185
type: SIMPLE_ASSIGN
bus_4071.U = bus_4071.UPu * bus_4071.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* bus_4071.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* bus_4071.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* bus_4071.UNom PARAM */));
  threadData->lastEquationSolved = 14185;
}
/*
equation index: 14186
type: SIMPLE_ASSIGN
line_4071_4072b.Q1Pu = line_4071_4072a.terminal1.V.im * line_4071_4072b.terminal1.i.re - line_4071_4072a.terminal1.V.re * line_4071_4072b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2766]] /* line_4071_4072b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14186;
}
/*
equation index: 14187
type: SIMPLE_ASSIGN
line_4071_4072b.P1Pu = line_4071_4072a.terminal1.V.re * line_4071_4072b.terminal1.i.re + line_4071_4072a.terminal1.V.im * line_4071_4072b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2764]] /* line_4071_4072b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14187;
}
/*
equation index: 14188
type: SIMPLE_ASSIGN
line_4071_4072b.Q2Pu = line_4071_4072a.terminal2.V.im * line_4071_4072b.terminal2.i.re - line_4071_4072a.terminal2.V.re * line_4071_4072b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2767]] /* line_4071_4072b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14188;
}
/*
equation index: 14189
type: SIMPLE_ASSIGN
line_4071_4072b.P2Pu = line_4071_4072a.terminal2.V.re * line_4071_4072b.terminal2.i.re + line_4071_4072a.terminal2.V.im * line_4071_4072b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2765]] /* line_4071_4072b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14189;
}
/*
equation index: 14190
type: SIMPLE_ASSIGN
trafo_72_4072.Q2Pu = line_4071_4072a.terminal2.V.im * trafo_72_4072.terminal2.i.re - line_4071_4072a.terminal2.V.re * trafo_72_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3277]] /* trafo_72_4072.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14190;
}
/*
equation index: 14191
type: SIMPLE_ASSIGN
trafo_72_4072.P2Pu = line_4071_4072a.terminal2.V.re * trafo_72_4072.terminal2.i.re + line_4071_4072a.terminal2.V.im * trafo_72_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3275]] /* trafo_72_4072.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14191;
}
/*
equation index: 14192
type: SIMPLE_ASSIGN
bus_4072.UPhase = Modelica.Math.atan3(line_4071_4072a.terminal2.V.im, line_4071_4072a.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* bus_4072.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14192;
}
/*
equation index: 14193
type: SIMPLE_ASSIGN
trafo_g20_4072.Q2Pu = line_4071_4072a.terminal2.V.im * trafo_g20_4072.terminal2.i.re - line_4071_4072a.terminal2.V.re * trafo_g20_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3375]] /* trafo_g20_4072.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14193;
}
/*
equation index: 14194
type: SIMPLE_ASSIGN
trafo_g20_4072.P2Pu = line_4071_4072a.terminal2.V.re * trafo_g20_4072.terminal2.i.re + line_4071_4072a.terminal2.V.im * trafo_g20_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3373]] /* trafo_g20_4072.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14194;
}
/*
equation index: 14195
type: SIMPLE_ASSIGN
bus_BG20.UPhase = Modelica.Math.atan3(trafo_g20_4072.terminal1.V.im, trafo_g20_4072.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* bus_BG20.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14195;
}
/*
equation index: 14196
type: SIMPLE_ASSIGN
trafo_g20_4072.Q1Pu = trafo_g20_4072.terminal1.V.re * g20.terminal.i.im - trafo_g20_4072.terminal1.V.im * g20.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3374]] /* trafo_g20_4072.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14196;
}
/*
equation index: 14197
type: SIMPLE_ASSIGN
trafo_g20_4072.P1Pu = (-trafo_g20_4072.terminal1.V.re) * g20.terminal.i.re - trafo_g20_4072.terminal1.V.im * g20.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3372]] /* trafo_g20_4072.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14197;
}
/*
equation index: 14198
type: SIMPLE_ASSIGN
trafo_72_4072.Q1Pu = load_72.terminal.V.im * trafo_72_4072.terminal1.i.re - load_72.terminal.V.re * trafo_72_4072.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3276]] /* trafo_72_4072.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14198;
}
/*
equation index: 14199
type: SIMPLE_ASSIGN
trafo_72_4072.P1Pu = load_72.terminal.V.re * trafo_72_4072.terminal1.i.re + load_72.terminal.V.im * trafo_72_4072.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3274]] /* trafo_72_4072.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14199;
}
/*
equation index: 14200
type: SIMPLE_ASSIGN
line_4071_4072a.Q2Pu = line_4071_4072a.terminal2.V.im * line_4071_4072a.terminal2.i.re - line_4071_4072a.terminal2.V.re * line_4071_4072a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2755]] /* line_4071_4072a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14200;
}
/*
equation index: 14201
type: SIMPLE_ASSIGN
line_4071_4072a.P2Pu = line_4071_4072a.terminal2.V.re * line_4071_4072a.terminal2.i.re + line_4071_4072a.terminal2.V.im * line_4071_4072a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2753]] /* line_4071_4072a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14201;
}
/*
equation index: 14202
type: SIMPLE_ASSIGN
line_4071_4072a.Q1Pu = line_4071_4072a.terminal1.V.im * line_4071_4072a.terminal1.i.re - line_4071_4072a.terminal1.V.re * line_4071_4072a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2754]] /* line_4071_4072a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14202;
}
/*
equation index: 14203
type: SIMPLE_ASSIGN
line_4071_4072a.P1Pu = line_4071_4072a.terminal1.V.re * line_4071_4072a.terminal1.i.re + line_4071_4072a.terminal1.V.im * line_4071_4072a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2752]] /* line_4071_4072a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14203;
}
/*
equation index: 14204
type: SIMPLE_ASSIGN
bus_4072.UPu = if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14204};
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_boolean tmp155;
  modelica_real tmp156;
  tmp155 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
  if(tmp155)
  {
    tmp156 = 0.0;
  }
  else
  {
    tmp152 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
    tmp153 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
    tmp154 = (tmp152 * tmp152) + (tmp153 * tmp153);
    if(tmp154 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp154, 0.5);
    }
    tmp156 = sqrt(tmp154);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* bus_4072.UPu variable */) = tmp156;
  threadData->lastEquationSolved = 14204;
}
/*
equation index: 14205
type: SIMPLE_ASSIGN
bus_4072.U = bus_4072.UPu * bus_4072.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* bus_4072.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* bus_4072.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* bus_4072.UNom PARAM */));
  threadData->lastEquationSolved = 14205;
}
/*
equation index: 14206
type: SIMPLE_ASSIGN
bus_B72.UPhase = Modelica.Math.atan3(load_72.terminal.V.im, load_72.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* bus_B72.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14206;
}
/*
equation index: 14207
type: SIMPLE_ASSIGN
bus_B72.UPu = if load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0 then 0.0 else (load_72.terminal.V.re ^ 2.0 + load_72.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14207};
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_boolean tmp160;
  modelica_real tmp161;
  tmp160 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0));
  if(tmp160)
  {
    tmp161 = 0.0;
  }
  else
  {
    tmp157 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
    tmp158 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
    tmp159 = (tmp157 * tmp157) + (tmp158 * tmp158);
    if(tmp159 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp159, 0.5);
    }
    tmp161 = sqrt(tmp159);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bus_B72.UPu variable */) = tmp161;
  threadData->lastEquationSolved = 14207;
}
/*
equation index: 14208
type: SIMPLE_ASSIGN
bus_B72.U = bus_B72.UPu * bus_B72.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* bus_B72.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bus_B72.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* bus_B72.UNom PARAM */));
  threadData->lastEquationSolved = 14208;
}
/*
equation index: 14209
type: SIMPLE_ASSIGN
bus_BG20.UPu = if trafo_g20_4072.terminal1.V.re == 0.0 and trafo_g20_4072.terminal1.V.im == 0.0 then 0.0 else (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14209};
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_boolean tmp165;
  modelica_real tmp166;
  tmp165 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0));
  if(tmp165)
  {
    tmp166 = 0.0;
  }
  else
  {
    tmp162 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
    tmp163 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
    tmp164 = (tmp162 * tmp162) + (tmp163 * tmp163);
    if(tmp164 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, 0.5);
    }
    tmp166 = sqrt(tmp164);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* bus_BG20.UPu variable */) = tmp166;
  threadData->lastEquationSolved = 14209;
}
/*
equation index: 14210
type: SIMPLE_ASSIGN
bus_BG20.U = bus_BG20.UPu * bus_BG20.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* bus_BG20.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* bus_BG20.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* bus_BG20.UNom PARAM */));
  threadData->lastEquationSolved = 14210;
}
/*
equation index: 14211
type: SIMPLE_ASSIGN
line_4012_4071.Q1Pu = line_4012_4022.terminal1.V.im * line_4012_4071.terminal1.i.re - line_4012_4022.terminal1.V.re * line_4012_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2516]] /* line_4012_4071.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14211;
}
/*
equation index: 14212
type: SIMPLE_ASSIGN
line_4012_4071.P1Pu = line_4012_4022.terminal1.V.re * line_4012_4071.terminal1.i.re + line_4012_4022.terminal1.V.im * line_4012_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2514]] /* line_4012_4071.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14212;
}
/*
equation index: 14213
type: SIMPLE_ASSIGN
bus_BG19.UPu = if g19.terminal.V.re == 0.0 and g19.terminal.V.im == 0.0 then 0.0 else (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14213};
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_boolean tmp170;
  modelica_real tmp171;
  tmp170 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0));
  if(tmp170)
  {
    tmp171 = 0.0;
  }
  else
  {
    tmp167 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
    tmp168 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
    tmp169 = (tmp167 * tmp167) + (tmp168 * tmp168);
    if(tmp169 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp169, 0.5);
    }
    tmp171 = sqrt(tmp169);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* bus_BG19.UPu variable */) = tmp171;
  threadData->lastEquationSolved = 14213;
}
/*
equation index: 14214
type: SIMPLE_ASSIGN
bus_BG19.U = bus_BG19.UPu * bus_BG19.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* bus_BG19.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* bus_BG19.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* bus_BG19.UNom PARAM */));
  threadData->lastEquationSolved = 14214;
}
/*
equation index: 14215
type: SIMPLE_ASSIGN
line_4011_4022.Q1Pu = line_4011_4071.terminal1.V.im * line_4011_4022.terminal1.i.re - line_4011_4071.terminal1.V.re * line_4011_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2488]] /* line_4011_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14215;
}
/*
equation index: 14216
type: SIMPLE_ASSIGN
line_4011_4022.P1Pu = line_4011_4071.terminal1.V.re * line_4011_4022.terminal1.i.re + line_4011_4071.terminal1.V.im * line_4011_4022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2486]] /* line_4011_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14216;
}
/*
equation index: 14217
type: SIMPLE_ASSIGN
line_4011_4022.Q2Pu = line_4022_4031b.terminal1.V.im * line_4011_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * line_4011_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2489]] /* line_4011_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14217;
}
/*
equation index: 14218
type: SIMPLE_ASSIGN
line_4011_4022.P2Pu = line_4022_4031b.terminal1.V.re * line_4011_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * line_4011_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2487]] /* line_4011_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14218;
}
/*
equation index: 14219
type: SIMPLE_ASSIGN
bus_4011.UPu = if line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0 then 0.0 else (line_4011_4071.terminal1.V.re ^ 2.0 + line_4011_4071.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14219};
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_boolean tmp175;
  modelica_real tmp176;
  tmp175 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0));
  if(tmp175)
  {
    tmp176 = 0.0;
  }
  else
  {
    tmp172 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
    tmp173 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
    tmp174 = (tmp172 * tmp172) + (tmp173 * tmp173);
    if(tmp174 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp174, 0.5);
    }
    tmp176 = sqrt(tmp174);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* bus_4011.UPu variable */) = tmp176;
  threadData->lastEquationSolved = 14219;
}
/*
equation index: 14220
type: SIMPLE_ASSIGN
bus_4011.U = bus_4011.UPu * bus_4011.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* bus_4011.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* bus_4011.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* bus_4011.UNom PARAM */));
  threadData->lastEquationSolved = 14220;
}
#if defined(__cplusplus)
}
#endif