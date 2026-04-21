#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1375
type: SIMPLE_ASSIGN
$whenCondition100 = not $PRE.trafo_g8_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition100 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
$PRE.trafo_g9_4011.running.value = $START.trafo_g9_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */) = (data->modelData->booleanVarsData[1012] /* trafo_g9_4011.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
trafo_g9_4011.running.value = $PRE.trafo_g9_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */);
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
$whenCondition99 = not trafo_g9_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[468]] /* $whenCondition99 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
$whenCondition98 = trafo_g9_4011.running.value and not $PRE.trafo_g9_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[467]] /* $whenCondition98 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1012]] /* trafo_g9_4011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
$whenCondition97 = not $PRE.trafo_g9_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[466]] /* $whenCondition97 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1012] /* trafo_g9_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
$PRE.trafo_g10_4012.running.value = $START.trafo_g10_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */) = (data->modelData->booleanVarsData[955] /* trafo_g10_4012.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
trafo_g10_4012.running.value = $PRE.trafo_g10_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */);
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
$whenCondition96 = not trafo_g10_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[465]] /* $whenCondition96 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
$whenCondition95 = trafo_g10_4012.running.value and not $PRE.trafo_g10_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[464]] /* $whenCondition95 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
$whenCondition94 = not $PRE.trafo_g10_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[463]] /* $whenCondition94 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[955] /* trafo_g10_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
$PRE.trafo_g11_4021.running.value = $START.trafo_g11_4021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */) = (data->modelData->booleanVarsData[958] /* trafo_g11_4021.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
trafo_g11_4021.running.value = $PRE.trafo_g11_4021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */);
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
$whenCondition93 = not trafo_g11_4021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[462]] /* $whenCondition93 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
$whenCondition92 = trafo_g11_4021.running.value and not $PRE.trafo_g11_4021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[461]] /* $whenCondition92 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[958]] /* trafo_g11_4021.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
$whenCondition91 = not $PRE.trafo_g11_4021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[460]] /* $whenCondition91 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[958] /* trafo_g11_4021.running.value DISCRETE */));
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
$PRE.trafo_g12_4031.running.value = $START.trafo_g12_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */) = (data->modelData->booleanVarsData[961] /* trafo_g12_4031.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
trafo_g12_4031.running.value = $PRE.trafo_g12_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */);
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
$whenCondition90 = not trafo_g12_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[459]] /* $whenCondition90 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
$whenCondition89 = trafo_g12_4031.running.value and not $PRE.trafo_g12_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[457]] /* $whenCondition89 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
$whenCondition88 = not $PRE.trafo_g12_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[456]] /* $whenCondition88 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[961] /* trafo_g12_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
$PRE.trafo_g13_4041.running.value = $START.trafo_g13_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */) = (data->modelData->booleanVarsData[964] /* trafo_g13_4041.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
trafo_g13_4041.running.value = $PRE.trafo_g13_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */);
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
$whenCondition87 = not trafo_g13_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[455]] /* $whenCondition87 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
$whenCondition86 = trafo_g13_4041.running.value and not $PRE.trafo_g13_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[454]] /* $whenCondition86 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
$whenCondition85 = not $PRE.trafo_g13_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[453]] /* $whenCondition85 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[964] /* trafo_g13_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
$PRE.trafo_g14_4042.running.value = $START.trafo_g14_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  (data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */) = (data->modelData->booleanVarsData[967] /* trafo_g14_4042.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
trafo_g14_4042.running.value = $PRE.trafo_g14_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */);
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
$whenCondition84 = not trafo_g14_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[452]] /* $whenCondition84 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
$whenCondition83 = trafo_g14_4042.running.value and not $PRE.trafo_g14_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[451]] /* $whenCondition83 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
$whenCondition82 = not $PRE.trafo_g14_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[450]] /* $whenCondition82 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[967] /* trafo_g14_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
$PRE.trafo_g15_4047.running.value = $START.trafo_g15_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */) = (data->modelData->booleanVarsData[970] /* trafo_g15_4047.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
trafo_g15_4047.running.value = $PRE.trafo_g15_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */);
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
$whenCondition81 = not trafo_g15_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[449]] /* $whenCondition81 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
$whenCondition80 = trafo_g15_4047.running.value and not $PRE.trafo_g15_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[448]] /* $whenCondition80 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[970]] /* trafo_g15_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
$whenCondition79 = not $PRE.trafo_g15_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[446]] /* $whenCondition79 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[970] /* trafo_g15_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
$PRE.trafo_g16_4051.running.value = $START.trafo_g16_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */) = (data->modelData->booleanVarsData[973] /* trafo_g16_4051.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
trafo_g16_4051.running.value = $PRE.trafo_g16_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */);
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
$whenCondition78 = not trafo_g16_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[445]] /* $whenCondition78 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
$whenCondition77 = trafo_g16_4051.running.value and not $PRE.trafo_g16_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1414};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[444]] /* $whenCondition77 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[973]] /* trafo_g16_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1414;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
$whenCondition76 = not $PRE.trafo_g16_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[443]] /* $whenCondition76 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[973] /* trafo_g16_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
$PRE.trafo_g17_4062.running.value = $START.trafo_g17_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */) = (data->modelData->booleanVarsData[976] /* trafo_g17_4062.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
trafo_g17_4062.running.value = $PRE.trafo_g17_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */);
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
$whenCondition75 = not trafo_g17_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[442]] /* $whenCondition75 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
$whenCondition74 = trafo_g17_4062.running.value and not $PRE.trafo_g17_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[441]] /* $whenCondition74 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
$whenCondition73 = not $PRE.trafo_g17_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[440]] /* $whenCondition73 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
$PRE.trafo_g18_4063.running.value = $START.trafo_g18_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  (data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */) = (data->modelData->booleanVarsData[979] /* trafo_g18_4063.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
trafo_g18_4063.running.value = $PRE.trafo_g18_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */);
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
$whenCondition72 = not trafo_g18_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[439]] /* $whenCondition72 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
$whenCondition71 = trafo_g18_4063.running.value and not $PRE.trafo_g18_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[438]] /* $whenCondition71 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
$whenCondition70 = not $PRE.trafo_g18_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[437]] /* $whenCondition70 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
$PRE.trafo_g19_4071.running.value = $START.trafo_g19_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  (data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */) = (data->modelData->booleanVarsData[982] /* trafo_g19_4071.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
trafo_g19_4071.running.value = $PRE.trafo_g19_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */);
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
$whenCondition69 = not trafo_g19_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[435]] /* $whenCondition69 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
$whenCondition68 = trafo_g19_4071.running.value and not $PRE.trafo_g19_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[434]] /* $whenCondition68 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1429;
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
$whenCondition67 = not $PRE.trafo_g19_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[433]] /* $whenCondition67 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
$PRE.trafo_g20_4072.running.value = $START.trafo_g20_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  (data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */) = (data->modelData->booleanVarsData[988] /* trafo_g20_4072.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
trafo_g20_4072.running.value = $PRE.trafo_g20_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */);
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
$whenCondition66 = not trafo_g20_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[432]] /* $whenCondition66 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
$whenCondition65 = trafo_g20_4072.running.value and not $PRE.trafo_g20_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[431]] /* $whenCondition65 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
$whenCondition64 = not $PRE.trafo_g20_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[430]] /* $whenCondition64 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
$PRE.g01.running.value = $START.g01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  (data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */) = (data->modelData->booleanVarsData[470] /* g01.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
g01.running.value = $PRE.g01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */);
  threadData->lastEquationSolved = 1437;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
$whenCondition63 = not g01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[429]] /* $whenCondition63 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */));
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
$whenCondition62 = g01.running.value and not $PRE.g01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1439};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[428]] /* $whenCondition62 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1439;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
$whenCondition61 = not $PRE.g01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[427]] /* $whenCondition61 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */));
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
g01.omegaPu = $START.g01.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[4] /* g01.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
goverNordic_g01.dOmega.y = goverNordic_g01.const1.k - g01.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1934]] /* goverNordic_g01.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* goverNordic_g01.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
vrNordic_g01.dOmega.y = g01.omegaPu - vrNordic_g01.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4131]] /* vrNordic_g01.const.k PARAM */);
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
g01.lambdaDPu = $START.g01.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* g01.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[0] /* g01.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1444;
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
g01.lambdafPu = $START.g01.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* g01.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[3] /* g01.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1445;
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
g01.lambdaQ1Pu = $START.g01.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* g01.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[1] /* g01.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
g01.lambdaQ2Pu = $START.g01.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* g01.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[2] /* g01.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
g01.theta = $START.g01.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[5] /* g01.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
$PRE.g02.running.value = $START.g02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */) = (data->modelData->booleanVarsData[474] /* g02.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
g02.running.value = $PRE.g02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */);
  threadData->lastEquationSolved = 1450;
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
$whenCondition60 = not g02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1451};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[426]] /* $whenCondition60 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */));
  threadData->lastEquationSolved = 1451;
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
$whenCondition59 = g02.running.value and not $PRE.g02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[424]] /* $whenCondition59 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
$whenCondition58 = not $PRE.g02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[423]] /* $whenCondition58 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */));
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
g02.omegaPu = $START.g02.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* g02.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1454;
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
goverNordic_g02.dOmega.y = goverNordic_g02.const1.k - g02.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1952]] /* goverNordic_g02.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* goverNordic_g02.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
vrNordic_g02.dOmega.y = g02.omegaPu - vrNordic_g02.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4210]] /* vrNordic_g02.const.k PARAM */);
  threadData->lastEquationSolved = 1456;
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
g02.lambdaDPu = $START.g02.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* g02.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[6] /* g02.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
g02.lambdafPu = $START.g02.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* g02.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[9] /* g02.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
g02.lambdaQ1Pu = $START.g02.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* g02.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[7] /* g02.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
g02.lambdaQ2Pu = $START.g02.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* g02.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[8] /* g02.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
g02.theta = $START.g02.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* g02.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1461;
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
$PRE.g03.running.value = $START.g03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */) = (data->modelData->booleanVarsData[478] /* g03.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
g03.running.value = $PRE.g03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */);
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
$whenCondition57 = not g03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[422]] /* $whenCondition57 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */));
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
$whenCondition56 = g03.running.value and not $PRE.g03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[421]] /* $whenCondition56 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
$whenCondition55 = not $PRE.g03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[420]] /* $whenCondition55 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */));
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
g03.omegaPu = $START.g03.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[16] /* g03.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
goverNordic_g03.dOmega.y = goverNordic_g03.const1.k - g03.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1970]] /* goverNordic_g03.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2331]] /* goverNordic_g03.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1468;
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
vrNordic_g03.dOmega.y = g03.omegaPu - vrNordic_g03.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4289]] /* vrNordic_g03.const.k PARAM */);
  threadData->lastEquationSolved = 1469;
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
g03.lambdaDPu = $START.g03.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* g03.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* g03.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
g03.lambdafPu = $START.g03.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* g03.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[15] /* g03.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
g03.lambdaQ1Pu = $START.g03.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* g03.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[13] /* g03.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
g03.lambdaQ2Pu = $START.g03.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* g03.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[14] /* g03.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1473;
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
g03.theta = $START.g03.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[17] /* g03.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1474;
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
$PRE.g04.running.value = $START.g04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  (data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */) = (data->modelData->booleanVarsData[482] /* g04.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
g04.running.value = $PRE.g04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1476};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */);
  threadData->lastEquationSolved = 1476;
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
$whenCondition54 = not g04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1477};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[419]] /* $whenCondition54 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */));
  threadData->lastEquationSolved = 1477;
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
$whenCondition53 = g04.running.value and not $PRE.g04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[418]] /* $whenCondition53 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
$whenCondition52 = not $PRE.g04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[417]] /* $whenCondition52 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */));
  threadData->lastEquationSolved = 1479;
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
g04.omegaPu = $START.g04.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[22] /* g04.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1480;
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
goverNordic_g04.dOmega.y = goverNordic_g04.const1.k - g04.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1988]] /* goverNordic_g04.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2367]] /* goverNordic_g04.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1481;
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
vrNordic_g04.dOmega.y = g04.omegaPu - vrNordic_g04.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4368]] /* vrNordic_g04.const.k PARAM */);
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
g04.lambdaDPu = $START.g04.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* g04.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[18] /* g04.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
g04.lambdafPu = $START.g04.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* g04.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[21] /* g04.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1484;
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
g04.lambdaQ1Pu = $START.g04.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* g04.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[19] /* g04.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
g04.lambdaQ2Pu = $START.g04.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* g04.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[20] /* g04.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1486;
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
g04.theta = $START.g04.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[23] /* g04.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1487;
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
$PRE.g05.running.value = $START.g05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  (data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */) = (data->modelData->booleanVarsData[486] /* g05.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1488;
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
g05.running.value = $PRE.g05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */);
  threadData->lastEquationSolved = 1489;
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
$whenCondition51 = not g05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1490};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[416]] /* $whenCondition51 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */));
  threadData->lastEquationSolved = 1490;
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
$whenCondition50 = g05.running.value and not $PRE.g05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[415]] /* $whenCondition50 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1491;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
$whenCondition49 = not $PRE.g05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[413]] /* $whenCondition49 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */));
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
g05.omegaPu = $START.g05.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[28] /* g05.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
goverNordic_g05.dOmega.y = goverNordic_g05.const1.k - g05.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2006]] /* goverNordic_g05.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* goverNordic_g05.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
vrNordic_g05.dOmega.y = g05.omegaPu - vrNordic_g05.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4447]] /* vrNordic_g05.const.k PARAM */);
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
g05.lambdaDPu = $START.g05.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* g05.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[24] /* g05.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
g05.lambdafPu = $START.g05.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* g05.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[27] /* g05.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
g05.lambdaQ1Pu = $START.g05.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* g05.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[25] /* g05.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
g05.lambdaQ2Pu = $START.g05.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* g05.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[26] /* g05.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
g05.theta = $START.g05.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[29] /* g05.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
$PRE.g06.running.value = $START.g06.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */) = (data->modelData->booleanVarsData[490] /* g06.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
g06.running.value = $PRE.g06.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */);
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
$whenCondition48 = not g06.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[412]] /* $whenCondition48 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */));
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
$whenCondition47 = g06.running.value and not $PRE.g06.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[411]] /* $whenCondition47 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1504;
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
$whenCondition46 = not $PRE.g06.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1505};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[400]] /* $whenCondition46 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */));
  threadData->lastEquationSolved = 1505;
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
g06.omegaPu = $START.g06.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[34] /* g06.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
goverNordic_g06.dOmega.y = goverNordic_g06.const1.k - g06.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2024]] /* goverNordic_g06.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* goverNordic_g06.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
vrNordic_g06.dOmega.y = g06.omegaPu - vrNordic_g06.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4526]] /* vrNordic_g06.const.k PARAM */);
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
g06.lambdaDPu = $START.g06.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* g06.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[30] /* g06.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1509;
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
g06.lambdafPu = $START.g06.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* g06.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[33] /* g06.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1510;
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
g06.lambdaQ1Pu = $START.g06.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* g06.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[31] /* g06.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1511;
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
g06.lambdaQ2Pu = $START.g06.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* g06.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[32] /* g06.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1512;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
g06.theta = $START.g06.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[35] /* g06.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
$PRE.g07.running.value = $START.g07.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */) = (data->modelData->booleanVarsData[494] /* g07.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
g07.running.value = $PRE.g07.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
$whenCondition45 = not g07.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[389]] /* $whenCondition45 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */));
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
$whenCondition44 = g07.running.value and not $PRE.g07.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[378]] /* $whenCondition44 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
$whenCondition43 = not $PRE.g07.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[367]] /* $whenCondition43 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */));
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
g07.omegaPu = $START.g07.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[40] /* g07.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
goverNordic_g07.dOmega.y = goverNordic_g07.const1.k - g07.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2042]] /* goverNordic_g07.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2475]] /* goverNordic_g07.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
vrNordic_g07.dOmega.y = g07.omegaPu - vrNordic_g07.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4605]] /* vrNordic_g07.const.k PARAM */);
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
g07.lambdaDPu = $START.g07.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* g07.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[36] /* g07.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1522;
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
g07.lambdafPu = $START.g07.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* g07.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[39] /* g07.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1523;
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
g07.lambdaQ1Pu = $START.g07.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* g07.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[37] /* g07.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1524;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
g07.lambdaQ2Pu = $START.g07.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* g07.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[38] /* g07.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
g07.theta = $START.g07.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[41] /* g07.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
$PRE.g08.running.value = $START.g08.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1527};
  (data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */) = (data->modelData->booleanVarsData[498] /* g08.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1527;
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
g08.running.value = $PRE.g08.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1528};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */);
  threadData->lastEquationSolved = 1528;
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
$whenCondition42 = not g08.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[356]] /* $whenCondition42 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */));
  threadData->lastEquationSolved = 1529;
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
$whenCondition41 = g08.running.value and not $PRE.g08.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1530};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[345]] /* $whenCondition41 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1530;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
$whenCondition40 = not $PRE.g08.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[334]] /* $whenCondition40 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */));
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
g08.omegaPu = $START.g08.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[46] /* g08.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
goverNordic_g08.dOmega.y = goverNordic_g08.const1.k - g08.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2060]] /* goverNordic_g08.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2511]] /* goverNordic_g08.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
vrNordic_g08.dOmega.y = g08.omegaPu - vrNordic_g08.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4684]] /* vrNordic_g08.const.k PARAM */);
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
g08.lambdaDPu = $START.g08.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* g08.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[42] /* g08.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
g08.lambdafPu = $START.g08.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* g08.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[45] /* g08.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
g08.lambdaQ1Pu = $START.g08.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* g08.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[43] /* g08.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
g08.lambdaQ2Pu = $START.g08.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* g08.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[44] /* g08.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
g08.theta = $START.g08.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[47] /* g08.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
$PRE.g09.running.value = $START.g09.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1540};
  (data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */) = (data->modelData->booleanVarsData[502] /* g09.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1540;
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
g09.running.value = $PRE.g09.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */);
  threadData->lastEquationSolved = 1541;
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
$whenCondition39 = not g09.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1542};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[322]] /* $whenCondition39 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */));
  threadData->lastEquationSolved = 1542;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
$whenCondition38 = g09.running.value and not $PRE.g09.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[311]] /* $whenCondition38 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
$whenCondition37 = not $PRE.g09.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1544};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[300]] /* $whenCondition37 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */));
  threadData->lastEquationSolved = 1544;
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
g09.omegaPu = $START.g09.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[52] /* g09.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1545;
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
goverNordic_g09.dOmega.y = goverNordic_g09.const1.k - g09.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2078]] /* goverNordic_g09.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* goverNordic_g09.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1546;
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
vrNordic_g09.dOmega.y = g09.omegaPu - vrNordic_g09.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4763]] /* vrNordic_g09.const.k PARAM */);
  threadData->lastEquationSolved = 1547;
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
g09.lambdaDPu = $START.g09.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* g09.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[48] /* g09.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1548;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
g09.lambdafPu = $START.g09.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* g09.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[51] /* g09.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
g09.lambdaQ1Pu = $START.g09.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* g09.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[49] /* g09.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1550;
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
g09.lambdaQ2Pu = $START.g09.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* g09.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[50] /* g09.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1551;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
g09.theta = $START.g09.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[53] /* g09.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
$PRE.g10.running.value = $START.g10.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1553};
  (data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */) = (data->modelData->booleanVarsData[506] /* g10.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1553;
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
g10.running.value = $PRE.g10.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */);
  threadData->lastEquationSolved = 1554;
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
$whenCondition36 = not g10.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1555};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[289]] /* $whenCondition36 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */));
  threadData->lastEquationSolved = 1555;
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
$whenCondition35 = g10.running.value and not $PRE.g10.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1556};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[278]] /* $whenCondition35 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1556;
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
$whenCondition34 = not $PRE.g10.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1557};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[267]] /* $whenCondition34 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */));
  threadData->lastEquationSolved = 1557;
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
g10.omegaPu = $START.g10.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[58] /* g10.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1558;
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
goverNordic_g10.dOmega.y = goverNordic_g10.const1.k - g10.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* goverNordic_g10.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* goverNordic_g10.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1559;
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
vrNordic_g10.dOmega.y = g10.omegaPu - vrNordic_g10.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4842]] /* vrNordic_g10.const.k PARAM */);
  threadData->lastEquationSolved = 1560;
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
g10.lambdaDPu = $START.g10.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* g10.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[54] /* g10.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1561;
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
g10.lambdafPu = $START.g10.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* g10.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[57] /* g10.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
g10.lambdaQ1Pu = $START.g10.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* g10.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[55] /* g10.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1563;
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
g10.lambdaQ2Pu = $START.g10.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* g10.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[56] /* g10.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1564;
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
g10.theta = $START.g10.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[59] /* g10.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1565;
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
$PRE.g11.running.value = $START.g11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1566};
  (data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */) = (data->modelData->booleanVarsData[510] /* g11.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1566;
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
g11.running.value = $PRE.g11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */);
  threadData->lastEquationSolved = 1567;
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
$whenCondition33 = not g11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1568};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[256]] /* $whenCondition33 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */));
  threadData->lastEquationSolved = 1568;
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
$whenCondition32 = g11.running.value and not $PRE.g11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1569};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[245]] /* $whenCondition32 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1569;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
$whenCondition31 = not $PRE.g11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[234]] /* $whenCondition31 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */));
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
g11.omegaPu = $START.g11.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[64] /* g11.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1571;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
goverNordic_g11.dOmega.y = goverNordic_g11.const1.k - g11.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2114]] /* goverNordic_g11.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* goverNordic_g11.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
vrNordic_g11.dOmega.y = g11.omegaPu - vrNordic_g11.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4921]] /* vrNordic_g11.const.k PARAM */);
  threadData->lastEquationSolved = 1573;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
g11.lambdaDPu = $START.g11.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* g11.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[60] /* g11.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
g11.lambdafPu = $START.g11.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* g11.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[63] /* g11.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1575;
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
g11.lambdaQ1Pu = $START.g11.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* g11.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[61] /* g11.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1576;
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
g11.lambdaQ2Pu = $START.g11.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* g11.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[62] /* g11.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1577;
}

/*
equation index: 1578
type: SIMPLE_ASSIGN
g11.theta = $START.g11.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[65] /* g11.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1578;
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
$PRE.g12.running.value = $START.g12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */) = (data->modelData->booleanVarsData[514] /* g12.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1579;
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
g12.running.value = $PRE.g12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1580};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */);
  threadData->lastEquationSolved = 1580;
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
$whenCondition30 = not g12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1581};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[223]] /* $whenCondition30 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */));
  threadData->lastEquationSolved = 1581;
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
$whenCondition29 = g12.running.value and not $PRE.g12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1582};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[211]] /* $whenCondition29 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1582;
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
$whenCondition28 = not $PRE.g12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1583};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[200]] /* $whenCondition28 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */));
  threadData->lastEquationSolved = 1583;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
g12.omegaPu = $START.g12.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[70] /* g12.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
goverNordic_g12.dOmega.y = goverNordic_g12.const1.k - g12.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* goverNordic_g12.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* goverNordic_g12.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1585;
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
vrNordic_g12.dOmega.y = g12.omegaPu - vrNordic_g12.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5000]] /* vrNordic_g12.const.k PARAM */);
  threadData->lastEquationSolved = 1586;
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
g12.lambdaDPu = $START.g12.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* g12.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[66] /* g12.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
g12.lambdafPu = $START.g12.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* g12.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[69] /* g12.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1588;
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
g12.lambdaQ1Pu = $START.g12.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* g12.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[67] /* g12.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1589;
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
g12.lambdaQ2Pu = $START.g12.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* g12.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[68] /* g12.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
g12.theta = $START.g12.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[71] /* g12.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
$PRE.g13.running.value = $START.g13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */) = (data->modelData->booleanVarsData[518] /* g13.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
g13.running.value = $PRE.g13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */);
  threadData->lastEquationSolved = 1593;
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
$whenCondition27 = not g13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[189]] /* $whenCondition27 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */));
  threadData->lastEquationSolved = 1594;
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
$whenCondition26 = g13.running.value and not $PRE.g13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[178]] /* $whenCondition26 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1595;
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
$whenCondition25 = not $PRE.g13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[167]] /* $whenCondition25 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */));
  threadData->lastEquationSolved = 1596;
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
g13.omegaPu = $START.g13.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[76] /* g13.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1597;
}

/*
equation index: 1598
type: SIMPLE_ASSIGN
goverNordic_g13.dOmega.y = goverNordic_g13.const1.k - g13.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2150]] /* goverNordic_g13.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* goverNordic_g13.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1598;
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
vrNordic_g13.dOmega.y = g13.omegaPu - vrNordic_g13.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5079]] /* vrNordic_g13.const.k PARAM */);
  threadData->lastEquationSolved = 1599;
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
g13.lambdaDPu = $START.g13.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* g13.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[72] /* g13.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1600;
}

/*
equation index: 1601
type: SIMPLE_ASSIGN
g13.lambdafPu = $START.g13.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* g13.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[75] /* g13.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1601;
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
g13.lambdaQ1Pu = $START.g13.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* g13.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[73] /* g13.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1602;
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
g13.lambdaQ2Pu = $START.g13.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* g13.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[74] /* g13.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1603;
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
g13.theta = $START.g13.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[77] /* g13.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1604;
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
$PRE.g14.running.value = $START.g14.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1605};
  (data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */) = (data->modelData->booleanVarsData[522] /* g14.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1605;
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
g14.running.value = $PRE.g14.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1606};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */);
  threadData->lastEquationSolved = 1606;
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
$whenCondition24 = not g14.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1607};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[156]] /* $whenCondition24 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */));
  threadData->lastEquationSolved = 1607;
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
$whenCondition23 = g14.running.value and not $PRE.g14.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1608};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[145]] /* $whenCondition23 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1608;
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
$whenCondition22 = not $PRE.g14.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1609};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[134]] /* $whenCondition22 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */));
  threadData->lastEquationSolved = 1609;
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
g14.omegaPu = $START.g14.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[82] /* g14.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1610;
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
goverNordic_g14.dOmega.y = goverNordic_g14.const1.k - g14.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2168]] /* goverNordic_g14.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* goverNordic_g14.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1611;
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
vrNordic_g14.dOmega.y = g14.omegaPu - vrNordic_g14.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5158]] /* vrNordic_g14.const.k PARAM */);
  threadData->lastEquationSolved = 1612;
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
g14.lambdaDPu = $START.g14.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* g14.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[78] /* g14.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1613;
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
g14.lambdafPu = $START.g14.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* g14.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[81] /* g14.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1614;
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
g14.lambdaQ1Pu = $START.g14.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* g14.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[79] /* g14.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1615;
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
g14.lambdaQ2Pu = $START.g14.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* g14.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[80] /* g14.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1616;
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
g14.theta = $START.g14.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[83] /* g14.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1617;
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
$PRE.g15.running.value = $START.g15.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1618};
  (data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */) = (data->modelData->booleanVarsData[526] /* g15.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1618;
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
g15.running.value = $PRE.g15.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1619};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */);
  threadData->lastEquationSolved = 1619;
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
$whenCondition21 = not g15.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[123]] /* $whenCondition21 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */));
  threadData->lastEquationSolved = 1620;
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
$whenCondition20 = g15.running.value and not $PRE.g15.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[112]] /* $whenCondition20 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1621;
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
$whenCondition19 = not $PRE.g15.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1622};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[100]] /* $whenCondition19 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */));
  threadData->lastEquationSolved = 1622;
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
g15.omegaPu = $START.g15.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[88] /* g15.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1623;
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
goverNordic_g15.dOmega.y = goverNordic_g15.const1.k - g15.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* goverNordic_g15.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* goverNordic_g15.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1624;
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
vrNordic_g15.dOmega.y = g15.omegaPu - vrNordic_g15.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5237]] /* vrNordic_g15.const.k PARAM */);
  threadData->lastEquationSolved = 1625;
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
g15.lambdaDPu = $START.g15.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* g15.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[84] /* g15.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1626;
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
g15.lambdafPu = $START.g15.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* g15.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[87] /* g15.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1627;
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
g15.lambdaQ1Pu = $START.g15.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* g15.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[85] /* g15.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1628;
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
g15.lambdaQ2Pu = $START.g15.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* g15.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[86] /* g15.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1629;
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
g15.theta = $START.g15.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[89] /* g15.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1630;
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
$PRE.g16.running.value = $START.g16.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1631};
  (data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */) = (data->modelData->booleanVarsData[530] /* g16.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1631;
}

/*
equation index: 1632
type: SIMPLE_ASSIGN
g16.running.value = $PRE.g16.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1632};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */);
  threadData->lastEquationSolved = 1632;
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
$whenCondition18 = not g16.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1633};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[89]] /* $whenCondition18 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */));
  threadData->lastEquationSolved = 1633;
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
$whenCondition17 = g16.running.value and not $PRE.g16.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1634};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[78]] /* $whenCondition17 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1634;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
$whenCondition16 = not $PRE.g16.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[67]] /* $whenCondition16 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */));
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
g16.omegaPu = $START.g16.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[94] /* g16.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1636;
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
goverNordic_g16.dOmega.y = goverNordic_g16.const1.k - g16.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2204]] /* goverNordic_g16.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2799]] /* goverNordic_g16.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1637;
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
vrNordic_g16.dOmega.y = g16.omegaPu - vrNordic_g16.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5316]] /* vrNordic_g16.const.k PARAM */);
  threadData->lastEquationSolved = 1638;
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
g16.lambdaDPu = $START.g16.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* g16.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[90] /* g16.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1639;
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
g16.lambdafPu = $START.g16.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* g16.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[93] /* g16.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1640;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
g16.lambdaQ1Pu = $START.g16.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* g16.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[91] /* g16.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
g16.lambdaQ2Pu = $START.g16.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* g16.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[92] /* g16.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1642;
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
g16.theta = $START.g16.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[95] /* g16.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1643;
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
$PRE.g17.running.value = $START.g17.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  (data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */) = (data->modelData->booleanVarsData[534] /* g17.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1644;
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
g17.running.value = $PRE.g17.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1645};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */);
  threadData->lastEquationSolved = 1645;
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
$whenCondition15 = not g17.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[56]] /* $whenCondition15 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */));
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
$whenCondition14 = g17.running.value and not $PRE.g17.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[45]] /* $whenCondition14 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1647;
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
$whenCondition13 = not $PRE.g17.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1648};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[34]] /* $whenCondition13 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */));
  threadData->lastEquationSolved = 1648;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
g17.omegaPu = $START.g17.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[100] /* g17.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
goverNordic_g17.dOmega.y = goverNordic_g17.const1.k - g17.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2222]] /* goverNordic_g17.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* goverNordic_g17.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1650;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
vrNordic_g17.dOmega.y = g17.omegaPu - vrNordic_g17.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5395]] /* vrNordic_g17.const.k PARAM */);
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
g17.lambdaDPu = $START.g17.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* g17.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[96] /* g17.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1652;
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
g17.lambdafPu = $START.g17.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* g17.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[99] /* g17.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1653;
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
g17.lambdaQ1Pu = $START.g17.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* g17.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[97] /* g17.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1654;
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
g17.lambdaQ2Pu = $START.g17.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* g17.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[98] /* g17.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1655;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
g17.theta = $START.g17.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[101] /* g17.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
$PRE.g18.running.value = $START.g18.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */) = (data->modelData->booleanVarsData[538] /* g18.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
g18.running.value = $PRE.g18.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */);
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
$whenCondition12 = not g18.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[23]] /* $whenCondition12 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */));
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
$whenCondition11 = g18.running.value and not $PRE.g18.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* $whenCondition11 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
$whenCondition10 = not $PRE.g18.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition10 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */));
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
g18.omegaPu = $START.g18.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[106] /* g18.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
goverNordic_g18.dOmega.y = goverNordic_g18.const1.k - g18.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2240]] /* goverNordic_g18.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2871]] /* goverNordic_g18.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
vrNordic_g18.dOmega.y = g18.omegaPu - vrNordic_g18.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5474]] /* vrNordic_g18.const.k PARAM */);
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
g18.lambdaDPu = $START.g18.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* g18.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[102] /* g18.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
g18.lambdafPu = $START.g18.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* g18.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[105] /* g18.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
g18.lambdaQ1Pu = $START.g18.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* g18.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[103] /* g18.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
g18.lambdaQ2Pu = $START.g18.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* g18.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[104] /* g18.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
g18.theta = $START.g18.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[107] /* g18.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
$PRE.g19.running.value = $START.g19.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1670};
  (data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */) = (data->modelData->booleanVarsData[542] /* g19.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1670;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
g19.running.value = $PRE.g19.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */);
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
$whenCondition9 = not g19.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[458]] /* $whenCondition9 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */));
  threadData->lastEquationSolved = 1672;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
$whenCondition8 = g19.running.value and not $PRE.g19.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[447]] /* $whenCondition8 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
$whenCondition7 = not $PRE.g19.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[436]] /* $whenCondition7 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */));
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
g19.omegaPu = $START.g19.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[112] /* g19.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
goverNordic_g19.dOmega.y = goverNordic_g19.const1.k - g19.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2258]] /* goverNordic_g19.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2907]] /* goverNordic_g19.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
vrNordic_g19.dOmega.y = g19.omegaPu - vrNordic_g19.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5553]] /* vrNordic_g19.const.k PARAM */);
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
g19.lambdaDPu = $START.g19.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* g19.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[108] /* g19.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
g19.lambdafPu = $START.g19.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* g19.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[111] /* g19.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
g19.lambdaQ1Pu = $START.g19.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* g19.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[109] /* g19.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
g19.lambdaQ2Pu = $START.g19.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* g19.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[110] /* g19.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
g19.theta = $START.g19.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[113] /* g19.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
$PRE.g20.running.value = $START.g20.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */) = (data->modelData->booleanVarsData[546] /* g20.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
g20.running.value = $PRE.g20.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */);
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
$whenCondition6 = not g20.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[425]] /* $whenCondition6 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */));
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
$whenCondition5 = g20.running.value and not $PRE.g20.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[414]] /* $whenCondition5 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
$whenCondition4 = not $PRE.g20.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[333]] /* $whenCondition4 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */));
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
g20.omegaPu = $START.g20.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[118] /* g20.omegaPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
omegaCOI = (g01.omegaPu * g01.H * g01.SNom + g02.omegaPu * g02.H * g02.SNom + g03.omegaPu * g03.H * g03.SNom + g04.omegaPu * g04.H * g04.SNom + g05.omegaPu * g05.H * g05.SNom + g06.omegaPu * g06.H * g06.SNom + g07.omegaPu * g07.H * g07.SNom + g08.omegaPu * g08.H * g08.SNom + g09.omegaPu * g09.H * g09.SNom + g10.omegaPu * g10.H * g10.SNom + g11.omegaPu * g11.H * g11.SNom + g12.omegaPu * g12.H * g12.SNom + g13.omegaPu * g13.H * g13.SNom + g14.omegaPu * g14.H * g14.SNom + g15.omegaPu * g15.H * g15.SNom + g16.omegaPu * g16.H * g16.SNom + g17.omegaPu * g17.H * g17.SNom + g18.omegaPu * g18.H * g18.SNom + g19.omegaPu * g19.H * g19.SNom + g20.omegaPu * g20.H * g20.SNom) / (g01.SNom * g01.H + g02.SNom * g02.H + g03.SNom * g03.H + g04.SNom * g04.H + g05.SNom * g05.H + g06.SNom * g06.H + g07.SNom * g07.H + g08.SNom * g08.H + g09.SNom * g09.H + g10.SNom * g10.H + g11.SNom * g11.H + g12.SNom * g12.H + g13.SNom * g13.H + g14.SNom * g14.H + g15.SNom * g15.H + g16.SNom * g16.H + g17.SNom * g17.H + g18.SNom * g18.H + g19.SNom * g19.H + g20.SNom * g20.H)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */)),"g01.SNom * g01.H + g02.SNom * g02.H + g03.SNom * g03.H + g04.SNom * g04.H + g05.SNom * g05.H + g06.SNom * g06.H + g07.SNom * g07.H + g08.SNom * g08.H + g09.SNom * g09.H + g10.SNom * g10.H + g11.SNom * g11.H + g12.SNom * g12.H + g13.SNom * g13.H + g14.SNom * g14.H + g15.SNom * g15.H + g16.SNom * g16.H + g17.SNom * g17.H + g18.SNom * g18.H + g19.SNom * g19.H + g20.SNom * g20.H",equationIndexes);
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
$DER.g19.theta = if g19.running.value then 314.1592653589793 * (g19.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(g19.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
$DER.g18.theta = if g18.running.value then 314.1592653589793 * (g18.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* der(g18.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
$DER.g17.theta = if g17.running.value then 314.1592653589793 * (g17.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* der(g17.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
$DER.g16.theta = if g16.running.value then 314.1592653589793 * (g16.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* der(g16.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
$DER.g15.theta = if g15.running.value then 314.1592653589793 * (g15.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* der(g15.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
$DER.g14.theta = if g14.running.value then 314.1592653589793 * (g14.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* der(g14.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
$DER.g13.theta = if g13.running.value then 314.1592653589793 * (g13.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(g13.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
$DER.g12.theta = if g12.running.value then 314.1592653589793 * (g12.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(g12.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
$DER.g11.theta = if g11.running.value then 314.1592653589793 * (g11.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* der(g11.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
$DER.g10.theta = if g10.running.value then 314.1592653589793 * (g10.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* der(g10.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
$DER.g09.theta = if g09.running.value then 314.1592653589793 * (g09.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* der(g09.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1700;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
$DER.g08.theta = if g08.running.value then 314.1592653589793 * (g08.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* der(g08.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
$DER.g07.theta = if g07.running.value then 314.1592653589793 * (g07.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* der(g07.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
$DER.g06.theta = if g06.running.value then 314.1592653589793 * (g06.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* der(g06.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
$DER.g05.theta = if g05.running.value then 314.1592653589793 * (g05.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* der(g05.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
$DER.g04.theta = if g04.running.value then 314.1592653589793 * (g04.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(g04.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
$DER.g03.theta = if g03.running.value then 314.1592653589793 * (g03.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(g03.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
$DER.g02.theta = if g02.running.value then 314.1592653589793 * (g02.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* der(g02.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
$DER.g01.theta = if g01.running.value then 314.1592653589793 * (g01.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* der(g01.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1708;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
goverNordic_g20.dOmega.y = goverNordic_g20.const1.k - g20.omegaPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2276]] /* goverNordic_g20.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* goverNordic_g20.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
vrNordic_g20.dOmega.y = g20.omegaPu - vrNordic_g20.const.k
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5632]] /* vrNordic_g20.const.k PARAM */);
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
$DER.g20.theta = if g20.running.value then 314.1592653589793 * (g20.omegaPu - omegaCOI) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(g20.theta) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */)):0.0);
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
g20.lambdaDPu = $START.g20.lambdaDPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* g20.lambdaDPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[114] /* g20.lambdaDPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
g20.lambdafPu = $START.g20.lambdafPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* g20.lambdafPu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[117] /* g20.lambdafPu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
g20.lambdaQ1Pu = $START.g20.lambdaQ1Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* g20.lambdaQ1Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[115] /* g20.lambdaQ1Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
g20.lambdaQ2Pu = $START.g20.lambdaQ2Pu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* g20.lambdaQ2Pu STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[116] /* g20.lambdaQ2Pu STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
g20.theta = $START.g20.theta
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[119] /* g20.theta STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.x = $START.vrNordic_g01.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* vrNordic_g01.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[200] /* vrNordic_g01.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
vrNordic_g01.derivative.y = if vrNordic_g01.derivative.zeroGain then 0.0 else vrNordic_g01.derivative.k / vrNordic_g01.derivative.T * (vrNordic_g01.dOmega.y - vrNordic_g01.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[861]] /* vrNordic_g01.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4135]] /* vrNordic_g01.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4134]] /* vrNordic_g01.derivative.T PARAM */),"vrNordic_g01.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* vrNordic_g01.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.derivative.x = if vrNordic_g01.derivative.zeroGain then 0.0 else (vrNordic_g01.dOmega.y - vrNordic_g01.derivative.x) / vrNordic_g01.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* der(vrNordic_g01.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[861]] /* vrNordic_g01.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* vrNordic_g01.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* vrNordic_g01.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4134]] /* vrNordic_g01.derivative.T PARAM */),"vrNordic_g01.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.x_scaled[1] = $START.vrNordic_g01.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[202] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.x[1] = vrNordic_g01.leadLag1.x_scaled[1] / vrNordic_g01.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3459]] /* vrNordic_g01.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */),"vrNordic_g01.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1721;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag1.y = (vrNordic_g01.leadLag1.bb[2] - vrNordic_g01.leadLag1.d * vrNordic_g01.leadLag1.a[2]) * vrNordic_g01.leadLag1.x[1] + vrNordic_g01.leadLag1.d * vrNordic_g01.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4163]] /* vrNordic_g01.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4164]] /* vrNordic_g01.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3459]] /* vrNordic_g01.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4164]] /* vrNordic_g01.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */));
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.leadLag1.x_scaled[1] = (vrNordic_g01.leadLag1.a_end * vrNordic_g01.derivative.y - vrNordic_g01.leadLag1.a[2] * vrNordic_g01.leadLag1.x_scaled[1]) / vrNordic_g01.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* der(vrNordic_g01.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4159]] /* vrNordic_g01.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* vrNordic_g01.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4158]] /* vrNordic_g01.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* vrNordic_g01.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4157]] /* vrNordic_g01.leadLag1.a[1] PARAM */),"vrNordic_g01.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1723;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.x_scaled[1] = $START.vrNordic_g01.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[203] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.x[1] = vrNordic_g01.leadLag2.x_scaled[1] / vrNordic_g01.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3461]] /* vrNordic_g01.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */),"vrNordic_g01.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1725;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag2.y = (vrNordic_g01.leadLag2.bb[2] - vrNordic_g01.leadLag2.d * vrNordic_g01.leadLag2.a[2]) * vrNordic_g01.leadLag2.x[1] + vrNordic_g01.leadLag2.d * vrNordic_g01.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4176]] /* vrNordic_g01.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4177]] /* vrNordic_g01.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3461]] /* vrNordic_g01.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4177]] /* vrNordic_g01.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */));
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
vrNordic_g01.limiter.y = smooth(0, if vrNordic_g01.leadLag2.y > vrNordic_g01.limiter.uMax then vrNordic_g01.limiter.uMax else if vrNordic_g01.leadLag2.y < vrNordic_g01.limiter.uMin then vrNordic_g01.limiter.uMin else vrNordic_g01.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */));
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */);
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */));
    tmp3 = (tmp1?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3462]] /* vrNordic_g01.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3465]] /* vrNordic_g01.limiter.y variable */) = tmp3;
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.leadLag2.x_scaled[1] = (vrNordic_g01.leadLag2.a_end * vrNordic_g01.leadLag1.y - vrNordic_g01.leadLag2.a[2] * vrNordic_g01.leadLag2.x_scaled[1]) / vrNordic_g01.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* der(vrNordic_g01.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4172]] /* vrNordic_g01.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3460]] /* vrNordic_g01.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4171]] /* vrNordic_g01.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* vrNordic_g01.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4170]] /* vrNordic_g01.leadLag2.a[1] PARAM */),"vrNordic_g01.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.x = $START.vrNordic_g02.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* vrNordic_g02.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[206] /* vrNordic_g02.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1729;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
vrNordic_g02.derivative.y = if vrNordic_g02.derivative.zeroGain then 0.0 else vrNordic_g02.derivative.k / vrNordic_g02.derivative.T * (vrNordic_g02.dOmega.y - vrNordic_g02.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[872]] /* vrNordic_g02.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4214]] /* vrNordic_g02.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4213]] /* vrNordic_g02.derivative.T PARAM */),"vrNordic_g02.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* vrNordic_g02.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.derivative.x = if vrNordic_g02.derivative.zeroGain then 0.0 else (vrNordic_g02.dOmega.y - vrNordic_g02.derivative.x) / vrNordic_g02.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* der(vrNordic_g02.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[872]] /* vrNordic_g02.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3474]] /* vrNordic_g02.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* vrNordic_g02.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4213]] /* vrNordic_g02.derivative.T PARAM */),"vrNordic_g02.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1731;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.x_scaled[1] = $START.vrNordic_g02.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[208] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.x[1] = vrNordic_g02.leadLag1.x_scaled[1] / vrNordic_g02.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3483]] /* vrNordic_g02.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */),"vrNordic_g02.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1733;
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag1.y = (vrNordic_g02.leadLag1.bb[2] - vrNordic_g02.leadLag1.d * vrNordic_g02.leadLag1.a[2]) * vrNordic_g02.leadLag1.x[1] + vrNordic_g02.leadLag1.d * vrNordic_g02.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4242]] /* vrNordic_g02.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4243]] /* vrNordic_g02.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3483]] /* vrNordic_g02.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4243]] /* vrNordic_g02.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */));
  threadData->lastEquationSolved = 1734;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.leadLag1.x_scaled[1] = (vrNordic_g02.leadLag1.a_end * vrNordic_g02.derivative.y - vrNordic_g02.leadLag1.a[2] * vrNordic_g02.leadLag1.x_scaled[1]) / vrNordic_g02.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* der(vrNordic_g02.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4238]] /* vrNordic_g02.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3476]] /* vrNordic_g02.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4237]] /* vrNordic_g02.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* vrNordic_g02.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4236]] /* vrNordic_g02.leadLag1.a[1] PARAM */),"vrNordic_g02.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.x_scaled[1] = $START.vrNordic_g02.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[209] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.x[1] = vrNordic_g02.leadLag2.x_scaled[1] / vrNordic_g02.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3485]] /* vrNordic_g02.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */),"vrNordic_g02.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag2.y = (vrNordic_g02.leadLag2.bb[2] - vrNordic_g02.leadLag2.d * vrNordic_g02.leadLag2.a[2]) * vrNordic_g02.leadLag2.x[1] + vrNordic_g02.leadLag2.d * vrNordic_g02.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4255]] /* vrNordic_g02.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4256]] /* vrNordic_g02.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3485]] /* vrNordic_g02.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4256]] /* vrNordic_g02.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */));
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
vrNordic_g02.limiter.y = smooth(0, if vrNordic_g02.leadLag2.y > vrNordic_g02.limiter.uMax then vrNordic_g02.limiter.uMax else if vrNordic_g02.leadLag2.y < vrNordic_g02.limiter.uMin then vrNordic_g02.limiter.uMin else vrNordic_g02.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */));
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */);
  }
  else
  {
    tmp5 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */));
    tmp7 = (tmp5?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3486]] /* vrNordic_g02.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3489]] /* vrNordic_g02.limiter.y variable */) = tmp7;
  threadData->lastEquationSolved = 1739;
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.leadLag2.x_scaled[1] = (vrNordic_g02.leadLag2.a_end * vrNordic_g02.leadLag1.y - vrNordic_g02.leadLag2.a[2] * vrNordic_g02.leadLag2.x_scaled[1]) / vrNordic_g02.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* der(vrNordic_g02.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4251]] /* vrNordic_g02.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3484]] /* vrNordic_g02.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4250]] /* vrNordic_g02.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* vrNordic_g02.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4249]] /* vrNordic_g02.leadLag2.a[1] PARAM */),"vrNordic_g02.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1740;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.x = $START.vrNordic_g03.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* vrNordic_g03.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[212] /* vrNordic_g03.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
vrNordic_g03.derivative.y = if vrNordic_g03.derivative.zeroGain then 0.0 else vrNordic_g03.derivative.k / vrNordic_g03.derivative.T * (vrNordic_g03.dOmega.y - vrNordic_g03.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[883]] /* vrNordic_g03.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4293]] /* vrNordic_g03.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4292]] /* vrNordic_g03.derivative.T PARAM */),"vrNordic_g03.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* vrNordic_g03.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.derivative.x = if vrNordic_g03.derivative.zeroGain then 0.0 else (vrNordic_g03.dOmega.y - vrNordic_g03.derivative.x) / vrNordic_g03.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* der(vrNordic_g03.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[883]] /* vrNordic_g03.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* vrNordic_g03.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* vrNordic_g03.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4292]] /* vrNordic_g03.derivative.T PARAM */),"vrNordic_g03.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1743;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.x_scaled[1] = $START.vrNordic_g03.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[214] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.x[1] = vrNordic_g03.leadLag1.x_scaled[1] / vrNordic_g03.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3507]] /* vrNordic_g03.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */),"vrNordic_g03.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag1.y = (vrNordic_g03.leadLag1.bb[2] - vrNordic_g03.leadLag1.d * vrNordic_g03.leadLag1.a[2]) * vrNordic_g03.leadLag1.x[1] + vrNordic_g03.leadLag1.d * vrNordic_g03.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4321]] /* vrNordic_g03.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4322]] /* vrNordic_g03.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3507]] /* vrNordic_g03.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4322]] /* vrNordic_g03.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */));
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.leadLag1.x_scaled[1] = (vrNordic_g03.leadLag1.a_end * vrNordic_g03.derivative.y - vrNordic_g03.leadLag1.a[2] * vrNordic_g03.leadLag1.x_scaled[1]) / vrNordic_g03.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* der(vrNordic_g03.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4317]] /* vrNordic_g03.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3500]] /* vrNordic_g03.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4316]] /* vrNordic_g03.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* vrNordic_g03.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4315]] /* vrNordic_g03.leadLag1.a[1] PARAM */),"vrNordic_g03.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.x_scaled[1] = $START.vrNordic_g03.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[215] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.x[1] = vrNordic_g03.leadLag2.x_scaled[1] / vrNordic_g03.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3509]] /* vrNordic_g03.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */),"vrNordic_g03.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag2.y = (vrNordic_g03.leadLag2.bb[2] - vrNordic_g03.leadLag2.d * vrNordic_g03.leadLag2.a[2]) * vrNordic_g03.leadLag2.x[1] + vrNordic_g03.leadLag2.d * vrNordic_g03.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4334]] /* vrNordic_g03.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4335]] /* vrNordic_g03.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3509]] /* vrNordic_g03.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4335]] /* vrNordic_g03.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */));
  threadData->lastEquationSolved = 1750;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
vrNordic_g03.limiter.y = smooth(0, if vrNordic_g03.leadLag2.y > vrNordic_g03.limiter.uMax then vrNordic_g03.limiter.uMax else if vrNordic_g03.leadLag2.y < vrNordic_g03.limiter.uMin then vrNordic_g03.limiter.uMin else vrNordic_g03.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  tmp8 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */));
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */);
  }
  else
  {
    tmp9 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */));
    tmp11 = (tmp9?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3510]] /* vrNordic_g03.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3513]] /* vrNordic_g03.limiter.y variable */) = tmp11;
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.leadLag2.x_scaled[1] = (vrNordic_g03.leadLag2.a_end * vrNordic_g03.leadLag1.y - vrNordic_g03.leadLag2.a[2] * vrNordic_g03.leadLag2.x_scaled[1]) / vrNordic_g03.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* der(vrNordic_g03.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4330]] /* vrNordic_g03.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* vrNordic_g03.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4329]] /* vrNordic_g03.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* vrNordic_g03.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4328]] /* vrNordic_g03.leadLag2.a[1] PARAM */),"vrNordic_g03.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.x = $START.vrNordic_g04.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* vrNordic_g04.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[218] /* vrNordic_g04.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1753;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
vrNordic_g04.derivative.y = if vrNordic_g04.derivative.zeroGain then 0.0 else vrNordic_g04.derivative.k / vrNordic_g04.derivative.T * (vrNordic_g04.dOmega.y - vrNordic_g04.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[894]] /* vrNordic_g04.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4372]] /* vrNordic_g04.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4371]] /* vrNordic_g04.derivative.T PARAM */),"vrNordic_g04.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* vrNordic_g04.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.derivative.x = if vrNordic_g04.derivative.zeroGain then 0.0 else (vrNordic_g04.dOmega.y - vrNordic_g04.derivative.x) / vrNordic_g04.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* der(vrNordic_g04.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[894]] /* vrNordic_g04.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3522]] /* vrNordic_g04.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* vrNordic_g04.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4371]] /* vrNordic_g04.derivative.T PARAM */),"vrNordic_g04.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1755;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.x_scaled[1] = $START.vrNordic_g04.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[220] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.x[1] = vrNordic_g04.leadLag1.x_scaled[1] / vrNordic_g04.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3531]] /* vrNordic_g04.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */),"vrNordic_g04.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag1.y = (vrNordic_g04.leadLag1.bb[2] - vrNordic_g04.leadLag1.d * vrNordic_g04.leadLag1.a[2]) * vrNordic_g04.leadLag1.x[1] + vrNordic_g04.leadLag1.d * vrNordic_g04.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4400]] /* vrNordic_g04.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4401]] /* vrNordic_g04.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3531]] /* vrNordic_g04.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4401]] /* vrNordic_g04.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */));
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.leadLag1.x_scaled[1] = (vrNordic_g04.leadLag1.a_end * vrNordic_g04.derivative.y - vrNordic_g04.leadLag1.a[2] * vrNordic_g04.leadLag1.x_scaled[1]) / vrNordic_g04.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(vrNordic_g04.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4396]] /* vrNordic_g04.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* vrNordic_g04.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4395]] /* vrNordic_g04.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* vrNordic_g04.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4394]] /* vrNordic_g04.leadLag1.a[1] PARAM */),"vrNordic_g04.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.x_scaled[1] = $START.vrNordic_g04.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[221] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.x[1] = vrNordic_g04.leadLag2.x_scaled[1] / vrNordic_g04.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3533]] /* vrNordic_g04.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */),"vrNordic_g04.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag2.y = (vrNordic_g04.leadLag2.bb[2] - vrNordic_g04.leadLag2.d * vrNordic_g04.leadLag2.a[2]) * vrNordic_g04.leadLag2.x[1] + vrNordic_g04.leadLag2.d * vrNordic_g04.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4413]] /* vrNordic_g04.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4414]] /* vrNordic_g04.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3533]] /* vrNordic_g04.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4414]] /* vrNordic_g04.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */));
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
vrNordic_g04.limiter.y = smooth(0, if vrNordic_g04.leadLag2.y > vrNordic_g04.limiter.uMax then vrNordic_g04.limiter.uMax else if vrNordic_g04.leadLag2.y < vrNordic_g04.limiter.uMin then vrNordic_g04.limiter.uMin else vrNordic_g04.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  tmp12 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */));
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */);
  }
  else
  {
    tmp13 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */));
    tmp15 = (tmp13?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3534]] /* vrNordic_g04.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3537]] /* vrNordic_g04.limiter.y variable */) = tmp15;
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.leadLag2.x_scaled[1] = (vrNordic_g04.leadLag2.a_end * vrNordic_g04.leadLag1.y - vrNordic_g04.leadLag2.a[2] * vrNordic_g04.leadLag2.x_scaled[1]) / vrNordic_g04.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* der(vrNordic_g04.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4409]] /* vrNordic_g04.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3532]] /* vrNordic_g04.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4408]] /* vrNordic_g04.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* vrNordic_g04.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4407]] /* vrNordic_g04.leadLag2.a[1] PARAM */),"vrNordic_g04.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.x = $START.vrNordic_g05.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* vrNordic_g05.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[224] /* vrNordic_g05.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
vrNordic_g05.derivative.y = if vrNordic_g05.derivative.zeroGain then 0.0 else vrNordic_g05.derivative.k / vrNordic_g05.derivative.T * (vrNordic_g05.dOmega.y - vrNordic_g05.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[905]] /* vrNordic_g05.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4451]] /* vrNordic_g05.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4450]] /* vrNordic_g05.derivative.T PARAM */),"vrNordic_g05.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* vrNordic_g05.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.derivative.x = if vrNordic_g05.derivative.zeroGain then 0.0 else (vrNordic_g05.dOmega.y - vrNordic_g05.derivative.x) / vrNordic_g05.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* der(vrNordic_g05.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[905]] /* vrNordic_g05.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3546]] /* vrNordic_g05.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* vrNordic_g05.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4450]] /* vrNordic_g05.derivative.T PARAM */),"vrNordic_g05.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.x_scaled[1] = $START.vrNordic_g05.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[226] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.x[1] = vrNordic_g05.leadLag1.x_scaled[1] / vrNordic_g05.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3555]] /* vrNordic_g05.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */),"vrNordic_g05.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag1.y = (vrNordic_g05.leadLag1.bb[2] - vrNordic_g05.leadLag1.d * vrNordic_g05.leadLag1.a[2]) * vrNordic_g05.leadLag1.x[1] + vrNordic_g05.leadLag1.d * vrNordic_g05.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4479]] /* vrNordic_g05.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4480]] /* vrNordic_g05.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3555]] /* vrNordic_g05.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4480]] /* vrNordic_g05.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */));
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.leadLag1.x_scaled[1] = (vrNordic_g05.leadLag1.a_end * vrNordic_g05.derivative.y - vrNordic_g05.leadLag1.a[2] * vrNordic_g05.leadLag1.x_scaled[1]) / vrNordic_g05.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* der(vrNordic_g05.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4475]] /* vrNordic_g05.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3548]] /* vrNordic_g05.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4474]] /* vrNordic_g05.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* vrNordic_g05.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4473]] /* vrNordic_g05.leadLag1.a[1] PARAM */),"vrNordic_g05.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1771;
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.x_scaled[1] = $START.vrNordic_g05.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[227] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.x[1] = vrNordic_g05.leadLag2.x_scaled[1] / vrNordic_g05.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3557]] /* vrNordic_g05.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */),"vrNordic_g05.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag2.y = (vrNordic_g05.leadLag2.bb[2] - vrNordic_g05.leadLag2.d * vrNordic_g05.leadLag2.a[2]) * vrNordic_g05.leadLag2.x[1] + vrNordic_g05.leadLag2.d * vrNordic_g05.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4492]] /* vrNordic_g05.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4493]] /* vrNordic_g05.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3557]] /* vrNordic_g05.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4493]] /* vrNordic_g05.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */));
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
vrNordic_g05.limiter.y = smooth(0, if vrNordic_g05.leadLag2.y > vrNordic_g05.limiter.uMax then vrNordic_g05.limiter.uMax else if vrNordic_g05.leadLag2.y < vrNordic_g05.limiter.uMin then vrNordic_g05.limiter.uMin else vrNordic_g05.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */));
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */);
  }
  else
  {
    tmp17 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */));
    tmp19 = (tmp17?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3558]] /* vrNordic_g05.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3561]] /* vrNordic_g05.limiter.y variable */) = tmp19;
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.leadLag2.x_scaled[1] = (vrNordic_g05.leadLag2.a_end * vrNordic_g05.leadLag1.y - vrNordic_g05.leadLag2.a[2] * vrNordic_g05.leadLag2.x_scaled[1]) / vrNordic_g05.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* der(vrNordic_g05.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4488]] /* vrNordic_g05.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3556]] /* vrNordic_g05.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4487]] /* vrNordic_g05.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* vrNordic_g05.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4486]] /* vrNordic_g05.leadLag2.a[1] PARAM */),"vrNordic_g05.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.x = $START.vrNordic_g06.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* vrNordic_g06.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[230] /* vrNordic_g06.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.y = if vrNordic_g06.derivative.zeroGain then 0.0 else vrNordic_g06.derivative.k / vrNordic_g06.derivative.T * (vrNordic_g06.dOmega.y - vrNordic_g06.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[916]] /* vrNordic_g06.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4530]] /* vrNordic_g06.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4529]] /* vrNordic_g06.derivative.T PARAM */),"vrNordic_g06.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* vrNordic_g06.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1778;
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.derivative.x = if vrNordic_g06.derivative.zeroGain then 0.0 else (vrNordic_g06.dOmega.y - vrNordic_g06.derivative.x) / vrNordic_g06.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* der(vrNordic_g06.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[916]] /* vrNordic_g06.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* vrNordic_g06.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* vrNordic_g06.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4529]] /* vrNordic_g06.derivative.T PARAM */),"vrNordic_g06.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1779;
}

/*
equation index: 1780
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.x_scaled[1] = $START.vrNordic_g06.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[232] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1780;
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.x[1] = vrNordic_g06.leadLag1.x_scaled[1] / vrNordic_g06.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3579]] /* vrNordic_g06.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */),"vrNordic_g06.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1781;
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.y = (vrNordic_g06.leadLag1.bb[2] - vrNordic_g06.leadLag1.d * vrNordic_g06.leadLag1.a[2]) * vrNordic_g06.leadLag1.x[1] + vrNordic_g06.leadLag1.d * vrNordic_g06.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4558]] /* vrNordic_g06.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4559]] /* vrNordic_g06.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3579]] /* vrNordic_g06.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4559]] /* vrNordic_g06.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */));
  threadData->lastEquationSolved = 1782;
}

/*
equation index: 1783
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.leadLag1.x_scaled[1] = (vrNordic_g06.leadLag1.a_end * vrNordic_g06.derivative.y - vrNordic_g06.leadLag1.a[2] * vrNordic_g06.leadLag1.x_scaled[1]) / vrNordic_g06.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* der(vrNordic_g06.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3572]] /* vrNordic_g06.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* vrNordic_g06.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4552]] /* vrNordic_g06.leadLag1.a[1] PARAM */),"vrNordic_g06.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1783;
}

/*
equation index: 1784
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.x_scaled[1] = $START.vrNordic_g06.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[233] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1784;
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.x[1] = vrNordic_g06.leadLag2.x_scaled[1] / vrNordic_g06.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3581]] /* vrNordic_g06.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */),"vrNordic_g06.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1785;
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.y = (vrNordic_g06.leadLag2.bb[2] - vrNordic_g06.leadLag2.d * vrNordic_g06.leadLag2.a[2]) * vrNordic_g06.leadLag2.x[1] + vrNordic_g06.leadLag2.d * vrNordic_g06.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4571]] /* vrNordic_g06.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4572]] /* vrNordic_g06.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3581]] /* vrNordic_g06.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4572]] /* vrNordic_g06.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */));
  threadData->lastEquationSolved = 1786;
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
vrNordic_g06.limiter.y = smooth(0, if vrNordic_g06.leadLag2.y > vrNordic_g06.limiter.uMax then vrNordic_g06.limiter.uMax else if vrNordic_g06.leadLag2.y < vrNordic_g06.limiter.uMin then vrNordic_g06.limiter.uMin else vrNordic_g06.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1787};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  tmp20 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */));
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */);
  }
  else
  {
    tmp21 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */));
    tmp23 = (tmp21?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3582]] /* vrNordic_g06.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3585]] /* vrNordic_g06.limiter.y variable */) = tmp23;
  threadData->lastEquationSolved = 1787;
}

/*
equation index: 1788
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.leadLag2.x_scaled[1] = (vrNordic_g06.leadLag2.a_end * vrNordic_g06.leadLag1.y - vrNordic_g06.leadLag2.a[2] * vrNordic_g06.leadLag2.x_scaled[1]) / vrNordic_g06.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* der(vrNordic_g06.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3580]] /* vrNordic_g06.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* vrNordic_g06.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4565]] /* vrNordic_g06.leadLag2.a[1] PARAM */),"vrNordic_g06.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1788;
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.x = $START.vrNordic_g07.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* vrNordic_g07.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[236] /* vrNordic_g07.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1789;
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.y = if vrNordic_g07.derivative.zeroGain then 0.0 else vrNordic_g07.derivative.k / vrNordic_g07.derivative.T * (vrNordic_g07.dOmega.y - vrNordic_g07.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[927]] /* vrNordic_g07.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4609]] /* vrNordic_g07.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4608]] /* vrNordic_g07.derivative.T PARAM */),"vrNordic_g07.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* vrNordic_g07.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1790;
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.derivative.x = if vrNordic_g07.derivative.zeroGain then 0.0 else (vrNordic_g07.dOmega.y - vrNordic_g07.derivative.x) / vrNordic_g07.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* der(vrNordic_g07.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[927]] /* vrNordic_g07.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3594]] /* vrNordic_g07.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* vrNordic_g07.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4608]] /* vrNordic_g07.derivative.T PARAM */),"vrNordic_g07.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1791;
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.x_scaled[1] = $START.vrNordic_g07.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[238] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1792;
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.x[1] = vrNordic_g07.leadLag1.x_scaled[1] / vrNordic_g07.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3603]] /* vrNordic_g07.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */),"vrNordic_g07.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1793;
}

/*
equation index: 1794
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.y = (vrNordic_g07.leadLag1.bb[2] - vrNordic_g07.leadLag1.d * vrNordic_g07.leadLag1.a[2]) * vrNordic_g07.leadLag1.x[1] + vrNordic_g07.leadLag1.d * vrNordic_g07.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4637]] /* vrNordic_g07.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4638]] /* vrNordic_g07.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3603]] /* vrNordic_g07.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4638]] /* vrNordic_g07.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */));
  threadData->lastEquationSolved = 1794;
}

/*
equation index: 1795
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.leadLag1.x_scaled[1] = (vrNordic_g07.leadLag1.a_end * vrNordic_g07.derivative.y - vrNordic_g07.leadLag1.a[2] * vrNordic_g07.leadLag1.x_scaled[1]) / vrNordic_g07.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* der(vrNordic_g07.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3596]] /* vrNordic_g07.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* vrNordic_g07.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4631]] /* vrNordic_g07.leadLag1.a[1] PARAM */),"vrNordic_g07.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1795;
}

/*
equation index: 1796
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.x_scaled[1] = $START.vrNordic_g07.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[239] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1796;
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.x[1] = vrNordic_g07.leadLag2.x_scaled[1] / vrNordic_g07.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3605]] /* vrNordic_g07.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */),"vrNordic_g07.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1797;
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.y = (vrNordic_g07.leadLag2.bb[2] - vrNordic_g07.leadLag2.d * vrNordic_g07.leadLag2.a[2]) * vrNordic_g07.leadLag2.x[1] + vrNordic_g07.leadLag2.d * vrNordic_g07.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4650]] /* vrNordic_g07.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4651]] /* vrNordic_g07.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3605]] /* vrNordic_g07.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4651]] /* vrNordic_g07.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */));
  threadData->lastEquationSolved = 1798;
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
vrNordic_g07.limiter.y = smooth(0, if vrNordic_g07.leadLag2.y > vrNordic_g07.limiter.uMax then vrNordic_g07.limiter.uMax else if vrNordic_g07.leadLag2.y < vrNordic_g07.limiter.uMin then vrNordic_g07.limiter.uMin else vrNordic_g07.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1799};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp24 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */));
  tmp26 = (modelica_boolean)tmp24;
  if(tmp26)
  {
    tmp27 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */);
  }
  else
  {
    tmp25 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */));
    tmp27 = (tmp25?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3606]] /* vrNordic_g07.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3609]] /* vrNordic_g07.limiter.y variable */) = tmp27;
  threadData->lastEquationSolved = 1799;
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.leadLag2.x_scaled[1] = (vrNordic_g07.leadLag2.a_end * vrNordic_g07.leadLag1.y - vrNordic_g07.leadLag2.a[2] * vrNordic_g07.leadLag2.x_scaled[1]) / vrNordic_g07.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* der(vrNordic_g07.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3604]] /* vrNordic_g07.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* vrNordic_g07.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4644]] /* vrNordic_g07.leadLag2.a[1] PARAM */),"vrNordic_g07.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1800;
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.x = $START.vrNordic_g08.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* vrNordic_g08.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[242] /* vrNordic_g08.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1801;
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.y = if vrNordic_g08.derivative.zeroGain then 0.0 else vrNordic_g08.derivative.k / vrNordic_g08.derivative.T * (vrNordic_g08.dOmega.y - vrNordic_g08.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[938]] /* vrNordic_g08.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4688]] /* vrNordic_g08.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4687]] /* vrNordic_g08.derivative.T PARAM */),"vrNordic_g08.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* vrNordic_g08.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1802;
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.derivative.x = if vrNordic_g08.derivative.zeroGain then 0.0 else (vrNordic_g08.dOmega.y - vrNordic_g08.derivative.x) / vrNordic_g08.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* der(vrNordic_g08.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[938]] /* vrNordic_g08.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* vrNordic_g08.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4687]] /* vrNordic_g08.derivative.T PARAM */),"vrNordic_g08.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1803;
}

/*
equation index: 1804
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.x_scaled[1] = $START.vrNordic_g08.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[244] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1804;
}

/*
equation index: 1805
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.x[1] = vrNordic_g08.leadLag1.x_scaled[1] / vrNordic_g08.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3627]] /* vrNordic_g08.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */),"vrNordic_g08.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1805;
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.y = (vrNordic_g08.leadLag1.bb[2] - vrNordic_g08.leadLag1.d * vrNordic_g08.leadLag1.a[2]) * vrNordic_g08.leadLag1.x[1] + vrNordic_g08.leadLag1.d * vrNordic_g08.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4716]] /* vrNordic_g08.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4717]] /* vrNordic_g08.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3627]] /* vrNordic_g08.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4717]] /* vrNordic_g08.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */));
  threadData->lastEquationSolved = 1806;
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.leadLag1.x_scaled[1] = (vrNordic_g08.leadLag1.a_end * vrNordic_g08.derivative.y - vrNordic_g08.leadLag1.a[2] * vrNordic_g08.leadLag1.x_scaled[1]) / vrNordic_g08.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* der(vrNordic_g08.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4710]] /* vrNordic_g08.leadLag1.a[1] PARAM */),"vrNordic_g08.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1807;
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.x_scaled[1] = $START.vrNordic_g08.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[245] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1808;
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.x[1] = vrNordic_g08.leadLag2.x_scaled[1] / vrNordic_g08.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3629]] /* vrNordic_g08.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */),"vrNordic_g08.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1809;
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.y = (vrNordic_g08.leadLag2.bb[2] - vrNordic_g08.leadLag2.d * vrNordic_g08.leadLag2.a[2]) * vrNordic_g08.leadLag2.x[1] + vrNordic_g08.leadLag2.d * vrNordic_g08.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4729]] /* vrNordic_g08.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4730]] /* vrNordic_g08.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3629]] /* vrNordic_g08.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4730]] /* vrNordic_g08.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */));
  threadData->lastEquationSolved = 1810;
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
vrNordic_g08.limiter.y = smooth(0, if vrNordic_g08.leadLag2.y > vrNordic_g08.limiter.uMax then vrNordic_g08.limiter.uMax else if vrNordic_g08.leadLag2.y < vrNordic_g08.limiter.uMin then vrNordic_g08.limiter.uMin else vrNordic_g08.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1811};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  tmp28 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */));
  tmp30 = (modelica_boolean)tmp28;
  if(tmp30)
  {
    tmp31 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */);
  }
  else
  {
    tmp29 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */));
    tmp31 = (tmp29?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3633]] /* vrNordic_g08.limiter.y variable */) = tmp31;
  threadData->lastEquationSolved = 1811;
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.leadLag2.x_scaled[1] = (vrNordic_g08.leadLag2.a_end * vrNordic_g08.leadLag1.y - vrNordic_g08.leadLag2.a[2] * vrNordic_g08.leadLag2.x_scaled[1]) / vrNordic_g08.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* der(vrNordic_g08.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4723]] /* vrNordic_g08.leadLag2.a[1] PARAM */),"vrNordic_g08.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1812;
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.x = $START.vrNordic_g09.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* vrNordic_g09.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[248] /* vrNordic_g09.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1813;
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.y = if vrNordic_g09.derivative.zeroGain then 0.0 else vrNordic_g09.derivative.k / vrNordic_g09.derivative.T * (vrNordic_g09.dOmega.y - vrNordic_g09.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[949]] /* vrNordic_g09.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4767]] /* vrNordic_g09.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4766]] /* vrNordic_g09.derivative.T PARAM */),"vrNordic_g09.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* vrNordic_g09.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1814;
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.derivative.x = if vrNordic_g09.derivative.zeroGain then 0.0 else (vrNordic_g09.dOmega.y - vrNordic_g09.derivative.x) / vrNordic_g09.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* der(vrNordic_g09.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[949]] /* vrNordic_g09.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* vrNordic_g09.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4766]] /* vrNordic_g09.derivative.T PARAM */),"vrNordic_g09.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1815;
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.x_scaled[1] = $START.vrNordic_g09.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[250] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1816;
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.x[1] = vrNordic_g09.leadLag1.x_scaled[1] / vrNordic_g09.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3651]] /* vrNordic_g09.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */),"vrNordic_g09.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1817;
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.y = (vrNordic_g09.leadLag1.bb[2] - vrNordic_g09.leadLag1.d * vrNordic_g09.leadLag1.a[2]) * vrNordic_g09.leadLag1.x[1] + vrNordic_g09.leadLag1.d * vrNordic_g09.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4795]] /* vrNordic_g09.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4796]] /* vrNordic_g09.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3651]] /* vrNordic_g09.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4796]] /* vrNordic_g09.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */));
  threadData->lastEquationSolved = 1818;
}

/*
equation index: 1819
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.leadLag1.x_scaled[1] = (vrNordic_g09.leadLag1.a_end * vrNordic_g09.derivative.y - vrNordic_g09.leadLag1.a[2] * vrNordic_g09.leadLag1.x_scaled[1]) / vrNordic_g09.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* der(vrNordic_g09.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4789]] /* vrNordic_g09.leadLag1.a[1] PARAM */),"vrNordic_g09.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1819;
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.x_scaled[1] = $START.vrNordic_g09.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[251] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1820;
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.x[1] = vrNordic_g09.leadLag2.x_scaled[1] / vrNordic_g09.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3653]] /* vrNordic_g09.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */),"vrNordic_g09.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1821;
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.y = (vrNordic_g09.leadLag2.bb[2] - vrNordic_g09.leadLag2.d * vrNordic_g09.leadLag2.a[2]) * vrNordic_g09.leadLag2.x[1] + vrNordic_g09.leadLag2.d * vrNordic_g09.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4808]] /* vrNordic_g09.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4809]] /* vrNordic_g09.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3653]] /* vrNordic_g09.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4809]] /* vrNordic_g09.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */));
  threadData->lastEquationSolved = 1822;
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
vrNordic_g09.limiter.y = smooth(0, if vrNordic_g09.leadLag2.y > vrNordic_g09.limiter.uMax then vrNordic_g09.limiter.uMax else if vrNordic_g09.leadLag2.y < vrNordic_g09.limiter.uMin then vrNordic_g09.limiter.uMin else vrNordic_g09.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1823};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp32 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */));
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */);
  }
  else
  {
    tmp33 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */));
    tmp35 = (tmp33?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* vrNordic_g09.limiter.y variable */) = tmp35;
  threadData->lastEquationSolved = 1823;
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.leadLag2.x_scaled[1] = (vrNordic_g09.leadLag2.a_end * vrNordic_g09.leadLag1.y - vrNordic_g09.leadLag2.a[2] * vrNordic_g09.leadLag2.x_scaled[1]) / vrNordic_g09.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* der(vrNordic_g09.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4802]] /* vrNordic_g09.leadLag2.a[1] PARAM */),"vrNordic_g09.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1824;
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.x = $START.vrNordic_g10.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* vrNordic_g10.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[254] /* vrNordic_g10.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1825;
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.y = if vrNordic_g10.derivative.zeroGain then 0.0 else vrNordic_g10.derivative.k / vrNordic_g10.derivative.T * (vrNordic_g10.dOmega.y - vrNordic_g10.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[960]] /* vrNordic_g10.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4846]] /* vrNordic_g10.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4845]] /* vrNordic_g10.derivative.T PARAM */),"vrNordic_g10.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* vrNordic_g10.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1826;
}

/*
equation index: 1827
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.derivative.x = if vrNordic_g10.derivative.zeroGain then 0.0 else (vrNordic_g10.dOmega.y - vrNordic_g10.derivative.x) / vrNordic_g10.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* der(vrNordic_g10.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[960]] /* vrNordic_g10.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* vrNordic_g10.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4845]] /* vrNordic_g10.derivative.T PARAM */),"vrNordic_g10.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1827;
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.x_scaled[1] = $START.vrNordic_g10.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[256] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.x[1] = vrNordic_g10.leadLag1.x_scaled[1] / vrNordic_g10.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* vrNordic_g10.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */),"vrNordic_g10.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.y = (vrNordic_g10.leadLag1.bb[2] - vrNordic_g10.leadLag1.d * vrNordic_g10.leadLag1.a[2]) * vrNordic_g10.leadLag1.x[1] + vrNordic_g10.leadLag1.d * vrNordic_g10.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4874]] /* vrNordic_g10.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4875]] /* vrNordic_g10.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* vrNordic_g10.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4875]] /* vrNordic_g10.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */));
  threadData->lastEquationSolved = 1830;
}

/*
equation index: 1831
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.leadLag1.x_scaled[1] = (vrNordic_g10.leadLag1.a_end * vrNordic_g10.derivative.y - vrNordic_g10.leadLag1.a[2] * vrNordic_g10.leadLag1.x_scaled[1]) / vrNordic_g10.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* der(vrNordic_g10.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4868]] /* vrNordic_g10.leadLag1.a[1] PARAM */),"vrNordic_g10.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1831;
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.x_scaled[1] = $START.vrNordic_g10.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[257] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1832;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_1375,
    MyNordic_initialized_TestCase_initialized_eqFunction_1376,
    MyNordic_initialized_TestCase_initialized_eqFunction_1377,
    MyNordic_initialized_TestCase_initialized_eqFunction_1378,
    MyNordic_initialized_TestCase_initialized_eqFunction_1379,
    MyNordic_initialized_TestCase_initialized_eqFunction_1380,
    MyNordic_initialized_TestCase_initialized_eqFunction_1381,
    MyNordic_initialized_TestCase_initialized_eqFunction_1382,
    MyNordic_initialized_TestCase_initialized_eqFunction_1383,
    MyNordic_initialized_TestCase_initialized_eqFunction_1384,
    MyNordic_initialized_TestCase_initialized_eqFunction_1385,
    MyNordic_initialized_TestCase_initialized_eqFunction_1386,
    MyNordic_initialized_TestCase_initialized_eqFunction_1387,
    MyNordic_initialized_TestCase_initialized_eqFunction_1388,
    MyNordic_initialized_TestCase_initialized_eqFunction_1389,
    MyNordic_initialized_TestCase_initialized_eqFunction_1390,
    MyNordic_initialized_TestCase_initialized_eqFunction_1391,
    MyNordic_initialized_TestCase_initialized_eqFunction_1392,
    MyNordic_initialized_TestCase_initialized_eqFunction_1393,
    MyNordic_initialized_TestCase_initialized_eqFunction_1394,
    MyNordic_initialized_TestCase_initialized_eqFunction_1395,
    MyNordic_initialized_TestCase_initialized_eqFunction_1396,
    MyNordic_initialized_TestCase_initialized_eqFunction_1397,
    MyNordic_initialized_TestCase_initialized_eqFunction_1398,
    MyNordic_initialized_TestCase_initialized_eqFunction_1399,
    MyNordic_initialized_TestCase_initialized_eqFunction_1400,
    MyNordic_initialized_TestCase_initialized_eqFunction_1401,
    MyNordic_initialized_TestCase_initialized_eqFunction_1402,
    MyNordic_initialized_TestCase_initialized_eqFunction_1403,
    MyNordic_initialized_TestCase_initialized_eqFunction_1404,
    MyNordic_initialized_TestCase_initialized_eqFunction_1405,
    MyNordic_initialized_TestCase_initialized_eqFunction_1406,
    MyNordic_initialized_TestCase_initialized_eqFunction_1407,
    MyNordic_initialized_TestCase_initialized_eqFunction_1408,
    MyNordic_initialized_TestCase_initialized_eqFunction_1409,
    MyNordic_initialized_TestCase_initialized_eqFunction_1410,
    MyNordic_initialized_TestCase_initialized_eqFunction_1411,
    MyNordic_initialized_TestCase_initialized_eqFunction_1412,
    MyNordic_initialized_TestCase_initialized_eqFunction_1413,
    MyNordic_initialized_TestCase_initialized_eqFunction_1414,
    MyNordic_initialized_TestCase_initialized_eqFunction_1415,
    MyNordic_initialized_TestCase_initialized_eqFunction_1416,
    MyNordic_initialized_TestCase_initialized_eqFunction_1417,
    MyNordic_initialized_TestCase_initialized_eqFunction_1418,
    MyNordic_initialized_TestCase_initialized_eqFunction_1419,
    MyNordic_initialized_TestCase_initialized_eqFunction_1420,
    MyNordic_initialized_TestCase_initialized_eqFunction_1421,
    MyNordic_initialized_TestCase_initialized_eqFunction_1422,
    MyNordic_initialized_TestCase_initialized_eqFunction_1423,
    MyNordic_initialized_TestCase_initialized_eqFunction_1424,
    MyNordic_initialized_TestCase_initialized_eqFunction_1425,
    MyNordic_initialized_TestCase_initialized_eqFunction_1426,
    MyNordic_initialized_TestCase_initialized_eqFunction_1427,
    MyNordic_initialized_TestCase_initialized_eqFunction_1428,
    MyNordic_initialized_TestCase_initialized_eqFunction_1429,
    MyNordic_initialized_TestCase_initialized_eqFunction_1430,
    MyNordic_initialized_TestCase_initialized_eqFunction_1431,
    MyNordic_initialized_TestCase_initialized_eqFunction_1432,
    MyNordic_initialized_TestCase_initialized_eqFunction_1433,
    MyNordic_initialized_TestCase_initialized_eqFunction_1434,
    MyNordic_initialized_TestCase_initialized_eqFunction_1435,
    MyNordic_initialized_TestCase_initialized_eqFunction_1436,
    MyNordic_initialized_TestCase_initialized_eqFunction_1437,
    MyNordic_initialized_TestCase_initialized_eqFunction_1438,
    MyNordic_initialized_TestCase_initialized_eqFunction_1439,
    MyNordic_initialized_TestCase_initialized_eqFunction_1440,
    MyNordic_initialized_TestCase_initialized_eqFunction_1441,
    MyNordic_initialized_TestCase_initialized_eqFunction_1442,
    MyNordic_initialized_TestCase_initialized_eqFunction_1443,
    MyNordic_initialized_TestCase_initialized_eqFunction_1444,
    MyNordic_initialized_TestCase_initialized_eqFunction_1445,
    MyNordic_initialized_TestCase_initialized_eqFunction_1446,
    MyNordic_initialized_TestCase_initialized_eqFunction_1447,
    MyNordic_initialized_TestCase_initialized_eqFunction_1448,
    MyNordic_initialized_TestCase_initialized_eqFunction_1449,
    MyNordic_initialized_TestCase_initialized_eqFunction_1450,
    MyNordic_initialized_TestCase_initialized_eqFunction_1451,
    MyNordic_initialized_TestCase_initialized_eqFunction_1452,
    MyNordic_initialized_TestCase_initialized_eqFunction_1453,
    MyNordic_initialized_TestCase_initialized_eqFunction_1454,
    MyNordic_initialized_TestCase_initialized_eqFunction_1455,
    MyNordic_initialized_TestCase_initialized_eqFunction_1456,
    MyNordic_initialized_TestCase_initialized_eqFunction_1457,
    MyNordic_initialized_TestCase_initialized_eqFunction_1458,
    MyNordic_initialized_TestCase_initialized_eqFunction_1459,
    MyNordic_initialized_TestCase_initialized_eqFunction_1460,
    MyNordic_initialized_TestCase_initialized_eqFunction_1461,
    MyNordic_initialized_TestCase_initialized_eqFunction_1462,
    MyNordic_initialized_TestCase_initialized_eqFunction_1463,
    MyNordic_initialized_TestCase_initialized_eqFunction_1464,
    MyNordic_initialized_TestCase_initialized_eqFunction_1465,
    MyNordic_initialized_TestCase_initialized_eqFunction_1466,
    MyNordic_initialized_TestCase_initialized_eqFunction_1467,
    MyNordic_initialized_TestCase_initialized_eqFunction_1468,
    MyNordic_initialized_TestCase_initialized_eqFunction_1469,
    MyNordic_initialized_TestCase_initialized_eqFunction_1470,
    MyNordic_initialized_TestCase_initialized_eqFunction_1471,
    MyNordic_initialized_TestCase_initialized_eqFunction_1472,
    MyNordic_initialized_TestCase_initialized_eqFunction_1473,
    MyNordic_initialized_TestCase_initialized_eqFunction_1474,
    MyNordic_initialized_TestCase_initialized_eqFunction_1475,
    MyNordic_initialized_TestCase_initialized_eqFunction_1476,
    MyNordic_initialized_TestCase_initialized_eqFunction_1477,
    MyNordic_initialized_TestCase_initialized_eqFunction_1478,
    MyNordic_initialized_TestCase_initialized_eqFunction_1479,
    MyNordic_initialized_TestCase_initialized_eqFunction_1480,
    MyNordic_initialized_TestCase_initialized_eqFunction_1481,
    MyNordic_initialized_TestCase_initialized_eqFunction_1482,
    MyNordic_initialized_TestCase_initialized_eqFunction_1483,
    MyNordic_initialized_TestCase_initialized_eqFunction_1484,
    MyNordic_initialized_TestCase_initialized_eqFunction_1485,
    MyNordic_initialized_TestCase_initialized_eqFunction_1486,
    MyNordic_initialized_TestCase_initialized_eqFunction_1487,
    MyNordic_initialized_TestCase_initialized_eqFunction_1488,
    MyNordic_initialized_TestCase_initialized_eqFunction_1489,
    MyNordic_initialized_TestCase_initialized_eqFunction_1490,
    MyNordic_initialized_TestCase_initialized_eqFunction_1491,
    MyNordic_initialized_TestCase_initialized_eqFunction_1492,
    MyNordic_initialized_TestCase_initialized_eqFunction_1493,
    MyNordic_initialized_TestCase_initialized_eqFunction_1494,
    MyNordic_initialized_TestCase_initialized_eqFunction_1495,
    MyNordic_initialized_TestCase_initialized_eqFunction_1496,
    MyNordic_initialized_TestCase_initialized_eqFunction_1497,
    MyNordic_initialized_TestCase_initialized_eqFunction_1498,
    MyNordic_initialized_TestCase_initialized_eqFunction_1499,
    MyNordic_initialized_TestCase_initialized_eqFunction_1500,
    MyNordic_initialized_TestCase_initialized_eqFunction_1501,
    MyNordic_initialized_TestCase_initialized_eqFunction_1502,
    MyNordic_initialized_TestCase_initialized_eqFunction_1503,
    MyNordic_initialized_TestCase_initialized_eqFunction_1504,
    MyNordic_initialized_TestCase_initialized_eqFunction_1505,
    MyNordic_initialized_TestCase_initialized_eqFunction_1506,
    MyNordic_initialized_TestCase_initialized_eqFunction_1507,
    MyNordic_initialized_TestCase_initialized_eqFunction_1508,
    MyNordic_initialized_TestCase_initialized_eqFunction_1509,
    MyNordic_initialized_TestCase_initialized_eqFunction_1510,
    MyNordic_initialized_TestCase_initialized_eqFunction_1511,
    MyNordic_initialized_TestCase_initialized_eqFunction_1512,
    MyNordic_initialized_TestCase_initialized_eqFunction_1513,
    MyNordic_initialized_TestCase_initialized_eqFunction_1514,
    MyNordic_initialized_TestCase_initialized_eqFunction_1515,
    MyNordic_initialized_TestCase_initialized_eqFunction_1516,
    MyNordic_initialized_TestCase_initialized_eqFunction_1517,
    MyNordic_initialized_TestCase_initialized_eqFunction_1518,
    MyNordic_initialized_TestCase_initialized_eqFunction_1519,
    MyNordic_initialized_TestCase_initialized_eqFunction_1520,
    MyNordic_initialized_TestCase_initialized_eqFunction_1521,
    MyNordic_initialized_TestCase_initialized_eqFunction_1522,
    MyNordic_initialized_TestCase_initialized_eqFunction_1523,
    MyNordic_initialized_TestCase_initialized_eqFunction_1524,
    MyNordic_initialized_TestCase_initialized_eqFunction_1525,
    MyNordic_initialized_TestCase_initialized_eqFunction_1526,
    MyNordic_initialized_TestCase_initialized_eqFunction_1527,
    MyNordic_initialized_TestCase_initialized_eqFunction_1528,
    MyNordic_initialized_TestCase_initialized_eqFunction_1529,
    MyNordic_initialized_TestCase_initialized_eqFunction_1530,
    MyNordic_initialized_TestCase_initialized_eqFunction_1531,
    MyNordic_initialized_TestCase_initialized_eqFunction_1532,
    MyNordic_initialized_TestCase_initialized_eqFunction_1533,
    MyNordic_initialized_TestCase_initialized_eqFunction_1534,
    MyNordic_initialized_TestCase_initialized_eqFunction_1535,
    MyNordic_initialized_TestCase_initialized_eqFunction_1536,
    MyNordic_initialized_TestCase_initialized_eqFunction_1537,
    MyNordic_initialized_TestCase_initialized_eqFunction_1538,
    MyNordic_initialized_TestCase_initialized_eqFunction_1539,
    MyNordic_initialized_TestCase_initialized_eqFunction_1540,
    MyNordic_initialized_TestCase_initialized_eqFunction_1541,
    MyNordic_initialized_TestCase_initialized_eqFunction_1542,
    MyNordic_initialized_TestCase_initialized_eqFunction_1543,
    MyNordic_initialized_TestCase_initialized_eqFunction_1544,
    MyNordic_initialized_TestCase_initialized_eqFunction_1545,
    MyNordic_initialized_TestCase_initialized_eqFunction_1546,
    MyNordic_initialized_TestCase_initialized_eqFunction_1547,
    MyNordic_initialized_TestCase_initialized_eqFunction_1548,
    MyNordic_initialized_TestCase_initialized_eqFunction_1549,
    MyNordic_initialized_TestCase_initialized_eqFunction_1550,
    MyNordic_initialized_TestCase_initialized_eqFunction_1551,
    MyNordic_initialized_TestCase_initialized_eqFunction_1552,
    MyNordic_initialized_TestCase_initialized_eqFunction_1553,
    MyNordic_initialized_TestCase_initialized_eqFunction_1554,
    MyNordic_initialized_TestCase_initialized_eqFunction_1555,
    MyNordic_initialized_TestCase_initialized_eqFunction_1556,
    MyNordic_initialized_TestCase_initialized_eqFunction_1557,
    MyNordic_initialized_TestCase_initialized_eqFunction_1558,
    MyNordic_initialized_TestCase_initialized_eqFunction_1559,
    MyNordic_initialized_TestCase_initialized_eqFunction_1560,
    MyNordic_initialized_TestCase_initialized_eqFunction_1561,
    MyNordic_initialized_TestCase_initialized_eqFunction_1562,
    MyNordic_initialized_TestCase_initialized_eqFunction_1563,
    MyNordic_initialized_TestCase_initialized_eqFunction_1564,
    MyNordic_initialized_TestCase_initialized_eqFunction_1565,
    MyNordic_initialized_TestCase_initialized_eqFunction_1566,
    MyNordic_initialized_TestCase_initialized_eqFunction_1567,
    MyNordic_initialized_TestCase_initialized_eqFunction_1568,
    MyNordic_initialized_TestCase_initialized_eqFunction_1569,
    MyNordic_initialized_TestCase_initialized_eqFunction_1570,
    MyNordic_initialized_TestCase_initialized_eqFunction_1571,
    MyNordic_initialized_TestCase_initialized_eqFunction_1572,
    MyNordic_initialized_TestCase_initialized_eqFunction_1573,
    MyNordic_initialized_TestCase_initialized_eqFunction_1574,
    MyNordic_initialized_TestCase_initialized_eqFunction_1575,
    MyNordic_initialized_TestCase_initialized_eqFunction_1576,
    MyNordic_initialized_TestCase_initialized_eqFunction_1577,
    MyNordic_initialized_TestCase_initialized_eqFunction_1578,
    MyNordic_initialized_TestCase_initialized_eqFunction_1579,
    MyNordic_initialized_TestCase_initialized_eqFunction_1580,
    MyNordic_initialized_TestCase_initialized_eqFunction_1581,
    MyNordic_initialized_TestCase_initialized_eqFunction_1582,
    MyNordic_initialized_TestCase_initialized_eqFunction_1583,
    MyNordic_initialized_TestCase_initialized_eqFunction_1584,
    MyNordic_initialized_TestCase_initialized_eqFunction_1585,
    MyNordic_initialized_TestCase_initialized_eqFunction_1586,
    MyNordic_initialized_TestCase_initialized_eqFunction_1587,
    MyNordic_initialized_TestCase_initialized_eqFunction_1588,
    MyNordic_initialized_TestCase_initialized_eqFunction_1589,
    MyNordic_initialized_TestCase_initialized_eqFunction_1590,
    MyNordic_initialized_TestCase_initialized_eqFunction_1591,
    MyNordic_initialized_TestCase_initialized_eqFunction_1592,
    MyNordic_initialized_TestCase_initialized_eqFunction_1593,
    MyNordic_initialized_TestCase_initialized_eqFunction_1594,
    MyNordic_initialized_TestCase_initialized_eqFunction_1595,
    MyNordic_initialized_TestCase_initialized_eqFunction_1596,
    MyNordic_initialized_TestCase_initialized_eqFunction_1597,
    MyNordic_initialized_TestCase_initialized_eqFunction_1598,
    MyNordic_initialized_TestCase_initialized_eqFunction_1599,
    MyNordic_initialized_TestCase_initialized_eqFunction_1600,
    MyNordic_initialized_TestCase_initialized_eqFunction_1601,
    MyNordic_initialized_TestCase_initialized_eqFunction_1602,
    MyNordic_initialized_TestCase_initialized_eqFunction_1603,
    MyNordic_initialized_TestCase_initialized_eqFunction_1604,
    MyNordic_initialized_TestCase_initialized_eqFunction_1605,
    MyNordic_initialized_TestCase_initialized_eqFunction_1606,
    MyNordic_initialized_TestCase_initialized_eqFunction_1607,
    MyNordic_initialized_TestCase_initialized_eqFunction_1608,
    MyNordic_initialized_TestCase_initialized_eqFunction_1609,
    MyNordic_initialized_TestCase_initialized_eqFunction_1610,
    MyNordic_initialized_TestCase_initialized_eqFunction_1611,
    MyNordic_initialized_TestCase_initialized_eqFunction_1612,
    MyNordic_initialized_TestCase_initialized_eqFunction_1613,
    MyNordic_initialized_TestCase_initialized_eqFunction_1614,
    MyNordic_initialized_TestCase_initialized_eqFunction_1615,
    MyNordic_initialized_TestCase_initialized_eqFunction_1616,
    MyNordic_initialized_TestCase_initialized_eqFunction_1617,
    MyNordic_initialized_TestCase_initialized_eqFunction_1618,
    MyNordic_initialized_TestCase_initialized_eqFunction_1619,
    MyNordic_initialized_TestCase_initialized_eqFunction_1620,
    MyNordic_initialized_TestCase_initialized_eqFunction_1621,
    MyNordic_initialized_TestCase_initialized_eqFunction_1622,
    MyNordic_initialized_TestCase_initialized_eqFunction_1623,
    MyNordic_initialized_TestCase_initialized_eqFunction_1624,
    MyNordic_initialized_TestCase_initialized_eqFunction_1625,
    MyNordic_initialized_TestCase_initialized_eqFunction_1626,
    MyNordic_initialized_TestCase_initialized_eqFunction_1627,
    MyNordic_initialized_TestCase_initialized_eqFunction_1628,
    MyNordic_initialized_TestCase_initialized_eqFunction_1629,
    MyNordic_initialized_TestCase_initialized_eqFunction_1630,
    MyNordic_initialized_TestCase_initialized_eqFunction_1631,
    MyNordic_initialized_TestCase_initialized_eqFunction_1632,
    MyNordic_initialized_TestCase_initialized_eqFunction_1633,
    MyNordic_initialized_TestCase_initialized_eqFunction_1634,
    MyNordic_initialized_TestCase_initialized_eqFunction_1635,
    MyNordic_initialized_TestCase_initialized_eqFunction_1636,
    MyNordic_initialized_TestCase_initialized_eqFunction_1637,
    MyNordic_initialized_TestCase_initialized_eqFunction_1638,
    MyNordic_initialized_TestCase_initialized_eqFunction_1639,
    MyNordic_initialized_TestCase_initialized_eqFunction_1640,
    MyNordic_initialized_TestCase_initialized_eqFunction_1641,
    MyNordic_initialized_TestCase_initialized_eqFunction_1642,
    MyNordic_initialized_TestCase_initialized_eqFunction_1643,
    MyNordic_initialized_TestCase_initialized_eqFunction_1644,
    MyNordic_initialized_TestCase_initialized_eqFunction_1645,
    MyNordic_initialized_TestCase_initialized_eqFunction_1646,
    MyNordic_initialized_TestCase_initialized_eqFunction_1647,
    MyNordic_initialized_TestCase_initialized_eqFunction_1648,
    MyNordic_initialized_TestCase_initialized_eqFunction_1649,
    MyNordic_initialized_TestCase_initialized_eqFunction_1650,
    MyNordic_initialized_TestCase_initialized_eqFunction_1651,
    MyNordic_initialized_TestCase_initialized_eqFunction_1652,
    MyNordic_initialized_TestCase_initialized_eqFunction_1653,
    MyNordic_initialized_TestCase_initialized_eqFunction_1654,
    MyNordic_initialized_TestCase_initialized_eqFunction_1655,
    MyNordic_initialized_TestCase_initialized_eqFunction_1656,
    MyNordic_initialized_TestCase_initialized_eqFunction_1657,
    MyNordic_initialized_TestCase_initialized_eqFunction_1658,
    MyNordic_initialized_TestCase_initialized_eqFunction_1659,
    MyNordic_initialized_TestCase_initialized_eqFunction_1660,
    MyNordic_initialized_TestCase_initialized_eqFunction_1661,
    MyNordic_initialized_TestCase_initialized_eqFunction_1662,
    MyNordic_initialized_TestCase_initialized_eqFunction_1663,
    MyNordic_initialized_TestCase_initialized_eqFunction_1664,
    MyNordic_initialized_TestCase_initialized_eqFunction_1665,
    MyNordic_initialized_TestCase_initialized_eqFunction_1666,
    MyNordic_initialized_TestCase_initialized_eqFunction_1667,
    MyNordic_initialized_TestCase_initialized_eqFunction_1668,
    MyNordic_initialized_TestCase_initialized_eqFunction_1669,
    MyNordic_initialized_TestCase_initialized_eqFunction_1670,
    MyNordic_initialized_TestCase_initialized_eqFunction_1671,
    MyNordic_initialized_TestCase_initialized_eqFunction_1672,
    MyNordic_initialized_TestCase_initialized_eqFunction_1673,
    MyNordic_initialized_TestCase_initialized_eqFunction_1674,
    MyNordic_initialized_TestCase_initialized_eqFunction_1675,
    MyNordic_initialized_TestCase_initialized_eqFunction_1676,
    MyNordic_initialized_TestCase_initialized_eqFunction_1677,
    MyNordic_initialized_TestCase_initialized_eqFunction_1678,
    MyNordic_initialized_TestCase_initialized_eqFunction_1679,
    MyNordic_initialized_TestCase_initialized_eqFunction_1680,
    MyNordic_initialized_TestCase_initialized_eqFunction_1681,
    MyNordic_initialized_TestCase_initialized_eqFunction_1682,
    MyNordic_initialized_TestCase_initialized_eqFunction_1683,
    MyNordic_initialized_TestCase_initialized_eqFunction_1684,
    MyNordic_initialized_TestCase_initialized_eqFunction_1685,
    MyNordic_initialized_TestCase_initialized_eqFunction_1686,
    MyNordic_initialized_TestCase_initialized_eqFunction_1687,
    MyNordic_initialized_TestCase_initialized_eqFunction_1688,
    MyNordic_initialized_TestCase_initialized_eqFunction_1689,
    MyNordic_initialized_TestCase_initialized_eqFunction_1690,
    MyNordic_initialized_TestCase_initialized_eqFunction_1691,
    MyNordic_initialized_TestCase_initialized_eqFunction_1692,
    MyNordic_initialized_TestCase_initialized_eqFunction_1693,
    MyNordic_initialized_TestCase_initialized_eqFunction_1694,
    MyNordic_initialized_TestCase_initialized_eqFunction_1695,
    MyNordic_initialized_TestCase_initialized_eqFunction_1696,
    MyNordic_initialized_TestCase_initialized_eqFunction_1697,
    MyNordic_initialized_TestCase_initialized_eqFunction_1698,
    MyNordic_initialized_TestCase_initialized_eqFunction_1699,
    MyNordic_initialized_TestCase_initialized_eqFunction_1700,
    MyNordic_initialized_TestCase_initialized_eqFunction_1701,
    MyNordic_initialized_TestCase_initialized_eqFunction_1702,
    MyNordic_initialized_TestCase_initialized_eqFunction_1703,
    MyNordic_initialized_TestCase_initialized_eqFunction_1704,
    MyNordic_initialized_TestCase_initialized_eqFunction_1705,
    MyNordic_initialized_TestCase_initialized_eqFunction_1706,
    MyNordic_initialized_TestCase_initialized_eqFunction_1707,
    MyNordic_initialized_TestCase_initialized_eqFunction_1708,
    MyNordic_initialized_TestCase_initialized_eqFunction_1709,
    MyNordic_initialized_TestCase_initialized_eqFunction_1710,
    MyNordic_initialized_TestCase_initialized_eqFunction_1711,
    MyNordic_initialized_TestCase_initialized_eqFunction_1712,
    MyNordic_initialized_TestCase_initialized_eqFunction_1713,
    MyNordic_initialized_TestCase_initialized_eqFunction_1714,
    MyNordic_initialized_TestCase_initialized_eqFunction_1715,
    MyNordic_initialized_TestCase_initialized_eqFunction_1716,
    MyNordic_initialized_TestCase_initialized_eqFunction_1717,
    MyNordic_initialized_TestCase_initialized_eqFunction_1718,
    MyNordic_initialized_TestCase_initialized_eqFunction_1719,
    MyNordic_initialized_TestCase_initialized_eqFunction_1720,
    MyNordic_initialized_TestCase_initialized_eqFunction_1721,
    MyNordic_initialized_TestCase_initialized_eqFunction_1722,
    MyNordic_initialized_TestCase_initialized_eqFunction_1723,
    MyNordic_initialized_TestCase_initialized_eqFunction_1724,
    MyNordic_initialized_TestCase_initialized_eqFunction_1725,
    MyNordic_initialized_TestCase_initialized_eqFunction_1726,
    MyNordic_initialized_TestCase_initialized_eqFunction_1727,
    MyNordic_initialized_TestCase_initialized_eqFunction_1728,
    MyNordic_initialized_TestCase_initialized_eqFunction_1729,
    MyNordic_initialized_TestCase_initialized_eqFunction_1730,
    MyNordic_initialized_TestCase_initialized_eqFunction_1731,
    MyNordic_initialized_TestCase_initialized_eqFunction_1732,
    MyNordic_initialized_TestCase_initialized_eqFunction_1733,
    MyNordic_initialized_TestCase_initialized_eqFunction_1734,
    MyNordic_initialized_TestCase_initialized_eqFunction_1735,
    MyNordic_initialized_TestCase_initialized_eqFunction_1736,
    MyNordic_initialized_TestCase_initialized_eqFunction_1737,
    MyNordic_initialized_TestCase_initialized_eqFunction_1738,
    MyNordic_initialized_TestCase_initialized_eqFunction_1739,
    MyNordic_initialized_TestCase_initialized_eqFunction_1740,
    MyNordic_initialized_TestCase_initialized_eqFunction_1741,
    MyNordic_initialized_TestCase_initialized_eqFunction_1742,
    MyNordic_initialized_TestCase_initialized_eqFunction_1743,
    MyNordic_initialized_TestCase_initialized_eqFunction_1744,
    MyNordic_initialized_TestCase_initialized_eqFunction_1745,
    MyNordic_initialized_TestCase_initialized_eqFunction_1746,
    MyNordic_initialized_TestCase_initialized_eqFunction_1747,
    MyNordic_initialized_TestCase_initialized_eqFunction_1748,
    MyNordic_initialized_TestCase_initialized_eqFunction_1749,
    MyNordic_initialized_TestCase_initialized_eqFunction_1750,
    MyNordic_initialized_TestCase_initialized_eqFunction_1751,
    MyNordic_initialized_TestCase_initialized_eqFunction_1752,
    MyNordic_initialized_TestCase_initialized_eqFunction_1753,
    MyNordic_initialized_TestCase_initialized_eqFunction_1754,
    MyNordic_initialized_TestCase_initialized_eqFunction_1755,
    MyNordic_initialized_TestCase_initialized_eqFunction_1756,
    MyNordic_initialized_TestCase_initialized_eqFunction_1757,
    MyNordic_initialized_TestCase_initialized_eqFunction_1758,
    MyNordic_initialized_TestCase_initialized_eqFunction_1759,
    MyNordic_initialized_TestCase_initialized_eqFunction_1760,
    MyNordic_initialized_TestCase_initialized_eqFunction_1761,
    MyNordic_initialized_TestCase_initialized_eqFunction_1762,
    MyNordic_initialized_TestCase_initialized_eqFunction_1763,
    MyNordic_initialized_TestCase_initialized_eqFunction_1764,
    MyNordic_initialized_TestCase_initialized_eqFunction_1765,
    MyNordic_initialized_TestCase_initialized_eqFunction_1766,
    MyNordic_initialized_TestCase_initialized_eqFunction_1767,
    MyNordic_initialized_TestCase_initialized_eqFunction_1768,
    MyNordic_initialized_TestCase_initialized_eqFunction_1769,
    MyNordic_initialized_TestCase_initialized_eqFunction_1770,
    MyNordic_initialized_TestCase_initialized_eqFunction_1771,
    MyNordic_initialized_TestCase_initialized_eqFunction_1772,
    MyNordic_initialized_TestCase_initialized_eqFunction_1773,
    MyNordic_initialized_TestCase_initialized_eqFunction_1774,
    MyNordic_initialized_TestCase_initialized_eqFunction_1775,
    MyNordic_initialized_TestCase_initialized_eqFunction_1776,
    MyNordic_initialized_TestCase_initialized_eqFunction_1777,
    MyNordic_initialized_TestCase_initialized_eqFunction_1778,
    MyNordic_initialized_TestCase_initialized_eqFunction_1779,
    MyNordic_initialized_TestCase_initialized_eqFunction_1780,
    MyNordic_initialized_TestCase_initialized_eqFunction_1781,
    MyNordic_initialized_TestCase_initialized_eqFunction_1782,
    MyNordic_initialized_TestCase_initialized_eqFunction_1783,
    MyNordic_initialized_TestCase_initialized_eqFunction_1784,
    MyNordic_initialized_TestCase_initialized_eqFunction_1785,
    MyNordic_initialized_TestCase_initialized_eqFunction_1786,
    MyNordic_initialized_TestCase_initialized_eqFunction_1787,
    MyNordic_initialized_TestCase_initialized_eqFunction_1788,
    MyNordic_initialized_TestCase_initialized_eqFunction_1789,
    MyNordic_initialized_TestCase_initialized_eqFunction_1790,
    MyNordic_initialized_TestCase_initialized_eqFunction_1791,
    MyNordic_initialized_TestCase_initialized_eqFunction_1792,
    MyNordic_initialized_TestCase_initialized_eqFunction_1793,
    MyNordic_initialized_TestCase_initialized_eqFunction_1794,
    MyNordic_initialized_TestCase_initialized_eqFunction_1795,
    MyNordic_initialized_TestCase_initialized_eqFunction_1796,
    MyNordic_initialized_TestCase_initialized_eqFunction_1797,
    MyNordic_initialized_TestCase_initialized_eqFunction_1798,
    MyNordic_initialized_TestCase_initialized_eqFunction_1799,
    MyNordic_initialized_TestCase_initialized_eqFunction_1800,
    MyNordic_initialized_TestCase_initialized_eqFunction_1801,
    MyNordic_initialized_TestCase_initialized_eqFunction_1802,
    MyNordic_initialized_TestCase_initialized_eqFunction_1803,
    MyNordic_initialized_TestCase_initialized_eqFunction_1804,
    MyNordic_initialized_TestCase_initialized_eqFunction_1805,
    MyNordic_initialized_TestCase_initialized_eqFunction_1806,
    MyNordic_initialized_TestCase_initialized_eqFunction_1807,
    MyNordic_initialized_TestCase_initialized_eqFunction_1808,
    MyNordic_initialized_TestCase_initialized_eqFunction_1809,
    MyNordic_initialized_TestCase_initialized_eqFunction_1810,
    MyNordic_initialized_TestCase_initialized_eqFunction_1811,
    MyNordic_initialized_TestCase_initialized_eqFunction_1812,
    MyNordic_initialized_TestCase_initialized_eqFunction_1813,
    MyNordic_initialized_TestCase_initialized_eqFunction_1814,
    MyNordic_initialized_TestCase_initialized_eqFunction_1815,
    MyNordic_initialized_TestCase_initialized_eqFunction_1816,
    MyNordic_initialized_TestCase_initialized_eqFunction_1817,
    MyNordic_initialized_TestCase_initialized_eqFunction_1818,
    MyNordic_initialized_TestCase_initialized_eqFunction_1819,
    MyNordic_initialized_TestCase_initialized_eqFunction_1820,
    MyNordic_initialized_TestCase_initialized_eqFunction_1821,
    MyNordic_initialized_TestCase_initialized_eqFunction_1822,
    MyNordic_initialized_TestCase_initialized_eqFunction_1823,
    MyNordic_initialized_TestCase_initialized_eqFunction_1824,
    MyNordic_initialized_TestCase_initialized_eqFunction_1825,
    MyNordic_initialized_TestCase_initialized_eqFunction_1826,
    MyNordic_initialized_TestCase_initialized_eqFunction_1827,
    MyNordic_initialized_TestCase_initialized_eqFunction_1828,
    MyNordic_initialized_TestCase_initialized_eqFunction_1829,
    MyNordic_initialized_TestCase_initialized_eqFunction_1830,
    MyNordic_initialized_TestCase_initialized_eqFunction_1831,
    MyNordic_initialized_TestCase_initialized_eqFunction_1832
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif