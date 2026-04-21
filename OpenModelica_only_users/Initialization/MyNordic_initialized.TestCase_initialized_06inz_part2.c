#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 917
type: SIMPLE_ASSIGN
$PRE.line_4031_4041b.running.value = $START.line_4031_4041b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */) = (data->modelData->booleanVarsData[703] /* line_4031_4041b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
line_4031_4041b.running.value = $PRE.line_4031_4041b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */);
  threadData->lastEquationSolved = 918;
}

/*
equation index: 919
type: SIMPLE_ASSIGN
$whenCondition376 = not line_4031_4041b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[307]] /* $whenCondition376 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */));
  threadData->lastEquationSolved = 919;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
$whenCondition375 = line_4031_4041b.running.value and not $PRE.line_4031_4041b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[306]] /* $whenCondition375 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[703]] /* line_4031_4041b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
$whenCondition374 = not $PRE.line_4031_4041b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[305]] /* $whenCondition374 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[703] /* line_4031_4041b.running.value DISCRETE */));
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
$PRE.line_4032_4042.running.value = $START.line_4032_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */) = (data->modelData->booleanVarsData[706] /* line_4032_4042.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
line_4032_4042.running.value = $PRE.line_4032_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
$whenCondition373 = not line_4032_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[304]] /* $whenCondition373 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
$whenCondition372 = line_4032_4042.running.value and not $PRE.line_4032_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[303]] /* $whenCondition372 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[706]] /* line_4032_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
$whenCondition371 = not $PRE.line_4032_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[302]] /* $whenCondition371 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[706] /* line_4032_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
$PRE.line_4032_4044.running.value = $START.line_4032_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */) = (data->modelData->booleanVarsData[709] /* line_4032_4044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
line_4032_4044.running.value = $PRE.line_4032_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */);
  threadData->lastEquationSolved = 928;
}

/*
equation index: 929
type: SIMPLE_ASSIGN
$whenCondition370 = not line_4032_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[301]] /* $whenCondition370 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 929;
}

/*
equation index: 930
type: SIMPLE_ASSIGN
$whenCondition369 = line_4032_4044.running.value and not $PRE.line_4032_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[299]] /* $whenCondition369 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
$PRE.line_4041_4044.running.value = $START.line_4041_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */) = (data->modelData->booleanVarsData[711] /* line_4041_4044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 931;
}

/*
equation index: 932
type: SIMPLE_ASSIGN
line_4041_4044.running.value = $PRE.line_4041_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */);
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
$whenCondition366 = not line_4041_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[296]] /* $whenCondition366 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
$whenCondition365 = line_4041_4044.running.value and not $PRE.line_4041_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[295]] /* $whenCondition365 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[711]] /* line_4041_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
$whenCondition364 = not $PRE.line_4041_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[294]] /* $whenCondition364 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[711] /* line_4041_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
$PRE.line_4041_4061.running.value = $START.line_4041_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */) = (data->modelData->booleanVarsData[714] /* line_4041_4061.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
line_4041_4061.running.value = $PRE.line_4041_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
$whenCondition363 = not line_4041_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[293]] /* $whenCondition363 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
$whenCondition362 = line_4041_4061.running.value and not $PRE.line_4041_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[292]] /* $whenCondition362 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[714]] /* line_4041_4061.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */)));
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
$whenCondition361 = not $PRE.line_4041_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[291]] /* $whenCondition361 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[714] /* line_4041_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
$PRE.line_4042_4043.running.value = $START.line_4042_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */) = (data->modelData->booleanVarsData[717] /* line_4042_4043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
line_4042_4043.running.value = $PRE.line_4042_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
$whenCondition360 = not line_4042_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[290]] /* $whenCondition360 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
$whenCondition359 = line_4042_4043.running.value and not $PRE.line_4042_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[288]] /* $whenCondition359 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[717]] /* line_4042_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
$whenCondition358 = not $PRE.line_4042_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[287]] /* $whenCondition358 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[717] /* line_4042_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
$PRE.line_4042_4044.running.value = $START.line_4042_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */) = (data->modelData->booleanVarsData[720] /* line_4042_4044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
line_4042_4044.running.value = $PRE.line_4042_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
$whenCondition357 = not line_4042_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[286]] /* $whenCondition357 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
$whenCondition356 = line_4042_4044.running.value and not $PRE.line_4042_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[285]] /* $whenCondition356 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[720]] /* line_4042_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
$whenCondition355 = not $PRE.line_4042_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[284]] /* $whenCondition355 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[720] /* line_4042_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
$PRE.line_4043_4044.running.value = $START.line_4043_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */) = (data->modelData->booleanVarsData[723] /* line_4043_4044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
line_4043_4044.running.value = $PRE.line_4043_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */);
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
$whenCondition354 = not line_4043_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[283]] /* $whenCondition354 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
$whenCondition353 = line_4043_4044.running.value and not $PRE.line_4043_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[282]] /* $whenCondition353 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[723]] /* line_4043_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
$whenCondition352 = not $PRE.line_4043_4044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[281]] /* $whenCondition352 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[723] /* line_4043_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
$PRE.line_4043_4046.running.value = $START.line_4043_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */) = (data->modelData->booleanVarsData[726] /* line_4043_4046.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
line_4043_4046.running.value = $PRE.line_4043_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
$whenCondition351 = not line_4043_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[280]] /* $whenCondition351 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
$whenCondition350 = line_4043_4046.running.value and not $PRE.line_4043_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[279]] /* $whenCondition350 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[726]] /* line_4043_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
$whenCondition349 = not $PRE.line_4043_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[277]] /* $whenCondition349 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[726] /* line_4043_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
$PRE.line_4043_4047.running.value = $START.line_4043_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */) = (data->modelData->booleanVarsData[729] /* line_4043_4047.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
line_4043_4047.running.value = $PRE.line_4043_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
$whenCondition348 = not line_4043_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[276]] /* $whenCondition348 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
$whenCondition347 = line_4043_4047.running.value and not $PRE.line_4043_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[275]] /* $whenCondition347 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[729]] /* line_4043_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
$whenCondition346 = not $PRE.line_4043_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[274]] /* $whenCondition346 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[729] /* line_4043_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
$PRE.line_4044_4045a.running.value = $START.line_4044_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */) = (data->modelData->booleanVarsData[732] /* line_4044_4045a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
line_4044_4045a.running.value = $PRE.line_4044_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */);
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
$whenCondition345 = not line_4044_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[273]] /* $whenCondition345 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
$whenCondition344 = line_4044_4045a.running.value and not $PRE.line_4044_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[272]] /* $whenCondition344 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[732]] /* line_4044_4045a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
$whenCondition343 = not $PRE.line_4044_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[271]] /* $whenCondition343 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[732] /* line_4044_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
$PRE.line_4044_4045b.running.value = $START.line_4044_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */) = (data->modelData->booleanVarsData[735] /* line_4044_4045b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
line_4044_4045b.running.value = $PRE.line_4044_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
$whenCondition342 = not line_4044_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[270]] /* $whenCondition342 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$whenCondition341 = line_4044_4045b.running.value and not $PRE.line_4044_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[269]] /* $whenCondition341 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[735]] /* line_4044_4045b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
$whenCondition340 = not $PRE.line_4044_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[268]] /* $whenCondition340 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[735] /* line_4044_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
$PRE.line_4045_4051a.running.value = $START.line_4045_4051a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */) = (data->modelData->booleanVarsData[738] /* line_4045_4051a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
line_4045_4051a.running.value = $PRE.line_4045_4051a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$whenCondition339 = not line_4045_4051a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[266]] /* $whenCondition339 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */));
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
$whenCondition338 = line_4045_4051a.running.value and not $PRE.line_4045_4051a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[265]] /* $whenCondition338 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[738]] /* line_4045_4051a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$whenCondition337 = not $PRE.line_4045_4051a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[264]] /* $whenCondition337 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[738] /* line_4045_4051a.running.value DISCRETE */));
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$PRE.line_4045_4051b.running.value = $START.line_4045_4051b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */) = (data->modelData->booleanVarsData[741] /* line_4045_4051b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
line_4045_4051b.running.value = $PRE.line_4045_4051b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */);
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
$whenCondition336 = not line_4045_4051b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[263]] /* $whenCondition336 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */));
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
$whenCondition335 = line_4045_4051b.running.value and not $PRE.line_4045_4051b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[262]] /* $whenCondition335 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[741]] /* line_4045_4051b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
$whenCondition334 = not $PRE.line_4045_4051b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[261]] /* $whenCondition334 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[741] /* line_4045_4051b.running.value DISCRETE */));
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$PRE.line_4045_4062.running.value = $START.line_4045_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */) = (data->modelData->booleanVarsData[744] /* line_4045_4062.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
line_4045_4062.running.value = $PRE.line_4045_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$whenCondition333 = not line_4045_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[260]] /* $whenCondition333 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
$whenCondition332 = line_4045_4062.running.value and not $PRE.line_4045_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[259]] /* $whenCondition332 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[744]] /* line_4045_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
$whenCondition331 = not $PRE.line_4045_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[258]] /* $whenCondition331 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[744] /* line_4045_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
$PRE.line_4046_4047.running.value = $START.line_4046_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */) = (data->modelData->booleanVarsData[747] /* line_4046_4047.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
line_4046_4047.running.value = $PRE.line_4046_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */);
  threadData->lastEquationSolved = 992;
}

/*
equation index: 993
type: SIMPLE_ASSIGN
$whenCondition330 = not line_4046_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[257]] /* $whenCondition330 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
$whenCondition329 = line_4046_4047.running.value and not $PRE.line_4046_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[255]] /* $whenCondition329 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[747]] /* line_4046_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: SIMPLE_ASSIGN
$whenCondition328 = not $PRE.line_4046_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[254]] /* $whenCondition328 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[747] /* line_4046_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
$PRE.line_4061_4062.running.value = $START.line_4061_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */) = (data->modelData->booleanVarsData[750] /* line_4061_4062.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
line_4061_4062.running.value = $PRE.line_4061_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$whenCondition327 = not line_4061_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[253]] /* $whenCondition327 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 998;
}

/*
equation index: 999
type: SIMPLE_ASSIGN
$whenCondition326 = line_4061_4062.running.value and not $PRE.line_4061_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[252]] /* $whenCondition326 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[750]] /* line_4061_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$whenCondition325 = not $PRE.line_4061_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[251]] /* $whenCondition325 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[750] /* line_4061_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 1000;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
$PRE.line_4062_4063a.running.value = $START.line_4062_4063a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */) = (data->modelData->booleanVarsData[753] /* line_4062_4063a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
line_4062_4063a.running.value = $PRE.line_4062_4063a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */);
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
$whenCondition324 = not line_4062_4063a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[250]] /* $whenCondition324 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1003;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
$whenCondition323 = line_4062_4063a.running.value and not $PRE.line_4062_4063a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[249]] /* $whenCondition323 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[753]] /* line_4062_4063a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
$whenCondition322 = not $PRE.line_4062_4063a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[248]] /* $whenCondition322 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[753] /* line_4062_4063a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1005;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$PRE.line_4062_4063b.running.value = $START.line_4062_4063b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */) = (data->modelData->booleanVarsData[756] /* line_4062_4063b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
line_4062_4063b.running.value = $PRE.line_4062_4063b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
$whenCondition321 = not line_4062_4063b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[247]] /* $whenCondition321 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1008;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$whenCondition320 = line_4062_4063b.running.value and not $PRE.line_4062_4063b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[246]] /* $whenCondition320 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[756]] /* line_4062_4063b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
$whenCondition319 = not $PRE.line_4062_4063b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[244]] /* $whenCondition319 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[756] /* line_4062_4063b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1010;
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
$PRE.line_4071_4072a.running.value = $START.line_4071_4072a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */) = (data->modelData->booleanVarsData[759] /* line_4071_4072a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
line_4071_4072a.running.value = $PRE.line_4071_4072a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */);
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
$whenCondition318 = not line_4071_4072a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[243]] /* $whenCondition318 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1013;
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
$whenCondition317 = line_4071_4072a.running.value and not $PRE.line_4071_4072a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[242]] /* $whenCondition317 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[759]] /* line_4071_4072a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$whenCondition316 = not $PRE.line_4071_4072a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[241]] /* $whenCondition316 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[759] /* line_4071_4072a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1015;
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$PRE.line_4071_4072b.running.value = $START.line_4071_4072b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */) = (data->modelData->booleanVarsData[762] /* line_4071_4072b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
line_4071_4072b.running.value = $PRE.line_4071_4072b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */);
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
$whenCondition315 = not line_4071_4072b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[240]] /* $whenCondition315 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1018;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
$whenCondition314 = line_4071_4072b.running.value and not $PRE.line_4071_4072b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[239]] /* $whenCondition314 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[762]] /* line_4071_4072b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$whenCondition313 = not $PRE.line_4071_4072b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[238]] /* $whenCondition313 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[762] /* line_4071_4072b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
$PRE.load_01.running.value = $START.load_01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  (data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */) = (data->modelData->booleanVarsData[765] /* load_01.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
load_01.running.value = $PRE.load_01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */);
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
$whenCondition312 = not load_01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[237]] /* $whenCondition312 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */));
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$whenCondition311 = load_01.running.value and not $PRE.load_01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[236]] /* $whenCondition311 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[765]] /* load_01.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
$whenCondition310 = not $PRE.load_01.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[235]] /* $whenCondition310 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[765] /* load_01.running.value DISCRETE */));
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
$PRE.load_02.running.value = $START.load_02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */) = (data->modelData->booleanVarsData[768] /* load_02.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
load_02.running.value = $PRE.load_02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */);
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
$whenCondition309 = not load_02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[233]] /* $whenCondition309 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */));
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
$whenCondition308 = load_02.running.value and not $PRE.load_02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[232]] /* $whenCondition308 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[768]] /* load_02.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
$whenCondition307 = not $PRE.load_02.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[231]] /* $whenCondition307 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[768] /* load_02.running.value DISCRETE */));
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
$PRE.load_03.running.value = $START.load_03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */) = (data->modelData->booleanVarsData[771] /* load_03.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
load_03.running.value = $PRE.load_03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */);
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
$whenCondition306 = not load_03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[230]] /* $whenCondition306 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */));
  threadData->lastEquationSolved = 1033;
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
$whenCondition305 = load_03.running.value and not $PRE.load_03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[229]] /* $whenCondition305 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[771]] /* load_03.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
$whenCondition304 = not $PRE.load_03.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[228]] /* $whenCondition304 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[771] /* load_03.running.value DISCRETE */));
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
$PRE.load_04.running.value = $START.load_04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */) = (data->modelData->booleanVarsData[774] /* load_04.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
load_04.running.value = $PRE.load_04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */);
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
$whenCondition303 = not load_04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[227]] /* $whenCondition303 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */));
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
$whenCondition302 = load_04.running.value and not $PRE.load_04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[226]] /* $whenCondition302 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[774]] /* load_04.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
$whenCondition301 = not $PRE.load_04.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[225]] /* $whenCondition301 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[774] /* load_04.running.value DISCRETE */));
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
$PRE.load_05.running.value = $START.load_05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  (data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */) = (data->modelData->booleanVarsData[777] /* load_05.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
load_05.running.value = $PRE.load_05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */);
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
$whenCondition300 = not load_05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[224]] /* $whenCondition300 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */));
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
$whenCondition299 = load_05.running.value and not $PRE.load_05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[221]] /* $whenCondition299 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[777]] /* load_05.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
$whenCondition298 = not $PRE.load_05.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[220]] /* $whenCondition298 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[777] /* load_05.running.value DISCRETE */));
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
$PRE.load_11.running.value = $START.load_11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  (data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */) = (data->modelData->booleanVarsData[780] /* load_11.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
load_11.running.value = $PRE.load_11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */);
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
$whenCondition297 = not load_11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[219]] /* $whenCondition297 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */));
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
$whenCondition296 = load_11.running.value and not $PRE.load_11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1049};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[218]] /* $whenCondition296 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[780]] /* load_11.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
$whenCondition295 = not $PRE.load_11.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[217]] /* $whenCondition295 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[780] /* load_11.running.value DISCRETE */));
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
$PRE.load_12.running.value = $START.load_12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  (data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */) = (data->modelData->booleanVarsData[783] /* load_12.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
load_12.running.value = $PRE.load_12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */);
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
$whenCondition294 = not load_12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[216]] /* $whenCondition294 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */));
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
$whenCondition293 = load_12.running.value and not $PRE.load_12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[215]] /* $whenCondition293 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[783]] /* load_12.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
$whenCondition292 = not $PRE.load_12.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[214]] /* $whenCondition292 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[783] /* load_12.running.value DISCRETE */));
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
$PRE.load_13.running.value = $START.load_13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  (data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */) = (data->modelData->booleanVarsData[786] /* load_13.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
load_13.running.value = $PRE.load_13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */);
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
$whenCondition291 = not load_13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[213]] /* $whenCondition291 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */));
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
$whenCondition290 = load_13.running.value and not $PRE.load_13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[212]] /* $whenCondition290 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[786]] /* load_13.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
$whenCondition289 = not $PRE.load_13.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[210]] /* $whenCondition289 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[786] /* load_13.running.value DISCRETE */));
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
$PRE.load_22.running.value = $START.load_22.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */) = (data->modelData->booleanVarsData[789] /* load_22.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
load_22.running.value = $PRE.load_22.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */);
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
$whenCondition288 = not load_22.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[209]] /* $whenCondition288 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */));
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
$whenCondition287 = load_22.running.value and not $PRE.load_22.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[208]] /* $whenCondition287 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1064;
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
$whenCondition286 = not $PRE.load_22.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[207]] /* $whenCondition286 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[789] /* load_22.running.value DISCRETE */));
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
$PRE.load_31.running.value = $START.load_31.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */) = (data->modelData->booleanVarsData[792] /* load_31.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
load_31.running.value = $PRE.load_31.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */);
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
$whenCondition285 = not load_31.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[206]] /* $whenCondition285 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */));
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
$whenCondition284 = load_31.running.value and not $PRE.load_31.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[205]] /* $whenCondition284 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
$whenCondition283 = not $PRE.load_31.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[204]] /* $whenCondition283 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[792] /* load_31.running.value DISCRETE */));
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
$PRE.load_32.running.value = $START.load_32.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  (data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */) = (data->modelData->booleanVarsData[795] /* load_32.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
load_32.running.value = $PRE.load_32.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */);
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
$whenCondition282 = not load_32.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[203]] /* $whenCondition282 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */));
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
$whenCondition281 = load_32.running.value and not $PRE.load_32.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[202]] /* $whenCondition281 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
$whenCondition280 = not $PRE.load_32.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[201]] /* $whenCondition280 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[795] /* load_32.running.value DISCRETE */));
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
$PRE.load_41.running.value = $START.load_41.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  (data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */) = (data->modelData->booleanVarsData[798] /* load_41.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
load_41.running.value = $PRE.load_41.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */);
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
$whenCondition279 = not load_41.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[199]] /* $whenCondition279 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */));
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
$whenCondition278 = load_41.running.value and not $PRE.load_41.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[198]] /* $whenCondition278 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[798]] /* load_41.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
$whenCondition277 = not $PRE.load_41.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[197]] /* $whenCondition277 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[798] /* load_41.running.value DISCRETE */));
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
$PRE.load_42.running.value = $START.load_42.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */) = (data->modelData->booleanVarsData[801] /* load_42.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
load_42.running.value = $PRE.load_42.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */);
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
$whenCondition276 = not load_42.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[196]] /* $whenCondition276 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */));
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$whenCondition275 = load_42.running.value and not $PRE.load_42.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[195]] /* $whenCondition275 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[801]] /* load_42.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
$whenCondition274 = not $PRE.load_42.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[194]] /* $whenCondition274 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[801] /* load_42.running.value DISCRETE */));
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
$PRE.load_43.running.value = $START.load_43.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */) = (data->modelData->booleanVarsData[804] /* load_43.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
load_43.running.value = $PRE.load_43.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
$whenCondition273 = not load_43.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[193]] /* $whenCondition273 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */));
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
$whenCondition272 = load_43.running.value and not $PRE.load_43.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[192]] /* $whenCondition272 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[804]] /* load_43.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
$whenCondition271 = not $PRE.load_43.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[191]] /* $whenCondition271 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[804] /* load_43.running.value DISCRETE */));
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
$PRE.load_46.running.value = $START.load_46.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */) = (data->modelData->booleanVarsData[807] /* load_46.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
load_46.running.value = $PRE.load_46.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
$whenCondition270 = not load_46.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[190]] /* $whenCondition270 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */));
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
$whenCondition269 = load_46.running.value and not $PRE.load_46.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[188]] /* $whenCondition269 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[807]] /* load_46.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
$whenCondition268 = not $PRE.load_46.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[187]] /* $whenCondition268 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[807] /* load_46.running.value DISCRETE */));
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
$PRE.load_47.running.value = $START.load_47.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */) = (data->modelData->booleanVarsData[810] /* load_47.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
load_47.running.value = $PRE.load_47.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */);
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
$whenCondition267 = not load_47.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[186]] /* $whenCondition267 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */));
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
$whenCondition266 = load_47.running.value and not $PRE.load_47.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[185]] /* $whenCondition266 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[810]] /* load_47.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
$whenCondition265 = not $PRE.load_47.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[184]] /* $whenCondition265 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[810] /* load_47.running.value DISCRETE */));
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
$PRE.load_51.running.value = $START.load_51.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */) = (data->modelData->booleanVarsData[813] /* load_51.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
load_51.running.value = $PRE.load_51.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
$whenCondition264 = not load_51.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[183]] /* $whenCondition264 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */));
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
$whenCondition263 = load_51.running.value and not $PRE.load_51.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[182]] /* $whenCondition263 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[813]] /* load_51.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
$whenCondition262 = not $PRE.load_51.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[181]] /* $whenCondition262 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[813] /* load_51.running.value DISCRETE */));
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
$PRE.load_61.running.value = $START.load_61.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */) = (data->modelData->booleanVarsData[816] /* load_61.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
load_61.running.value = $PRE.load_61.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */);
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
$whenCondition261 = not load_61.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[180]] /* $whenCondition261 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */));
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
$whenCondition260 = load_61.running.value and not $PRE.load_61.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[179]] /* $whenCondition260 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
$whenCondition259 = not $PRE.load_61.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[177]] /* $whenCondition259 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[816] /* load_61.running.value DISCRETE */));
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
$PRE.load_62.running.value = $START.load_62.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */) = (data->modelData->booleanVarsData[819] /* load_62.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
load_62.running.value = $PRE.load_62.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */);
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
$whenCondition258 = not load_62.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[176]] /* $whenCondition258 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */));
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
$whenCondition257 = load_62.running.value and not $PRE.load_62.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[175]] /* $whenCondition257 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[819]] /* load_62.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
$whenCondition256 = not $PRE.load_62.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[174]] /* $whenCondition256 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[819] /* load_62.running.value DISCRETE */));
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
$PRE.load_63.running.value = $START.load_63.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  (data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */) = (data->modelData->booleanVarsData[822] /* load_63.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
load_63.running.value = $PRE.load_63.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
$whenCondition255 = not load_63.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[173]] /* $whenCondition255 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */));
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
$whenCondition254 = load_63.running.value and not $PRE.load_63.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[172]] /* $whenCondition254 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[822]] /* load_63.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
$whenCondition253 = not $PRE.load_63.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[171]] /* $whenCondition253 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[822] /* load_63.running.value DISCRETE */));
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
$PRE.load_71.running.value = $START.load_71.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */) = (data->modelData->booleanVarsData[825] /* load_71.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
load_71.running.value = $PRE.load_71.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */);
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
$whenCondition252 = not load_71.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[170]] /* $whenCondition252 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */));
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
$whenCondition251 = load_71.running.value and not $PRE.load_71.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[169]] /* $whenCondition251 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[825]] /* load_71.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1124;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
$whenCondition250 = not $PRE.load_71.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[168]] /* $whenCondition250 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[825] /* load_71.running.value DISCRETE */));
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
$PRE.load_72.running.value = $START.load_72.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */) = (data->modelData->booleanVarsData[828] /* load_72.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
load_72.running.value = $PRE.load_72.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
$whenCondition249 = not load_72.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[166]] /* $whenCondition249 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */));
  threadData->lastEquationSolved = 1128;
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
$whenCondition248 = load_72.running.value and not $PRE.load_72.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[165]] /* $whenCondition248 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[828]] /* load_72.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
$whenCondition247 = not $PRE.load_72.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[164]] /* $whenCondition247 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[828] /* load_72.running.value DISCRETE */));
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
$PRE.shunt_1022.running.value = $START.shunt_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  (data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */) = (data->modelData->booleanVarsData[832] /* shunt_1022.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
shunt_1022.running.value = $PRE.shunt_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */);
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
$whenCondition246 = not shunt_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[163]] /* $whenCondition246 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
$whenCondition245 = shunt_1022.running.value and not $PRE.shunt_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[162]] /* $whenCondition245 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[832]] /* shunt_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
$whenCondition244 = not $PRE.shunt_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[161]] /* $whenCondition244 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[832] /* shunt_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
$PRE.shunt_1041.running.value = $START.shunt_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */) = (data->modelData->booleanVarsData[835] /* shunt_1041.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
shunt_1041.running.value = $PRE.shunt_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */);
  threadData->lastEquationSolved = 1137;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
$whenCondition243 = not shunt_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[160]] /* $whenCondition243 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
$whenCondition242 = shunt_1041.running.value and not $PRE.shunt_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[159]] /* $whenCondition242 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[835]] /* shunt_1041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1139;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
$whenCondition241 = not $PRE.shunt_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[158]] /* $whenCondition241 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[835] /* shunt_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
$PRE.shunt_1043.running.value = $START.shunt_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */) = (data->modelData->booleanVarsData[838] /* shunt_1043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
shunt_1043.running.value = $PRE.shunt_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */);
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
$whenCondition240 = not shunt_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[157]] /* $whenCondition240 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
$whenCondition239 = shunt_1043.running.value and not $PRE.shunt_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[155]] /* $whenCondition239 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[838]] /* shunt_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
$whenCondition238 = not $PRE.shunt_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[154]] /* $whenCondition238 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[838] /* shunt_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
$PRE.shunt_1044.running.value = $START.shunt_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */) = (data->modelData->booleanVarsData[841] /* shunt_1044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
shunt_1044.running.value = $PRE.shunt_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */);
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
$whenCondition237 = not shunt_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[153]] /* $whenCondition237 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
$whenCondition236 = shunt_1044.running.value and not $PRE.shunt_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[152]] /* $whenCondition236 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[841]] /* shunt_1044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
$whenCondition235 = not $PRE.shunt_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[151]] /* $whenCondition235 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[841] /* shunt_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
$PRE.shunt_1045.running.value = $START.shunt_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */) = (data->modelData->booleanVarsData[844] /* shunt_1045.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
shunt_1045.running.value = $PRE.shunt_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */);
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
$whenCondition234 = not shunt_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[150]] /* $whenCondition234 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
$whenCondition233 = shunt_1045.running.value and not $PRE.shunt_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[149]] /* $whenCondition233 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[844]] /* shunt_1045.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1154;
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
$whenCondition232 = not $PRE.shunt_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[148]] /* $whenCondition232 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[844] /* shunt_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 1155;
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
$PRE.shunt_4012.running.value = $START.shunt_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1156};
  (data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */) = (data->modelData->booleanVarsData[847] /* shunt_4012.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1156;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
shunt_4012.running.value = $PRE.shunt_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
$whenCondition231 = not shunt_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[147]] /* $whenCondition231 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
$whenCondition230 = shunt_4012.running.value and not $PRE.shunt_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[146]] /* $whenCondition230 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[847]] /* shunt_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
$whenCondition229 = not $PRE.shunt_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[144]] /* $whenCondition229 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[847] /* shunt_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1160;
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
$PRE.shunt_4041.running.value = $START.shunt_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */) = (data->modelData->booleanVarsData[850] /* shunt_4041.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1161;
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
shunt_4041.running.value = $PRE.shunt_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */);
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
$whenCondition228 = not shunt_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[143]] /* $whenCondition228 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
$whenCondition227 = shunt_4041.running.value and not $PRE.shunt_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[142]] /* $whenCondition227 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[850]] /* shunt_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
$whenCondition226 = not $PRE.shunt_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[141]] /* $whenCondition226 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[850] /* shunt_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1165;
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
$PRE.shunt_4043.running.value = $START.shunt_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */) = (data->modelData->booleanVarsData[853] /* shunt_4043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
shunt_4043.running.value = $PRE.shunt_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
$whenCondition225 = not shunt_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[140]] /* $whenCondition225 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
$whenCondition224 = shunt_4043.running.value and not $PRE.shunt_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[139]] /* $whenCondition224 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[853]] /* shunt_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1169;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
$whenCondition223 = not $PRE.shunt_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[138]] /* $whenCondition223 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[853] /* shunt_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
$PRE.shunt_4046.running.value = $START.shunt_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */) = (data->modelData->booleanVarsData[856] /* shunt_4046.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
shunt_4046.running.value = $PRE.shunt_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */);
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
$whenCondition222 = not shunt_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[137]] /* $whenCondition222 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
$whenCondition221 = shunt_4046.running.value and not $PRE.shunt_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[136]] /* $whenCondition221 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[856]] /* shunt_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
$whenCondition220 = not $PRE.shunt_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[135]] /* $whenCondition220 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[856] /* shunt_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
$PRE.shunt_4051.running.value = $START.shunt_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */) = (data->modelData->booleanVarsData[859] /* shunt_4051.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
shunt_4051.running.value = $PRE.shunt_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
$whenCondition219 = not shunt_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[133]] /* $whenCondition219 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
$whenCondition218 = shunt_4051.running.value and not $PRE.shunt_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[132]] /* $whenCondition218 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[859]] /* shunt_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
$whenCondition217 = not $PRE.shunt_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[131]] /* $whenCondition217 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[859] /* shunt_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
$PRE.shunt_4071.running.value = $START.shunt_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */) = (data->modelData->booleanVarsData[862] /* shunt_4071.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
shunt_4071.running.value = $PRE.shunt_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */);
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
$whenCondition216 = not shunt_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[130]] /* $whenCondition216 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
$whenCondition215 = shunt_4071.running.value and not $PRE.shunt_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[129]] /* $whenCondition215 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[862]] /* shunt_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
$whenCondition214 = not $PRE.shunt_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[128]] /* $whenCondition214 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[862] /* shunt_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
$PRE.trafo_1_1041.running.value = $START.trafo_1_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  (data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */) = (data->modelData->booleanVarsData[895] /* trafo_1_1041.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
trafo_1_1041.running.value = $PRE.trafo_1_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */);
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
$whenCondition213 = not trafo_1_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[127]] /* $whenCondition213 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
$whenCondition212 = trafo_1_1041.running.value and not $PRE.trafo_1_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[126]] /* $whenCondition212 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[895]] /* trafo_1_1041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
$whenCondition211 = not $PRE.trafo_1_1041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[125]] /* $whenCondition211 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[895] /* trafo_1_1041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
$PRE.trafo_2_1042.running.value = $START.trafo_2_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */) = (data->modelData->booleanVarsData[904] /* trafo_2_1042.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
trafo_2_1042.running.value = $PRE.trafo_2_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */);
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
$whenCondition210 = not trafo_2_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[124]] /* $whenCondition210 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
$whenCondition209 = trafo_2_1042.running.value and not $PRE.trafo_2_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[122]] /* $whenCondition209 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[904]] /* trafo_2_1042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
$whenCondition208 = not $PRE.trafo_2_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[121]] /* $whenCondition208 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[904] /* trafo_2_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
$PRE.trafo_3_1043.running.value = $START.trafo_3_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */) = (data->modelData->booleanVarsData[913] /* trafo_3_1043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
trafo_3_1043.running.value = $PRE.trafo_3_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */);
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
$whenCondition207 = not trafo_3_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[120]] /* $whenCondition207 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
$whenCondition206 = trafo_3_1043.running.value and not $PRE.trafo_3_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[119]] /* $whenCondition206 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[913]] /* trafo_3_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
$whenCondition205 = not $PRE.trafo_3_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[118]] /* $whenCondition205 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[913] /* trafo_3_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
$PRE.trafo_4_1044.running.value = $START.trafo_4_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */) = (data->modelData->booleanVarsData[931] /* trafo_4_1044.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
trafo_4_1044.running.value = $PRE.trafo_4_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */);
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
$whenCondition204 = not trafo_4_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[117]] /* $whenCondition204 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
$whenCondition203 = trafo_4_1044.running.value and not $PRE.trafo_4_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[116]] /* $whenCondition203 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[931]] /* trafo_4_1044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
$whenCondition202 = not $PRE.trafo_4_1044.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[115]] /* $whenCondition202 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[931] /* trafo_4_1044.running.value DISCRETE */));
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
$PRE.trafo_5_1045.running.value = $START.trafo_5_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */) = (data->modelData->booleanVarsData[937] /* trafo_5_1045.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
trafo_5_1045.running.value = $PRE.trafo_5_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */);
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
$whenCondition201 = not trafo_5_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[114]] /* $whenCondition201 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
$whenCondition200 = trafo_5_1045.running.value and not $PRE.trafo_5_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[113]] /* $whenCondition200 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
$whenCondition199 = not $PRE.trafo_5_1045.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[110]] /* $whenCondition199 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[937] /* trafo_5_1045.running.value DISCRETE */));
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
$PRE.trafo_11_1011.running.value = $START.trafo_11_1011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */) = (data->modelData->booleanVarsData[886] /* trafo_11_1011.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
trafo_11_1011.running.value = $PRE.trafo_11_1011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */);
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
$whenCondition198 = not trafo_11_1011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[109]] /* $whenCondition198 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
$whenCondition197 = trafo_11_1011.running.value and not $PRE.trafo_11_1011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[108]] /* $whenCondition197 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[886]] /* trafo_11_1011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
$whenCondition196 = not $PRE.trafo_11_1011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[107]] /* $whenCondition196 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[886] /* trafo_11_1011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
$PRE.trafo_12_1012.running.value = $START.trafo_12_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */) = (data->modelData->booleanVarsData[889] /* trafo_12_1012.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
trafo_12_1012.running.value = $PRE.trafo_12_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */);
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
$whenCondition195 = not trafo_12_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[106]] /* $whenCondition195 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
$whenCondition194 = trafo_12_1012.running.value and not $PRE.trafo_12_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[105]] /* $whenCondition194 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[889]] /* trafo_12_1012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
$whenCondition193 = not $PRE.trafo_12_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[104]] /* $whenCondition193 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[889] /* trafo_12_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
$PRE.trafo_13_1013.running.value = $START.trafo_13_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */) = (data->modelData->booleanVarsData[892] /* trafo_13_1013.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
trafo_13_1013.running.value = $PRE.trafo_13_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */);
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
$whenCondition192 = not trafo_13_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[103]] /* $whenCondition192 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
$whenCondition191 = trafo_13_1013.running.value and not $PRE.trafo_13_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[102]] /* $whenCondition191 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[892]] /* trafo_13_1013.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
$whenCondition190 = not $PRE.trafo_13_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[101]] /* $whenCondition190 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[892] /* trafo_13_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
$PRE.trafo_22_1022.running.value = $START.trafo_22_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */) = (data->modelData->booleanVarsData[901] /* trafo_22_1022.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
trafo_22_1022.running.value = $PRE.trafo_22_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
$whenCondition189 = not trafo_22_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[99]] /* $whenCondition189 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
$whenCondition188 = trafo_22_1022.running.value and not $PRE.trafo_22_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[98]] /* $whenCondition188 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
$whenCondition187 = not $PRE.trafo_22_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[97]] /* $whenCondition187 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[901] /* trafo_22_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
$PRE.trafo_31_2031.running.value = $START.trafo_31_2031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */) = (data->modelData->booleanVarsData[907] /* trafo_31_2031.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
trafo_31_2031.running.value = $PRE.trafo_31_2031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */);
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
$whenCondition186 = not trafo_31_2031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[96]] /* $whenCondition186 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
$whenCondition185 = trafo_31_2031.running.value and not $PRE.trafo_31_2031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[95]] /* $whenCondition185 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
$whenCondition184 = not $PRE.trafo_31_2031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[94]] /* $whenCondition184 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[907] /* trafo_31_2031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
$PRE.trafo_32_2032.running.value = $START.trafo_32_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */) = (data->modelData->booleanVarsData[910] /* trafo_32_2032.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
trafo_32_2032.running.value = $PRE.trafo_32_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$whenCondition183 = not trafo_32_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[93]] /* $whenCondition183 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
$whenCondition182 = trafo_32_2032.running.value and not $PRE.trafo_32_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[92]] /* $whenCondition182 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
$whenCondition181 = not $PRE.trafo_32_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[91]] /* $whenCondition181 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[910] /* trafo_32_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
$PRE.trafo_41_4041.running.value = $START.trafo_41_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */) = (data->modelData->booleanVarsData[916] /* trafo_41_4041.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
trafo_41_4041.running.value = $PRE.trafo_41_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */);
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
$whenCondition180 = not trafo_41_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[90]] /* $whenCondition180 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
$whenCondition179 = trafo_41_4041.running.value and not $PRE.trafo_41_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[88]] /* $whenCondition179 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
$whenCondition178 = not $PRE.trafo_41_4041.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[87]] /* $whenCondition178 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[916] /* trafo_41_4041.running.value DISCRETE */));
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
$PRE.trafo_42_4042.running.value = $START.trafo_42_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */) = (data->modelData->booleanVarsData[919] /* trafo_42_4042.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
trafo_42_4042.running.value = $PRE.trafo_42_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */);
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
$whenCondition177 = not trafo_42_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[86]] /* $whenCondition177 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
$whenCondition176 = trafo_42_4042.running.value and not $PRE.trafo_42_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[85]] /* $whenCondition176 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
$whenCondition175 = not $PRE.trafo_42_4042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[84]] /* $whenCondition175 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[919] /* trafo_42_4042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
$PRE.trafo_43_4043.running.value = $START.trafo_43_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */) = (data->modelData->booleanVarsData[922] /* trafo_43_4043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
trafo_43_4043.running.value = $PRE.trafo_43_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */);
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
$whenCondition174 = not trafo_43_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[83]] /* $whenCondition174 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
$whenCondition173 = trafo_43_4043.running.value and not $PRE.trafo_43_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[82]] /* $whenCondition173 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[922]] /* trafo_43_4043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
$whenCondition172 = not $PRE.trafo_43_4043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[81]] /* $whenCondition172 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[922] /* trafo_43_4043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
$PRE.trafo_46_4046.running.value = $START.trafo_46_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */) = (data->modelData->booleanVarsData[925] /* trafo_46_4046.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
trafo_46_4046.running.value = $PRE.trafo_46_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */);
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
$whenCondition171 = not trafo_46_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[80]] /* $whenCondition171 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
$whenCondition170 = trafo_46_4046.running.value and not $PRE.trafo_46_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[79]] /* $whenCondition170 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[925]] /* trafo_46_4046.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
$whenCondition169 = not $PRE.trafo_46_4046.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[77]] /* $whenCondition169 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[925] /* trafo_46_4046.running.value DISCRETE */));
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
$PRE.trafo_47_4047.running.value = $START.trafo_47_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */) = (data->modelData->booleanVarsData[928] /* trafo_47_4047.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
trafo_47_4047.running.value = $PRE.trafo_47_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */);
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
$whenCondition168 = not trafo_47_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[76]] /* $whenCondition168 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
$whenCondition167 = trafo_47_4047.running.value and not $PRE.trafo_47_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[75]] /* $whenCondition167 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[928]] /* trafo_47_4047.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
$whenCondition166 = not $PRE.trafo_47_4047.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[74]] /* $whenCondition166 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[928] /* trafo_47_4047.running.value DISCRETE */));
  threadData->lastEquationSolved = 1265;
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
$PRE.trafo_51_4051.running.value = $START.trafo_51_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1266};
  (data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */) = (data->modelData->booleanVarsData[934] /* trafo_51_4051.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1266;
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
trafo_51_4051.running.value = $PRE.trafo_51_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */);
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
$whenCondition165 = not trafo_51_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[73]] /* $whenCondition165 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
$whenCondition164 = trafo_51_4051.running.value and not $PRE.trafo_51_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[72]] /* $whenCondition164 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[934]] /* trafo_51_4051.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
$whenCondition163 = not $PRE.trafo_51_4051.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[71]] /* $whenCondition163 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[934] /* trafo_51_4051.running.value DISCRETE */));
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
$PRE.trafo_61_4061.running.value = $START.trafo_61_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */) = (data->modelData->booleanVarsData[940] /* trafo_61_4061.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
trafo_61_4061.running.value = $PRE.trafo_61_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */);
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
$whenCondition162 = not trafo_61_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[70]] /* $whenCondition162 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
$whenCondition161 = trafo_61_4061.running.value and not $PRE.trafo_61_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[69]] /* $whenCondition161 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
$whenCondition160 = not $PRE.trafo_61_4061.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[68]] /* $whenCondition160 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[940] /* trafo_61_4061.running.value DISCRETE */));
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
$PRE.trafo_62_4062.running.value = $START.trafo_62_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */) = (data->modelData->booleanVarsData[943] /* trafo_62_4062.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
trafo_62_4062.running.value = $PRE.trafo_62_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */);
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
$whenCondition159 = not trafo_62_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[66]] /* $whenCondition159 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
$whenCondition158 = trafo_62_4062.running.value and not $PRE.trafo_62_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[65]] /* $whenCondition158 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[943]] /* trafo_62_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
$whenCondition157 = not $PRE.trafo_62_4062.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[64]] /* $whenCondition157 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[943] /* trafo_62_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
$PRE.trafo_63_4063.running.value = $START.trafo_63_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */) = (data->modelData->booleanVarsData[946] /* trafo_63_4063.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
trafo_63_4063.running.value = $PRE.trafo_63_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */);
  threadData->lastEquationSolved = 1282;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
$whenCondition156 = not trafo_63_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[63]] /* $whenCondition156 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
$whenCondition155 = trafo_63_4063.running.value and not $PRE.trafo_63_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[62]] /* $whenCondition155 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[946]] /* trafo_63_4063.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1284;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
$whenCondition154 = not $PRE.trafo_63_4063.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[61]] /* $whenCondition154 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[946] /* trafo_63_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
$PRE.trafo_71_4071.running.value = $START.trafo_71_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */) = (data->modelData->booleanVarsData[949] /* trafo_71_4071.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
trafo_71_4071.running.value = $PRE.trafo_71_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */);
  threadData->lastEquationSolved = 1287;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
$whenCondition153 = not trafo_71_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[60]] /* $whenCondition153 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
$whenCondition152 = trafo_71_4071.running.value and not $PRE.trafo_71_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[59]] /* $whenCondition152 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[949]] /* trafo_71_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1289;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
$whenCondition151 = not $PRE.trafo_71_4071.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[58]] /* $whenCondition151 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[949] /* trafo_71_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
$PRE.trafo_72_4072.running.value = $START.trafo_72_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */) = (data->modelData->booleanVarsData[952] /* trafo_72_4072.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
trafo_72_4072.running.value = $PRE.trafo_72_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */);
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
$whenCondition150 = not trafo_72_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[57]] /* $whenCondition150 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
$whenCondition149 = trafo_72_4072.running.value and not $PRE.trafo_72_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1294};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[55]] /* $whenCondition149 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[952]] /* trafo_72_4072.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1294;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
$whenCondition148 = not $PRE.trafo_72_4072.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[54]] /* $whenCondition148 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[952] /* trafo_72_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
$PRE.trafo_1011_4011.running.value = $START.trafo_1011_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */) = (data->modelData->booleanVarsData[865] /* trafo_1011_4011.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
trafo_1011_4011.running.value = $PRE.trafo_1011_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */);
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$whenCondition147 = not trafo_1011_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[53]] /* $whenCondition147 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
$whenCondition146 = trafo_1011_4011.running.value and not $PRE.trafo_1011_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[52]] /* $whenCondition146 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[865]] /* trafo_1011_4011.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1299;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
$whenCondition145 = not $PRE.trafo_1011_4011.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[51]] /* $whenCondition145 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[865] /* trafo_1011_4011.running.value DISCRETE */));
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
$PRE.trafo_1012_4012.running.value = $START.trafo_1012_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */) = (data->modelData->booleanVarsData[868] /* trafo_1012_4012.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
trafo_1012_4012.running.value = $PRE.trafo_1012_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */);
  threadData->lastEquationSolved = 1302;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
$whenCondition144 = not trafo_1012_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[50]] /* $whenCondition144 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
$whenCondition143 = trafo_1012_4012.running.value and not $PRE.trafo_1012_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[49]] /* $whenCondition143 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1304;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
$whenCondition142 = not $PRE.trafo_1012_4012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[48]] /* $whenCondition142 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[868] /* trafo_1012_4012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
$PRE.trafo_1022_4022.running.value = $START.trafo_1022_4022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */) = (data->modelData->booleanVarsData[871] /* trafo_1022_4022.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
trafo_1022_4022.running.value = $PRE.trafo_1022_4022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */);
  threadData->lastEquationSolved = 1307;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
$whenCondition141 = not trafo_1022_4022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[47]] /* $whenCondition141 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
$whenCondition140 = trafo_1022_4022.running.value and not $PRE.trafo_1022_4022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[46]] /* $whenCondition140 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
$whenCondition139 = not $PRE.trafo_1022_4022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[44]] /* $whenCondition139 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[871] /* trafo_1022_4022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
$PRE.trafo_1044_4044a.running.value = $START.trafo_1044_4044a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */) = (data->modelData->booleanVarsData[874] /* trafo_1044_4044a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
trafo_1044_4044a.running.value = $PRE.trafo_1044_4044a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */);
  threadData->lastEquationSolved = 1312;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
$whenCondition138 = not trafo_1044_4044a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[43]] /* $whenCondition138 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
$whenCondition137 = trafo_1044_4044a.running.value and not $PRE.trafo_1044_4044a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[42]] /* $whenCondition137 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[874]] /* trafo_1044_4044a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
$whenCondition136 = not $PRE.trafo_1044_4044a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[41]] /* $whenCondition136 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[874] /* trafo_1044_4044a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
$PRE.trafo_1044_4044b.running.value = $START.trafo_1044_4044b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1316};
  (data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */) = (data->modelData->booleanVarsData[877] /* trafo_1044_4044b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
trafo_1044_4044b.running.value = $PRE.trafo_1044_4044b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */);
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
$whenCondition135 = not trafo_1044_4044b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[40]] /* $whenCondition135 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
$whenCondition134 = trafo_1044_4044b.running.value and not $PRE.trafo_1044_4044b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[39]] /* $whenCondition134 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[877]] /* trafo_1044_4044b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
$whenCondition133 = not $PRE.trafo_1044_4044b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[38]] /* $whenCondition133 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[877] /* trafo_1044_4044b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1320;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
$PRE.trafo_1045_4045a.running.value = $START.trafo_1045_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  (data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */) = (data->modelData->booleanVarsData[880] /* trafo_1045_4045a.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
trafo_1045_4045a.running.value = $PRE.trafo_1045_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */);
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
$whenCondition132 = not trafo_1045_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[37]] /* $whenCondition132 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
$whenCondition131 = trafo_1045_4045a.running.value and not $PRE.trafo_1045_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[36]] /* $whenCondition131 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[880]] /* trafo_1045_4045a.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
$whenCondition130 = not $PRE.trafo_1045_4045a.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[35]] /* $whenCondition130 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[880] /* trafo_1045_4045a.running.value DISCRETE */));
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
$PRE.trafo_1045_4045b.running.value = $START.trafo_1045_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */) = (data->modelData->booleanVarsData[883] /* trafo_1045_4045b.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
trafo_1045_4045b.running.value = $PRE.trafo_1045_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */);
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
$whenCondition129 = not trafo_1045_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[33]] /* $whenCondition129 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
$whenCondition128 = trafo_1045_4045b.running.value and not $PRE.trafo_1045_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[32]] /* $whenCondition128 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[883]] /* trafo_1045_4045b.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
$whenCondition127 = not $PRE.trafo_1045_4045b.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[31]] /* $whenCondition127 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[883] /* trafo_1045_4045b.running.value DISCRETE */));
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
$PRE.trafo_2031_4031.running.value = $START.trafo_2031_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */) = (data->modelData->booleanVarsData[898] /* trafo_2031_4031.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
trafo_2031_4031.running.value = $PRE.trafo_2031_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */);
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
$whenCondition126 = not trafo_2031_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[30]] /* $whenCondition126 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$whenCondition125 = trafo_2031_4031.running.value and not $PRE.trafo_2031_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[29]] /* $whenCondition125 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
$whenCondition124 = not $PRE.trafo_2031_4031.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[28]] /* $whenCondition124 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[898] /* trafo_2031_4031.running.value DISCRETE */));
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
$PRE.trafo_g1_1012.running.value = $START.trafo_g1_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */) = (data->modelData->booleanVarsData[985] /* trafo_g1_1012.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
trafo_g1_1012.running.value = $PRE.trafo_g1_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */);
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
$whenCondition123 = not trafo_g1_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1338};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[27]] /* $whenCondition123 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
$whenCondition122 = trafo_g1_1012.running.value and not $PRE.trafo_g1_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[26]] /* $whenCondition122 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[985]] /* trafo_g1_1012.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
$whenCondition121 = not $PRE.trafo_g1_1012.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[25]] /* $whenCondition121 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[985] /* trafo_g1_1012.running.value DISCRETE */));
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
$PRE.trafo_g2_1013.running.value = $START.trafo_g2_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */) = (data->modelData->booleanVarsData[991] /* trafo_g2_1013.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
trafo_g2_1013.running.value = $PRE.trafo_g2_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */);
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
$whenCondition120 = not trafo_g2_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[24]] /* $whenCondition120 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
$whenCondition119 = trafo_g2_1013.running.value and not $PRE.trafo_g2_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[22]] /* $whenCondition119 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[991]] /* trafo_g2_1013.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
$whenCondition118 = not $PRE.trafo_g2_1013.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[21]] /* $whenCondition118 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[991] /* trafo_g2_1013.running.value DISCRETE */));
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
$PRE.trafo_g3_1014.running.value = $START.trafo_g3_1014.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */) = (data->modelData->booleanVarsData[994] /* trafo_g3_1014.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
trafo_g3_1014.running.value = $PRE.trafo_g3_1014.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */);
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
$whenCondition117 = not trafo_g3_1014.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[20]] /* $whenCondition117 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */));
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
$whenCondition116 = trafo_g3_1014.running.value and not $PRE.trafo_g3_1014.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[19]] /* $whenCondition116 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[994]] /* trafo_g3_1014.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
$whenCondition115 = not $PRE.trafo_g3_1014.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* $whenCondition115 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[994] /* trafo_g3_1014.running.value DISCRETE */));
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
$PRE.trafo_g4_1021.running.value = $START.trafo_g4_1021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  (data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */) = (data->modelData->booleanVarsData[997] /* trafo_g4_1021.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
trafo_g4_1021.running.value = $PRE.trafo_g4_1021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */);
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
$whenCondition114 = not trafo_g4_1021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[17]] /* $whenCondition114 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */));
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
$whenCondition113 = trafo_g4_1021.running.value and not $PRE.trafo_g4_1021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1354};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* $whenCondition113 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1354;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
$whenCondition112 = not $PRE.trafo_g4_1021.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* $whenCondition112 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[997] /* trafo_g4_1021.running.value DISCRETE */));
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
$PRE.trafo_g5_1022.running.value = $START.trafo_g5_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  (data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */) = (data->modelData->booleanVarsData[1000] /* trafo_g5_1022.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
trafo_g5_1022.running.value = $PRE.trafo_g5_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */);
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$whenCondition111 = not trafo_g5_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* $whenCondition111 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
$whenCondition110 = trafo_g5_1022.running.value and not $PRE.trafo_g5_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[13]] /* $whenCondition110 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$whenCondition109 = not $PRE.trafo_g5_1022.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* $whenCondition109 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1000] /* trafo_g5_1022.running.value DISCRETE */));
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
$PRE.trafo_g6_1042.running.value = $START.trafo_g6_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */) = (data->modelData->booleanVarsData[1003] /* trafo_g6_1042.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
trafo_g6_1042.running.value = $PRE.trafo_g6_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */);
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
$whenCondition108 = not trafo_g6_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* $whenCondition108 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
$whenCondition107 = trafo_g6_1042.running.value and not $PRE.trafo_g6_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* $whenCondition107 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
$whenCondition106 = not $PRE.trafo_g6_1042.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition106 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1003] /* trafo_g6_1042.running.value DISCRETE */));
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
$PRE.trafo_g7_1043.running.value = $START.trafo_g7_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */) = (data->modelData->booleanVarsData[1006] /* trafo_g7_1043.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
trafo_g7_1043.running.value = $PRE.trafo_g7_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
$whenCondition105 = not trafo_g7_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1368};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition105 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1368;
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
$whenCondition104 = trafo_g7_1043.running.value and not $PRE.trafo_g7_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition104 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1006]] /* trafo_g7_1043.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1369;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
$whenCondition103 = not $PRE.trafo_g7_1043.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition103 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[1006] /* trafo_g7_1043.running.value DISCRETE */));
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
$PRE.trafo_g8_2032.running.value = $START.trafo_g8_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */) = (data->modelData->booleanVarsData[1009] /* trafo_g8_2032.running.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
trafo_g8_2032.running.value = $PRE.trafo_g8_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */);
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
$whenCondition102 = not trafo_g8_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition102 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */));
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
$whenCondition101 = trafo_g8_2032.running.value and not $PRE.trafo_g8_2032.running.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition101 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[1009] /* trafo_g8_2032.running.value DISCRETE */)));
  threadData->lastEquationSolved = 1374;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_917,
    MyNordic_initialized_TestCase_initialized_eqFunction_918,
    MyNordic_initialized_TestCase_initialized_eqFunction_919,
    MyNordic_initialized_TestCase_initialized_eqFunction_920,
    MyNordic_initialized_TestCase_initialized_eqFunction_921,
    MyNordic_initialized_TestCase_initialized_eqFunction_922,
    MyNordic_initialized_TestCase_initialized_eqFunction_923,
    MyNordic_initialized_TestCase_initialized_eqFunction_924,
    MyNordic_initialized_TestCase_initialized_eqFunction_925,
    MyNordic_initialized_TestCase_initialized_eqFunction_926,
    MyNordic_initialized_TestCase_initialized_eqFunction_927,
    MyNordic_initialized_TestCase_initialized_eqFunction_928,
    MyNordic_initialized_TestCase_initialized_eqFunction_929,
    MyNordic_initialized_TestCase_initialized_eqFunction_930,
    MyNordic_initialized_TestCase_initialized_eqFunction_931,
    MyNordic_initialized_TestCase_initialized_eqFunction_932,
    MyNordic_initialized_TestCase_initialized_eqFunction_933,
    MyNordic_initialized_TestCase_initialized_eqFunction_934,
    MyNordic_initialized_TestCase_initialized_eqFunction_935,
    MyNordic_initialized_TestCase_initialized_eqFunction_936,
    MyNordic_initialized_TestCase_initialized_eqFunction_937,
    MyNordic_initialized_TestCase_initialized_eqFunction_938,
    MyNordic_initialized_TestCase_initialized_eqFunction_939,
    MyNordic_initialized_TestCase_initialized_eqFunction_940,
    MyNordic_initialized_TestCase_initialized_eqFunction_941,
    MyNordic_initialized_TestCase_initialized_eqFunction_942,
    MyNordic_initialized_TestCase_initialized_eqFunction_943,
    MyNordic_initialized_TestCase_initialized_eqFunction_944,
    MyNordic_initialized_TestCase_initialized_eqFunction_945,
    MyNordic_initialized_TestCase_initialized_eqFunction_946,
    MyNordic_initialized_TestCase_initialized_eqFunction_947,
    MyNordic_initialized_TestCase_initialized_eqFunction_948,
    MyNordic_initialized_TestCase_initialized_eqFunction_949,
    MyNordic_initialized_TestCase_initialized_eqFunction_950,
    MyNordic_initialized_TestCase_initialized_eqFunction_951,
    MyNordic_initialized_TestCase_initialized_eqFunction_952,
    MyNordic_initialized_TestCase_initialized_eqFunction_953,
    MyNordic_initialized_TestCase_initialized_eqFunction_954,
    MyNordic_initialized_TestCase_initialized_eqFunction_955,
    MyNordic_initialized_TestCase_initialized_eqFunction_956,
    MyNordic_initialized_TestCase_initialized_eqFunction_957,
    MyNordic_initialized_TestCase_initialized_eqFunction_958,
    MyNordic_initialized_TestCase_initialized_eqFunction_959,
    MyNordic_initialized_TestCase_initialized_eqFunction_960,
    MyNordic_initialized_TestCase_initialized_eqFunction_961,
    MyNordic_initialized_TestCase_initialized_eqFunction_962,
    MyNordic_initialized_TestCase_initialized_eqFunction_963,
    MyNordic_initialized_TestCase_initialized_eqFunction_964,
    MyNordic_initialized_TestCase_initialized_eqFunction_965,
    MyNordic_initialized_TestCase_initialized_eqFunction_966,
    MyNordic_initialized_TestCase_initialized_eqFunction_967,
    MyNordic_initialized_TestCase_initialized_eqFunction_968,
    MyNordic_initialized_TestCase_initialized_eqFunction_969,
    MyNordic_initialized_TestCase_initialized_eqFunction_970,
    MyNordic_initialized_TestCase_initialized_eqFunction_971,
    MyNordic_initialized_TestCase_initialized_eqFunction_972,
    MyNordic_initialized_TestCase_initialized_eqFunction_973,
    MyNordic_initialized_TestCase_initialized_eqFunction_974,
    MyNordic_initialized_TestCase_initialized_eqFunction_975,
    MyNordic_initialized_TestCase_initialized_eqFunction_976,
    MyNordic_initialized_TestCase_initialized_eqFunction_977,
    MyNordic_initialized_TestCase_initialized_eqFunction_978,
    MyNordic_initialized_TestCase_initialized_eqFunction_979,
    MyNordic_initialized_TestCase_initialized_eqFunction_980,
    MyNordic_initialized_TestCase_initialized_eqFunction_981,
    MyNordic_initialized_TestCase_initialized_eqFunction_982,
    MyNordic_initialized_TestCase_initialized_eqFunction_983,
    MyNordic_initialized_TestCase_initialized_eqFunction_984,
    MyNordic_initialized_TestCase_initialized_eqFunction_985,
    MyNordic_initialized_TestCase_initialized_eqFunction_986,
    MyNordic_initialized_TestCase_initialized_eqFunction_987,
    MyNordic_initialized_TestCase_initialized_eqFunction_988,
    MyNordic_initialized_TestCase_initialized_eqFunction_989,
    MyNordic_initialized_TestCase_initialized_eqFunction_990,
    MyNordic_initialized_TestCase_initialized_eqFunction_991,
    MyNordic_initialized_TestCase_initialized_eqFunction_992,
    MyNordic_initialized_TestCase_initialized_eqFunction_993,
    MyNordic_initialized_TestCase_initialized_eqFunction_994,
    MyNordic_initialized_TestCase_initialized_eqFunction_995,
    MyNordic_initialized_TestCase_initialized_eqFunction_996,
    MyNordic_initialized_TestCase_initialized_eqFunction_997,
    MyNordic_initialized_TestCase_initialized_eqFunction_998,
    MyNordic_initialized_TestCase_initialized_eqFunction_999,
    MyNordic_initialized_TestCase_initialized_eqFunction_1000,
    MyNordic_initialized_TestCase_initialized_eqFunction_1001,
    MyNordic_initialized_TestCase_initialized_eqFunction_1002,
    MyNordic_initialized_TestCase_initialized_eqFunction_1003,
    MyNordic_initialized_TestCase_initialized_eqFunction_1004,
    MyNordic_initialized_TestCase_initialized_eqFunction_1005,
    MyNordic_initialized_TestCase_initialized_eqFunction_1006,
    MyNordic_initialized_TestCase_initialized_eqFunction_1007,
    MyNordic_initialized_TestCase_initialized_eqFunction_1008,
    MyNordic_initialized_TestCase_initialized_eqFunction_1009,
    MyNordic_initialized_TestCase_initialized_eqFunction_1010,
    MyNordic_initialized_TestCase_initialized_eqFunction_1011,
    MyNordic_initialized_TestCase_initialized_eqFunction_1012,
    MyNordic_initialized_TestCase_initialized_eqFunction_1013,
    MyNordic_initialized_TestCase_initialized_eqFunction_1014,
    MyNordic_initialized_TestCase_initialized_eqFunction_1015,
    MyNordic_initialized_TestCase_initialized_eqFunction_1016,
    MyNordic_initialized_TestCase_initialized_eqFunction_1017,
    MyNordic_initialized_TestCase_initialized_eqFunction_1018,
    MyNordic_initialized_TestCase_initialized_eqFunction_1019,
    MyNordic_initialized_TestCase_initialized_eqFunction_1020,
    MyNordic_initialized_TestCase_initialized_eqFunction_1021,
    MyNordic_initialized_TestCase_initialized_eqFunction_1022,
    MyNordic_initialized_TestCase_initialized_eqFunction_1023,
    MyNordic_initialized_TestCase_initialized_eqFunction_1024,
    MyNordic_initialized_TestCase_initialized_eqFunction_1025,
    MyNordic_initialized_TestCase_initialized_eqFunction_1026,
    MyNordic_initialized_TestCase_initialized_eqFunction_1027,
    MyNordic_initialized_TestCase_initialized_eqFunction_1028,
    MyNordic_initialized_TestCase_initialized_eqFunction_1029,
    MyNordic_initialized_TestCase_initialized_eqFunction_1030,
    MyNordic_initialized_TestCase_initialized_eqFunction_1031,
    MyNordic_initialized_TestCase_initialized_eqFunction_1032,
    MyNordic_initialized_TestCase_initialized_eqFunction_1033,
    MyNordic_initialized_TestCase_initialized_eqFunction_1034,
    MyNordic_initialized_TestCase_initialized_eqFunction_1035,
    MyNordic_initialized_TestCase_initialized_eqFunction_1036,
    MyNordic_initialized_TestCase_initialized_eqFunction_1037,
    MyNordic_initialized_TestCase_initialized_eqFunction_1038,
    MyNordic_initialized_TestCase_initialized_eqFunction_1039,
    MyNordic_initialized_TestCase_initialized_eqFunction_1040,
    MyNordic_initialized_TestCase_initialized_eqFunction_1041,
    MyNordic_initialized_TestCase_initialized_eqFunction_1042,
    MyNordic_initialized_TestCase_initialized_eqFunction_1043,
    MyNordic_initialized_TestCase_initialized_eqFunction_1044,
    MyNordic_initialized_TestCase_initialized_eqFunction_1045,
    MyNordic_initialized_TestCase_initialized_eqFunction_1046,
    MyNordic_initialized_TestCase_initialized_eqFunction_1047,
    MyNordic_initialized_TestCase_initialized_eqFunction_1048,
    MyNordic_initialized_TestCase_initialized_eqFunction_1049,
    MyNordic_initialized_TestCase_initialized_eqFunction_1050,
    MyNordic_initialized_TestCase_initialized_eqFunction_1051,
    MyNordic_initialized_TestCase_initialized_eqFunction_1052,
    MyNordic_initialized_TestCase_initialized_eqFunction_1053,
    MyNordic_initialized_TestCase_initialized_eqFunction_1054,
    MyNordic_initialized_TestCase_initialized_eqFunction_1055,
    MyNordic_initialized_TestCase_initialized_eqFunction_1056,
    MyNordic_initialized_TestCase_initialized_eqFunction_1057,
    MyNordic_initialized_TestCase_initialized_eqFunction_1058,
    MyNordic_initialized_TestCase_initialized_eqFunction_1059,
    MyNordic_initialized_TestCase_initialized_eqFunction_1060,
    MyNordic_initialized_TestCase_initialized_eqFunction_1061,
    MyNordic_initialized_TestCase_initialized_eqFunction_1062,
    MyNordic_initialized_TestCase_initialized_eqFunction_1063,
    MyNordic_initialized_TestCase_initialized_eqFunction_1064,
    MyNordic_initialized_TestCase_initialized_eqFunction_1065,
    MyNordic_initialized_TestCase_initialized_eqFunction_1066,
    MyNordic_initialized_TestCase_initialized_eqFunction_1067,
    MyNordic_initialized_TestCase_initialized_eqFunction_1068,
    MyNordic_initialized_TestCase_initialized_eqFunction_1069,
    MyNordic_initialized_TestCase_initialized_eqFunction_1070,
    MyNordic_initialized_TestCase_initialized_eqFunction_1071,
    MyNordic_initialized_TestCase_initialized_eqFunction_1072,
    MyNordic_initialized_TestCase_initialized_eqFunction_1073,
    MyNordic_initialized_TestCase_initialized_eqFunction_1074,
    MyNordic_initialized_TestCase_initialized_eqFunction_1075,
    MyNordic_initialized_TestCase_initialized_eqFunction_1076,
    MyNordic_initialized_TestCase_initialized_eqFunction_1077,
    MyNordic_initialized_TestCase_initialized_eqFunction_1078,
    MyNordic_initialized_TestCase_initialized_eqFunction_1079,
    MyNordic_initialized_TestCase_initialized_eqFunction_1080,
    MyNordic_initialized_TestCase_initialized_eqFunction_1081,
    MyNordic_initialized_TestCase_initialized_eqFunction_1082,
    MyNordic_initialized_TestCase_initialized_eqFunction_1083,
    MyNordic_initialized_TestCase_initialized_eqFunction_1084,
    MyNordic_initialized_TestCase_initialized_eqFunction_1085,
    MyNordic_initialized_TestCase_initialized_eqFunction_1086,
    MyNordic_initialized_TestCase_initialized_eqFunction_1087,
    MyNordic_initialized_TestCase_initialized_eqFunction_1088,
    MyNordic_initialized_TestCase_initialized_eqFunction_1089,
    MyNordic_initialized_TestCase_initialized_eqFunction_1090,
    MyNordic_initialized_TestCase_initialized_eqFunction_1091,
    MyNordic_initialized_TestCase_initialized_eqFunction_1092,
    MyNordic_initialized_TestCase_initialized_eqFunction_1093,
    MyNordic_initialized_TestCase_initialized_eqFunction_1094,
    MyNordic_initialized_TestCase_initialized_eqFunction_1095,
    MyNordic_initialized_TestCase_initialized_eqFunction_1096,
    MyNordic_initialized_TestCase_initialized_eqFunction_1097,
    MyNordic_initialized_TestCase_initialized_eqFunction_1098,
    MyNordic_initialized_TestCase_initialized_eqFunction_1099,
    MyNordic_initialized_TestCase_initialized_eqFunction_1100,
    MyNordic_initialized_TestCase_initialized_eqFunction_1101,
    MyNordic_initialized_TestCase_initialized_eqFunction_1102,
    MyNordic_initialized_TestCase_initialized_eqFunction_1103,
    MyNordic_initialized_TestCase_initialized_eqFunction_1104,
    MyNordic_initialized_TestCase_initialized_eqFunction_1105,
    MyNordic_initialized_TestCase_initialized_eqFunction_1106,
    MyNordic_initialized_TestCase_initialized_eqFunction_1107,
    MyNordic_initialized_TestCase_initialized_eqFunction_1108,
    MyNordic_initialized_TestCase_initialized_eqFunction_1109,
    MyNordic_initialized_TestCase_initialized_eqFunction_1110,
    MyNordic_initialized_TestCase_initialized_eqFunction_1111,
    MyNordic_initialized_TestCase_initialized_eqFunction_1112,
    MyNordic_initialized_TestCase_initialized_eqFunction_1113,
    MyNordic_initialized_TestCase_initialized_eqFunction_1114,
    MyNordic_initialized_TestCase_initialized_eqFunction_1115,
    MyNordic_initialized_TestCase_initialized_eqFunction_1116,
    MyNordic_initialized_TestCase_initialized_eqFunction_1117,
    MyNordic_initialized_TestCase_initialized_eqFunction_1118,
    MyNordic_initialized_TestCase_initialized_eqFunction_1119,
    MyNordic_initialized_TestCase_initialized_eqFunction_1120,
    MyNordic_initialized_TestCase_initialized_eqFunction_1121,
    MyNordic_initialized_TestCase_initialized_eqFunction_1122,
    MyNordic_initialized_TestCase_initialized_eqFunction_1123,
    MyNordic_initialized_TestCase_initialized_eqFunction_1124,
    MyNordic_initialized_TestCase_initialized_eqFunction_1125,
    MyNordic_initialized_TestCase_initialized_eqFunction_1126,
    MyNordic_initialized_TestCase_initialized_eqFunction_1127,
    MyNordic_initialized_TestCase_initialized_eqFunction_1128,
    MyNordic_initialized_TestCase_initialized_eqFunction_1129,
    MyNordic_initialized_TestCase_initialized_eqFunction_1130,
    MyNordic_initialized_TestCase_initialized_eqFunction_1131,
    MyNordic_initialized_TestCase_initialized_eqFunction_1132,
    MyNordic_initialized_TestCase_initialized_eqFunction_1133,
    MyNordic_initialized_TestCase_initialized_eqFunction_1134,
    MyNordic_initialized_TestCase_initialized_eqFunction_1135,
    MyNordic_initialized_TestCase_initialized_eqFunction_1136,
    MyNordic_initialized_TestCase_initialized_eqFunction_1137,
    MyNordic_initialized_TestCase_initialized_eqFunction_1138,
    MyNordic_initialized_TestCase_initialized_eqFunction_1139,
    MyNordic_initialized_TestCase_initialized_eqFunction_1140,
    MyNordic_initialized_TestCase_initialized_eqFunction_1141,
    MyNordic_initialized_TestCase_initialized_eqFunction_1142,
    MyNordic_initialized_TestCase_initialized_eqFunction_1143,
    MyNordic_initialized_TestCase_initialized_eqFunction_1144,
    MyNordic_initialized_TestCase_initialized_eqFunction_1145,
    MyNordic_initialized_TestCase_initialized_eqFunction_1146,
    MyNordic_initialized_TestCase_initialized_eqFunction_1147,
    MyNordic_initialized_TestCase_initialized_eqFunction_1148,
    MyNordic_initialized_TestCase_initialized_eqFunction_1149,
    MyNordic_initialized_TestCase_initialized_eqFunction_1150,
    MyNordic_initialized_TestCase_initialized_eqFunction_1151,
    MyNordic_initialized_TestCase_initialized_eqFunction_1152,
    MyNordic_initialized_TestCase_initialized_eqFunction_1153,
    MyNordic_initialized_TestCase_initialized_eqFunction_1154,
    MyNordic_initialized_TestCase_initialized_eqFunction_1155,
    MyNordic_initialized_TestCase_initialized_eqFunction_1156,
    MyNordic_initialized_TestCase_initialized_eqFunction_1157,
    MyNordic_initialized_TestCase_initialized_eqFunction_1158,
    MyNordic_initialized_TestCase_initialized_eqFunction_1159,
    MyNordic_initialized_TestCase_initialized_eqFunction_1160,
    MyNordic_initialized_TestCase_initialized_eqFunction_1161,
    MyNordic_initialized_TestCase_initialized_eqFunction_1162,
    MyNordic_initialized_TestCase_initialized_eqFunction_1163,
    MyNordic_initialized_TestCase_initialized_eqFunction_1164,
    MyNordic_initialized_TestCase_initialized_eqFunction_1165,
    MyNordic_initialized_TestCase_initialized_eqFunction_1166,
    MyNordic_initialized_TestCase_initialized_eqFunction_1167,
    MyNordic_initialized_TestCase_initialized_eqFunction_1168,
    MyNordic_initialized_TestCase_initialized_eqFunction_1169,
    MyNordic_initialized_TestCase_initialized_eqFunction_1170,
    MyNordic_initialized_TestCase_initialized_eqFunction_1171,
    MyNordic_initialized_TestCase_initialized_eqFunction_1172,
    MyNordic_initialized_TestCase_initialized_eqFunction_1173,
    MyNordic_initialized_TestCase_initialized_eqFunction_1174,
    MyNordic_initialized_TestCase_initialized_eqFunction_1175,
    MyNordic_initialized_TestCase_initialized_eqFunction_1176,
    MyNordic_initialized_TestCase_initialized_eqFunction_1177,
    MyNordic_initialized_TestCase_initialized_eqFunction_1178,
    MyNordic_initialized_TestCase_initialized_eqFunction_1179,
    MyNordic_initialized_TestCase_initialized_eqFunction_1180,
    MyNordic_initialized_TestCase_initialized_eqFunction_1181,
    MyNordic_initialized_TestCase_initialized_eqFunction_1182,
    MyNordic_initialized_TestCase_initialized_eqFunction_1183,
    MyNordic_initialized_TestCase_initialized_eqFunction_1184,
    MyNordic_initialized_TestCase_initialized_eqFunction_1185,
    MyNordic_initialized_TestCase_initialized_eqFunction_1186,
    MyNordic_initialized_TestCase_initialized_eqFunction_1187,
    MyNordic_initialized_TestCase_initialized_eqFunction_1188,
    MyNordic_initialized_TestCase_initialized_eqFunction_1189,
    MyNordic_initialized_TestCase_initialized_eqFunction_1190,
    MyNordic_initialized_TestCase_initialized_eqFunction_1191,
    MyNordic_initialized_TestCase_initialized_eqFunction_1192,
    MyNordic_initialized_TestCase_initialized_eqFunction_1193,
    MyNordic_initialized_TestCase_initialized_eqFunction_1194,
    MyNordic_initialized_TestCase_initialized_eqFunction_1195,
    MyNordic_initialized_TestCase_initialized_eqFunction_1196,
    MyNordic_initialized_TestCase_initialized_eqFunction_1197,
    MyNordic_initialized_TestCase_initialized_eqFunction_1198,
    MyNordic_initialized_TestCase_initialized_eqFunction_1199,
    MyNordic_initialized_TestCase_initialized_eqFunction_1200,
    MyNordic_initialized_TestCase_initialized_eqFunction_1201,
    MyNordic_initialized_TestCase_initialized_eqFunction_1202,
    MyNordic_initialized_TestCase_initialized_eqFunction_1203,
    MyNordic_initialized_TestCase_initialized_eqFunction_1204,
    MyNordic_initialized_TestCase_initialized_eqFunction_1205,
    MyNordic_initialized_TestCase_initialized_eqFunction_1206,
    MyNordic_initialized_TestCase_initialized_eqFunction_1207,
    MyNordic_initialized_TestCase_initialized_eqFunction_1208,
    MyNordic_initialized_TestCase_initialized_eqFunction_1209,
    MyNordic_initialized_TestCase_initialized_eqFunction_1210,
    MyNordic_initialized_TestCase_initialized_eqFunction_1211,
    MyNordic_initialized_TestCase_initialized_eqFunction_1212,
    MyNordic_initialized_TestCase_initialized_eqFunction_1213,
    MyNordic_initialized_TestCase_initialized_eqFunction_1214,
    MyNordic_initialized_TestCase_initialized_eqFunction_1215,
    MyNordic_initialized_TestCase_initialized_eqFunction_1216,
    MyNordic_initialized_TestCase_initialized_eqFunction_1217,
    MyNordic_initialized_TestCase_initialized_eqFunction_1218,
    MyNordic_initialized_TestCase_initialized_eqFunction_1219,
    MyNordic_initialized_TestCase_initialized_eqFunction_1220,
    MyNordic_initialized_TestCase_initialized_eqFunction_1221,
    MyNordic_initialized_TestCase_initialized_eqFunction_1222,
    MyNordic_initialized_TestCase_initialized_eqFunction_1223,
    MyNordic_initialized_TestCase_initialized_eqFunction_1224,
    MyNordic_initialized_TestCase_initialized_eqFunction_1225,
    MyNordic_initialized_TestCase_initialized_eqFunction_1226,
    MyNordic_initialized_TestCase_initialized_eqFunction_1227,
    MyNordic_initialized_TestCase_initialized_eqFunction_1228,
    MyNordic_initialized_TestCase_initialized_eqFunction_1229,
    MyNordic_initialized_TestCase_initialized_eqFunction_1230,
    MyNordic_initialized_TestCase_initialized_eqFunction_1231,
    MyNordic_initialized_TestCase_initialized_eqFunction_1232,
    MyNordic_initialized_TestCase_initialized_eqFunction_1233,
    MyNordic_initialized_TestCase_initialized_eqFunction_1234,
    MyNordic_initialized_TestCase_initialized_eqFunction_1235,
    MyNordic_initialized_TestCase_initialized_eqFunction_1236,
    MyNordic_initialized_TestCase_initialized_eqFunction_1237,
    MyNordic_initialized_TestCase_initialized_eqFunction_1238,
    MyNordic_initialized_TestCase_initialized_eqFunction_1239,
    MyNordic_initialized_TestCase_initialized_eqFunction_1240,
    MyNordic_initialized_TestCase_initialized_eqFunction_1241,
    MyNordic_initialized_TestCase_initialized_eqFunction_1242,
    MyNordic_initialized_TestCase_initialized_eqFunction_1243,
    MyNordic_initialized_TestCase_initialized_eqFunction_1244,
    MyNordic_initialized_TestCase_initialized_eqFunction_1245,
    MyNordic_initialized_TestCase_initialized_eqFunction_1246,
    MyNordic_initialized_TestCase_initialized_eqFunction_1247,
    MyNordic_initialized_TestCase_initialized_eqFunction_1248,
    MyNordic_initialized_TestCase_initialized_eqFunction_1249,
    MyNordic_initialized_TestCase_initialized_eqFunction_1250,
    MyNordic_initialized_TestCase_initialized_eqFunction_1251,
    MyNordic_initialized_TestCase_initialized_eqFunction_1252,
    MyNordic_initialized_TestCase_initialized_eqFunction_1253,
    MyNordic_initialized_TestCase_initialized_eqFunction_1254,
    MyNordic_initialized_TestCase_initialized_eqFunction_1255,
    MyNordic_initialized_TestCase_initialized_eqFunction_1256,
    MyNordic_initialized_TestCase_initialized_eqFunction_1257,
    MyNordic_initialized_TestCase_initialized_eqFunction_1258,
    MyNordic_initialized_TestCase_initialized_eqFunction_1259,
    MyNordic_initialized_TestCase_initialized_eqFunction_1260,
    MyNordic_initialized_TestCase_initialized_eqFunction_1261,
    MyNordic_initialized_TestCase_initialized_eqFunction_1262,
    MyNordic_initialized_TestCase_initialized_eqFunction_1263,
    MyNordic_initialized_TestCase_initialized_eqFunction_1264,
    MyNordic_initialized_TestCase_initialized_eqFunction_1265,
    MyNordic_initialized_TestCase_initialized_eqFunction_1266,
    MyNordic_initialized_TestCase_initialized_eqFunction_1267,
    MyNordic_initialized_TestCase_initialized_eqFunction_1268,
    MyNordic_initialized_TestCase_initialized_eqFunction_1269,
    MyNordic_initialized_TestCase_initialized_eqFunction_1270,
    MyNordic_initialized_TestCase_initialized_eqFunction_1271,
    MyNordic_initialized_TestCase_initialized_eqFunction_1272,
    MyNordic_initialized_TestCase_initialized_eqFunction_1273,
    MyNordic_initialized_TestCase_initialized_eqFunction_1274,
    MyNordic_initialized_TestCase_initialized_eqFunction_1275,
    MyNordic_initialized_TestCase_initialized_eqFunction_1276,
    MyNordic_initialized_TestCase_initialized_eqFunction_1277,
    MyNordic_initialized_TestCase_initialized_eqFunction_1278,
    MyNordic_initialized_TestCase_initialized_eqFunction_1279,
    MyNordic_initialized_TestCase_initialized_eqFunction_1280,
    MyNordic_initialized_TestCase_initialized_eqFunction_1281,
    MyNordic_initialized_TestCase_initialized_eqFunction_1282,
    MyNordic_initialized_TestCase_initialized_eqFunction_1283,
    MyNordic_initialized_TestCase_initialized_eqFunction_1284,
    MyNordic_initialized_TestCase_initialized_eqFunction_1285,
    MyNordic_initialized_TestCase_initialized_eqFunction_1286,
    MyNordic_initialized_TestCase_initialized_eqFunction_1287,
    MyNordic_initialized_TestCase_initialized_eqFunction_1288,
    MyNordic_initialized_TestCase_initialized_eqFunction_1289,
    MyNordic_initialized_TestCase_initialized_eqFunction_1290,
    MyNordic_initialized_TestCase_initialized_eqFunction_1291,
    MyNordic_initialized_TestCase_initialized_eqFunction_1292,
    MyNordic_initialized_TestCase_initialized_eqFunction_1293,
    MyNordic_initialized_TestCase_initialized_eqFunction_1294,
    MyNordic_initialized_TestCase_initialized_eqFunction_1295,
    MyNordic_initialized_TestCase_initialized_eqFunction_1296,
    MyNordic_initialized_TestCase_initialized_eqFunction_1297,
    MyNordic_initialized_TestCase_initialized_eqFunction_1298,
    MyNordic_initialized_TestCase_initialized_eqFunction_1299,
    MyNordic_initialized_TestCase_initialized_eqFunction_1300,
    MyNordic_initialized_TestCase_initialized_eqFunction_1301,
    MyNordic_initialized_TestCase_initialized_eqFunction_1302,
    MyNordic_initialized_TestCase_initialized_eqFunction_1303,
    MyNordic_initialized_TestCase_initialized_eqFunction_1304,
    MyNordic_initialized_TestCase_initialized_eqFunction_1305,
    MyNordic_initialized_TestCase_initialized_eqFunction_1306,
    MyNordic_initialized_TestCase_initialized_eqFunction_1307,
    MyNordic_initialized_TestCase_initialized_eqFunction_1308,
    MyNordic_initialized_TestCase_initialized_eqFunction_1309,
    MyNordic_initialized_TestCase_initialized_eqFunction_1310,
    MyNordic_initialized_TestCase_initialized_eqFunction_1311,
    MyNordic_initialized_TestCase_initialized_eqFunction_1312,
    MyNordic_initialized_TestCase_initialized_eqFunction_1313,
    MyNordic_initialized_TestCase_initialized_eqFunction_1314,
    MyNordic_initialized_TestCase_initialized_eqFunction_1315,
    MyNordic_initialized_TestCase_initialized_eqFunction_1316,
    MyNordic_initialized_TestCase_initialized_eqFunction_1317,
    MyNordic_initialized_TestCase_initialized_eqFunction_1318,
    MyNordic_initialized_TestCase_initialized_eqFunction_1319,
    MyNordic_initialized_TestCase_initialized_eqFunction_1320,
    MyNordic_initialized_TestCase_initialized_eqFunction_1321,
    MyNordic_initialized_TestCase_initialized_eqFunction_1322,
    MyNordic_initialized_TestCase_initialized_eqFunction_1323,
    MyNordic_initialized_TestCase_initialized_eqFunction_1324,
    MyNordic_initialized_TestCase_initialized_eqFunction_1325,
    MyNordic_initialized_TestCase_initialized_eqFunction_1326,
    MyNordic_initialized_TestCase_initialized_eqFunction_1327,
    MyNordic_initialized_TestCase_initialized_eqFunction_1328,
    MyNordic_initialized_TestCase_initialized_eqFunction_1329,
    MyNordic_initialized_TestCase_initialized_eqFunction_1330,
    MyNordic_initialized_TestCase_initialized_eqFunction_1331,
    MyNordic_initialized_TestCase_initialized_eqFunction_1332,
    MyNordic_initialized_TestCase_initialized_eqFunction_1333,
    MyNordic_initialized_TestCase_initialized_eqFunction_1334,
    MyNordic_initialized_TestCase_initialized_eqFunction_1335,
    MyNordic_initialized_TestCase_initialized_eqFunction_1336,
    MyNordic_initialized_TestCase_initialized_eqFunction_1337,
    MyNordic_initialized_TestCase_initialized_eqFunction_1338,
    MyNordic_initialized_TestCase_initialized_eqFunction_1339,
    MyNordic_initialized_TestCase_initialized_eqFunction_1340,
    MyNordic_initialized_TestCase_initialized_eqFunction_1341,
    MyNordic_initialized_TestCase_initialized_eqFunction_1342,
    MyNordic_initialized_TestCase_initialized_eqFunction_1343,
    MyNordic_initialized_TestCase_initialized_eqFunction_1344,
    MyNordic_initialized_TestCase_initialized_eqFunction_1345,
    MyNordic_initialized_TestCase_initialized_eqFunction_1346,
    MyNordic_initialized_TestCase_initialized_eqFunction_1347,
    MyNordic_initialized_TestCase_initialized_eqFunction_1348,
    MyNordic_initialized_TestCase_initialized_eqFunction_1349,
    MyNordic_initialized_TestCase_initialized_eqFunction_1350,
    MyNordic_initialized_TestCase_initialized_eqFunction_1351,
    MyNordic_initialized_TestCase_initialized_eqFunction_1352,
    MyNordic_initialized_TestCase_initialized_eqFunction_1353,
    MyNordic_initialized_TestCase_initialized_eqFunction_1354,
    MyNordic_initialized_TestCase_initialized_eqFunction_1355,
    MyNordic_initialized_TestCase_initialized_eqFunction_1356,
    MyNordic_initialized_TestCase_initialized_eqFunction_1357,
    MyNordic_initialized_TestCase_initialized_eqFunction_1358,
    MyNordic_initialized_TestCase_initialized_eqFunction_1359,
    MyNordic_initialized_TestCase_initialized_eqFunction_1360,
    MyNordic_initialized_TestCase_initialized_eqFunction_1361,
    MyNordic_initialized_TestCase_initialized_eqFunction_1362,
    MyNordic_initialized_TestCase_initialized_eqFunction_1363,
    MyNordic_initialized_TestCase_initialized_eqFunction_1364,
    MyNordic_initialized_TestCase_initialized_eqFunction_1365,
    MyNordic_initialized_TestCase_initialized_eqFunction_1366,
    MyNordic_initialized_TestCase_initialized_eqFunction_1367,
    MyNordic_initialized_TestCase_initialized_eqFunction_1368,
    MyNordic_initialized_TestCase_initialized_eqFunction_1369,
    MyNordic_initialized_TestCase_initialized_eqFunction_1370,
    MyNordic_initialized_TestCase_initialized_eqFunction_1371,
    MyNordic_initialized_TestCase_initialized_eqFunction_1372,
    MyNordic_initialized_TestCase_initialized_eqFunction_1373,
    MyNordic_initialized_TestCase_initialized_eqFunction_1374
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif