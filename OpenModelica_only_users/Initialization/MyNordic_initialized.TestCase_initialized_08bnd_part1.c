#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 11264
type: SIMPLE_ASSIGN
trafo_2031_4031.ZPu.re = trafo_2031_4031.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3776]] /* trafo_2031_4031.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3771]] /* trafo_2031_4031.RPu PARAM */);
  threadData->lastEquationSolved = 11264;
}

/*
equation index: 11265
type: SIMPLE_ASSIGN
trafo_2031_4031.ZPu.im = trafo_2031_4031.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3775]] /* trafo_2031_4031.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3772]] /* trafo_2031_4031.XPu PARAM */);
  threadData->lastEquationSolved = 11265;
}

/*
equation index: 11266
type: SIMPLE_ASSIGN
trafo_2031_4031.YPu.re = trafo_2031_4031.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3774]] /* trafo_2031_4031.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3770]] /* trafo_2031_4031.GPu PARAM */);
  threadData->lastEquationSolved = 11266;
}

/*
equation index: 11267
type: SIMPLE_ASSIGN
trafo_2031_4031.YPu.im = trafo_2031_4031.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3773]] /* trafo_2031_4031.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3769]] /* trafo_2031_4031.BPu PARAM */);
  threadData->lastEquationSolved = 11267;
}

/*
equation index: 11269
type: SIMPLE_ASSIGN
trafo_g1_1012.Running0 = not (trafo_g1_1012.SwitchOffSignal10 or trafo_g1_1012.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11269};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[821]] /* trafo_g1_1012.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[822]] /* trafo_g1_1012.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[823]] /* trafo_g1_1012.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11269;
}

/*
equation index: 11270
type: SIMPLE_ASSIGN
trafo_g1_1012.ZPu.re = trafo_g1_1012.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4037]] /* trafo_g1_1012.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4032]] /* trafo_g1_1012.RPu PARAM */);
  threadData->lastEquationSolved = 11270;
}

/*
equation index: 11271
type: SIMPLE_ASSIGN
trafo_g1_1012.ZPu.im = trafo_g1_1012.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4036]] /* trafo_g1_1012.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4033]] /* trafo_g1_1012.XPu PARAM */);
  threadData->lastEquationSolved = 11271;
}

/*
equation index: 11272
type: SIMPLE_ASSIGN
trafo_g1_1012.YPu.re = trafo_g1_1012.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4035]] /* trafo_g1_1012.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4031]] /* trafo_g1_1012.GPu PARAM */);
  threadData->lastEquationSolved = 11272;
}

/*
equation index: 11273
type: SIMPLE_ASSIGN
trafo_g1_1012.YPu.im = trafo_g1_1012.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4034]] /* trafo_g1_1012.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4030]] /* trafo_g1_1012.BPu PARAM */);
  threadData->lastEquationSolved = 11273;
}

/*
equation index: 11275
type: SIMPLE_ASSIGN
trafo_g2_1013.Running0 = not (trafo_g2_1013.SwitchOffSignal10 or trafo_g2_1013.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11275};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[829]] /* trafo_g2_1013.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[830]] /* trafo_g2_1013.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[831]] /* trafo_g2_1013.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11275;
}

/*
equation index: 11276
type: SIMPLE_ASSIGN
trafo_g2_1013.ZPu.re = trafo_g2_1013.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4055]] /* trafo_g2_1013.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4050]] /* trafo_g2_1013.RPu PARAM */);
  threadData->lastEquationSolved = 11276;
}

/*
equation index: 11277
type: SIMPLE_ASSIGN
trafo_g2_1013.ZPu.im = trafo_g2_1013.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4054]] /* trafo_g2_1013.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4051]] /* trafo_g2_1013.XPu PARAM */);
  threadData->lastEquationSolved = 11277;
}

/*
equation index: 11278
type: SIMPLE_ASSIGN
trafo_g2_1013.YPu.re = trafo_g2_1013.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4053]] /* trafo_g2_1013.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4049]] /* trafo_g2_1013.GPu PARAM */);
  threadData->lastEquationSolved = 11278;
}

/*
equation index: 11279
type: SIMPLE_ASSIGN
trafo_g2_1013.YPu.im = trafo_g2_1013.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4052]] /* trafo_g2_1013.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4048]] /* trafo_g2_1013.BPu PARAM */);
  threadData->lastEquationSolved = 11279;
}

/*
equation index: 11281
type: SIMPLE_ASSIGN
trafo_g3_1014.Running0 = not (trafo_g3_1014.SwitchOffSignal10 or trafo_g3_1014.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11281};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[833]] /* trafo_g3_1014.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[834]] /* trafo_g3_1014.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[835]] /* trafo_g3_1014.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11281;
}

/*
equation index: 11282
type: SIMPLE_ASSIGN
trafo_g3_1014.ZPu.re = trafo_g3_1014.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4064]] /* trafo_g3_1014.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4059]] /* trafo_g3_1014.RPu PARAM */);
  threadData->lastEquationSolved = 11282;
}

/*
equation index: 11283
type: SIMPLE_ASSIGN
trafo_g3_1014.ZPu.im = trafo_g3_1014.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4063]] /* trafo_g3_1014.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4060]] /* trafo_g3_1014.XPu PARAM */);
  threadData->lastEquationSolved = 11283;
}

/*
equation index: 11284
type: SIMPLE_ASSIGN
trafo_g3_1014.YPu.re = trafo_g3_1014.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4062]] /* trafo_g3_1014.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4058]] /* trafo_g3_1014.GPu PARAM */);
  threadData->lastEquationSolved = 11284;
}

/*
equation index: 11285
type: SIMPLE_ASSIGN
trafo_g3_1014.YPu.im = trafo_g3_1014.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4061]] /* trafo_g3_1014.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4057]] /* trafo_g3_1014.BPu PARAM */);
  threadData->lastEquationSolved = 11285;
}

/*
equation index: 11287
type: SIMPLE_ASSIGN
trafo_g4_1021.Running0 = not (trafo_g4_1021.SwitchOffSignal10 or trafo_g4_1021.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11287};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[837]] /* trafo_g4_1021.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[838]] /* trafo_g4_1021.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[839]] /* trafo_g4_1021.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11287;
}

/*
equation index: 11288
type: SIMPLE_ASSIGN
trafo_g4_1021.ZPu.re = trafo_g4_1021.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4073]] /* trafo_g4_1021.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4068]] /* trafo_g4_1021.RPu PARAM */);
  threadData->lastEquationSolved = 11288;
}

/*
equation index: 11289
type: SIMPLE_ASSIGN
trafo_g4_1021.ZPu.im = trafo_g4_1021.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4072]] /* trafo_g4_1021.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4069]] /* trafo_g4_1021.XPu PARAM */);
  threadData->lastEquationSolved = 11289;
}

/*
equation index: 11290
type: SIMPLE_ASSIGN
trafo_g4_1021.YPu.re = trafo_g4_1021.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4071]] /* trafo_g4_1021.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4067]] /* trafo_g4_1021.GPu PARAM */);
  threadData->lastEquationSolved = 11290;
}

/*
equation index: 11291
type: SIMPLE_ASSIGN
trafo_g4_1021.YPu.im = trafo_g4_1021.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4070]] /* trafo_g4_1021.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4066]] /* trafo_g4_1021.BPu PARAM */);
  threadData->lastEquationSolved = 11291;
}

/*
equation index: 11293
type: SIMPLE_ASSIGN
trafo_g5_1022.Running0 = not (trafo_g5_1022.SwitchOffSignal10 or trafo_g5_1022.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11293};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[841]] /* trafo_g5_1022.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[842]] /* trafo_g5_1022.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[843]] /* trafo_g5_1022.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11293;
}

/*
equation index: 11294
type: SIMPLE_ASSIGN
trafo_g5_1022.ZPu.re = trafo_g5_1022.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4082]] /* trafo_g5_1022.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4077]] /* trafo_g5_1022.RPu PARAM */);
  threadData->lastEquationSolved = 11294;
}

/*
equation index: 11295
type: SIMPLE_ASSIGN
trafo_g5_1022.ZPu.im = trafo_g5_1022.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4081]] /* trafo_g5_1022.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4078]] /* trafo_g5_1022.XPu PARAM */);
  threadData->lastEquationSolved = 11295;
}

/*
equation index: 11296
type: SIMPLE_ASSIGN
trafo_g5_1022.YPu.re = trafo_g5_1022.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4080]] /* trafo_g5_1022.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4076]] /* trafo_g5_1022.GPu PARAM */);
  threadData->lastEquationSolved = 11296;
}

/*
equation index: 11297
type: SIMPLE_ASSIGN
trafo_g5_1022.YPu.im = trafo_g5_1022.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4079]] /* trafo_g5_1022.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4075]] /* trafo_g5_1022.BPu PARAM */);
  threadData->lastEquationSolved = 11297;
}

/*
equation index: 11299
type: SIMPLE_ASSIGN
trafo_g6_1042.Running0 = not (trafo_g6_1042.SwitchOffSignal10 or trafo_g6_1042.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11299};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[845]] /* trafo_g6_1042.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[846]] /* trafo_g6_1042.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[847]] /* trafo_g6_1042.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11299;
}

/*
equation index: 11300
type: SIMPLE_ASSIGN
trafo_g6_1042.ZPu.re = trafo_g6_1042.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4091]] /* trafo_g6_1042.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4086]] /* trafo_g6_1042.RPu PARAM */);
  threadData->lastEquationSolved = 11300;
}

/*
equation index: 11301
type: SIMPLE_ASSIGN
trafo_g6_1042.ZPu.im = trafo_g6_1042.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4090]] /* trafo_g6_1042.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4087]] /* trafo_g6_1042.XPu PARAM */);
  threadData->lastEquationSolved = 11301;
}

/*
equation index: 11302
type: SIMPLE_ASSIGN
trafo_g6_1042.YPu.re = trafo_g6_1042.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4089]] /* trafo_g6_1042.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4085]] /* trafo_g6_1042.GPu PARAM */);
  threadData->lastEquationSolved = 11302;
}

/*
equation index: 11303
type: SIMPLE_ASSIGN
trafo_g6_1042.YPu.im = trafo_g6_1042.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4088]] /* trafo_g6_1042.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4084]] /* trafo_g6_1042.BPu PARAM */);
  threadData->lastEquationSolved = 11303;
}

/*
equation index: 11305
type: SIMPLE_ASSIGN
trafo_g7_1043.Running0 = not (trafo_g7_1043.SwitchOffSignal10 or trafo_g7_1043.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11305};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[849]] /* trafo_g7_1043.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[850]] /* trafo_g7_1043.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[851]] /* trafo_g7_1043.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11305;
}

/*
equation index: 11306
type: SIMPLE_ASSIGN
trafo_g7_1043.ZPu.re = trafo_g7_1043.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4100]] /* trafo_g7_1043.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4095]] /* trafo_g7_1043.RPu PARAM */);
  threadData->lastEquationSolved = 11306;
}

/*
equation index: 11307
type: SIMPLE_ASSIGN
trafo_g7_1043.ZPu.im = trafo_g7_1043.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4099]] /* trafo_g7_1043.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4096]] /* trafo_g7_1043.XPu PARAM */);
  threadData->lastEquationSolved = 11307;
}

/*
equation index: 11308
type: SIMPLE_ASSIGN
trafo_g7_1043.YPu.re = trafo_g7_1043.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4098]] /* trafo_g7_1043.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4094]] /* trafo_g7_1043.GPu PARAM */);
  threadData->lastEquationSolved = 11308;
}

/*
equation index: 11309
type: SIMPLE_ASSIGN
trafo_g7_1043.YPu.im = trafo_g7_1043.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4097]] /* trafo_g7_1043.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4093]] /* trafo_g7_1043.BPu PARAM */);
  threadData->lastEquationSolved = 11309;
}

/*
equation index: 11311
type: SIMPLE_ASSIGN
trafo_g8_2032.Running0 = not (trafo_g8_2032.SwitchOffSignal10 or trafo_g8_2032.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11311};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[853]] /* trafo_g8_2032.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[854]] /* trafo_g8_2032.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[855]] /* trafo_g8_2032.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11311;
}

/*
equation index: 11312
type: SIMPLE_ASSIGN
trafo_g8_2032.ZPu.re = trafo_g8_2032.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11312};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4109]] /* trafo_g8_2032.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4104]] /* trafo_g8_2032.RPu PARAM */);
  threadData->lastEquationSolved = 11312;
}

/*
equation index: 11313
type: SIMPLE_ASSIGN
trafo_g8_2032.ZPu.im = trafo_g8_2032.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4108]] /* trafo_g8_2032.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4105]] /* trafo_g8_2032.XPu PARAM */);
  threadData->lastEquationSolved = 11313;
}

/*
equation index: 11314
type: SIMPLE_ASSIGN
trafo_g8_2032.YPu.re = trafo_g8_2032.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4107]] /* trafo_g8_2032.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4103]] /* trafo_g8_2032.GPu PARAM */);
  threadData->lastEquationSolved = 11314;
}

/*
equation index: 11315
type: SIMPLE_ASSIGN
trafo_g8_2032.YPu.im = trafo_g8_2032.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4106]] /* trafo_g8_2032.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4102]] /* trafo_g8_2032.BPu PARAM */);
  threadData->lastEquationSolved = 11315;
}

/*
equation index: 11317
type: SIMPLE_ASSIGN
trafo_g9_4011.Running0 = not (trafo_g9_4011.SwitchOffSignal10 or trafo_g9_4011.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11317};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[857]] /* trafo_g9_4011.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[858]] /* trafo_g9_4011.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[859]] /* trafo_g9_4011.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11317;
}

/*
equation index: 11318
type: SIMPLE_ASSIGN
trafo_g9_4011.ZPu.re = trafo_g9_4011.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4118]] /* trafo_g9_4011.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4113]] /* trafo_g9_4011.RPu PARAM */);
  threadData->lastEquationSolved = 11318;
}

/*
equation index: 11319
type: SIMPLE_ASSIGN
trafo_g9_4011.ZPu.im = trafo_g9_4011.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4117]] /* trafo_g9_4011.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4114]] /* trafo_g9_4011.XPu PARAM */);
  threadData->lastEquationSolved = 11319;
}

/*
equation index: 11320
type: SIMPLE_ASSIGN
trafo_g9_4011.YPu.re = trafo_g9_4011.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4116]] /* trafo_g9_4011.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4112]] /* trafo_g9_4011.GPu PARAM */);
  threadData->lastEquationSolved = 11320;
}

/*
equation index: 11321
type: SIMPLE_ASSIGN
trafo_g9_4011.YPu.im = trafo_g9_4011.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4115]] /* trafo_g9_4011.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4111]] /* trafo_g9_4011.BPu PARAM */);
  threadData->lastEquationSolved = 11321;
}

/*
equation index: 11323
type: SIMPLE_ASSIGN
trafo_g10_4012.Running0 = not (trafo_g10_4012.SwitchOffSignal10 or trafo_g10_4012.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11323};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[781]] /* trafo_g10_4012.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[782]] /* trafo_g10_4012.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[783]] /* trafo_g10_4012.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11323;
}

/*
equation index: 11324
type: SIMPLE_ASSIGN
trafo_g10_4012.ZPu.re = trafo_g10_4012.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3947]] /* trafo_g10_4012.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3942]] /* trafo_g10_4012.RPu PARAM */);
  threadData->lastEquationSolved = 11324;
}

/*
equation index: 11325
type: SIMPLE_ASSIGN
trafo_g10_4012.ZPu.im = trafo_g10_4012.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3946]] /* trafo_g10_4012.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3943]] /* trafo_g10_4012.XPu PARAM */);
  threadData->lastEquationSolved = 11325;
}

/*
equation index: 11326
type: SIMPLE_ASSIGN
trafo_g10_4012.YPu.re = trafo_g10_4012.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3945]] /* trafo_g10_4012.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3941]] /* trafo_g10_4012.GPu PARAM */);
  threadData->lastEquationSolved = 11326;
}

/*
equation index: 11327
type: SIMPLE_ASSIGN
trafo_g10_4012.YPu.im = trafo_g10_4012.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3944]] /* trafo_g10_4012.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3940]] /* trafo_g10_4012.BPu PARAM */);
  threadData->lastEquationSolved = 11327;
}

/*
equation index: 11329
type: SIMPLE_ASSIGN
trafo_g11_4021.Running0 = not (trafo_g11_4021.SwitchOffSignal10 or trafo_g11_4021.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11329};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[785]] /* trafo_g11_4021.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[786]] /* trafo_g11_4021.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[787]] /* trafo_g11_4021.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11329;
}

/*
equation index: 11330
type: SIMPLE_ASSIGN
trafo_g11_4021.ZPu.re = trafo_g11_4021.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3956]] /* trafo_g11_4021.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3951]] /* trafo_g11_4021.RPu PARAM */);
  threadData->lastEquationSolved = 11330;
}

/*
equation index: 11331
type: SIMPLE_ASSIGN
trafo_g11_4021.ZPu.im = trafo_g11_4021.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3955]] /* trafo_g11_4021.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3952]] /* trafo_g11_4021.XPu PARAM */);
  threadData->lastEquationSolved = 11331;
}

/*
equation index: 11332
type: SIMPLE_ASSIGN
trafo_g11_4021.YPu.re = trafo_g11_4021.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3954]] /* trafo_g11_4021.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3950]] /* trafo_g11_4021.GPu PARAM */);
  threadData->lastEquationSolved = 11332;
}

/*
equation index: 11333
type: SIMPLE_ASSIGN
trafo_g11_4021.YPu.im = trafo_g11_4021.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3953]] /* trafo_g11_4021.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3949]] /* trafo_g11_4021.BPu PARAM */);
  threadData->lastEquationSolved = 11333;
}

/*
equation index: 11335
type: SIMPLE_ASSIGN
trafo_g12_4031.Running0 = not (trafo_g12_4031.SwitchOffSignal10 or trafo_g12_4031.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11335};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[789]] /* trafo_g12_4031.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[790]] /* trafo_g12_4031.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[791]] /* trafo_g12_4031.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11335;
}

/*
equation index: 11336
type: SIMPLE_ASSIGN
trafo_g12_4031.ZPu.re = trafo_g12_4031.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3965]] /* trafo_g12_4031.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3960]] /* trafo_g12_4031.RPu PARAM */);
  threadData->lastEquationSolved = 11336;
}

/*
equation index: 11337
type: SIMPLE_ASSIGN
trafo_g12_4031.ZPu.im = trafo_g12_4031.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3964]] /* trafo_g12_4031.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3961]] /* trafo_g12_4031.XPu PARAM */);
  threadData->lastEquationSolved = 11337;
}

/*
equation index: 11338
type: SIMPLE_ASSIGN
trafo_g12_4031.YPu.re = trafo_g12_4031.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3963]] /* trafo_g12_4031.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3959]] /* trafo_g12_4031.GPu PARAM */);
  threadData->lastEquationSolved = 11338;
}

/*
equation index: 11339
type: SIMPLE_ASSIGN
trafo_g12_4031.YPu.im = trafo_g12_4031.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3962]] /* trafo_g12_4031.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3958]] /* trafo_g12_4031.BPu PARAM */);
  threadData->lastEquationSolved = 11339;
}

/*
equation index: 11341
type: SIMPLE_ASSIGN
trafo_g13_4041.Running0 = not (trafo_g13_4041.SwitchOffSignal10 or trafo_g13_4041.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11341};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[793]] /* trafo_g13_4041.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[794]] /* trafo_g13_4041.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[795]] /* trafo_g13_4041.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11341;
}

/*
equation index: 11342
type: SIMPLE_ASSIGN
trafo_g13_4041.ZPu.re = trafo_g13_4041.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3974]] /* trafo_g13_4041.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3969]] /* trafo_g13_4041.RPu PARAM */);
  threadData->lastEquationSolved = 11342;
}

/*
equation index: 11343
type: SIMPLE_ASSIGN
trafo_g13_4041.ZPu.im = trafo_g13_4041.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3973]] /* trafo_g13_4041.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3970]] /* trafo_g13_4041.XPu PARAM */);
  threadData->lastEquationSolved = 11343;
}

/*
equation index: 11344
type: SIMPLE_ASSIGN
trafo_g13_4041.YPu.re = trafo_g13_4041.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3972]] /* trafo_g13_4041.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3968]] /* trafo_g13_4041.GPu PARAM */);
  threadData->lastEquationSolved = 11344;
}

/*
equation index: 11345
type: SIMPLE_ASSIGN
trafo_g13_4041.YPu.im = trafo_g13_4041.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3971]] /* trafo_g13_4041.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3967]] /* trafo_g13_4041.BPu PARAM */);
  threadData->lastEquationSolved = 11345;
}

/*
equation index: 11347
type: SIMPLE_ASSIGN
trafo_g14_4042.Running0 = not (trafo_g14_4042.SwitchOffSignal10 or trafo_g14_4042.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11347};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[797]] /* trafo_g14_4042.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[798]] /* trafo_g14_4042.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* trafo_g14_4042.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11347;
}

/*
equation index: 11348
type: SIMPLE_ASSIGN
trafo_g14_4042.ZPu.re = trafo_g14_4042.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3983]] /* trafo_g14_4042.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3978]] /* trafo_g14_4042.RPu PARAM */);
  threadData->lastEquationSolved = 11348;
}

/*
equation index: 11349
type: SIMPLE_ASSIGN
trafo_g14_4042.ZPu.im = trafo_g14_4042.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3982]] /* trafo_g14_4042.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3979]] /* trafo_g14_4042.XPu PARAM */);
  threadData->lastEquationSolved = 11349;
}

/*
equation index: 11350
type: SIMPLE_ASSIGN
trafo_g14_4042.YPu.re = trafo_g14_4042.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3981]] /* trafo_g14_4042.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3977]] /* trafo_g14_4042.GPu PARAM */);
  threadData->lastEquationSolved = 11350;
}

/*
equation index: 11351
type: SIMPLE_ASSIGN
trafo_g14_4042.YPu.im = trafo_g14_4042.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3980]] /* trafo_g14_4042.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3976]] /* trafo_g14_4042.BPu PARAM */);
  threadData->lastEquationSolved = 11351;
}

/*
equation index: 11353
type: SIMPLE_ASSIGN
trafo_g15_4047.Running0 = not (trafo_g15_4047.SwitchOffSignal10 or trafo_g15_4047.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11353};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[801]] /* trafo_g15_4047.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[802]] /* trafo_g15_4047.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[803]] /* trafo_g15_4047.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11353;
}

/*
equation index: 11354
type: SIMPLE_ASSIGN
trafo_g15_4047.ZPu.re = trafo_g15_4047.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3992]] /* trafo_g15_4047.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3987]] /* trafo_g15_4047.RPu PARAM */);
  threadData->lastEquationSolved = 11354;
}

/*
equation index: 11355
type: SIMPLE_ASSIGN
trafo_g15_4047.ZPu.im = trafo_g15_4047.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3991]] /* trafo_g15_4047.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3988]] /* trafo_g15_4047.XPu PARAM */);
  threadData->lastEquationSolved = 11355;
}

/*
equation index: 11356
type: SIMPLE_ASSIGN
trafo_g15_4047.YPu.re = trafo_g15_4047.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3990]] /* trafo_g15_4047.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3986]] /* trafo_g15_4047.GPu PARAM */);
  threadData->lastEquationSolved = 11356;
}

/*
equation index: 11357
type: SIMPLE_ASSIGN
trafo_g15_4047.YPu.im = trafo_g15_4047.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3989]] /* trafo_g15_4047.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3985]] /* trafo_g15_4047.BPu PARAM */);
  threadData->lastEquationSolved = 11357;
}

/*
equation index: 11359
type: SIMPLE_ASSIGN
trafo_g16_4051.Running0 = not (trafo_g16_4051.SwitchOffSignal10 or trafo_g16_4051.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11359};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[805]] /* trafo_g16_4051.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[806]] /* trafo_g16_4051.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[807]] /* trafo_g16_4051.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11359;
}

/*
equation index: 11360
type: SIMPLE_ASSIGN
trafo_g16_4051.ZPu.re = trafo_g16_4051.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4001]] /* trafo_g16_4051.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3996]] /* trafo_g16_4051.RPu PARAM */);
  threadData->lastEquationSolved = 11360;
}

/*
equation index: 11361
type: SIMPLE_ASSIGN
trafo_g16_4051.ZPu.im = trafo_g16_4051.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4000]] /* trafo_g16_4051.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3997]] /* trafo_g16_4051.XPu PARAM */);
  threadData->lastEquationSolved = 11361;
}

/*
equation index: 11362
type: SIMPLE_ASSIGN
trafo_g16_4051.YPu.re = trafo_g16_4051.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3999]] /* trafo_g16_4051.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3995]] /* trafo_g16_4051.GPu PARAM */);
  threadData->lastEquationSolved = 11362;
}

/*
equation index: 11363
type: SIMPLE_ASSIGN
trafo_g16_4051.YPu.im = trafo_g16_4051.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3998]] /* trafo_g16_4051.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3994]] /* trafo_g16_4051.BPu PARAM */);
  threadData->lastEquationSolved = 11363;
}

/*
equation index: 11365
type: SIMPLE_ASSIGN
trafo_g17_4062.Running0 = not (trafo_g17_4062.SwitchOffSignal10 or trafo_g17_4062.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11365};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[809]] /* trafo_g17_4062.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[810]] /* trafo_g17_4062.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[811]] /* trafo_g17_4062.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11365;
}

/*
equation index: 11366
type: SIMPLE_ASSIGN
trafo_g17_4062.ZPu.re = trafo_g17_4062.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4010]] /* trafo_g17_4062.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4005]] /* trafo_g17_4062.RPu PARAM */);
  threadData->lastEquationSolved = 11366;
}

/*
equation index: 11367
type: SIMPLE_ASSIGN
trafo_g17_4062.ZPu.im = trafo_g17_4062.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4009]] /* trafo_g17_4062.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4006]] /* trafo_g17_4062.XPu PARAM */);
  threadData->lastEquationSolved = 11367;
}

/*
equation index: 11368
type: SIMPLE_ASSIGN
trafo_g17_4062.YPu.re = trafo_g17_4062.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4008]] /* trafo_g17_4062.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4004]] /* trafo_g17_4062.GPu PARAM */);
  threadData->lastEquationSolved = 11368;
}

/*
equation index: 11369
type: SIMPLE_ASSIGN
trafo_g17_4062.YPu.im = trafo_g17_4062.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4007]] /* trafo_g17_4062.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4003]] /* trafo_g17_4062.BPu PARAM */);
  threadData->lastEquationSolved = 11369;
}

/*
equation index: 11371
type: SIMPLE_ASSIGN
trafo_g18_4063.Running0 = not (trafo_g18_4063.SwitchOffSignal10 or trafo_g18_4063.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11371};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[813]] /* trafo_g18_4063.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[814]] /* trafo_g18_4063.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[815]] /* trafo_g18_4063.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11371;
}

/*
equation index: 11372
type: SIMPLE_ASSIGN
trafo_g18_4063.ZPu.re = trafo_g18_4063.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4019]] /* trafo_g18_4063.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4014]] /* trafo_g18_4063.RPu PARAM */);
  threadData->lastEquationSolved = 11372;
}

/*
equation index: 11373
type: SIMPLE_ASSIGN
trafo_g18_4063.ZPu.im = trafo_g18_4063.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4018]] /* trafo_g18_4063.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4015]] /* trafo_g18_4063.XPu PARAM */);
  threadData->lastEquationSolved = 11373;
}

/*
equation index: 11374
type: SIMPLE_ASSIGN
trafo_g18_4063.YPu.re = trafo_g18_4063.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4017]] /* trafo_g18_4063.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4013]] /* trafo_g18_4063.GPu PARAM */);
  threadData->lastEquationSolved = 11374;
}

/*
equation index: 11375
type: SIMPLE_ASSIGN
trafo_g18_4063.YPu.im = trafo_g18_4063.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4016]] /* trafo_g18_4063.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4012]] /* trafo_g18_4063.BPu PARAM */);
  threadData->lastEquationSolved = 11375;
}

/*
equation index: 11377
type: SIMPLE_ASSIGN
trafo_g19_4071.Running0 = not (trafo_g19_4071.SwitchOffSignal10 or trafo_g19_4071.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11377};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[817]] /* trafo_g19_4071.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[818]] /* trafo_g19_4071.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[819]] /* trafo_g19_4071.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11377;
}

/*
equation index: 11378
type: SIMPLE_ASSIGN
trafo_g19_4071.ZPu.re = trafo_g19_4071.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4028]] /* trafo_g19_4071.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4023]] /* trafo_g19_4071.RPu PARAM */);
  threadData->lastEquationSolved = 11378;
}

/*
equation index: 11379
type: SIMPLE_ASSIGN
trafo_g19_4071.ZPu.im = trafo_g19_4071.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4027]] /* trafo_g19_4071.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4024]] /* trafo_g19_4071.XPu PARAM */);
  threadData->lastEquationSolved = 11379;
}

/*
equation index: 11380
type: SIMPLE_ASSIGN
trafo_g19_4071.YPu.re = trafo_g19_4071.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4026]] /* trafo_g19_4071.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4022]] /* trafo_g19_4071.GPu PARAM */);
  threadData->lastEquationSolved = 11380;
}

/*
equation index: 11381
type: SIMPLE_ASSIGN
trafo_g19_4071.YPu.im = trafo_g19_4071.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4025]] /* trafo_g19_4071.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4021]] /* trafo_g19_4071.BPu PARAM */);
  threadData->lastEquationSolved = 11381;
}

/*
equation index: 11383
type: SIMPLE_ASSIGN
trafo_g20_4072.Running0 = not (trafo_g20_4072.SwitchOffSignal10 or trafo_g20_4072.SwitchOffSignal20)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11383};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[825]] /* trafo_g20_4072.Running0 PARAM */) = (!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[826]] /* trafo_g20_4072.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[827]] /* trafo_g20_4072.SwitchOffSignal20 PARAM */)));
  threadData->lastEquationSolved = 11383;
}

/*
equation index: 11384
type: SIMPLE_ASSIGN
trafo_g20_4072.ZPu.re = trafo_g20_4072.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4046]] /* trafo_g20_4072.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4041]] /* trafo_g20_4072.RPu PARAM */);
  threadData->lastEquationSolved = 11384;
}

/*
equation index: 11385
type: SIMPLE_ASSIGN
trafo_g20_4072.ZPu.im = trafo_g20_4072.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4045]] /* trafo_g20_4072.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4042]] /* trafo_g20_4072.XPu PARAM */);
  threadData->lastEquationSolved = 11385;
}

/*
equation index: 11386
type: SIMPLE_ASSIGN
trafo_g20_4072.YPu.re = trafo_g20_4072.GPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4044]] /* trafo_g20_4072.YPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4040]] /* trafo_g20_4072.GPu PARAM */);
  threadData->lastEquationSolved = 11386;
}

/*
equation index: 11387
type: SIMPLE_ASSIGN
trafo_g20_4072.YPu.im = trafo_g20_4072.BPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4043]] /* trafo_g20_4072.YPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4039]] /* trafo_g20_4072.BPu PARAM */);
  threadData->lastEquationSolved = 11387;
}

/*
equation index: 11388
type: SIMPLE_ASSIGN
g01.QNomAlt = sqrt(g01.SNom ^ 2.0 - g01.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11388};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */);
  tmp1 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* g01.PNomAlt PARAM */);
  tmp2 = (tmp0 * tmp0) - ((tmp1 * tmp1));
  if(!(tmp2 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g01.SNom ^ 2.0 - g01.PNomAlt ^ 2.0) was %g should be >= 0", tmp2);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* g01.QNomAlt PARAM */) = sqrt(tmp2);
  threadData->lastEquationSolved = 11388;
}

/*
equation index: 11389
type: SIMPLE_ASSIGN
g01.RTfoPu = g01.RTfPu * (g01.UNomHV / g01.UBaseHV) ^ 2.0 * g01.SNom / g01.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11389};
  modelica_real tmp3;
  tmp3 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* g01.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* g01.UBaseHV PARAM */),"g01.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* g01.RTfPu PARAM */)) * (((tmp3 * tmp3)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* g01.SnTfo PARAM */),"g01.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11389;
}

/*
equation index: 11390
type: SIMPLE_ASSIGN
g01.XTfoPu = g01.XTfPu * (g01.UNomHV / g01.UBaseHV) ^ 2.0 * g01.SNom / g01.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11390};
  modelica_real tmp4;
  tmp4 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* g01.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* g01.UBaseHV PARAM */),"g01.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* g01.XTfPu PARAM */)) * (((tmp4 * tmp4)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* g01.SnTfo PARAM */),"g01.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11390;
}

/*
equation index: 11391
type: SIMPLE_ASSIGN
g01.rTfoPu = if g01.RTfPu > 0.0 or g01.XTfPu > 0.0 then g01.UNomHV / g01.UBaseHV * g01.UBaseLV / g01.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11391};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  tmp5 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* g01.RTfPu PARAM */),0.0);
  tmp6 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* g01.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */) = ((tmp5 || tmp6)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* g01.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* g01.UBaseHV PARAM */),"g01.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[281]] /* g01.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* g01.UNomLV PARAM */),"g01.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11391;
}

/*
equation index: 11393
type: SIMPLE_ASSIGN
g01.Running0 = not (g01.SwitchOffSignal10 or g01.SwitchOffSignal20 or g01.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11393};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1]] /* g01.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[2]] /* g01.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[3]] /* g01.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* g01.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11393;
}

/*
equation index: 11394
type: SIMPLE_ASSIGN
g01.Kuf = if g01.ExcitationPu == g01.ExcitationPuType.Kundur then 1.0 else if g01.ExcitationPu == g01.ExcitationPuType.UserBase then g01.RfPPu / g01.MdPPuEfd else if g01.ExcitationPu == g01.ExcitationPuType.NoLoad then g01.RfPPu / g01.MdPPu else if g01.ExcitationPu == g01.ExcitationPuType.NoLoadSaturated then g01.RfPPu * (1.0 + g01.md) / g01.MdPPu else g01.RfPPu / g01.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* g01.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* g01.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* g01.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* g01.MdPPuEfd PARAM */),"g01.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* g01.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* g01.MdPPu PARAM */),"g01.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* g01.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* g01.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* g01.MdPPu PARAM */),"g01.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* g01.MdPPuEfdNom PARAM */),"g01.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11394;
}

/*
equation index: 11395
type: SIMPLE_ASSIGN
g02.QNomAlt = sqrt(g02.SNom ^ 2.0 - g02.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11395};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  tmp7 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */);
  tmp8 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* g02.PNomAlt PARAM */);
  tmp9 = (tmp7 * tmp7) - ((tmp8 * tmp8));
  if(!(tmp9 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g02.SNom ^ 2.0 - g02.PNomAlt ^ 2.0) was %g should be >= 0", tmp9);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* g02.QNomAlt PARAM */) = sqrt(tmp9);
  threadData->lastEquationSolved = 11395;
}

/*
equation index: 11396
type: SIMPLE_ASSIGN
g02.RTfoPu = g02.RTfPu * (g02.UNomHV / g02.UBaseHV) ^ 2.0 * g02.SNom / g02.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11396};
  modelica_real tmp10;
  tmp10 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* g02.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* g02.UBaseHV PARAM */),"g02.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* g02.RTfPu PARAM */)) * (((tmp10 * tmp10)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* g02.SnTfo PARAM */),"g02.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11396;
}

/*
equation index: 11397
type: SIMPLE_ASSIGN
g02.XTfoPu = g02.XTfPu * (g02.UNomHV / g02.UBaseHV) ^ 2.0 * g02.SNom / g02.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11397};
  modelica_real tmp11;
  tmp11 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* g02.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* g02.UBaseHV PARAM */),"g02.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* g02.XTfPu PARAM */)) * (((tmp11 * tmp11)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* g02.SnTfo PARAM */),"g02.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11397;
}

/*
equation index: 11398
type: SIMPLE_ASSIGN
g02.rTfoPu = if g02.RTfPu > 0.0 or g02.XTfPu > 0.0 then g02.UNomHV / g02.UBaseHV * g02.UBaseLV / g02.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11398};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* g02.RTfPu PARAM */),0.0);
  tmp13 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* g02.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */) = ((tmp12 || tmp13)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* g02.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* g02.UBaseHV PARAM */),"g02.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* g02.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* g02.UNomLV PARAM */),"g02.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11398;
}

/*
equation index: 11400
type: SIMPLE_ASSIGN
g02.Running0 = not (g02.SwitchOffSignal10 or g02.SwitchOffSignal20 or g02.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11400};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[6]] /* g02.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[7]] /* g02.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[8]] /* g02.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[9]] /* g02.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11400;
}

/*
equation index: 11401
type: SIMPLE_ASSIGN
g02.Kuf = if g02.ExcitationPu == g02.ExcitationPuType.Kundur then 1.0 else if g02.ExcitationPu == g02.ExcitationPuType.UserBase then g02.RfPPu / g02.MdPPuEfd else if g02.ExcitationPu == g02.ExcitationPuType.NoLoad then g02.RfPPu / g02.MdPPu else if g02.ExcitationPu == g02.ExcitationPuType.NoLoadSaturated then g02.RfPPu * (1.0 + g02.md) / g02.MdPPu else g02.RfPPu / g02.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* g02.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* g02.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* g02.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* g02.MdPPuEfd PARAM */),"g02.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* g02.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* g02.MdPPu PARAM */),"g02.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* g02.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* g02.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* g02.MdPPu PARAM */),"g02.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* g02.MdPPuEfdNom PARAM */),"g02.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11401;
}

/*
equation index: 11402
type: SIMPLE_ASSIGN
g03.QNomAlt = sqrt(g03.SNom ^ 2.0 - g03.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11402};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  tmp14 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */);
  tmp15 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* g03.PNomAlt PARAM */);
  tmp16 = (tmp14 * tmp14) - ((tmp15 * tmp15));
  if(!(tmp16 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g03.SNom ^ 2.0 - g03.PNomAlt ^ 2.0) was %g should be >= 0", tmp16);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* g03.QNomAlt PARAM */) = sqrt(tmp16);
  threadData->lastEquationSolved = 11402;
}

/*
equation index: 11403
type: SIMPLE_ASSIGN
g03.RTfoPu = g03.RTfPu * (g03.UNomHV / g03.UBaseHV) ^ 2.0 * g03.SNom / g03.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11403};
  modelica_real tmp17;
  tmp17 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* g03.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* g03.UBaseHV PARAM */),"g03.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* g03.RTfPu PARAM */)) * (((tmp17 * tmp17)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* g03.SnTfo PARAM */),"g03.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11403;
}

/*
equation index: 11404
type: SIMPLE_ASSIGN
g03.XTfoPu = g03.XTfPu * (g03.UNomHV / g03.UBaseHV) ^ 2.0 * g03.SNom / g03.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11404};
  modelica_real tmp18;
  tmp18 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* g03.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* g03.UBaseHV PARAM */),"g03.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* g03.XTfPu PARAM */)) * (((tmp18 * tmp18)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* g03.SnTfo PARAM */),"g03.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11404;
}

/*
equation index: 11405
type: SIMPLE_ASSIGN
g03.rTfoPu = if g03.RTfPu > 0.0 or g03.XTfPu > 0.0 then g03.UNomHV / g03.UBaseHV * g03.UBaseLV / g03.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11405};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  tmp19 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* g03.RTfPu PARAM */),0.0);
  tmp20 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* g03.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */) = ((tmp19 || tmp20)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* g03.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* g03.UBaseHV PARAM */),"g03.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* g03.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* g03.UNomLV PARAM */),"g03.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11405;
}

/*
equation index: 11407
type: SIMPLE_ASSIGN
g03.Running0 = not (g03.SwitchOffSignal10 or g03.SwitchOffSignal20 or g03.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11407};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[11]] /* g03.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[12]] /* g03.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[13]] /* g03.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[14]] /* g03.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11407;
}

/*
equation index: 11408
type: SIMPLE_ASSIGN
g03.Kuf = if g03.ExcitationPu == g03.ExcitationPuType.Kundur then 1.0 else if g03.ExcitationPu == g03.ExcitationPuType.UserBase then g03.RfPPu / g03.MdPPuEfd else if g03.ExcitationPu == g03.ExcitationPuType.NoLoad then g03.RfPPu / g03.MdPPu else if g03.ExcitationPu == g03.ExcitationPuType.NoLoadSaturated then g03.RfPPu * (1.0 + g03.md) / g03.MdPPu else g03.RfPPu / g03.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* g03.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* g03.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* g03.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* g03.MdPPuEfd PARAM */),"g03.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* g03.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* g03.MdPPu PARAM */),"g03.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* g03.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* g03.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* g03.MdPPu PARAM */),"g03.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* g03.MdPPuEfdNom PARAM */),"g03.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11408;
}

/*
equation index: 11409
type: SIMPLE_ASSIGN
g04.QNomAlt = sqrt(g04.SNom ^ 2.0 - g04.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11409};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp21 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */);
  tmp22 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* g04.PNomAlt PARAM */);
  tmp23 = (tmp21 * tmp21) - ((tmp22 * tmp22));
  if(!(tmp23 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g04.SNom ^ 2.0 - g04.PNomAlt ^ 2.0) was %g should be >= 0", tmp23);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* g04.QNomAlt PARAM */) = sqrt(tmp23);
  threadData->lastEquationSolved = 11409;
}

/*
equation index: 11410
type: SIMPLE_ASSIGN
g04.RTfoPu = g04.RTfPu * (g04.UNomHV / g04.UBaseHV) ^ 2.0 * g04.SNom / g04.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11410};
  modelica_real tmp24;
  tmp24 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* g04.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* g04.UBaseHV PARAM */),"g04.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* g04.RTfPu PARAM */)) * (((tmp24 * tmp24)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* g04.SnTfo PARAM */),"g04.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11410;
}

/*
equation index: 11411
type: SIMPLE_ASSIGN
g04.XTfoPu = g04.XTfPu * (g04.UNomHV / g04.UBaseHV) ^ 2.0 * g04.SNom / g04.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11411};
  modelica_real tmp25;
  tmp25 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* g04.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* g04.UBaseHV PARAM */),"g04.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* g04.XTfPu PARAM */)) * (((tmp25 * tmp25)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* g04.SnTfo PARAM */),"g04.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11411;
}

/*
equation index: 11412
type: SIMPLE_ASSIGN
g04.rTfoPu = if g04.RTfPu > 0.0 or g04.XTfPu > 0.0 then g04.UNomHV / g04.UBaseHV * g04.UBaseLV / g04.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11412};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  tmp26 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* g04.RTfPu PARAM */),0.0);
  tmp27 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* g04.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */) = ((tmp26 || tmp27)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* g04.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* g04.UBaseHV PARAM */),"g04.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* g04.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* g04.UNomLV PARAM */),"g04.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11412;
}

/*
equation index: 11414
type: SIMPLE_ASSIGN
g04.Running0 = not (g04.SwitchOffSignal10 or g04.SwitchOffSignal20 or g04.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11414};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* g04.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[17]] /* g04.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[18]] /* g04.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[19]] /* g04.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11414;
}

/*
equation index: 11415
type: SIMPLE_ASSIGN
g04.Kuf = if g04.ExcitationPu == g04.ExcitationPuType.Kundur then 1.0 else if g04.ExcitationPu == g04.ExcitationPuType.UserBase then g04.RfPPu / g04.MdPPuEfd else if g04.ExcitationPu == g04.ExcitationPuType.NoLoad then g04.RfPPu / g04.MdPPu else if g04.ExcitationPu == g04.ExcitationPuType.NoLoadSaturated then g04.RfPPu * (1.0 + g04.md) / g04.MdPPu else g04.RfPPu / g04.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* g04.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* g04.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* g04.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* g04.MdPPuEfd PARAM */),"g04.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* g04.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* g04.MdPPu PARAM */),"g04.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* g04.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* g04.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* g04.MdPPu PARAM */),"g04.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* g04.MdPPuEfdNom PARAM */),"g04.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11415;
}

/*
equation index: 11416
type: SIMPLE_ASSIGN
g05.QNomAlt = sqrt(g05.SNom ^ 2.0 - g05.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11416};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  tmp28 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */);
  tmp29 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* g05.PNomAlt PARAM */);
  tmp30 = (tmp28 * tmp28) - ((tmp29 * tmp29));
  if(!(tmp30 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g05.SNom ^ 2.0 - g05.PNomAlt ^ 2.0) was %g should be >= 0", tmp30);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* g05.QNomAlt PARAM */) = sqrt(tmp30);
  threadData->lastEquationSolved = 11416;
}

/*
equation index: 11417
type: SIMPLE_ASSIGN
g05.RTfoPu = g05.RTfPu * (g05.UNomHV / g05.UBaseHV) ^ 2.0 * g05.SNom / g05.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11417};
  modelica_real tmp31;
  tmp31 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* g05.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* g05.UBaseHV PARAM */),"g05.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* g05.RTfPu PARAM */)) * (((tmp31 * tmp31)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* g05.SnTfo PARAM */),"g05.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11417;
}

/*
equation index: 11418
type: SIMPLE_ASSIGN
g05.XTfoPu = g05.XTfPu * (g05.UNomHV / g05.UBaseHV) ^ 2.0 * g05.SNom / g05.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11418};
  modelica_real tmp32;
  tmp32 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* g05.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* g05.UBaseHV PARAM */),"g05.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* g05.XTfPu PARAM */)) * (((tmp32 * tmp32)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* g05.SnTfo PARAM */),"g05.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11418;
}

/*
equation index: 11419
type: SIMPLE_ASSIGN
g05.rTfoPu = if g05.RTfPu > 0.0 or g05.XTfPu > 0.0 then g05.UNomHV / g05.UBaseHV * g05.UBaseLV / g05.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11419};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  tmp33 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* g05.RTfPu PARAM */),0.0);
  tmp34 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* g05.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */) = ((tmp33 || tmp34)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* g05.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[684]] /* g05.UBaseHV PARAM */),"g05.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* g05.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* g05.UNomLV PARAM */),"g05.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11419;
}

/*
equation index: 11421
type: SIMPLE_ASSIGN
g05.Running0 = not (g05.SwitchOffSignal10 or g05.SwitchOffSignal20 or g05.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11421};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* g05.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[22]] /* g05.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[23]] /* g05.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[24]] /* g05.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11421;
}

/*
equation index: 11422
type: SIMPLE_ASSIGN
g05.Kuf = if g05.ExcitationPu == g05.ExcitationPuType.Kundur then 1.0 else if g05.ExcitationPu == g05.ExcitationPuType.UserBase then g05.RfPPu / g05.MdPPuEfd else if g05.ExcitationPu == g05.ExcitationPuType.NoLoad then g05.RfPPu / g05.MdPPu else if g05.ExcitationPu == g05.ExcitationPuType.NoLoadSaturated then g05.RfPPu * (1.0 + g05.md) / g05.MdPPu else g05.RfPPu / g05.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* g05.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* g05.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* g05.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* g05.MdPPuEfd PARAM */),"g05.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* g05.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* g05.MdPPu PARAM */),"g05.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* g05.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* g05.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* g05.MdPPu PARAM */),"g05.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* g05.MdPPuEfdNom PARAM */),"g05.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11422;
}

/*
equation index: 11423
type: SIMPLE_ASSIGN
g06.QNomAlt = sqrt(g06.SNom ^ 2.0 - g06.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11423};
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  tmp35 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */);
  tmp36 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* g06.PNomAlt PARAM */);
  tmp37 = (tmp35 * tmp35) - ((tmp36 * tmp36));
  if(!(tmp37 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g06.SNom ^ 2.0 - g06.PNomAlt ^ 2.0) was %g should be >= 0", tmp37);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* g06.QNomAlt PARAM */) = sqrt(tmp37);
  threadData->lastEquationSolved = 11423;
}

/*
equation index: 11424
type: SIMPLE_ASSIGN
g06.RTfoPu = g06.RTfPu * (g06.UNomHV / g06.UBaseHV) ^ 2.0 * g06.SNom / g06.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11424};
  modelica_real tmp38;
  tmp38 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* g06.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* g06.UBaseHV PARAM */),"g06.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* g06.RTfPu PARAM */)) * (((tmp38 * tmp38)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* g06.SnTfo PARAM */),"g06.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11424;
}

/*
equation index: 11425
type: SIMPLE_ASSIGN
g06.XTfoPu = g06.XTfPu * (g06.UNomHV / g06.UBaseHV) ^ 2.0 * g06.SNom / g06.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11425};
  modelica_real tmp39;
  tmp39 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* g06.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* g06.UBaseHV PARAM */),"g06.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* g06.XTfPu PARAM */)) * (((tmp39 * tmp39)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* g06.SnTfo PARAM */),"g06.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11425;
}

/*
equation index: 11426
type: SIMPLE_ASSIGN
g06.rTfoPu = if g06.RTfPu > 0.0 or g06.XTfPu > 0.0 then g06.UNomHV / g06.UBaseHV * g06.UBaseLV / g06.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11426};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  tmp40 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* g06.RTfPu PARAM */),0.0);
  tmp41 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* g06.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */) = ((tmp40 || tmp41)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* g06.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* g06.UBaseHV PARAM */),"g06.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* g06.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* g06.UNomLV PARAM */),"g06.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11426;
}

/*
equation index: 11428
type: SIMPLE_ASSIGN
g06.Running0 = not (g06.SwitchOffSignal10 or g06.SwitchOffSignal20 or g06.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11428};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[26]] /* g06.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[27]] /* g06.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[28]] /* g06.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[29]] /* g06.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11428;
}

/*
equation index: 11429
type: SIMPLE_ASSIGN
g06.Kuf = if g06.ExcitationPu == g06.ExcitationPuType.Kundur then 1.0 else if g06.ExcitationPu == g06.ExcitationPuType.UserBase then g06.RfPPu / g06.MdPPuEfd else if g06.ExcitationPu == g06.ExcitationPuType.NoLoad then g06.RfPPu / g06.MdPPu else if g06.ExcitationPu == g06.ExcitationPuType.NoLoadSaturated then g06.RfPPu * (1.0 + g06.md) / g06.MdPPu else g06.RfPPu / g06.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* g06.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* g06.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* g06.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* g06.MdPPuEfd PARAM */),"g06.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* g06.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* g06.MdPPu PARAM */),"g06.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* g06.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* g06.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* g06.MdPPu PARAM */),"g06.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* g06.MdPPuEfdNom PARAM */),"g06.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11429;
}

/*
equation index: 11430
type: SIMPLE_ASSIGN
g07.QNomAlt = sqrt(g07.SNom ^ 2.0 - g07.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11430};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  tmp42 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */);
  tmp43 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* g07.PNomAlt PARAM */);
  tmp44 = (tmp42 * tmp42) - ((tmp43 * tmp43));
  if(!(tmp44 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g07.SNom ^ 2.0 - g07.PNomAlt ^ 2.0) was %g should be >= 0", tmp44);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* g07.QNomAlt PARAM */) = sqrt(tmp44);
  threadData->lastEquationSolved = 11430;
}

/*
equation index: 11431
type: SIMPLE_ASSIGN
g07.RTfoPu = g07.RTfPu * (g07.UNomHV / g07.UBaseHV) ^ 2.0 * g07.SNom / g07.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11431};
  modelica_real tmp45;
  tmp45 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* g07.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* g07.UBaseHV PARAM */),"g07.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* g07.RTfPu PARAM */)) * (((tmp45 * tmp45)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* g07.SnTfo PARAM */),"g07.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11431;
}

/*
equation index: 11432
type: SIMPLE_ASSIGN
g07.XTfoPu = g07.XTfPu * (g07.UNomHV / g07.UBaseHV) ^ 2.0 * g07.SNom / g07.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11432};
  modelica_real tmp46;
  tmp46 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* g07.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* g07.UBaseHV PARAM */),"g07.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* g07.XTfPu PARAM */)) * (((tmp46 * tmp46)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* g07.SnTfo PARAM */),"g07.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11432;
}

/*
equation index: 11433
type: SIMPLE_ASSIGN
g07.rTfoPu = if g07.RTfPu > 0.0 or g07.XTfPu > 0.0 then g07.UNomHV / g07.UBaseHV * g07.UBaseLV / g07.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11433};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  tmp47 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* g07.RTfPu PARAM */),0.0);
  tmp48 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* g07.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */) = ((tmp47 || tmp48)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* g07.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* g07.UBaseHV PARAM */),"g07.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[889]] /* g07.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* g07.UNomLV PARAM */),"g07.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11433;
}

/*
equation index: 11435
type: SIMPLE_ASSIGN
g07.Running0 = not (g07.SwitchOffSignal10 or g07.SwitchOffSignal20 or g07.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11435};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[31]] /* g07.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[32]] /* g07.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[33]] /* g07.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[34]] /* g07.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11435;
}

/*
equation index: 11436
type: SIMPLE_ASSIGN
g07.Kuf = if g07.ExcitationPu == g07.ExcitationPuType.Kundur then 1.0 else if g07.ExcitationPu == g07.ExcitationPuType.UserBase then g07.RfPPu / g07.MdPPuEfd else if g07.ExcitationPu == g07.ExcitationPuType.NoLoad then g07.RfPPu / g07.MdPPu else if g07.ExcitationPu == g07.ExcitationPuType.NoLoadSaturated then g07.RfPPu * (1.0 + g07.md) / g07.MdPPu else g07.RfPPu / g07.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* g07.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* g07.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* g07.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* g07.MdPPuEfd PARAM */),"g07.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* g07.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* g07.MdPPu PARAM */),"g07.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* g07.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* g07.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* g07.MdPPu PARAM */),"g07.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* g07.MdPPuEfdNom PARAM */),"g07.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11436;
}

/*
equation index: 11437
type: SIMPLE_ASSIGN
g08.QNomAlt = sqrt(g08.SNom ^ 2.0 - g08.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11437};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  tmp49 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */);
  tmp50 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* g08.PNomAlt PARAM */);
  tmp51 = (tmp49 * tmp49) - ((tmp50 * tmp50));
  if(!(tmp51 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g08.SNom ^ 2.0 - g08.PNomAlt ^ 2.0) was %g should be >= 0", tmp51);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* g08.QNomAlt PARAM */) = sqrt(tmp51);
  threadData->lastEquationSolved = 11437;
}

/*
equation index: 11438
type: SIMPLE_ASSIGN
g08.RTfoPu = g08.RTfPu * (g08.UNomHV / g08.UBaseHV) ^ 2.0 * g08.SNom / g08.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11438};
  modelica_real tmp52;
  tmp52 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* g08.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* g08.UBaseHV PARAM */),"g08.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* g08.RTfPu PARAM */)) * (((tmp52 * tmp52)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* g08.SnTfo PARAM */),"g08.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11438;
}

/*
equation index: 11439
type: SIMPLE_ASSIGN
g08.XTfoPu = g08.XTfPu * (g08.UNomHV / g08.UBaseHV) ^ 2.0 * g08.SNom / g08.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11439};
  modelica_real tmp53;
  tmp53 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* g08.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* g08.UBaseHV PARAM */),"g08.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* g08.XTfPu PARAM */)) * (((tmp53 * tmp53)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* g08.SnTfo PARAM */),"g08.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11439;
}

/*
equation index: 11440
type: SIMPLE_ASSIGN
g08.rTfoPu = if g08.RTfPu > 0.0 or g08.XTfPu > 0.0 then g08.UNomHV / g08.UBaseHV * g08.UBaseLV / g08.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11440};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  tmp54 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* g08.RTfPu PARAM */),0.0);
  tmp55 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* g08.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */) = ((tmp54 || tmp55)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* g08.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* g08.UBaseHV PARAM */),"g08.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* g08.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* g08.UNomLV PARAM */),"g08.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11440;
}

/*
equation index: 11442
type: SIMPLE_ASSIGN
g08.Running0 = not (g08.SwitchOffSignal10 or g08.SwitchOffSignal20 or g08.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11442};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[36]] /* g08.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[37]] /* g08.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[38]] /* g08.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[39]] /* g08.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11442;
}

/*
equation index: 11443
type: SIMPLE_ASSIGN
g08.Kuf = if g08.ExcitationPu == g08.ExcitationPuType.Kundur then 1.0 else if g08.ExcitationPu == g08.ExcitationPuType.UserBase then g08.RfPPu / g08.MdPPuEfd else if g08.ExcitationPu == g08.ExcitationPuType.NoLoad then g08.RfPPu / g08.MdPPu else if g08.ExcitationPu == g08.ExcitationPuType.NoLoadSaturated then g08.RfPPu * (1.0 + g08.md) / g08.MdPPu else g08.RfPPu / g08.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* g08.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* g08.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* g08.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* g08.MdPPuEfd PARAM */),"g08.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* g08.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* g08.MdPPu PARAM */),"g08.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* g08.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* g08.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* g08.MdPPu PARAM */),"g08.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* g08.MdPPuEfdNom PARAM */),"g08.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11443;
}

/*
equation index: 11444
type: SIMPLE_ASSIGN
g09.QNomAlt = sqrt(g09.SNom ^ 2.0 - g09.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11444};
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  tmp56 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */);
  tmp57 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* g09.PNomAlt PARAM */);
  tmp58 = (tmp56 * tmp56) - ((tmp57 * tmp57));
  if(!(tmp58 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g09.SNom ^ 2.0 - g09.PNomAlt ^ 2.0) was %g should be >= 0", tmp58);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* g09.QNomAlt PARAM */) = sqrt(tmp58);
  threadData->lastEquationSolved = 11444;
}

/*
equation index: 11445
type: SIMPLE_ASSIGN
g09.RTfoPu = g09.RTfPu * (g09.UNomHV / g09.UBaseHV) ^ 2.0 * g09.SNom / g09.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11445};
  modelica_real tmp59;
  tmp59 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* g09.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* g09.UBaseHV PARAM */),"g09.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* g09.RTfPu PARAM */)) * (((tmp59 * tmp59)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* g09.SnTfo PARAM */),"g09.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11445;
}

/*
equation index: 11446
type: SIMPLE_ASSIGN
g09.XTfoPu = g09.XTfPu * (g09.UNomHV / g09.UBaseHV) ^ 2.0 * g09.SNom / g09.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11446};
  modelica_real tmp60;
  tmp60 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* g09.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* g09.UBaseHV PARAM */),"g09.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* g09.XTfPu PARAM */)) * (((tmp60 * tmp60)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* g09.SnTfo PARAM */),"g09.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11446;
}

/*
equation index: 11447
type: SIMPLE_ASSIGN
g09.rTfoPu = if g09.RTfPu > 0.0 or g09.XTfPu > 0.0 then g09.UNomHV / g09.UBaseHV * g09.UBaseLV / g09.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11447};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  tmp61 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* g09.RTfPu PARAM */),0.0);
  tmp62 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* g09.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */) = ((tmp61 || tmp62)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* g09.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* g09.UBaseHV PARAM */),"g09.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* g09.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* g09.UNomLV PARAM */),"g09.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11447;
}

/*
equation index: 11449
type: SIMPLE_ASSIGN
g09.Running0 = not (g09.SwitchOffSignal10 or g09.SwitchOffSignal20 or g09.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11449};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[41]] /* g09.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[42]] /* g09.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[43]] /* g09.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[44]] /* g09.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11449;
}

/*
equation index: 11450
type: SIMPLE_ASSIGN
g09.Kuf = if g09.ExcitationPu == g09.ExcitationPuType.Kundur then 1.0 else if g09.ExcitationPu == g09.ExcitationPuType.UserBase then g09.RfPPu / g09.MdPPuEfd else if g09.ExcitationPu == g09.ExcitationPuType.NoLoad then g09.RfPPu / g09.MdPPu else if g09.ExcitationPu == g09.ExcitationPuType.NoLoadSaturated then g09.RfPPu * (1.0 + g09.md) / g09.MdPPu else g09.RfPPu / g09.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* g09.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* g09.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* g09.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* g09.MdPPuEfd PARAM */),"g09.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* g09.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* g09.MdPPu PARAM */),"g09.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* g09.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* g09.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* g09.MdPPu PARAM */),"g09.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* g09.MdPPuEfdNom PARAM */),"g09.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11450;
}

/*
equation index: 11451
type: SIMPLE_ASSIGN
g10.QNomAlt = sqrt(g10.SNom ^ 2.0 - g10.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11451};
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  tmp63 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */);
  tmp64 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* g10.PNomAlt PARAM */);
  tmp65 = (tmp63 * tmp63) - ((tmp64 * tmp64));
  if(!(tmp65 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g10.SNom ^ 2.0 - g10.PNomAlt ^ 2.0) was %g should be >= 0", tmp65);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* g10.QNomAlt PARAM */) = sqrt(tmp65);
  threadData->lastEquationSolved = 11451;
}

/*
equation index: 11452
type: SIMPLE_ASSIGN
g10.RTfoPu = g10.RTfPu * (g10.UNomHV / g10.UBaseHV) ^ 2.0 * g10.SNom / g10.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11452};
  modelica_real tmp66;
  tmp66 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* g10.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* g10.UBaseHV PARAM */),"g10.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* g10.RTfPu PARAM */)) * (((tmp66 * tmp66)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* g10.SnTfo PARAM */),"g10.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11452;
}

/*
equation index: 11453
type: SIMPLE_ASSIGN
g10.XTfoPu = g10.XTfPu * (g10.UNomHV / g10.UBaseHV) ^ 2.0 * g10.SNom / g10.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11453};
  modelica_real tmp67;
  tmp67 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* g10.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* g10.UBaseHV PARAM */),"g10.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* g10.XTfPu PARAM */)) * (((tmp67 * tmp67)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* g10.SnTfo PARAM */),"g10.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11453;
}

/*
equation index: 11454
type: SIMPLE_ASSIGN
g10.rTfoPu = if g10.RTfPu > 0.0 or g10.XTfPu > 0.0 then g10.UNomHV / g10.UBaseHV * g10.UBaseLV / g10.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11454};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  tmp68 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* g10.RTfPu PARAM */),0.0);
  tmp69 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* g10.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */) = ((tmp68 || tmp69)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* g10.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* g10.UBaseHV PARAM */),"g10.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* g10.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* g10.UNomLV PARAM */),"g10.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11454;
}

/*
equation index: 11456
type: SIMPLE_ASSIGN
g10.Running0 = not (g10.SwitchOffSignal10 or g10.SwitchOffSignal20 or g10.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11456};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[46]] /* g10.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[47]] /* g10.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[48]] /* g10.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[49]] /* g10.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11456;
}

/*
equation index: 11457
type: SIMPLE_ASSIGN
g10.Kuf = if g10.ExcitationPu == g10.ExcitationPuType.Kundur then 1.0 else if g10.ExcitationPu == g10.ExcitationPuType.UserBase then g10.RfPPu / g10.MdPPuEfd else if g10.ExcitationPu == g10.ExcitationPuType.NoLoad then g10.RfPPu / g10.MdPPu else if g10.ExcitationPu == g10.ExcitationPuType.NoLoadSaturated then g10.RfPPu * (1.0 + g10.md) / g10.MdPPu else g10.RfPPu / g10.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* g10.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* g10.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* g10.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* g10.MdPPuEfd PARAM */),"g10.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* g10.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* g10.MdPPu PARAM */),"g10.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* g10.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* g10.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* g10.MdPPu PARAM */),"g10.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* g10.MdPPuEfdNom PARAM */),"g10.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11457;
}

/*
equation index: 11458
type: SIMPLE_ASSIGN
g11.QNomAlt = sqrt(g11.SNom ^ 2.0 - g11.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11458};
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */);
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* g11.PNomAlt PARAM */);
  tmp72 = (tmp70 * tmp70) - ((tmp71 * tmp71));
  if(!(tmp72 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g11.SNom ^ 2.0 - g11.PNomAlt ^ 2.0) was %g should be >= 0", tmp72);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* g11.QNomAlt PARAM */) = sqrt(tmp72);
  threadData->lastEquationSolved = 11458;
}

/*
equation index: 11459
type: SIMPLE_ASSIGN
g11.RTfoPu = g11.RTfPu * (g11.UNomHV / g11.UBaseHV) ^ 2.0 * g11.SNom / g11.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11459};
  modelica_real tmp73;
  tmp73 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* g11.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* g11.UBaseHV PARAM */),"g11.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* g11.RTfPu PARAM */)) * (((tmp73 * tmp73)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* g11.SnTfo PARAM */),"g11.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11459;
}

/*
equation index: 11460
type: SIMPLE_ASSIGN
g11.XTfoPu = g11.XTfPu * (g11.UNomHV / g11.UBaseHV) ^ 2.0 * g11.SNom / g11.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11460};
  modelica_real tmp74;
  tmp74 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* g11.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* g11.UBaseHV PARAM */),"g11.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* g11.XTfPu PARAM */)) * (((tmp74 * tmp74)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* g11.SnTfo PARAM */),"g11.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11460;
}

/*
equation index: 11461
type: SIMPLE_ASSIGN
g11.rTfoPu = if g11.RTfPu > 0.0 or g11.XTfPu > 0.0 then g11.UNomHV / g11.UBaseHV * g11.UBaseLV / g11.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11461};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  tmp75 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* g11.RTfPu PARAM */),0.0);
  tmp76 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* g11.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */) = ((tmp75 || tmp76)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* g11.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* g11.UBaseHV PARAM */),"g11.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* g11.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* g11.UNomLV PARAM */),"g11.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11461;
}

/*
equation index: 11463
type: SIMPLE_ASSIGN
g11.Running0 = not (g11.SwitchOffSignal10 or g11.SwitchOffSignal20 or g11.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11463};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[51]] /* g11.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[52]] /* g11.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[53]] /* g11.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[54]] /* g11.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11463;
}

/*
equation index: 11464
type: SIMPLE_ASSIGN
g11.Kuf = if g11.ExcitationPu == g11.ExcitationPuType.Kundur then 1.0 else if g11.ExcitationPu == g11.ExcitationPuType.UserBase then g11.RfPPu / g11.MdPPuEfd else if g11.ExcitationPu == g11.ExcitationPuType.NoLoad then g11.RfPPu / g11.MdPPu else if g11.ExcitationPu == g11.ExcitationPuType.NoLoadSaturated then g11.RfPPu * (1.0 + g11.md) / g11.MdPPu else g11.RfPPu / g11.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* g11.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* g11.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* g11.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* g11.MdPPuEfd PARAM */),"g11.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* g11.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* g11.MdPPu PARAM */),"g11.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* g11.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* g11.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* g11.MdPPu PARAM */),"g11.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* g11.MdPPuEfdNom PARAM */),"g11.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11464;
}

/*
equation index: 11465
type: SIMPLE_ASSIGN
g12.QNomAlt = sqrt(g12.SNom ^ 2.0 - g12.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11465};
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  tmp77 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */);
  tmp78 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* g12.PNomAlt PARAM */);
  tmp79 = (tmp77 * tmp77) - ((tmp78 * tmp78));
  if(!(tmp79 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g12.SNom ^ 2.0 - g12.PNomAlt ^ 2.0) was %g should be >= 0", tmp79);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* g12.QNomAlt PARAM */) = sqrt(tmp79);
  threadData->lastEquationSolved = 11465;
}

/*
equation index: 11466
type: SIMPLE_ASSIGN
g12.RTfoPu = g12.RTfPu * (g12.UNomHV / g12.UBaseHV) ^ 2.0 * g12.SNom / g12.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11466};
  modelica_real tmp80;
  tmp80 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1398]] /* g12.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* g12.UBaseHV PARAM */),"g12.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* g12.RTfPu PARAM */)) * (((tmp80 * tmp80)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1391]] /* g12.SnTfo PARAM */),"g12.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11466;
}

/*
equation index: 11467
type: SIMPLE_ASSIGN
g12.XTfoPu = g12.XTfPu * (g12.UNomHV / g12.UBaseHV) ^ 2.0 * g12.SNom / g12.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11467};
  modelica_real tmp81;
  tmp81 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1398]] /* g12.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* g12.UBaseHV PARAM */),"g12.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1405]] /* g12.XTfPu PARAM */)) * (((tmp81 * tmp81)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1391]] /* g12.SnTfo PARAM */),"g12.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11467;
}

/*
equation index: 11468
type: SIMPLE_ASSIGN
g12.rTfoPu = if g12.RTfPu > 0.0 or g12.XTfPu > 0.0 then g12.UNomHV / g12.UBaseHV * g12.UBaseLV / g12.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11468};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  tmp82 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* g12.RTfPu PARAM */),0.0);
  tmp83 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1405]] /* g12.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */) = ((tmp82 || tmp83)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1398]] /* g12.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* g12.UBaseHV PARAM */),"g12.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1396]] /* g12.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1399]] /* g12.UNomLV PARAM */),"g12.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11468;
}

/*
equation index: 11470
type: SIMPLE_ASSIGN
g12.Running0 = not (g12.SwitchOffSignal10 or g12.SwitchOffSignal20 or g12.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11470};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[56]] /* g12.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[57]] /* g12.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[58]] /* g12.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[59]] /* g12.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11470;
}

/*
equation index: 11471
type: SIMPLE_ASSIGN
g12.Kuf = if g12.ExcitationPu == g12.ExcitationPuType.Kundur then 1.0 else if g12.ExcitationPu == g12.ExcitationPuType.UserBase then g12.RfPPu / g12.MdPPuEfd else if g12.ExcitationPu == g12.ExcitationPuType.NoLoad then g12.RfPPu / g12.MdPPu else if g12.ExcitationPu == g12.ExcitationPuType.NoLoadSaturated then g12.RfPPu * (1.0 + g12.md) / g12.MdPPu else g12.RfPPu / g12.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* g12.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* g12.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* g12.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* g12.MdPPuEfd PARAM */),"g12.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* g12.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* g12.MdPPu PARAM */),"g12.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* g12.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* g12.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* g12.MdPPu PARAM */),"g12.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* g12.MdPPuEfdNom PARAM */),"g12.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11471;
}

/*
equation index: 11472
type: SIMPLE_ASSIGN
g13.QNomAlt = sqrt(g13.SNom ^ 2.0 - g13.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11472};
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  tmp84 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */);
  tmp85 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* g13.PNomAlt PARAM */);
  tmp86 = (tmp84 * tmp84) - ((tmp85 * tmp85));
  if(!(tmp86 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g13.SNom ^ 2.0 - g13.PNomAlt ^ 2.0) was %g should be >= 0", tmp86);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* g13.QNomAlt PARAM */) = sqrt(tmp86);
  threadData->lastEquationSolved = 11472;
}

/*
equation index: 11473
type: SIMPLE_ASSIGN
g13.RTfoPu = g13.RTfPu * (g13.UNomHV / g13.UBaseHV) ^ 2.0 * g13.SNom / g13.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11473};
  modelica_real tmp87;
  tmp87 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1499]] /* g13.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1496]] /* g13.UBaseHV PARAM */),"g13.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* g13.RTfPu PARAM */)) * (((tmp87 * tmp87)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* g13.SnTfo PARAM */),"g13.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11473;
}

/*
equation index: 11474
type: SIMPLE_ASSIGN
g13.XTfoPu = g13.XTfPu * (g13.UNomHV / g13.UBaseHV) ^ 2.0 * g13.SNom / g13.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11474};
  modelica_real tmp88;
  tmp88 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1499]] /* g13.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1496]] /* g13.UBaseHV PARAM */),"g13.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* g13.XTfPu PARAM */)) * (((tmp88 * tmp88)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* g13.SnTfo PARAM */),"g13.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11474;
}

/*
equation index: 11475
type: SIMPLE_ASSIGN
g13.rTfoPu = if g13.RTfPu > 0.0 or g13.XTfPu > 0.0 then g13.UNomHV / g13.UBaseHV * g13.UBaseLV / g13.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11475};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  tmp89 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* g13.RTfPu PARAM */),0.0);
  tmp90 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* g13.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */) = ((tmp89 || tmp90)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1499]] /* g13.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1496]] /* g13.UBaseHV PARAM */),"g13.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1497]] /* g13.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1500]] /* g13.UNomLV PARAM */),"g13.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11475;
}

/*
equation index: 11477
type: SIMPLE_ASSIGN
g13.Running0 = not (g13.SwitchOffSignal10 or g13.SwitchOffSignal20 or g13.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11477};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[61]] /* g13.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[62]] /* g13.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[63]] /* g13.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[64]] /* g13.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11477;
}

/*
equation index: 11478
type: SIMPLE_ASSIGN
g13.Kuf = if g13.ExcitationPu == g13.ExcitationPuType.Kundur then 1.0 else if g13.ExcitationPu == g13.ExcitationPuType.UserBase then g13.RfPPu / g13.MdPPuEfd else if g13.ExcitationPu == g13.ExcitationPuType.NoLoad then g13.RfPPu / g13.MdPPu else if g13.ExcitationPu == g13.ExcitationPuType.NoLoadSaturated then g13.RfPPu * (1.0 + g13.md) / g13.MdPPu else g13.RfPPu / g13.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* g13.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* g13.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* g13.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* g13.MdPPuEfd PARAM */),"g13.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* g13.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* g13.MdPPu PARAM */),"g13.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[37]] /* g13.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* g13.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* g13.MdPPu PARAM */),"g13.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1464]] /* g13.MdPPuEfdNom PARAM */),"g13.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11478;
}

/*
equation index: 11479
type: SIMPLE_ASSIGN
g14.QNomAlt = sqrt(g14.SNom ^ 2.0 - g14.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11479};
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  tmp91 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */);
  tmp92 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1576]] /* g14.PNomAlt PARAM */);
  tmp93 = (tmp91 * tmp91) - ((tmp92 * tmp92));
  if(!(tmp93 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g14.SNom ^ 2.0 - g14.PNomAlt ^ 2.0) was %g should be >= 0", tmp93);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* g14.QNomAlt PARAM */) = sqrt(tmp93);
  threadData->lastEquationSolved = 11479;
}

/*
equation index: 11480
type: SIMPLE_ASSIGN
g14.RTfoPu = g14.RTfPu * (g14.UNomHV / g14.UBaseHV) ^ 2.0 * g14.SNom / g14.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11480};
  modelica_real tmp94;
  tmp94 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1600]] /* g14.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* g14.UBaseHV PARAM */),"g14.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1587]] /* g14.RTfPu PARAM */)) * (((tmp94 * tmp94)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1593]] /* g14.SnTfo PARAM */),"g14.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11480;
}

/*
equation index: 11481
type: SIMPLE_ASSIGN
g14.XTfoPu = g14.XTfPu * (g14.UNomHV / g14.UBaseHV) ^ 2.0 * g14.SNom / g14.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11481};
  modelica_real tmp95;
  tmp95 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1600]] /* g14.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* g14.UBaseHV PARAM */),"g14.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* g14.XTfPu PARAM */)) * (((tmp95 * tmp95)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1593]] /* g14.SnTfo PARAM */),"g14.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11481;
}

/*
equation index: 11482
type: SIMPLE_ASSIGN
g14.rTfoPu = if g14.RTfPu > 0.0 or g14.XTfPu > 0.0 then g14.UNomHV / g14.UBaseHV * g14.UBaseLV / g14.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11482};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  tmp96 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1587]] /* g14.RTfPu PARAM */),0.0);
  tmp97 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* g14.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */) = ((tmp96 || tmp97)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1600]] /* g14.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* g14.UBaseHV PARAM */),"g14.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1598]] /* g14.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1601]] /* g14.UNomLV PARAM */),"g14.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11482;
}

/*
equation index: 11484
type: SIMPLE_ASSIGN
g14.Running0 = not (g14.SwitchOffSignal10 or g14.SwitchOffSignal20 or g14.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11484};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[66]] /* g14.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[67]] /* g14.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[68]] /* g14.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[69]] /* g14.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11484;
}

/*
equation index: 11485
type: SIMPLE_ASSIGN
g14.Kuf = if g14.ExcitationPu == g14.ExcitationPuType.Kundur then 1.0 else if g14.ExcitationPu == g14.ExcitationPuType.UserBase then g14.RfPPu / g14.MdPPuEfd else if g14.ExcitationPu == g14.ExcitationPuType.NoLoad then g14.RfPPu / g14.MdPPu else if g14.ExcitationPu == g14.ExcitationPuType.NoLoadSaturated then g14.RfPPu * (1.0 + g14.md) / g14.MdPPu else g14.RfPPu / g14.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* g14.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* g14.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* g14.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1564]] /* g14.MdPPuEfd PARAM */),"g14.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* g14.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* g14.MdPPu PARAM */),"g14.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* g14.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* g14.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* g14.MdPPu PARAM */),"g14.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* g14.MdPPuEfdNom PARAM */),"g14.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11485;
}

/*
equation index: 11486
type: SIMPLE_ASSIGN
g15.QNomAlt = sqrt(g15.SNom ^ 2.0 - g15.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11486};
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  tmp98 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */);
  tmp99 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* g15.PNomAlt PARAM */);
  tmp100 = (tmp98 * tmp98) - ((tmp99 * tmp99));
  if(!(tmp100 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g15.SNom ^ 2.0 - g15.PNomAlt ^ 2.0) was %g should be >= 0", tmp100);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* g15.QNomAlt PARAM */) = sqrt(tmp100);
  threadData->lastEquationSolved = 11486;
}

/*
equation index: 11487
type: SIMPLE_ASSIGN
g15.RTfoPu = g15.RTfPu * (g15.UNomHV / g15.UBaseHV) ^ 2.0 * g15.SNom / g15.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11487};
  modelica_real tmp101;
  tmp101 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* g15.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* g15.UBaseHV PARAM */),"g15.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* g15.RTfPu PARAM */)) * (((tmp101 * tmp101)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* g15.SnTfo PARAM */),"g15.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11487;
}

/*
equation index: 11488
type: SIMPLE_ASSIGN
g15.XTfoPu = g15.XTfPu * (g15.UNomHV / g15.UBaseHV) ^ 2.0 * g15.SNom / g15.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11488};
  modelica_real tmp102;
  tmp102 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* g15.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* g15.UBaseHV PARAM */),"g15.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* g15.XTfPu PARAM */)) * (((tmp102 * tmp102)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* g15.SnTfo PARAM */),"g15.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11488;
}

/*
equation index: 11489
type: SIMPLE_ASSIGN
g15.rTfoPu = if g15.RTfPu > 0.0 or g15.XTfPu > 0.0 then g15.UNomHV / g15.UBaseHV * g15.UBaseLV / g15.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11489};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  tmp103 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* g15.RTfPu PARAM */),0.0);
  tmp104 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* g15.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */) = ((tmp103 || tmp104)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* g15.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* g15.UBaseHV PARAM */),"g15.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* g15.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* g15.UNomLV PARAM */),"g15.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11489;
}

/*
equation index: 11491
type: SIMPLE_ASSIGN
g15.Running0 = not (g15.SwitchOffSignal10 or g15.SwitchOffSignal20 or g15.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11491};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[71]] /* g15.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[72]] /* g15.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[73]] /* g15.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[74]] /* g15.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11491;
}

/*
equation index: 11492
type: SIMPLE_ASSIGN
g15.Kuf = if g15.ExcitationPu == g15.ExcitationPuType.Kundur then 1.0 else if g15.ExcitationPu == g15.ExcitationPuType.UserBase then g15.RfPPu / g15.MdPPuEfd else if g15.ExcitationPu == g15.ExcitationPuType.NoLoad then g15.RfPPu / g15.MdPPu else if g15.ExcitationPu == g15.ExcitationPuType.NoLoadSaturated then g15.RfPPu * (1.0 + g15.md) / g15.MdPPu else g15.RfPPu / g15.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1650]] /* g15.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* g15.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* g15.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1667]] /* g15.MdPPuEfd PARAM */),"g15.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* g15.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* g15.MdPPu PARAM */),"g15.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* g15.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* g15.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* g15.MdPPu PARAM */),"g15.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* g15.MdPPuEfdNom PARAM */),"g15.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11492;
}

/*
equation index: 11493
type: SIMPLE_ASSIGN
g16.QNomAlt = sqrt(g16.SNom ^ 2.0 - g16.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11493};
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */);
  tmp106 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* g16.PNomAlt PARAM */);
  tmp107 = (tmp105 * tmp105) - ((tmp106 * tmp106));
  if(!(tmp107 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g16.SNom ^ 2.0 - g16.PNomAlt ^ 2.0) was %g should be >= 0", tmp107);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* g16.QNomAlt PARAM */) = sqrt(tmp107);
  threadData->lastEquationSolved = 11493;
}

/*
equation index: 11494
type: SIMPLE_ASSIGN
g16.RTfoPu = g16.RTfPu * (g16.UNomHV / g16.UBaseHV) ^ 2.0 * g16.SNom / g16.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11494};
  modelica_real tmp108;
  tmp108 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* g16.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1803]] /* g16.UBaseHV PARAM */),"g16.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1793]] /* g16.RTfPu PARAM */)) * (((tmp108 * tmp108)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* g16.SnTfo PARAM */),"g16.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11494;
}

/*
equation index: 11495
type: SIMPLE_ASSIGN
g16.XTfoPu = g16.XTfPu * (g16.UNomHV / g16.UBaseHV) ^ 2.0 * g16.SNom / g16.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11495};
  modelica_real tmp109;
  tmp109 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* g16.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1803]] /* g16.UBaseHV PARAM */),"g16.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1813]] /* g16.XTfPu PARAM */)) * (((tmp109 * tmp109)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* g16.SnTfo PARAM */),"g16.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11495;
}

/*
equation index: 11496
type: SIMPLE_ASSIGN
g16.rTfoPu = if g16.RTfPu > 0.0 or g16.XTfPu > 0.0 then g16.UNomHV / g16.UBaseHV * g16.UBaseLV / g16.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11496};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  tmp110 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1793]] /* g16.RTfPu PARAM */),0.0);
  tmp111 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1813]] /* g16.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */) = ((tmp110 || tmp111)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* g16.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1803]] /* g16.UBaseHV PARAM */),"g16.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1804]] /* g16.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1807]] /* g16.UNomLV PARAM */),"g16.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11496;
}

/*
equation index: 11498
type: SIMPLE_ASSIGN
g16.Running0 = not (g16.SwitchOffSignal10 or g16.SwitchOffSignal20 or g16.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11498};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[76]] /* g16.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[77]] /* g16.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[78]] /* g16.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[79]] /* g16.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11498;
}

/*
equation index: 11499
type: SIMPLE_ASSIGN
g16.Kuf = if g16.ExcitationPu == g16.ExcitationPuType.Kundur then 1.0 else if g16.ExcitationPu == g16.ExcitationPuType.UserBase then g16.RfPPu / g16.MdPPuEfd else if g16.ExcitationPu == g16.ExcitationPuType.NoLoad then g16.RfPPu / g16.MdPPu else if g16.ExcitationPu == g16.ExcitationPuType.NoLoadSaturated then g16.RfPPu * (1.0 + g16.md) / g16.MdPPu else g16.RfPPu / g16.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* g16.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* g16.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* g16.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* g16.MdPPuEfd PARAM */),"g16.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* g16.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* g16.MdPPu PARAM */),"g16.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[46]] /* g16.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1819]] /* g16.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* g16.MdPPu PARAM */),"g16.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* g16.MdPPuEfdNom PARAM */),"g16.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11499;
}

/*
equation index: 11500
type: SIMPLE_ASSIGN
g17.QNomAlt = sqrt(g17.SNom ^ 2.0 - g17.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11500};
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  tmp112 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */);
  tmp113 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* g17.PNomAlt PARAM */);
  tmp114 = (tmp112 * tmp112) - ((tmp113 * tmp113));
  if(!(tmp114 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g17.SNom ^ 2.0 - g17.PNomAlt ^ 2.0) was %g should be >= 0", tmp114);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* g17.QNomAlt PARAM */) = sqrt(tmp114);
  threadData->lastEquationSolved = 11500;
}

/*
equation index: 11501
type: SIMPLE_ASSIGN
g17.RTfoPu = g17.RTfPu * (g17.UNomHV / g17.UBaseHV) ^ 2.0 * g17.SNom / g17.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11501};
  modelica_real tmp115;
  tmp115 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* g17.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* g17.UBaseHV PARAM */),"g17.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* g17.RTfPu PARAM */)) * (((tmp115 * tmp115)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* g17.SnTfo PARAM */),"g17.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11501;
}

/*
equation index: 11502
type: SIMPLE_ASSIGN
g17.XTfoPu = g17.XTfPu * (g17.UNomHV / g17.UBaseHV) ^ 2.0 * g17.SNom / g17.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11502};
  modelica_real tmp116;
  tmp116 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* g17.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* g17.UBaseHV PARAM */),"g17.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* g17.XTfPu PARAM */)) * (((tmp116 * tmp116)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* g17.SnTfo PARAM */),"g17.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11502;
}

/*
equation index: 11503
type: SIMPLE_ASSIGN
g17.rTfoPu = if g17.RTfPu > 0.0 or g17.XTfPu > 0.0 then g17.UNomHV / g17.UBaseHV * g17.UBaseLV / g17.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11503};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  tmp117 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* g17.RTfPu PARAM */),0.0);
  tmp118 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* g17.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */) = ((tmp117 || tmp118)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* g17.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* g17.UBaseHV PARAM */),"g17.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* g17.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* g17.UNomLV PARAM */),"g17.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11503;
}

/*
equation index: 11505
type: SIMPLE_ASSIGN
g17.Running0 = not (g17.SwitchOffSignal10 or g17.SwitchOffSignal20 or g17.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11505};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[81]] /* g17.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[82]] /* g17.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[83]] /* g17.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[84]] /* g17.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11505;
}

/*
equation index: 11506
type: SIMPLE_ASSIGN
g17.Kuf = if g17.ExcitationPu == g17.ExcitationPuType.Kundur then 1.0 else if g17.ExcitationPu == g17.ExcitationPuType.UserBase then g17.RfPPu / g17.MdPPuEfd else if g17.ExcitationPu == g17.ExcitationPuType.NoLoad then g17.RfPPu / g17.MdPPu else if g17.ExcitationPu == g17.ExcitationPuType.NoLoadSaturated then g17.RfPPu * (1.0 + g17.md) / g17.MdPPu else g17.RfPPu / g17.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* g17.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[49]] /* g17.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[49]] /* g17.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* g17.MdPPuEfd PARAM */),"g17.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[49]] /* g17.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* g17.MdPPu PARAM */),"g17.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[49]] /* g17.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* g17.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* g17.MdPPu PARAM */),"g17.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1874]] /* g17.MdPPuEfdNom PARAM */),"g17.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11506;
}

/*
equation index: 11507
type: SIMPLE_ASSIGN
g18.QNomAlt = sqrt(g18.SNom ^ 2.0 - g18.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11507};
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  tmp119 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */);
  tmp120 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1988]] /* g18.PNomAlt PARAM */);
  tmp121 = (tmp119 * tmp119) - ((tmp120 * tmp120));
  if(!(tmp121 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g18.SNom ^ 2.0 - g18.PNomAlt ^ 2.0) was %g should be >= 0", tmp121);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* g18.QNomAlt PARAM */) = sqrt(tmp121);
  threadData->lastEquationSolved = 11507;
}

/*
equation index: 11508
type: SIMPLE_ASSIGN
g18.RTfoPu = g18.RTfPu * (g18.UNomHV / g18.UBaseHV) ^ 2.0 * g18.SNom / g18.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11508};
  modelica_real tmp122;
  tmp122 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2012]] /* g18.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* g18.UBaseHV PARAM */),"g18.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1999]] /* g18.RTfPu PARAM */)) * (((tmp122 * tmp122)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2005]] /* g18.SnTfo PARAM */),"g18.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11508;
}

/*
equation index: 11509
type: SIMPLE_ASSIGN
g18.XTfoPu = g18.XTfPu * (g18.UNomHV / g18.UBaseHV) ^ 2.0 * g18.SNom / g18.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11509};
  modelica_real tmp123;
  tmp123 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2012]] /* g18.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* g18.UBaseHV PARAM */),"g18.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* g18.XTfPu PARAM */)) * (((tmp123 * tmp123)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2005]] /* g18.SnTfo PARAM */),"g18.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11509;
}

/*
equation index: 11510
type: SIMPLE_ASSIGN
g18.rTfoPu = if g18.RTfPu > 0.0 or g18.XTfPu > 0.0 then g18.UNomHV / g18.UBaseHV * g18.UBaseLV / g18.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11510};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  tmp124 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1999]] /* g18.RTfPu PARAM */),0.0);
  tmp125 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* g18.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */) = ((tmp124 || tmp125)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2012]] /* g18.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* g18.UBaseHV PARAM */),"g18.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* g18.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2013]] /* g18.UNomLV PARAM */),"g18.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11510;
}

/*
equation index: 11512
type: SIMPLE_ASSIGN
g18.Running0 = not (g18.SwitchOffSignal10 or g18.SwitchOffSignal20 or g18.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11512};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[86]] /* g18.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[87]] /* g18.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[88]] /* g18.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[89]] /* g18.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11512;
}

/*
equation index: 11513
type: SIMPLE_ASSIGN
g18.Kuf = if g18.ExcitationPu == g18.ExcitationPuType.Kundur then 1.0 else if g18.ExcitationPu == g18.ExcitationPuType.UserBase then g18.RfPPu / g18.MdPPuEfd else if g18.ExcitationPu == g18.ExcitationPuType.NoLoad then g18.RfPPu / g18.MdPPu else if g18.ExcitationPu == g18.ExcitationPuType.NoLoadSaturated then g18.RfPPu * (1.0 + g18.md) / g18.MdPPu else g18.RfPPu / g18.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* g18.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[52]] /* g18.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[52]] /* g18.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1976]] /* g18.MdPPuEfd PARAM */),"g18.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[52]] /* g18.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* g18.MdPPu PARAM */),"g18.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[52]] /* g18.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* g18.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* g18.MdPPu PARAM */),"g18.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* g18.MdPPuEfdNom PARAM */),"g18.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11513;
}

/*
equation index: 11514
type: SIMPLE_ASSIGN
g19.QNomAlt = sqrt(g19.SNom ^ 2.0 - g19.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11514};
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  tmp126 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */);
  tmp127 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2091]] /* g19.PNomAlt PARAM */);
  tmp128 = (tmp126 * tmp126) - ((tmp127 * tmp127));
  if(!(tmp128 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g19.SNom ^ 2.0 - g19.PNomAlt ^ 2.0) was %g should be >= 0", tmp128);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2096]] /* g19.QNomAlt PARAM */) = sqrt(tmp128);
  threadData->lastEquationSolved = 11514;
}

/*
equation index: 11515
type: SIMPLE_ASSIGN
g19.RTfoPu = g19.RTfPu * (g19.UNomHV / g19.UBaseHV) ^ 2.0 * g19.SNom / g19.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11515};
  modelica_real tmp129;
  tmp129 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* g19.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* g19.UBaseHV PARAM */),"g19.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2102]] /* g19.RTfPu PARAM */)) * (((tmp129 * tmp129)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2108]] /* g19.SnTfo PARAM */),"g19.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11515;
}

/*
equation index: 11516
type: SIMPLE_ASSIGN
g19.XTfoPu = g19.XTfPu * (g19.UNomHV / g19.UBaseHV) ^ 2.0 * g19.SNom / g19.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11516};
  modelica_real tmp130;
  tmp130 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* g19.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* g19.UBaseHV PARAM */),"g19.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2122]] /* g19.XTfPu PARAM */)) * (((tmp130 * tmp130)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2108]] /* g19.SnTfo PARAM */),"g19.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11516;
}

/*
equation index: 11517
type: SIMPLE_ASSIGN
g19.rTfoPu = if g19.RTfPu > 0.0 or g19.XTfPu > 0.0 then g19.UNomHV / g19.UBaseHV * g19.UBaseLV / g19.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11517};
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  tmp131 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2102]] /* g19.RTfPu PARAM */),0.0);
  tmp132 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2122]] /* g19.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */) = ((tmp131 || tmp132)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* g19.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* g19.UBaseHV PARAM */),"g19.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2113]] /* g19.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2116]] /* g19.UNomLV PARAM */),"g19.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11517;
}

/*
equation index: 11519
type: SIMPLE_ASSIGN
g19.Running0 = not (g19.SwitchOffSignal10 or g19.SwitchOffSignal20 or g19.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11519};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[91]] /* g19.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[92]] /* g19.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[93]] /* g19.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[94]] /* g19.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11519;
}

/*
equation index: 11520
type: SIMPLE_ASSIGN
g19.Kuf = if g19.ExcitationPu == g19.ExcitationPuType.Kundur then 1.0 else if g19.ExcitationPu == g19.ExcitationPuType.UserBase then g19.RfPPu / g19.MdPPuEfd else if g19.ExcitationPu == g19.ExcitationPuType.NoLoad then g19.RfPPu / g19.MdPPu else if g19.ExcitationPu == g19.ExcitationPuType.NoLoadSaturated then g19.RfPPu * (1.0 + g19.md) / g19.MdPPu else g19.RfPPu / g19.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* g19.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[55]] /* g19.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[55]] /* g19.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2079]] /* g19.MdPPuEfd PARAM */),"g19.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[55]] /* g19.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* g19.MdPPu PARAM */),"g19.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[55]] /* g19.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* g19.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* g19.MdPPu PARAM */),"g19.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2080]] /* g19.MdPPuEfdNom PARAM */),"g19.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11520;
}

/*
equation index: 11521
type: SIMPLE_ASSIGN
g20.QNomAlt = sqrt(g20.SNom ^ 2.0 - g20.PNomAlt ^ 2.0)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11521};
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  tmp133 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */);
  tmp134 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2192]] /* g20.PNomAlt PARAM */);
  tmp135 = (tmp133 * tmp133) - ((tmp134 * tmp134));
  if(!(tmp135 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g20.SNom ^ 2.0 - g20.PNomAlt ^ 2.0) was %g should be >= 0", tmp135);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* g20.QNomAlt PARAM */) = sqrt(tmp135);
  threadData->lastEquationSolved = 11521;
}

/*
equation index: 11522
type: SIMPLE_ASSIGN
g20.RTfoPu = g20.RTfPu * (g20.UNomHV / g20.UBaseHV) ^ 2.0 * g20.SNom / g20.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11522};
  modelica_real tmp136;
  tmp136 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2216]] /* g20.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2213]] /* g20.UBaseHV PARAM */),"g20.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2203]] /* g20.RTfPu PARAM */)) * (((tmp136 * tmp136)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* g20.SnTfo PARAM */),"g20.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11522;
}

/*
equation index: 11523
type: SIMPLE_ASSIGN
g20.XTfoPu = g20.XTfPu * (g20.UNomHV / g20.UBaseHV) ^ 2.0 * g20.SNom / g20.SnTfo
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11523};
  modelica_real tmp137;
  tmp137 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2216]] /* g20.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2213]] /* g20.UBaseHV PARAM */),"g20.UBaseHV",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2223]] /* g20.XTfPu PARAM */)) * (((tmp137 * tmp137)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* g20.SnTfo PARAM */),"g20.SnTfo",equationIndexes)));
  threadData->lastEquationSolved = 11523;
}

/*
equation index: 11524
type: SIMPLE_ASSIGN
g20.rTfoPu = if g20.RTfPu > 0.0 or g20.XTfPu > 0.0 then g20.UNomHV / g20.UBaseHV * g20.UBaseLV / g20.UNomLV else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11524};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  tmp138 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2203]] /* g20.RTfPu PARAM */),0.0);
  tmp139 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2223]] /* g20.XTfPu PARAM */),0.0);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */) = ((tmp138 || tmp139)?DIVISION_SIM((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2216]] /* g20.UNomHV PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2213]] /* g20.UBaseHV PARAM */),"g20.UBaseHV",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2214]] /* g20.UBaseLV PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2217]] /* g20.UNomLV PARAM */),"g20.UNomLV",equationIndexes):1.0);
  threadData->lastEquationSolved = 11524;
}

/*
equation index: 11526
type: SIMPLE_ASSIGN
g20.Running0 = not (g20.SwitchOffSignal10 or g20.SwitchOffSignal20 or g20.SwitchOffSignal30)
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11526};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[96]] /* g20.Running0 PARAM */) = (!(((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[97]] /* g20.SwitchOffSignal10 PARAM */) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[98]] /* g20.SwitchOffSignal20 PARAM */)) || (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[99]] /* g20.SwitchOffSignal30 PARAM */)));
  threadData->lastEquationSolved = 11526;
}

/*
equation index: 11527
type: SIMPLE_ASSIGN
g20.Kuf = if g20.ExcitationPu == g20.ExcitationPuType.Kundur then 1.0 else if g20.ExcitationPu == g20.ExcitationPuType.UserBase then g20.RfPPu / g20.MdPPuEfd else if g20.ExcitationPu == g20.ExcitationPuType.NoLoad then g20.RfPPu / g20.MdPPu else if g20.ExcitationPu == g20.ExcitationPuType.NoLoadSaturated then g20.RfPPu * (1.0 + g20.md) / g20.MdPPu else g20.RfPPu / g20.MdPPuEfdNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* g20.Kuf PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* g20.ExcitationPu PARAM */) == 5)?1.0:(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* g20.ExcitationPu PARAM */) == 3)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* g20.MdPPuEfd PARAM */),"g20.MdPPuEfd",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* g20.ExcitationPu PARAM */) == 1)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* g20.MdPPu PARAM */),"g20.MdPPu",equationIndexes):(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* g20.ExcitationPu PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* g20.md PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* g20.MdPPu PARAM */),"g20.MdPPu",equationIndexes):DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2181]] /* g20.MdPPuEfdNom PARAM */),"g20.MdPPuEfdNom",equationIndexes)))));
  threadData->lastEquationSolved = 11527;
}

/*
equation index: 11528
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.k = vrNordic_g01.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4135]] /* vrNordic_g01.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4124]] /* vrNordic_g01.KPss PARAM */);
  threadData->lastEquationSolved = 11528;
}

/*
equation index: 11529
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.T = vrNordic_g01.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4134]] /* vrNordic_g01.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4189]] /* vrNordic_g01.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11529;
}

/*
equation index: 11531
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.zeroGain = abs(vrNordic_g01.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11531};
  modelica_boolean tmp140;
  tmp140 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4135]] /* vrNordic_g01.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[861]] /* vrNordic_g01.derivative.zeroGain PARAM */) = tmp140;
  threadData->lastEquationSolved = 11531;
}

/*
equation index: 11532
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.b[1] = vrNordic_g01.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4160]] /* vrNordic_g01.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4192]] /* vrNordic_g01.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11532;
}

/*
equation index: 11533
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.a[1] = vrNordic_g01.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4157]] /* vrNordic_g01.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4190]] /* vrNordic_g01.tLagPss PARAM */);
  threadData->lastEquationSolved = 11533;
}

/*
equation index: 11537
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.bb[1] = vrNordic_g01.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4162]] /* vrNordic_g01.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4160]] /* vrNordic_g01.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11537;
}

/*
equation index: 11538
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.bb[2] = vrNordic_g01.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4163]] /* vrNordic_g01.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4161]] /* vrNordic_g01.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11538;
}

/*
equation index: 11539
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.d = vrNordic_g01.leadLag1.bb[1] / vrNordic_g01.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4164]] /* vrNordic_g01.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4162]] /* vrNordic_g01.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4157]] /* vrNordic_g01.leadLag1.a[1] PARAM */),"vrNordic_g01.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11539;
}

/*
equation index: 11540
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.a_end = if vrNordic_g01.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g01.leadLag1.a[1] ^ 2.0 + vrNordic_g01.leadLag1.a[2] ^ 2.0) then vrNordic_g01.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11540};
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  tmp141 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4157]] /* vrNordic_g01.leadLag1.a[1] PARAM */);
  tmp142 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */);
  tmp143 = (tmp141 * tmp141) + (tmp142 * tmp142);
  if(!(tmp143 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g01.leadLag1.a[1] ^ 2.0 + vrNordic_g01.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp143);
    }
  }tmp144 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp143)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */) = (tmp144?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11540;
}

/*
equation index: 11541
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.X0[1] = if vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag1.u_start / vrNordic_g01.leadLag1.a_end else if vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4155]] /* vrNordic_g01.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4165]] /* vrNordic_g01.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */),"vrNordic_g01.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4166]] /* vrNordic_g01.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11541;
}

/*
equation index: 11542
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.Y0 = if vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag1.u_start * vrNordic_g01.leadLag1.b[2] / vrNordic_g01.leadLag1.a_end else if vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11542};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4156]] /* vrNordic_g01.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4165]] /* vrNordic_g01.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4161]] /* vrNordic_g01.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */),"vrNordic_g01.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[436]] /* vrNordic_g01.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4167]] /* vrNordic_g01.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11542;
}

/*
equation index: 11543
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.b[1] = vrNordic_g01.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4173]] /* vrNordic_g01.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4192]] /* vrNordic_g01.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11543;
}

/*
equation index: 11544
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.a[1] = vrNordic_g01.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4170]] /* vrNordic_g01.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4190]] /* vrNordic_g01.tLagPss PARAM */);
  threadData->lastEquationSolved = 11544;
}

/*
equation index: 11548
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.bb[1] = vrNordic_g01.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4175]] /* vrNordic_g01.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4173]] /* vrNordic_g01.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11548;
}

/*
equation index: 11549
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.bb[2] = vrNordic_g01.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4176]] /* vrNordic_g01.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4174]] /* vrNordic_g01.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11549;
}

/*
equation index: 11550
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.d = vrNordic_g01.leadLag2.bb[1] / vrNordic_g01.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4177]] /* vrNordic_g01.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4175]] /* vrNordic_g01.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4170]] /* vrNordic_g01.leadLag2.a[1] PARAM */),"vrNordic_g01.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11550;
}

/*
equation index: 11551
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.a_end = if vrNordic_g01.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g01.leadLag2.a[1] ^ 2.0 + vrNordic_g01.leadLag2.a[2] ^ 2.0) then vrNordic_g01.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11551};
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_boolean tmp148;
  tmp145 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4170]] /* vrNordic_g01.leadLag2.a[1] PARAM */);
  tmp146 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */);
  tmp147 = (tmp145 * tmp145) + (tmp146 * tmp146);
  if(!(tmp147 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g01.leadLag2.a[1] ^ 2.0 + vrNordic_g01.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp147);
    }
  }tmp148 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp147)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */) = (tmp148?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11551;
}

/*
equation index: 11552
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.X0[1] = if vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag2.u_start / vrNordic_g01.leadLag2.a_end else if vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4168]] /* vrNordic_g01.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4178]] /* vrNordic_g01.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */),"vrNordic_g01.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4179]] /* vrNordic_g01.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11552;
}

/*
equation index: 11553
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.Y0 = if vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g01.leadLag2.u_start * vrNordic_g01.leadLag2.b[2] / vrNordic_g01.leadLag2.a_end else if vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g01.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g01.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4169]] /* vrNordic_g01.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4178]] /* vrNordic_g01.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4174]] /* vrNordic_g01.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */),"vrNordic_g01.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[440]] /* vrNordic_g01.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4180]] /* vrNordic_g01.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11553;
}

/*
equation index: 11554
type: SIMPLE_ASSIGN
vrNordic_g01.limiter.uMin = -vrNordic_g01.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11554;
}

/*
equation index: 11558
type: SIMPLE_ASSIGN
vrNordic_g01.const2.k = vrNordic_g01.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4133]] /* vrNordic_g01.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4123]] /* vrNordic_g01.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11558;
}

/*
equation index: 11559
type: SIMPLE_ASSIGN
vrNordic_g01.kMulDU.k = vrNordic_g01.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4141]] /* vrNordic_g01.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4125]] /* vrNordic_g01.KTgr PARAM */);
  threadData->lastEquationSolved = 11559;
}

/*
equation index: 11560
type: SIMPLE_ASSIGN
vrNordic_g01.overExcitationLimitation.OelMode = vrNordic_g01.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4187]] /* vrNordic_g01.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4126]] /* vrNordic_g01.OelMode PARAM */);
  threadData->lastEquationSolved = 11560;
}

/*
equation index: 11561
type: SIMPLE_ASSIGN
vrNordic_g01.limIntegrator.outMax = vrNordic_g01.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4121]] /* vrNordic_g01.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11561;
}

/*
equation index: 11567
type: SIMPLE_ASSIGN
vrNordic_g01.timer.outMin = vrNordic_g01.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4194]] /* vrNordic_g01.tOelMin PARAM */);
  threadData->lastEquationSolved = 11567;
}

/*
equation index: 11572
type: SIMPLE_ASSIGN
vrNordic_g01.timer.y_start = vrNordic_g01.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4198]] /* vrNordic_g01.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4194]] /* vrNordic_g01.tOelMin PARAM */);
  threadData->lastEquationSolved = 11572;
}

/*
equation index: 11574
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.b[1] = vrNordic_g01.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4147]] /* vrNordic_g01.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4193]] /* vrNordic_g01.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11574;
}

/*
equation index: 11575
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.a[1] = vrNordic_g01.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4144]] /* vrNordic_g01.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4191]] /* vrNordic_g01.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11575;
}

/*
equation index: 11579
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.bb[1] = vrNordic_g01.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11579};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4149]] /* vrNordic_g01.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4147]] /* vrNordic_g01.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11579;
}

/*
equation index: 11580
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.bb[2] = vrNordic_g01.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4150]] /* vrNordic_g01.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4148]] /* vrNordic_g01.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11580;
}

/*
equation index: 11581
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.d = vrNordic_g01.leadLag.bb[1] / vrNordic_g01.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4151]] /* vrNordic_g01.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4149]] /* vrNordic_g01.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4144]] /* vrNordic_g01.leadLag.a[1] PARAM */),"vrNordic_g01.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11581;
}

/*
equation index: 11582
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.a_end = if vrNordic_g01.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g01.leadLag.a[1] ^ 2.0 + vrNordic_g01.leadLag.a[2] ^ 2.0) then vrNordic_g01.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11582};
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  tmp149 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4144]] /* vrNordic_g01.leadLag.a[1] PARAM */);
  tmp150 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */);
  tmp151 = (tmp149 * tmp149) + (tmp150 * tmp150);
  if(!(tmp151 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g01.leadLag.a[1] ^ 2.0 + vrNordic_g01.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp151);
    }
  }tmp152 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp151)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */) = (tmp152?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11582;
}

/*
equation index: 11586
type: SIMPLE_ASSIGN
goverNordic_g01.govKp.k = goverNordic_g01.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11586};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* goverNordic_g01.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2255]] /* goverNordic_g01.Kp PARAM */);
  threadData->lastEquationSolved = 11586;
}

/*
equation index: 11587
type: SIMPLE_ASSIGN
goverNordic_g01.govKi.k = goverNordic_g01.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* goverNordic_g01.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2254]] /* goverNordic_g01.Ki PARAM */);
  threadData->lastEquationSolved = 11587;
}

/*
equation index: 11591
type: SIMPLE_ASSIGN
goverNordic_g01.dOmegaPlusDroop.k2 = goverNordic_g01.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* goverNordic_g01.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2253]] /* goverNordic_g01.KSigma PARAM */);
  threadData->lastEquationSolved = 11591;
}

/*
equation index: 11594
type: SIMPLE_ASSIGN
goverNordic_g01.perUnitP.k = 100.0 / goverNordic_g01.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* goverNordic_g01.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* goverNordic_g01.PNom PARAM */),"goverNordic_g01.PNom",equationIndexes);
  threadData->lastEquationSolved = 11594;
}

/*
equation index: 11595
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.DuMin = -goverNordic_g01.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* goverNordic_g01.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* goverNordic_g01.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 11595;
}

/*
equation index: 11596
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limiter.uMax = goverNordic_g01.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* goverNordic_g01.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 11596;
}

/*
equation index: 11597
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limiter.uMin = goverNordic_g01.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* goverNordic_g01.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 11597;
}

/*
equation index: 11601
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g01.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2278]] /* goverNordic_g01.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* goverNordic_g01.limRateLimFirstOrder.tS PARAM */),"goverNordic_g01.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 11601;
}

/*
equation index: 11602
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g01.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2276]] /* goverNordic_g01.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 11602;
}

/*
equation index: 11603
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g01.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2277]] /* goverNordic_g01.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 11603;
}

/*
equation index: 11609
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.k = vrNordic_g02.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4214]] /* vrNordic_g02.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4203]] /* vrNordic_g02.KPss PARAM */);
  threadData->lastEquationSolved = 11609;
}

/*
equation index: 11610
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.T = vrNordic_g02.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4213]] /* vrNordic_g02.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4268]] /* vrNordic_g02.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11610;
}

/*
equation index: 11612
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.zeroGain = abs(vrNordic_g02.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11612};
  modelica_boolean tmp153;
  tmp153 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4214]] /* vrNordic_g02.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[872]] /* vrNordic_g02.derivative.zeroGain PARAM */) = tmp153;
  threadData->lastEquationSolved = 11612;
}

/*
equation index: 11613
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.b[1] = vrNordic_g02.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4239]] /* vrNordic_g02.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4271]] /* vrNordic_g02.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11613;
}

/*
equation index: 11614
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.a[1] = vrNordic_g02.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4236]] /* vrNordic_g02.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4269]] /* vrNordic_g02.tLagPss PARAM */);
  threadData->lastEquationSolved = 11614;
}

/*
equation index: 11618
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.bb[1] = vrNordic_g02.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4241]] /* vrNordic_g02.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4239]] /* vrNordic_g02.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11618;
}

/*
equation index: 11619
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.bb[2] = vrNordic_g02.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4242]] /* vrNordic_g02.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4240]] /* vrNordic_g02.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11619;
}

/*
equation index: 11620
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.d = vrNordic_g02.leadLag1.bb[1] / vrNordic_g02.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4243]] /* vrNordic_g02.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4241]] /* vrNordic_g02.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4236]] /* vrNordic_g02.leadLag1.a[1] PARAM */),"vrNordic_g02.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11620;
}

/*
equation index: 11621
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.a_end = if vrNordic_g02.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g02.leadLag1.a[1] ^ 2.0 + vrNordic_g02.leadLag1.a[2] ^ 2.0) then vrNordic_g02.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11621};
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_boolean tmp157;
  tmp154 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4236]] /* vrNordic_g02.leadLag1.a[1] PARAM */);
  tmp155 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */);
  tmp156 = (tmp154 * tmp154) + (tmp155 * tmp155);
  if(!(tmp156 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g02.leadLag1.a[1] ^ 2.0 + vrNordic_g02.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp156);
    }
  }tmp157 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp156)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */) = (tmp157?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11621;
}

/*
equation index: 11622
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.X0[1] = if vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag1.u_start / vrNordic_g02.leadLag1.a_end else if vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4234]] /* vrNordic_g02.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4244]] /* vrNordic_g02.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */),"vrNordic_g02.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4245]] /* vrNordic_g02.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11622;
}

/*
equation index: 11623
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.Y0 = if vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag1.u_start * vrNordic_g02.leadLag1.b[2] / vrNordic_g02.leadLag1.a_end else if vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4235]] /* vrNordic_g02.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4244]] /* vrNordic_g02.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4240]] /* vrNordic_g02.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */),"vrNordic_g02.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* vrNordic_g02.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4246]] /* vrNordic_g02.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11623;
}

/*
equation index: 11624
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.b[1] = vrNordic_g02.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4252]] /* vrNordic_g02.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4271]] /* vrNordic_g02.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11624;
}

/*
equation index: 11625
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.a[1] = vrNordic_g02.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4249]] /* vrNordic_g02.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4269]] /* vrNordic_g02.tLagPss PARAM */);
  threadData->lastEquationSolved = 11625;
}

/*
equation index: 11629
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.bb[1] = vrNordic_g02.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4254]] /* vrNordic_g02.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4252]] /* vrNordic_g02.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11629;
}

/*
equation index: 11630
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.bb[2] = vrNordic_g02.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4255]] /* vrNordic_g02.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4253]] /* vrNordic_g02.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11630;
}

/*
equation index: 11631
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.d = vrNordic_g02.leadLag2.bb[1] / vrNordic_g02.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4256]] /* vrNordic_g02.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4254]] /* vrNordic_g02.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4249]] /* vrNordic_g02.leadLag2.a[1] PARAM */),"vrNordic_g02.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11631;
}

/*
equation index: 11632
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.a_end = if vrNordic_g02.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g02.leadLag2.a[1] ^ 2.0 + vrNordic_g02.leadLag2.a[2] ^ 2.0) then vrNordic_g02.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11632};
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_boolean tmp161;
  tmp158 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4249]] /* vrNordic_g02.leadLag2.a[1] PARAM */);
  tmp159 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */);
  tmp160 = (tmp158 * tmp158) + (tmp159 * tmp159);
  if(!(tmp160 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g02.leadLag2.a[1] ^ 2.0 + vrNordic_g02.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp160);
    }
  }tmp161 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp160)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */) = (tmp161?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11632;
}

/*
equation index: 11633
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.X0[1] = if vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag2.u_start / vrNordic_g02.leadLag2.a_end else if vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4247]] /* vrNordic_g02.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4257]] /* vrNordic_g02.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */),"vrNordic_g02.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4258]] /* vrNordic_g02.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11633;
}

/*
equation index: 11634
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.Y0 = if vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g02.leadLag2.u_start * vrNordic_g02.leadLag2.b[2] / vrNordic_g02.leadLag2.a_end else if vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g02.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g02.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4248]] /* vrNordic_g02.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4257]] /* vrNordic_g02.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4253]] /* vrNordic_g02.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */),"vrNordic_g02.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[456]] /* vrNordic_g02.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4259]] /* vrNordic_g02.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11634;
}

/*
equation index: 11635
type: SIMPLE_ASSIGN
vrNordic_g02.limiter.uMin = -vrNordic_g02.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11635;
}

/*
equation index: 11639
type: SIMPLE_ASSIGN
vrNordic_g02.const2.k = vrNordic_g02.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4212]] /* vrNordic_g02.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4202]] /* vrNordic_g02.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11639;
}

/*
equation index: 11640
type: SIMPLE_ASSIGN
vrNordic_g02.kMulDU.k = vrNordic_g02.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4220]] /* vrNordic_g02.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4204]] /* vrNordic_g02.KTgr PARAM */);
  threadData->lastEquationSolved = 11640;
}

/*
equation index: 11641
type: SIMPLE_ASSIGN
vrNordic_g02.overExcitationLimitation.OelMode = vrNordic_g02.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4266]] /* vrNordic_g02.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4205]] /* vrNordic_g02.OelMode PARAM */);
  threadData->lastEquationSolved = 11641;
}

/*
equation index: 11642
type: SIMPLE_ASSIGN
vrNordic_g02.limIntegrator.outMax = vrNordic_g02.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4200]] /* vrNordic_g02.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11642;
}

/*
equation index: 11648
type: SIMPLE_ASSIGN
vrNordic_g02.timer.outMin = vrNordic_g02.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4273]] /* vrNordic_g02.tOelMin PARAM */);
  threadData->lastEquationSolved = 11648;
}

/*
equation index: 11653
type: SIMPLE_ASSIGN
vrNordic_g02.timer.y_start = vrNordic_g02.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4277]] /* vrNordic_g02.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4273]] /* vrNordic_g02.tOelMin PARAM */);
  threadData->lastEquationSolved = 11653;
}

/*
equation index: 11655
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.b[1] = vrNordic_g02.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4226]] /* vrNordic_g02.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4272]] /* vrNordic_g02.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11655;
}

/*
equation index: 11656
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.a[1] = vrNordic_g02.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4223]] /* vrNordic_g02.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4270]] /* vrNordic_g02.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11656;
}

/*
equation index: 11660
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.bb[1] = vrNordic_g02.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4228]] /* vrNordic_g02.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4226]] /* vrNordic_g02.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11660;
}

/*
equation index: 11661
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.bb[2] = vrNordic_g02.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4229]] /* vrNordic_g02.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4227]] /* vrNordic_g02.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11661;
}

/*
equation index: 11662
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.d = vrNordic_g02.leadLag.bb[1] / vrNordic_g02.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11662};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4230]] /* vrNordic_g02.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4228]] /* vrNordic_g02.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4223]] /* vrNordic_g02.leadLag.a[1] PARAM */),"vrNordic_g02.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11662;
}

/*
equation index: 11663
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.a_end = if vrNordic_g02.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g02.leadLag.a[1] ^ 2.0 + vrNordic_g02.leadLag.a[2] ^ 2.0) then vrNordic_g02.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11663};
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_boolean tmp165;
  tmp162 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4223]] /* vrNordic_g02.leadLag.a[1] PARAM */);
  tmp163 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */);
  tmp164 = (tmp162 * tmp162) + (tmp163 * tmp163);
  if(!(tmp164 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g02.leadLag.a[1] ^ 2.0 + vrNordic_g02.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp164);
    }
  }tmp165 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp164)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */) = (tmp165?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11663;
}

/*
equation index: 11667
type: SIMPLE_ASSIGN
goverNordic_g02.govKp.k = goverNordic_g02.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* goverNordic_g02.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2291]] /* goverNordic_g02.Kp PARAM */);
  threadData->lastEquationSolved = 11667;
}

/*
equation index: 11668
type: SIMPLE_ASSIGN
goverNordic_g02.govKi.k = goverNordic_g02.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2304]] /* goverNordic_g02.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* goverNordic_g02.Ki PARAM */);
  threadData->lastEquationSolved = 11668;
}

/*
equation index: 11672
type: SIMPLE_ASSIGN
goverNordic_g02.dOmegaPlusDroop.k2 = goverNordic_g02.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* goverNordic_g02.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* goverNordic_g02.KSigma PARAM */);
  threadData->lastEquationSolved = 11672;
}

/*
equation index: 11675
type: SIMPLE_ASSIGN
goverNordic_g02.perUnitP.k = 100.0 / goverNordic_g02.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2322]] /* goverNordic_g02.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* goverNordic_g02.PNom PARAM */),"goverNordic_g02.PNom",equationIndexes);
  threadData->lastEquationSolved = 11675;
}

/*
equation index: 11676
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.DuMin = -goverNordic_g02.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2310]] /* goverNordic_g02.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2309]] /* goverNordic_g02.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 11676;
}

/*
equation index: 11677
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limiter.uMax = goverNordic_g02.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2309]] /* goverNordic_g02.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 11677;
}

/*
equation index: 11678
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limiter.uMin = goverNordic_g02.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2310]] /* goverNordic_g02.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 11678;
}

/*
equation index: 11682
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g02.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* goverNordic_g02.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2321]] /* goverNordic_g02.limRateLimFirstOrder.tS PARAM */),"goverNordic_g02.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 11682;
}

/*
equation index: 11683
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g02.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11683};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2312]] /* goverNordic_g02.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 11683;
}

/*
equation index: 11684
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g02.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* goverNordic_g02.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 11684;
}

/*
equation index: 11690
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.k = vrNordic_g03.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4293]] /* vrNordic_g03.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4282]] /* vrNordic_g03.KPss PARAM */);
  threadData->lastEquationSolved = 11690;
}

/*
equation index: 11691
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.T = vrNordic_g03.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4292]] /* vrNordic_g03.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4347]] /* vrNordic_g03.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11691;
}

/*
equation index: 11693
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.zeroGain = abs(vrNordic_g03.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11693};
  modelica_boolean tmp166;
  tmp166 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4293]] /* vrNordic_g03.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[883]] /* vrNordic_g03.derivative.zeroGain PARAM */) = tmp166;
  threadData->lastEquationSolved = 11693;
}

/*
equation index: 11694
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.b[1] = vrNordic_g03.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4318]] /* vrNordic_g03.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4350]] /* vrNordic_g03.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11694;
}

/*
equation index: 11695
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.a[1] = vrNordic_g03.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4315]] /* vrNordic_g03.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4348]] /* vrNordic_g03.tLagPss PARAM */);
  threadData->lastEquationSolved = 11695;
}

/*
equation index: 11699
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.bb[1] = vrNordic_g03.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4320]] /* vrNordic_g03.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4318]] /* vrNordic_g03.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11699;
}

/*
equation index: 11700
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.bb[2] = vrNordic_g03.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4321]] /* vrNordic_g03.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4319]] /* vrNordic_g03.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11700;
}

/*
equation index: 11701
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.d = vrNordic_g03.leadLag1.bb[1] / vrNordic_g03.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4322]] /* vrNordic_g03.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4320]] /* vrNordic_g03.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4315]] /* vrNordic_g03.leadLag1.a[1] PARAM */),"vrNordic_g03.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11701;
}

/*
equation index: 11702
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.a_end = if vrNordic_g03.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g03.leadLag1.a[1] ^ 2.0 + vrNordic_g03.leadLag1.a[2] ^ 2.0) then vrNordic_g03.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11702};
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_boolean tmp170;
  tmp167 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4315]] /* vrNordic_g03.leadLag1.a[1] PARAM */);
  tmp168 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */);
  tmp169 = (tmp167 * tmp167) + (tmp168 * tmp168);
  if(!(tmp169 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g03.leadLag1.a[1] ^ 2.0 + vrNordic_g03.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp169);
    }
  }tmp170 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp169)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */) = (tmp170?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11702;
}

/*
equation index: 11703
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.X0[1] = if vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag1.u_start / vrNordic_g03.leadLag1.a_end else if vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4313]] /* vrNordic_g03.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4323]] /* vrNordic_g03.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */),"vrNordic_g03.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4324]] /* vrNordic_g03.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11703;
}

/*
equation index: 11704
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.Y0 = if vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag1.u_start * vrNordic_g03.leadLag1.b[2] / vrNordic_g03.leadLag1.a_end else if vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4314]] /* vrNordic_g03.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4323]] /* vrNordic_g03.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4319]] /* vrNordic_g03.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */),"vrNordic_g03.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[468]] /* vrNordic_g03.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4325]] /* vrNordic_g03.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11704;
}

/*
equation index: 11705
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.b[1] = vrNordic_g03.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4331]] /* vrNordic_g03.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4350]] /* vrNordic_g03.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11705;
}

/*
equation index: 11706
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.a[1] = vrNordic_g03.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4328]] /* vrNordic_g03.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4348]] /* vrNordic_g03.tLagPss PARAM */);
  threadData->lastEquationSolved = 11706;
}

/*
equation index: 11710
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.bb[1] = vrNordic_g03.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4333]] /* vrNordic_g03.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4331]] /* vrNordic_g03.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11710;
}

/*
equation index: 11711
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.bb[2] = vrNordic_g03.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4334]] /* vrNordic_g03.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4332]] /* vrNordic_g03.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11711;
}

/*
equation index: 11712
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.d = vrNordic_g03.leadLag2.bb[1] / vrNordic_g03.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4335]] /* vrNordic_g03.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4333]] /* vrNordic_g03.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4328]] /* vrNordic_g03.leadLag2.a[1] PARAM */),"vrNordic_g03.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11712;
}

/*
equation index: 11713
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.a_end = if vrNordic_g03.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g03.leadLag2.a[1] ^ 2.0 + vrNordic_g03.leadLag2.a[2] ^ 2.0) then vrNordic_g03.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11713};
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  tmp171 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4328]] /* vrNordic_g03.leadLag2.a[1] PARAM */);
  tmp172 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */);
  tmp173 = (tmp171 * tmp171) + (tmp172 * tmp172);
  if(!(tmp173 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g03.leadLag2.a[1] ^ 2.0 + vrNordic_g03.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp173);
    }
  }tmp174 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp173)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */) = (tmp174?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11713;
}

/*
equation index: 11714
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.X0[1] = if vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag2.u_start / vrNordic_g03.leadLag2.a_end else if vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4326]] /* vrNordic_g03.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4336]] /* vrNordic_g03.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */),"vrNordic_g03.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4337]] /* vrNordic_g03.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11714;
}

/*
equation index: 11715
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.Y0 = if vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g03.leadLag2.u_start * vrNordic_g03.leadLag2.b[2] / vrNordic_g03.leadLag2.a_end else if vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g03.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g03.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4327]] /* vrNordic_g03.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4336]] /* vrNordic_g03.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4332]] /* vrNordic_g03.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */),"vrNordic_g03.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[472]] /* vrNordic_g03.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4338]] /* vrNordic_g03.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11715;
}

/*
equation index: 11716
type: SIMPLE_ASSIGN
vrNordic_g03.limiter.uMin = -vrNordic_g03.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11716;
}

/*
equation index: 11720
type: SIMPLE_ASSIGN
vrNordic_g03.const2.k = vrNordic_g03.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4291]] /* vrNordic_g03.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4281]] /* vrNordic_g03.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11720;
}

/*
equation index: 11721
type: SIMPLE_ASSIGN
vrNordic_g03.kMulDU.k = vrNordic_g03.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4299]] /* vrNordic_g03.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4283]] /* vrNordic_g03.KTgr PARAM */);
  threadData->lastEquationSolved = 11721;
}

/*
equation index: 11722
type: SIMPLE_ASSIGN
vrNordic_g03.overExcitationLimitation.OelMode = vrNordic_g03.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4345]] /* vrNordic_g03.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4284]] /* vrNordic_g03.OelMode PARAM */);
  threadData->lastEquationSolved = 11722;
}

/*
equation index: 11723
type: SIMPLE_ASSIGN
vrNordic_g03.limIntegrator.outMax = vrNordic_g03.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4279]] /* vrNordic_g03.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11723;
}

/*
equation index: 11729
type: SIMPLE_ASSIGN
vrNordic_g03.timer.outMin = vrNordic_g03.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4352]] /* vrNordic_g03.tOelMin PARAM */);
  threadData->lastEquationSolved = 11729;
}

/*
equation index: 11734
type: SIMPLE_ASSIGN
vrNordic_g03.timer.y_start = vrNordic_g03.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4356]] /* vrNordic_g03.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4352]] /* vrNordic_g03.tOelMin PARAM */);
  threadData->lastEquationSolved = 11734;
}

/*
equation index: 11736
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.b[1] = vrNordic_g03.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4305]] /* vrNordic_g03.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4351]] /* vrNordic_g03.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11736;
}

/*
equation index: 11737
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.a[1] = vrNordic_g03.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4302]] /* vrNordic_g03.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4349]] /* vrNordic_g03.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11737;
}

/*
equation index: 11741
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.bb[1] = vrNordic_g03.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4307]] /* vrNordic_g03.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4305]] /* vrNordic_g03.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11741;
}

/*
equation index: 11742
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.bb[2] = vrNordic_g03.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4308]] /* vrNordic_g03.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4306]] /* vrNordic_g03.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11742;
}

/*
equation index: 11743
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.d = vrNordic_g03.leadLag.bb[1] / vrNordic_g03.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4309]] /* vrNordic_g03.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4307]] /* vrNordic_g03.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4302]] /* vrNordic_g03.leadLag.a[1] PARAM */),"vrNordic_g03.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11743;
}

/*
equation index: 11744
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.a_end = if vrNordic_g03.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g03.leadLag.a[1] ^ 2.0 + vrNordic_g03.leadLag.a[2] ^ 2.0) then vrNordic_g03.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11744};
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_boolean tmp178;
  tmp175 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4302]] /* vrNordic_g03.leadLag.a[1] PARAM */);
  tmp176 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */);
  tmp177 = (tmp175 * tmp175) + (tmp176 * tmp176);
  if(!(tmp177 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g03.leadLag.a[1] ^ 2.0 + vrNordic_g03.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp177);
    }
  }tmp178 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp177)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */) = (tmp178?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11744;
}

/*
equation index: 11748
type: SIMPLE_ASSIGN
goverNordic_g03.govKp.k = goverNordic_g03.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2341]] /* goverNordic_g03.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* goverNordic_g03.Kp PARAM */);
  threadData->lastEquationSolved = 11748;
}

/*
equation index: 11749
type: SIMPLE_ASSIGN
goverNordic_g03.govKi.k = goverNordic_g03.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2340]] /* goverNordic_g03.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* goverNordic_g03.Ki PARAM */);
  threadData->lastEquationSolved = 11749;
}

/*
equation index: 11753
type: SIMPLE_ASSIGN
goverNordic_g03.dOmegaPlusDroop.k2 = goverNordic_g03.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* goverNordic_g03.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* goverNordic_g03.KSigma PARAM */);
  threadData->lastEquationSolved = 11753;
}

/*
equation index: 11756
type: SIMPLE_ASSIGN
goverNordic_g03.perUnitP.k = 100.0 / goverNordic_g03.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* goverNordic_g03.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* goverNordic_g03.PNom PARAM */),"goverNordic_g03.PNom",equationIndexes);
  threadData->lastEquationSolved = 11756;
}

/*
equation index: 11757
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.DuMin = -goverNordic_g03.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2346]] /* goverNordic_g03.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2345]] /* goverNordic_g03.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 11757;
}

/*
equation index: 11758
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limiter.uMax = goverNordic_g03.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2345]] /* goverNordic_g03.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 11758;
}

/*
equation index: 11759
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limiter.uMin = goverNordic_g03.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2346]] /* goverNordic_g03.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 11759;
}

/*
equation index: 11763
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g03.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2350]] /* goverNordic_g03.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2357]] /* goverNordic_g03.limRateLimFirstOrder.tS PARAM */),"goverNordic_g03.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 11763;
}

/*
equation index: 11764
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g03.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2348]] /* goverNordic_g03.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 11764;
}

/*
equation index: 11765
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g03.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2349]] /* goverNordic_g03.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 11765;
}

/*
equation index: 11771
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.k = vrNordic_g04.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4372]] /* vrNordic_g04.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4361]] /* vrNordic_g04.KPss PARAM */);
  threadData->lastEquationSolved = 11771;
}

/*
equation index: 11772
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.T = vrNordic_g04.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4371]] /* vrNordic_g04.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4426]] /* vrNordic_g04.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11772;
}

/*
equation index: 11774
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.zeroGain = abs(vrNordic_g04.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11774};
  modelica_boolean tmp179;
  tmp179 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4372]] /* vrNordic_g04.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[894]] /* vrNordic_g04.derivative.zeroGain PARAM */) = tmp179;
  threadData->lastEquationSolved = 11774;
}

/*
equation index: 11775
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.b[1] = vrNordic_g04.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4397]] /* vrNordic_g04.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4429]] /* vrNordic_g04.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11775;
}

/*
equation index: 11776
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.a[1] = vrNordic_g04.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4394]] /* vrNordic_g04.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4427]] /* vrNordic_g04.tLagPss PARAM */);
  threadData->lastEquationSolved = 11776;
}

/*
equation index: 11780
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.bb[1] = vrNordic_g04.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4399]] /* vrNordic_g04.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4397]] /* vrNordic_g04.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11780;
}

/*
equation index: 11781
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.bb[2] = vrNordic_g04.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4400]] /* vrNordic_g04.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4398]] /* vrNordic_g04.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11781;
}

/*
equation index: 11782
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.d = vrNordic_g04.leadLag1.bb[1] / vrNordic_g04.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4401]] /* vrNordic_g04.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4399]] /* vrNordic_g04.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4394]] /* vrNordic_g04.leadLag1.a[1] PARAM */),"vrNordic_g04.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11782;
}

/*
equation index: 11783
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.a_end = if vrNordic_g04.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g04.leadLag1.a[1] ^ 2.0 + vrNordic_g04.leadLag1.a[2] ^ 2.0) then vrNordic_g04.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11783};
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_boolean tmp183;
  tmp180 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4394]] /* vrNordic_g04.leadLag1.a[1] PARAM */);
  tmp181 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */);
  tmp182 = (tmp180 * tmp180) + (tmp181 * tmp181);
  if(!(tmp182 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g04.leadLag1.a[1] ^ 2.0 + vrNordic_g04.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp182);
    }
  }tmp183 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp182)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */) = (tmp183?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11783;
}

/*
equation index: 11784
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.X0[1] = if vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag1.u_start / vrNordic_g04.leadLag1.a_end else if vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4392]] /* vrNordic_g04.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4402]] /* vrNordic_g04.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */),"vrNordic_g04.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4403]] /* vrNordic_g04.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11784;
}

/*
equation index: 11785
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.Y0 = if vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag1.u_start * vrNordic_g04.leadLag1.b[2] / vrNordic_g04.leadLag1.a_end else if vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4393]] /* vrNordic_g04.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4402]] /* vrNordic_g04.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4398]] /* vrNordic_g04.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */),"vrNordic_g04.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[484]] /* vrNordic_g04.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4404]] /* vrNordic_g04.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11785;
}

/*
equation index: 11786
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.b[1] = vrNordic_g04.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4410]] /* vrNordic_g04.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4429]] /* vrNordic_g04.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11786;
}

/*
equation index: 11787
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.a[1] = vrNordic_g04.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4407]] /* vrNordic_g04.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4427]] /* vrNordic_g04.tLagPss PARAM */);
  threadData->lastEquationSolved = 11787;
}

/*
equation index: 11791
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.bb[1] = vrNordic_g04.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4412]] /* vrNordic_g04.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4410]] /* vrNordic_g04.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11791;
}

/*
equation index: 11792
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.bb[2] = vrNordic_g04.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4413]] /* vrNordic_g04.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4411]] /* vrNordic_g04.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11792;
}

/*
equation index: 11793
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.d = vrNordic_g04.leadLag2.bb[1] / vrNordic_g04.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4414]] /* vrNordic_g04.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4412]] /* vrNordic_g04.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4407]] /* vrNordic_g04.leadLag2.a[1] PARAM */),"vrNordic_g04.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11793;
}

/*
equation index: 11794
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.a_end = if vrNordic_g04.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g04.leadLag2.a[1] ^ 2.0 + vrNordic_g04.leadLag2.a[2] ^ 2.0) then vrNordic_g04.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11794};
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_boolean tmp187;
  tmp184 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4407]] /* vrNordic_g04.leadLag2.a[1] PARAM */);
  tmp185 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */);
  tmp186 = (tmp184 * tmp184) + (tmp185 * tmp185);
  if(!(tmp186 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g04.leadLag2.a[1] ^ 2.0 + vrNordic_g04.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp186);
    }
  }tmp187 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp186)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */) = (tmp187?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11794;
}

/*
equation index: 11795
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.X0[1] = if vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag2.u_start / vrNordic_g04.leadLag2.a_end else if vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4405]] /* vrNordic_g04.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4415]] /* vrNordic_g04.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */),"vrNordic_g04.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4416]] /* vrNordic_g04.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11795;
}

/*
equation index: 11796
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.Y0 = if vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g04.leadLag2.u_start * vrNordic_g04.leadLag2.b[2] / vrNordic_g04.leadLag2.a_end else if vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g04.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g04.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4406]] /* vrNordic_g04.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4415]] /* vrNordic_g04.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4411]] /* vrNordic_g04.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */),"vrNordic_g04.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[488]] /* vrNordic_g04.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4417]] /* vrNordic_g04.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11796;
}

/*
equation index: 11797
type: SIMPLE_ASSIGN
vrNordic_g04.limiter.uMin = -vrNordic_g04.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11797;
}

/*
equation index: 11801
type: SIMPLE_ASSIGN
vrNordic_g04.const2.k = vrNordic_g04.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4370]] /* vrNordic_g04.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4360]] /* vrNordic_g04.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11801;
}

/*
equation index: 11802
type: SIMPLE_ASSIGN
vrNordic_g04.kMulDU.k = vrNordic_g04.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4378]] /* vrNordic_g04.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4362]] /* vrNordic_g04.KTgr PARAM */);
  threadData->lastEquationSolved = 11802;
}

/*
equation index: 11803
type: SIMPLE_ASSIGN
vrNordic_g04.overExcitationLimitation.OelMode = vrNordic_g04.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11803};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4424]] /* vrNordic_g04.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4363]] /* vrNordic_g04.OelMode PARAM */);
  threadData->lastEquationSolved = 11803;
}

/*
equation index: 11804
type: SIMPLE_ASSIGN
vrNordic_g04.limIntegrator.outMax = vrNordic_g04.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4358]] /* vrNordic_g04.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11804;
}

/*
equation index: 11810
type: SIMPLE_ASSIGN
vrNordic_g04.timer.outMin = vrNordic_g04.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4431]] /* vrNordic_g04.tOelMin PARAM */);
  threadData->lastEquationSolved = 11810;
}

/*
equation index: 11815
type: SIMPLE_ASSIGN
vrNordic_g04.timer.y_start = vrNordic_g04.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4435]] /* vrNordic_g04.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4431]] /* vrNordic_g04.tOelMin PARAM */);
  threadData->lastEquationSolved = 11815;
}

/*
equation index: 11817
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.b[1] = vrNordic_g04.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4384]] /* vrNordic_g04.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4430]] /* vrNordic_g04.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11817;
}

/*
equation index: 11818
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.a[1] = vrNordic_g04.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4381]] /* vrNordic_g04.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4428]] /* vrNordic_g04.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11818;
}

/*
equation index: 11822
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.bb[1] = vrNordic_g04.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4386]] /* vrNordic_g04.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4384]] /* vrNordic_g04.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11822;
}

/*
equation index: 11823
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.bb[2] = vrNordic_g04.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4387]] /* vrNordic_g04.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4385]] /* vrNordic_g04.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11823;
}

/*
equation index: 11824
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.d = vrNordic_g04.leadLag.bb[1] / vrNordic_g04.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4388]] /* vrNordic_g04.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4386]] /* vrNordic_g04.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4381]] /* vrNordic_g04.leadLag.a[1] PARAM */),"vrNordic_g04.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11824;
}

/*
equation index: 11825
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.a_end = if vrNordic_g04.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g04.leadLag.a[1] ^ 2.0 + vrNordic_g04.leadLag.a[2] ^ 2.0) then vrNordic_g04.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11825};
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_boolean tmp191;
  tmp188 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4381]] /* vrNordic_g04.leadLag.a[1] PARAM */);
  tmp189 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */);
  tmp190 = (tmp188 * tmp188) + (tmp189 * tmp189);
  if(!(tmp190 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g04.leadLag.a[1] ^ 2.0 + vrNordic_g04.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp190);
    }
  }tmp191 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp190)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */) = (tmp191?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11825;
}

/*
equation index: 11829
type: SIMPLE_ASSIGN
goverNordic_g04.govKp.k = goverNordic_g04.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2377]] /* goverNordic_g04.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2363]] /* goverNordic_g04.Kp PARAM */);
  threadData->lastEquationSolved = 11829;
}

/*
equation index: 11830
type: SIMPLE_ASSIGN
goverNordic_g04.govKi.k = goverNordic_g04.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2376]] /* goverNordic_g04.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2362]] /* goverNordic_g04.Ki PARAM */);
  threadData->lastEquationSolved = 11830;
}

/*
equation index: 11834
type: SIMPLE_ASSIGN
goverNordic_g04.dOmegaPlusDroop.k2 = goverNordic_g04.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* goverNordic_g04.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2361]] /* goverNordic_g04.KSigma PARAM */);
  threadData->lastEquationSolved = 11834;
}

/*
equation index: 11837
type: SIMPLE_ASSIGN
goverNordic_g04.perUnitP.k = 100.0 / goverNordic_g04.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* goverNordic_g04.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2364]] /* goverNordic_g04.PNom PARAM */),"goverNordic_g04.PNom",equationIndexes);
  threadData->lastEquationSolved = 11837;
}

/*
equation index: 11838
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.DuMin = -goverNordic_g04.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* goverNordic_g04.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2381]] /* goverNordic_g04.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 11838;
}

/*
equation index: 11839
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limiter.uMax = goverNordic_g04.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2381]] /* goverNordic_g04.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 11839;
}

/*
equation index: 11840
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limiter.uMin = goverNordic_g04.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* goverNordic_g04.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 11840;
}

/*
equation index: 11844
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g04.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* goverNordic_g04.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* goverNordic_g04.limRateLimFirstOrder.tS PARAM */),"goverNordic_g04.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 11844;
}

/*
equation index: 11845
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g04.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2384]] /* goverNordic_g04.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 11845;
}

/*
equation index: 11846
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g04.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2385]] /* goverNordic_g04.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 11846;
}

/*
equation index: 11852
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.k = vrNordic_g05.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4451]] /* vrNordic_g05.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4440]] /* vrNordic_g05.KPss PARAM */);
  threadData->lastEquationSolved = 11852;
}

/*
equation index: 11853
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.T = vrNordic_g05.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4450]] /* vrNordic_g05.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4505]] /* vrNordic_g05.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11853;
}

/*
equation index: 11855
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.zeroGain = abs(vrNordic_g05.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11855};
  modelica_boolean tmp192;
  tmp192 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4451]] /* vrNordic_g05.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[905]] /* vrNordic_g05.derivative.zeroGain PARAM */) = tmp192;
  threadData->lastEquationSolved = 11855;
}

/*
equation index: 11856
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.b[1] = vrNordic_g05.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4476]] /* vrNordic_g05.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4508]] /* vrNordic_g05.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11856;
}

/*
equation index: 11857
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.a[1] = vrNordic_g05.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4473]] /* vrNordic_g05.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4506]] /* vrNordic_g05.tLagPss PARAM */);
  threadData->lastEquationSolved = 11857;
}

/*
equation index: 11861
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.bb[1] = vrNordic_g05.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4478]] /* vrNordic_g05.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4476]] /* vrNordic_g05.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11861;
}

/*
equation index: 11862
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.bb[2] = vrNordic_g05.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4479]] /* vrNordic_g05.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4477]] /* vrNordic_g05.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11862;
}

/*
equation index: 11863
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.d = vrNordic_g05.leadLag1.bb[1] / vrNordic_g05.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4480]] /* vrNordic_g05.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4478]] /* vrNordic_g05.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4473]] /* vrNordic_g05.leadLag1.a[1] PARAM */),"vrNordic_g05.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11863;
}

/*
equation index: 11864
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.a_end = if vrNordic_g05.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g05.leadLag1.a[1] ^ 2.0 + vrNordic_g05.leadLag1.a[2] ^ 2.0) then vrNordic_g05.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11864};
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  tmp193 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4473]] /* vrNordic_g05.leadLag1.a[1] PARAM */);
  tmp194 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */);
  tmp195 = (tmp193 * tmp193) + (tmp194 * tmp194);
  if(!(tmp195 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g05.leadLag1.a[1] ^ 2.0 + vrNordic_g05.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp195);
    }
  }tmp196 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp195)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */) = (tmp196?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11864;
}

/*
equation index: 11865
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.X0[1] = if vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag1.u_start / vrNordic_g05.leadLag1.a_end else if vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4471]] /* vrNordic_g05.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4481]] /* vrNordic_g05.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */),"vrNordic_g05.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4482]] /* vrNordic_g05.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11865;
}

/*
equation index: 11866
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.Y0 = if vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag1.u_start * vrNordic_g05.leadLag1.b[2] / vrNordic_g05.leadLag1.a_end else if vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4472]] /* vrNordic_g05.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4481]] /* vrNordic_g05.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4477]] /* vrNordic_g05.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */),"vrNordic_g05.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[500]] /* vrNordic_g05.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4483]] /* vrNordic_g05.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11866;
}

/*
equation index: 11867
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.b[1] = vrNordic_g05.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4489]] /* vrNordic_g05.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4508]] /* vrNordic_g05.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11867;
}

/*
equation index: 11868
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.a[1] = vrNordic_g05.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11868};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4486]] /* vrNordic_g05.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4506]] /* vrNordic_g05.tLagPss PARAM */);
  threadData->lastEquationSolved = 11868;
}

/*
equation index: 11872
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.bb[1] = vrNordic_g05.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4491]] /* vrNordic_g05.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4489]] /* vrNordic_g05.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11872;
}

/*
equation index: 11873
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.bb[2] = vrNordic_g05.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4492]] /* vrNordic_g05.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4490]] /* vrNordic_g05.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11873;
}

/*
equation index: 11874
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.d = vrNordic_g05.leadLag2.bb[1] / vrNordic_g05.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4493]] /* vrNordic_g05.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4491]] /* vrNordic_g05.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4486]] /* vrNordic_g05.leadLag2.a[1] PARAM */),"vrNordic_g05.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11874;
}

/*
equation index: 11875
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.a_end = if vrNordic_g05.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g05.leadLag2.a[1] ^ 2.0 + vrNordic_g05.leadLag2.a[2] ^ 2.0) then vrNordic_g05.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11875};
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  tmp197 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4486]] /* vrNordic_g05.leadLag2.a[1] PARAM */);
  tmp198 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */);
  tmp199 = (tmp197 * tmp197) + (tmp198 * tmp198);
  if(!(tmp199 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g05.leadLag2.a[1] ^ 2.0 + vrNordic_g05.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp199);
    }
  }tmp200 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp199)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */) = (tmp200?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11875;
}

/*
equation index: 11876
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.X0[1] = if vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag2.u_start / vrNordic_g05.leadLag2.a_end else if vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4484]] /* vrNordic_g05.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4494]] /* vrNordic_g05.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */),"vrNordic_g05.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4495]] /* vrNordic_g05.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11876;
}

/*
equation index: 11877
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.Y0 = if vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g05.leadLag2.u_start * vrNordic_g05.leadLag2.b[2] / vrNordic_g05.leadLag2.a_end else if vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g05.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g05.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4485]] /* vrNordic_g05.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4494]] /* vrNordic_g05.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4490]] /* vrNordic_g05.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */),"vrNordic_g05.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[504]] /* vrNordic_g05.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4496]] /* vrNordic_g05.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11877;
}

/*
equation index: 11878
type: SIMPLE_ASSIGN
vrNordic_g05.limiter.uMin = -vrNordic_g05.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11878};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11878;
}

/*
equation index: 11882
type: SIMPLE_ASSIGN
vrNordic_g05.const2.k = vrNordic_g05.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4449]] /* vrNordic_g05.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4439]] /* vrNordic_g05.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11882;
}

/*
equation index: 11883
type: SIMPLE_ASSIGN
vrNordic_g05.kMulDU.k = vrNordic_g05.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4457]] /* vrNordic_g05.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4441]] /* vrNordic_g05.KTgr PARAM */);
  threadData->lastEquationSolved = 11883;
}

/*
equation index: 11884
type: SIMPLE_ASSIGN
vrNordic_g05.overExcitationLimitation.OelMode = vrNordic_g05.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4503]] /* vrNordic_g05.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4442]] /* vrNordic_g05.OelMode PARAM */);
  threadData->lastEquationSolved = 11884;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[415])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_11264,
    MyNordic_initialized_TestCase_initialized_eqFunction_11265,
    MyNordic_initialized_TestCase_initialized_eqFunction_11266,
    MyNordic_initialized_TestCase_initialized_eqFunction_11267,
    MyNordic_initialized_TestCase_initialized_eqFunction_11269,
    MyNordic_initialized_TestCase_initialized_eqFunction_11270,
    MyNordic_initialized_TestCase_initialized_eqFunction_11271,
    MyNordic_initialized_TestCase_initialized_eqFunction_11272,
    MyNordic_initialized_TestCase_initialized_eqFunction_11273,
    MyNordic_initialized_TestCase_initialized_eqFunction_11275,
    MyNordic_initialized_TestCase_initialized_eqFunction_11276,
    MyNordic_initialized_TestCase_initialized_eqFunction_11277,
    MyNordic_initialized_TestCase_initialized_eqFunction_11278,
    MyNordic_initialized_TestCase_initialized_eqFunction_11279,
    MyNordic_initialized_TestCase_initialized_eqFunction_11281,
    MyNordic_initialized_TestCase_initialized_eqFunction_11282,
    MyNordic_initialized_TestCase_initialized_eqFunction_11283,
    MyNordic_initialized_TestCase_initialized_eqFunction_11284,
    MyNordic_initialized_TestCase_initialized_eqFunction_11285,
    MyNordic_initialized_TestCase_initialized_eqFunction_11287,
    MyNordic_initialized_TestCase_initialized_eqFunction_11288,
    MyNordic_initialized_TestCase_initialized_eqFunction_11289,
    MyNordic_initialized_TestCase_initialized_eqFunction_11290,
    MyNordic_initialized_TestCase_initialized_eqFunction_11291,
    MyNordic_initialized_TestCase_initialized_eqFunction_11293,
    MyNordic_initialized_TestCase_initialized_eqFunction_11294,
    MyNordic_initialized_TestCase_initialized_eqFunction_11295,
    MyNordic_initialized_TestCase_initialized_eqFunction_11296,
    MyNordic_initialized_TestCase_initialized_eqFunction_11297,
    MyNordic_initialized_TestCase_initialized_eqFunction_11299,
    MyNordic_initialized_TestCase_initialized_eqFunction_11300,
    MyNordic_initialized_TestCase_initialized_eqFunction_11301,
    MyNordic_initialized_TestCase_initialized_eqFunction_11302,
    MyNordic_initialized_TestCase_initialized_eqFunction_11303,
    MyNordic_initialized_TestCase_initialized_eqFunction_11305,
    MyNordic_initialized_TestCase_initialized_eqFunction_11306,
    MyNordic_initialized_TestCase_initialized_eqFunction_11307,
    MyNordic_initialized_TestCase_initialized_eqFunction_11308,
    MyNordic_initialized_TestCase_initialized_eqFunction_11309,
    MyNordic_initialized_TestCase_initialized_eqFunction_11311,
    MyNordic_initialized_TestCase_initialized_eqFunction_11312,
    MyNordic_initialized_TestCase_initialized_eqFunction_11313,
    MyNordic_initialized_TestCase_initialized_eqFunction_11314,
    MyNordic_initialized_TestCase_initialized_eqFunction_11315,
    MyNordic_initialized_TestCase_initialized_eqFunction_11317,
    MyNordic_initialized_TestCase_initialized_eqFunction_11318,
    MyNordic_initialized_TestCase_initialized_eqFunction_11319,
    MyNordic_initialized_TestCase_initialized_eqFunction_11320,
    MyNordic_initialized_TestCase_initialized_eqFunction_11321,
    MyNordic_initialized_TestCase_initialized_eqFunction_11323,
    MyNordic_initialized_TestCase_initialized_eqFunction_11324,
    MyNordic_initialized_TestCase_initialized_eqFunction_11325,
    MyNordic_initialized_TestCase_initialized_eqFunction_11326,
    MyNordic_initialized_TestCase_initialized_eqFunction_11327,
    MyNordic_initialized_TestCase_initialized_eqFunction_11329,
    MyNordic_initialized_TestCase_initialized_eqFunction_11330,
    MyNordic_initialized_TestCase_initialized_eqFunction_11331,
    MyNordic_initialized_TestCase_initialized_eqFunction_11332,
    MyNordic_initialized_TestCase_initialized_eqFunction_11333,
    MyNordic_initialized_TestCase_initialized_eqFunction_11335,
    MyNordic_initialized_TestCase_initialized_eqFunction_11336,
    MyNordic_initialized_TestCase_initialized_eqFunction_11337,
    MyNordic_initialized_TestCase_initialized_eqFunction_11338,
    MyNordic_initialized_TestCase_initialized_eqFunction_11339,
    MyNordic_initialized_TestCase_initialized_eqFunction_11341,
    MyNordic_initialized_TestCase_initialized_eqFunction_11342,
    MyNordic_initialized_TestCase_initialized_eqFunction_11343,
    MyNordic_initialized_TestCase_initialized_eqFunction_11344,
    MyNordic_initialized_TestCase_initialized_eqFunction_11345,
    MyNordic_initialized_TestCase_initialized_eqFunction_11347,
    MyNordic_initialized_TestCase_initialized_eqFunction_11348,
    MyNordic_initialized_TestCase_initialized_eqFunction_11349,
    MyNordic_initialized_TestCase_initialized_eqFunction_11350,
    MyNordic_initialized_TestCase_initialized_eqFunction_11351,
    MyNordic_initialized_TestCase_initialized_eqFunction_11353,
    MyNordic_initialized_TestCase_initialized_eqFunction_11354,
    MyNordic_initialized_TestCase_initialized_eqFunction_11355,
    MyNordic_initialized_TestCase_initialized_eqFunction_11356,
    MyNordic_initialized_TestCase_initialized_eqFunction_11357,
    MyNordic_initialized_TestCase_initialized_eqFunction_11359,
    MyNordic_initialized_TestCase_initialized_eqFunction_11360,
    MyNordic_initialized_TestCase_initialized_eqFunction_11361,
    MyNordic_initialized_TestCase_initialized_eqFunction_11362,
    MyNordic_initialized_TestCase_initialized_eqFunction_11363,
    MyNordic_initialized_TestCase_initialized_eqFunction_11365,
    MyNordic_initialized_TestCase_initialized_eqFunction_11366,
    MyNordic_initialized_TestCase_initialized_eqFunction_11367,
    MyNordic_initialized_TestCase_initialized_eqFunction_11368,
    MyNordic_initialized_TestCase_initialized_eqFunction_11369,
    MyNordic_initialized_TestCase_initialized_eqFunction_11371,
    MyNordic_initialized_TestCase_initialized_eqFunction_11372,
    MyNordic_initialized_TestCase_initialized_eqFunction_11373,
    MyNordic_initialized_TestCase_initialized_eqFunction_11374,
    MyNordic_initialized_TestCase_initialized_eqFunction_11375,
    MyNordic_initialized_TestCase_initialized_eqFunction_11377,
    MyNordic_initialized_TestCase_initialized_eqFunction_11378,
    MyNordic_initialized_TestCase_initialized_eqFunction_11379,
    MyNordic_initialized_TestCase_initialized_eqFunction_11380,
    MyNordic_initialized_TestCase_initialized_eqFunction_11381,
    MyNordic_initialized_TestCase_initialized_eqFunction_11383,
    MyNordic_initialized_TestCase_initialized_eqFunction_11384,
    MyNordic_initialized_TestCase_initialized_eqFunction_11385,
    MyNordic_initialized_TestCase_initialized_eqFunction_11386,
    MyNordic_initialized_TestCase_initialized_eqFunction_11387,
    MyNordic_initialized_TestCase_initialized_eqFunction_11388,
    MyNordic_initialized_TestCase_initialized_eqFunction_11389,
    MyNordic_initialized_TestCase_initialized_eqFunction_11390,
    MyNordic_initialized_TestCase_initialized_eqFunction_11391,
    MyNordic_initialized_TestCase_initialized_eqFunction_11393,
    MyNordic_initialized_TestCase_initialized_eqFunction_11394,
    MyNordic_initialized_TestCase_initialized_eqFunction_11395,
    MyNordic_initialized_TestCase_initialized_eqFunction_11396,
    MyNordic_initialized_TestCase_initialized_eqFunction_11397,
    MyNordic_initialized_TestCase_initialized_eqFunction_11398,
    MyNordic_initialized_TestCase_initialized_eqFunction_11400,
    MyNordic_initialized_TestCase_initialized_eqFunction_11401,
    MyNordic_initialized_TestCase_initialized_eqFunction_11402,
    MyNordic_initialized_TestCase_initialized_eqFunction_11403,
    MyNordic_initialized_TestCase_initialized_eqFunction_11404,
    MyNordic_initialized_TestCase_initialized_eqFunction_11405,
    MyNordic_initialized_TestCase_initialized_eqFunction_11407,
    MyNordic_initialized_TestCase_initialized_eqFunction_11408,
    MyNordic_initialized_TestCase_initialized_eqFunction_11409,
    MyNordic_initialized_TestCase_initialized_eqFunction_11410,
    MyNordic_initialized_TestCase_initialized_eqFunction_11411,
    MyNordic_initialized_TestCase_initialized_eqFunction_11412,
    MyNordic_initialized_TestCase_initialized_eqFunction_11414,
    MyNordic_initialized_TestCase_initialized_eqFunction_11415,
    MyNordic_initialized_TestCase_initialized_eqFunction_11416,
    MyNordic_initialized_TestCase_initialized_eqFunction_11417,
    MyNordic_initialized_TestCase_initialized_eqFunction_11418,
    MyNordic_initialized_TestCase_initialized_eqFunction_11419,
    MyNordic_initialized_TestCase_initialized_eqFunction_11421,
    MyNordic_initialized_TestCase_initialized_eqFunction_11422,
    MyNordic_initialized_TestCase_initialized_eqFunction_11423,
    MyNordic_initialized_TestCase_initialized_eqFunction_11424,
    MyNordic_initialized_TestCase_initialized_eqFunction_11425,
    MyNordic_initialized_TestCase_initialized_eqFunction_11426,
    MyNordic_initialized_TestCase_initialized_eqFunction_11428,
    MyNordic_initialized_TestCase_initialized_eqFunction_11429,
    MyNordic_initialized_TestCase_initialized_eqFunction_11430,
    MyNordic_initialized_TestCase_initialized_eqFunction_11431,
    MyNordic_initialized_TestCase_initialized_eqFunction_11432,
    MyNordic_initialized_TestCase_initialized_eqFunction_11433,
    MyNordic_initialized_TestCase_initialized_eqFunction_11435,
    MyNordic_initialized_TestCase_initialized_eqFunction_11436,
    MyNordic_initialized_TestCase_initialized_eqFunction_11437,
    MyNordic_initialized_TestCase_initialized_eqFunction_11438,
    MyNordic_initialized_TestCase_initialized_eqFunction_11439,
    MyNordic_initialized_TestCase_initialized_eqFunction_11440,
    MyNordic_initialized_TestCase_initialized_eqFunction_11442,
    MyNordic_initialized_TestCase_initialized_eqFunction_11443,
    MyNordic_initialized_TestCase_initialized_eqFunction_11444,
    MyNordic_initialized_TestCase_initialized_eqFunction_11445,
    MyNordic_initialized_TestCase_initialized_eqFunction_11446,
    MyNordic_initialized_TestCase_initialized_eqFunction_11447,
    MyNordic_initialized_TestCase_initialized_eqFunction_11449,
    MyNordic_initialized_TestCase_initialized_eqFunction_11450,
    MyNordic_initialized_TestCase_initialized_eqFunction_11451,
    MyNordic_initialized_TestCase_initialized_eqFunction_11452,
    MyNordic_initialized_TestCase_initialized_eqFunction_11453,
    MyNordic_initialized_TestCase_initialized_eqFunction_11454,
    MyNordic_initialized_TestCase_initialized_eqFunction_11456,
    MyNordic_initialized_TestCase_initialized_eqFunction_11457,
    MyNordic_initialized_TestCase_initialized_eqFunction_11458,
    MyNordic_initialized_TestCase_initialized_eqFunction_11459,
    MyNordic_initialized_TestCase_initialized_eqFunction_11460,
    MyNordic_initialized_TestCase_initialized_eqFunction_11461,
    MyNordic_initialized_TestCase_initialized_eqFunction_11463,
    MyNordic_initialized_TestCase_initialized_eqFunction_11464,
    MyNordic_initialized_TestCase_initialized_eqFunction_11465,
    MyNordic_initialized_TestCase_initialized_eqFunction_11466,
    MyNordic_initialized_TestCase_initialized_eqFunction_11467,
    MyNordic_initialized_TestCase_initialized_eqFunction_11468,
    MyNordic_initialized_TestCase_initialized_eqFunction_11470,
    MyNordic_initialized_TestCase_initialized_eqFunction_11471,
    MyNordic_initialized_TestCase_initialized_eqFunction_11472,
    MyNordic_initialized_TestCase_initialized_eqFunction_11473,
    MyNordic_initialized_TestCase_initialized_eqFunction_11474,
    MyNordic_initialized_TestCase_initialized_eqFunction_11475,
    MyNordic_initialized_TestCase_initialized_eqFunction_11477,
    MyNordic_initialized_TestCase_initialized_eqFunction_11478,
    MyNordic_initialized_TestCase_initialized_eqFunction_11479,
    MyNordic_initialized_TestCase_initialized_eqFunction_11480,
    MyNordic_initialized_TestCase_initialized_eqFunction_11481,
    MyNordic_initialized_TestCase_initialized_eqFunction_11482,
    MyNordic_initialized_TestCase_initialized_eqFunction_11484,
    MyNordic_initialized_TestCase_initialized_eqFunction_11485,
    MyNordic_initialized_TestCase_initialized_eqFunction_11486,
    MyNordic_initialized_TestCase_initialized_eqFunction_11487,
    MyNordic_initialized_TestCase_initialized_eqFunction_11488,
    MyNordic_initialized_TestCase_initialized_eqFunction_11489,
    MyNordic_initialized_TestCase_initialized_eqFunction_11491,
    MyNordic_initialized_TestCase_initialized_eqFunction_11492,
    MyNordic_initialized_TestCase_initialized_eqFunction_11493,
    MyNordic_initialized_TestCase_initialized_eqFunction_11494,
    MyNordic_initialized_TestCase_initialized_eqFunction_11495,
    MyNordic_initialized_TestCase_initialized_eqFunction_11496,
    MyNordic_initialized_TestCase_initialized_eqFunction_11498,
    MyNordic_initialized_TestCase_initialized_eqFunction_11499,
    MyNordic_initialized_TestCase_initialized_eqFunction_11500,
    MyNordic_initialized_TestCase_initialized_eqFunction_11501,
    MyNordic_initialized_TestCase_initialized_eqFunction_11502,
    MyNordic_initialized_TestCase_initialized_eqFunction_11503,
    MyNordic_initialized_TestCase_initialized_eqFunction_11505,
    MyNordic_initialized_TestCase_initialized_eqFunction_11506,
    MyNordic_initialized_TestCase_initialized_eqFunction_11507,
    MyNordic_initialized_TestCase_initialized_eqFunction_11508,
    MyNordic_initialized_TestCase_initialized_eqFunction_11509,
    MyNordic_initialized_TestCase_initialized_eqFunction_11510,
    MyNordic_initialized_TestCase_initialized_eqFunction_11512,
    MyNordic_initialized_TestCase_initialized_eqFunction_11513,
    MyNordic_initialized_TestCase_initialized_eqFunction_11514,
    MyNordic_initialized_TestCase_initialized_eqFunction_11515,
    MyNordic_initialized_TestCase_initialized_eqFunction_11516,
    MyNordic_initialized_TestCase_initialized_eqFunction_11517,
    MyNordic_initialized_TestCase_initialized_eqFunction_11519,
    MyNordic_initialized_TestCase_initialized_eqFunction_11520,
    MyNordic_initialized_TestCase_initialized_eqFunction_11521,
    MyNordic_initialized_TestCase_initialized_eqFunction_11522,
    MyNordic_initialized_TestCase_initialized_eqFunction_11523,
    MyNordic_initialized_TestCase_initialized_eqFunction_11524,
    MyNordic_initialized_TestCase_initialized_eqFunction_11526,
    MyNordic_initialized_TestCase_initialized_eqFunction_11527,
    MyNordic_initialized_TestCase_initialized_eqFunction_11528,
    MyNordic_initialized_TestCase_initialized_eqFunction_11529,
    MyNordic_initialized_TestCase_initialized_eqFunction_11531,
    MyNordic_initialized_TestCase_initialized_eqFunction_11532,
    MyNordic_initialized_TestCase_initialized_eqFunction_11533,
    MyNordic_initialized_TestCase_initialized_eqFunction_11537,
    MyNordic_initialized_TestCase_initialized_eqFunction_11538,
    MyNordic_initialized_TestCase_initialized_eqFunction_11539,
    MyNordic_initialized_TestCase_initialized_eqFunction_11540,
    MyNordic_initialized_TestCase_initialized_eqFunction_11541,
    MyNordic_initialized_TestCase_initialized_eqFunction_11542,
    MyNordic_initialized_TestCase_initialized_eqFunction_11543,
    MyNordic_initialized_TestCase_initialized_eqFunction_11544,
    MyNordic_initialized_TestCase_initialized_eqFunction_11548,
    MyNordic_initialized_TestCase_initialized_eqFunction_11549,
    MyNordic_initialized_TestCase_initialized_eqFunction_11550,
    MyNordic_initialized_TestCase_initialized_eqFunction_11551,
    MyNordic_initialized_TestCase_initialized_eqFunction_11552,
    MyNordic_initialized_TestCase_initialized_eqFunction_11553,
    MyNordic_initialized_TestCase_initialized_eqFunction_11554,
    MyNordic_initialized_TestCase_initialized_eqFunction_11558,
    MyNordic_initialized_TestCase_initialized_eqFunction_11559,
    MyNordic_initialized_TestCase_initialized_eqFunction_11560,
    MyNordic_initialized_TestCase_initialized_eqFunction_11561,
    MyNordic_initialized_TestCase_initialized_eqFunction_11567,
    MyNordic_initialized_TestCase_initialized_eqFunction_11572,
    MyNordic_initialized_TestCase_initialized_eqFunction_11574,
    MyNordic_initialized_TestCase_initialized_eqFunction_11575,
    MyNordic_initialized_TestCase_initialized_eqFunction_11579,
    MyNordic_initialized_TestCase_initialized_eqFunction_11580,
    MyNordic_initialized_TestCase_initialized_eqFunction_11581,
    MyNordic_initialized_TestCase_initialized_eqFunction_11582,
    MyNordic_initialized_TestCase_initialized_eqFunction_11586,
    MyNordic_initialized_TestCase_initialized_eqFunction_11587,
    MyNordic_initialized_TestCase_initialized_eqFunction_11591,
    MyNordic_initialized_TestCase_initialized_eqFunction_11594,
    MyNordic_initialized_TestCase_initialized_eqFunction_11595,
    MyNordic_initialized_TestCase_initialized_eqFunction_11596,
    MyNordic_initialized_TestCase_initialized_eqFunction_11597,
    MyNordic_initialized_TestCase_initialized_eqFunction_11601,
    MyNordic_initialized_TestCase_initialized_eqFunction_11602,
    MyNordic_initialized_TestCase_initialized_eqFunction_11603,
    MyNordic_initialized_TestCase_initialized_eqFunction_11609,
    MyNordic_initialized_TestCase_initialized_eqFunction_11610,
    MyNordic_initialized_TestCase_initialized_eqFunction_11612,
    MyNordic_initialized_TestCase_initialized_eqFunction_11613,
    MyNordic_initialized_TestCase_initialized_eqFunction_11614,
    MyNordic_initialized_TestCase_initialized_eqFunction_11618,
    MyNordic_initialized_TestCase_initialized_eqFunction_11619,
    MyNordic_initialized_TestCase_initialized_eqFunction_11620,
    MyNordic_initialized_TestCase_initialized_eqFunction_11621,
    MyNordic_initialized_TestCase_initialized_eqFunction_11622,
    MyNordic_initialized_TestCase_initialized_eqFunction_11623,
    MyNordic_initialized_TestCase_initialized_eqFunction_11624,
    MyNordic_initialized_TestCase_initialized_eqFunction_11625,
    MyNordic_initialized_TestCase_initialized_eqFunction_11629,
    MyNordic_initialized_TestCase_initialized_eqFunction_11630,
    MyNordic_initialized_TestCase_initialized_eqFunction_11631,
    MyNordic_initialized_TestCase_initialized_eqFunction_11632,
    MyNordic_initialized_TestCase_initialized_eqFunction_11633,
    MyNordic_initialized_TestCase_initialized_eqFunction_11634,
    MyNordic_initialized_TestCase_initialized_eqFunction_11635,
    MyNordic_initialized_TestCase_initialized_eqFunction_11639,
    MyNordic_initialized_TestCase_initialized_eqFunction_11640,
    MyNordic_initialized_TestCase_initialized_eqFunction_11641,
    MyNordic_initialized_TestCase_initialized_eqFunction_11642,
    MyNordic_initialized_TestCase_initialized_eqFunction_11648,
    MyNordic_initialized_TestCase_initialized_eqFunction_11653,
    MyNordic_initialized_TestCase_initialized_eqFunction_11655,
    MyNordic_initialized_TestCase_initialized_eqFunction_11656,
    MyNordic_initialized_TestCase_initialized_eqFunction_11660,
    MyNordic_initialized_TestCase_initialized_eqFunction_11661,
    MyNordic_initialized_TestCase_initialized_eqFunction_11662,
    MyNordic_initialized_TestCase_initialized_eqFunction_11663,
    MyNordic_initialized_TestCase_initialized_eqFunction_11667,
    MyNordic_initialized_TestCase_initialized_eqFunction_11668,
    MyNordic_initialized_TestCase_initialized_eqFunction_11672,
    MyNordic_initialized_TestCase_initialized_eqFunction_11675,
    MyNordic_initialized_TestCase_initialized_eqFunction_11676,
    MyNordic_initialized_TestCase_initialized_eqFunction_11677,
    MyNordic_initialized_TestCase_initialized_eqFunction_11678,
    MyNordic_initialized_TestCase_initialized_eqFunction_11682,
    MyNordic_initialized_TestCase_initialized_eqFunction_11683,
    MyNordic_initialized_TestCase_initialized_eqFunction_11684,
    MyNordic_initialized_TestCase_initialized_eqFunction_11690,
    MyNordic_initialized_TestCase_initialized_eqFunction_11691,
    MyNordic_initialized_TestCase_initialized_eqFunction_11693,
    MyNordic_initialized_TestCase_initialized_eqFunction_11694,
    MyNordic_initialized_TestCase_initialized_eqFunction_11695,
    MyNordic_initialized_TestCase_initialized_eqFunction_11699,
    MyNordic_initialized_TestCase_initialized_eqFunction_11700,
    MyNordic_initialized_TestCase_initialized_eqFunction_11701,
    MyNordic_initialized_TestCase_initialized_eqFunction_11702,
    MyNordic_initialized_TestCase_initialized_eqFunction_11703,
    MyNordic_initialized_TestCase_initialized_eqFunction_11704,
    MyNordic_initialized_TestCase_initialized_eqFunction_11705,
    MyNordic_initialized_TestCase_initialized_eqFunction_11706,
    MyNordic_initialized_TestCase_initialized_eqFunction_11710,
    MyNordic_initialized_TestCase_initialized_eqFunction_11711,
    MyNordic_initialized_TestCase_initialized_eqFunction_11712,
    MyNordic_initialized_TestCase_initialized_eqFunction_11713,
    MyNordic_initialized_TestCase_initialized_eqFunction_11714,
    MyNordic_initialized_TestCase_initialized_eqFunction_11715,
    MyNordic_initialized_TestCase_initialized_eqFunction_11716,
    MyNordic_initialized_TestCase_initialized_eqFunction_11720,
    MyNordic_initialized_TestCase_initialized_eqFunction_11721,
    MyNordic_initialized_TestCase_initialized_eqFunction_11722,
    MyNordic_initialized_TestCase_initialized_eqFunction_11723,
    MyNordic_initialized_TestCase_initialized_eqFunction_11729,
    MyNordic_initialized_TestCase_initialized_eqFunction_11734,
    MyNordic_initialized_TestCase_initialized_eqFunction_11736,
    MyNordic_initialized_TestCase_initialized_eqFunction_11737,
    MyNordic_initialized_TestCase_initialized_eqFunction_11741,
    MyNordic_initialized_TestCase_initialized_eqFunction_11742,
    MyNordic_initialized_TestCase_initialized_eqFunction_11743,
    MyNordic_initialized_TestCase_initialized_eqFunction_11744,
    MyNordic_initialized_TestCase_initialized_eqFunction_11748,
    MyNordic_initialized_TestCase_initialized_eqFunction_11749,
    MyNordic_initialized_TestCase_initialized_eqFunction_11753,
    MyNordic_initialized_TestCase_initialized_eqFunction_11756,
    MyNordic_initialized_TestCase_initialized_eqFunction_11757,
    MyNordic_initialized_TestCase_initialized_eqFunction_11758,
    MyNordic_initialized_TestCase_initialized_eqFunction_11759,
    MyNordic_initialized_TestCase_initialized_eqFunction_11763,
    MyNordic_initialized_TestCase_initialized_eqFunction_11764,
    MyNordic_initialized_TestCase_initialized_eqFunction_11765,
    MyNordic_initialized_TestCase_initialized_eqFunction_11771,
    MyNordic_initialized_TestCase_initialized_eqFunction_11772,
    MyNordic_initialized_TestCase_initialized_eqFunction_11774,
    MyNordic_initialized_TestCase_initialized_eqFunction_11775,
    MyNordic_initialized_TestCase_initialized_eqFunction_11776,
    MyNordic_initialized_TestCase_initialized_eqFunction_11780,
    MyNordic_initialized_TestCase_initialized_eqFunction_11781,
    MyNordic_initialized_TestCase_initialized_eqFunction_11782,
    MyNordic_initialized_TestCase_initialized_eqFunction_11783,
    MyNordic_initialized_TestCase_initialized_eqFunction_11784,
    MyNordic_initialized_TestCase_initialized_eqFunction_11785,
    MyNordic_initialized_TestCase_initialized_eqFunction_11786,
    MyNordic_initialized_TestCase_initialized_eqFunction_11787,
    MyNordic_initialized_TestCase_initialized_eqFunction_11791,
    MyNordic_initialized_TestCase_initialized_eqFunction_11792,
    MyNordic_initialized_TestCase_initialized_eqFunction_11793,
    MyNordic_initialized_TestCase_initialized_eqFunction_11794,
    MyNordic_initialized_TestCase_initialized_eqFunction_11795,
    MyNordic_initialized_TestCase_initialized_eqFunction_11796,
    MyNordic_initialized_TestCase_initialized_eqFunction_11797,
    MyNordic_initialized_TestCase_initialized_eqFunction_11801,
    MyNordic_initialized_TestCase_initialized_eqFunction_11802,
    MyNordic_initialized_TestCase_initialized_eqFunction_11803,
    MyNordic_initialized_TestCase_initialized_eqFunction_11804,
    MyNordic_initialized_TestCase_initialized_eqFunction_11810,
    MyNordic_initialized_TestCase_initialized_eqFunction_11815,
    MyNordic_initialized_TestCase_initialized_eqFunction_11817,
    MyNordic_initialized_TestCase_initialized_eqFunction_11818,
    MyNordic_initialized_TestCase_initialized_eqFunction_11822,
    MyNordic_initialized_TestCase_initialized_eqFunction_11823,
    MyNordic_initialized_TestCase_initialized_eqFunction_11824,
    MyNordic_initialized_TestCase_initialized_eqFunction_11825,
    MyNordic_initialized_TestCase_initialized_eqFunction_11829,
    MyNordic_initialized_TestCase_initialized_eqFunction_11830,
    MyNordic_initialized_TestCase_initialized_eqFunction_11834,
    MyNordic_initialized_TestCase_initialized_eqFunction_11837,
    MyNordic_initialized_TestCase_initialized_eqFunction_11838,
    MyNordic_initialized_TestCase_initialized_eqFunction_11839,
    MyNordic_initialized_TestCase_initialized_eqFunction_11840,
    MyNordic_initialized_TestCase_initialized_eqFunction_11844,
    MyNordic_initialized_TestCase_initialized_eqFunction_11845,
    MyNordic_initialized_TestCase_initialized_eqFunction_11846,
    MyNordic_initialized_TestCase_initialized_eqFunction_11852,
    MyNordic_initialized_TestCase_initialized_eqFunction_11853,
    MyNordic_initialized_TestCase_initialized_eqFunction_11855,
    MyNordic_initialized_TestCase_initialized_eqFunction_11856,
    MyNordic_initialized_TestCase_initialized_eqFunction_11857,
    MyNordic_initialized_TestCase_initialized_eqFunction_11861,
    MyNordic_initialized_TestCase_initialized_eqFunction_11862,
    MyNordic_initialized_TestCase_initialized_eqFunction_11863,
    MyNordic_initialized_TestCase_initialized_eqFunction_11864,
    MyNordic_initialized_TestCase_initialized_eqFunction_11865,
    MyNordic_initialized_TestCase_initialized_eqFunction_11866,
    MyNordic_initialized_TestCase_initialized_eqFunction_11867,
    MyNordic_initialized_TestCase_initialized_eqFunction_11868,
    MyNordic_initialized_TestCase_initialized_eqFunction_11872,
    MyNordic_initialized_TestCase_initialized_eqFunction_11873,
    MyNordic_initialized_TestCase_initialized_eqFunction_11874,
    MyNordic_initialized_TestCase_initialized_eqFunction_11875,
    MyNordic_initialized_TestCase_initialized_eqFunction_11876,
    MyNordic_initialized_TestCase_initialized_eqFunction_11877,
    MyNordic_initialized_TestCase_initialized_eqFunction_11878,
    MyNordic_initialized_TestCase_initialized_eqFunction_11882,
    MyNordic_initialized_TestCase_initialized_eqFunction_11883,
    MyNordic_initialized_TestCase_initialized_eqFunction_11884
  };
  
  for (int id = 0; id < 415; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif