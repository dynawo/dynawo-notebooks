#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 14221
type: SIMPLE_ASSIGN
bus_BG09.UPu = if g09.terminal.V.re == 0.0 and g09.terminal.V.im == 0.0 then 0.0 else (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14221};
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_boolean tmp180;
  modelica_real tmp181;
  tmp180 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0));
  if(tmp180)
  {
    tmp181 = 0.0;
  }
  else
  {
    tmp177 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
    tmp178 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
    tmp179 = (tmp177 * tmp177) + (tmp178 * tmp178);
    if(tmp179 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp179, 0.5);
    }
    tmp181 = sqrt(tmp179);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* bus_BG09.UPu variable */) = tmp181;
  threadData->lastEquationSolved = 14221;
}
/*
equation index: 14222
type: SIMPLE_ASSIGN
bus_BG09.U = bus_BG09.UPu * bus_BG09.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* bus_BG09.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* bus_BG09.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* bus_BG09.UNom PARAM */));
  threadData->lastEquationSolved = 14222;
}
/*
equation index: 14223
type: SIMPLE_ASSIGN
trafo_11_1011.Q2Pu = line_1011_1013a.terminal1.V.im * trafo_11_1011.terminal2.i.re - line_1011_1013a.terminal1.V.re * trafo_11_1011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3057]] /* trafo_11_1011.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14223;
}
/*
equation index: 14224
type: SIMPLE_ASSIGN
trafo_11_1011.P2Pu = line_1011_1013a.terminal1.V.re * trafo_11_1011.terminal2.i.re + line_1011_1013a.terminal1.V.im * trafo_11_1011.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3055]] /* trafo_11_1011.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14224;
}
/*
equation index: 14225
type: SIMPLE_ASSIGN
trafo_11_1011.Q1Pu = load_11.terminal.V.im * trafo_11_1011.terminal1.i.re - load_11.terminal.V.re * trafo_11_1011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3056]] /* trafo_11_1011.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14225;
}
/*
equation index: 14226
type: SIMPLE_ASSIGN
trafo_11_1011.P1Pu = load_11.terminal.V.re * trafo_11_1011.terminal1.i.re + load_11.terminal.V.im * trafo_11_1011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3054]] /* trafo_11_1011.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14226;
}
/*
equation index: 14227
type: SIMPLE_ASSIGN
bus_B11.UPhase = Modelica.Math.atan3(load_11.terminal.V.im, load_11.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* bus_B11.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14227;
}
/*
equation index: 14228
type: SIMPLE_ASSIGN
bus_B11.UPu = if load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0 then 0.0 else (load_11.terminal.V.re ^ 2.0 + load_11.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14228};
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_boolean tmp185;
  modelica_real tmp186;
  tmp185 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0));
  if(tmp185)
  {
    tmp186 = 0.0;
  }
  else
  {
    tmp182 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
    tmp183 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
    tmp184 = (tmp182 * tmp182) + (tmp183 * tmp183);
    if(tmp184 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp184, 0.5);
    }
    tmp186 = sqrt(tmp184);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* bus_B11.UPu variable */) = tmp186;
  threadData->lastEquationSolved = 14228;
}
/*
equation index: 14229
type: SIMPLE_ASSIGN
bus_B11.U = bus_B11.UPu * bus_B11.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* bus_B11.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* bus_B11.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* bus_B11.UNom PARAM */));
  threadData->lastEquationSolved = 14229;
}
/*
equation index: 14230
type: SIMPLE_ASSIGN
line_1011_1013b.Q1Pu = line_1011_1013a.terminal1.V.im * line_1011_1013b.terminal1.i.re - line_1011_1013a.terminal1.V.re * line_1011_1013b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2304]] /* line_1011_1013b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14230;
}
/*
equation index: 14231
type: SIMPLE_ASSIGN
line_1011_1013b.P1Pu = line_1011_1013a.terminal1.V.re * line_1011_1013b.terminal1.i.re + line_1011_1013a.terminal1.V.im * line_1011_1013b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2302]] /* line_1011_1013b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14231;
}
/*
equation index: 14232
type: SIMPLE_ASSIGN
line_1011_1013b.Q2Pu = line_1013_1014a.terminal1.V.im * line_1011_1013b.terminal2.i.re - line_1013_1014a.terminal1.V.re * line_1011_1013b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2305]] /* line_1011_1013b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14232;
}
/*
equation index: 14233
type: SIMPLE_ASSIGN
line_1011_1013b.P2Pu = line_1013_1014a.terminal1.V.re * line_1011_1013b.terminal2.i.re + line_1013_1014a.terminal1.V.im * line_1011_1013b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2303]] /* line_1011_1013b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14233;
}
/*
equation index: 14234
type: SIMPLE_ASSIGN
bus_1011.UPu = if line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0 then 0.0 else (line_1011_1013a.terminal1.V.re ^ 2.0 + line_1011_1013a.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14234};
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_boolean tmp190;
  modelica_real tmp191;
  tmp190 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0));
  if(tmp190)
  {
    tmp191 = 0.0;
  }
  else
  {
    tmp187 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
    tmp188 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
    tmp189 = (tmp187 * tmp187) + (tmp188 * tmp188);
    if(tmp189 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp189, 0.5);
    }
    tmp191 = sqrt(tmp189);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* bus_1011.UPu variable */) = tmp191;
  threadData->lastEquationSolved = 14234;
}
/*
equation index: 14235
type: SIMPLE_ASSIGN
bus_1011.U = bus_1011.UPu * bus_1011.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* bus_1011.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* bus_1011.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* bus_1011.UNom PARAM */));
  threadData->lastEquationSolved = 14235;
}
/*
equation index: 14236
type: SIMPLE_ASSIGN
trafo_13_1013.Q2Pu = line_1013_1014a.terminal1.V.im * trafo_13_1013.terminal2.i.re - line_1013_1014a.terminal1.V.re * trafo_13_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3077]] /* trafo_13_1013.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14236;
}
/*
equation index: 14237
type: SIMPLE_ASSIGN
trafo_13_1013.P2Pu = line_1013_1014a.terminal1.V.re * trafo_13_1013.terminal2.i.re + line_1013_1014a.terminal1.V.im * trafo_13_1013.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3075]] /* trafo_13_1013.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14237;
}
/*
equation index: 14238
type: SIMPLE_ASSIGN
bus_B13.UPhase = Modelica.Math.atan3(load_13.terminal.V.im, load_13.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* bus_B13.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14238;
}
/*
equation index: 14239
type: SIMPLE_ASSIGN
trafo_13_1013.Q1Pu = load_13.terminal.V.im * trafo_13_1013.terminal1.i.re - load_13.terminal.V.re * trafo_13_1013.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3076]] /* trafo_13_1013.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14239;
}
/*
equation index: 14240
type: SIMPLE_ASSIGN
trafo_13_1013.P1Pu = load_13.terminal.V.re * trafo_13_1013.terminal1.i.re + load_13.terminal.V.im * trafo_13_1013.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3074]] /* trafo_13_1013.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14240;
}
/*
equation index: 14241
type: SIMPLE_ASSIGN
bus_B13.UPu = if load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0 then 0.0 else (load_13.terminal.V.re ^ 2.0 + load_13.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14241};
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  tmp195 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0));
  if(tmp195)
  {
    tmp196 = 0.0;
  }
  else
  {
    tmp192 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
    tmp193 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
    tmp194 = (tmp192 * tmp192) + (tmp193 * tmp193);
    if(tmp194 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, 0.5);
    }
    tmp196 = sqrt(tmp194);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* bus_B13.UPu variable */) = tmp196;
  threadData->lastEquationSolved = 14241;
}
/*
equation index: 14242
type: SIMPLE_ASSIGN
bus_B13.U = bus_B13.UPu * bus_B13.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* bus_B13.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* bus_B13.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* bus_B13.UNom PARAM */));
  threadData->lastEquationSolved = 14242;
}
/*
equation index: 14243
type: SIMPLE_ASSIGN
line_1013_1014a.Q1Pu = line_1013_1014a.terminal1.V.im * line_1013_1014a.terminal1.i.re - line_1013_1014a.terminal1.V.re * line_1013_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2330]] /* line_1013_1014a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14243;
}
/*
equation index: 14244
type: SIMPLE_ASSIGN
line_1013_1014a.P1Pu = line_1013_1014a.terminal1.V.re * line_1013_1014a.terminal1.i.re + line_1013_1014a.terminal1.V.im * line_1013_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2328]] /* line_1013_1014a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14244;
}
/*
equation index: 14245
type: SIMPLE_ASSIGN
line_1013_1014a.Q2Pu = line_1013_1014a.terminal2.V.im * line_1013_1014a.terminal2.i.re - line_1013_1014a.terminal2.V.re * line_1013_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2331]] /* line_1013_1014a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14245;
}
/*
equation index: 14246
type: SIMPLE_ASSIGN
line_1013_1014a.P2Pu = line_1013_1014a.terminal2.V.re * line_1013_1014a.terminal2.i.re + line_1013_1014a.terminal2.V.im * line_1013_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2329]] /* line_1013_1014a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14246;
}
/*
equation index: 14247
type: SIMPLE_ASSIGN
bus_1013.UPu = if line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal1.V.re ^ 2.0 + line_1013_1014a.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14247};
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  tmp200 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0));
  if(tmp200)
  {
    tmp201 = 0.0;
  }
  else
  {
    tmp197 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
    tmp198 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
    tmp199 = (tmp197 * tmp197) + (tmp198 * tmp198);
    if(tmp199 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, 0.5);
    }
    tmp201 = sqrt(tmp199);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* bus_1013.UPu variable */) = tmp201;
  threadData->lastEquationSolved = 14247;
}
/*
equation index: 14248
type: SIMPLE_ASSIGN
bus_1013.U = bus_1013.UPu * bus_1013.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* bus_1013.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* bus_1013.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* bus_1013.UNom PARAM */));
  threadData->lastEquationSolved = 14248;
}
/*
equation index: 14249
type: SIMPLE_ASSIGN
bus_BG02.UPu = if g02.terminal.V.re == 0.0 and g02.terminal.V.im == 0.0 then 0.0 else (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14249};
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_boolean tmp205;
  modelica_real tmp206;
  tmp205 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0));
  if(tmp205)
  {
    tmp206 = 0.0;
  }
  else
  {
    tmp202 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
    tmp203 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
    tmp204 = (tmp202 * tmp202) + (tmp203 * tmp203);
    if(tmp204 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp204, 0.5);
    }
    tmp206 = sqrt(tmp204);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* bus_BG02.UPu variable */) = tmp206;
  threadData->lastEquationSolved = 14249;
}
/*
equation index: 14250
type: SIMPLE_ASSIGN
bus_BG02.U = bus_BG02.UPu * bus_BG02.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* bus_BG02.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* bus_BG02.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* bus_BG02.UNom PARAM */));
  threadData->lastEquationSolved = 14250;
}
/*
equation index: 14251
type: SIMPLE_ASSIGN
trafo_12_1012.Q2Pu = line_1012_1014a.terminal1.V.im * trafo_12_1012.terminal2.i.re - line_1012_1014a.terminal1.V.re * trafo_12_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* trafo_12_1012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14251;
}
/*
equation index: 14252
type: SIMPLE_ASSIGN
trafo_12_1012.P2Pu = line_1012_1014a.terminal1.V.re * trafo_12_1012.terminal2.i.re + line_1012_1014a.terminal1.V.im * trafo_12_1012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* trafo_12_1012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14252;
}
/*
equation index: 14253
type: SIMPLE_ASSIGN
bus_B12.UPhase = Modelica.Math.atan3(load_12.terminal.V.im, load_12.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* bus_B12.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14253;
}
/*
equation index: 14254
type: SIMPLE_ASSIGN
trafo_12_1012.Q1Pu = load_12.terminal.V.im * trafo_12_1012.terminal1.i.re - load_12.terminal.V.re * trafo_12_1012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* trafo_12_1012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14254;
}
/*
equation index: 14255
type: SIMPLE_ASSIGN
trafo_12_1012.P1Pu = load_12.terminal.V.re * trafo_12_1012.terminal1.i.re + load_12.terminal.V.im * trafo_12_1012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* trafo_12_1012.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14255;
}
/*
equation index: 14256
type: SIMPLE_ASSIGN
bus_B12.UPu = if load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0 then 0.0 else (load_12.terminal.V.re ^ 2.0 + load_12.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14256};
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_boolean tmp210;
  modelica_real tmp211;
  tmp210 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0));
  if(tmp210)
  {
    tmp211 = 0.0;
  }
  else
  {
    tmp207 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
    tmp208 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
    tmp209 = (tmp207 * tmp207) + (tmp208 * tmp208);
    if(tmp209 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp209, 0.5);
    }
    tmp211 = sqrt(tmp209);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* bus_B12.UPu variable */) = tmp211;
  threadData->lastEquationSolved = 14256;
}
/*
equation index: 14257
type: SIMPLE_ASSIGN
bus_B12.U = bus_B12.UPu * bus_B12.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* bus_B12.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* bus_B12.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* bus_B12.UNom PARAM */));
  threadData->lastEquationSolved = 14257;
}
/*
equation index: 14258
type: SIMPLE_ASSIGN
bus_1012.UPu = if line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0 then 0.0 else (line_1012_1014a.terminal1.V.re ^ 2.0 + line_1012_1014a.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14258};
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_boolean tmp215;
  modelica_real tmp216;
  tmp215 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0));
  if(tmp215)
  {
    tmp216 = 0.0;
  }
  else
  {
    tmp212 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
    tmp213 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
    tmp214 = (tmp212 * tmp212) + (tmp213 * tmp213);
    if(tmp214 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp214, 0.5);
    }
    tmp216 = sqrt(tmp214);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* bus_1012.UPu variable */) = tmp216;
  threadData->lastEquationSolved = 14258;
}
/*
equation index: 14259
type: SIMPLE_ASSIGN
bus_1012.U = bus_1012.UPu * bus_1012.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* bus_1012.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* bus_1012.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* bus_1012.UNom PARAM */));
  threadData->lastEquationSolved = 14259;
}
/*
equation index: 14260
type: SIMPLE_ASSIGN
bus_1014.UPu = if line_1013_1014a.terminal2.V.re == 0.0 and line_1013_1014a.terminal2.V.im == 0.0 then 0.0 else (line_1013_1014a.terminal2.V.re ^ 2.0 + line_1013_1014a.terminal2.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14260};
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_boolean tmp220;
  modelica_real tmp221;
  tmp220 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0));
  if(tmp220)
  {
    tmp221 = 0.0;
  }
  else
  {
    tmp217 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */);
    tmp218 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */);
    tmp219 = (tmp217 * tmp217) + (tmp218 * tmp218);
    if(tmp219 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp219, 0.5);
    }
    tmp221 = sqrt(tmp219);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* bus_1014.UPu variable */) = tmp221;
  threadData->lastEquationSolved = 14260;
}
/*
equation index: 14261
type: SIMPLE_ASSIGN
bus_1014.U = bus_1014.UPu * bus_1014.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* bus_1014.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* bus_1014.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* bus_1014.UNom PARAM */));
  threadData->lastEquationSolved = 14261;
}
/*
equation index: 14262
type: SIMPLE_ASSIGN
bus_BG03.UPu = if g03.terminal.V.re == 0.0 and g03.terminal.V.im == 0.0 then 0.0 else (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14262};
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_boolean tmp225;
  modelica_real tmp226;
  tmp225 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0));
  if(tmp225)
  {
    tmp226 = 0.0;
  }
  else
  {
    tmp222 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
    tmp223 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
    tmp224 = (tmp222 * tmp222) + (tmp223 * tmp223);
    if(tmp224 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp224, 0.5);
    }
    tmp226 = sqrt(tmp224);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* bus_BG03.UPu variable */) = tmp226;
  threadData->lastEquationSolved = 14262;
}
/*
equation index: 14263
type: SIMPLE_ASSIGN
bus_BG03.U = bus_BG03.UPu * bus_BG03.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* bus_BG03.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* bus_BG03.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* bus_BG03.UNom PARAM */));
  threadData->lastEquationSolved = 14263;
}
/*
equation index: 14264
type: SIMPLE_ASSIGN
bus_4022.UPu = if line_4022_4031b.terminal1.V.re == 0.0 and line_4022_4031b.terminal1.V.im == 0.0 then 0.0 else (line_4022_4031b.terminal1.V.re ^ 2.0 + line_4022_4031b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14264};
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_boolean tmp230;
  modelica_real tmp231;
  tmp230 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0));
  if(tmp230)
  {
    tmp231 = 0.0;
  }
  else
  {
    tmp227 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */);
    tmp228 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */);
    tmp229 = (tmp227 * tmp227) + (tmp228 * tmp228);
    if(tmp229 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp229, 0.5);
    }
    tmp231 = sqrt(tmp229);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* bus_4022.UPu variable */) = tmp231;
  threadData->lastEquationSolved = 14264;
}
/*
equation index: 14265
type: SIMPLE_ASSIGN
bus_4022.U = bus_4022.UPu * bus_4022.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* bus_4022.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* bus_4022.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* bus_4022.UNom PARAM */));
  threadData->lastEquationSolved = 14265;
}
/*
equation index: 14266
type: SIMPLE_ASSIGN
trafo_22_1022.Q2Pu = line_1021_1022b.terminal2.V.im * trafo_22_1022.terminal2.i.re - line_1021_1022b.terminal2.V.re * trafo_22_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3107]] /* trafo_22_1022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14266;
}
/*
equation index: 14267
type: SIMPLE_ASSIGN
trafo_22_1022.P2Pu = line_1021_1022b.terminal2.V.re * trafo_22_1022.terminal2.i.re + line_1021_1022b.terminal2.V.im * trafo_22_1022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3105]] /* trafo_22_1022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14267;
}
/*
equation index: 14268
type: SIMPLE_ASSIGN
trafo_22_1022.Q1Pu = load_22.terminal.V.im * trafo_22_1022.terminal1.i.re - load_22.terminal.V.re * trafo_22_1022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3106]] /* trafo_22_1022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14268;
}
/*
equation index: 14269
type: SIMPLE_ASSIGN
trafo_22_1022.P1Pu = load_22.terminal.V.re * trafo_22_1022.terminal1.i.re + load_22.terminal.V.im * trafo_22_1022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3104]] /* trafo_22_1022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14269;
}
/*
equation index: 14270
type: SIMPLE_ASSIGN
bus_B22.UPhase = Modelica.Math.atan3(load_22.terminal.V.im, load_22.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* bus_B22.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14270;
}
/*
equation index: 14271
type: SIMPLE_ASSIGN
bus_B22.UPu = if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14271};
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_boolean tmp235;
  modelica_real tmp236;
  tmp235 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
  if(tmp235)
  {
    tmp236 = 0.0;
  }
  else
  {
    tmp232 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
    tmp233 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
    tmp234 = (tmp232 * tmp232) + (tmp233 * tmp233);
    if(tmp234 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, 0.5);
    }
    tmp236 = sqrt(tmp234);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* bus_B22.UPu variable */) = tmp236;
  threadData->lastEquationSolved = 14271;
}
/*
equation index: 14272
type: SIMPLE_ASSIGN
bus_B22.U = bus_B22.UPu * bus_B22.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* bus_B22.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* bus_B22.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* bus_B22.UNom PARAM */));
  threadData->lastEquationSolved = 14272;
}
/*
equation index: 14273
type: SIMPLE_ASSIGN
bus_1022.UPu = shunt_1022.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* bus_1022.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */);
  threadData->lastEquationSolved = 14273;
}
/*
equation index: 14274
type: SIMPLE_ASSIGN
bus_1022.U = bus_1022.UPu * bus_1022.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* bus_1022.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* bus_1022.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* bus_1022.UNom PARAM */));
  threadData->lastEquationSolved = 14274;
}
/*
equation index: 14275
type: SIMPLE_ASSIGN
line_1021_1022b.Q2Pu = line_1021_1022b.terminal2.V.im * line_1021_1022b.terminal2.i.re - line_1021_1022b.terminal2.V.re * line_1021_1022b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2359]] /* line_1021_1022b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14275;
}
/*
equation index: 14276
type: SIMPLE_ASSIGN
line_1021_1022b.P2Pu = line_1021_1022b.terminal2.V.re * line_1021_1022b.terminal2.i.re + line_1021_1022b.terminal2.V.im * line_1021_1022b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2357]] /* line_1021_1022b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14276;
}
/*
equation index: 14277
type: SIMPLE_ASSIGN
bus_1021.UPhase = Modelica.Math.atan3(line_1021_1022b.terminal1.V.im, line_1021_1022b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* bus_1021.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14277;
}
/*
equation index: 14278
type: SIMPLE_ASSIGN
trafo_g4_1021.Q2Pu = line_1021_1022b.terminal1.V.im * trafo_g4_1021.terminal2.i.re - line_1021_1022b.terminal1.V.re * trafo_g4_1021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3401]] /* trafo_g4_1021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14278;
}
/*
equation index: 14279
type: SIMPLE_ASSIGN
trafo_g4_1021.P2Pu = line_1021_1022b.terminal1.V.re * trafo_g4_1021.terminal2.i.re + line_1021_1022b.terminal1.V.im * trafo_g4_1021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3399]] /* trafo_g4_1021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14279;
}
/*
equation index: 14280
type: SIMPLE_ASSIGN
bus_BG04.UPhase = Modelica.Math.atan3(g04.terminal.V.im, g04.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* bus_BG04.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14280;
}
/*
equation index: 14281
type: SIMPLE_ASSIGN
trafo_g4_1021.Q1Pu = g04.terminal.V.re * g04.terminal.i.im - g04.terminal.V.im * g04.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3400]] /* trafo_g4_1021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14281;
}
/*
equation index: 14282
type: SIMPLE_ASSIGN
trafo_g4_1021.P1Pu = (-g04.terminal.V.re) * g04.terminal.i.re - g04.terminal.V.im * g04.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3398]] /* trafo_g4_1021.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14282;
}
/*
equation index: 14283
type: SIMPLE_ASSIGN
line_1021_1022b.Q1Pu = line_1021_1022b.terminal1.V.im * line_1021_1022b.terminal1.i.re - line_1021_1022b.terminal1.V.re * line_1021_1022b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2358]] /* line_1021_1022b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14283;
}
/*
equation index: 14284
type: SIMPLE_ASSIGN
line_1021_1022b.P1Pu = line_1021_1022b.terminal1.V.re * line_1021_1022b.terminal1.i.re + line_1021_1022b.terminal1.V.im * line_1021_1022b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2356]] /* line_1021_1022b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14284;
}
/*
equation index: 14285
type: SIMPLE_ASSIGN
line_1021_1022a.Q1Pu = line_1021_1022b.terminal1.V.im * line_1021_1022a.terminal1.i.re - line_1021_1022b.terminal1.V.re * line_1021_1022a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2350]] /* line_1021_1022a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14285;
}
/*
equation index: 14286
type: SIMPLE_ASSIGN
line_1021_1022a.P1Pu = line_1021_1022b.terminal1.V.re * line_1021_1022a.terminal1.i.re + line_1021_1022b.terminal1.V.im * line_1021_1022a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* line_1021_1022a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14286;
}
/*
equation index: 14287
type: SIMPLE_ASSIGN
line_1021_1022a.Q2Pu = line_1021_1022b.terminal2.V.im * line_1021_1022a.terminal2.i.re - line_1021_1022b.terminal2.V.re * line_1021_1022a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2351]] /* line_1021_1022a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14287;
}
/*
equation index: 14288
type: SIMPLE_ASSIGN
line_1021_1022a.P2Pu = line_1021_1022b.terminal2.V.re * line_1021_1022a.terminal2.i.re + line_1021_1022b.terminal2.V.im * line_1021_1022a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* line_1021_1022a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14288;
}
/*
equation index: 14289
type: SIMPLE_ASSIGN
bus_1021.UPu = if line_1021_1022b.terminal1.V.re == 0.0 and line_1021_1022b.terminal1.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal1.V.re ^ 2.0 + line_1021_1022b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14289};
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_real tmp241;
  tmp240 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0));
  if(tmp240)
  {
    tmp241 = 0.0;
  }
  else
  {
    tmp237 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */);
    tmp238 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */);
    tmp239 = (tmp237 * tmp237) + (tmp238 * tmp238);
    if(tmp239 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp239, 0.5);
    }
    tmp241 = sqrt(tmp239);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* bus_1021.UPu variable */) = tmp241;
  threadData->lastEquationSolved = 14289;
}
/*
equation index: 14290
type: SIMPLE_ASSIGN
bus_1021.U = bus_1021.UPu * bus_1021.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* bus_1021.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* bus_1021.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* bus_1021.UNom PARAM */));
  threadData->lastEquationSolved = 14290;
}
/*
equation index: 14291
type: SIMPLE_ASSIGN
bus_BG04.UPu = if g04.terminal.V.re == 0.0 and g04.terminal.V.im == 0.0 then 0.0 else (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14291};
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_boolean tmp245;
  modelica_real tmp246;
  tmp245 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0));
  if(tmp245)
  {
    tmp246 = 0.0;
  }
  else
  {
    tmp242 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
    tmp243 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
    tmp244 = (tmp242 * tmp242) + (tmp243 * tmp243);
    if(tmp244 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp244, 0.5);
    }
    tmp246 = sqrt(tmp244);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* bus_BG04.UPu variable */) = tmp246;
  threadData->lastEquationSolved = 14291;
}
/*
equation index: 14292
type: SIMPLE_ASSIGN
bus_BG04.U = bus_BG04.UPu * bus_BG04.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* bus_BG04.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* bus_BG04.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* bus_BG04.UNom PARAM */));
  threadData->lastEquationSolved = 14292;
}
/*
equation index: 14293
type: SIMPLE_ASSIGN
trafo_2031_4031.Q2Pu = line_4031_4041b.terminal1.V.im * trafo_2031_4031.terminal2.i.re - line_4031_4041b.terminal1.V.re * trafo_2031_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3097]] /* trafo_2031_4031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14293;
}
/*
equation index: 14294
type: SIMPLE_ASSIGN
trafo_2031_4031.P2Pu = line_4031_4041b.terminal1.V.re * trafo_2031_4031.terminal2.i.re + line_4031_4041b.terminal1.V.im * trafo_2031_4031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3095]] /* trafo_2031_4031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14294;
}
/*
equation index: 14295
type: SIMPLE_ASSIGN
trafo_2031_4031.Q1Pu = line_2031_2032b.terminal1.V.im * trafo_2031_4031.terminal1.i.re - line_2031_2032b.terminal1.V.re * trafo_2031_4031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3096]] /* trafo_2031_4031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14295;
}
/*
equation index: 14296
type: SIMPLE_ASSIGN
trafo_2031_4031.P1Pu = line_2031_2032b.terminal1.V.re * trafo_2031_4031.terminal1.i.re + line_2031_2032b.terminal1.V.im * trafo_2031_4031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3094]] /* trafo_2031_4031.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14296;
}
/*
equation index: 14297
type: SIMPLE_ASSIGN
line_2031_2032b.Q1Pu = line_2031_2032b.terminal1.V.im * line_2031_2032b.terminal1.i.re - line_2031_2032b.terminal1.V.re * line_2031_2032b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2460]] /* line_2031_2032b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14297;
}
/*
equation index: 14298
type: SIMPLE_ASSIGN
line_2031_2032b.P1Pu = line_2031_2032b.terminal1.V.re * line_2031_2032b.terminal1.i.re + line_2031_2032b.terminal1.V.im * line_2031_2032b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2458]] /* line_2031_2032b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14298;
}
/*
equation index: 14299
type: SIMPLE_ASSIGN
line_2031_2032b.Q2Pu = line_2031_2032b.terminal2.V.im * line_2031_2032b.terminal2.i.re - line_2031_2032b.terminal2.V.re * line_2031_2032b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2461]] /* line_2031_2032b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14299;
}
/*
equation index: 14300
type: SIMPLE_ASSIGN
line_2031_2032b.P2Pu = line_2031_2032b.terminal2.V.re * line_2031_2032b.terminal2.i.re + line_2031_2032b.terminal2.V.im * line_2031_2032b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2459]] /* line_2031_2032b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14300;
}
/*
equation index: 14301
type: SIMPLE_ASSIGN
bus_2031.UPhase = Modelica.Math.atan3(line_2031_2032b.terminal1.V.im, line_2031_2032b.terminal1.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* bus_2031.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14301;
}
/*
equation index: 14302
type: SIMPLE_ASSIGN
trafo_31_2031.Q2Pu = line_2031_2032b.terminal1.V.im * trafo_31_2031.terminal2.i.re - line_2031_2032b.terminal1.V.re * trafo_31_2031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3127]] /* trafo_31_2031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14302;
}
/*
equation index: 14303
type: SIMPLE_ASSIGN
trafo_31_2031.P2Pu = line_2031_2032b.terminal1.V.re * trafo_31_2031.terminal2.i.re + line_2031_2032b.terminal1.V.im * trafo_31_2031.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3125]] /* trafo_31_2031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14303;
}
/*
equation index: 14304
type: SIMPLE_ASSIGN
bus_B31.UPhase = Modelica.Math.atan3(load_31.terminal.V.im, load_31.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* bus_B31.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14304;
}
/*
equation index: 14305
type: SIMPLE_ASSIGN
trafo_31_2031.Q1Pu = load_31.terminal.V.im * trafo_31_2031.terminal1.i.re - load_31.terminal.V.re * trafo_31_2031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3126]] /* trafo_31_2031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14305;
}
/*
equation index: 14306
type: SIMPLE_ASSIGN
trafo_31_2031.P1Pu = load_31.terminal.V.re * trafo_31_2031.terminal1.i.re + load_31.terminal.V.im * trafo_31_2031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3124]] /* trafo_31_2031.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14306;
}
/*
equation index: 14307
type: SIMPLE_ASSIGN
bus_B31.UPu = if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14307};
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_boolean tmp250;
  modelica_real tmp251;
  tmp250 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
  if(tmp250)
  {
    tmp251 = 0.0;
  }
  else
  {
    tmp247 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
    tmp248 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
    tmp249 = (tmp247 * tmp247) + (tmp248 * tmp248);
    if(tmp249 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp249, 0.5);
    }
    tmp251 = sqrt(tmp249);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* bus_B31.UPu variable */) = tmp251;
  threadData->lastEquationSolved = 14307;
}
/*
equation index: 14308
type: SIMPLE_ASSIGN
bus_B31.U = bus_B31.UPu * bus_B31.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* bus_B31.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* bus_B31.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* bus_B31.UNom PARAM */));
  threadData->lastEquationSolved = 14308;
}
/*
equation index: 14309
type: SIMPLE_ASSIGN
line_2031_2032a.Q1Pu = line_2031_2032b.terminal1.V.im * line_2031_2032a.terminal1.i.re - line_2031_2032b.terminal1.V.re * line_2031_2032a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2452]] /* line_2031_2032a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14309;
}
/*
equation index: 14310
type: SIMPLE_ASSIGN
line_2031_2032a.P1Pu = line_2031_2032b.terminal1.V.re * line_2031_2032a.terminal1.i.re + line_2031_2032b.terminal1.V.im * line_2031_2032a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2450]] /* line_2031_2032a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14310;
}
/*
equation index: 14311
type: SIMPLE_ASSIGN
trafo_32_2032.Q2Pu = line_2031_2032b.terminal2.V.im * trafo_32_2032.terminal2.i.re - line_2031_2032b.terminal2.V.re * trafo_32_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3137]] /* trafo_32_2032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14311;
}
/*
equation index: 14312
type: SIMPLE_ASSIGN
trafo_32_2032.P2Pu = line_2031_2032b.terminal2.V.re * trafo_32_2032.terminal2.i.re + line_2031_2032b.terminal2.V.im * trafo_32_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3135]] /* trafo_32_2032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14312;
}
/*
equation index: 14313
type: SIMPLE_ASSIGN
bus_2032.UPhase = Modelica.Math.atan3(line_2031_2032b.terminal2.V.im, line_2031_2032b.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* bus_2032.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14313;
}
/*
equation index: 14314
type: SIMPLE_ASSIGN
trafo_g8_2032.Q2Pu = line_2031_2032b.terminal2.V.im * trafo_g8_2032.terminal2.i.re - line_2031_2032b.terminal2.V.re * trafo_g8_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3433]] /* trafo_g8_2032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14314;
}
/*
equation index: 14315
type: SIMPLE_ASSIGN
trafo_g8_2032.P2Pu = line_2031_2032b.terminal2.V.re * trafo_g8_2032.terminal2.i.re + line_2031_2032b.terminal2.V.im * trafo_g8_2032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3431]] /* trafo_g8_2032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14315;
}
/*
equation index: 14316
type: SIMPLE_ASSIGN
bus_BG08.UPhase = Modelica.Math.atan3(g08.terminal.V.im, g08.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* bus_BG08.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14316;
}
/*
equation index: 14317
type: SIMPLE_ASSIGN
trafo_g8_2032.Q1Pu = g08.terminal.V.re * g08.terminal.i.im - g08.terminal.V.im * g08.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3432]] /* trafo_g8_2032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14317;
}
/*
equation index: 14318
type: SIMPLE_ASSIGN
trafo_g8_2032.P1Pu = (-g08.terminal.V.re) * g08.terminal.i.re - g08.terminal.V.im * g08.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3430]] /* trafo_g8_2032.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14318;
}
/*
equation index: 14319
type: SIMPLE_ASSIGN
bus_B32.UPhase = Modelica.Math.atan3(load_32.terminal.V.im, load_32.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bus_B32.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14319;
}
/*
equation index: 14320
type: SIMPLE_ASSIGN
trafo_32_2032.Q1Pu = load_32.terminal.V.im * trafo_32_2032.terminal1.i.re - load_32.terminal.V.re * trafo_32_2032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3136]] /* trafo_32_2032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14320;
}
/*
equation index: 14321
type: SIMPLE_ASSIGN
trafo_32_2032.P1Pu = load_32.terminal.V.re * trafo_32_2032.terminal1.i.re + load_32.terminal.V.im * trafo_32_2032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3134]] /* trafo_32_2032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14321;
}
/*
equation index: 14322
type: SIMPLE_ASSIGN
bus_B32.UPu = if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14322};
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_boolean tmp255;
  modelica_real tmp256;
  tmp255 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
  if(tmp255)
  {
    tmp256 = 0.0;
  }
  else
  {
    tmp252 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
    tmp253 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
    tmp254 = (tmp252 * tmp252) + (tmp253 * tmp253);
    if(tmp254 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp254, 0.5);
    }
    tmp256 = sqrt(tmp254);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bus_B32.UPu variable */) = tmp256;
  threadData->lastEquationSolved = 14322;
}
/*
equation index: 14323
type: SIMPLE_ASSIGN
bus_B32.U = bus_B32.UPu * bus_B32.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bus_B32.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bus_B32.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* bus_B32.UNom PARAM */));
  threadData->lastEquationSolved = 14323;
}
/*
equation index: 14324
type: SIMPLE_ASSIGN
line_2031_2032a.Q2Pu = line_2031_2032b.terminal2.V.im * line_2031_2032a.terminal2.i.re - line_2031_2032b.terminal2.V.re * line_2031_2032a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2453]] /* line_2031_2032a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14324;
}
/*
equation index: 14325
type: SIMPLE_ASSIGN
line_2031_2032a.P2Pu = line_2031_2032b.terminal2.V.re * line_2031_2032a.terminal2.i.re + line_2031_2032b.terminal2.V.im * line_2031_2032a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2451]] /* line_2031_2032a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14325;
}
/*
equation index: 14326
type: SIMPLE_ASSIGN
bus_2032.UPu = if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14326};
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_boolean tmp260;
  modelica_real tmp261;
  tmp260 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
  if(tmp260)
  {
    tmp261 = 0.0;
  }
  else
  {
    tmp257 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
    tmp258 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
    tmp259 = (tmp257 * tmp257) + (tmp258 * tmp258);
    if(tmp259 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp259, 0.5);
    }
    tmp261 = sqrt(tmp259);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* bus_2032.UPu variable */) = tmp261;
  threadData->lastEquationSolved = 14326;
}
/*
equation index: 14327
type: SIMPLE_ASSIGN
bus_2032.U = bus_2032.UPu * bus_2032.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* bus_2032.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* bus_2032.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* bus_2032.UNom PARAM */));
  threadData->lastEquationSolved = 14327;
}
/*
equation index: 14328
type: SIMPLE_ASSIGN
bus_BG08.UPu = if g08.terminal.V.re == 0.0 and g08.terminal.V.im == 0.0 then 0.0 else (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14328};
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_boolean tmp265;
  modelica_real tmp266;
  tmp265 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0));
  if(tmp265)
  {
    tmp266 = 0.0;
  }
  else
  {
    tmp262 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
    tmp263 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
    tmp264 = (tmp262 * tmp262) + (tmp263 * tmp263);
    if(tmp264 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, 0.5);
    }
    tmp266 = sqrt(tmp264);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* bus_BG08.UPu variable */) = tmp266;
  threadData->lastEquationSolved = 14328;
}
/*
equation index: 14329
type: SIMPLE_ASSIGN
bus_BG08.U = bus_BG08.UPu * bus_BG08.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* bus_BG08.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* bus_BG08.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* bus_BG08.UNom PARAM */));
  threadData->lastEquationSolved = 14329;
}
/*
equation index: 14330
type: SIMPLE_ASSIGN
bus_2031.UPu = if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14330};
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  tmp270 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
  if(tmp270)
  {
    tmp271 = 0.0;
  }
  else
  {
    tmp267 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
    tmp268 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
    tmp269 = (tmp267 * tmp267) + (tmp268 * tmp268);
    if(tmp269 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, 0.5);
    }
    tmp271 = sqrt(tmp269);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* bus_2031.UPu variable */) = tmp271;
  threadData->lastEquationSolved = 14330;
}
/*
equation index: 14331
type: SIMPLE_ASSIGN
bus_2031.U = bus_2031.UPu * bus_2031.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* bus_2031.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* bus_2031.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* bus_2031.UNom PARAM */));
  threadData->lastEquationSolved = 14331;
}
/*
equation index: 14332
type: SIMPLE_ASSIGN
bus_4031.UPu = if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14332};
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_boolean tmp275;
  modelica_real tmp276;
  tmp275 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
  if(tmp275)
  {
    tmp276 = 0.0;
  }
  else
  {
    tmp272 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
    tmp273 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
    tmp274 = (tmp272 * tmp272) + (tmp273 * tmp273);
    if(tmp274 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp274, 0.5);
    }
    tmp276 = sqrt(tmp274);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bus_4031.UPu variable */) = tmp276;
  threadData->lastEquationSolved = 14332;
}
/*
equation index: 14333
type: SIMPLE_ASSIGN
bus_4031.U = bus_4031.UPu * bus_4031.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bus_4031.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bus_4031.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* bus_4031.UNom PARAM */));
  threadData->lastEquationSolved = 14333;
}
/*
equation index: 14334
type: SIMPLE_ASSIGN
bus_BG12.UPu = if g12.terminal.V.re == 0.0 and g12.terminal.V.im == 0.0 then 0.0 else (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14334};
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_boolean tmp280;
  modelica_real tmp281;
  tmp280 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0));
  if(tmp280)
  {
    tmp281 = 0.0;
  }
  else
  {
    tmp277 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
    tmp278 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
    tmp279 = (tmp277 * tmp277) + (tmp278 * tmp278);
    if(tmp279 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp279, 0.5);
    }
    tmp281 = sqrt(tmp279);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* bus_BG12.UPu variable */) = tmp281;
  threadData->lastEquationSolved = 14334;
}
/*
equation index: 14335
type: SIMPLE_ASSIGN
bus_BG12.U = bus_BG12.UPu * bus_BG12.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* bus_BG12.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* bus_BG12.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* bus_BG12.UNom PARAM */));
  threadData->lastEquationSolved = 14335;
}
/*
equation index: 14336
type: SIMPLE_ASSIGN
line_4061_4062.Q1Pu = line_4061_4062.terminal1.V.im * line_4061_4062.terminal1.i.re - line_4061_4062.terminal1.V.re * line_4061_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2724]] /* line_4061_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14336;
}
/*
equation index: 14337
type: SIMPLE_ASSIGN
line_4061_4062.P1Pu = line_4061_4062.terminal1.V.re * line_4061_4062.terminal1.i.re + line_4061_4062.terminal1.V.im * line_4061_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2722]] /* line_4061_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14337;
}
/*
equation index: 14338
type: SIMPLE_ASSIGN
bus_4061.UPu = if line_4061_4062.terminal1.V.re == 0.0 and line_4061_4062.terminal1.V.im == 0.0 then 0.0 else (line_4061_4062.terminal1.V.re ^ 2.0 + line_4061_4062.terminal1.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14338};
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_boolean tmp285;
  modelica_real tmp286;
  tmp285 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0));
  if(tmp285)
  {
    tmp286 = 0.0;
  }
  else
  {
    tmp282 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */);
    tmp283 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */);
    tmp284 = (tmp282 * tmp282) + (tmp283 * tmp283);
    if(tmp284 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp284, 0.5);
    }
    tmp286 = sqrt(tmp284);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* bus_4061.UPu variable */) = tmp286;
  threadData->lastEquationSolved = 14338;
}
/*
equation index: 14339
type: SIMPLE_ASSIGN
bus_4061.U = bus_4061.UPu * bus_4061.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* bus_4061.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* bus_4061.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* bus_4061.UNom PARAM */));
  threadData->lastEquationSolved = 14339;
}
/*
equation index: 14340
type: SIMPLE_ASSIGN
bus_B61.UPu = if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14340};
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_boolean tmp290;
  modelica_real tmp291;
  tmp290 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
  if(tmp290)
  {
    tmp291 = 0.0;
  }
  else
  {
    tmp287 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
    tmp288 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
    tmp289 = (tmp287 * tmp287) + (tmp288 * tmp288);
    if(tmp289 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp289, 0.5);
    }
    tmp291 = sqrt(tmp289);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bus_B61.UPu variable */) = tmp291;
  threadData->lastEquationSolved = 14340;
}
/*
equation index: 14341
type: SIMPLE_ASSIGN
bus_B61.U = bus_B61.UPu * bus_B61.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* bus_B61.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bus_B61.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* bus_B61.UNom PARAM */));
  threadData->lastEquationSolved = 14341;
}
/*
equation index: 14342
type: SIMPLE_ASSIGN
trafo_62_4062.Q2Pu = line_4062_4063b.terminal1.V.im * trafo_62_4062.terminal2.i.re - line_4062_4063b.terminal1.V.re * trafo_62_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3247]] /* trafo_62_4062.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14342;
}
/*
equation index: 14343
type: SIMPLE_ASSIGN
trafo_62_4062.P2Pu = line_4062_4063b.terminal1.V.re * trafo_62_4062.terminal2.i.re + line_4062_4063b.terminal1.V.im * trafo_62_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* trafo_62_4062.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14343;
}
/*
equation index: 14344
type: SIMPLE_ASSIGN
trafo_62_4062.Q1Pu = load_62.terminal.V.im * trafo_62_4062.terminal1.i.re - load_62.terminal.V.re * trafo_62_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3246]] /* trafo_62_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14344;
}
/*
equation index: 14345
type: SIMPLE_ASSIGN
trafo_62_4062.P1Pu = load_62.terminal.V.re * trafo_62_4062.terminal1.i.re + load_62.terminal.V.im * trafo_62_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* trafo_62_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14345;
}
/*
equation index: 14346
type: SIMPLE_ASSIGN
bus_B62.UPhase = Modelica.Math.atan3(load_62.terminal.V.im, load_62.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bus_B62.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14346;
}
/*
equation index: 14347
type: SIMPLE_ASSIGN
bus_B62.UPu = if load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0 then 0.0 else (load_62.terminal.V.re ^ 2.0 + load_62.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14347};
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  modelica_real tmp296;
  tmp295 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0));
  if(tmp295)
  {
    tmp296 = 0.0;
  }
  else
  {
    tmp292 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
    tmp293 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
    tmp294 = (tmp292 * tmp292) + (tmp293 * tmp293);
    if(tmp294 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp294, 0.5);
    }
    tmp296 = sqrt(tmp294);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bus_B62.UPu variable */) = tmp296;
  threadData->lastEquationSolved = 14347;
}
/*
equation index: 14348
type: SIMPLE_ASSIGN
bus_B62.U = bus_B62.UPu * bus_B62.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bus_B62.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bus_B62.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* bus_B62.UNom PARAM */));
  threadData->lastEquationSolved = 14348;
}
/*
equation index: 14349
type: SIMPLE_ASSIGN
line_4062_4063b.Q1Pu = line_4062_4063b.terminal1.V.im * line_4062_4063b.terminal1.i.re - line_4062_4063b.terminal1.V.re * line_4062_4063b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2742]] /* line_4062_4063b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14349;
}
/*
equation index: 14350
type: SIMPLE_ASSIGN
line_4062_4063b.P1Pu = line_4062_4063b.terminal1.V.re * line_4062_4063b.terminal1.i.re + line_4062_4063b.terminal1.V.im * line_4062_4063b.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* line_4062_4063b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14350;
}
/*
equation index: 14351
type: SIMPLE_ASSIGN
line_4062_4063b.Q2Pu = line_4062_4063b.terminal2.V.im * line_4062_4063b.terminal2.i.re - line_4062_4063b.terminal2.V.re * line_4062_4063b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2743]] /* line_4062_4063b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14351;
}
/*
equation index: 14352
type: SIMPLE_ASSIGN
line_4062_4063b.P2Pu = line_4062_4063b.terminal2.V.re * line_4062_4063b.terminal2.i.re + line_4062_4063b.terminal2.V.im * line_4062_4063b.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2741]] /* line_4062_4063b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14352;
}
/*
equation index: 14353
type: SIMPLE_ASSIGN
trafo_63_4063.Q2Pu = line_4062_4063b.terminal2.V.im * trafo_63_4063.terminal2.i.re - line_4062_4063b.terminal2.V.re * trafo_63_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3257]] /* trafo_63_4063.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14353;
}
/*
equation index: 14354
type: SIMPLE_ASSIGN
trafo_63_4063.P2Pu = line_4062_4063b.terminal2.V.re * trafo_63_4063.terminal2.i.re + line_4062_4063b.terminal2.V.im * trafo_63_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3255]] /* trafo_63_4063.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14354;
}
/*
equation index: 14355
type: SIMPLE_ASSIGN
trafo_63_4063.Q1Pu = load_63.terminal.V.im * trafo_63_4063.terminal1.i.re - load_63.terminal.V.re * trafo_63_4063.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3256]] /* trafo_63_4063.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14355;
}
/*
equation index: 14356
type: SIMPLE_ASSIGN
trafo_63_4063.P1Pu = load_63.terminal.V.re * trafo_63_4063.terminal1.i.re + load_63.terminal.V.im * trafo_63_4063.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3254]] /* trafo_63_4063.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14356;
}
/*
equation index: 14357
type: SIMPLE_ASSIGN
bus_B63.UPhase = Modelica.Math.atan3(load_63.terminal.V.im, load_63.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bus_B63.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14357;
}
/*
equation index: 14358
type: SIMPLE_ASSIGN
bus_4063.UPhase = Modelica.Math.atan3(line_4062_4063b.terminal2.V.im, line_4062_4063b.terminal2.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* bus_4063.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14358;
}
/*
equation index: 14359
type: SIMPLE_ASSIGN
trafo_g18_4063.Q2Pu = line_4062_4063b.terminal2.V.im * trafo_g18_4063.terminal2.i.re - line_4062_4063b.terminal2.V.re * trafo_g18_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3351]] /* trafo_g18_4063.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14359;
}
/*
equation index: 14360
type: SIMPLE_ASSIGN
trafo_g18_4063.P2Pu = line_4062_4063b.terminal2.V.re * trafo_g18_4063.terminal2.i.re + line_4062_4063b.terminal2.V.im * trafo_g18_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3349]] /* trafo_g18_4063.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14360;
}
/*
equation index: 14361
type: SIMPLE_ASSIGN
bus_BG18.UPhase = Modelica.Math.atan3(g18.terminal.V.im, g18.terminal.V.re, 0.0)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* bus_BG18.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 14361;
}
/*
equation index: 14362
type: SIMPLE_ASSIGN
trafo_g18_4063.Q1Pu = g18.terminal.V.re * g18.terminal.i.im - g18.terminal.V.im * g18.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3350]] /* trafo_g18_4063.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)));
  threadData->lastEquationSolved = 14362;
}
/*
equation index: 14363
type: SIMPLE_ASSIGN
trafo_g18_4063.P1Pu = (-g18.terminal.V.re) * g18.terminal.i.re - g18.terminal.V.im * g18.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3348]] /* trafo_g18_4063.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)));
  threadData->lastEquationSolved = 14363;
}
/*
equation index: 14364
type: SIMPLE_ASSIGN
bus_BG18.UPu = if g18.terminal.V.re == 0.0 and g18.terminal.V.im == 0.0 then 0.0 else (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14364};
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_boolean tmp300;
  modelica_real tmp301;
  tmp300 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0));
  if(tmp300)
  {
    tmp301 = 0.0;
  }
  else
  {
    tmp297 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
    tmp298 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
    tmp299 = (tmp297 * tmp297) + (tmp298 * tmp298);
    if(tmp299 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp299, 0.5);
    }
    tmp301 = sqrt(tmp299);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* bus_BG18.UPu variable */) = tmp301;
  threadData->lastEquationSolved = 14364;
}
/*
equation index: 14365
type: SIMPLE_ASSIGN
bus_BG18.U = bus_BG18.UPu * bus_BG18.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* bus_BG18.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* bus_BG18.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* bus_BG18.UNom PARAM */));
  threadData->lastEquationSolved = 14365;
}
/*
equation index: 14366
type: SIMPLE_ASSIGN
line_4062_4063a.Q2Pu = line_4062_4063b.terminal2.V.im * line_4062_4063a.terminal2.i.re - line_4062_4063b.terminal2.V.re * line_4062_4063a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2735]] /* line_4062_4063a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 14366;
}
/*
equation index: 14367
type: SIMPLE_ASSIGN
line_4062_4063a.P2Pu = line_4062_4063b.terminal2.V.re * line_4062_4063a.terminal2.i.re + line_4062_4063b.terminal2.V.im * line_4062_4063a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2733]] /* line_4062_4063a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 14367;
}
/*
equation index: 14368
type: SIMPLE_ASSIGN
line_4062_4063a.Q1Pu = line_4062_4063b.terminal1.V.im * line_4062_4063a.terminal1.i.re - line_4062_4063b.terminal1.V.re * line_4062_4063a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2734]] /* line_4062_4063a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14368;
}
/*
equation index: 14369
type: SIMPLE_ASSIGN
line_4062_4063a.P1Pu = line_4062_4063b.terminal1.V.re * line_4062_4063a.terminal1.i.re + line_4062_4063b.terminal1.V.im * line_4062_4063a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2732]] /* line_4062_4063a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 14369;
}
/*
equation index: 14370
type: SIMPLE_ASSIGN
bus_4063.UPu = if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14370};
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_boolean tmp305;
  modelica_real tmp306;
  tmp305 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
  if(tmp305)
  {
    tmp306 = 0.0;
  }
  else
  {
    tmp302 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
    tmp303 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
    tmp304 = (tmp302 * tmp302) + (tmp303 * tmp303);
    if(tmp304 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, 0.5);
    }
    tmp306 = sqrt(tmp304);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* bus_4063.UPu variable */) = tmp306;
  threadData->lastEquationSolved = 14370;
}
/*
equation index: 14371
type: SIMPLE_ASSIGN
bus_4063.U = bus_4063.UPu * bus_4063.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* bus_4063.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* bus_4063.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* bus_4063.UNom PARAM */));
  threadData->lastEquationSolved = 14371;
}
/*
equation index: 14372
type: SIMPLE_ASSIGN
bus_B63.UPu = if load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0 then 0.0 else (load_63.terminal.V.re ^ 2.0 + load_63.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14372};
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_real tmp309;
  modelica_boolean tmp310;
  modelica_real tmp311;
  tmp310 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0));
  if(tmp310)
  {
    tmp311 = 0.0;
  }
  else
  {
    tmp307 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
    tmp308 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
    tmp309 = (tmp307 * tmp307) + (tmp308 * tmp308);
    if(tmp309 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp309, 0.5);
    }
    tmp311 = sqrt(tmp309);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bus_B63.UPu variable */) = tmp311;
  threadData->lastEquationSolved = 14372;
}
/*
equation index: 14373
type: SIMPLE_ASSIGN
bus_B63.U = bus_B63.UPu * bus_B63.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bus_B63.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bus_B63.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* bus_B63.UNom PARAM */));
  threadData->lastEquationSolved = 14373;
}
/*
equation index: 14374
type: SIMPLE_ASSIGN
bus_BG17.UPu = if g17.terminal.V.re == 0.0 and g17.terminal.V.im == 0.0 then 0.0 else (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14374};
  modelica_real tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_boolean tmp315;
  modelica_real tmp316;
  tmp315 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0));
  if(tmp315)
  {
    tmp316 = 0.0;
  }
  else
  {
    tmp312 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
    tmp313 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
    tmp314 = (tmp312 * tmp312) + (tmp313 * tmp313);
    if(tmp314 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp314, 0.5);
    }
    tmp316 = sqrt(tmp314);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* bus_BG17.UPu variable */) = tmp316;
  threadData->lastEquationSolved = 14374;
}
/*
equation index: 14375
type: SIMPLE_ASSIGN
bus_BG17.U = bus_BG17.UPu * bus_BG17.UNom
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* bus_BG17.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* bus_BG17.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* bus_BG17.UNom PARAM */));
  threadData->lastEquationSolved = 14375;
}
/*
equation index: 14376
type: SIMPLE_ASSIGN
$DAEres1196 = trafo_1_1041.terminal2.i.re + shunt_1041.terminal.i.re + line_1041_1045b.terminal1.i.re + line_1041_1045a.terminal1.i.re + line_1041_1043b.terminal1.i.re + line_1041_1043a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14376};
  (data->simulationInfo->daeModeData->residualVars[1196]) /* $DAEres1196 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14376;
}
/*
equation index: 14377
type: SIMPLE_ASSIGN
$DAEres1191 = (-load_01.terminal.V.re) * trafo_1_1041.terminal1.i.re - load_01.PPu - load_01.terminal.V.im * trafo_1_1041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14377};
  (data->simulationInfo->daeModeData->residualVars[1191]) /* $DAEres1191 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2772]] /* load_01.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14377;
}
/*
equation index: 14378
type: SIMPLE_ASSIGN
$DAEres1190 = load_01.terminal.V.re * trafo_1_1041.terminal1.i.im + (-load_01.terminal.V.im) * trafo_1_1041.terminal1.i.re - load_01.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14378};
  (data->simulationInfo->daeModeData->residualVars[1190]) /* $DAEres1190 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2773]] /* load_01.QPu variable */);
  threadData->lastEquationSolved = 14378;
}
/*
equation index: 14379
type: SIMPLE_ASSIGN
$DAEres1187 = (if line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0 then 0.0 else (line_1041_1043a.terminal1.V.re ^ 2.0 + line_1041_1043a.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_1041.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14379};
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_boolean tmp320;
  modelica_real tmp321;
  tmp320 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0));
  if(tmp320)
  {
    tmp321 = 0.0;
  }
  else
  {
    tmp317 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
    tmp318 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
    tmp319 = (tmp317 * tmp317) + (tmp318 * tmp318);
    if(tmp319 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp319, 0.5);
    }
    tmp321 = sqrt(tmp319);
  }
  (data->simulationInfo->daeModeData->residualVars[1187]) /* $DAEres1187 DAE_RESIDUAL_VAR */ = tmp321 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* shunt_1041.UPu variable */);
  threadData->lastEquationSolved = 14379;
}
/*
equation index: 14380
type: SIMPLE_ASSIGN
$DAEres1185 = line_1041_1043a.terminal1.V.im * shunt_1041.terminal.i.re + (-line_1041_1043a.terminal1.V.re) * shunt_1041.terminal.i.im - shunt_1041.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14380};
  (data->simulationInfo->daeModeData->residualVars[1185]) /* $DAEres1185 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* shunt_1041.QPu variable */);
  threadData->lastEquationSolved = 14380;
}
/*
equation index: 14381
type: SIMPLE_ASSIGN
$DAEres1183 = line_1041_1043a.terminal1.V.im * shunt_1041.terminal.i.im + line_1041_1043a.terminal1.V.re * shunt_1041.terminal.i.re - shunt_1041.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14381};
  (data->simulationInfo->daeModeData->residualVars[1183]) /* $DAEres1183 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2934]] /* shunt_1041.PPu variable */);
  threadData->lastEquationSolved = 14381;
}
/*
equation index: 14382
type: SIMPLE_ASSIGN
$DAEres1182 = trafo_1_1041.terminal2.i.im + shunt_1041.terminal.i.im + line_1041_1045b.terminal1.i.im + line_1041_1045a.terminal1.i.im + line_1041_1043b.terminal1.i.im + line_1041_1043a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14382};
  (data->simulationInfo->daeModeData->residualVars[1182]) /* $DAEres1182 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14382;
}
/*
equation index: 14383
type: SIMPLE_ASSIGN
$DAEres1174 = trafo_1045_4045b.terminal2.i.re + trafo_1045_4045a.terminal2.i.re + line_4045_4062.terminal1.i.re + line_4045_4051b.terminal1.i.re + line_4045_4051a.terminal1.i.re + line_4044_4045b.terminal2.i.re + line_4044_4045a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14383};
  (data->simulationInfo->daeModeData->residualVars[1174]) /* $DAEres1174 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14383;
}
/*
equation index: 14384
type: SIMPLE_ASSIGN
$DAEres1164 = trafo_g17_4062.terminal2.i.re + trafo_62_4062.terminal2.i.re + line_4062_4063b.terminal1.i.re + line_4062_4063a.terminal1.i.re + line_4061_4062.terminal2.i.re + line_4045_4062.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14384};
  (data->simulationInfo->daeModeData->residualVars[1164]) /* $DAEres1164 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14384;
}
/*
equation index: 14385
type: SIMPLE_ASSIGN
$DAEres1160 = (-load_61.terminal.V.re) * trafo_61_4061.terminal1.i.re - load_61.PPu - load_61.terminal.V.im * trafo_61_4061.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14385};
  (data->simulationInfo->daeModeData->residualVars[1160]) /* $DAEres1160 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2891]] /* load_61.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14385;
}
/*
equation index: 14386
type: SIMPLE_ASSIGN
$DAEres1156 = trafo_61_4061.terminal2.i.re + line_4061_4062.terminal1.i.re + line_4041_4061.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14386};
  (data->simulationInfo->daeModeData->residualVars[1156]) /* $DAEres1156 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14386;
}
/*
equation index: 14387
type: SIMPLE_ASSIGN
$DAEres1145 = trafo_g13_4041.terminal2.i.re + trafo_41_4041.terminal2.i.re + shunt_4041.terminal.i.re + line_4041_4061.terminal1.i.re + line_4041_4044.terminal1.i.re + line_4031_4041b.terminal2.i.re + line_4031_4041a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14387};
  (data->simulationInfo->daeModeData->residualVars[1145]) /* $DAEres1145 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14387;
}
/*
equation index: 14388
type: SIMPLE_ASSIGN
$DAEres1134 = trafo_g12_4031.terminal2.i.re + trafo_2031_4031.terminal2.i.re + line_4031_4041b.terminal1.i.re + line_4031_4041a.terminal1.i.re + line_4031_4032.terminal1.i.re + line_4022_4031b.terminal2.i.re + line_4022_4031a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14388};
  (data->simulationInfo->daeModeData->residualVars[1134]) /* $DAEres1134 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14388;
}
/*
equation index: 14389
type: SIMPLE_ASSIGN
$DAEres1131 = trafo_g12_4031.terminal2.i.im + trafo_2031_4031.terminal2.i.im + line_4031_4041b.terminal1.i.im + line_4031_4041a.terminal1.i.im + line_4031_4032.terminal1.i.im + line_4022_4031b.terminal2.i.im + line_4022_4031a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14389};
  (data->simulationInfo->daeModeData->residualVars[1131]) /* $DAEres1131 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14389;
}
/*
equation index: 14390
type: SIMPLE_ASSIGN
$DAEres1119 = trafo_g5_1022.terminal2.i.re + trafo_1022_4022.terminal1.i.re + trafo_22_1022.terminal2.i.re + shunt_1022.terminal.i.re + line_1021_1022b.terminal2.i.re + line_1021_1022a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14390};
  (data->simulationInfo->daeModeData->residualVars[1119]) /* $DAEres1119 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14390;
}
/*
equation index: 14391
type: SIMPLE_ASSIGN
$DAEres1116 = trafo_1022_4022.terminal2.i.im + line_4022_4031b.terminal1.i.im + line_4022_4031a.terminal1.i.im + line_4012_4022.terminal2.i.im + line_4011_4022.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14391};
  (data->simulationInfo->daeModeData->residualVars[1116]) /* $DAEres1116 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14391;
}
/*
equation index: 14392
type: SIMPLE_ASSIGN
$DAEres1111 = trafo_1022_4022.terminal2.i.re + line_4022_4031b.terminal1.i.re + line_4022_4031a.terminal1.i.re + line_4012_4022.terminal2.i.re + line_4011_4022.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14392};
  (data->simulationInfo->daeModeData->residualVars[1111]) /* $DAEres1111 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14392;
}
/*
equation index: 14393
type: SIMPLE_ASSIGN
$DAEres1098 = trafo_g10_4012.terminal2.i.re + trafo_1012_4012.terminal2.i.re + shunt_4012.terminal.i.re + line_4012_4071.terminal1.i.re + line_4012_4022.terminal1.i.re + line_4011_4012.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14393};
  (data->simulationInfo->daeModeData->residualVars[1098]) /* $DAEres1098 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14393;
}
/*
equation index: 14394
type: SIMPLE_ASSIGN
$DAEres1087 = trafo_g1_1012.terminal2.i.re + trafo_1012_4012.terminal1.i.re + trafo_12_1012.terminal2.i.re + line_1012_1014b.terminal1.i.re + line_1012_1014a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14394};
  (data->simulationInfo->daeModeData->residualVars[1087]) /* $DAEres1087 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14394;
}
/*
equation index: 14395
type: SIMPLE_ASSIGN
$DAEres1076 = trafo_g3_1014.terminal2.i.re + line_1013_1014b.terminal2.i.re + line_1013_1014a.terminal2.i.re + line_1012_1014b.terminal2.i.re + line_1012_1014a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14395};
  (data->simulationInfo->daeModeData->residualVars[1076]) /* $DAEres1076 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14395;
}
/*
equation index: 14396
type: SIMPLE_ASSIGN
$DAEres1072 = trafo_g3_1014.terminal2.i.im + line_1013_1014b.terminal2.i.im + line_1013_1014a.terminal2.i.im + line_1012_1014b.terminal2.i.im + line_1012_1014a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14396};
  (data->simulationInfo->daeModeData->residualVars[1072]) /* $DAEres1072 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14396;
}
/*
equation index: 14397
type: SIMPLE_ASSIGN
$DAEres1060 = trafo_g2_1013.terminal2.i.im + trafo_13_1013.terminal2.i.im + line_1013_1014b.terminal1.i.im + line_1013_1014a.terminal1.i.im + line_1011_1013b.terminal2.i.im + line_1011_1013a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14397};
  (data->simulationInfo->daeModeData->residualVars[1060]) /* $DAEres1060 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14397;
}
/*
equation index: 14398
type: SIMPLE_ASSIGN
$DAEres1056 = trafo_g2_1013.terminal2.i.re + trafo_13_1013.terminal2.i.re + line_1013_1014b.terminal1.i.re + line_1013_1014a.terminal1.i.re + line_1011_1013b.terminal2.i.re + line_1011_1013a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14398};
  (data->simulationInfo->daeModeData->residualVars[1056]) /* $DAEres1056 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14398;
}
/*
equation index: 14399
type: SIMPLE_ASSIGN
$DAEres1045 = trafo_g9_4011.terminal2.i.im + trafo_1011_4011.terminal2.i.im + line_4011_4071.terminal1.i.im + line_4011_4022.terminal1.i.im + line_4011_4021.terminal1.i.im + line_4011_4012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14399};
  (data->simulationInfo->daeModeData->residualVars[1045]) /* $DAEres1045 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14399;
}
/*
equation index: 14400
type: SIMPLE_ASSIGN
$DAEres1016 = trafo_g11_4021.terminal2.i.im + line_4021_4042.terminal1.i.im + line_4021_4032.terminal1.i.im + line_4011_4021.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14400};
  (data->simulationInfo->daeModeData->residualVars[1016]) /* $DAEres1016 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14400;
}
/*
equation index: 14401
type: SIMPLE_ASSIGN
$DAEres1011 = nodeFault.terminal.i.im + line_4032_4044.terminal1.i.im + line_4032_4042.terminal1.i.im + line_4031_4032.terminal2.i.im + line_4021_4032.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14401};
  (data->simulationInfo->daeModeData->residualVars[1011]) /* $DAEres1011 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14401;
}
/*
equation index: 14402
type: SIMPLE_ASSIGN
$DAEres1005 = trafo_1044_4044b.terminal2.i.re + trafo_1044_4044a.terminal2.i.re + line_4044_4045b.terminal1.i.re + line_4044_4045a.terminal1.i.re + line_4043_4044.terminal2.i.re + line_4042_4044.terminal2.i.re + line_4041_4044.terminal2.i.re + line_4032_4044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14402};
  (data->simulationInfo->daeModeData->residualVars[1005]) /* $DAEres1005 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14402;
}
/*
equation index: 14403
type: SIMPLE_ASSIGN
$DAEres1001 = trafo_1044_4044b.terminal2.i.im + trafo_1044_4044a.terminal2.i.im + line_4044_4045b.terminal1.i.im + line_4044_4045a.terminal1.i.im + line_4043_4044.terminal2.i.im + line_4042_4044.terminal2.i.im + line_4041_4044.terminal2.i.im + line_4032_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14403};
  (data->simulationInfo->daeModeData->residualVars[1001]) /* $DAEres1001 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14403;
}
/*
equation index: 14404
type: SIMPLE_ASSIGN
$DAEres996 = trafo_1044_4044b.terminal1.i.im + trafo_1044_4044a.terminal1.i.im + trafo_4_1044.terminal2.i.im + shunt_1044.terminal.i.im + line_1043_1044b.terminal2.i.im + line_1043_1044a.terminal2.i.im + line_1042_1044b.terminal2.i.im + line_1042_1044a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14404};
  (data->simulationInfo->daeModeData->residualVars[996]) /* $DAEres996 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14404;
}
/*
equation index: 14405
type: SIMPLE_ASSIGN
$DAEres989 = trafo_1044_4044b.terminal1.i.re + trafo_1044_4044a.terminal1.i.re + trafo_4_1044.terminal2.i.re + shunt_1044.terminal.i.re + line_1043_1044b.terminal2.i.re + line_1043_1044a.terminal2.i.re + line_1042_1044b.terminal2.i.re + line_1042_1044a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14405};
  (data->simulationInfo->daeModeData->residualVars[989]) /* $DAEres989 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14405;
}
/*
equation index: 14406
type: SIMPLE_ASSIGN
$DAEres979 = trafo_g6_1042.terminal2.i.re + trafo_2_1042.terminal2.i.re + line_1042_1045.terminal1.i.re + line_1042_1044b.terminal1.i.re + line_1042_1044a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14406};
  (data->simulationInfo->daeModeData->residualVars[979]) /* $DAEres979 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14406;
}
/*
equation index: 14407
type: SIMPLE_ASSIGN
$DAEres974 = trafo_1045_4045b.terminal1.i.re + trafo_1045_4045a.terminal1.i.re + trafo_5_1045.terminal2.i.re + shunt_1045.terminal.i.re + line_1042_1045.terminal2.i.re + line_1041_1045b.terminal2.i.re + line_1041_1045a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14407};
  (data->simulationInfo->daeModeData->residualVars[974]) /* $DAEres974 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14407;
}
/*
equation index: 14408
type: SIMPLE_ASSIGN
$DAEres972 = trafo_1045_4045b.terminal2.i.im + trafo_1045_4045a.terminal2.i.im + line_4045_4062.terminal1.i.im + line_4045_4051b.terminal1.i.im + line_4045_4051a.terminal1.i.im + line_4044_4045b.terminal2.i.im + line_4044_4045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14408};
  (data->simulationInfo->daeModeData->residualVars[972]) /* $DAEres972 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14408;
}
/*
equation index: 14409
type: SIMPLE_ASSIGN
$DAEres966 = trafo_g16_4051.terminal2.i.re + trafo_51_4051.terminal2.i.re + shunt_4051.terminal.i.re + line_4045_4051b.terminal2.i.re + line_4045_4051a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14409};
  (data->simulationInfo->daeModeData->residualVars[966]) /* $DAEres966 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14409;
}
/*
equation index: 14410
type: SIMPLE_ASSIGN
$DAEres935 = trafo_g16_4051.terminal2.i.im + trafo_51_4051.terminal2.i.im + shunt_4051.terminal.i.im + line_4045_4051b.terminal2.i.im + line_4045_4051a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14410};
  (data->simulationInfo->daeModeData->residualVars[935]) /* $DAEres935 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14410;
}
/*
equation index: 14411
type: SIMPLE_ASSIGN
$DAEres934 = (if line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0 then 0.0 else (line_4045_4051b.terminal2.V.re ^ 2.0 + line_4045_4051b.terminal2.V.im ^ 2.0) ^ 0.5) - shunt_4051.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14411};
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_boolean tmp325;
  modelica_real tmp326;
  tmp325 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0));
  if(tmp325)
  {
    tmp326 = 0.0;
  }
  else
  {
    tmp322 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
    tmp323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
    tmp324 = (tmp322 * tmp322) + (tmp323 * tmp323);
    if(tmp324 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp324, 0.5);
    }
    tmp326 = sqrt(tmp324);
  }
  (data->simulationInfo->daeModeData->residualVars[934]) /* $DAEres934 DAE_RESIDUAL_VAR */ = tmp326 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */);
  threadData->lastEquationSolved = 14411;
}
/*
equation index: 14412
type: SIMPLE_ASSIGN
$DAEres932 = line_4045_4051b.terminal2.V.im * shunt_4051.terminal.i.re + (-line_4045_4051b.terminal2.V.re) * shunt_4051.terminal.i.im - shunt_4051.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14412};
  (data->simulationInfo->daeModeData->residualVars[932]) /* $DAEres932 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* shunt_4051.QPu variable */);
  threadData->lastEquationSolved = 14412;
}
/*
equation index: 14413
type: SIMPLE_ASSIGN
$DAEres930 = line_4045_4051b.terminal2.V.im * shunt_4051.terminal.i.im + line_4045_4051b.terminal2.V.re * shunt_4051.terminal.i.re - shunt_4051.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14413};
  (data->simulationInfo->daeModeData->residualVars[930]) /* $DAEres930 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* shunt_4051.PPu variable */);
  threadData->lastEquationSolved = 14413;
}
/*
equation index: 14414
type: SIMPLE_ASSIGN
$DAEres924 = (-load_51.terminal.V.re) * trafo_51_4051.terminal1.i.re - load_51.PPu - load_51.terminal.V.im * trafo_51_4051.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14414};
  (data->simulationInfo->daeModeData->residualVars[924]) /* $DAEres924 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2884]] /* load_51.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14414;
}
/*
equation index: 14415
type: SIMPLE_ASSIGN
$DAEres922 = load_51.terminal.V.re * trafo_51_4051.terminal1.i.im + (-load_51.terminal.V.im) * trafo_51_4051.terminal1.i.re - load_51.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14415};
  (data->simulationInfo->daeModeData->residualVars[922]) /* $DAEres922 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* load_51.QPu variable */);
  threadData->lastEquationSolved = 14415;
}
/*
equation index: 14416
type: SIMPLE_ASSIGN
$DAEres913 = trafo_1045_4045b.terminal1.i.im + trafo_1045_4045a.terminal1.i.im + trafo_5_1045.terminal2.i.im + shunt_1045.terminal.i.im + line_1042_1045.terminal2.i.im + line_1041_1045b.terminal2.i.im + line_1041_1045a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14416};
  (data->simulationInfo->daeModeData->residualVars[913]) /* $DAEres913 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14416;
}
/*
equation index: 14417
type: SIMPLE_ASSIGN
$DAEres911 = (-load_05.terminal.V.re) * trafo_5_1045.terminal1.i.re - load_05.PPu - load_05.terminal.V.im * trafo_5_1045.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14417};
  (data->simulationInfo->daeModeData->residualVars[911]) /* $DAEres911 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2800]] /* load_05.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14417;
}
/*
equation index: 14418
type: SIMPLE_ASSIGN
$DAEres909 = load_05.terminal.V.re * trafo_5_1045.terminal1.i.im + (-load_05.terminal.V.im) * trafo_5_1045.terminal1.i.re - load_05.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14418};
  (data->simulationInfo->daeModeData->residualVars[909]) /* $DAEres909 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* load_05.QPu variable */);
  threadData->lastEquationSolved = 14418;
}
/*
equation index: 14419
type: SIMPLE_ASSIGN
$DAEres904 = (if line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0 then 0.0 else (line_1042_1045.terminal2.V.re ^ 2.0 + line_1042_1045.terminal2.V.im ^ 2.0) ^ 0.5) - shunt_1045.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14419};
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  tmp330 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0));
  if(tmp330)
  {
    tmp331 = 0.0;
  }
  else
  {
    tmp327 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
    tmp328 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
    tmp329 = (tmp327 * tmp327) + (tmp328 * tmp328);
    if(tmp329 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp329, 0.5);
    }
    tmp331 = sqrt(tmp329);
  }
  (data->simulationInfo->daeModeData->residualVars[904]) /* $DAEres904 DAE_RESIDUAL_VAR */ = tmp331 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */);
  threadData->lastEquationSolved = 14419;
}
/*
equation index: 14420
type: SIMPLE_ASSIGN
$DAEres902 = line_1042_1045.terminal2.V.im * shunt_1045.terminal.i.im + line_1042_1045.terminal2.V.re * shunt_1045.terminal.i.re - shunt_1045.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14420};
  (data->simulationInfo->daeModeData->residualVars[902]) /* $DAEres902 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2949]] /* shunt_1045.PPu variable */);
  threadData->lastEquationSolved = 14420;
}
/*
equation index: 14421
type: SIMPLE_ASSIGN
$DAEres900 = line_1042_1045.terminal2.V.im * shunt_1045.terminal.i.re + (-line_1042_1045.terminal2.V.re) * shunt_1045.terminal.i.im - shunt_1045.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14421};
  (data->simulationInfo->daeModeData->residualVars[900]) /* $DAEres900 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2950]] /* shunt_1045.QPu variable */);
  threadData->lastEquationSolved = 14421;
}
/*
equation index: 14422
type: SIMPLE_ASSIGN
$DAEres896 = trafo_g6_1042.terminal2.i.im + trafo_2_1042.terminal2.i.im + line_1042_1045.terminal1.i.im + line_1042_1044b.terminal1.i.im + line_1042_1044a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14422};
  (data->simulationInfo->daeModeData->residualVars[896]) /* $DAEres896 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14422;
}
/*
equation index: 14423
type: SIMPLE_ASSIGN
$DAEres869 = (-load_02.terminal.V.re) * trafo_2_1042.terminal1.i.re - load_02.PPu - load_02.terminal.V.im * trafo_2_1042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14423};
  (data->simulationInfo->daeModeData->residualVars[869]) /* $DAEres869 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2779]] /* load_02.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14423;
}
/*
equation index: 14424
type: SIMPLE_ASSIGN
$DAEres866 = load_02.terminal.V.re * trafo_2_1042.terminal1.i.im + (-load_02.terminal.V.im) * trafo_2_1042.terminal1.i.re - load_02.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14424};
  (data->simulationInfo->daeModeData->residualVars[866]) /* $DAEres866 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2780]] /* load_02.QPu variable */);
  threadData->lastEquationSolved = 14424;
}
/*
equation index: 14425
type: SIMPLE_ASSIGN
$DAEres858 = (-load_04.terminal.V.re) * trafo_4_1044.terminal1.i.re - load_04.PPu - load_04.terminal.V.im * trafo_4_1044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14425};
  (data->simulationInfo->daeModeData->residualVars[858]) /* $DAEres858 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2793]] /* load_04.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14425;
}
/*
equation index: 14426
type: SIMPLE_ASSIGN
$DAEres856 = load_04.terminal.V.re * trafo_4_1044.terminal1.i.im + (-load_04.terminal.V.im) * trafo_4_1044.terminal1.i.re - load_04.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14426};
  (data->simulationInfo->daeModeData->residualVars[856]) /* $DAEres856 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2794]] /* load_04.QPu variable */);
  threadData->lastEquationSolved = 14426;
}
/*
equation index: 14427
type: SIMPLE_ASSIGN
$DAEres853 = (if line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal2.V.re ^ 2.0 + line_1043_1044a.terminal2.V.im ^ 2.0) ^ 0.5) - shunt_1044.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14427};
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_boolean tmp335;
  modelica_real tmp336;
  tmp335 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0));
  if(tmp335)
  {
    tmp336 = 0.0;
  }
  else
  {
    tmp332 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
    tmp333 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
    tmp334 = (tmp332 * tmp332) + (tmp333 * tmp333);
    if(tmp334 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp334, 0.5);
    }
    tmp336 = sqrt(tmp334);
  }
  (data->simulationInfo->daeModeData->residualVars[853]) /* $DAEres853 DAE_RESIDUAL_VAR */ = tmp336 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */);
  threadData->lastEquationSolved = 14427;
}
/*
equation index: 14428
type: SIMPLE_ASSIGN
$DAEres851 = line_1043_1044a.terminal2.V.im * shunt_1044.terminal.i.im + line_1043_1044a.terminal2.V.re * shunt_1044.terminal.i.re - shunt_1044.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14428};
  (data->simulationInfo->daeModeData->residualVars[851]) /* $DAEres851 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2944]] /* shunt_1044.PPu variable */);
  threadData->lastEquationSolved = 14428;
}
/*
equation index: 14429
type: SIMPLE_ASSIGN
$DAEres849 = line_1043_1044a.terminal2.V.im * shunt_1044.terminal.i.re + (-line_1043_1044a.terminal2.V.re) * shunt_1044.terminal.i.im - shunt_1044.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14429};
  (data->simulationInfo->daeModeData->residualVars[849]) /* $DAEres849 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2945]] /* shunt_1044.QPu variable */);
  threadData->lastEquationSolved = 14429;
}
/*
equation index: 14430
type: SIMPLE_ASSIGN
$DAEres844 = trafo_g7_1043.terminal2.i.im + trafo_3_1043.terminal2.i.im + shunt_1043.terminal.i.im + line_1043_1044b.terminal1.i.im + line_1043_1044a.terminal1.i.im + line_1041_1043b.terminal2.i.im + line_1041_1043a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14430};
  (data->simulationInfo->daeModeData->residualVars[844]) /* $DAEres844 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14430;
}
/*
equation index: 14431
type: SIMPLE_ASSIGN
$DAEres813 = trafo_g7_1043.terminal2.i.re + trafo_3_1043.terminal2.i.re + shunt_1043.terminal.i.re + line_1043_1044b.terminal1.i.re + line_1043_1044a.terminal1.i.re + line_1041_1043b.terminal2.i.re + line_1041_1043a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14431};
  (data->simulationInfo->daeModeData->residualVars[813]) /* $DAEres813 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14431;
}
/*
equation index: 14432
type: SIMPLE_ASSIGN
$DAEres812 = (-load_03.terminal.V.re) * trafo_3_1043.terminal1.i.re - load_03.PPu - load_03.terminal.V.im * trafo_3_1043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14432};
  (data->simulationInfo->daeModeData->residualVars[812]) /* $DAEres812 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2786]] /* load_03.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14432;
}
/*
equation index: 14433
type: SIMPLE_ASSIGN
$DAEres810 = load_03.terminal.V.re * trafo_3_1043.terminal1.i.im + (-load_03.terminal.V.im) * trafo_3_1043.terminal1.i.re - load_03.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14433};
  (data->simulationInfo->daeModeData->residualVars[810]) /* $DAEres810 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2787]] /* load_03.QPu variable */);
  threadData->lastEquationSolved = 14433;
}
/*
equation index: 14434
type: SIMPLE_ASSIGN
$DAEres808 = (if line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0 then 0.0 else (line_1043_1044a.terminal1.V.re ^ 2.0 + line_1043_1044a.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_1043.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14434};
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_boolean tmp340;
  modelica_real tmp341;
  tmp340 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0));
  if(tmp340)
  {
    tmp341 = 0.0;
  }
  else
  {
    tmp337 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
    tmp338 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
    tmp339 = (tmp337 * tmp337) + (tmp338 * tmp338);
    if(tmp339 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, 0.5);
    }
    tmp341 = sqrt(tmp339);
  }
  (data->simulationInfo->daeModeData->residualVars[808]) /* $DAEres808 DAE_RESIDUAL_VAR */ = tmp341 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */);
  threadData->lastEquationSolved = 14434;
}
/*
equation index: 14435
type: SIMPLE_ASSIGN
$DAEres806 = line_1043_1044a.terminal1.V.im * shunt_1043.terminal.i.re + (-line_1043_1044a.terminal1.V.re) * shunt_1043.terminal.i.im - shunt_1043.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14435};
  (data->simulationInfo->daeModeData->residualVars[806]) /* $DAEres806 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2940]] /* shunt_1043.QPu variable */);
  threadData->lastEquationSolved = 14435;
}
/*
equation index: 14436
type: SIMPLE_ASSIGN
$DAEres805 = line_1043_1044a.terminal1.V.im * shunt_1043.terminal.i.im + line_1043_1044a.terminal1.V.re * shunt_1043.terminal.i.re - shunt_1043.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14436};
  (data->simulationInfo->daeModeData->residualVars[805]) /* $DAEres805 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2939]] /* shunt_1043.PPu variable */);
  threadData->lastEquationSolved = 14436;
}
/*
equation index: 14437
type: SIMPLE_ASSIGN
$DAEres789 = trafo_43_4043.terminal2.i.im + shunt_4043.terminal.i.im + line_4043_4047.terminal1.i.im + line_4043_4046.terminal1.i.im + line_4043_4044.terminal1.i.im + line_4042_4043.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14437};
  (data->simulationInfo->daeModeData->residualVars[789]) /* $DAEres789 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14437;
}
/*
equation index: 14438
type: SIMPLE_ASSIGN
$DAEres785 = (-load_43.terminal.V.re) * trafo_43_4043.terminal1.i.re - load_43.PPu - load_43.terminal.V.im * trafo_43_4043.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14438};
  (data->simulationInfo->daeModeData->residualVars[785]) /* $DAEres785 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2863]] /* load_43.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14438;
}
/*
equation index: 14439
type: SIMPLE_ASSIGN
$DAEres781 = load_43.terminal.V.re * trafo_43_4043.terminal1.i.im + (-load_43.terminal.V.im) * trafo_43_4043.terminal1.i.re - load_43.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14439};
  (data->simulationInfo->daeModeData->residualVars[781]) /* $DAEres781 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2864]] /* load_43.QPu variable */);
  threadData->lastEquationSolved = 14439;
}
/*
equation index: 14440
type: SIMPLE_ASSIGN
$DAEres778 = (if line_4043_4046.terminal1.V.re == 0.0 and line_4043_4046.terminal1.V.im == 0.0 then 0.0 else (line_4043_4046.terminal1.V.re ^ 2.0 + line_4043_4046.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_4043.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14440};
  modelica_real tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_boolean tmp345;
  modelica_real tmp346;
  tmp345 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0));
  if(tmp345)
  {
    tmp346 = 0.0;
  }
  else
  {
    tmp342 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */);
    tmp343 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */);
    tmp344 = (tmp342 * tmp342) + (tmp343 * tmp343);
    if(tmp344 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp344, 0.5);
    }
    tmp346 = sqrt(tmp344);
  }
  (data->simulationInfo->daeModeData->residualVars[778]) /* $DAEres778 DAE_RESIDUAL_VAR */ = tmp346 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */);
  threadData->lastEquationSolved = 14440;
}
/*
equation index: 14441
type: SIMPLE_ASSIGN
$DAEres776 = line_4043_4046.terminal1.V.im * shunt_4043.terminal.i.im + line_4043_4046.terminal1.V.re * shunt_4043.terminal.i.re - shunt_4043.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14441};
  (data->simulationInfo->daeModeData->residualVars[776]) /* $DAEres776 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2964]] /* shunt_4043.PPu variable */);
  threadData->lastEquationSolved = 14441;
}
/*
equation index: 14442
type: SIMPLE_ASSIGN
$DAEres774 = line_4043_4046.terminal1.V.im * shunt_4043.terminal.i.re + (-line_4043_4046.terminal1.V.re) * shunt_4043.terminal.i.im - shunt_4043.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14442};
  (data->simulationInfo->daeModeData->residualVars[774]) /* $DAEres774 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* shunt_4043.QPu variable */);
  threadData->lastEquationSolved = 14442;
}
/*
equation index: 14443
type: SIMPLE_ASSIGN
$DAEres773 = trafo_43_4043.terminal2.i.re + shunt_4043.terminal.i.re + line_4043_4047.terminal1.i.re + line_4043_4046.terminal1.i.re + line_4043_4044.terminal1.i.re + line_4042_4043.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14443};
  (data->simulationInfo->daeModeData->residualVars[773]) /* $DAEres773 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14443;
}
/*
equation index: 14444
type: SIMPLE_ASSIGN
$DAEres769 = trafo_g15_4047.terminal2.i.re + trafo_47_4047.terminal2.i.re + line_4046_4047.terminal2.i.re + line_4043_4047.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14444};
  (data->simulationInfo->daeModeData->residualVars[769]) /* $DAEres769 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14444;
}
/*
equation index: 14445
type: SIMPLE_ASSIGN
$DAEres738 = trafo_g15_4047.terminal2.i.im + trafo_47_4047.terminal2.i.im + line_4046_4047.terminal2.i.im + line_4043_4047.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14445};
  (data->simulationInfo->daeModeData->residualVars[738]) /* $DAEres738 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14445;
}
/*
equation index: 14446
type: SIMPLE_ASSIGN
$DAEres733 = trafo_46_4046.terminal2.i.im + shunt_4046.terminal.i.im + line_4046_4047.terminal1.i.im + line_4043_4046.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14446};
  (data->simulationInfo->daeModeData->residualVars[733]) /* $DAEres733 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14446;
}
/*
equation index: 14447
type: SIMPLE_ASSIGN
$DAEres729 = trafo_46_4046.terminal2.i.re + shunt_4046.terminal.i.re + line_4046_4047.terminal1.i.re + line_4043_4046.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14447};
  (data->simulationInfo->daeModeData->residualVars[729]) /* $DAEres729 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14447;
}
/*
equation index: 14448
type: SIMPLE_ASSIGN
$DAEres724 = (-load_46.terminal.V.re) * trafo_46_4046.terminal1.i.re - load_46.PPu - load_46.terminal.V.im * trafo_46_4046.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14448};
  (data->simulationInfo->daeModeData->residualVars[724]) /* $DAEres724 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2870]] /* load_46.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14448;
}
/*
equation index: 14449
type: SIMPLE_ASSIGN
$DAEres722 = load_46.terminal.V.re * trafo_46_4046.terminal1.i.im + (-load_46.terminal.V.im) * trafo_46_4046.terminal1.i.re - load_46.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14449};
  (data->simulationInfo->daeModeData->residualVars[722]) /* $DAEres722 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2871]] /* load_46.QPu variable */);
  threadData->lastEquationSolved = 14449;
}
/*
equation index: 14450
type: SIMPLE_ASSIGN
$DAEres720 = (if line_4046_4047.terminal1.V.re == 0.0 and line_4046_4047.terminal1.V.im == 0.0 then 0.0 else (line_4046_4047.terminal1.V.re ^ 2.0 + line_4046_4047.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_4046.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14450};
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_real tmp351;
  tmp350 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0));
  if(tmp350)
  {
    tmp351 = 0.0;
  }
  else
  {
    tmp347 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */);
    tmp348 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */);
    tmp349 = (tmp347 * tmp347) + (tmp348 * tmp348);
    if(tmp349 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp349, 0.5);
    }
    tmp351 = sqrt(tmp349);
  }
  (data->simulationInfo->daeModeData->residualVars[720]) /* $DAEres720 DAE_RESIDUAL_VAR */ = tmp351 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */);
  threadData->lastEquationSolved = 14450;
}
/*
equation index: 14451
type: SIMPLE_ASSIGN
$DAEres718 = line_4046_4047.terminal1.V.im * shunt_4046.terminal.i.re + (-line_4046_4047.terminal1.V.re) * shunt_4046.terminal.i.im - shunt_4046.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14451};
  (data->simulationInfo->daeModeData->residualVars[718]) /* $DAEres718 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2970]] /* shunt_4046.QPu variable */);
  threadData->lastEquationSolved = 14451;
}
/*
equation index: 14452
type: SIMPLE_ASSIGN
$DAEres716 = line_4046_4047.terminal1.V.im * shunt_4046.terminal.i.im + line_4046_4047.terminal1.V.re * shunt_4046.terminal.i.re - shunt_4046.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14452};
  (data->simulationInfo->daeModeData->residualVars[716]) /* $DAEres716 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2969]] /* shunt_4046.PPu variable */);
  threadData->lastEquationSolved = 14452;
}
/*
equation index: 14453
type: SIMPLE_ASSIGN
$DAEres713 = (-load_47.terminal.V.re) * trafo_47_4047.terminal1.i.re - load_47.PPu - load_47.terminal.V.im * trafo_47_4047.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14453};
  (data->simulationInfo->daeModeData->residualVars[713]) /* $DAEres713 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* load_47.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14453;
}
/*
equation index: 14454
type: SIMPLE_ASSIGN
$DAEres712 = load_47.terminal.V.re * trafo_47_4047.terminal1.i.im + (-load_47.terminal.V.im) * trafo_47_4047.terminal1.i.re - load_47.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14454};
  (data->simulationInfo->daeModeData->residualVars[712]) /* $DAEres712 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* load_47.QPu variable */);
  threadData->lastEquationSolved = 14454;
}
/*
equation index: 14455
type: SIMPLE_ASSIGN
$DAEres707 = trafo_g14_4042.terminal2.i.im + trafo_42_4042.terminal2.i.im + line_4042_4044.terminal1.i.im + line_4042_4043.terminal1.i.im + line_4032_4042.terminal2.i.im + line_4021_4042.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14455};
  (data->simulationInfo->daeModeData->residualVars[707]) /* $DAEres707 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14455;
}
/*
equation index: 14456
type: SIMPLE_ASSIGN
$DAEres701 = trafo_g14_4042.terminal2.i.re + trafo_42_4042.terminal2.i.re + line_4042_4044.terminal1.i.re + line_4042_4043.terminal1.i.re + line_4032_4042.terminal2.i.re + line_4021_4042.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14456};
  (data->simulationInfo->daeModeData->residualVars[701]) /* $DAEres701 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14456;
}
/*
equation index: 14457
type: SIMPLE_ASSIGN
$DAEres674 = (-load_42.terminal.V.re) * trafo_42_4042.terminal1.i.re - load_42.PPu - load_42.terminal.V.im * trafo_42_4042.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14457};
  (data->simulationInfo->daeModeData->residualVars[674]) /* $DAEres674 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2856]] /* load_42.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14457;
}
/*
equation index: 14458
type: SIMPLE_ASSIGN
$DAEres673 = load_42.terminal.V.re * trafo_42_4042.terminal1.i.im + (-load_42.terminal.V.im) * trafo_42_4042.terminal1.i.re - load_42.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14458};
  (data->simulationInfo->daeModeData->residualVars[673]) /* $DAEres673 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2857]] /* load_42.QPu variable */);
  threadData->lastEquationSolved = 14458;
}
/*
equation index: 14459
type: SIMPLE_ASSIGN
$DAEres659 = trafo_g11_4021.terminal2.i.re + line_4021_4042.terminal1.i.re + line_4021_4032.terminal1.i.re + line_4011_4021.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14459};
  (data->simulationInfo->daeModeData->residualVars[659]) /* $DAEres659 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14459;
}
/*
equation index: 14460
type: SIMPLE_ASSIGN
$DAEres656 = nodeFault.terminal.i.re + line_4032_4044.terminal1.i.re + line_4032_4042.terminal1.i.re + line_4031_4032.terminal2.i.re + line_4021_4032.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14460};
  (data->simulationInfo->daeModeData->residualVars[656]) /* $DAEres656 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14460;
}
/*
equation index: 14461
type: SIMPLE_ASSIGN
$DAEres650 = trafo_g13_4041.terminal2.i.im + trafo_41_4041.terminal2.i.im + shunt_4041.terminal.i.im + line_4041_4061.terminal1.i.im + line_4041_4044.terminal1.i.im + line_4031_4041b.terminal2.i.im + line_4031_4041a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14461};
  (data->simulationInfo->daeModeData->residualVars[650]) /* $DAEres650 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14461;
}
/*
equation index: 14462
type: SIMPLE_ASSIGN
$DAEres644 = (-load_41.terminal.V.re) * trafo_41_4041.terminal1.i.re - load_41.PPu - load_41.terminal.V.im * trafo_41_4041.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14462};
  (data->simulationInfo->daeModeData->residualVars[644]) /* $DAEres644 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2849]] /* load_41.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14462;
}
/*
equation index: 14463
type: SIMPLE_ASSIGN
$DAEres642 = load_41.terminal.V.re * trafo_41_4041.terminal1.i.im + (-load_41.terminal.V.im) * trafo_41_4041.terminal1.i.re - load_41.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14463};
  (data->simulationInfo->daeModeData->residualVars[642]) /* $DAEres642 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2850]] /* load_41.QPu variable */);
  threadData->lastEquationSolved = 14463;
}
/*
equation index: 14464
type: SIMPLE_ASSIGN
$DAEres637 = (if line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0 then 0.0 else (line_4041_4061.terminal1.V.re ^ 2.0 + line_4041_4061.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_4041.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14464};
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_boolean tmp355;
  modelica_real tmp356;
  tmp355 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0));
  if(tmp355)
  {
    tmp356 = 0.0;
  }
  else
  {
    tmp352 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
    tmp353 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
    tmp354 = (tmp352 * tmp352) + (tmp353 * tmp353);
    if(tmp354 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp354, 0.5);
    }
    tmp356 = sqrt(tmp354);
  }
  (data->simulationInfo->daeModeData->residualVars[637]) /* $DAEres637 DAE_RESIDUAL_VAR */ = tmp356 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */);
  threadData->lastEquationSolved = 14464;
}
/*
equation index: 14465
type: SIMPLE_ASSIGN
$DAEres635 = line_4041_4061.terminal1.V.im * shunt_4041.terminal.i.im + line_4041_4061.terminal1.V.re * shunt_4041.terminal.i.re - shunt_4041.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14465};
  (data->simulationInfo->daeModeData->residualVars[635]) /* $DAEres635 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* shunt_4041.PPu variable */);
  threadData->lastEquationSolved = 14465;
}
/*
equation index: 14466
type: SIMPLE_ASSIGN
$DAEres633 = line_4041_4061.terminal1.V.im * shunt_4041.terminal.i.re + (-line_4041_4061.terminal1.V.re) * shunt_4041.terminal.i.im - shunt_4041.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14466};
  (data->simulationInfo->daeModeData->residualVars[633]) /* $DAEres633 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* shunt_4041.QPu variable */);
  threadData->lastEquationSolved = 14466;
}
/*
equation index: 14467
type: SIMPLE_ASSIGN
$DAEres629 = trafo_61_4061.terminal2.i.im + line_4061_4062.terminal1.i.im + line_4041_4061.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14467};
  (data->simulationInfo->daeModeData->residualVars[629]) /* $DAEres629 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14467;
}
/*
equation index: 14468
type: SIMPLE_ASSIGN
$DAEres627 = load_61.terminal.V.re * trafo_61_4061.terminal1.i.im + (-load_61.terminal.V.im) * trafo_61_4061.terminal1.i.re - load_61.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14468};
  (data->simulationInfo->daeModeData->residualVars[627]) /* $DAEres627 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2892]] /* load_61.QPu variable */);
  threadData->lastEquationSolved = 14468;
}
/*
equation index: 14469
type: SIMPLE_ASSIGN
$DAEres620 = trafo_g9_4011.terminal2.i.re + trafo_1011_4011.terminal2.i.re + line_4011_4071.terminal1.i.re + line_4011_4022.terminal1.i.re + line_4011_4021.terminal1.i.re + line_4011_4012.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14469};
  (data->simulationInfo->daeModeData->residualVars[620]) /* $DAEres620 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14469;
}
/*
equation index: 14470
type: SIMPLE_ASSIGN
$DAEres603 = trafo_g19_4071.terminal2.i.re + trafo_71_4071.terminal2.i.re + shunt_4071.terminal.i.re + line_4071_4072b.terminal1.i.re + line_4071_4072a.terminal1.i.re + line_4012_4071.terminal2.i.re + line_4011_4071.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14470};
  (data->simulationInfo->daeModeData->residualVars[603]) /* $DAEres603 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14470;
}
/*
equation index: 14471
type: SIMPLE_ASSIGN
$DAEres600 = trafo_g19_4071.terminal2.i.im + trafo_71_4071.terminal2.i.im + shunt_4071.terminal.i.im + line_4071_4072b.terminal1.i.im + line_4071_4072a.terminal1.i.im + line_4012_4071.terminal2.i.im + line_4011_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14471};
  (data->simulationInfo->daeModeData->residualVars[600]) /* $DAEres600 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14471;
}
/*
equation index: 14472
type: SIMPLE_ASSIGN
$DAEres594 = (-load_71.terminal.V.re) * trafo_71_4071.terminal1.i.re - load_71.PPu - load_71.terminal.V.im * trafo_71_4071.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14472};
  (data->simulationInfo->daeModeData->residualVars[594]) /* $DAEres594 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2912]] /* load_71.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14472;
}
/*
equation index: 14473
type: SIMPLE_ASSIGN
$DAEres592 = load_71.terminal.V.re * trafo_71_4071.terminal1.i.im + (-load_71.terminal.V.im) * trafo_71_4071.terminal1.i.re - load_71.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14473};
  (data->simulationInfo->daeModeData->residualVars[592]) /* $DAEres592 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2913]] /* load_71.QPu variable */);
  threadData->lastEquationSolved = 14473;
}
/*
equation index: 14474
type: SIMPLE_ASSIGN
$DAEres588 = (if line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal1.V.re ^ 2.0 + line_4071_4072a.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_4071.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14474};
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  tmp360 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0));
  if(tmp360)
  {
    tmp361 = 0.0;
  }
  else
  {
    tmp357 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
    tmp358 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
    tmp359 = (tmp357 * tmp357) + (tmp358 * tmp358);
    if(tmp359 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp359, 0.5);
    }
    tmp361 = sqrt(tmp359);
  }
  (data->simulationInfo->daeModeData->residualVars[588]) /* $DAEres588 DAE_RESIDUAL_VAR */ = tmp361 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */);
  threadData->lastEquationSolved = 14474;
}
/*
equation index: 14475
type: SIMPLE_ASSIGN
$DAEres586 = line_4071_4072a.terminal1.V.im * shunt_4071.terminal.i.re + (-line_4071_4072a.terminal1.V.re) * shunt_4071.terminal.i.im - shunt_4071.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14475};
  (data->simulationInfo->daeModeData->residualVars[586]) /* $DAEres586 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2980]] /* shunt_4071.QPu variable */);
  threadData->lastEquationSolved = 14475;
}
/*
equation index: 14476
type: SIMPLE_ASSIGN
$DAEres585 = line_4071_4072a.terminal1.V.im * shunt_4071.terminal.i.im + line_4071_4072a.terminal1.V.re * shunt_4071.terminal.i.re - shunt_4071.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14476};
  (data->simulationInfo->daeModeData->residualVars[585]) /* $DAEres585 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* shunt_4071.PPu variable */);
  threadData->lastEquationSolved = 14476;
}
/*
equation index: 14477
type: SIMPLE_ASSIGN
$DAEres579 = trafo_g20_4072.terminal2.i.im + trafo_72_4072.terminal2.i.im + line_4071_4072b.terminal2.i.im + line_4071_4072a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14477};
  (data->simulationInfo->daeModeData->residualVars[579]) /* $DAEres579 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14477;
}
/*
equation index: 14478
type: SIMPLE_ASSIGN
$DAEres551 = trafo_g20_4072.terminal2.i.re + trafo_72_4072.terminal2.i.re + line_4071_4072b.terminal2.i.re + line_4071_4072a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14478};
  (data->simulationInfo->daeModeData->residualVars[551]) /* $DAEres551 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14478;
}
/*
equation index: 14479
type: SIMPLE_ASSIGN
$DAEres543 = (-load_72.terminal.V.re) * trafo_72_4072.terminal1.i.re - load_72.PPu - load_72.terminal.V.im * trafo_72_4072.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14479};
  (data->simulationInfo->daeModeData->residualVars[543]) /* $DAEres543 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* load_72.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14479;
}
/*
equation index: 14480
type: SIMPLE_ASSIGN
$DAEres542 = load_72.terminal.V.re * trafo_72_4072.terminal1.i.im + (-load_72.terminal.V.im) * trafo_72_4072.terminal1.i.re - load_72.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14480};
  (data->simulationInfo->daeModeData->residualVars[542]) /* $DAEres542 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2920]] /* load_72.QPu variable */);
  threadData->lastEquationSolved = 14480;
}
/*
equation index: 14481
type: SIMPLE_ASSIGN
$DAEres537 = trafo_g10_4012.terminal2.i.im + trafo_1012_4012.terminal2.i.im + shunt_4012.terminal.i.im + line_4012_4071.terminal1.i.im + line_4012_4022.terminal1.i.im + line_4011_4012.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14481};
  (data->simulationInfo->daeModeData->residualVars[537]) /* $DAEres537 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14481;
}
/*
equation index: 14482
type: SIMPLE_ASSIGN
$DAEres534 = (if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5) - shunt_4012.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14482};
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_boolean tmp365;
  modelica_real tmp366;
  tmp365 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0));
  if(tmp365)
  {
    tmp366 = 0.0;
  }
  else
  {
    tmp362 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
    tmp363 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
    tmp364 = (tmp362 * tmp362) + (tmp363 * tmp363);
    if(tmp364 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp364, 0.5);
    }
    tmp366 = sqrt(tmp364);
  }
  (data->simulationInfo->daeModeData->residualVars[534]) /* $DAEres534 DAE_RESIDUAL_VAR */ = tmp366 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2956]] /* shunt_4012.UPu variable */);
  threadData->lastEquationSolved = 14482;
}
/*
equation index: 14483
type: SIMPLE_ASSIGN
$DAEres532 = line_4012_4022.terminal1.V.im * shunt_4012.terminal.i.re + (-line_4012_4022.terminal1.V.re) * shunt_4012.terminal.i.im - shunt_4012.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14483};
  (data->simulationInfo->daeModeData->residualVars[532]) /* $DAEres532 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2955]] /* shunt_4012.QPu variable */);
  threadData->lastEquationSolved = 14483;
}
/*
equation index: 14484
type: SIMPLE_ASSIGN
$DAEres530 = line_4012_4022.terminal1.V.im * shunt_4012.terminal.i.im + line_4012_4022.terminal1.V.re * shunt_4012.terminal.i.re - shunt_4012.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14484};
  (data->simulationInfo->daeModeData->residualVars[530]) /* $DAEres530 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2954]] /* shunt_4012.PPu variable */);
  threadData->lastEquationSolved = 14484;
}
/*
equation index: 14485
type: SIMPLE_ASSIGN
$DAEres487 = trafo_1011_4011.terminal1.i.im + trafo_11_1011.terminal2.i.im + line_1011_1013b.terminal1.i.im + line_1011_1013a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14485};
  (data->simulationInfo->daeModeData->residualVars[487]) /* $DAEres487 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14485;
}
/*
equation index: 14486
type: SIMPLE_ASSIGN
$DAEres483 = (-load_11.terminal.V.re) * trafo_11_1011.terminal1.i.re - load_11.PPu - load_11.terminal.V.im * trafo_11_1011.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14486};
  (data->simulationInfo->daeModeData->residualVars[483]) /* $DAEres483 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2807]] /* load_11.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14486;
}
/*
equation index: 14487
type: SIMPLE_ASSIGN
$DAEres481 = load_11.terminal.V.re * trafo_11_1011.terminal1.i.im + (-load_11.terminal.V.im) * trafo_11_1011.terminal1.i.re - load_11.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14487};
  (data->simulationInfo->daeModeData->residualVars[481]) /* $DAEres481 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* load_11.QPu variable */);
  threadData->lastEquationSolved = 14487;
}
/*
equation index: 14488
type: SIMPLE_ASSIGN
$DAEres478 = trafo_1011_4011.terminal1.i.re + trafo_11_1011.terminal2.i.re + line_1011_1013b.terminal1.i.re + line_1011_1013a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14488};
  (data->simulationInfo->daeModeData->residualVars[478]) /* $DAEres478 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14488;
}
/*
equation index: 14489
type: SIMPLE_ASSIGN
$DAEres454 = (-load_13.terminal.V.re) * trafo_13_1013.terminal1.i.re - load_13.PPu - load_13.terminal.V.im * trafo_13_1013.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14489};
  (data->simulationInfo->daeModeData->residualVars[454]) /* $DAEres454 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2821]] /* load_13.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14489;
}
/*
equation index: 14490
type: SIMPLE_ASSIGN
$DAEres451 = load_13.terminal.V.re * trafo_13_1013.terminal1.i.im + (-load_13.terminal.V.im) * trafo_13_1013.terminal1.i.re - load_13.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14490};
  (data->simulationInfo->daeModeData->residualVars[451]) /* $DAEres451 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2822]] /* load_13.QPu variable */);
  threadData->lastEquationSolved = 14490;
}
/*
equation index: 14491
type: SIMPLE_ASSIGN
$DAEres440 = trafo_g1_1012.terminal2.i.im + trafo_1012_4012.terminal1.i.im + trafo_12_1012.terminal2.i.im + line_1012_1014b.terminal1.i.im + line_1012_1014a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14491};
  (data->simulationInfo->daeModeData->residualVars[440]) /* $DAEres440 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14491;
}
/*
equation index: 14492
type: SIMPLE_ASSIGN
$DAEres437 = (-load_12.terminal.V.re) * trafo_12_1012.terminal1.i.re - load_12.PPu - load_12.terminal.V.im * trafo_12_1012.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14492};
  (data->simulationInfo->daeModeData->residualVars[437]) /* $DAEres437 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2814]] /* load_12.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14492;
}
/*
equation index: 14493
type: SIMPLE_ASSIGN
$DAEres434 = load_12.terminal.V.re * trafo_12_1012.terminal1.i.im + (-load_12.terminal.V.im) * trafo_12_1012.terminal1.i.re - load_12.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14493};
  (data->simulationInfo->daeModeData->residualVars[434]) /* $DAEres434 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2815]] /* load_12.QPu variable */);
  threadData->lastEquationSolved = 14493;
}
/*
equation index: 14494
type: SIMPLE_ASSIGN
$DAEres376 = trafo_g5_1022.terminal2.i.im + trafo_1022_4022.terminal1.i.im + trafo_22_1022.terminal2.i.im + shunt_1022.terminal.i.im + line_1021_1022b.terminal2.i.im + line_1021_1022a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14494};
  (data->simulationInfo->daeModeData->residualVars[376]) /* $DAEres376 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14494;
}
/*
equation index: 14495
type: SIMPLE_ASSIGN
$DAEres372 = (-load_22.terminal.V.re) * trafo_22_1022.terminal1.i.re - load_22.PPu - load_22.terminal.V.im * trafo_22_1022.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14495};
  (data->simulationInfo->daeModeData->residualVars[372]) /* $DAEres372 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* load_22.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14495;
}
/*
equation index: 14496
type: SIMPLE_ASSIGN
$DAEres370 = load_22.terminal.V.re * trafo_22_1022.terminal1.i.im + (-load_22.terminal.V.im) * trafo_22_1022.terminal1.i.re - load_22.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14496};
  (data->simulationInfo->daeModeData->residualVars[370]) /* $DAEres370 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2829]] /* load_22.QPu variable */);
  threadData->lastEquationSolved = 14496;
}
/*
equation index: 14497
type: SIMPLE_ASSIGN
$DAEres366 = (if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5) - shunt_1022.UPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14497};
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_boolean tmp370;
  modelica_real tmp371;
  tmp370 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
  if(tmp370)
  {
    tmp371 = 0.0;
  }
  else
  {
    tmp367 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
    tmp368 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
    tmp369 = (tmp367 * tmp367) + (tmp368 * tmp368);
    if(tmp369 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp369, 0.5);
    }
    tmp371 = sqrt(tmp369);
  }
  (data->simulationInfo->daeModeData->residualVars[366]) /* $DAEres366 DAE_RESIDUAL_VAR */ = tmp371 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */);
  threadData->lastEquationSolved = 14497;
}
/*
equation index: 14498
type: SIMPLE_ASSIGN
$DAEres364 = line_1021_1022b.terminal2.V.im * shunt_1022.terminal.i.im + line_1021_1022b.terminal2.V.re * shunt_1022.terminal.i.re - shunt_1022.PPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14498};
  (data->simulationInfo->daeModeData->residualVars[364]) /* $DAEres364 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* shunt_1022.PPu variable */);
  threadData->lastEquationSolved = 14498;
}
/*
equation index: 14499
type: SIMPLE_ASSIGN
$DAEres362 = line_1021_1022b.terminal2.V.im * shunt_1022.terminal.i.re + (-line_1021_1022b.terminal2.V.re) * shunt_1022.terminal.i.im - shunt_1022.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14499};
  (data->simulationInfo->daeModeData->residualVars[362]) /* $DAEres362 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* shunt_1022.QPu variable */);
  threadData->lastEquationSolved = 14499;
}
/*
equation index: 14500
type: SIMPLE_ASSIGN
$DAEres355 = trafo_g4_1021.terminal2.i.re + line_1021_1022b.terminal1.i.re + line_1021_1022a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14500};
  (data->simulationInfo->daeModeData->residualVars[355]) /* $DAEres355 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14500;
}
/*
equation index: 14501
type: SIMPLE_ASSIGN
$DAEres351 = trafo_g4_1021.terminal2.i.im + line_1021_1022b.terminal1.i.im + line_1021_1022a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14501};
  (data->simulationInfo->daeModeData->residualVars[351]) /* $DAEres351 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14501;
}
/*
equation index: 14502
type: SIMPLE_ASSIGN
$DAEres304 = trafo_2031_4031.terminal1.i.re + trafo_31_2031.terminal2.i.re + line_2031_2032b.terminal1.i.re + line_2031_2032a.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14502};
  (data->simulationInfo->daeModeData->residualVars[304]) /* $DAEres304 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */);
  threadData->lastEquationSolved = 14502;
}
/*
equation index: 14503
type: SIMPLE_ASSIGN
$DAEres299 = (-load_31.terminal.V.re) * trafo_31_2031.terminal1.i.re - load_31.PPu - load_31.terminal.V.im * trafo_31_2031.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14503};
  (data->simulationInfo->daeModeData->residualVars[299]) /* $DAEres299 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* load_31.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14503;
}
/*
equation index: 14504
type: SIMPLE_ASSIGN
$DAEres296 = load_31.terminal.V.re * trafo_31_2031.terminal1.i.im + (-load_31.terminal.V.im) * trafo_31_2031.terminal1.i.re - load_31.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14504};
  (data->simulationInfo->daeModeData->residualVars[296]) /* $DAEres296 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2836]] /* load_31.QPu variable */);
  threadData->lastEquationSolved = 14504;
}
/*
equation index: 14505
type: SIMPLE_ASSIGN
$DAEres292 = trafo_2031_4031.terminal1.i.im + trafo_31_2031.terminal2.i.im + line_2031_2032b.terminal1.i.im + line_2031_2032a.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14505};
  (data->simulationInfo->daeModeData->residualVars[292]) /* $DAEres292 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */);
  threadData->lastEquationSolved = 14505;
}
/*
equation index: 14506
type: SIMPLE_ASSIGN
$DAEres289 = trafo_g8_2032.terminal2.i.im + trafo_32_2032.terminal2.i.im + line_2031_2032b.terminal2.i.im + line_2031_2032a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14506};
  (data->simulationInfo->daeModeData->residualVars[289]) /* $DAEres289 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14506;
}
/*
equation index: 14507
type: SIMPLE_ASSIGN
$DAEres260 = (-load_32.terminal.V.re) * trafo_32_2032.terminal1.i.re - load_32.PPu - load_32.terminal.V.im * trafo_32_2032.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14507};
  (data->simulationInfo->daeModeData->residualVars[260]) /* $DAEres260 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2842]] /* load_32.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14507;
}
/*
equation index: 14508
type: SIMPLE_ASSIGN
$DAEres257 = trafo_g8_2032.terminal2.i.re + trafo_32_2032.terminal2.i.re + line_2031_2032b.terminal2.i.re + line_2031_2032a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14508};
  (data->simulationInfo->daeModeData->residualVars[257]) /* $DAEres257 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14508;
}
/*
equation index: 14509
type: SIMPLE_ASSIGN
$DAEres256 = load_32.terminal.V.re * trafo_32_2032.terminal1.i.im + (-load_32.terminal.V.im) * trafo_32_2032.terminal1.i.re - load_32.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14509};
  (data->simulationInfo->daeModeData->residualVars[256]) /* $DAEres256 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2843]] /* load_32.QPu variable */);
  threadData->lastEquationSolved = 14509;
}
/*
equation index: 14510
type: SIMPLE_ASSIGN
$DAEres213 = trafo_g17_4062.terminal2.i.im + trafo_62_4062.terminal2.i.im + line_4062_4063b.terminal1.i.im + line_4062_4063a.terminal1.i.im + line_4061_4062.terminal2.i.im + line_4045_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14510};
  (data->simulationInfo->daeModeData->residualVars[213]) /* $DAEres213 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14510;
}
/*
equation index: 14511
type: SIMPLE_ASSIGN
$DAEres188 = (-load_62.terminal.V.re) * trafo_62_4062.terminal1.i.re - load_62.PPu - load_62.terminal.V.im * trafo_62_4062.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14511};
  (data->simulationInfo->daeModeData->residualVars[188]) /* $DAEres188 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2898]] /* load_62.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14511;
}
/*
equation index: 14512
type: SIMPLE_ASSIGN
$DAEres186 = load_62.terminal.V.re * trafo_62_4062.terminal1.i.im + (-load_62.terminal.V.im) * trafo_62_4062.terminal1.i.re - load_62.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14512};
  (data->simulationInfo->daeModeData->residualVars[186]) /* $DAEres186 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2899]] /* load_62.QPu variable */);
  threadData->lastEquationSolved = 14512;
}
/*
equation index: 14513
type: SIMPLE_ASSIGN
$DAEres180 = trafo_g18_4063.terminal2.i.re + trafo_63_4063.terminal2.i.re + line_4062_4063b.terminal2.i.re + line_4062_4063a.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14513};
  (data->simulationInfo->daeModeData->residualVars[180]) /* $DAEres180 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */);
  threadData->lastEquationSolved = 14513;
}
/*
equation index: 14514
type: SIMPLE_ASSIGN
$DAEres177 = (-load_63.terminal.V.re) * trafo_63_4063.terminal1.i.re - load_63.PPu - load_63.terminal.V.im * trafo_63_4063.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14514};
  (data->simulationInfo->daeModeData->residualVars[177]) /* $DAEres177 DAE_RESIDUAL_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* load_63.PPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 14514;
}
/*
equation index: 14515
type: SIMPLE_ASSIGN
$DAEres165 = trafo_g18_4063.terminal2.i.im + trafo_63_4063.terminal2.i.im + line_4062_4063b.terminal2.i.im + line_4062_4063a.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14515};
  (data->simulationInfo->daeModeData->residualVars[165]) /* $DAEres165 DAE_RESIDUAL_VAR */ = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */);
  threadData->lastEquationSolved = 14515;
}
/*
equation index: 14516
type: SIMPLE_ASSIGN
$DAEres142 = load_63.terminal.V.re * trafo_63_4063.terminal1.i.im + (-load_63.terminal.V.im) * trafo_63_4063.terminal1.i.re - load_63.QPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14516};
  (data->simulationInfo->daeModeData->residualVars[142]) /* $DAEres142 DAE_RESIDUAL_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* load_63.QPu variable */);
  threadData->lastEquationSolved = 14516;
}
/*
equation index: 14517
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.x[1] = vrNordic_g01.leadLag1.x_scaled[1] / vrNordic_g01.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3459]] /* vrNordic_g01.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */),"vrNordic_g01.leadLag1.a_end");
  threadData->lastEquationSolved = 14517;
}
/*
equation index: 14518
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.x[1] = vrNordic_g01.leadLag2.x_scaled[1] / vrNordic_g01.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3461]] /* vrNordic_g01.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */),"vrNordic_g01.leadLag2.a_end");
  threadData->lastEquationSolved = 14518;
}
/*
equation index: 14519
type: SIMPLE_ASSIGN
vrNordic_g01.greaterEqualThreshold.y = vrNordic_g01.timer.y >= vrNordic_g01.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14519};
  modelica_boolean tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  tmp373 = 1.0;
  tmp374 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp372, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */), tmp373, tmp374, 229, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1015]] /* vrNordic_g01.greaterEqualThreshold.y DISCRETE */) = tmp372;
  threadData->lastEquationSolved = 14519;
}
/*
equation index: 14520
type: SIMPLE_ASSIGN
vrNordic_g01.dOmega.y = g01.omegaPu - vrNordic_g01.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4131]] /* vrNordic_g01.const.k PARAM */);
  threadData->lastEquationSolved = 14520;
}
/*
equation index: 14521
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.y = if vrNordic_g01.derivative.zeroGain then 0.0 else vrNordic_g01.derivative.k / vrNordic_g01.derivative.T * (vrNordic_g01.dOmega.y - vrNordic_g01.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[861]] /* vrNordic_g01.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4135]] /* vrNordic_g01.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4134]] /* vrNordic_g01.derivative.T PARAM */),"vrNordic_g01.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* vrNordic_g01.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14521;
}
/*
equation index: 14522
type: SIMPLE_ASSIGN
$DAEres117 = vrNordic_g01.leadLag1.a_end * vrNordic_g01.derivative.y + (-vrNordic_g01.leadLag1.a[2]) * vrNordic_g01.leadLag1.x_scaled[1] - der(vrNordic_g01.leadLag1.x_scaled[1]) * vrNordic_g01.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14522};
  (data->simulationInfo->daeModeData->residualVars[117]) /* $DAEres117 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* der(vrNordic_g01.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4157]] /* vrNordic_g01.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14522;
}
/*
equation index: 14523
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.y = (vrNordic_g01.leadLag1.bb[2] - vrNordic_g01.leadLag1.d * vrNordic_g01.leadLag1.a[2]) * vrNordic_g01.leadLag1.x[1] + vrNordic_g01.leadLag1.d * vrNordic_g01.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4163]] /* vrNordic_g01.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4164]] /* vrNordic_g01.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3459]] /* vrNordic_g01.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4164]] /* vrNordic_g01.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */));
  threadData->lastEquationSolved = 14523;
}
/*
equation index: 14524
type: SIMPLE_ASSIGN
$DAEres118 = vrNordic_g01.leadLag2.a_end * vrNordic_g01.leadLag1.y + (-vrNordic_g01.leadLag2.a[2]) * vrNordic_g01.leadLag2.x_scaled[1] - der(vrNordic_g01.leadLag2.x_scaled[1]) * vrNordic_g01.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14524};
  (data->simulationInfo->daeModeData->residualVars[118]) /* $DAEres118 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* der(vrNordic_g01.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4170]] /* vrNordic_g01.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14524;
}
/*
equation index: 14525
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.y = (vrNordic_g01.leadLag2.bb[2] - vrNordic_g01.leadLag2.d * vrNordic_g01.leadLag2.a[2]) * vrNordic_g01.leadLag2.x[1] + vrNordic_g01.leadLag2.d * vrNordic_g01.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4176]] /* vrNordic_g01.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4177]] /* vrNordic_g01.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3461]] /* vrNordic_g01.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4177]] /* vrNordic_g01.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */));
  threadData->lastEquationSolved = 14525;
}
/*
equation index: 14526
type: SIMPLE_ASSIGN
vrNordic_g01.limiter.y = smooth(0, if vrNordic_g01.leadLag2.y > vrNordic_g01.limiter.uMax then vrNordic_g01.limiter.uMax else if vrNordic_g01.leadLag2.y < vrNordic_g01.limiter.uMin then vrNordic_g01.limiter.uMin else vrNordic_g01.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14526};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  modelica_real tmp378;
  tmp375 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */));
  tmp377 = (modelica_boolean)tmp375;
  if(tmp377)
  {
    tmp378 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */);
  }
  else
  {
    tmp376 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */));
    tmp378 = (tmp376?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3465]] /* vrNordic_g01.limiter.y variable */) = tmp378;
  threadData->lastEquationSolved = 14526;
}
/*
equation index: 14527
type: SIMPLE_ASSIGN
$DAEres119 = (if vrNordic_g01.derivative.zeroGain then 0.0 else (vrNordic_g01.dOmega.y - vrNordic_g01.derivative.x) / vrNordic_g01.derivative.T) - der(vrNordic_g01.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14527};
  (data->simulationInfo->daeModeData->residualVars[119]) /* $DAEres119 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[861]] /* vrNordic_g01.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* vrNordic_g01.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4134]] /* vrNordic_g01.derivative.T PARAM */),"vrNordic_g01.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* der(vrNordic_g01.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14527;
}
/*
equation index: 14528
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.x[1] = vrNordic_g01.leadLag.x_scaled[1] / vrNordic_g01.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */),"vrNordic_g01.leadLag.a_end");
  threadData->lastEquationSolved = 14528;
}
/*
equation index: 14529
type: SIMPLE_ASSIGN
goverNordic_g01.flowDivGateOpening.y = goverNordic_g01.waterFlow.y / goverNordic_g01.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1937]] /* goverNordic_g01.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g01.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14529;
}
/*
equation index: 14530
type: SIMPLE_ASSIGN
goverNordic_g01.headWater.y = goverNordic_g01.flowDivGateOpening.y ^ goverNordic_g01.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14530};
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  tmp379 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1937]] /* goverNordic_g01.flowDivGateOpening.y variable */);
  tmp380 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2272]] /* goverNordic_g01.headWater.N PARAM */);
  if(tmp379 < 0.0 && tmp380 != 0.0)
  {
    tmp382 = modf(tmp380, &tmp383);
    
    if(tmp382 > 0.5)
    {
      tmp382 -= 1.0;
      tmp383 += 1.0;
    }
    else if(tmp382 < -0.5)
    {
      tmp382 += 1.0;
      tmp383 -= 1.0;
    }
    
    if(fabs(tmp382) < 1e-10)
      tmp381 = pow(tmp379, tmp383);
    else
    {
      tmp385 = modf(1.0/tmp380, &tmp384);
      if(tmp385 > 0.5)
      {
        tmp385 -= 1.0;
        tmp384 += 1.0;
      }
      else if(tmp385 < -0.5)
      {
        tmp385 += 1.0;
        tmp384 -= 1.0;
      }
      if(fabs(tmp385) < 1e-10 && ((unsigned long)tmp384 & 1))
      {
        tmp381 = -pow(-tmp379, tmp382)*pow(tmp379, tmp383);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp379, tmp380);
      }
    }
  }
  else
  {
    tmp381 = pow(tmp379, tmp380);
  }
  if(isnan(tmp381) || isinf(tmp381))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp379, tmp380);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */) = tmp381;
  threadData->lastEquationSolved = 14530;
}
/*
equation index: 14531
type: SIMPLE_ASSIGN
g01.PmPu = goverNordic_g01.waterFlow.y * goverNordic_g01.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* g01.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */));
  threadData->lastEquationSolved = 14531;
}
/*
equation index: 14532
type: SIMPLE_ASSIGN
goverNordic_g01.dH.y = goverNordic_g01.const2.k - goverNordic_g01.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1933]] /* goverNordic_g01.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* goverNordic_g01.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */);
  threadData->lastEquationSolved = 14532;
}
/*
equation index: 14533
type: SIMPLE_ASSIGN
$DAEres116 = goverNordic_g01.waterFlow.k * goverNordic_g01.dH.y - der(goverNordic_g01.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14533};
  (data->simulationInfo->daeModeData->residualVars[116]) /* $DAEres116 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* goverNordic_g01.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1933]] /* goverNordic_g01.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(goverNordic_g01.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14533;
}
/*
equation index: 14534
type: SIMPLE_ASSIGN
goverNordic_g01.dOmega.y = goverNordic_g01.const1.k - g01.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1934]] /* goverNordic_g01.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* goverNordic_g01.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14534;
}
/*
equation index: 14535
type: SIMPLE_ASSIGN
goverNordic_g01.dP.y = goverNordic_g01.const.k - goverNordic_g01.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* goverNordic_g01.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* goverNordic_g01.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14535;
}
/*
equation index: 14536
type: SIMPLE_ASSIGN
goverNordic_g01.dOmegaPlusDroop.y = goverNordic_g01.dOmegaPlusDroop.k1 * goverNordic_g01.dOmega.y + goverNordic_g01.dOmegaPlusDroop.k2 * goverNordic_g01.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* goverNordic_g01.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1934]] /* goverNordic_g01.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* goverNordic_g01.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* goverNordic_g01.dP.y variable */));
  threadData->lastEquationSolved = 14536;
}
/*
equation index: 14537
type: SIMPLE_ASSIGN
goverNordic_g01.govKi.y = goverNordic_g01.govKi.k * goverNordic_g01.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1939]] /* goverNordic_g01.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* goverNordic_g01.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14537;
}
/*
equation index: 14538
type: SIMPLE_ASSIGN
$DAEres114 = goverNordic_g01.govInt.k * goverNordic_g01.govKi.y - der(goverNordic_g01.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14538};
  (data->simulationInfo->daeModeData->residualVars[114]) /* $DAEres114 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* goverNordic_g01.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1939]] /* goverNordic_g01.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* der(goverNordic_g01.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14538;
}
/*
equation index: 14539
type: SIMPLE_ASSIGN
goverNordic_g01.govKp.y = goverNordic_g01.govKp.k * goverNordic_g01.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* goverNordic_g01.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* goverNordic_g01.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* goverNordic_g01.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14539;
}
/*
equation index: 14540
type: SIMPLE_ASSIGN
goverNordic_g01.govOut.y = goverNordic_g01.govOut.k1 * goverNordic_g01.govKp.y + goverNordic_g01.govOut.k2 * goverNordic_g01.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1941]] /* goverNordic_g01.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2270]] /* goverNordic_g01.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* goverNordic_g01.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* goverNordic_g01.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* goverNordic_g01.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14540;
}
/*
equation index: 14541
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.feedback.y = goverNordic_g01.govOut.y - goverNordic_g01.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1943]] /* goverNordic_g01.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1941]] /* goverNordic_g01.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14541;
}
/*
equation index: 14542
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.gain.y = goverNordic_g01.limRateLimFirstOrder.gain.k * goverNordic_g01.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2278]] /* goverNordic_g01.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1943]] /* goverNordic_g01.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14542;
}
/*
equation index: 14543
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g01.limRateLimFirstOrder.gain.y > goverNordic_g01.limRateLimFirstOrder.limiter.uMax then goverNordic_g01.limRateLimFirstOrder.limiter.uMax else if goverNordic_g01.limRateLimFirstOrder.gain.y < goverNordic_g01.limRateLimFirstOrder.limiter.uMin then goverNordic_g01.limRateLimFirstOrder.limiter.uMin else goverNordic_g01.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14543};
  modelica_boolean tmp386;
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  modelica_real tmp389;
  tmp386 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp388 = (modelica_boolean)tmp386;
  if(tmp388)
  {
    tmp389 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp387 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp389 = (tmp387?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */) = tmp389;
  threadData->lastEquationSolved = 14543;
}
/*
equation index: 14544
type: SIMPLE_ASSIGN
$DAEres115 = (if goverNordic_g01.limRateLimFirstOrder.limIntegrator.y < goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g01.limRateLimFirstOrder.limIntegrator.y > goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y) - der(goverNordic_g01.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14544};
  modelica_boolean tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_boolean tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_boolean tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  tmp391 = 1.0;
  tmp392 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp390, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp391, tmp392, 240, Less, LessZC);
  tmp394 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp395 = 0.0;
  relationhysteresis(data, &tmp393, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp394, tmp395, 241, Less, LessZC);
  tmp397 = 1.0;
  tmp398 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp396, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp397, tmp398, 242, Greater, GreaterZC);
  tmp400 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp401 = 0.0;
  relationhysteresis(data, &tmp399, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp400, tmp401, 243, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[115]) /* $DAEres115 DAE_RESIDUAL_VAR */ = (((tmp390 && tmp393) || (tmp396 && tmp399))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(goverNordic_g01.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14544;
}
/*
equation index: 14545
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.x[1] = vrNordic_g02.leadLag1.x_scaled[1] / vrNordic_g02.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3483]] /* vrNordic_g02.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */),"vrNordic_g02.leadLag1.a_end");
  threadData->lastEquationSolved = 14545;
}
/*
equation index: 14546
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.x[1] = vrNordic_g02.leadLag2.x_scaled[1] / vrNordic_g02.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3485]] /* vrNordic_g02.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */),"vrNordic_g02.leadLag2.a_end");
  threadData->lastEquationSolved = 14546;
}
/*
equation index: 14547
type: SIMPLE_ASSIGN
vrNordic_g02.greaterEqualThreshold.y = vrNordic_g02.timer.y >= vrNordic_g02.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14547};
  modelica_boolean tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  tmp403 = 1.0;
  tmp404 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp402, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */), tmp403, tmp404, 245, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1018]] /* vrNordic_g02.greaterEqualThreshold.y DISCRETE */) = tmp402;
  threadData->lastEquationSolved = 14547;
}
/*
equation index: 14548
type: SIMPLE_ASSIGN
vrNordic_g02.dOmega.y = g02.omegaPu - vrNordic_g02.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4210]] /* vrNordic_g02.const.k PARAM */);
  threadData->lastEquationSolved = 14548;
}
/*
equation index: 14549
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.y = if vrNordic_g02.derivative.zeroGain then 0.0 else vrNordic_g02.derivative.k / vrNordic_g02.derivative.T * (vrNordic_g02.dOmega.y - vrNordic_g02.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[872]] /* vrNordic_g02.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4214]] /* vrNordic_g02.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4213]] /* vrNordic_g02.derivative.T PARAM */),"vrNordic_g02.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* vrNordic_g02.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14549;
}
/*
equation index: 14550
type: SIMPLE_ASSIGN
$DAEres111 = vrNordic_g02.leadLag1.a_end * vrNordic_g02.derivative.y + (-vrNordic_g02.leadLag1.a[2]) * vrNordic_g02.leadLag1.x_scaled[1] - der(vrNordic_g02.leadLag1.x_scaled[1]) * vrNordic_g02.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14550};
  (data->simulationInfo->daeModeData->residualVars[111]) /* $DAEres111 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* der(vrNordic_g02.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4236]] /* vrNordic_g02.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14550;
}
/*
equation index: 14551
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.y = (vrNordic_g02.leadLag1.bb[2] - vrNordic_g02.leadLag1.d * vrNordic_g02.leadLag1.a[2]) * vrNordic_g02.leadLag1.x[1] + vrNordic_g02.leadLag1.d * vrNordic_g02.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4242]] /* vrNordic_g02.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4243]] /* vrNordic_g02.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3483]] /* vrNordic_g02.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4243]] /* vrNordic_g02.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */));
  threadData->lastEquationSolved = 14551;
}
/*
equation index: 14552
type: SIMPLE_ASSIGN
$DAEres112 = vrNordic_g02.leadLag2.a_end * vrNordic_g02.leadLag1.y + (-vrNordic_g02.leadLag2.a[2]) * vrNordic_g02.leadLag2.x_scaled[1] - der(vrNordic_g02.leadLag2.x_scaled[1]) * vrNordic_g02.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14552};
  (data->simulationInfo->daeModeData->residualVars[112]) /* $DAEres112 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* der(vrNordic_g02.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4249]] /* vrNordic_g02.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14552;
}
/*
equation index: 14553
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.y = (vrNordic_g02.leadLag2.bb[2] - vrNordic_g02.leadLag2.d * vrNordic_g02.leadLag2.a[2]) * vrNordic_g02.leadLag2.x[1] + vrNordic_g02.leadLag2.d * vrNordic_g02.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4255]] /* vrNordic_g02.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4256]] /* vrNordic_g02.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3485]] /* vrNordic_g02.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4256]] /* vrNordic_g02.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */));
  threadData->lastEquationSolved = 14553;
}
/*
equation index: 14554
type: SIMPLE_ASSIGN
vrNordic_g02.limiter.y = smooth(0, if vrNordic_g02.leadLag2.y > vrNordic_g02.limiter.uMax then vrNordic_g02.limiter.uMax else if vrNordic_g02.leadLag2.y < vrNordic_g02.limiter.uMin then vrNordic_g02.limiter.uMin else vrNordic_g02.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14554};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_real tmp408;
  tmp405 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */));
  tmp407 = (modelica_boolean)tmp405;
  if(tmp407)
  {
    tmp408 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */);
  }
  else
  {
    tmp406 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */));
    tmp408 = (tmp406?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3489]] /* vrNordic_g02.limiter.y variable */) = tmp408;
  threadData->lastEquationSolved = 14554;
}
/*
equation index: 14555
type: SIMPLE_ASSIGN
$DAEres113 = (if vrNordic_g02.derivative.zeroGain then 0.0 else (vrNordic_g02.dOmega.y - vrNordic_g02.derivative.x) / vrNordic_g02.derivative.T) - der(vrNordic_g02.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14555};
  (data->simulationInfo->daeModeData->residualVars[113]) /* $DAEres113 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[872]] /* vrNordic_g02.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* vrNordic_g02.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4213]] /* vrNordic_g02.derivative.T PARAM */),"vrNordic_g02.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* der(vrNordic_g02.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14555;
}
/*
equation index: 14556
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.x[1] = vrNordic_g02.leadLag.x_scaled[1] / vrNordic_g02.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */),"vrNordic_g02.leadLag.a_end");
  threadData->lastEquationSolved = 14556;
}
/*
equation index: 14557
type: SIMPLE_ASSIGN
goverNordic_g02.flowDivGateOpening.y = goverNordic_g02.waterFlow.y / goverNordic_g02.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* goverNordic_g02.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g02.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14557;
}
/*
equation index: 14558
type: SIMPLE_ASSIGN
goverNordic_g02.headWater.y = goverNordic_g02.flowDivGateOpening.y ^ goverNordic_g02.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14558};
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_real tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_real tmp415;
  tmp409 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* goverNordic_g02.flowDivGateOpening.y variable */);
  tmp410 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* goverNordic_g02.headWater.N PARAM */);
  if(tmp409 < 0.0 && tmp410 != 0.0)
  {
    tmp412 = modf(tmp410, &tmp413);
    
    if(tmp412 > 0.5)
    {
      tmp412 -= 1.0;
      tmp413 += 1.0;
    }
    else if(tmp412 < -0.5)
    {
      tmp412 += 1.0;
      tmp413 -= 1.0;
    }
    
    if(fabs(tmp412) < 1e-10)
      tmp411 = pow(tmp409, tmp413);
    else
    {
      tmp415 = modf(1.0/tmp410, &tmp414);
      if(tmp415 > 0.5)
      {
        tmp415 -= 1.0;
        tmp414 += 1.0;
      }
      else if(tmp415 < -0.5)
      {
        tmp415 += 1.0;
        tmp414 -= 1.0;
      }
      if(fabs(tmp415) < 1e-10 && ((unsigned long)tmp414 & 1))
      {
        tmp411 = -pow(-tmp409, tmp412)*pow(tmp409, tmp413);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
      }
    }
  }
  else
  {
    tmp411 = pow(tmp409, tmp410);
  }
  if(isnan(tmp411) || isinf(tmp411))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */) = tmp411;
  threadData->lastEquationSolved = 14558;
}
/*
equation index: 14559
type: SIMPLE_ASSIGN
g02.PmPu = goverNordic_g02.waterFlow.y * goverNordic_g02.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* g02.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */));
  threadData->lastEquationSolved = 14559;
}
/*
equation index: 14560
type: SIMPLE_ASSIGN
goverNordic_g02.dH.y = goverNordic_g02.const2.k - goverNordic_g02.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1951]] /* goverNordic_g02.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2296]] /* goverNordic_g02.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */);
  threadData->lastEquationSolved = 14560;
}
/*
equation index: 14561
type: SIMPLE_ASSIGN
$DAEres110 = goverNordic_g02.waterFlow.k * goverNordic_g02.dH.y - der(goverNordic_g02.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14561};
  (data->simulationInfo->daeModeData->residualVars[110]) /* $DAEres110 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2323]] /* goverNordic_g02.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1951]] /* goverNordic_g02.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* der(goverNordic_g02.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14561;
}
/*
equation index: 14562
type: SIMPLE_ASSIGN
goverNordic_g02.dOmega.y = goverNordic_g02.const1.k - g02.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1952]] /* goverNordic_g02.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* goverNordic_g02.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14562;
}
/*
equation index: 14563
type: SIMPLE_ASSIGN
goverNordic_g02.dP.y = goverNordic_g02.const.k - goverNordic_g02.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* goverNordic_g02.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* goverNordic_g02.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14563;
}
/*
equation index: 14564
type: SIMPLE_ASSIGN
goverNordic_g02.dOmegaPlusDroop.y = goverNordic_g02.dOmegaPlusDroop.k1 * goverNordic_g02.dOmega.y + goverNordic_g02.dOmegaPlusDroop.k2 * goverNordic_g02.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* goverNordic_g02.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1952]] /* goverNordic_g02.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* goverNordic_g02.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* goverNordic_g02.dP.y variable */));
  threadData->lastEquationSolved = 14564;
}
/*
equation index: 14565
type: SIMPLE_ASSIGN
goverNordic_g02.govKi.y = goverNordic_g02.govKi.k * goverNordic_g02.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* goverNordic_g02.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2304]] /* goverNordic_g02.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14565;
}
/*
equation index: 14566
type: SIMPLE_ASSIGN
$DAEres108 = goverNordic_g02.govInt.k * goverNordic_g02.govKi.y - der(goverNordic_g02.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14566};
  (data->simulationInfo->daeModeData->residualVars[108]) /* $DAEres108 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2302]] /* goverNordic_g02.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* goverNordic_g02.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* der(goverNordic_g02.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14566;
}
/*
equation index: 14567
type: SIMPLE_ASSIGN
goverNordic_g02.govKp.y = goverNordic_g02.govKp.k * goverNordic_g02.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* goverNordic_g02.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* goverNordic_g02.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1953]] /* goverNordic_g02.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14567;
}
/*
equation index: 14568
type: SIMPLE_ASSIGN
goverNordic_g02.govOut.y = goverNordic_g02.govOut.k1 * goverNordic_g02.govKp.y + goverNordic_g02.govOut.k2 * goverNordic_g02.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* goverNordic_g02.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2306]] /* goverNordic_g02.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* goverNordic_g02.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2307]] /* goverNordic_g02.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* goverNordic_g02.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14568;
}
/*
equation index: 14569
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.feedback.y = goverNordic_g02.govOut.y - goverNordic_g02.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1961]] /* goverNordic_g02.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* goverNordic_g02.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14569;
}
/*
equation index: 14570
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.gain.y = goverNordic_g02.limRateLimFirstOrder.gain.k * goverNordic_g02.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* goverNordic_g02.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1961]] /* goverNordic_g02.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14570;
}
/*
equation index: 14571
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g02.limRateLimFirstOrder.gain.y > goverNordic_g02.limRateLimFirstOrder.limiter.uMax then goverNordic_g02.limRateLimFirstOrder.limiter.uMax else if goverNordic_g02.limRateLimFirstOrder.gain.y < goverNordic_g02.limRateLimFirstOrder.limiter.uMin then goverNordic_g02.limRateLimFirstOrder.limiter.uMin else goverNordic_g02.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14571};
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  modelica_real tmp419;
  tmp416 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp418 = (modelica_boolean)tmp416;
  if(tmp418)
  {
    tmp419 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp417 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp419 = (tmp417?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */) = tmp419;
  threadData->lastEquationSolved = 14571;
}
/*
equation index: 14572
type: SIMPLE_ASSIGN
$DAEres109 = (if goverNordic_g02.limRateLimFirstOrder.limIntegrator.y < goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g02.limRateLimFirstOrder.limIntegrator.y > goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y) - der(goverNordic_g02.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14572};
  modelica_boolean tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  modelica_boolean tmp423;
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  modelica_real tmp428;
  modelica_boolean tmp429;
  modelica_real tmp430;
  modelica_real tmp431;
  tmp421 = 1.0;
  tmp422 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp420, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp421, tmp422, 256, Less, LessZC);
  tmp424 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp425 = 0.0;
  relationhysteresis(data, &tmp423, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp424, tmp425, 257, Less, LessZC);
  tmp427 = 1.0;
  tmp428 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp426, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp427, tmp428, 258, Greater, GreaterZC);
  tmp430 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp431 = 0.0;
  relationhysteresis(data, &tmp429, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp430, tmp431, 259, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[109]) /* $DAEres109 DAE_RESIDUAL_VAR */ = (((tmp420 && tmp423) || (tmp426 && tmp429))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* der(goverNordic_g02.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14572;
}
/*
equation index: 14573
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.x[1] = vrNordic_g03.leadLag1.x_scaled[1] / vrNordic_g03.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3507]] /* vrNordic_g03.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */),"vrNordic_g03.leadLag1.a_end");
  threadData->lastEquationSolved = 14573;
}
/*
equation index: 14574
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.x[1] = vrNordic_g03.leadLag2.x_scaled[1] / vrNordic_g03.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3509]] /* vrNordic_g03.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */),"vrNordic_g03.leadLag2.a_end");
  threadData->lastEquationSolved = 14574;
}
/*
equation index: 14575
type: SIMPLE_ASSIGN
vrNordic_g03.greaterEqualThreshold.y = vrNordic_g03.timer.y >= vrNordic_g03.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14575};
  modelica_boolean tmp432;
  modelica_real tmp433;
  modelica_real tmp434;
  tmp433 = 1.0;
  tmp434 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp432, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */), tmp433, tmp434, 261, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1021]] /* vrNordic_g03.greaterEqualThreshold.y DISCRETE */) = tmp432;
  threadData->lastEquationSolved = 14575;
}
/*
equation index: 14576
type: SIMPLE_ASSIGN
vrNordic_g03.dOmega.y = g03.omegaPu - vrNordic_g03.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4289]] /* vrNordic_g03.const.k PARAM */);
  threadData->lastEquationSolved = 14576;
}
/*
equation index: 14577
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.y = if vrNordic_g03.derivative.zeroGain then 0.0 else vrNordic_g03.derivative.k / vrNordic_g03.derivative.T * (vrNordic_g03.dOmega.y - vrNordic_g03.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[883]] /* vrNordic_g03.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4293]] /* vrNordic_g03.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4292]] /* vrNordic_g03.derivative.T PARAM */),"vrNordic_g03.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* vrNordic_g03.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14577;
}
/*
equation index: 14578
type: SIMPLE_ASSIGN
$DAEres105 = vrNordic_g03.leadLag1.a_end * vrNordic_g03.derivative.y + (-vrNordic_g03.leadLag1.a[2]) * vrNordic_g03.leadLag1.x_scaled[1] - der(vrNordic_g03.leadLag1.x_scaled[1]) * vrNordic_g03.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14578};
  (data->simulationInfo->daeModeData->residualVars[105]) /* $DAEres105 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* der(vrNordic_g03.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4315]] /* vrNordic_g03.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14578;
}
/*
equation index: 14579
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.y = (vrNordic_g03.leadLag1.bb[2] - vrNordic_g03.leadLag1.d * vrNordic_g03.leadLag1.a[2]) * vrNordic_g03.leadLag1.x[1] + vrNordic_g03.leadLag1.d * vrNordic_g03.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4321]] /* vrNordic_g03.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4322]] /* vrNordic_g03.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3507]] /* vrNordic_g03.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4322]] /* vrNordic_g03.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */));
  threadData->lastEquationSolved = 14579;
}
/*
equation index: 14580
type: SIMPLE_ASSIGN
$DAEres106 = vrNordic_g03.leadLag2.a_end * vrNordic_g03.leadLag1.y + (-vrNordic_g03.leadLag2.a[2]) * vrNordic_g03.leadLag2.x_scaled[1] - der(vrNordic_g03.leadLag2.x_scaled[1]) * vrNordic_g03.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14580};
  (data->simulationInfo->daeModeData->residualVars[106]) /* $DAEres106 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* der(vrNordic_g03.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4328]] /* vrNordic_g03.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14580;
}
/*
equation index: 14581
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.y = (vrNordic_g03.leadLag2.bb[2] - vrNordic_g03.leadLag2.d * vrNordic_g03.leadLag2.a[2]) * vrNordic_g03.leadLag2.x[1] + vrNordic_g03.leadLag2.d * vrNordic_g03.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4334]] /* vrNordic_g03.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4335]] /* vrNordic_g03.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3509]] /* vrNordic_g03.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4335]] /* vrNordic_g03.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */));
  threadData->lastEquationSolved = 14581;
}
/*
equation index: 14582
type: SIMPLE_ASSIGN
vrNordic_g03.limiter.y = smooth(0, if vrNordic_g03.leadLag2.y > vrNordic_g03.limiter.uMax then vrNordic_g03.limiter.uMax else if vrNordic_g03.leadLag2.y < vrNordic_g03.limiter.uMin then vrNordic_g03.limiter.uMin else vrNordic_g03.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14582};
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_real tmp438;
  tmp435 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */));
  tmp437 = (modelica_boolean)tmp435;
  if(tmp437)
  {
    tmp438 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */);
  }
  else
  {
    tmp436 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */));
    tmp438 = (tmp436?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3513]] /* vrNordic_g03.limiter.y variable */) = tmp438;
  threadData->lastEquationSolved = 14582;
}
/*
equation index: 14583
type: SIMPLE_ASSIGN
$DAEres107 = (if vrNordic_g03.derivative.zeroGain then 0.0 else (vrNordic_g03.dOmega.y - vrNordic_g03.derivative.x) / vrNordic_g03.derivative.T) - der(vrNordic_g03.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14583};
  (data->simulationInfo->daeModeData->residualVars[107]) /* $DAEres107 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[883]] /* vrNordic_g03.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* vrNordic_g03.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4292]] /* vrNordic_g03.derivative.T PARAM */),"vrNordic_g03.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* der(vrNordic_g03.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14583;
}
/*
equation index: 14584
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.x[1] = vrNordic_g03.leadLag.x_scaled[1] / vrNordic_g03.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */),"vrNordic_g03.leadLag.a_end");
  threadData->lastEquationSolved = 14584;
}
/*
equation index: 14585
type: SIMPLE_ASSIGN
goverNordic_g03.flowDivGateOpening.y = goverNordic_g03.waterFlow.y / goverNordic_g03.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1973]] /* goverNordic_g03.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g03.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14585;
}
/*
equation index: 14586
type: SIMPLE_ASSIGN
goverNordic_g03.headWater.y = goverNordic_g03.flowDivGateOpening.y ^ goverNordic_g03.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14586};
  modelica_real tmp439;
  modelica_real tmp440;
  modelica_real tmp441;
  modelica_real tmp442;
  modelica_real tmp443;
  modelica_real tmp444;
  modelica_real tmp445;
  tmp439 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1973]] /* goverNordic_g03.flowDivGateOpening.y variable */);
  tmp440 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2344]] /* goverNordic_g03.headWater.N PARAM */);
  if(tmp439 < 0.0 && tmp440 != 0.0)
  {
    tmp442 = modf(tmp440, &tmp443);
    
    if(tmp442 > 0.5)
    {
      tmp442 -= 1.0;
      tmp443 += 1.0;
    }
    else if(tmp442 < -0.5)
    {
      tmp442 += 1.0;
      tmp443 -= 1.0;
    }
    
    if(fabs(tmp442) < 1e-10)
      tmp441 = pow(tmp439, tmp443);
    else
    {
      tmp445 = modf(1.0/tmp440, &tmp444);
      if(tmp445 > 0.5)
      {
        tmp445 -= 1.0;
        tmp444 += 1.0;
      }
      else if(tmp445 < -0.5)
      {
        tmp445 += 1.0;
        tmp444 -= 1.0;
      }
      if(fabs(tmp445) < 1e-10 && ((unsigned long)tmp444 & 1))
      {
        tmp441 = -pow(-tmp439, tmp442)*pow(tmp439, tmp443);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp439, tmp440);
      }
    }
  }
  else
  {
    tmp441 = pow(tmp439, tmp440);
  }
  if(isnan(tmp441) || isinf(tmp441))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp439, tmp440);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */) = tmp441;
  threadData->lastEquationSolved = 14586;
}
/*
equation index: 14587
type: SIMPLE_ASSIGN
g03.PmPu = goverNordic_g03.waterFlow.y * goverNordic_g03.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* g03.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */));
  threadData->lastEquationSolved = 14587;
}
/*
equation index: 14588
type: SIMPLE_ASSIGN
goverNordic_g03.dH.y = goverNordic_g03.const2.k - goverNordic_g03.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* goverNordic_g03.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2332]] /* goverNordic_g03.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */);
  threadData->lastEquationSolved = 14588;
}
/*
equation index: 14589
type: SIMPLE_ASSIGN
$DAEres104 = goverNordic_g03.waterFlow.k * goverNordic_g03.dH.y - der(goverNordic_g03.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14589};
  (data->simulationInfo->daeModeData->residualVars[104]) /* $DAEres104 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* goverNordic_g03.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* goverNordic_g03.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(goverNordic_g03.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14589;
}
/*
equation index: 14590
type: SIMPLE_ASSIGN
goverNordic_g03.dOmega.y = goverNordic_g03.const1.k - g03.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1970]] /* goverNordic_g03.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2331]] /* goverNordic_g03.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14590;
}
/*
equation index: 14591
type: SIMPLE_ASSIGN
goverNordic_g03.dP.y = goverNordic_g03.const.k - goverNordic_g03.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1972]] /* goverNordic_g03.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2330]] /* goverNordic_g03.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14591;
}
/*
equation index: 14592
type: SIMPLE_ASSIGN
goverNordic_g03.dOmegaPlusDroop.y = goverNordic_g03.dOmegaPlusDroop.k1 * goverNordic_g03.dOmega.y + goverNordic_g03.dOmegaPlusDroop.k2 * goverNordic_g03.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2333]] /* goverNordic_g03.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1970]] /* goverNordic_g03.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* goverNordic_g03.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1972]] /* goverNordic_g03.dP.y variable */));
  threadData->lastEquationSolved = 14592;
}
/*
equation index: 14593
type: SIMPLE_ASSIGN
goverNordic_g03.govKi.y = goverNordic_g03.govKi.k * goverNordic_g03.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* goverNordic_g03.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2340]] /* goverNordic_g03.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14593;
}
/*
equation index: 14594
type: SIMPLE_ASSIGN
$DAEres102 = goverNordic_g03.govInt.k * goverNordic_g03.govKi.y - der(goverNordic_g03.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14594};
  (data->simulationInfo->daeModeData->residualVars[102]) /* $DAEres102 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2338]] /* goverNordic_g03.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* goverNordic_g03.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* der(goverNordic_g03.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14594;
}
/*
equation index: 14595
type: SIMPLE_ASSIGN
goverNordic_g03.govKp.y = goverNordic_g03.govKp.k * goverNordic_g03.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* goverNordic_g03.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2341]] /* goverNordic_g03.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* goverNordic_g03.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14595;
}
/*
equation index: 14596
type: SIMPLE_ASSIGN
goverNordic_g03.govOut.y = goverNordic_g03.govOut.k1 * goverNordic_g03.govKp.y + goverNordic_g03.govOut.k2 * goverNordic_g03.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* goverNordic_g03.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2342]] /* goverNordic_g03.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* goverNordic_g03.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2343]] /* goverNordic_g03.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* goverNordic_g03.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14596;
}
/*
equation index: 14597
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.feedback.y = goverNordic_g03.govOut.y - goverNordic_g03.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* goverNordic_g03.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* goverNordic_g03.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14597;
}
/*
equation index: 14598
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.gain.y = goverNordic_g03.limRateLimFirstOrder.gain.k * goverNordic_g03.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2350]] /* goverNordic_g03.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* goverNordic_g03.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14598;
}
/*
equation index: 14599
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g03.limRateLimFirstOrder.gain.y > goverNordic_g03.limRateLimFirstOrder.limiter.uMax then goverNordic_g03.limRateLimFirstOrder.limiter.uMax else if goverNordic_g03.limRateLimFirstOrder.gain.y < goverNordic_g03.limRateLimFirstOrder.limiter.uMin then goverNordic_g03.limRateLimFirstOrder.limiter.uMin else goverNordic_g03.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14599};
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  modelica_real tmp449;
  tmp446 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp448 = (modelica_boolean)tmp446;
  if(tmp448)
  {
    tmp449 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp447 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp449 = (tmp447?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */) = tmp449;
  threadData->lastEquationSolved = 14599;
}
/*
equation index: 14600
type: SIMPLE_ASSIGN
$DAEres103 = (if goverNordic_g03.limRateLimFirstOrder.limIntegrator.y < goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g03.limRateLimFirstOrder.limIntegrator.y > goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y) - der(goverNordic_g03.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14600};
  modelica_boolean tmp450;
  modelica_real tmp451;
  modelica_real tmp452;
  modelica_boolean tmp453;
  modelica_real tmp454;
  modelica_real tmp455;
  modelica_boolean tmp456;
  modelica_real tmp457;
  modelica_real tmp458;
  modelica_boolean tmp459;
  modelica_real tmp460;
  modelica_real tmp461;
  tmp451 = 1.0;
  tmp452 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp450, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp451, tmp452, 272, Less, LessZC);
  tmp454 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp455 = 0.0;
  relationhysteresis(data, &tmp453, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp454, tmp455, 273, Less, LessZC);
  tmp457 = 1.0;
  tmp458 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp456, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp457, tmp458, 274, Greater, GreaterZC);
  tmp460 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp461 = 0.0;
  relationhysteresis(data, &tmp459, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp460, tmp461, 275, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[103]) /* $DAEres103 DAE_RESIDUAL_VAR */ = (((tmp450 && tmp453) || (tmp456 && tmp459))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* der(goverNordic_g03.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14600;
}
/*
equation index: 14601
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.x[1] = vrNordic_g04.leadLag1.x_scaled[1] / vrNordic_g04.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3531]] /* vrNordic_g04.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */),"vrNordic_g04.leadLag1.a_end");
  threadData->lastEquationSolved = 14601;
}
/*
equation index: 14602
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.x[1] = vrNordic_g04.leadLag2.x_scaled[1] / vrNordic_g04.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3533]] /* vrNordic_g04.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */),"vrNordic_g04.leadLag2.a_end");
  threadData->lastEquationSolved = 14602;
}
/*
equation index: 14603
type: SIMPLE_ASSIGN
vrNordic_g04.greaterEqualThreshold.y = vrNordic_g04.timer.y >= vrNordic_g04.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14603};
  modelica_boolean tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  tmp463 = 1.0;
  tmp464 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp462, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */), tmp463, tmp464, 277, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1024]] /* vrNordic_g04.greaterEqualThreshold.y DISCRETE */) = tmp462;
  threadData->lastEquationSolved = 14603;
}
/*
equation index: 14604
type: SIMPLE_ASSIGN
vrNordic_g04.dOmega.y = g04.omegaPu - vrNordic_g04.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4368]] /* vrNordic_g04.const.k PARAM */);
  threadData->lastEquationSolved = 14604;
}
/*
equation index: 14605
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.y = if vrNordic_g04.derivative.zeroGain then 0.0 else vrNordic_g04.derivative.k / vrNordic_g04.derivative.T * (vrNordic_g04.dOmega.y - vrNordic_g04.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[894]] /* vrNordic_g04.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4372]] /* vrNordic_g04.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4371]] /* vrNordic_g04.derivative.T PARAM */),"vrNordic_g04.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* vrNordic_g04.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14605;
}
/*
equation index: 14606
type: SIMPLE_ASSIGN
$DAEres99 = vrNordic_g04.leadLag1.a_end * vrNordic_g04.derivative.y + (-vrNordic_g04.leadLag1.a[2]) * vrNordic_g04.leadLag1.x_scaled[1] - der(vrNordic_g04.leadLag1.x_scaled[1]) * vrNordic_g04.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14606};
  (data->simulationInfo->daeModeData->residualVars[99]) /* $DAEres99 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vrNordic_g04.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4394]] /* vrNordic_g04.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14606;
}
/*
equation index: 14607
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.y = (vrNordic_g04.leadLag1.bb[2] - vrNordic_g04.leadLag1.d * vrNordic_g04.leadLag1.a[2]) * vrNordic_g04.leadLag1.x[1] + vrNordic_g04.leadLag1.d * vrNordic_g04.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4400]] /* vrNordic_g04.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4401]] /* vrNordic_g04.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3531]] /* vrNordic_g04.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4401]] /* vrNordic_g04.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */));
  threadData->lastEquationSolved = 14607;
}
/*
equation index: 14608
type: SIMPLE_ASSIGN
$DAEres100 = vrNordic_g04.leadLag2.a_end * vrNordic_g04.leadLag1.y + (-vrNordic_g04.leadLag2.a[2]) * vrNordic_g04.leadLag2.x_scaled[1] - der(vrNordic_g04.leadLag2.x_scaled[1]) * vrNordic_g04.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14608};
  (data->simulationInfo->daeModeData->residualVars[100]) /* $DAEres100 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* der(vrNordic_g04.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4407]] /* vrNordic_g04.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14608;
}
/*
equation index: 14609
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.y = (vrNordic_g04.leadLag2.bb[2] - vrNordic_g04.leadLag2.d * vrNordic_g04.leadLag2.a[2]) * vrNordic_g04.leadLag2.x[1] + vrNordic_g04.leadLag2.d * vrNordic_g04.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4413]] /* vrNordic_g04.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4414]] /* vrNordic_g04.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3533]] /* vrNordic_g04.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4414]] /* vrNordic_g04.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */));
  threadData->lastEquationSolved = 14609;
}
/*
equation index: 14610
type: SIMPLE_ASSIGN
vrNordic_g04.limiter.y = smooth(0, if vrNordic_g04.leadLag2.y > vrNordic_g04.limiter.uMax then vrNordic_g04.limiter.uMax else if vrNordic_g04.leadLag2.y < vrNordic_g04.limiter.uMin then vrNordic_g04.limiter.uMin else vrNordic_g04.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14610};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  tmp465 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */));
  tmp467 = (modelica_boolean)tmp465;
  if(tmp467)
  {
    tmp468 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */);
  }
  else
  {
    tmp466 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */));
    tmp468 = (tmp466?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3537]] /* vrNordic_g04.limiter.y variable */) = tmp468;
  threadData->lastEquationSolved = 14610;
}
/*
equation index: 14611
type: SIMPLE_ASSIGN
$DAEres101 = (if vrNordic_g04.derivative.zeroGain then 0.0 else (vrNordic_g04.dOmega.y - vrNordic_g04.derivative.x) / vrNordic_g04.derivative.T) - der(vrNordic_g04.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14611};
  (data->simulationInfo->daeModeData->residualVars[101]) /* $DAEres101 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[894]] /* vrNordic_g04.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* vrNordic_g04.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4371]] /* vrNordic_g04.derivative.T PARAM */),"vrNordic_g04.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* der(vrNordic_g04.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14611;
}
/*
equation index: 14612
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.x[1] = vrNordic_g04.leadLag.x_scaled[1] / vrNordic_g04.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */),"vrNordic_g04.leadLag.a_end");
  threadData->lastEquationSolved = 14612;
}
/*
equation index: 14613
type: SIMPLE_ASSIGN
goverNordic_g04.flowDivGateOpening.y = goverNordic_g04.waterFlow.y / goverNordic_g04.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1991]] /* goverNordic_g04.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g04.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14613;
}
/*
equation index: 14614
type: SIMPLE_ASSIGN
goverNordic_g04.headWater.y = goverNordic_g04.flowDivGateOpening.y ^ goverNordic_g04.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14614};
  modelica_real tmp469;
  modelica_real tmp470;
  modelica_real tmp471;
  modelica_real tmp472;
  modelica_real tmp473;
  modelica_real tmp474;
  modelica_real tmp475;
  tmp469 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1991]] /* goverNordic_g04.flowDivGateOpening.y variable */);
  tmp470 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* goverNordic_g04.headWater.N PARAM */);
  if(tmp469 < 0.0 && tmp470 != 0.0)
  {
    tmp472 = modf(tmp470, &tmp473);
    
    if(tmp472 > 0.5)
    {
      tmp472 -= 1.0;
      tmp473 += 1.0;
    }
    else if(tmp472 < -0.5)
    {
      tmp472 += 1.0;
      tmp473 -= 1.0;
    }
    
    if(fabs(tmp472) < 1e-10)
      tmp471 = pow(tmp469, tmp473);
    else
    {
      tmp475 = modf(1.0/tmp470, &tmp474);
      if(tmp475 > 0.5)
      {
        tmp475 -= 1.0;
        tmp474 += 1.0;
      }
      else if(tmp475 < -0.5)
      {
        tmp475 += 1.0;
        tmp474 -= 1.0;
      }
      if(fabs(tmp475) < 1e-10 && ((unsigned long)tmp474 & 1))
      {
        tmp471 = -pow(-tmp469, tmp472)*pow(tmp469, tmp473);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp469, tmp470);
      }
    }
  }
  else
  {
    tmp471 = pow(tmp469, tmp470);
  }
  if(isnan(tmp471) || isinf(tmp471))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp469, tmp470);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */) = tmp471;
  threadData->lastEquationSolved = 14614;
}
/*
equation index: 14615
type: SIMPLE_ASSIGN
g04.PmPu = goverNordic_g04.waterFlow.y * goverNordic_g04.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* g04.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */));
  threadData->lastEquationSolved = 14615;
}
/*
equation index: 14616
type: SIMPLE_ASSIGN
goverNordic_g04.dH.y = goverNordic_g04.const2.k - goverNordic_g04.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1987]] /* goverNordic_g04.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* goverNordic_g04.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */);
  threadData->lastEquationSolved = 14616;
}
/*
equation index: 14617
type: SIMPLE_ASSIGN
$DAEres98 = goverNordic_g04.waterFlow.k * goverNordic_g04.dH.y - der(goverNordic_g04.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14617};
  (data->simulationInfo->daeModeData->residualVars[98]) /* $DAEres98 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* goverNordic_g04.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1987]] /* goverNordic_g04.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* der(goverNordic_g04.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14617;
}
/*
equation index: 14618
type: SIMPLE_ASSIGN
goverNordic_g04.dOmega.y = goverNordic_g04.const1.k - g04.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1988]] /* goverNordic_g04.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2367]] /* goverNordic_g04.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14618;
}
/*
equation index: 14619
type: SIMPLE_ASSIGN
goverNordic_g04.dP.y = goverNordic_g04.const.k - goverNordic_g04.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1990]] /* goverNordic_g04.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* goverNordic_g04.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14619;
}
/*
equation index: 14620
type: SIMPLE_ASSIGN
goverNordic_g04.dOmegaPlusDroop.y = goverNordic_g04.dOmegaPlusDroop.k1 * goverNordic_g04.dOmega.y + goverNordic_g04.dOmegaPlusDroop.k2 * goverNordic_g04.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2369]] /* goverNordic_g04.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1988]] /* goverNordic_g04.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* goverNordic_g04.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1990]] /* goverNordic_g04.dP.y variable */));
  threadData->lastEquationSolved = 14620;
}
/*
equation index: 14621
type: SIMPLE_ASSIGN
goverNordic_g04.govKi.y = goverNordic_g04.govKi.k * goverNordic_g04.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1993]] /* goverNordic_g04.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2376]] /* goverNordic_g04.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14621;
}
/*
equation index: 14622
type: SIMPLE_ASSIGN
$DAEres96 = goverNordic_g04.govInt.k * goverNordic_g04.govKi.y - der(goverNordic_g04.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14622};
  (data->simulationInfo->daeModeData->residualVars[96]) /* $DAEres96 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2374]] /* goverNordic_g04.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1993]] /* goverNordic_g04.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(goverNordic_g04.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14622;
}
/*
equation index: 14623
type: SIMPLE_ASSIGN
goverNordic_g04.govKp.y = goverNordic_g04.govKp.k * goverNordic_g04.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1994]] /* goverNordic_g04.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2377]] /* goverNordic_g04.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1989]] /* goverNordic_g04.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14623;
}
/*
equation index: 14624
type: SIMPLE_ASSIGN
goverNordic_g04.govOut.y = goverNordic_g04.govOut.k1 * goverNordic_g04.govKp.y + goverNordic_g04.govOut.k2 * goverNordic_g04.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1995]] /* goverNordic_g04.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2378]] /* goverNordic_g04.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1994]] /* goverNordic_g04.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2379]] /* goverNordic_g04.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* goverNordic_g04.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14624;
}
/*
equation index: 14625
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.feedback.y = goverNordic_g04.govOut.y - goverNordic_g04.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1997]] /* goverNordic_g04.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1995]] /* goverNordic_g04.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14625;
}
/*
equation index: 14626
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.gain.y = goverNordic_g04.limRateLimFirstOrder.gain.k * goverNordic_g04.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* goverNordic_g04.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1997]] /* goverNordic_g04.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14626;
}
/*
equation index: 14627
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g04.limRateLimFirstOrder.gain.y > goverNordic_g04.limRateLimFirstOrder.limiter.uMax then goverNordic_g04.limRateLimFirstOrder.limiter.uMax else if goverNordic_g04.limRateLimFirstOrder.gain.y < goverNordic_g04.limRateLimFirstOrder.limiter.uMin then goverNordic_g04.limRateLimFirstOrder.limiter.uMin else goverNordic_g04.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14627};
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  modelica_real tmp479;
  tmp476 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp478 = (modelica_boolean)tmp476;
  if(tmp478)
  {
    tmp479 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp477 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp479 = (tmp477?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */) = tmp479;
  threadData->lastEquationSolved = 14627;
}
/*
equation index: 14628
type: SIMPLE_ASSIGN
$DAEres97 = (if goverNordic_g04.limRateLimFirstOrder.limIntegrator.y < goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g04.limRateLimFirstOrder.limIntegrator.y > goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y) - der(goverNordic_g04.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14628};
  modelica_boolean tmp480;
  modelica_real tmp481;
  modelica_real tmp482;
  modelica_boolean tmp483;
  modelica_real tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  modelica_real tmp488;
  modelica_boolean tmp489;
  modelica_real tmp490;
  modelica_real tmp491;
  tmp481 = 1.0;
  tmp482 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp480, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp481, tmp482, 288, Less, LessZC);
  tmp484 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp485 = 0.0;
  relationhysteresis(data, &tmp483, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp484, tmp485, 289, Less, LessZC);
  tmp487 = 1.0;
  tmp488 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp486, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp487, tmp488, 290, Greater, GreaterZC);
  tmp490 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp491 = 0.0;
  relationhysteresis(data, &tmp489, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp490, tmp491, 291, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[97]) /* $DAEres97 DAE_RESIDUAL_VAR */ = (((tmp480 && tmp483) || (tmp486 && tmp489))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* der(goverNordic_g04.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14628;
}
/*
equation index: 14629
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.x[1] = vrNordic_g05.leadLag1.x_scaled[1] / vrNordic_g05.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3555]] /* vrNordic_g05.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */),"vrNordic_g05.leadLag1.a_end");
  threadData->lastEquationSolved = 14629;
}
/*
equation index: 14630
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.x[1] = vrNordic_g05.leadLag2.x_scaled[1] / vrNordic_g05.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3557]] /* vrNordic_g05.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */),"vrNordic_g05.leadLag2.a_end");
  threadData->lastEquationSolved = 14630;
}
/*
equation index: 14631
type: SIMPLE_ASSIGN
vrNordic_g05.greaterEqualThreshold.y = vrNordic_g05.timer.y >= vrNordic_g05.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14631};
  modelica_boolean tmp492;
  modelica_real tmp493;
  modelica_real tmp494;
  tmp493 = 1.0;
  tmp494 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp492, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */), tmp493, tmp494, 293, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1027]] /* vrNordic_g05.greaterEqualThreshold.y DISCRETE */) = tmp492;
  threadData->lastEquationSolved = 14631;
}
/*
equation index: 14632
type: SIMPLE_ASSIGN
vrNordic_g05.dOmega.y = g05.omegaPu - vrNordic_g05.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4447]] /* vrNordic_g05.const.k PARAM */);
  threadData->lastEquationSolved = 14632;
}
/*
equation index: 14633
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.y = if vrNordic_g05.derivative.zeroGain then 0.0 else vrNordic_g05.derivative.k / vrNordic_g05.derivative.T * (vrNordic_g05.dOmega.y - vrNordic_g05.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[905]] /* vrNordic_g05.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4451]] /* vrNordic_g05.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4450]] /* vrNordic_g05.derivative.T PARAM */),"vrNordic_g05.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* vrNordic_g05.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14633;
}
/*
equation index: 14634
type: SIMPLE_ASSIGN
$DAEres93 = vrNordic_g05.leadLag1.a_end * vrNordic_g05.derivative.y + (-vrNordic_g05.leadLag1.a[2]) * vrNordic_g05.leadLag1.x_scaled[1] - der(vrNordic_g05.leadLag1.x_scaled[1]) * vrNordic_g05.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14634};
  (data->simulationInfo->daeModeData->residualVars[93]) /* $DAEres93 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* der(vrNordic_g05.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4473]] /* vrNordic_g05.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14634;
}
/*
equation index: 14635
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.y = (vrNordic_g05.leadLag1.bb[2] - vrNordic_g05.leadLag1.d * vrNordic_g05.leadLag1.a[2]) * vrNordic_g05.leadLag1.x[1] + vrNordic_g05.leadLag1.d * vrNordic_g05.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4479]] /* vrNordic_g05.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4480]] /* vrNordic_g05.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3555]] /* vrNordic_g05.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4480]] /* vrNordic_g05.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */));
  threadData->lastEquationSolved = 14635;
}
/*
equation index: 14636
type: SIMPLE_ASSIGN
$DAEres94 = vrNordic_g05.leadLag2.a_end * vrNordic_g05.leadLag1.y + (-vrNordic_g05.leadLag2.a[2]) * vrNordic_g05.leadLag2.x_scaled[1] - der(vrNordic_g05.leadLag2.x_scaled[1]) * vrNordic_g05.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14636};
  (data->simulationInfo->daeModeData->residualVars[94]) /* $DAEres94 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* der(vrNordic_g05.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4486]] /* vrNordic_g05.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14636;
}
/*
equation index: 14637
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.y = (vrNordic_g05.leadLag2.bb[2] - vrNordic_g05.leadLag2.d * vrNordic_g05.leadLag2.a[2]) * vrNordic_g05.leadLag2.x[1] + vrNordic_g05.leadLag2.d * vrNordic_g05.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4492]] /* vrNordic_g05.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4493]] /* vrNordic_g05.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3557]] /* vrNordic_g05.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4493]] /* vrNordic_g05.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */));
  threadData->lastEquationSolved = 14637;
}
/*
equation index: 14638
type: SIMPLE_ASSIGN
vrNordic_g05.limiter.y = smooth(0, if vrNordic_g05.leadLag2.y > vrNordic_g05.limiter.uMax then vrNordic_g05.limiter.uMax else if vrNordic_g05.leadLag2.y < vrNordic_g05.limiter.uMin then vrNordic_g05.limiter.uMin else vrNordic_g05.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14638};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  modelica_real tmp498;
  tmp495 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */));
  tmp497 = (modelica_boolean)tmp495;
  if(tmp497)
  {
    tmp498 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */);
  }
  else
  {
    tmp496 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */));
    tmp498 = (tmp496?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3561]] /* vrNordic_g05.limiter.y variable */) = tmp498;
  threadData->lastEquationSolved = 14638;
}
/*
equation index: 14639
type: SIMPLE_ASSIGN
$DAEres95 = (if vrNordic_g05.derivative.zeroGain then 0.0 else (vrNordic_g05.dOmega.y - vrNordic_g05.derivative.x) / vrNordic_g05.derivative.T) - der(vrNordic_g05.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14639};
  (data->simulationInfo->daeModeData->residualVars[95]) /* $DAEres95 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[905]] /* vrNordic_g05.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* vrNordic_g05.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4450]] /* vrNordic_g05.derivative.T PARAM */),"vrNordic_g05.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* der(vrNordic_g05.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14639;
}
/*
equation index: 14640
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.x[1] = vrNordic_g05.leadLag.x_scaled[1] / vrNordic_g05.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */),"vrNordic_g05.leadLag.a_end");
  threadData->lastEquationSolved = 14640;
}
/*
equation index: 14641
type: SIMPLE_ASSIGN
goverNordic_g05.flowDivGateOpening.y = goverNordic_g05.waterFlow.y / goverNordic_g05.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2009]] /* goverNordic_g05.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g05.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14641;
}
/*
equation index: 14642
type: SIMPLE_ASSIGN
goverNordic_g05.headWater.y = goverNordic_g05.flowDivGateOpening.y ^ goverNordic_g05.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14642};
  modelica_real tmp499;
  modelica_real tmp500;
  modelica_real tmp501;
  modelica_real tmp502;
  modelica_real tmp503;
  modelica_real tmp504;
  modelica_real tmp505;
  tmp499 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2009]] /* goverNordic_g05.flowDivGateOpening.y variable */);
  tmp500 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* goverNordic_g05.headWater.N PARAM */);
  if(tmp499 < 0.0 && tmp500 != 0.0)
  {
    tmp502 = modf(tmp500, &tmp503);
    
    if(tmp502 > 0.5)
    {
      tmp502 -= 1.0;
      tmp503 += 1.0;
    }
    else if(tmp502 < -0.5)
    {
      tmp502 += 1.0;
      tmp503 -= 1.0;
    }
    
    if(fabs(tmp502) < 1e-10)
      tmp501 = pow(tmp499, tmp503);
    else
    {
      tmp505 = modf(1.0/tmp500, &tmp504);
      if(tmp505 > 0.5)
      {
        tmp505 -= 1.0;
        tmp504 += 1.0;
      }
      else if(tmp505 < -0.5)
      {
        tmp505 += 1.0;
        tmp504 -= 1.0;
      }
      if(fabs(tmp505) < 1e-10 && ((unsigned long)tmp504 & 1))
      {
        tmp501 = -pow(-tmp499, tmp502)*pow(tmp499, tmp503);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp499, tmp500);
      }
    }
  }
  else
  {
    tmp501 = pow(tmp499, tmp500);
  }
  if(isnan(tmp501) || isinf(tmp501))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp499, tmp500);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */) = tmp501;
  threadData->lastEquationSolved = 14642;
}
/*
equation index: 14643
type: SIMPLE_ASSIGN
g05.PmPu = goverNordic_g05.waterFlow.y * goverNordic_g05.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* g05.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */));
  threadData->lastEquationSolved = 14643;
}
/*
equation index: 14644
type: SIMPLE_ASSIGN
goverNordic_g05.dH.y = goverNordic_g05.const2.k - goverNordic_g05.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2005]] /* goverNordic_g05.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* goverNordic_g05.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */);
  threadData->lastEquationSolved = 14644;
}
/*
equation index: 14645
type: SIMPLE_ASSIGN
$DAEres92 = goverNordic_g05.waterFlow.k * goverNordic_g05.dH.y - der(goverNordic_g05.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14645};
  (data->simulationInfo->daeModeData->residualVars[92]) /* $DAEres92 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* goverNordic_g05.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2005]] /* goverNordic_g05.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* der(goverNordic_g05.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14645;
}
/*
equation index: 14646
type: SIMPLE_ASSIGN
goverNordic_g05.dOmega.y = goverNordic_g05.const1.k - g05.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2006]] /* goverNordic_g05.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* goverNordic_g05.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14646;
}
/*
equation index: 14647
type: SIMPLE_ASSIGN
goverNordic_g05.dP.y = goverNordic_g05.const.k - goverNordic_g05.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2008]] /* goverNordic_g05.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2402]] /* goverNordic_g05.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14647;
}
/*
equation index: 14648
type: SIMPLE_ASSIGN
goverNordic_g05.dOmegaPlusDroop.y = goverNordic_g05.dOmegaPlusDroop.k1 * goverNordic_g05.dOmega.y + goverNordic_g05.dOmegaPlusDroop.k2 * goverNordic_g05.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* goverNordic_g05.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2006]] /* goverNordic_g05.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2406]] /* goverNordic_g05.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2008]] /* goverNordic_g05.dP.y variable */));
  threadData->lastEquationSolved = 14648;
}
/*
equation index: 14649
type: SIMPLE_ASSIGN
goverNordic_g05.govKi.y = goverNordic_g05.govKi.k * goverNordic_g05.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2011]] /* goverNordic_g05.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* goverNordic_g05.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14649;
}
/*
equation index: 14650
type: SIMPLE_ASSIGN
$DAEres90 = goverNordic_g05.govInt.k * goverNordic_g05.govKi.y - der(goverNordic_g05.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14650};
  (data->simulationInfo->daeModeData->residualVars[90]) /* $DAEres90 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* goverNordic_g05.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2011]] /* goverNordic_g05.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* der(goverNordic_g05.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14650;
}
/*
equation index: 14651
type: SIMPLE_ASSIGN
goverNordic_g05.govKp.y = goverNordic_g05.govKp.k * goverNordic_g05.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2012]] /* goverNordic_g05.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2413]] /* goverNordic_g05.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2007]] /* goverNordic_g05.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14651;
}
/*
equation index: 14652
type: SIMPLE_ASSIGN
goverNordic_g05.govOut.y = goverNordic_g05.govOut.k1 * goverNordic_g05.govKp.y + goverNordic_g05.govOut.k2 * goverNordic_g05.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2013]] /* goverNordic_g05.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2414]] /* goverNordic_g05.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2012]] /* goverNordic_g05.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* goverNordic_g05.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* goverNordic_g05.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14652;
}
/*
equation index: 14653
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.feedback.y = goverNordic_g05.govOut.y - goverNordic_g05.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2015]] /* goverNordic_g05.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2013]] /* goverNordic_g05.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14653;
}
/*
equation index: 14654
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.gain.y = goverNordic_g05.limRateLimFirstOrder.gain.k * goverNordic_g05.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* goverNordic_g05.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2015]] /* goverNordic_g05.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14654;
}
/*
equation index: 14655
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g05.limRateLimFirstOrder.gain.y > goverNordic_g05.limRateLimFirstOrder.limiter.uMax then goverNordic_g05.limRateLimFirstOrder.limiter.uMax else if goverNordic_g05.limRateLimFirstOrder.gain.y < goverNordic_g05.limRateLimFirstOrder.limiter.uMin then goverNordic_g05.limRateLimFirstOrder.limiter.uMin else goverNordic_g05.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14655};
  modelica_boolean tmp506;
  modelica_boolean tmp507;
  modelica_boolean tmp508;
  modelica_real tmp509;
  tmp506 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp508 = (modelica_boolean)tmp506;
  if(tmp508)
  {
    tmp509 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp507 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp509 = (tmp507?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */) = tmp509;
  threadData->lastEquationSolved = 14655;
}
/*
equation index: 14656
type: SIMPLE_ASSIGN
$DAEres91 = (if goverNordic_g05.limRateLimFirstOrder.limIntegrator.y < goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g05.limRateLimFirstOrder.limIntegrator.y > goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y) - der(goverNordic_g05.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14656};
  modelica_boolean tmp510;
  modelica_real tmp511;
  modelica_real tmp512;
  modelica_boolean tmp513;
  modelica_real tmp514;
  modelica_real tmp515;
  modelica_boolean tmp516;
  modelica_real tmp517;
  modelica_real tmp518;
  modelica_boolean tmp519;
  modelica_real tmp520;
  modelica_real tmp521;
  tmp511 = 1.0;
  tmp512 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp510, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp511, tmp512, 304, Less, LessZC);
  tmp514 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp515 = 0.0;
  relationhysteresis(data, &tmp513, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp514, tmp515, 305, Less, LessZC);
  tmp517 = 1.0;
  tmp518 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp516, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp517, tmp518, 306, Greater, GreaterZC);
  tmp520 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp521 = 0.0;
  relationhysteresis(data, &tmp519, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp520, tmp521, 307, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[91]) /* $DAEres91 DAE_RESIDUAL_VAR */ = (((tmp510 && tmp513) || (tmp516 && tmp519))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* der(goverNordic_g05.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14656;
}
/*
equation index: 14657
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.x[1] = vrNordic_g06.leadLag1.x_scaled[1] / vrNordic_g06.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3579]] /* vrNordic_g06.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */),"vrNordic_g06.leadLag1.a_end");
  threadData->lastEquationSolved = 14657;
}
/*
equation index: 14658
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.x[1] = vrNordic_g06.leadLag2.x_scaled[1] / vrNordic_g06.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3581]] /* vrNordic_g06.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */),"vrNordic_g06.leadLag2.a_end");
  threadData->lastEquationSolved = 14658;
}
/*
equation index: 14659
type: SIMPLE_ASSIGN
vrNordic_g06.greaterEqualThreshold.y = vrNordic_g06.timer.y >= vrNordic_g06.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14659};
  modelica_boolean tmp522;
  modelica_real tmp523;
  modelica_real tmp524;
  tmp523 = 1.0;
  tmp524 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp522, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */), tmp523, tmp524, 309, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1030]] /* vrNordic_g06.greaterEqualThreshold.y DISCRETE */) = tmp522;
  threadData->lastEquationSolved = 14659;
}
/*
equation index: 14660
type: SIMPLE_ASSIGN
vrNordic_g06.dOmega.y = g06.omegaPu - vrNordic_g06.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4526]] /* vrNordic_g06.const.k PARAM */);
  threadData->lastEquationSolved = 14660;
}
/*
equation index: 14661
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.y = if vrNordic_g06.derivative.zeroGain then 0.0 else vrNordic_g06.derivative.k / vrNordic_g06.derivative.T * (vrNordic_g06.dOmega.y - vrNordic_g06.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[916]] /* vrNordic_g06.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4530]] /* vrNordic_g06.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4529]] /* vrNordic_g06.derivative.T PARAM */),"vrNordic_g06.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* vrNordic_g06.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14661;
}
/*
equation index: 14662
type: SIMPLE_ASSIGN
$DAEres87 = vrNordic_g06.leadLag1.a_end * vrNordic_g06.derivative.y + (-vrNordic_g06.leadLag1.a[2]) * vrNordic_g06.leadLag1.x_scaled[1] - der(vrNordic_g06.leadLag1.x_scaled[1]) * vrNordic_g06.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14662};
  (data->simulationInfo->daeModeData->residualVars[87]) /* $DAEres87 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* der(vrNordic_g06.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4552]] /* vrNordic_g06.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14662;
}
/*
equation index: 14663
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.y = (vrNordic_g06.leadLag1.bb[2] - vrNordic_g06.leadLag1.d * vrNordic_g06.leadLag1.a[2]) * vrNordic_g06.leadLag1.x[1] + vrNordic_g06.leadLag1.d * vrNordic_g06.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4558]] /* vrNordic_g06.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4559]] /* vrNordic_g06.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3579]] /* vrNordic_g06.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4559]] /* vrNordic_g06.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */));
  threadData->lastEquationSolved = 14663;
}
/*
equation index: 14664
type: SIMPLE_ASSIGN
$DAEres88 = vrNordic_g06.leadLag2.a_end * vrNordic_g06.leadLag1.y + (-vrNordic_g06.leadLag2.a[2]) * vrNordic_g06.leadLag2.x_scaled[1] - der(vrNordic_g06.leadLag2.x_scaled[1]) * vrNordic_g06.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14664};
  (data->simulationInfo->daeModeData->residualVars[88]) /* $DAEres88 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* der(vrNordic_g06.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4565]] /* vrNordic_g06.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14664;
}
/*
equation index: 14665
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.y = (vrNordic_g06.leadLag2.bb[2] - vrNordic_g06.leadLag2.d * vrNordic_g06.leadLag2.a[2]) * vrNordic_g06.leadLag2.x[1] + vrNordic_g06.leadLag2.d * vrNordic_g06.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4571]] /* vrNordic_g06.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4572]] /* vrNordic_g06.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3581]] /* vrNordic_g06.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4572]] /* vrNordic_g06.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */));
  threadData->lastEquationSolved = 14665;
}
/*
equation index: 14666
type: SIMPLE_ASSIGN
vrNordic_g06.limiter.y = smooth(0, if vrNordic_g06.leadLag2.y > vrNordic_g06.limiter.uMax then vrNordic_g06.limiter.uMax else if vrNordic_g06.leadLag2.y < vrNordic_g06.limiter.uMin then vrNordic_g06.limiter.uMin else vrNordic_g06.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14666};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  modelica_real tmp528;
  tmp525 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */));
  tmp527 = (modelica_boolean)tmp525;
  if(tmp527)
  {
    tmp528 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */);
  }
  else
  {
    tmp526 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */));
    tmp528 = (tmp526?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3585]] /* vrNordic_g06.limiter.y variable */) = tmp528;
  threadData->lastEquationSolved = 14666;
}
/*
equation index: 14667
type: SIMPLE_ASSIGN
$DAEres89 = (if vrNordic_g06.derivative.zeroGain then 0.0 else (vrNordic_g06.dOmega.y - vrNordic_g06.derivative.x) / vrNordic_g06.derivative.T) - der(vrNordic_g06.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14667};
  (data->simulationInfo->daeModeData->residualVars[89]) /* $DAEres89 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[916]] /* vrNordic_g06.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* vrNordic_g06.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4529]] /* vrNordic_g06.derivative.T PARAM */),"vrNordic_g06.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* der(vrNordic_g06.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14667;
}
/*
equation index: 14668
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.x[1] = vrNordic_g06.leadLag.x_scaled[1] / vrNordic_g06.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */),"vrNordic_g06.leadLag.a_end");
  threadData->lastEquationSolved = 14668;
}
/*
equation index: 14669
type: SIMPLE_ASSIGN
goverNordic_g06.flowDivGateOpening.y = goverNordic_g06.waterFlow.y / goverNordic_g06.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2027]] /* goverNordic_g06.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g06.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14669;
}
/*
equation index: 14670
type: SIMPLE_ASSIGN
goverNordic_g06.headWater.y = goverNordic_g06.flowDivGateOpening.y ^ goverNordic_g06.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14670};
  modelica_real tmp529;
  modelica_real tmp530;
  modelica_real tmp531;
  modelica_real tmp532;
  modelica_real tmp533;
  modelica_real tmp534;
  modelica_real tmp535;
  tmp529 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2027]] /* goverNordic_g06.flowDivGateOpening.y variable */);
  tmp530 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* goverNordic_g06.headWater.N PARAM */);
  if(tmp529 < 0.0 && tmp530 != 0.0)
  {
    tmp532 = modf(tmp530, &tmp533);
    
    if(tmp532 > 0.5)
    {
      tmp532 -= 1.0;
      tmp533 += 1.0;
    }
    else if(tmp532 < -0.5)
    {
      tmp532 += 1.0;
      tmp533 -= 1.0;
    }
    
    if(fabs(tmp532) < 1e-10)
      tmp531 = pow(tmp529, tmp533);
    else
    {
      tmp535 = modf(1.0/tmp530, &tmp534);
      if(tmp535 > 0.5)
      {
        tmp535 -= 1.0;
        tmp534 += 1.0;
      }
      else if(tmp535 < -0.5)
      {
        tmp535 += 1.0;
        tmp534 -= 1.0;
      }
      if(fabs(tmp535) < 1e-10 && ((unsigned long)tmp534 & 1))
      {
        tmp531 = -pow(-tmp529, tmp532)*pow(tmp529, tmp533);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp529, tmp530);
      }
    }
  }
  else
  {
    tmp531 = pow(tmp529, tmp530);
  }
  if(isnan(tmp531) || isinf(tmp531))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp529, tmp530);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */) = tmp531;
  threadData->lastEquationSolved = 14670;
}
/*
equation index: 14671
type: SIMPLE_ASSIGN
g06.PmPu = goverNordic_g06.waterFlow.y * goverNordic_g06.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* g06.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */));
  threadData->lastEquationSolved = 14671;
}
/*
equation index: 14672
type: SIMPLE_ASSIGN
goverNordic_g06.dH.y = goverNordic_g06.const2.k - goverNordic_g06.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2023]] /* goverNordic_g06.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2440]] /* goverNordic_g06.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */);
  threadData->lastEquationSolved = 14672;
}
/*
equation index: 14673
type: SIMPLE_ASSIGN
$DAEres86 = goverNordic_g06.waterFlow.k * goverNordic_g06.dH.y - der(goverNordic_g06.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14673};
  (data->simulationInfo->daeModeData->residualVars[86]) /* $DAEres86 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2467]] /* goverNordic_g06.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2023]] /* goverNordic_g06.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* der(goverNordic_g06.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14673;
}
/*
equation index: 14674
type: SIMPLE_ASSIGN
goverNordic_g06.dOmega.y = goverNordic_g06.const1.k - g06.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2024]] /* goverNordic_g06.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* goverNordic_g06.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14674;
}
/*
equation index: 14675
type: SIMPLE_ASSIGN
goverNordic_g06.dP.y = goverNordic_g06.const.k - goverNordic_g06.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2026]] /* goverNordic_g06.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* goverNordic_g06.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14675;
}
/*
equation index: 14676
type: SIMPLE_ASSIGN
goverNordic_g06.dOmegaPlusDroop.y = goverNordic_g06.dOmegaPlusDroop.k1 * goverNordic_g06.dOmega.y + goverNordic_g06.dOmegaPlusDroop.k2 * goverNordic_g06.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* goverNordic_g06.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2024]] /* goverNordic_g06.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2442]] /* goverNordic_g06.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2026]] /* goverNordic_g06.dP.y variable */));
  threadData->lastEquationSolved = 14676;
}
/*
equation index: 14677
type: SIMPLE_ASSIGN
goverNordic_g06.govKi.y = goverNordic_g06.govKi.k * goverNordic_g06.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2029]] /* goverNordic_g06.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2448]] /* goverNordic_g06.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14677;
}
/*
equation index: 14678
type: SIMPLE_ASSIGN
$DAEres84 = goverNordic_g06.govInt.k * goverNordic_g06.govKi.y - der(goverNordic_g06.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14678};
  (data->simulationInfo->daeModeData->residualVars[84]) /* $DAEres84 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2446]] /* goverNordic_g06.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2029]] /* goverNordic_g06.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* der(goverNordic_g06.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14678;
}
/*
equation index: 14679
type: SIMPLE_ASSIGN
goverNordic_g06.govKp.y = goverNordic_g06.govKp.k * goverNordic_g06.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2030]] /* goverNordic_g06.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* goverNordic_g06.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2025]] /* goverNordic_g06.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14679;
}
/*
equation index: 14680
type: SIMPLE_ASSIGN
goverNordic_g06.govOut.y = goverNordic_g06.govOut.k1 * goverNordic_g06.govKp.y + goverNordic_g06.govOut.k2 * goverNordic_g06.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2031]] /* goverNordic_g06.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2450]] /* goverNordic_g06.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2030]] /* goverNordic_g06.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2451]] /* goverNordic_g06.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* goverNordic_g06.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14680;
}
/*
equation index: 14681
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.feedback.y = goverNordic_g06.govOut.y - goverNordic_g06.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2033]] /* goverNordic_g06.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2031]] /* goverNordic_g06.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14681;
}
/*
equation index: 14682
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.gain.y = goverNordic_g06.limRateLimFirstOrder.gain.k * goverNordic_g06.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2458]] /* goverNordic_g06.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2033]] /* goverNordic_g06.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14682;
}
/*
equation index: 14683
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g06.limRateLimFirstOrder.gain.y > goverNordic_g06.limRateLimFirstOrder.limiter.uMax then goverNordic_g06.limRateLimFirstOrder.limiter.uMax else if goverNordic_g06.limRateLimFirstOrder.gain.y < goverNordic_g06.limRateLimFirstOrder.limiter.uMin then goverNordic_g06.limRateLimFirstOrder.limiter.uMin else goverNordic_g06.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14683};
  modelica_boolean tmp536;
  modelica_boolean tmp537;
  modelica_boolean tmp538;
  modelica_real tmp539;
  tmp536 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp538 = (modelica_boolean)tmp536;
  if(tmp538)
  {
    tmp539 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp537 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp539 = (tmp537?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */) = tmp539;
  threadData->lastEquationSolved = 14683;
}
/*
equation index: 14684
type: SIMPLE_ASSIGN
$DAEres85 = (if goverNordic_g06.limRateLimFirstOrder.limIntegrator.y < goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g06.limRateLimFirstOrder.limIntegrator.y > goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y) - der(goverNordic_g06.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14684};
  modelica_boolean tmp540;
  modelica_real tmp541;
  modelica_real tmp542;
  modelica_boolean tmp543;
  modelica_real tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  modelica_real tmp548;
  modelica_boolean tmp549;
  modelica_real tmp550;
  modelica_real tmp551;
  tmp541 = 1.0;
  tmp542 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp540, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp541, tmp542, 320, Less, LessZC);
  tmp544 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp545 = 0.0;
  relationhysteresis(data, &tmp543, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp544, tmp545, 321, Less, LessZC);
  tmp547 = 1.0;
  tmp548 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp546, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp547, tmp548, 322, Greater, GreaterZC);
  tmp550 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp551 = 0.0;
  relationhysteresis(data, &tmp549, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp550, tmp551, 323, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[85]) /* $DAEres85 DAE_RESIDUAL_VAR */ = (((tmp540 && tmp543) || (tmp546 && tmp549))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(goverNordic_g06.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14684;
}
/*
equation index: 14685
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.x[1] = vrNordic_g07.leadLag1.x_scaled[1] / vrNordic_g07.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3603]] /* vrNordic_g07.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */),"vrNordic_g07.leadLag1.a_end");
  threadData->lastEquationSolved = 14685;
}
/*
equation index: 14686
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.x[1] = vrNordic_g07.leadLag2.x_scaled[1] / vrNordic_g07.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3605]] /* vrNordic_g07.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */),"vrNordic_g07.leadLag2.a_end");
  threadData->lastEquationSolved = 14686;
}
/*
equation index: 14687
type: SIMPLE_ASSIGN
vrNordic_g07.greaterEqualThreshold.y = vrNordic_g07.timer.y >= vrNordic_g07.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14687};
  modelica_boolean tmp552;
  modelica_real tmp553;
  modelica_real tmp554;
  tmp553 = 1.0;
  tmp554 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp552, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */), tmp553, tmp554, 325, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1033]] /* vrNordic_g07.greaterEqualThreshold.y DISCRETE */) = tmp552;
  threadData->lastEquationSolved = 14687;
}
/*
equation index: 14688
type: SIMPLE_ASSIGN
vrNordic_g07.dOmega.y = g07.omegaPu - vrNordic_g07.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4605]] /* vrNordic_g07.const.k PARAM */);
  threadData->lastEquationSolved = 14688;
}
/*
equation index: 14689
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.y = if vrNordic_g07.derivative.zeroGain then 0.0 else vrNordic_g07.derivative.k / vrNordic_g07.derivative.T * (vrNordic_g07.dOmega.y - vrNordic_g07.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[927]] /* vrNordic_g07.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4609]] /* vrNordic_g07.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4608]] /* vrNordic_g07.derivative.T PARAM */),"vrNordic_g07.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* vrNordic_g07.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14689;
}
/*
equation index: 14690
type: SIMPLE_ASSIGN
$DAEres81 = vrNordic_g07.leadLag1.a_end * vrNordic_g07.derivative.y + (-vrNordic_g07.leadLag1.a[2]) * vrNordic_g07.leadLag1.x_scaled[1] - der(vrNordic_g07.leadLag1.x_scaled[1]) * vrNordic_g07.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14690};
  (data->simulationInfo->daeModeData->residualVars[81]) /* $DAEres81 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* der(vrNordic_g07.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4631]] /* vrNordic_g07.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14690;
}
/*
equation index: 14691
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.y = (vrNordic_g07.leadLag1.bb[2] - vrNordic_g07.leadLag1.d * vrNordic_g07.leadLag1.a[2]) * vrNordic_g07.leadLag1.x[1] + vrNordic_g07.leadLag1.d * vrNordic_g07.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4637]] /* vrNordic_g07.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4638]] /* vrNordic_g07.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3603]] /* vrNordic_g07.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4638]] /* vrNordic_g07.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */));
  threadData->lastEquationSolved = 14691;
}
/*
equation index: 14692
type: SIMPLE_ASSIGN
$DAEres82 = vrNordic_g07.leadLag2.a_end * vrNordic_g07.leadLag1.y + (-vrNordic_g07.leadLag2.a[2]) * vrNordic_g07.leadLag2.x_scaled[1] - der(vrNordic_g07.leadLag2.x_scaled[1]) * vrNordic_g07.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14692};
  (data->simulationInfo->daeModeData->residualVars[82]) /* $DAEres82 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* der(vrNordic_g07.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4644]] /* vrNordic_g07.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14692;
}
/*
equation index: 14693
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.y = (vrNordic_g07.leadLag2.bb[2] - vrNordic_g07.leadLag2.d * vrNordic_g07.leadLag2.a[2]) * vrNordic_g07.leadLag2.x[1] + vrNordic_g07.leadLag2.d * vrNordic_g07.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4650]] /* vrNordic_g07.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4651]] /* vrNordic_g07.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3605]] /* vrNordic_g07.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4651]] /* vrNordic_g07.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */));
  threadData->lastEquationSolved = 14693;
}
/*
equation index: 14694
type: SIMPLE_ASSIGN
vrNordic_g07.limiter.y = smooth(0, if vrNordic_g07.leadLag2.y > vrNordic_g07.limiter.uMax then vrNordic_g07.limiter.uMax else if vrNordic_g07.leadLag2.y < vrNordic_g07.limiter.uMin then vrNordic_g07.limiter.uMin else vrNordic_g07.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14694};
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  modelica_real tmp558;
  tmp555 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */));
  tmp557 = (modelica_boolean)tmp555;
  if(tmp557)
  {
    tmp558 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */);
  }
  else
  {
    tmp556 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */));
    tmp558 = (tmp556?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3609]] /* vrNordic_g07.limiter.y variable */) = tmp558;
  threadData->lastEquationSolved = 14694;
}
/*
equation index: 14695
type: SIMPLE_ASSIGN
$DAEres83 = (if vrNordic_g07.derivative.zeroGain then 0.0 else (vrNordic_g07.dOmega.y - vrNordic_g07.derivative.x) / vrNordic_g07.derivative.T) - der(vrNordic_g07.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14695};
  (data->simulationInfo->daeModeData->residualVars[83]) /* $DAEres83 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[927]] /* vrNordic_g07.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* vrNordic_g07.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4608]] /* vrNordic_g07.derivative.T PARAM */),"vrNordic_g07.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* der(vrNordic_g07.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14695;
}
/*
equation index: 14696
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.x[1] = vrNordic_g07.leadLag.x_scaled[1] / vrNordic_g07.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */),"vrNordic_g07.leadLag.a_end");
  threadData->lastEquationSolved = 14696;
}
/*
equation index: 14697
type: SIMPLE_ASSIGN
goverNordic_g07.flowDivGateOpening.y = goverNordic_g07.waterFlow.y / goverNordic_g07.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2045]] /* goverNordic_g07.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g07.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14697;
}
/*
equation index: 14698
type: SIMPLE_ASSIGN
goverNordic_g07.headWater.y = goverNordic_g07.flowDivGateOpening.y ^ goverNordic_g07.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14698};
  modelica_real tmp559;
  modelica_real tmp560;
  modelica_real tmp561;
  modelica_real tmp562;
  modelica_real tmp563;
  modelica_real tmp564;
  modelica_real tmp565;
  tmp559 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2045]] /* goverNordic_g07.flowDivGateOpening.y variable */);
  tmp560 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* goverNordic_g07.headWater.N PARAM */);
  if(tmp559 < 0.0 && tmp560 != 0.0)
  {
    tmp562 = modf(tmp560, &tmp563);
    
    if(tmp562 > 0.5)
    {
      tmp562 -= 1.0;
      tmp563 += 1.0;
    }
    else if(tmp562 < -0.5)
    {
      tmp562 += 1.0;
      tmp563 -= 1.0;
    }
    
    if(fabs(tmp562) < 1e-10)
      tmp561 = pow(tmp559, tmp563);
    else
    {
      tmp565 = modf(1.0/tmp560, &tmp564);
      if(tmp565 > 0.5)
      {
        tmp565 -= 1.0;
        tmp564 += 1.0;
      }
      else if(tmp565 < -0.5)
      {
        tmp565 += 1.0;
        tmp564 -= 1.0;
      }
      if(fabs(tmp565) < 1e-10 && ((unsigned long)tmp564 & 1))
      {
        tmp561 = -pow(-tmp559, tmp562)*pow(tmp559, tmp563);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp559, tmp560);
      }
    }
  }
  else
  {
    tmp561 = pow(tmp559, tmp560);
  }
  if(isnan(tmp561) || isinf(tmp561))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp559, tmp560);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */) = tmp561;
  threadData->lastEquationSolved = 14698;
}
/*
equation index: 14699
type: SIMPLE_ASSIGN
g07.PmPu = goverNordic_g07.waterFlow.y * goverNordic_g07.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* g07.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */));
  threadData->lastEquationSolved = 14699;
}
#if defined(__cplusplus)
}
#endif